#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 586
#define SYMBOL_COUNT 240
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
  anon_sym_LBRACK = 18,
  anon_sym_RBRACK = 19,
  anon_sym_DASH = 20,
  anon_sym_AT = 21,
  anon_sym__ = 22,
  anon_sym_foreign = 23,
  sym_foreign_export = 24,
  anon_sym_ccall = 25,
  anon_sym_stdcall = 26,
  anon_sym_cplusplus = 27,
  anon_sym_jvm = 28,
  anon_sym_dotnet = 29,
  anon_sym_unsafe = 30,
  anon_sym_safe = 31,
  anon_sym_default = 32,
  anon_sym_do = 33,
  anon_sym_class = 34,
  anon_sym_instance = 35,
  anon_sym_infixl = 36,
  anon_sym_infixr = 37,
  anon_sym_infix = 38,
  anon_sym_BQUOTE = 39,
  anon_sym_COLON = 40,
  anon_sym_COLON_COLON = 41,
  anon_sym_DASH_GT = 42,
  sym_unit_type = 43,
  sym_list_constructor = 44,
  sym_function_constructor = 45,
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
  sym_list_pattern = 143,
  sym_tuple_pattern = 144,
  sym_parenthesized_pattern = 145,
  sym__pattern = 146,
  sym_negative_literal = 147,
  sym_general_constructor = 148,
  sym_as_pattern = 149,
  sym_labels = 150,
  sym_label = 151,
  sym_wildcard = 152,
  sym__variable = 153,
  sym_qualified_variable_identifier = 154,
  sym__expression = 155,
  sym_foreign = 156,
  sym_foreign_import = 157,
  sym_calling_convention = 158,
  sym_safety = 159,
  sym_default = 160,
  sym_do_expression = 161,
  sym_statement_list = 162,
  sym__statement = 163,
  sym_type_class = 164,
  sym_general_declarations = 165,
  sym_type_class_instance = 166,
  sym__general_declaration = 167,
  sym_fixity = 168,
  sym__op = 169,
  sym_variable_symbol = 170,
  sym_constructor_symbol = 171,
  sym_type_signature = 172,
  sym_type = 173,
  sym__generic_type_constructor = 174,
  sym_tupling_constructor = 175,
  sym_tuple = 176,
  sym_list = 177,
  sym_parenthesized_constructor = 178,
  sym_algebraic_datatype = 179,
  sym_context = 180,
  sym_class = 181,
  sym_constructors = 182,
  sym_constructor = 183,
  sym_deriving = 184,
  sym_newtype = 185,
  sym_new_constructor = 186,
  sym_field = 187,
  sym_strict = 188,
  sym_type_synonym = 189,
  sym__literal = 190,
  sym__identifier = 191,
  sym_simple_type = 192,
  sym_variable_identifier = 193,
  sym_constructor_identifier = 194,
  sym__type_constructors = 195,
  sym_qualified_type_constructor = 196,
  sym_integer = 197,
  sym_char = 198,
  sym_string = 199,
  sym__gap = 200,
  sym__graphic = 201,
  sym__small = 202,
  sym__large = 203,
  sym__symbol = 204,
  sym__variable_symbol = 205,
  sym__constructor_symbol = 206,
  sym__special = 207,
  sym__escape = 208,
  sym__char_escape = 209,
  sym__ascii = 210,
  sym__cntrl = 211,
  sym_fields = 212,
  aux_sym_module_repeat1 = 213,
  aux_sym_module_exports_repeat1 = 214,
  aux_sym_export_repeat1 = 215,
  aux_sym_import_specification_repeat1 = 216,
  aux_sym_function_head_repeat1 = 217,
  aux_sym_function_body_repeat1 = 218,
  aux_sym_tuple_pattern_repeat1 = 219,
  aux_sym_general_constructor_repeat1 = 220,
  aux_sym_labels_repeat1 = 221,
  aux_sym_statement_list_repeat1 = 222,
  aux_sym_type_class_repeat1 = 223,
  aux_sym_general_declarations_repeat1 = 224,
  aux_sym_fixity_repeat1 = 225,
  aux_sym_variable_symbol_repeat1 = 226,
  aux_sym_constructor_symbol_repeat1 = 227,
  aux_sym_tupling_constructor_repeat1 = 228,
  aux_sym_tuple_repeat1 = 229,
  aux_sym_list_repeat1 = 230,
  aux_sym_context_repeat1 = 231,
  aux_sym_constructors_repeat1 = 232,
  aux_sym_constructor_repeat1 = 233,
  aux_sym_field_repeat1 = 234,
  aux_sym_qualified_type_constructor_repeat1 = 235,
  aux_sym_string_repeat1 = 236,
  aux_sym__escape_repeat1 = 237,
  aux_sym__escape_repeat2 = 238,
  aux_sym_fields_repeat1 = 239,
  alias_sym_type_constructor = 240,
  alias_sym_type_variable = 241,
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
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
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
  [sym_list_pattern] = "list_pattern",
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
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
  [sym_list_pattern] = {
    .visible = true,
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
      if (lookahead == ']')
        ADVANCE(160);
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
      if (lookahead == ']')
        ADVANCE(75);
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
      if (lookahead == ']')
        ADVANCE(160);
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
        ADVANCE(475);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(476);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(477);
      if (lookahead == '_')
        ADVANCE(478);
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
        ADVANCE(72);
      if (lookahead == '\\')
        ADVANCE(473);
      if (lookahead == '_')
        ADVANCE(474);
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
      if (lookahead == 'n')
        ADVANCE(471);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 474:
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
    case 475:
      if (lookahead == '\n')
        ADVANCE(471);
      if (lookahead == '\r')
        ADVANCE(475);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(476);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(477);
      if (lookahead == '_')
        ADVANCE(478);
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
    case 476:
      if (lookahead == '-')
        ADVANCE(29);
      if (lookahead == '>')
        ADVANCE(115);
      END_STATE();
    case 477:
      if (lookahead == 'n')
        SKIP(470);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '\'')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 479:
      if (lookahead == '\n')
        ADVANCE(480);
      if (lookahead == '\r')
        ADVANCE(482);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(483);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(479);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 480:
      if (lookahead == '\n')
        ADVANCE(480);
      if (lookahead == '\r')
        ADVANCE(480);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(481);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(480);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 481:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(480);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 482:
      if (lookahead == '\n')
        ADVANCE(480);
      if (lookahead == '\r')
        ADVANCE(482);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(483);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(479);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 483:
      if (lookahead == 'n')
        SKIP(479);
      END_STATE();
    case 484:
      if (lookahead == '\n')
        ADVANCE(485);
      if (lookahead == '\r')
        ADVANCE(487);
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
        SKIP(488);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(484);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 485:
      if (lookahead == '\n')
        ADVANCE(485);
      if (lookahead == '\r')
        ADVANCE(485);
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
        ADVANCE(486);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(485);
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
    case 486:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(485);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 487:
      if (lookahead == '\n')
        ADVANCE(485);
      if (lookahead == '\r')
        ADVANCE(487);
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
        SKIP(488);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(484);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 488:
      if (lookahead == 'n')
        SKIP(484);
      END_STATE();
    case 489:
      if (lookahead == '\t')
        SKIP(489);
      if (lookahead == '\n')
        ADVANCE(490);
      if (lookahead == '\r')
        ADVANCE(495);
      if (lookahead == ' ')
        ADVANCE(496);
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
        ADVANCE(497);
      if (lookahead == '\\')
        ADVANCE(498);
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
        ADVANCE(499);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 490:
      if (lookahead == '\t')
        ADVANCE(490);
      if (lookahead == '\n')
        ADVANCE(490);
      if (lookahead == '\r')
        ADVANCE(490);
      if (lookahead == ' ')
        ADVANCE(491);
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
        ADVANCE(492);
      if (lookahead == '\\')
        ADVANCE(493);
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
        ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(490);
      if (lookahead == '\n')
        ADVANCE(490);
      if (lookahead == '\r')
        ADVANCE(490);
      if (lookahead == ' ')
        ADVANCE(491);
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
        ADVANCE(492);
      if (lookahead == '\\')
        ADVANCE(493);
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
        ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(490);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 495:
      if (lookahead == '\t')
        SKIP(489);
      if (lookahead == '\n')
        ADVANCE(490);
      if (lookahead == '\r')
        ADVANCE(495);
      if (lookahead == ' ')
        ADVANCE(496);
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
        ADVANCE(497);
      if (lookahead == '\\')
        ADVANCE(498);
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
        ADVANCE(499);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      END_STATE();
    case 500:
      if (lookahead == '\t')
        ADVANCE(501);
      if (lookahead == '\n')
        ADVANCE(502);
      if (lookahead == 11)
        ADVANCE(97);
      if (lookahead == '\r')
        ADVANCE(507);
      if (lookahead == ' ')
        ADVANCE(496);
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
        ADVANCE(497);
      if (lookahead == '\\')
        ADVANCE(498);
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
        ADVANCE(499);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym__tab);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(503);
      if (lookahead == '\n')
        ADVANCE(502);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(504);
      if (lookahead == ' ')
        ADVANCE(505);
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
        ADVANCE(492);
      if (lookahead == '\\')
        ADVANCE(506);
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
        ADVANCE(494);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(503);
      if (lookahead == '\n')
        ADVANCE(502);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(504);
      if (lookahead == ' ')
        ADVANCE(505);
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
        ADVANCE(492);
      if (lookahead == '\\')
        ADVANCE(506);
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
        ADVANCE(494);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 504:
      if (lookahead == '\t')
        ADVANCE(503);
      if (lookahead == '\n')
        ADVANCE(502);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(504);
      if (lookahead == ' ')
        ADVANCE(505);
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
        ADVANCE(492);
      if (lookahead == '\\')
        ADVANCE(506);
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
        ADVANCE(494);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(503);
      if (lookahead == '\n')
        ADVANCE(502);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(504);
      if (lookahead == ' ')
        ADVANCE(505);
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
        ADVANCE(492);
      if (lookahead == '\\')
        ADVANCE(506);
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
        ADVANCE(494);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(504);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 507:
      if (lookahead == '\t')
        ADVANCE(501);
      if (lookahead == '\n')
        ADVANCE(502);
      if (lookahead == 11)
        ADVANCE(97);
      if (lookahead == '\r')
        ADVANCE(507);
      if (lookahead == ' ')
        ADVANCE(496);
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
        ADVANCE(497);
      if (lookahead == '\\')
        ADVANCE(498);
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
        ADVANCE(499);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 508:
      if (lookahead == '\n')
        ADVANCE(509);
      if (lookahead == '\r')
        ADVANCE(511);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(512);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(508);
      END_STATE();
    case 509:
      if (lookahead == '\n')
        ADVANCE(509);
      if (lookahead == '\r')
        ADVANCE(509);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(510);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(509);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 510:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(509);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 511:
      if (lookahead == '\n')
        ADVANCE(509);
      if (lookahead == '\r')
        ADVANCE(511);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(512);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(508);
      END_STATE();
    case 512:
      if (lookahead == 'n')
        SKIP(508);
      END_STATE();
    case 513:
      if (lookahead == '\n')
        ADVANCE(514);
      if (lookahead == '\r')
        ADVANCE(516);
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
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(517);
      if (lookahead == '_')
        ADVANCE(478);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(513);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 514:
      if (lookahead == '\n')
        ADVANCE(514);
      if (lookahead == '\r')
        ADVANCE(514);
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
        ADVANCE(72);
      if (lookahead == '\\')
        ADVANCE(515);
      if (lookahead == '_')
        ADVANCE(474);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(514);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 515:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(514);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 516:
      if (lookahead == '\n')
        ADVANCE(514);
      if (lookahead == '\r')
        ADVANCE(516);
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
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(517);
      if (lookahead == '_')
        ADVANCE(478);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(513);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 517:
      if (lookahead == 'n')
        SKIP(513);
      END_STATE();
    case 518:
      if (lookahead == '\n')
        ADVANCE(519);
      if (lookahead == '\r')
        ADVANCE(521);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(522);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(518);
      END_STATE();
    case 519:
      if (lookahead == '\n')
        ADVANCE(519);
      if (lookahead == '\r')
        ADVANCE(519);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(520);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(519);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 520:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(519);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 521:
      if (lookahead == '\n')
        ADVANCE(519);
      if (lookahead == '\r')
        ADVANCE(521);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(522);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(518);
      END_STATE();
    case 522:
      if (lookahead == 'n')
        SKIP(518);
      END_STATE();
    case 523:
      if (lookahead == '\n')
        ADVANCE(524);
      if (lookahead == '\r')
        ADVANCE(526);
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
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(527);
      if (lookahead == '_')
        ADVANCE(478);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(523);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 524:
      if (lookahead == '\n')
        ADVANCE(524);
      if (lookahead == '\r')
        ADVANCE(524);
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
        ADVANCE(72);
      if (lookahead == '\\')
        ADVANCE(525);
      if (lookahead == '_')
        ADVANCE(474);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(524);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 525:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(524);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 526:
      if (lookahead == '\n')
        ADVANCE(524);
      if (lookahead == '\r')
        ADVANCE(526);
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
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(527);
      if (lookahead == '_')
        ADVANCE(478);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(523);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 527:
      if (lookahead == 'n')
        SKIP(523);
      END_STATE();
    case 528:
      if (lookahead == '\n')
        ADVANCE(529);
      if (lookahead == '\r')
        ADVANCE(531);
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
        SKIP(532);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(528);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 529:
      if (lookahead == '\n')
        ADVANCE(529);
      if (lookahead == '\r')
        ADVANCE(529);
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
        ADVANCE(530);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(529);
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
    case 530:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(529);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 531:
      if (lookahead == '\n')
        ADVANCE(529);
      if (lookahead == '\r')
        ADVANCE(531);
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
        SKIP(532);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(528);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 532:
      if (lookahead == 'n')
        SKIP(528);
      END_STATE();
    case 533:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(534);
      if (lookahead == '\r')
        ADVANCE(536);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(537);
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
        SKIP(533);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 534:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(534);
      if (lookahead == '\r')
        ADVANCE(534);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == '\\')
        ADVANCE(535);
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
        ADVANCE(534);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      ADVANCE(8);
      END_STATE();
    case 535:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(534);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 536:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(534);
      if (lookahead == '\r')
        ADVANCE(536);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(537);
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
        SKIP(533);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 537:
      if (lookahead == 'n')
        SKIP(533);
      END_STATE();
    case 538:
      if (lookahead == '\n')
        ADVANCE(539);
      if (lookahead == '\r')
        ADVANCE(549);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(550);
      if (lookahead == 'a')
        ADVANCE(551);
      if (lookahead == 'h')
        ADVANCE(553);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(538);
      END_STATE();
    case 539:
      if (lookahead == '\n')
        ADVANCE(539);
      if (lookahead == '\r')
        ADVANCE(539);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(540);
      if (lookahead == 'a')
        ADVANCE(541);
      if (lookahead == 'h')
        ADVANCE(543);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(539);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 540:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(539);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 541:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(542);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 543:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(544);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 544:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(545);
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
      if (lookahead == 'n')
        ADVANCE(547);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 547:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(548);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_hiding);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 549:
      if (lookahead == '\n')
        ADVANCE(539);
      if (lookahead == '\r')
        ADVANCE(549);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(550);
      if (lookahead == 'a')
        ADVANCE(551);
      if (lookahead == 'h')
        ADVANCE(553);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(538);
      END_STATE();
    case 550:
      if (lookahead == 'n')
        SKIP(538);
      END_STATE();
    case 551:
      if (lookahead == 's')
        ADVANCE(552);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 553:
      if (lookahead == 'i')
        ADVANCE(554);
      END_STATE();
    case 554:
      if (lookahead == 'd')
        ADVANCE(555);
      END_STATE();
    case 555:
      if (lookahead == 'i')
        ADVANCE(556);
      END_STATE();
    case 556:
      if (lookahead == 'n')
        ADVANCE(557);
      END_STATE();
    case 557:
      if (lookahead == 'g')
        ADVANCE(558);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_hiding);
      END_STATE();
    case 559:
      if (lookahead == '\n')
        ADVANCE(560);
      if (lookahead == '\r')
        ADVANCE(563);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(476);
      if (lookahead == '.')
        ADVANCE(564);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '\\')
        SKIP(565);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(559);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 560:
      if (lookahead == '\n')
        ADVANCE(560);
      if (lookahead == '\r')
        ADVANCE(560);
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
        ADVANCE(561);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '\\')
        ADVANCE(562);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(560);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 561:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(32);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 562:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(560);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 563:
      if (lookahead == '\n')
        ADVANCE(560);
      if (lookahead == '\r')
        ADVANCE(563);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(476);
      if (lookahead == '.')
        ADVANCE(564);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '\\')
        SKIP(565);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(559);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 564:
      if (lookahead == '.')
        ADVANCE(117);
      END_STATE();
    case 565:
      if (lookahead == 'n')
        SKIP(559);
      END_STATE();
    case 566:
      if (lookahead == '\n')
        ADVANCE(567);
      if (lookahead == '\r')
        ADVANCE(570);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(571);
      if (lookahead == 'd')
        ADVANCE(572);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(566);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 567:
      if (lookahead == '\n')
        ADVANCE(567);
      if (lookahead == '\r')
        ADVANCE(567);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == '\\')
        ADVANCE(568);
      if (lookahead == 'd')
        ADVANCE(569);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(567);
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
    case 568:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(567);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 569:
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
    case 570:
      if (lookahead == '\n')
        ADVANCE(567);
      if (lookahead == '\r')
        ADVANCE(570);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(571);
      if (lookahead == 'd')
        ADVANCE(572);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(566);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 571:
      if (lookahead == 'n')
        SKIP(566);
      END_STATE();
    case 572:
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
    case 573:
      if (lookahead == '\n')
        ADVANCE(574);
      if (lookahead == '\r')
        ADVANCE(576);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(577);
      if (lookahead == 'd')
        ADVANCE(572);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(573);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 574:
      if (lookahead == '\n')
        ADVANCE(574);
      if (lookahead == '\r')
        ADVANCE(574);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == '\\')
        ADVANCE(575);
      if (lookahead == 'd')
        ADVANCE(569);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(574);
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
    case 575:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(574);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 576:
      if (lookahead == '\n')
        ADVANCE(574);
      if (lookahead == '\r')
        ADVANCE(576);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(577);
      if (lookahead == 'd')
        ADVANCE(572);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(573);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 577:
      if (lookahead == 'n')
        SKIP(573);
      END_STATE();
    case 578:
      if (lookahead == '\n')
        ADVANCE(579);
      if (lookahead == '\r')
        ADVANCE(586);
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
        SKIP(587);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == 'w')
        ADVANCE(588);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(578);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 579:
      if (lookahead == '\n')
        ADVANCE(579);
      if (lookahead == '\r')
        ADVANCE(579);
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
        ADVANCE(580);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == 'w')
        ADVANCE(581);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(579);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 580:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(579);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'h')
        ADVANCE(582);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(583);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
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
    case 586:
      if (lookahead == '\n')
        ADVANCE(579);
      if (lookahead == '\r')
        ADVANCE(586);
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
        SKIP(587);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == 'w')
        ADVANCE(588);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(578);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 587:
      if (lookahead == 'n')
        SKIP(578);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'h')
        ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'e')
        ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'r')
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
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '\'')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 593:
      if (lookahead == '\n')
        ADVANCE(594);
      if (lookahead == '\r')
        ADVANCE(596);
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
        SKIP(597);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(593);
      END_STATE();
    case 594:
      if (lookahead == '\n')
        ADVANCE(594);
      if (lookahead == '\r')
        ADVANCE(594);
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
        ADVANCE(595);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == 8902)
        ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(594);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 595:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(594);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 596:
      if (lookahead == '\n')
        ADVANCE(594);
      if (lookahead == '\r')
        ADVANCE(596);
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
        SKIP(597);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(593);
      END_STATE();
    case 597:
      if (lookahead == 'n')
        SKIP(593);
      END_STATE();
    case 598:
      if (lookahead == '\n')
        ADVANCE(599);
      if (lookahead == '\r')
        ADVANCE(601);
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
        SKIP(602);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(598);
      END_STATE();
    case 599:
      if (lookahead == '\n')
        ADVANCE(599);
      if (lookahead == '\r')
        ADVANCE(599);
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
        ADVANCE(600);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == 8902)
        ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(599);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 600:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(599);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 601:
      if (lookahead == '\n')
        ADVANCE(599);
      if (lookahead == '\r')
        ADVANCE(601);
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
        SKIP(602);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(598);
      END_STATE();
    case 602:
      if (lookahead == 'n')
        SKIP(598);
      END_STATE();
    case 603:
      if (lookahead == '\n')
        ADVANCE(604);
      if (lookahead == '\r')
        ADVANCE(606);
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
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(607);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '_')
        ADVANCE(478);
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
        SKIP(603);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 604:
      if (lookahead == '\n')
        ADVANCE(604);
      if (lookahead == '\r')
        ADVANCE(604);
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
        ADVANCE(72);
      if (lookahead == '\\')
        ADVANCE(605);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(474);
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
        ADVANCE(604);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 605:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(604);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 606:
      if (lookahead == '\n')
        ADVANCE(604);
      if (lookahead == '\r')
        ADVANCE(606);
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
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(607);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '_')
        ADVANCE(478);
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
        SKIP(603);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 607:
      if (lookahead == 'n')
        SKIP(603);
      END_STATE();
    case 608:
      if (lookahead == '\n')
        ADVANCE(609);
      if (lookahead == '\r')
        ADVANCE(611);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(612);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(608);
      END_STATE();
    case 609:
      if (lookahead == '\n')
        ADVANCE(609);
      if (lookahead == '\r')
        ADVANCE(609);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(610);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(609);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 610:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(609);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 611:
      if (lookahead == '\n')
        ADVANCE(609);
      if (lookahead == '\r')
        ADVANCE(611);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(612);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(608);
      END_STATE();
    case 612:
      if (lookahead == 'n')
        SKIP(608);
      END_STATE();
    case 613:
      if (lookahead == '\n')
        ADVANCE(614);
      if (lookahead == '\r')
        ADVANCE(624);
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
        SKIP(625);
      if (lookahead == 'd')
        ADVANCE(626);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(613);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 614:
      if (lookahead == '\n')
        ADVANCE(614);
      if (lookahead == '\r')
        ADVANCE(614);
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
        ADVANCE(615);
      if (lookahead == 'd')
        ADVANCE(616);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(614);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 615:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(614);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
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
      if (lookahead == 'v')
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
      if (lookahead == 'n')
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
      if (lookahead == 'g')
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
    case 624:
      if (lookahead == '\n')
        ADVANCE(614);
      if (lookahead == '\r')
        ADVANCE(624);
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
        SKIP(625);
      if (lookahead == 'd')
        ADVANCE(626);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(613);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 625:
      if (lookahead == 'n')
        SKIP(613);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'e')
        ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'r')
        ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'i')
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
      if (lookahead == 'v')
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
      if (lookahead == 'n')
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
      if (lookahead == 'g')
        ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '\'')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 634:
      if (lookahead == '\n')
        ADVANCE(635);
      if (lookahead == '\r')
        ADVANCE(645);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '\\')
        SKIP(646);
      if (lookahead == 'd')
        ADVANCE(647);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(634);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 635:
      if (lookahead == '\n')
        ADVANCE(635);
      if (lookahead == '\r')
        ADVANCE(635);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '\\')
        ADVANCE(636);
      if (lookahead == 'd')
        ADVANCE(637);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(635);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 636:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(635);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 637:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(638);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 638:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(639);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 639:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(640);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 640:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'v')
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
      if (lookahead == 'n')
        ADVANCE(643);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 643:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(644);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 645:
      if (lookahead == '\n')
        ADVANCE(635);
      if (lookahead == '\r')
        ADVANCE(645);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '\\')
        SKIP(646);
      if (lookahead == 'd')
        ADVANCE(647);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(634);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 646:
      if (lookahead == 'n')
        SKIP(634);
      END_STATE();
    case 647:
      if (lookahead == 'e')
        ADVANCE(648);
      END_STATE();
    case 648:
      if (lookahead == 'r')
        ADVANCE(649);
      END_STATE();
    case 649:
      if (lookahead == 'i')
        ADVANCE(650);
      END_STATE();
    case 650:
      if (lookahead == 'v')
        ADVANCE(651);
      END_STATE();
    case 651:
      if (lookahead == 'i')
        ADVANCE(652);
      END_STATE();
    case 652:
      if (lookahead == 'n')
        ADVANCE(653);
      END_STATE();
    case 653:
      if (lookahead == 'g')
        ADVANCE(654);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_deriving);
      END_STATE();
    case 655:
      if (lookahead == '\n')
        ADVANCE(656);
      if (lookahead == '\r')
        ADVANCE(658);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '\\')
        SKIP(659);
      if (lookahead == 'd')
        ADVANCE(626);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(655);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 656:
      if (lookahead == '\n')
        ADVANCE(656);
      if (lookahead == '\r')
        ADVANCE(656);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '\\')
        ADVANCE(657);
      if (lookahead == 'd')
        ADVANCE(616);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(656);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 657:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(656);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 658:
      if (lookahead == '\n')
        ADVANCE(656);
      if (lookahead == '\r')
        ADVANCE(658);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '\\')
        SKIP(659);
      if (lookahead == 'd')
        ADVANCE(626);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(655);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 659:
      if (lookahead == 'n')
        SKIP(655);
      END_STATE();
    case 660:
      if (lookahead == '\n')
        ADVANCE(661);
      if (lookahead == '\r')
        ADVANCE(713);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '&')
        ADVANCE(104);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == 'A')
        ADVANCE(714);
      if (lookahead == 'B')
        ADVANCE(717);
      if (lookahead == 'C')
        ADVANCE(721);
      if (lookahead == 'D')
        ADVANCE(725);
      if (lookahead == 'E')
        ADVANCE(735);
      if (lookahead == 'F')
        ADVANCE(746);
      if (lookahead == 'G')
        ADVANCE(749);
      if (lookahead == 'H')
        ADVANCE(750);
      if (lookahead == 'L')
        ADVANCE(751);
      if (lookahead == 'N')
        ADVANCE(752);
      if (lookahead == 'O')
        ADVANCE(753);
      if (lookahead == 'R')
        ADVANCE(754);
      if (lookahead == 'S')
        ADVANCE(755);
      if (lookahead == 'U')
        ADVANCE(756);
      if (lookahead == 'V')
        ADVANCE(757);
      if (lookahead == 'X')
        ADVANCE(758);
      if (lookahead == '\\')
        ADVANCE(498);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == 'a')
        ADVANCE(759);
      if (lookahead == 'b')
        ADVANCE(760);
      if (lookahead == 'f')
        ADVANCE(761);
      if (lookahead == 'n')
        ADVANCE(164);
      if (lookahead == 'o')
        ADVANCE(762);
      if (lookahead == 'r')
        ADVANCE(165);
      if (lookahead == 't')
        ADVANCE(166);
      if (lookahead == 'v')
        ADVANCE(167);
      if (lookahead == 'x')
        ADVANCE(763);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(660);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(499);
      END_STATE();
    case 661:
      if (lookahead == '\n')
        ADVANCE(661);
      if (lookahead == '\r')
        ADVANCE(661);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '&')
        ADVANCE(14);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == 'A')
        ADVANCE(662);
      if (lookahead == 'B')
        ADVANCE(665);
      if (lookahead == 'C')
        ADVANCE(669);
      if (lookahead == 'D')
        ADVANCE(673);
      if (lookahead == 'E')
        ADVANCE(683);
      if (lookahead == 'F')
        ADVANCE(694);
      if (lookahead == 'G')
        ADVANCE(697);
      if (lookahead == 'H')
        ADVANCE(698);
      if (lookahead == 'L')
        ADVANCE(699);
      if (lookahead == 'N')
        ADVANCE(700);
      if (lookahead == 'O')
        ADVANCE(701);
      if (lookahead == 'R')
        ADVANCE(702);
      if (lookahead == 'S')
        ADVANCE(703);
      if (lookahead == 'U')
        ADVANCE(704);
      if (lookahead == 'V')
        ADVANCE(705);
      if (lookahead == 'X')
        ADVANCE(706);
      if (lookahead == '\\')
        ADVANCE(707);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == 'a')
        ADVANCE(708);
      if (lookahead == 'b')
        ADVANCE(709);
      if (lookahead == 'f')
        ADVANCE(710);
      if (lookahead == 'n')
        ADVANCE(79);
      if (lookahead == 'o')
        ADVANCE(711);
      if (lookahead == 'r')
        ADVANCE(80);
      if (lookahead == 't')
        ADVANCE(81);
      if (lookahead == 'v')
        ADVANCE(82);
      if (lookahead == 'x')
        ADVANCE(712);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(661);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(494);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 662:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(663);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 663:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'K')
        ADVANCE(664);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_ACK);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 665:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(666);
      if (lookahead == 'S')
        ADVANCE(668);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 666:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'L')
        ADVANCE(667);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_BEL);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_BS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 669:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(670);
      if (lookahead == 'R')
        ADVANCE(672);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 670:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'N')
        ADVANCE(671);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_CAN);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 673:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(674);
      if (lookahead == 'E')
        ADVANCE(679);
      if (lookahead == 'L')
        ADVANCE(681);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 674:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '1')
        ADVANCE(675);
      if (lookahead == '2')
        ADVANCE(676);
      if (lookahead == '3')
        ADVANCE(677);
      if (lookahead == '4')
        ADVANCE(678);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_DC1);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_DC2);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_DC3);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_DC4);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 679:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'L')
        ADVANCE(680);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_DEL);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 681:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(682);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_DLE);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 683:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'M')
        ADVANCE(684);
      if (lookahead == 'N')
        ADVANCE(685);
      if (lookahead == 'O')
        ADVANCE(687);
      if (lookahead == 'S')
        ADVANCE(689);
      if (lookahead == 'T')
        ADVANCE(691);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_EM);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 685:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'Q')
        ADVANCE(686);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_ENQ);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 687:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(688);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_EOT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 689:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(690);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_ESC);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 691:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'B')
        ADVANCE(692);
      if (lookahead == 'X')
        ADVANCE(693);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_ETB);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_ETX);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 694:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(695);
      if (lookahead == 'S')
        ADVANCE(696);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_FS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 697:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(45);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 698:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(47);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 699:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(49);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 700:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(51);
      if (lookahead == 'U')
        ADVANCE(53);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 702:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(56);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 703:
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
    case 704:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(69);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 705:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(71);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_X);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(661);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_a);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 713:
      if (lookahead == '\n')
        ADVANCE(661);
      if (lookahead == '\r')
        ADVANCE(713);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '&')
        ADVANCE(104);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == 'A')
        ADVANCE(714);
      if (lookahead == 'B')
        ADVANCE(717);
      if (lookahead == 'C')
        ADVANCE(721);
      if (lookahead == 'D')
        ADVANCE(725);
      if (lookahead == 'E')
        ADVANCE(735);
      if (lookahead == 'F')
        ADVANCE(746);
      if (lookahead == 'G')
        ADVANCE(749);
      if (lookahead == 'H')
        ADVANCE(750);
      if (lookahead == 'L')
        ADVANCE(751);
      if (lookahead == 'N')
        ADVANCE(752);
      if (lookahead == 'O')
        ADVANCE(753);
      if (lookahead == 'R')
        ADVANCE(754);
      if (lookahead == 'S')
        ADVANCE(755);
      if (lookahead == 'U')
        ADVANCE(756);
      if (lookahead == 'V')
        ADVANCE(757);
      if (lookahead == 'X')
        ADVANCE(758);
      if (lookahead == '\\')
        ADVANCE(498);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == 'a')
        ADVANCE(759);
      if (lookahead == 'b')
        ADVANCE(760);
      if (lookahead == 'f')
        ADVANCE(761);
      if (lookahead == 'n')
        ADVANCE(164);
      if (lookahead == 'o')
        ADVANCE(762);
      if (lookahead == 'r')
        ADVANCE(165);
      if (lookahead == 't')
        ADVANCE(166);
      if (lookahead == 'v')
        ADVANCE(167);
      if (lookahead == 'x')
        ADVANCE(763);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(660);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(499);
      END_STATE();
    case 714:
      if (lookahead == 'C')
        ADVANCE(715);
      END_STATE();
    case 715:
      if (lookahead == 'K')
        ADVANCE(716);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_ACK);
      END_STATE();
    case 717:
      if (lookahead == 'E')
        ADVANCE(718);
      if (lookahead == 'S')
        ADVANCE(720);
      END_STATE();
    case 718:
      if (lookahead == 'L')
        ADVANCE(719);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_BEL);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_BS);
      END_STATE();
    case 721:
      if (lookahead == 'A')
        ADVANCE(722);
      if (lookahead == 'R')
        ADVANCE(724);
      END_STATE();
    case 722:
      if (lookahead == 'N')
        ADVANCE(723);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_CAN);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    case 725:
      if (lookahead == 'C')
        ADVANCE(726);
      if (lookahead == 'E')
        ADVANCE(731);
      if (lookahead == 'L')
        ADVANCE(733);
      END_STATE();
    case 726:
      if (lookahead == '1')
        ADVANCE(727);
      if (lookahead == '2')
        ADVANCE(728);
      if (lookahead == '3')
        ADVANCE(729);
      if (lookahead == '4')
        ADVANCE(730);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_DC1);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_DC2);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_DC3);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_DC4);
      END_STATE();
    case 731:
      if (lookahead == 'L')
        ADVANCE(732);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_DEL);
      END_STATE();
    case 733:
      if (lookahead == 'E')
        ADVANCE(734);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_DLE);
      END_STATE();
    case 735:
      if (lookahead == 'M')
        ADVANCE(736);
      if (lookahead == 'N')
        ADVANCE(737);
      if (lookahead == 'O')
        ADVANCE(739);
      if (lookahead == 'S')
        ADVANCE(741);
      if (lookahead == 'T')
        ADVANCE(743);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_EM);
      END_STATE();
    case 737:
      if (lookahead == 'Q')
        ADVANCE(738);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_ENQ);
      END_STATE();
    case 739:
      if (lookahead == 'T')
        ADVANCE(740);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_EOT);
      END_STATE();
    case 741:
      if (lookahead == 'C')
        ADVANCE(742);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_ESC);
      END_STATE();
    case 743:
      if (lookahead == 'B')
        ADVANCE(744);
      if (lookahead == 'X')
        ADVANCE(745);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_ETB);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_ETX);
      END_STATE();
    case 746:
      if (lookahead == 'F')
        ADVANCE(747);
      if (lookahead == 'S')
        ADVANCE(748);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_FF);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_FS);
      END_STATE();
    case 749:
      if (lookahead == 'S')
        ADVANCE(130);
      END_STATE();
    case 750:
      if (lookahead == 'T')
        ADVANCE(132);
      END_STATE();
    case 751:
      if (lookahead == 'F')
        ADVANCE(134);
      END_STATE();
    case 752:
      if (lookahead == 'A')
        ADVANCE(136);
      if (lookahead == 'U')
        ADVANCE(138);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 754:
      if (lookahead == 'S')
        ADVANCE(141);
      END_STATE();
    case 755:
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
    case 756:
      if (lookahead == 'S')
        ADVANCE(154);
      END_STATE();
    case 757:
      if (lookahead == 'T')
        ADVANCE(156);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 764:
      if (lookahead == '\t')
        ADVANCE(501);
      if (lookahead == '\n')
        ADVANCE(765);
      if (lookahead == 11)
        ADVANCE(97);
      if (lookahead == '\r')
        ADVANCE(776);
      if (lookahead == ' ')
        ADVANCE(496);
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
        ADVANCE(777);
      if (lookahead == 'B')
        ADVANCE(778);
      if (lookahead == 'C')
        ADVANCE(779);
      if (lookahead == 'D')
        ADVANCE(780);
      if (lookahead == 'E')
        ADVANCE(781);
      if (lookahead == 'F')
        ADVANCE(782);
      if (lookahead == 'G')
        ADVANCE(129);
      if (lookahead == 'H')
        ADVANCE(131);
      if (lookahead == 'L')
        ADVANCE(133);
      if (lookahead == 'N')
        ADVANCE(135);
      if (lookahead == 'O')
        ADVANCE(753);
      if (lookahead == 'R')
        ADVANCE(140);
      if (lookahead == 'S')
        ADVANCE(142);
      if (lookahead == 'U')
        ADVANCE(153);
      if (lookahead == 'V')
        ADVANCE(155);
      if (lookahead == 'X')
        ADVANCE(758);
      if (lookahead == '[')
        ADVANCE(497);
      if (lookahead == '\\')
        ADVANCE(498);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '_')
        ADVANCE(162);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == 'a')
        ADVANCE(759);
      if (lookahead == 'b')
        ADVANCE(760);
      if (lookahead == 'f')
        ADVANCE(761);
      if (lookahead == 'n')
        ADVANCE(164);
      if (lookahead == 'o')
        ADVANCE(762);
      if (lookahead == 'r')
        ADVANCE(165);
      if (lookahead == 't')
        ADVANCE(166);
      if (lookahead == 'v')
        ADVANCE(167);
      if (lookahead == 'x')
        ADVANCE(763);
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
        ADVANCE(499);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(766);
      if (lookahead == '\n')
        ADVANCE(765);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(767);
      if (lookahead == ' ')
        ADVANCE(768);
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
        ADVANCE(769);
      if (lookahead == 'B')
        ADVANCE(770);
      if (lookahead == 'C')
        ADVANCE(771);
      if (lookahead == 'D')
        ADVANCE(772);
      if (lookahead == 'E')
        ADVANCE(773);
      if (lookahead == 'F')
        ADVANCE(774);
      if (lookahead == 'G')
        ADVANCE(44);
      if (lookahead == 'H')
        ADVANCE(46);
      if (lookahead == 'L')
        ADVANCE(48);
      if (lookahead == 'N')
        ADVANCE(50);
      if (lookahead == 'O')
        ADVANCE(701);
      if (lookahead == 'R')
        ADVANCE(55);
      if (lookahead == 'S')
        ADVANCE(57);
      if (lookahead == 'U')
        ADVANCE(68);
      if (lookahead == 'V')
        ADVANCE(70);
      if (lookahead == 'X')
        ADVANCE(706);
      if (lookahead == '[')
        ADVANCE(492);
      if (lookahead == '\\')
        ADVANCE(775);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(77);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == 'a')
        ADVANCE(708);
      if (lookahead == 'b')
        ADVANCE(709);
      if (lookahead == 'f')
        ADVANCE(710);
      if (lookahead == 'n')
        ADVANCE(79);
      if (lookahead == 'o')
        ADVANCE(711);
      if (lookahead == 'r')
        ADVANCE(80);
      if (lookahead == 't')
        ADVANCE(81);
      if (lookahead == 'v')
        ADVANCE(82);
      if (lookahead == 'x')
        ADVANCE(712);
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
        ADVANCE(494);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(766);
      if (lookahead == '\n')
        ADVANCE(765);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(767);
      if (lookahead == ' ')
        ADVANCE(768);
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
        ADVANCE(769);
      if (lookahead == 'B')
        ADVANCE(770);
      if (lookahead == 'C')
        ADVANCE(771);
      if (lookahead == 'D')
        ADVANCE(772);
      if (lookahead == 'E')
        ADVANCE(773);
      if (lookahead == 'F')
        ADVANCE(774);
      if (lookahead == 'G')
        ADVANCE(44);
      if (lookahead == 'H')
        ADVANCE(46);
      if (lookahead == 'L')
        ADVANCE(48);
      if (lookahead == 'N')
        ADVANCE(50);
      if (lookahead == 'O')
        ADVANCE(701);
      if (lookahead == 'R')
        ADVANCE(55);
      if (lookahead == 'S')
        ADVANCE(57);
      if (lookahead == 'U')
        ADVANCE(68);
      if (lookahead == 'V')
        ADVANCE(70);
      if (lookahead == 'X')
        ADVANCE(706);
      if (lookahead == '[')
        ADVANCE(492);
      if (lookahead == '\\')
        ADVANCE(775);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(77);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == 'a')
        ADVANCE(708);
      if (lookahead == 'b')
        ADVANCE(709);
      if (lookahead == 'f')
        ADVANCE(710);
      if (lookahead == 'n')
        ADVANCE(79);
      if (lookahead == 'o')
        ADVANCE(711);
      if (lookahead == 'r')
        ADVANCE(80);
      if (lookahead == 't')
        ADVANCE(81);
      if (lookahead == 'v')
        ADVANCE(82);
      if (lookahead == 'x')
        ADVANCE(712);
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
        ADVANCE(494);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 767:
      if (lookahead == '\t')
        ADVANCE(766);
      if (lookahead == '\n')
        ADVANCE(765);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(767);
      if (lookahead == ' ')
        ADVANCE(768);
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
        ADVANCE(769);
      if (lookahead == 'B')
        ADVANCE(770);
      if (lookahead == 'C')
        ADVANCE(771);
      if (lookahead == 'D')
        ADVANCE(772);
      if (lookahead == 'E')
        ADVANCE(773);
      if (lookahead == 'F')
        ADVANCE(774);
      if (lookahead == 'G')
        ADVANCE(44);
      if (lookahead == 'H')
        ADVANCE(46);
      if (lookahead == 'L')
        ADVANCE(48);
      if (lookahead == 'N')
        ADVANCE(50);
      if (lookahead == 'O')
        ADVANCE(701);
      if (lookahead == 'R')
        ADVANCE(55);
      if (lookahead == 'S')
        ADVANCE(57);
      if (lookahead == 'U')
        ADVANCE(68);
      if (lookahead == 'V')
        ADVANCE(70);
      if (lookahead == 'X')
        ADVANCE(706);
      if (lookahead == '[')
        ADVANCE(492);
      if (lookahead == '\\')
        ADVANCE(775);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(77);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == 'a')
        ADVANCE(708);
      if (lookahead == 'b')
        ADVANCE(709);
      if (lookahead == 'f')
        ADVANCE(710);
      if (lookahead == 'n')
        ADVANCE(79);
      if (lookahead == 'o')
        ADVANCE(711);
      if (lookahead == 'r')
        ADVANCE(80);
      if (lookahead == 't')
        ADVANCE(81);
      if (lookahead == 'v')
        ADVANCE(82);
      if (lookahead == 'x')
        ADVANCE(712);
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
        ADVANCE(494);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(766);
      if (lookahead == '\n')
        ADVANCE(765);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(767);
      if (lookahead == ' ')
        ADVANCE(768);
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
        ADVANCE(769);
      if (lookahead == 'B')
        ADVANCE(770);
      if (lookahead == 'C')
        ADVANCE(771);
      if (lookahead == 'D')
        ADVANCE(772);
      if (lookahead == 'E')
        ADVANCE(773);
      if (lookahead == 'F')
        ADVANCE(774);
      if (lookahead == 'G')
        ADVANCE(44);
      if (lookahead == 'H')
        ADVANCE(46);
      if (lookahead == 'L')
        ADVANCE(48);
      if (lookahead == 'N')
        ADVANCE(50);
      if (lookahead == 'O')
        ADVANCE(701);
      if (lookahead == 'R')
        ADVANCE(55);
      if (lookahead == 'S')
        ADVANCE(57);
      if (lookahead == 'U')
        ADVANCE(68);
      if (lookahead == 'V')
        ADVANCE(70);
      if (lookahead == 'X')
        ADVANCE(706);
      if (lookahead == '[')
        ADVANCE(492);
      if (lookahead == '\\')
        ADVANCE(775);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(77);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == 'a')
        ADVANCE(708);
      if (lookahead == 'b')
        ADVANCE(709);
      if (lookahead == 'f')
        ADVANCE(710);
      if (lookahead == 'n')
        ADVANCE(79);
      if (lookahead == 'o')
        ADVANCE(711);
      if (lookahead == 'r')
        ADVANCE(80);
      if (lookahead == 't')
        ADVANCE(81);
      if (lookahead == 'v')
        ADVANCE(82);
      if (lookahead == 'x')
        ADVANCE(712);
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
        ADVANCE(494);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(663);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(666);
      if (lookahead == 'S')
        ADVANCE(668);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(670);
      if (lookahead == 'R')
        ADVANCE(672);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(674);
      if (lookahead == 'E')
        ADVANCE(679);
      if (lookahead == 'L')
        ADVANCE(681);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'M')
        ADVANCE(684);
      if (lookahead == 'N')
        ADVANCE(685);
      if (lookahead == 'O')
        ADVANCE(687);
      if (lookahead == 'S')
        ADVANCE(689);
      if (lookahead == 'T')
        ADVANCE(691);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(695);
      if (lookahead == 'S')
        ADVANCE(696);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(767);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 776:
      if (lookahead == '\t')
        ADVANCE(501);
      if (lookahead == '\n')
        ADVANCE(765);
      if (lookahead == 11)
        ADVANCE(97);
      if (lookahead == '\r')
        ADVANCE(776);
      if (lookahead == ' ')
        ADVANCE(496);
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
        ADVANCE(777);
      if (lookahead == 'B')
        ADVANCE(778);
      if (lookahead == 'C')
        ADVANCE(779);
      if (lookahead == 'D')
        ADVANCE(780);
      if (lookahead == 'E')
        ADVANCE(781);
      if (lookahead == 'F')
        ADVANCE(782);
      if (lookahead == 'G')
        ADVANCE(129);
      if (lookahead == 'H')
        ADVANCE(131);
      if (lookahead == 'L')
        ADVANCE(133);
      if (lookahead == 'N')
        ADVANCE(135);
      if (lookahead == 'O')
        ADVANCE(753);
      if (lookahead == 'R')
        ADVANCE(140);
      if (lookahead == 'S')
        ADVANCE(142);
      if (lookahead == 'U')
        ADVANCE(153);
      if (lookahead == 'V')
        ADVANCE(155);
      if (lookahead == 'X')
        ADVANCE(758);
      if (lookahead == '[')
        ADVANCE(497);
      if (lookahead == '\\')
        ADVANCE(498);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '_')
        ADVANCE(162);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == 'a')
        ADVANCE(759);
      if (lookahead == 'b')
        ADVANCE(760);
      if (lookahead == 'f')
        ADVANCE(761);
      if (lookahead == 'n')
        ADVANCE(164);
      if (lookahead == 'o')
        ADVANCE(762);
      if (lookahead == 'r')
        ADVANCE(165);
      if (lookahead == 't')
        ADVANCE(166);
      if (lookahead == 'v')
        ADVANCE(167);
      if (lookahead == 'x')
        ADVANCE(763);
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
        ADVANCE(499);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(715);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'E')
        ADVANCE(718);
      if (lookahead == 'S')
        ADVANCE(720);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'A')
        ADVANCE(722);
      if (lookahead == 'R')
        ADVANCE(724);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(726);
      if (lookahead == 'E')
        ADVANCE(731);
      if (lookahead == 'L')
        ADVANCE(733);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'M')
        ADVANCE(736);
      if (lookahead == 'N')
        ADVANCE(737);
      if (lookahead == 'O')
        ADVANCE(739);
      if (lookahead == 'S')
        ADVANCE(741);
      if (lookahead == 'T')
        ADVANCE(743);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'F')
        ADVANCE(747);
      if (lookahead == 'S')
        ADVANCE(748);
      END_STATE();
    case 783:
      if (lookahead == '\n')
        ADVANCE(784);
      if (lookahead == '\r')
        ADVANCE(786);
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
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(787);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '_')
        ADVANCE(478);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(783);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 784:
      if (lookahead == '\n')
        ADVANCE(784);
      if (lookahead == '\r')
        ADVANCE(784);
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
        ADVANCE(72);
      if (lookahead == '\\')
        ADVANCE(785);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(474);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == 8902)
        ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(784);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 785:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(784);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 786:
      if (lookahead == '\n')
        ADVANCE(784);
      if (lookahead == '\r')
        ADVANCE(786);
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
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(787);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '_')
        ADVANCE(478);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(783);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 787:
      if (lookahead == 'n')
        SKIP(783);
      END_STATE();
    case 788:
      if (lookahead == '\n')
        ADVANCE(789);
      if (lookahead == '\r')
        ADVANCE(792);
      if (lookahead == '(')
        ADVANCE(106);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(476);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(793);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(788);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(794);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 789:
      if (lookahead == '\n')
        ADVANCE(789);
      if (lookahead == '\r')
        ADVANCE(789);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(472);
      if (lookahead == '[')
        ADVANCE(72);
      if (lookahead == '\\')
        ADVANCE(790);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(789);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(791);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 790:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(789);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym__constructor_pattern);
      if (lookahead == '\'')
        ADVANCE(791);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(791);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 792:
      if (lookahead == '\n')
        ADVANCE(789);
      if (lookahead == '\r')
        ADVANCE(792);
      if (lookahead == '(')
        ADVANCE(106);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(476);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(793);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(788);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(794);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 793:
      if (lookahead == 'n')
        SKIP(788);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym__constructor_pattern);
      if (lookahead == '\'')
        ADVANCE(794);
      if (lookahead == '.')
        ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(794);
      END_STATE();
    case 795:
      if (lookahead == '\n')
        ADVANCE(796);
      if (lookahead == '\r')
        ADVANCE(808);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '\\')
        SKIP(809);
      if (lookahead == 's')
        ADVANCE(810);
      if (lookahead == 'u')
        ADVANCE(814);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(795);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 796:
      if (lookahead == '\n')
        ADVANCE(796);
      if (lookahead == '\r')
        ADVANCE(796);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '\\')
        ADVANCE(797);
      if (lookahead == 's')
        ADVANCE(798);
      if (lookahead == 'u')
        ADVANCE(802);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(796);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 797:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(796);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(799);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 801:
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
    case 802:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
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
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(804);
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
      if (lookahead == 'a')
        ADVANCE(805);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
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
      if (lookahead == 'f')
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
      if (lookahead == 'e')
        ADVANCE(807);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 807:
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
    case 808:
      if (lookahead == '\n')
        ADVANCE(796);
      if (lookahead == '\r')
        ADVANCE(808);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '\\')
        SKIP(809);
      if (lookahead == 's')
        ADVANCE(810);
      if (lookahead == 'u')
        ADVANCE(814);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(795);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 809:
      if (lookahead == 'n')
        SKIP(795);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'a')
        ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'f')
        ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'e')
        ADVANCE(813);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(anon_sym_safe);
      if (lookahead == '\'')
        ADVANCE(267);
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
      if (lookahead == 'n')
        ADVANCE(815);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 's')
        ADVANCE(816);
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
      if (lookahead == 'a')
        ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'f')
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
      if (lookahead == 'e')
        ADVANCE(819);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(anon_sym_unsafe);
      if (lookahead == '\'')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 820:
      if (lookahead == '\n')
        ADVANCE(821);
      if (lookahead == '\r')
        ADVANCE(823);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(476);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == '=')
        ADVANCE(408);
      if (lookahead == '\\')
        SKIP(824);
      if (lookahead == 'w')
        ADVANCE(588);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(820);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 821:
      if (lookahead == '\n')
        ADVANCE(821);
      if (lookahead == '\r')
        ADVANCE(821);
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
        ADVANCE(822);
      if (lookahead == 'w')
        ADVANCE(581);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(821);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 822:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(821);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 823:
      if (lookahead == '\n')
        ADVANCE(821);
      if (lookahead == '\r')
        ADVANCE(823);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(476);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == '=')
        ADVANCE(408);
      if (lookahead == '\\')
        SKIP(824);
      if (lookahead == 'w')
        ADVANCE(588);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(820);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 824:
      if (lookahead == 'n')
        SKIP(820);
      END_STATE();
    case 825:
      if (lookahead == '\n')
        ADVANCE(826);
      if (lookahead == '\r')
        ADVANCE(828);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '\\')
        SKIP(829);
      if (lookahead == 'd')
        ADVANCE(626);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(825);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 826:
      if (lookahead == '\n')
        ADVANCE(826);
      if (lookahead == '\r')
        ADVANCE(826);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '\\')
        ADVANCE(827);
      if (lookahead == 'd')
        ADVANCE(616);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(826);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 827:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(826);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 828:
      if (lookahead == '\n')
        ADVANCE(826);
      if (lookahead == '\r')
        ADVANCE(828);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '\\')
        SKIP(829);
      if (lookahead == 'd')
        ADVANCE(626);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(825);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 829:
      if (lookahead == 'n')
        SKIP(825);
      END_STATE();
    case 830:
      if (lookahead == '\n')
        ADVANCE(831);
      if (lookahead == '\r')
        ADVANCE(833);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(834);
      if (lookahead == 'd')
        ADVANCE(647);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(830);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 831:
      if (lookahead == '\n')
        ADVANCE(831);
      if (lookahead == '\r')
        ADVANCE(831);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(832);
      if (lookahead == 'd')
        ADVANCE(637);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(831);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 832:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(831);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 833:
      if (lookahead == '\n')
        ADVANCE(831);
      if (lookahead == '\r')
        ADVANCE(833);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(834);
      if (lookahead == 'd')
        ADVANCE(647);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(830);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 834:
      if (lookahead == 'n')
        SKIP(830);
      END_STATE();
    case 835:
      if (lookahead == '\n')
        ADVANCE(836);
      if (lookahead == '\r')
        ADVANCE(838);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(839);
      if (lookahead == 'd')
        ADVANCE(647);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(835);
      END_STATE();
    case 836:
      if (lookahead == '\n')
        ADVANCE(836);
      if (lookahead == '\r')
        ADVANCE(836);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(837);
      if (lookahead == 'd')
        ADVANCE(637);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(836);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 837:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(836);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 838:
      if (lookahead == '\n')
        ADVANCE(836);
      if (lookahead == '\r')
        ADVANCE(838);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(839);
      if (lookahead == 'd')
        ADVANCE(647);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(835);
      END_STATE();
    case 839:
      if (lookahead == 'n')
        SKIP(835);
      END_STATE();
    case 840:
      if (lookahead == '\n')
        ADVANCE(841);
      if (lookahead == '\r')
        ADVANCE(843);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(844);
      if (lookahead == 'd')
        ADVANCE(647);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(840);
      END_STATE();
    case 841:
      if (lookahead == '\n')
        ADVANCE(841);
      if (lookahead == '\r')
        ADVANCE(841);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(842);
      if (lookahead == 'd')
        ADVANCE(637);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(841);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 842:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(841);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 843:
      if (lookahead == '\n')
        ADVANCE(841);
      if (lookahead == '\r')
        ADVANCE(843);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(844);
      if (lookahead == 'd')
        ADVANCE(647);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(840);
      END_STATE();
    case 844:
      if (lookahead == 'n')
        SKIP(840);
      END_STATE();
    case 845:
      if (lookahead == '\n')
        ADVANCE(846);
      if (lookahead == '\r')
        ADVANCE(848);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(849);
      if (lookahead == 'd')
        ADVANCE(626);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(845);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 846:
      if (lookahead == '\n')
        ADVANCE(846);
      if (lookahead == '\r')
        ADVANCE(846);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(847);
      if (lookahead == 'd')
        ADVANCE(616);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(846);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 847:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(846);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 848:
      if (lookahead == '\n')
        ADVANCE(846);
      if (lookahead == '\r')
        ADVANCE(848);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(849);
      if (lookahead == 'd')
        ADVANCE(626);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(845);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 849:
      if (lookahead == 'n')
        SKIP(845);
      END_STATE();
    case 850:
      if (lookahead == '\n')
        ADVANCE(851);
      if (lookahead == '\r')
        ADVANCE(853);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(854);
      if (lookahead == 'd')
        ADVANCE(626);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(850);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 851:
      if (lookahead == '\n')
        ADVANCE(851);
      if (lookahead == '\r')
        ADVANCE(851);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(39);
      if (lookahead == '\\')
        ADVANCE(852);
      if (lookahead == 'd')
        ADVANCE(616);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(851);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 852:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(851);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 853:
      if (lookahead == '\n')
        ADVANCE(851);
      if (lookahead == '\r')
        ADVANCE(853);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(854);
      if (lookahead == 'd')
        ADVANCE(626);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(850);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 854:
      if (lookahead == 'n')
        SKIP(850);
      END_STATE();
    case 855:
      if (lookahead == '\n')
        ADVANCE(856);
      if (lookahead == '\r')
        ADVANCE(858);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(859);
      if (lookahead == 'd')
        ADVANCE(626);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(855);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 856:
      if (lookahead == '\n')
        ADVANCE(856);
      if (lookahead == '\r')
        ADVANCE(856);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(39);
      if (lookahead == '\\')
        ADVANCE(857);
      if (lookahead == 'd')
        ADVANCE(616);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(856);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 857:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(856);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 858:
      if (lookahead == '\n')
        ADVANCE(856);
      if (lookahead == '\r')
        ADVANCE(858);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(859);
      if (lookahead == 'd')
        ADVANCE(626);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(855);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 859:
      if (lookahead == 'n')
        SKIP(855);
      END_STATE();
    case 860:
      if (lookahead == '\n')
        ADVANCE(861);
      if (lookahead == '\r')
        ADVANCE(863);
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
        ADVANCE(476);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(864);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(860);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(794);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 861:
      if (lookahead == '\n')
        ADVANCE(861);
      if (lookahead == '\r')
        ADVANCE(861);
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
        ADVANCE(862);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(861);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(791);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 862:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(861);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 863:
      if (lookahead == '\n')
        ADVANCE(861);
      if (lookahead == '\r')
        ADVANCE(863);
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
        ADVANCE(476);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(864);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(860);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(794);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 864:
      if (lookahead == 'n')
        SKIP(860);
      END_STATE();
    case 865:
      if (lookahead == '\n')
        ADVANCE(866);
      if (lookahead == '\r')
        ADVANCE(868);
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
        ADVANCE(124);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(869);
      if (lookahead == ']')
        ADVANCE(160);
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
        SKIP(865);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 866:
      if (lookahead == '\n')
        ADVANCE(866);
      if (lookahead == '\r')
        ADVANCE(866);
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
        ADVANCE(39);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(867);
      if (lookahead == ']')
        ADVANCE(75);
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
        ADVANCE(866);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 867:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(866);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 868:
      if (lookahead == '\n')
        ADVANCE(866);
      if (lookahead == '\r')
        ADVANCE(868);
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
        ADVANCE(124);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(869);
      if (lookahead == ']')
        ADVANCE(160);
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
        SKIP(865);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 869:
      if (lookahead == 'n')
        SKIP(865);
      END_STATE();
    case 870:
      if (lookahead == '\n')
        ADVANCE(871);
      if (lookahead == '\r')
        ADVANCE(873);
      if (lookahead == '(')
        ADVANCE(106);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(476);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(874);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(870);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(794);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 871:
      if (lookahead == '\n')
        ADVANCE(871);
      if (lookahead == '\r')
        ADVANCE(871);
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
        ADVANCE(872);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(871);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(791);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 872:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(871);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 873:
      if (lookahead == '\n')
        ADVANCE(871);
      if (lookahead == '\r')
        ADVANCE(873);
      if (lookahead == '(')
        ADVANCE(106);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(476);
      if (lookahead == '=')
        ADVANCE(264);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(874);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(870);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(794);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 874:
      if (lookahead == 'n')
        SKIP(870);
      END_STATE();
    case 875:
      if (lookahead == '\n')
        ADVANCE(876);
      if (lookahead == '\r')
        ADVANCE(878);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == '[')
        ADVANCE(497);
      if (lookahead == '\\')
        ADVANCE(498);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '_')
        ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(875);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      END_STATE();
    case 876:
      if (lookahead == '\n')
        ADVANCE(876);
      if (lookahead == '\r')
        ADVANCE(876);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(492);
      if (lookahead == '\\')
        ADVANCE(877);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(876);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(876);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 878:
      if (lookahead == '\n')
        ADVANCE(876);
      if (lookahead == '\r')
        ADVANCE(878);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == '[')
        ADVANCE(497);
      if (lookahead == '\\')
        ADVANCE(498);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '_')
        ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(875);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      END_STATE();
    case 879:
      if (lookahead == '\n')
        ADVANCE(880);
      if (lookahead == '\r')
        ADVANCE(883);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '\\')
        SKIP(884);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(879);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(885);
      END_STATE();
    case 880:
      if (lookahead == '\n')
        ADVANCE(880);
      if (lookahead == '\r')
        ADVANCE(880);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '\\')
        ADVANCE(881);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(880);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(882);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 881:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(880);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 883:
      if (lookahead == '\n')
        ADVANCE(880);
      if (lookahead == '\r')
        ADVANCE(883);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '\\')
        SKIP(884);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(879);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(885);
      END_STATE();
    case 884:
      if (lookahead == 'n')
        SKIP(879);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      END_STATE();
    case 886:
      if (lookahead == '\n')
        ADVANCE(887);
      if (lookahead == '\r')
        ADVANCE(890);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '\\')
        SKIP(891);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(886);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(892);
      END_STATE();
    case 887:
      if (lookahead == '\n')
        ADVANCE(887);
      if (lookahead == '\r')
        ADVANCE(887);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '\\')
        ADVANCE(888);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(887);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(889);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 888:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(887);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 890:
      if (lookahead == '\n')
        ADVANCE(887);
      if (lookahead == '\r')
        ADVANCE(890);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '\\')
        SKIP(891);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(886);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(892);
      END_STATE();
    case 891:
      if (lookahead == 'n')
        SKIP(886);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    case 893:
      if (lookahead == '\n')
        ADVANCE(894);
      if (lookahead == '\r')
        ADVANCE(896);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(476);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(897);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(893);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 894:
      if (lookahead == '\n')
        ADVANCE(894);
      if (lookahead == '\r')
        ADVANCE(894);
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
        ADVANCE(895);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(894);
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
    case 895:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(894);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 896:
      if (lookahead == '\n')
        ADVANCE(894);
      if (lookahead == '\r')
        ADVANCE(896);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(476);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(897);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(893);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 897:
      if (lookahead == 'n')
        SKIP(893);
      END_STATE();
    case 898:
      if (lookahead == '\n')
        ADVANCE(899);
      if (lookahead == '\r')
        ADVANCE(901);
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
        SKIP(902);
      if (lookahead == ']')
        ADVANCE(160);
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
        SKIP(898);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 899:
      if (lookahead == '\n')
        ADVANCE(899);
      if (lookahead == '\r')
        ADVANCE(899);
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
        ADVANCE(900);
      if (lookahead == ']')
        ADVANCE(75);
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
        ADVANCE(899);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 900:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(899);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 901:
      if (lookahead == '\n')
        ADVANCE(899);
      if (lookahead == '\r')
        ADVANCE(901);
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
        SKIP(902);
      if (lookahead == ']')
        ADVANCE(160);
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
        SKIP(898);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 902:
      if (lookahead == 'n')
        SKIP(898);
      END_STATE();
    case 903:
      if (lookahead == '\n')
        ADVANCE(904);
      if (lookahead == '\r')
        ADVANCE(906);
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
        SKIP(907);
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
        SKIP(903);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 904:
      if (lookahead == '\n')
        ADVANCE(904);
      if (lookahead == '\r')
        ADVANCE(904);
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
        ADVANCE(905);
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
        ADVANCE(904);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 905:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(904);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 906:
      if (lookahead == '\n')
        ADVANCE(904);
      if (lookahead == '\r')
        ADVANCE(906);
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
        SKIP(907);
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
        SKIP(903);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 907:
      if (lookahead == 'n')
        SKIP(903);
      END_STATE();
    case 908:
      if (lookahead == '\n')
        ADVANCE(909);
      if (lookahead == '\r')
        ADVANCE(911);
      if (lookahead == '-')
        ADVANCE(476);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(912);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(908);
      END_STATE();
    case 909:
      if (lookahead == '\n')
        ADVANCE(909);
      if (lookahead == '\r')
        ADVANCE(909);
      if (lookahead == '-')
        ADVANCE(472);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(910);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(909);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 910:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(909);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 911:
      if (lookahead == '\n')
        ADVANCE(909);
      if (lookahead == '\r')
        ADVANCE(911);
      if (lookahead == '-')
        ADVANCE(476);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(912);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(908);
      END_STATE();
    case 912:
      if (lookahead == 'n')
        SKIP(908);
      END_STATE();
    case 913:
      if (lookahead == '\n')
        ADVANCE(914);
      if (lookahead == '\r')
        ADVANCE(916);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(476);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(917);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(913);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 914:
      if (lookahead == '\n')
        ADVANCE(914);
      if (lookahead == '\r')
        ADVANCE(914);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == '-')
        ADVANCE(472);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(915);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(914);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 915:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(914);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 916:
      if (lookahead == '\n')
        ADVANCE(914);
      if (lookahead == '\r')
        ADVANCE(916);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(476);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(917);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(913);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 917:
      if (lookahead == 'n')
        SKIP(913);
      END_STATE();
    case 918:
      if (lookahead == '\n')
        ADVANCE(919);
      if (lookahead == '\r')
        ADVANCE(921);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(922);
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
        SKIP(918);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 919:
      if (lookahead == '\n')
        ADVANCE(919);
      if (lookahead == '\r')
        ADVANCE(919);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == '\\')
        ADVANCE(920);
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
        ADVANCE(919);
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
    case 920:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(919);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 921:
      if (lookahead == '\n')
        ADVANCE(919);
      if (lookahead == '\r')
        ADVANCE(921);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(922);
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
        SKIP(918);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 922:
      if (lookahead == 'n')
        SKIP(918);
      END_STATE();
    case 923:
      if (lookahead == '\n')
        ADVANCE(924);
      if (lookahead == '\r')
        ADVANCE(926);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(927);
      if (lookahead == 'h')
        ADVANCE(553);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(923);
      END_STATE();
    case 924:
      if (lookahead == '\n')
        ADVANCE(924);
      if (lookahead == '\r')
        ADVANCE(924);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(925);
      if (lookahead == 'h')
        ADVANCE(543);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(924);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 925:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(924);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 926:
      if (lookahead == '\n')
        ADVANCE(924);
      if (lookahead == '\r')
        ADVANCE(926);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(927);
      if (lookahead == 'h')
        ADVANCE(553);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(923);
      END_STATE();
    case 927:
      if (lookahead == 'n')
        SKIP(923);
      END_STATE();
    case 928:
      if (lookahead == '\n')
        ADVANCE(929);
      if (lookahead == '\r')
        ADVANCE(933);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '\\')
        SKIP(934);
      if (lookahead == 'i')
        ADVANCE(935);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(928);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 929:
      if (lookahead == '\n')
        ADVANCE(929);
      if (lookahead == '\r')
        ADVANCE(929);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '\\')
        ADVANCE(930);
      if (lookahead == 'i')
        ADVANCE(931);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(929);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 930:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(929);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(932);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 932:
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
    case 933:
      if (lookahead == '\n')
        ADVANCE(929);
      if (lookahead == '\r')
        ADVANCE(933);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '\\')
        SKIP(934);
      if (lookahead == 'i')
        ADVANCE(935);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(928);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 934:
      if (lookahead == 'n')
        SKIP(928);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(267);
      if (lookahead == 'n')
        ADVANCE(936);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 936:
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
    case 937:
      if (lookahead == '\n')
        ADVANCE(938);
      if (lookahead == '\r')
        ADVANCE(940);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '\\')
        SKIP(941);
      if (lookahead == 'i')
        ADVANCE(935);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(937);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 938:
      if (lookahead == '\n')
        ADVANCE(938);
      if (lookahead == '\r')
        ADVANCE(938);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '\\')
        ADVANCE(939);
      if (lookahead == 'i')
        ADVANCE(931);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(938);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 939:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(938);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 940:
      if (lookahead == '\n')
        ADVANCE(938);
      if (lookahead == '\r')
        ADVANCE(940);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '\\')
        SKIP(941);
      if (lookahead == 'i')
        ADVANCE(935);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(937);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 941:
      if (lookahead == 'n')
        SKIP(937);
      END_STATE();
    case 942:
      if (lookahead == '\n')
        ADVANCE(943);
      if (lookahead == '\r')
        ADVANCE(945);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(946);
      if (lookahead == 'd')
        ADVANCE(626);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(942);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 943:
      if (lookahead == '\n')
        ADVANCE(943);
      if (lookahead == '\r')
        ADVANCE(943);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(944);
      if (lookahead == 'd')
        ADVANCE(616);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(943);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 944:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(943);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 945:
      if (lookahead == '\n')
        ADVANCE(943);
      if (lookahead == '\r')
        ADVANCE(945);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(946);
      if (lookahead == 'd')
        ADVANCE(626);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(942);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 946:
      if (lookahead == 'n')
        SKIP(942);
      END_STATE();
    case 947:
      if (lookahead == '\n')
        ADVANCE(948);
      if (lookahead == '\r')
        ADVANCE(950);
      if (lookahead == '-')
        ADVANCE(476);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(951);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(947);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 948:
      if (lookahead == '\n')
        ADVANCE(948);
      if (lookahead == '\r')
        ADVANCE(948);
      if (lookahead == '-')
        ADVANCE(472);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(949);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(948);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 949:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(948);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 950:
      if (lookahead == '\n')
        ADVANCE(948);
      if (lookahead == '\r')
        ADVANCE(950);
      if (lookahead == '-')
        ADVANCE(476);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(951);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(947);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 951:
      if (lookahead == 'n')
        SKIP(947);
      END_STATE();
    case 952:
      if (lookahead == '\t')
        ADVANCE(501);
      if (lookahead == '\n')
        ADVANCE(953);
      if (lookahead == 11)
        ADVANCE(97);
      if (lookahead == '\r')
        ADVANCE(958);
      if (lookahead == ' ')
        ADVANCE(496);
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
        ADVANCE(497);
      if (lookahead == '\\')
        ADVANCE(498);
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
        ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(499);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(954);
      if (lookahead == '\n')
        ADVANCE(953);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(955);
      if (lookahead == ' ')
        ADVANCE(956);
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
        ADVANCE(492);
      if (lookahead == '\\')
        ADVANCE(957);
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
        ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(954);
      if (lookahead == '\n')
        ADVANCE(953);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(955);
      if (lookahead == ' ')
        ADVANCE(956);
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
        ADVANCE(492);
      if (lookahead == '\\')
        ADVANCE(957);
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
        ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 955:
      if (lookahead == '\t')
        ADVANCE(954);
      if (lookahead == '\n')
        ADVANCE(953);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(955);
      if (lookahead == ' ')
        ADVANCE(956);
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
        ADVANCE(492);
      if (lookahead == '\\')
        ADVANCE(957);
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
        ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(954);
      if (lookahead == '\n')
        ADVANCE(953);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(955);
      if (lookahead == ' ')
        ADVANCE(956);
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
        ADVANCE(492);
      if (lookahead == '\\')
        ADVANCE(957);
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
        ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(955);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 958:
      if (lookahead == '\t')
        ADVANCE(501);
      if (lookahead == '\n')
        ADVANCE(953);
      if (lookahead == 11)
        ADVANCE(97);
      if (lookahead == '\r')
        ADVANCE(958);
      if (lookahead == ' ')
        ADVANCE(496);
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
        ADVANCE(497);
      if (lookahead == '\\')
        ADVANCE(498);
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
        ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(499);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 959:
      if (lookahead == '\n')
        ADVANCE(960);
      if (lookahead == '\r')
        ADVANCE(962);
      if (lookahead == '(')
        ADVANCE(106);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(476);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(963);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(959);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(794);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 960:
      if (lookahead == '\n')
        ADVANCE(960);
      if (lookahead == '\r')
        ADVANCE(960);
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
        ADVANCE(961);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(960);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(791);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 961:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(960);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 962:
      if (lookahead == '\n')
        ADVANCE(960);
      if (lookahead == '\r')
        ADVANCE(962);
      if (lookahead == '(')
        ADVANCE(106);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(476);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(963);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(959);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(794);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 963:
      if (lookahead == 'n')
        SKIP(959);
      END_STATE();
    case 964:
      if (lookahead == '\n')
        ADVANCE(965);
      if (lookahead == '\r')
        ADVANCE(967);
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
        SKIP(968);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(964);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 965:
      if (lookahead == '\n')
        ADVANCE(965);
      if (lookahead == '\r')
        ADVANCE(965);
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
        ADVANCE(966);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(965);
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
    case 966:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(965);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 967:
      if (lookahead == '\n')
        ADVANCE(965);
      if (lookahead == '\r')
        ADVANCE(967);
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
        SKIP(968);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(964);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 968:
      if (lookahead == 'n')
        SKIP(964);
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
  [14] = {.lex_state = 479, .external_lex_state = 3},
  [15] = {.lex_state = 484, .external_lex_state = 3},
  [16] = {.lex_state = 489},
  [17] = {.lex_state = 500},
  [18] = {.lex_state = 484, .external_lex_state = 3},
  [19] = {.lex_state = 181},
  [20] = {.lex_state = 508, .external_lex_state = 3},
  [21] = {.lex_state = 508, .external_lex_state = 3},
  [22] = {.lex_state = 181},
  [23] = {.lex_state = 513, .external_lex_state = 3},
  [24] = {.lex_state = 513, .external_lex_state = 3},
  [25] = {.lex_state = 508, .external_lex_state = 3},
  [26] = {.lex_state = 508, .external_lex_state = 3},
  [27] = {.lex_state = 518, .external_lex_state = 3},
  [28] = {.lex_state = 523, .external_lex_state = 3},
  [29] = {.lex_state = 528, .external_lex_state = 3},
  [30] = {.lex_state = 533},
  [31] = {.lex_state = 351},
  [32] = {.lex_state = 326},
  [33] = {.lex_state = 538, .external_lex_state = 3},
  [34] = {.lex_state = 351},
  [35] = {.lex_state = 351},
  [36] = {.lex_state = 559},
  [37] = {.lex_state = 566, .external_lex_state = 4},
  [38] = {.lex_state = 573},
  [39] = {.lex_state = 508, .external_lex_state = 3},
  [40] = {.lex_state = 181},
  [41] = {.lex_state = 578},
  [42] = {.lex_state = 181},
  [43] = {.lex_state = 351},
  [44] = {.lex_state = 578},
  [45] = {.lex_state = 181},
  [46] = {.lex_state = 578},
  [47] = {.lex_state = 593, .external_lex_state = 3},
  [48] = {.lex_state = 484},
  [49] = {.lex_state = 598, .external_lex_state = 3},
  [50] = {.lex_state = 603},
  [51] = {.lex_state = 608, .external_lex_state = 3},
  [52] = {.lex_state = 608, .external_lex_state = 3},
  [53] = {.lex_state = 351},
  [54] = {.lex_state = 593, .external_lex_state = 3},
  [55] = {.lex_state = 613, .external_lex_state = 3},
  [56] = {.lex_state = 181},
  [57] = {.lex_state = 634, .external_lex_state = 3},
  [58] = {.lex_state = 655, .external_lex_state = 3},
  [59] = {.lex_state = 559},
  [60] = {.lex_state = 181},
  [61] = {.lex_state = 181},
  [62] = {.lex_state = 461},
  [63] = {.lex_state = 181},
  [64] = {.lex_state = 461},
  [65] = {.lex_state = 513, .external_lex_state = 3},
  [66] = {.lex_state = 181},
  [67] = {.lex_state = 181},
  [68] = {.lex_state = 181},
  [69] = {.lex_state = 181},
  [70] = {.lex_state = 181},
  [71] = {.lex_state = 181},
  [72] = {.lex_state = 660},
  [73] = {.lex_state = 500},
  [74] = {.lex_state = 500},
  [75] = {.lex_state = 500},
  [76] = {.lex_state = 500},
  [77] = {.lex_state = 484, .external_lex_state = 3},
  [78] = {.lex_state = 500},
  [79] = {.lex_state = 500},
  [80] = {.lex_state = 764},
  [81] = {.lex_state = 500},
  [82] = {.lex_state = 500},
  [83] = {.lex_state = 533},
  [84] = {.lex_state = 484, .external_lex_state = 3},
  [85] = {.lex_state = 508, .external_lex_state = 3},
  [86] = {.lex_state = 783},
  [87] = {.lex_state = 513},
  [88] = {.lex_state = 603},
  [89] = {.lex_state = 603},
  [90] = {.lex_state = 603},
  [91] = {.lex_state = 783},
  [92] = {.lex_state = 603},
  [93] = {.lex_state = 489},
  [94] = {.lex_state = 500},
  [95] = {.lex_state = 783},
  [96] = {.lex_state = 181},
  [97] = {.lex_state = 181},
  [98] = {.lex_state = 603},
  [99] = {.lex_state = 181},
  [100] = {.lex_state = 603},
  [101] = {.lex_state = 783},
  [102] = {.lex_state = 783},
  [103] = {.lex_state = 788},
  [104] = {.lex_state = 508, .external_lex_state = 3},
  [105] = {.lex_state = 456, .external_lex_state = 2},
  [106] = {.lex_state = 559},
  [107] = {.lex_state = 351},
  [108] = {.lex_state = 538, .external_lex_state = 3},
  [109] = {.lex_state = 559},
  [110] = {.lex_state = 326},
  [111] = {.lex_state = 181},
  [112] = {.lex_state = 508, .external_lex_state = 3},
  [113] = {.lex_state = 795},
  [114] = {.lex_state = 795},
  [115] = {.lex_state = 508, .external_lex_state = 3},
  [116] = {.lex_state = 181},
  [117] = {.lex_state = 578},
  [118] = {.lex_state = 508, .external_lex_state = 3},
  [119] = {.lex_state = 461},
  [120] = {.lex_state = 508, .external_lex_state = 3},
  [121] = {.lex_state = 566, .external_lex_state = 4},
  [122] = {.lex_state = 566, .external_lex_state = 4},
  [123] = {.lex_state = 508, .external_lex_state = 3},
  [124] = {.lex_state = 573},
  [125] = {.lex_state = 573},
  [126] = {.lex_state = 181},
  [127] = {.lex_state = 461},
  [128] = {.lex_state = 578},
  [129] = {.lex_state = 181},
  [130] = {.lex_state = 456, .external_lex_state = 2},
  [131] = {.lex_state = 461},
  [132] = {.lex_state = 820},
  [133] = {.lex_state = 820},
  [134] = {.lex_state = 578},
  [135] = {.lex_state = 578},
  [136] = {.lex_state = 456, .external_lex_state = 2},
  [137] = {.lex_state = 578},
  [138] = {.lex_state = 351},
  [139] = {.lex_state = 598, .external_lex_state = 3},
  [140] = {.lex_state = 598, .external_lex_state = 3},
  [141] = {.lex_state = 598, .external_lex_state = 3},
  [142] = {.lex_state = 351},
  [143] = {.lex_state = 608, .external_lex_state = 3},
  [144] = {.lex_state = 608, .external_lex_state = 3},
  [145] = {.lex_state = 593, .external_lex_state = 3},
  [146] = {.lex_state = 593, .external_lex_state = 3},
  [147] = {.lex_state = 634, .external_lex_state = 3},
  [148] = {.lex_state = 825, .external_lex_state = 3},
  [149] = {.lex_state = 830, .external_lex_state = 3},
  [150] = {.lex_state = 559},
  [151] = {.lex_state = 835, .external_lex_state = 3},
  [152] = {.lex_state = 840, .external_lex_state = 3},
  [153] = {.lex_state = 508, .external_lex_state = 3},
  [154] = {.lex_state = 845, .external_lex_state = 3},
  [155] = {.lex_state = 850, .external_lex_state = 3},
  [156] = {.lex_state = 855, .external_lex_state = 3},
  [157] = {.lex_state = 825, .external_lex_state = 3},
  [158] = {.lex_state = 181},
  [159] = {.lex_state = 181},
  [160] = {.lex_state = 860},
  [161] = {.lex_state = 865},
  [162] = {.lex_state = 461},
  [163] = {.lex_state = 788},
  [164] = {.lex_state = 461},
  [165] = {.lex_state = 870},
  [166] = {.lex_state = 484, .external_lex_state = 3},
  [167] = {.lex_state = 181},
  [168] = {.lex_state = 181},
  [169] = {.lex_state = 875},
  [170] = {.lex_state = 879},
  [171] = {.lex_state = 886},
  [172] = {.lex_state = 181},
  [173] = {.lex_state = 500},
  [174] = {.lex_state = 500},
  [175] = {.lex_state = 875},
  [176] = {.lex_state = 879},
  [177] = {.lex_state = 886},
  [178] = {.lex_state = 500},
  [179] = {.lex_state = 500},
  [180] = {.lex_state = 484, .external_lex_state = 3},
  [181] = {.lex_state = 893, .external_lex_state = 3},
  [182] = {.lex_state = 893, .external_lex_state = 3},
  [183] = {.lex_state = 484, .external_lex_state = 3},
  [184] = {.lex_state = 484, .external_lex_state = 3},
  [185] = {.lex_state = 484, .external_lex_state = 3},
  [186] = {.lex_state = 181},
  [187] = {.lex_state = 898},
  [188] = {.lex_state = 351},
  [189] = {.lex_state = 181},
  [190] = {.lex_state = 181},
  [191] = {.lex_state = 181},
  [192] = {.lex_state = 903},
  [193] = {.lex_state = 326},
  [194] = {.lex_state = 181},
  [195] = {.lex_state = 865},
  [196] = {.lex_state = 181},
  [197] = {.lex_state = 181},
  [198] = {.lex_state = 603},
  [199] = {.lex_state = 500},
  [200] = {.lex_state = 513},
  [201] = {.lex_state = 559},
  [202] = {.lex_state = 461},
  [203] = {.lex_state = 783},
  [204] = {.lex_state = 788},
  [205] = {.lex_state = 788},
  [206] = {.lex_state = 908, .external_lex_state = 3},
  [207] = {.lex_state = 913, .external_lex_state = 3},
  [208] = {.lex_state = 181},
  [209] = {.lex_state = 508, .external_lex_state = 3},
  [210] = {.lex_state = 908, .external_lex_state = 3},
  [211] = {.lex_state = 788},
  [212] = {.lex_state = 351},
  [213] = {.lex_state = 908, .external_lex_state = 3},
  [214] = {.lex_state = 461},
  [215] = {.lex_state = 908, .external_lex_state = 3},
  [216] = {.lex_state = 533},
  [217] = {.lex_state = 918, .external_lex_state = 4},
  [218] = {.lex_state = 533},
  [219] = {.lex_state = 181},
  [220] = {.lex_state = 351},
  [221] = {.lex_state = 181},
  [222] = {.lex_state = 181},
  [223] = {.lex_state = 456, .external_lex_state = 2},
  [224] = {.lex_state = 326},
  [225] = {.lex_state = 508, .external_lex_state = 3},
  [226] = {.lex_state = 508, .external_lex_state = 3},
  [227] = {.lex_state = 181},
  [228] = {.lex_state = 923, .external_lex_state = 3},
  [229] = {.lex_state = 559},
  [230] = {.lex_state = 484},
  [231] = {.lex_state = 500},
  [232] = {.lex_state = 484},
  [233] = {.lex_state = 508, .external_lex_state = 3},
  [234] = {.lex_state = 181},
  [235] = {.lex_state = 484},
  [236] = {.lex_state = 484},
  [237] = {.lex_state = 508, .external_lex_state = 3},
  [238] = {.lex_state = 181},
  [239] = {.lex_state = 566, .external_lex_state = 4},
  [240] = {.lex_state = 508, .external_lex_state = 3},
  [241] = {.lex_state = 566, .external_lex_state = 4},
  [242] = {.lex_state = 573},
  [243] = {.lex_state = 573},
  [244] = {.lex_state = 181},
  [245] = {.lex_state = 351},
  [246] = {.lex_state = 181},
  [247] = {.lex_state = 351},
  [248] = {.lex_state = 456, .external_lex_state = 2},
  [249] = {.lex_state = 578},
  [250] = {.lex_state = 578},
  [251] = {.lex_state = 928, .external_lex_state = 4},
  [252] = {.lex_state = 937},
  [253] = {.lex_state = 508, .external_lex_state = 3},
  [254] = {.lex_state = 461},
  [255] = {.lex_state = 578},
  [256] = {.lex_state = 456, .external_lex_state = 2},
  [257] = {.lex_state = 578},
  [258] = {.lex_state = 508, .external_lex_state = 3},
  [259] = {.lex_state = 608, .external_lex_state = 3},
  [260] = {.lex_state = 598, .external_lex_state = 3},
  [261] = {.lex_state = 608, .external_lex_state = 3},
  [262] = {.lex_state = 351},
  [263] = {.lex_state = 608, .external_lex_state = 3},
  [264] = {.lex_state = 593, .external_lex_state = 3},
  [265] = {.lex_state = 830, .external_lex_state = 3},
  [266] = {.lex_state = 835, .external_lex_state = 3},
  [267] = {.lex_state = 508, .external_lex_state = 3},
  [268] = {.lex_state = 825, .external_lex_state = 3},
  [269] = {.lex_state = 825, .external_lex_state = 3},
  [270] = {.lex_state = 484},
  [271] = {.lex_state = 508, .external_lex_state = 3},
  [272] = {.lex_state = 181},
  [273] = {.lex_state = 840, .external_lex_state = 3},
  [274] = {.lex_state = 461},
  [275] = {.lex_state = 484},
  [276] = {.lex_state = 942, .external_lex_state = 3},
  [277] = {.lex_state = 942, .external_lex_state = 3},
  [278] = {.lex_state = 840, .external_lex_state = 3},
  [279] = {.lex_state = 942, .external_lex_state = 3},
  [280] = {.lex_state = 825, .external_lex_state = 3},
  [281] = {.lex_state = 181},
  [282] = {.lex_state = 835, .external_lex_state = 3},
  [283] = {.lex_state = 559},
  [284] = {.lex_state = 870},
  [285] = {.lex_state = 788},
  [286] = {.lex_state = 947, .external_lex_state = 3},
  [287] = {.lex_state = 508, .external_lex_state = 3},
  [288] = {.lex_state = 181},
  [289] = {.lex_state = 181},
  [290] = {.lex_state = 879},
  [291] = {.lex_state = 879},
  [292] = {.lex_state = 886},
  [293] = {.lex_state = 886},
  [294] = {.lex_state = 500},
  [295] = {.lex_state = 500},
  [296] = {.lex_state = 500},
  [297] = {.lex_state = 500},
  [298] = {.lex_state = 952},
  [299] = {.lex_state = 952},
  [300] = {.lex_state = 484, .external_lex_state = 3},
  [301] = {.lex_state = 484, .external_lex_state = 3},
  [302] = {.lex_state = 484, .external_lex_state = 3},
  [303] = {.lex_state = 181},
  [304] = {.lex_state = 783},
  [305] = {.lex_state = 603},
  [306] = {.lex_state = 783},
  [307] = {.lex_state = 484},
  [308] = {.lex_state = 783},
  [309] = {.lex_state = 783},
  [310] = {.lex_state = 783},
  [311] = {.lex_state = 783},
  [312] = {.lex_state = 181},
  [313] = {.lex_state = 513},
  [314] = {.lex_state = 903},
  [315] = {.lex_state = 489},
  [316] = {.lex_state = 903},
  [317] = {.lex_state = 903},
  [318] = {.lex_state = 903},
  [319] = {.lex_state = 903},
  [320] = {.lex_state = 603},
  [321] = {.lex_state = 513},
  [322] = {.lex_state = 603},
  [323] = {.lex_state = 603},
  [324] = {.lex_state = 603},
  [325] = {.lex_state = 603},
  [326] = {.lex_state = 181},
  [327] = {.lex_state = 181},
  [328] = {.lex_state = 181},
  [329] = {.lex_state = 788},
  [330] = {.lex_state = 181},
  [331] = {.lex_state = 788},
  [332] = {.lex_state = 959},
  [333] = {.lex_state = 559},
  [334] = {.lex_state = 181},
  [335] = {.lex_state = 181},
  [336] = {.lex_state = 559},
  [337] = {.lex_state = 181},
  [338] = {.lex_state = 559},
  [339] = {.lex_state = 959},
  [340] = {.lex_state = 959},
  [341] = {.lex_state = 181},
  [342] = {.lex_state = 788},
  [343] = {.lex_state = 788},
  [344] = {.lex_state = 788},
  [345] = {.lex_state = 788},
  [346] = {.lex_state = 947, .external_lex_state = 3},
  [347] = {.lex_state = 947, .external_lex_state = 3},
  [348] = {.lex_state = 788},
  [349] = {.lex_state = 947, .external_lex_state = 3},
  [350] = {.lex_state = 181},
  [351] = {.lex_state = 788},
  [352] = {.lex_state = 508, .external_lex_state = 3},
  [353] = {.lex_state = 788},
  [354] = {.lex_state = 788},
  [355] = {.lex_state = 181},
  [356] = {.lex_state = 508, .external_lex_state = 3},
  [357] = {.lex_state = 918, .external_lex_state = 4},
  [358] = {.lex_state = 533},
  [359] = {.lex_state = 484},
  [360] = {.lex_state = 351},
  [361] = {.lex_state = 181},
  [362] = {.lex_state = 559},
  [363] = {.lex_state = 181},
  [364] = {.lex_state = 923, .external_lex_state = 3},
  [365] = {.lex_state = 559},
  [366] = {.lex_state = 484},
  [367] = {.lex_state = 508, .external_lex_state = 3},
  [368] = {.lex_state = 181},
  [369] = {.lex_state = 508, .external_lex_state = 3},
  [370] = {.lex_state = 181},
  [371] = {.lex_state = 964},
  [372] = {.lex_state = 500},
  [373] = {.lex_state = 508, .external_lex_state = 3},
  [374] = {.lex_state = 484},
  [375] = {.lex_state = 181},
  [376] = {.lex_state = 484},
  [377] = {.lex_state = 508, .external_lex_state = 3},
  [378] = {.lex_state = 181},
  [379] = {.lex_state = 181},
  [380] = {.lex_state = 181},
  [381] = {.lex_state = 351},
  [382] = {.lex_state = 508, .external_lex_state = 3},
  [383] = {.lex_state = 456, .external_lex_state = 2},
  [384] = {.lex_state = 508, .external_lex_state = 3},
  [385] = {.lex_state = 508, .external_lex_state = 3},
  [386] = {.lex_state = 928, .external_lex_state = 4},
  [387] = {.lex_state = 508, .external_lex_state = 3},
  [388] = {.lex_state = 937},
  [389] = {.lex_state = 351},
  [390] = {.lex_state = 508, .external_lex_state = 3},
  [391] = {.lex_state = 456, .external_lex_state = 2},
  [392] = {.lex_state = 608, .external_lex_state = 3},
  [393] = {.lex_state = 835, .external_lex_state = 3},
  [394] = {.lex_state = 508, .external_lex_state = 3},
  [395] = {.lex_state = 181},
  [396] = {.lex_state = 840, .external_lex_state = 3},
  [397] = {.lex_state = 181},
  [398] = {.lex_state = 181},
  [399] = {.lex_state = 181},
  [400] = {.lex_state = 942, .external_lex_state = 3},
  [401] = {.lex_state = 942, .external_lex_state = 3},
  [402] = {.lex_state = 835, .external_lex_state = 3},
  [403] = {.lex_state = 508, .external_lex_state = 3},
  [404] = {.lex_state = 835, .external_lex_state = 3},
  [405] = {.lex_state = 879},
  [406] = {.lex_state = 886},
  [407] = {.lex_state = 500},
  [408] = {.lex_state = 952},
  [409] = {.lex_state = 484, .external_lex_state = 3},
  [410] = {.lex_state = 181},
  [411] = {.lex_state = 351},
  [412] = {.lex_state = 181},
  [413] = {.lex_state = 351},
  [414] = {.lex_state = 783},
  [415] = {.lex_state = 783},
  [416] = {.lex_state = 783},
  [417] = {.lex_state = 351},
  [418] = {.lex_state = 181},
  [419] = {.lex_state = 783},
  [420] = {.lex_state = 783},
  [421] = {.lex_state = 783},
  [422] = {.lex_state = 603},
  [423] = {.lex_state = 181},
  [424] = {.lex_state = 903},
  [425] = {.lex_state = 603},
  [426] = {.lex_state = 484},
  [427] = {.lex_state = 181},
  [428] = {.lex_state = 181},
  [429] = {.lex_state = 181},
  [430] = {.lex_state = 181},
  [431] = {.lex_state = 181},
  [432] = {.lex_state = 908, .external_lex_state = 3},
  [433] = {.lex_state = 181},
  [434] = {.lex_state = 788},
  [435] = {.lex_state = 959},
  [436] = {.lex_state = 788},
  [437] = {.lex_state = 959},
  [438] = {.lex_state = 181},
  [439] = {.lex_state = 788},
  [440] = {.lex_state = 908, .external_lex_state = 3},
  [441] = {.lex_state = 181},
  [442] = {.lex_state = 788},
  [443] = {.lex_state = 351},
  [444] = {.lex_state = 181},
  [445] = {.lex_state = 788},
  [446] = {.lex_state = 788},
  [447] = {.lex_state = 788},
  [448] = {.lex_state = 181},
  [449] = {.lex_state = 788},
  [450] = {.lex_state = 788},
  [451] = {.lex_state = 908, .external_lex_state = 3},
  [452] = {.lex_state = 788},
  [453] = {.lex_state = 947, .external_lex_state = 3},
  [454] = {.lex_state = 181},
  [455] = {.lex_state = 947, .external_lex_state = 3},
  [456] = {.lex_state = 947, .external_lex_state = 3},
  [457] = {.lex_state = 788},
  [458] = {.lex_state = 508, .external_lex_state = 3},
  [459] = {.lex_state = 508, .external_lex_state = 3},
  [460] = {.lex_state = 918, .external_lex_state = 4},
  [461] = {.lex_state = 181},
  [462] = {.lex_state = 508, .external_lex_state = 3},
  [463] = {.lex_state = 181},
  [464] = {.lex_state = 484},
  [465] = {.lex_state = 351},
  [466] = {.lex_state = 181},
  [467] = {.lex_state = 181},
  [468] = {.lex_state = 508, .external_lex_state = 3},
  [469] = {.lex_state = 181},
  [470] = {.lex_state = 181},
  [471] = {.lex_state = 181},
  [472] = {.lex_state = 484},
  [473] = {.lex_state = 508, .external_lex_state = 3},
  [474] = {.lex_state = 559},
  [475] = {.lex_state = 181},
  [476] = {.lex_state = 964},
  [477] = {.lex_state = 508, .external_lex_state = 3},
  [478] = {.lex_state = 181},
  [479] = {.lex_state = 181},
  [480] = {.lex_state = 181},
  [481] = {.lex_state = 508, .external_lex_state = 3},
  [482] = {.lex_state = 928, .external_lex_state = 4},
  [483] = {.lex_state = 508, .external_lex_state = 3},
  [484] = {.lex_state = 508, .external_lex_state = 3},
  [485] = {.lex_state = 937},
  [486] = {.lex_state = 508, .external_lex_state = 3},
  [487] = {.lex_state = 508, .external_lex_state = 3},
  [488] = {.lex_state = 508, .external_lex_state = 3},
  [489] = {.lex_state = 508, .external_lex_state = 3},
  [490] = {.lex_state = 181},
  [491] = {.lex_state = 840, .external_lex_state = 3},
  [492] = {.lex_state = 840, .external_lex_state = 3},
  [493] = {.lex_state = 461},
  [494] = {.lex_state = 181},
  [495] = {.lex_state = 461},
  [496] = {.lex_state = 559},
  [497] = {.lex_state = 181},
  [498] = {.lex_state = 508, .external_lex_state = 3},
  [499] = {.lex_state = 181},
  [500] = {.lex_state = 783},
  [501] = {.lex_state = 783},
  [502] = {.lex_state = 783},
  [503] = {.lex_state = 351},
  [504] = {.lex_state = 181},
  [505] = {.lex_state = 903},
  [506] = {.lex_state = 181},
  [507] = {.lex_state = 484},
  [508] = {.lex_state = 181},
  [509] = {.lex_state = 959},
  [510] = {.lex_state = 181},
  [511] = {.lex_state = 959},
  [512] = {.lex_state = 181},
  [513] = {.lex_state = 181},
  [514] = {.lex_state = 908, .external_lex_state = 3},
  [515] = {.lex_state = 959},
  [516] = {.lex_state = 959},
  [517] = {.lex_state = 959},
  [518] = {.lex_state = 788},
  [519] = {.lex_state = 181},
  [520] = {.lex_state = 788},
  [521] = {.lex_state = 908, .external_lex_state = 3},
  [522] = {.lex_state = 959},
  [523] = {.lex_state = 788},
  [524] = {.lex_state = 351},
  [525] = {.lex_state = 959},
  [526] = {.lex_state = 788},
  [527] = {.lex_state = 947, .external_lex_state = 3},
  [528] = {.lex_state = 181},
  [529] = {.lex_state = 947, .external_lex_state = 3},
  [530] = {.lex_state = 918, .external_lex_state = 4},
  [531] = {.lex_state = 181},
  [532] = {.lex_state = 181},
  [533] = {.lex_state = 181},
  [534] = {.lex_state = 181},
  [535] = {.lex_state = 181},
  [536] = {.lex_state = 559},
  [537] = {.lex_state = 181},
  [538] = {.lex_state = 181},
  [539] = {.lex_state = 181},
  [540] = {.lex_state = 508, .external_lex_state = 3},
  [541] = {.lex_state = 928, .external_lex_state = 4},
  [542] = {.lex_state = 937},
  [543] = {.lex_state = 508, .external_lex_state = 3},
  [544] = {.lex_state = 181},
  [545] = {.lex_state = 840, .external_lex_state = 3},
  [546] = {.lex_state = 461},
  [547] = {.lex_state = 181},
  [548] = {.lex_state = 484},
  [549] = {.lex_state = 181},
  [550] = {.lex_state = 461},
  [551] = {.lex_state = 559},
  [552] = {.lex_state = 181},
  [553] = {.lex_state = 959},
  [554] = {.lex_state = 959},
  [555] = {.lex_state = 959},
  [556] = {.lex_state = 959},
  [557] = {.lex_state = 181},
  [558] = {.lex_state = 788},
  [559] = {.lex_state = 947, .external_lex_state = 3},
  [560] = {.lex_state = 181},
  [561] = {.lex_state = 508, .external_lex_state = 3},
  [562] = {.lex_state = 181},
  [563] = {.lex_state = 181},
  [564] = {.lex_state = 181},
  [565] = {.lex_state = 181},
  [566] = {.lex_state = 559},
  [567] = {.lex_state = 181},
  [568] = {.lex_state = 181},
  [569] = {.lex_state = 181},
  [570] = {.lex_state = 181},
  [571] = {.lex_state = 181},
  [572] = {.lex_state = 959},
  [573] = {.lex_state = 508, .external_lex_state = 3},
  [574] = {.lex_state = 181},
  [575] = {.lex_state = 181},
  [576] = {.lex_state = 181},
  [577] = {.lex_state = 181},
  [578] = {.lex_state = 181},
  [579] = {.lex_state = 181},
  [580] = {.lex_state = 508, .external_lex_state = 3},
  [581] = {.lex_state = 181},
  [582] = {.lex_state = 181},
  [583] = {.lex_state = 181},
  [584] = {.lex_state = 181},
  [585] = {.lex_state = 508, .external_lex_state = 3},
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
    [anon_sym_LBRACK] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(3),
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
    [anon_sym_LBRACK] = ACTIONS(79),
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
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_RBRACK] = ACTIONS(95),
    [anon_sym_DASH] = ACTIONS(97),
    [anon_sym_AT] = ACTIONS(97),
    [anon_sym__] = ACTIONS(99),
    [anon_sym_BQUOTE] = ACTIONS(95),
    [anon_sym_COLON] = ACTIONS(97),
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
    [anon_sym_LBRACK] = ACTIONS(111),
    [anon_sym_RBRACK] = ACTIONS(111),
    [anon_sym_DASH] = ACTIONS(113),
    [anon_sym_AT] = ACTIONS(113),
    [anon_sym__] = ACTIONS(115),
    [anon_sym_BQUOTE] = ACTIONS(111),
    [anon_sym_COLON] = ACTIONS(113),
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
    [sym__function_pattern] = STATE(95),
    [sym_list_pattern] = STATE(89),
    [sym_tuple_pattern] = STATE(89),
    [sym_parenthesized_pattern] = STATE(89),
    [sym_as_pattern] = STATE(89),
    [sym_wildcard] = STATE(89),
    [sym__variable] = STATE(96),
    [sym_qualified_variable_identifier] = STATE(97),
    [sym__literal] = STATE(89),
    [sym__identifier] = STATE(98),
    [sym_simple_type] = STATE(99),
    [sym_variable_identifier] = STATE(100),
    [sym_constructor_identifier] = STATE(101),
    [sym_integer] = STATE(92),
    [sym_char] = STATE(92),
    [sym_string] = STATE(92),
    [aux_sym_function_head_repeat1] = STATE(102),
    [sym__layout_semicolon] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym__] = ACTIONS(155),
    [sym_list_constructor] = ACTIONS(157),
    [sym__variable_pattern] = ACTIONS(159),
    [sym__constructor_pattern] = ACTIONS(161),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(163),
    [anon_sym_SQUOTE] = ACTIONS(165),
    [anon_sym_DQUOTE] = ACTIONS(167),
    [sym__integer_literal] = ACTIONS(71),
    [sym__octal_literal] = ACTIONS(71),
    [sym__hexidecimal_literal] = ACTIONS(71),
  },
  [24] = {
    [sym__layout_semicolon] = ACTIONS(169),
    [anon_sym_SEMI] = ACTIONS(171),
    [anon_sym_LPAREN] = ACTIONS(171),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym__] = ACTIONS(171),
    [sym_list_constructor] = ACTIONS(171),
    [sym__variable_pattern] = ACTIONS(173),
    [sym__constructor_pattern] = ACTIONS(173),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(173),
    [anon_sym_SQUOTE] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(171),
    [sym__integer_literal] = ACTIONS(171),
    [sym__octal_literal] = ACTIONS(171),
    [sym__hexidecimal_literal] = ACTIONS(171),
  },
  [25] = {
    [sym__layout_semicolon] = ACTIONS(147),
    [anon_sym_SEMI] = ACTIONS(149),
    [sym_comment] = ACTIONS(5),
  },
  [26] = {
    [sym__layout_semicolon] = ACTIONS(175),
    [anon_sym_SEMI] = ACTIONS(177),
    [sym_comment] = ACTIONS(5),
  },
  [27] = {
    [sym__layout_semicolon] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(139),
    [anon_sym_COLON_COLON] = ACTIONS(179),
    [sym_comment] = ACTIONS(5),
  },
  [28] = {
    [sym__layout_semicolon] = ACTIONS(181),
    [anon_sym_SEMI] = ACTIONS(183),
    [anon_sym_LPAREN] = ACTIONS(171),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym__] = ACTIONS(171),
    [anon_sym_COLON_COLON] = ACTIONS(183),
    [sym_list_constructor] = ACTIONS(171),
    [sym__variable_pattern] = ACTIONS(173),
    [sym__constructor_pattern] = ACTIONS(173),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(173),
    [anon_sym_SQUOTE] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(171),
    [sym__integer_literal] = ACTIONS(171),
    [sym__octal_literal] = ACTIONS(171),
    [sym__hexidecimal_literal] = ACTIONS(171),
  },
  [29] = {
    [sym__layout_semicolon] = ACTIONS(181),
    [anon_sym_SEMI] = ACTIONS(183),
    [anon_sym_COLON_COLON] = ACTIONS(183),
    [sym__variable_pattern] = ACTIONS(183),
    [sym__constructor_pattern] = ACTIONS(185),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(185),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_DQUOTE] = ACTIONS(183),
    [sym__integer_literal] = ACTIONS(183),
    [sym__octal_literal] = ACTIONS(183),
    [sym__hexidecimal_literal] = ACTIONS(183),
  },
  [30] = {
    [sym_import] = STATE(20),
    [sym__declaration] = STATE(104),
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
    [ts_builtin_sym_end] = ACTIONS(187),
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
    [sym_module_exports] = STATE(107),
    [anon_sym_where] = ACTIONS(189),
    [anon_sym_LPAREN] = ACTIONS(191),
    [sym_comment] = ACTIONS(5),
  },
  [32] = {
    [sym_module_identifier] = ACTIONS(193),
    [sym_comment] = ACTIONS(5),
  },
  [33] = {
    [sym_import_specification] = STATE(112),
    [sym__layout_semicolon] = ACTIONS(195),
    [anon_sym_SEMI] = ACTIONS(197),
    [anon_sym_LPAREN] = ACTIONS(199),
    [anon_sym_as] = ACTIONS(201),
    [anon_sym_hiding] = ACTIONS(203),
    [sym_comment] = ACTIONS(5),
  },
  [34] = {
    [anon_sym_ccall] = ACTIONS(205),
    [anon_sym_stdcall] = ACTIONS(205),
    [anon_sym_cplusplus] = ACTIONS(205),
    [anon_sym_jvm] = ACTIONS(205),
    [anon_sym_dotnet] = ACTIONS(205),
    [sym_comment] = ACTIONS(5),
  },
  [35] = {
    [sym_calling_convention] = STATE(114),
    [anon_sym_ccall] = ACTIONS(207),
    [anon_sym_stdcall] = ACTIONS(207),
    [anon_sym_cplusplus] = ACTIONS(207),
    [anon_sym_jvm] = ACTIONS(207),
    [anon_sym_dotnet] = ACTIONS(207),
    [sym_comment] = ACTIONS(5),
  },
  [36] = {
    [sym__identifier] = STATE(116),
    [sym_variable_identifier] = STATE(117),
    [sym_constructor_identifier] = STATE(117),
    [anon_sym_RPAREN] = ACTIONS(209),
    [sym__variable_pattern] = ACTIONS(211),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [37] = {
    [sym__variable] = STATE(25),
    [sym_qualified_variable_identifier] = STATE(24),
    [sym__expression] = STATE(120),
    [sym_do_expression] = STATE(25),
    [sym__statement] = STATE(121),
    [sym__literal] = STATE(25),
    [sym_variable_identifier] = STATE(24),
    [sym_integer] = STATE(15),
    [sym_char] = STATE(15),
    [sym_string] = STATE(15),
    [aux_sym_statement_list_repeat1] = STATE(122),
    [sym__layout_close_brace] = ACTIONS(213),
    [anon_sym_do] = ACTIONS(19),
    [sym__variable_pattern] = ACTIONS(33),
    [sym__constructor_pattern] = ACTIONS(215),
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
    [sym__expression] = STATE(123),
    [sym_do_expression] = STATE(25),
    [sym__statement] = STATE(124),
    [sym__literal] = STATE(25),
    [sym_variable_identifier] = STATE(24),
    [sym_integer] = STATE(15),
    [sym_char] = STATE(15),
    [sym_string] = STATE(15),
    [aux_sym_statement_list_repeat1] = STATE(125),
    [anon_sym_RBRACE] = ACTIONS(217),
    [anon_sym_do] = ACTIONS(19),
    [sym__variable_pattern] = ACTIONS(33),
    [sym__constructor_pattern] = ACTIONS(215),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym__integer_literal] = ACTIONS(43),
    [sym__octal_literal] = ACTIONS(43),
    [sym__hexidecimal_literal] = ACTIONS(43),
  },
  [39] = {
    [sym__layout_semicolon] = ACTIONS(219),
    [anon_sym_SEMI] = ACTIONS(221),
    [sym_comment] = ACTIONS(5),
  },
  [40] = {
    [sym_class] = STATE(126),
    [sym_constructor_identifier] = STATE(127),
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
    [sym__variable_pattern] = ACTIONS(223),
    [sym_comment] = ACTIONS(5),
  },
  [42] = {
    [sym_constructor_identifier] = STATE(128),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [43] = {
    [anon_sym_EQ_GT] = ACTIONS(225),
    [sym_comment] = ACTIONS(5),
  },
  [44] = {
    [sym_variable_identifier] = STATE(133),
    [aux_sym_type_class_repeat1] = STATE(134),
    [anon_sym_where] = ACTIONS(227),
    [anon_sym_LPAREN] = ACTIONS(229),
    [sym__variable_pattern] = ACTIONS(231),
    [sym_comment] = ACTIONS(5),
  },
  [45] = {
    [sym_constructor_identifier] = STATE(135),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [46] = {
    [sym_variable_identifier] = STATE(133),
    [aux_sym_type_class_repeat1] = STATE(137),
    [anon_sym_where] = ACTIONS(233),
    [anon_sym_LPAREN] = ACTIONS(229),
    [sym__variable_pattern] = ACTIONS(231),
    [sym_comment] = ACTIONS(5),
  },
  [47] = {
    [sym__layout_semicolon] = ACTIONS(235),
    [anon_sym_SEMI] = ACTIONS(237),
    [anon_sym_COMMA] = ACTIONS(237),
    [anon_sym_DASH] = ACTIONS(237),
    [anon_sym_BANG] = ACTIONS(237),
    [anon_sym_DOT] = ACTIONS(237),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(237),
    [anon_sym_DOLLAR] = ACTIONS(237),
    [anon_sym_PERCENT] = ACTIONS(237),
    [anon_sym_AMP] = ACTIONS(237),
    [anon_sym_1] = ACTIONS(237),
    [anon_sym_PLUS] = ACTIONS(237),
    [anon_sym_SLASH] = ACTIONS(237),
    [anon_sym_LT] = ACTIONS(237),
    [anon_sym_GT] = ACTIONS(237),
    [anon_sym_QMARK] = ACTIONS(237),
    [anon_sym_CARET] = ACTIONS(237),
  },
  [48] = {
    [sym__identifier] = STATE(138),
    [sym_variable_identifier] = STATE(117),
    [sym_constructor_identifier] = STATE(117),
    [sym__variable_pattern] = ACTIONS(211),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [49] = {
    [sym__constructor_symbol] = STATE(140),
    [aux_sym_constructor_symbol_repeat1] = STATE(141),
    [sym__layout_semicolon] = ACTIONS(239),
    [anon_sym_SEMI] = ACTIONS(241),
    [anon_sym_COMMA] = ACTIONS(241),
    [anon_sym_DASH] = ACTIONS(243),
    [anon_sym_COLON] = ACTIONS(243),
    [anon_sym_BANG] = ACTIONS(243),
    [anon_sym_DOT] = ACTIONS(243),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(243),
    [anon_sym_DOLLAR] = ACTIONS(243),
    [anon_sym_PERCENT] = ACTIONS(243),
    [anon_sym_AMP] = ACTIONS(243),
    [anon_sym_1] = ACTIONS(243),
    [anon_sym_PLUS] = ACTIONS(243),
    [anon_sym_SLASH] = ACTIONS(243),
    [anon_sym_LT] = ACTIONS(243),
    [anon_sym_GT] = ACTIONS(243),
    [anon_sym_QMARK] = ACTIONS(243),
    [anon_sym_CARET] = ACTIONS(243),
  },
  [50] = {
    [anon_sym_RBRACE] = ACTIONS(131),
    [anon_sym_LPAREN] = ACTIONS(131),
    [anon_sym_COMMA] = ACTIONS(131),
    [anon_sym_RPAREN] = ACTIONS(131),
    [anon_sym_EQ] = ACTIONS(131),
    [anon_sym_LBRACK] = ACTIONS(131),
    [anon_sym_RBRACK] = ACTIONS(131),
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
    [aux_sym_fixity_repeat1] = STATE(143),
    [sym__layout_semicolon] = ACTIONS(245),
    [anon_sym_SEMI] = ACTIONS(247),
    [anon_sym_COMMA] = ACTIONS(249),
    [sym_comment] = ACTIONS(5),
  },
  [52] = {
    [sym__layout_semicolon] = ACTIONS(251),
    [anon_sym_SEMI] = ACTIONS(253),
    [anon_sym_COMMA] = ACTIONS(253),
    [sym_comment] = ACTIONS(5),
  },
  [53] = {
    [sym__op] = STATE(144),
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
    [sym__variable_symbol] = STATE(145),
    [aux_sym_variable_symbol_repeat1] = STATE(146),
    [sym__layout_semicolon] = ACTIONS(255),
    [anon_sym_SEMI] = ACTIONS(257),
    [anon_sym_COMMA] = ACTIONS(257),
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
    [sym__variable_pattern] = ACTIONS(223),
    [sym__constructor_pattern] = ACTIONS(223),
    [sym_comment] = ACTIONS(5),
  },
  [56] = {
    [sym_simple_type] = STATE(147),
    [sym_constructor_identifier] = STATE(148),
    [sym__constructor_pattern] = ACTIONS(73),
    [sym_comment] = ACTIONS(5),
  },
  [57] = {
    [sym_constructors] = STATE(151),
    [sym_constructor] = STATE(152),
    [sym_deriving] = STATE(153),
    [sym_constructor_identifier] = STATE(154),
    [sym__layout_semicolon] = ACTIONS(259),
    [anon_sym_SEMI] = ACTIONS(261),
    [anon_sym_EQ] = ACTIONS(263),
    [anon_sym_deriving] = ACTIONS(265),
    [sym__constructor_pattern] = ACTIONS(73),
    [sym_comment] = ACTIONS(5),
  },
  [58] = {
    [sym_variable_identifier] = STATE(156),
    [aux_sym_type_class_repeat1] = STATE(157),
    [sym__layout_semicolon] = ACTIONS(267),
    [anon_sym_SEMI] = ACTIONS(269),
    [anon_sym_LPAREN] = ACTIONS(229),
    [anon_sym_EQ] = ACTIONS(269),
    [anon_sym_deriving] = ACTIONS(269),
    [sym__variable_pattern] = ACTIONS(271),
    [sym__constructor_pattern] = ACTIONS(273),
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
    [sym__constructor_pattern] = ACTIONS(223),
    [sym_comment] = ACTIONS(5),
  },
  [60] = {
    [sym_simple_type] = STATE(158),
    [sym_constructor_identifier] = STATE(64),
    [sym__constructor_pattern] = ACTIONS(75),
    [sym_comment] = ACTIONS(5),
  },
  [61] = {
    [anon_sym_EQ] = ACTIONS(275),
    [sym_comment] = ACTIONS(5),
  },
  [62] = {
    [sym_variable_identifier] = STATE(161),
    [aux_sym_type_class_repeat1] = STATE(162),
    [anon_sym_LPAREN] = ACTIONS(229),
    [anon_sym_EQ] = ACTIONS(269),
    [sym__variable_pattern] = ACTIONS(277),
    [sym_comment] = ACTIONS(5),
  },
  [63] = {
    [anon_sym_EQ] = ACTIONS(279),
    [sym_comment] = ACTIONS(5),
  },
  [64] = {
    [sym_variable_identifier] = STATE(165),
    [aux_sym_type_class_repeat1] = STATE(162),
    [anon_sym_EQ] = ACTIONS(269),
    [sym__variable_pattern] = ACTIONS(281),
    [sym_comment] = ACTIONS(5),
  },
  [65] = {
    [sym__layout_semicolon] = ACTIONS(283),
    [anon_sym_SEMI] = ACTIONS(285),
    [anon_sym_LPAREN] = ACTIONS(285),
    [anon_sym_LBRACK] = ACTIONS(285),
    [anon_sym__] = ACTIONS(285),
    [sym_list_constructor] = ACTIONS(285),
    [sym__variable_pattern] = ACTIONS(287),
    [sym__constructor_pattern] = ACTIONS(287),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(287),
    [anon_sym_SQUOTE] = ACTIONS(285),
    [anon_sym_DQUOTE] = ACTIONS(285),
    [sym__integer_literal] = ACTIONS(285),
    [sym__octal_literal] = ACTIONS(285),
    [sym__hexidecimal_literal] = ACTIONS(285),
  },
  [66] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(289),
  },
  [67] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(291),
  },
  [68] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(293),
  },
  [69] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(295),
  },
  [70] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(297),
  },
  [71] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(299),
  },
  [72] = {
    [sym__char_escape] = STATE(168),
    [sym__ascii] = STATE(168),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(301),
    [anon_sym_DQUOTE] = ACTIONS(301),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(303),
    [anon_sym_AMP] = ACTIONS(301),
    [anon_sym_CARET] = ACTIONS(305),
    [anon_sym_BSLASH] = ACTIONS(301),
    [anon_sym_x] = ACTIONS(307),
    [anon_sym_X] = ACTIONS(307),
    [anon_sym_o] = ACTIONS(309),
    [anon_sym_O] = ACTIONS(309),
    [anon_sym_a] = ACTIONS(301),
    [anon_sym_b] = ACTIONS(301),
    [anon_sym_f] = ACTIONS(301),
    [anon_sym_n] = ACTIONS(301),
    [anon_sym_r] = ACTIONS(301),
    [anon_sym_t] = ACTIONS(301),
    [anon_sym_v] = ACTIONS(301),
    [anon_sym_NUL] = ACTIONS(311),
    [anon_sym_SOH] = ACTIONS(311),
    [anon_sym_STX] = ACTIONS(311),
    [anon_sym_ETX] = ACTIONS(311),
    [anon_sym_EOT] = ACTIONS(311),
    [anon_sym_ENQ] = ACTIONS(311),
    [anon_sym_ACK] = ACTIONS(311),
    [anon_sym_BEL] = ACTIONS(311),
    [anon_sym_BS] = ACTIONS(311),
    [anon_sym_HT] = ACTIONS(311),
    [anon_sym_LF] = ACTIONS(311),
    [anon_sym_VT] = ACTIONS(311),
    [anon_sym_FF] = ACTIONS(311),
    [anon_sym_CR] = ACTIONS(311),
    [anon_sym_SO] = ACTIONS(311),
    [anon_sym_SI] = ACTIONS(311),
    [anon_sym_DLE] = ACTIONS(311),
    [anon_sym_DC1] = ACTIONS(311),
    [anon_sym_DC2] = ACTIONS(311),
    [anon_sym_DC3] = ACTIONS(311),
    [anon_sym_DC4] = ACTIONS(311),
    [anon_sym_NAK] = ACTIONS(311),
    [anon_sym_SYN] = ACTIONS(311),
    [anon_sym_ETB] = ACTIONS(311),
    [anon_sym_CAN] = ACTIONS(311),
    [anon_sym_EM] = ACTIONS(311),
    [anon_sym_SUB] = ACTIONS(311),
    [anon_sym_ESC] = ACTIONS(311),
    [anon_sym_FS] = ACTIONS(311),
    [anon_sym_GS] = ACTIONS(311),
    [anon_sym_RS] = ACTIONS(311),
    [anon_sym_US] = ACTIONS(311),
    [anon_sym_SP] = ACTIONS(311),
    [anon_sym_DEL] = ACTIONS(311),
  },
  [73] = {
    [anon_sym_SEMI] = ACTIONS(313),
    [anon_sym_LBRACE] = ACTIONS(313),
    [anon_sym_RBRACE] = ACTIONS(313),
    [anon_sym_LPAREN] = ACTIONS(313),
    [anon_sym_RPAREN] = ACTIONS(313),
    [anon_sym_EQ] = ACTIONS(313),
    [anon_sym_LBRACK] = ACTIONS(313),
    [anon_sym_RBRACK] = ACTIONS(313),
    [anon_sym_DASH] = ACTIONS(313),
    [anon_sym_AT] = ACTIONS(313),
    [anon_sym__] = ACTIONS(313),
    [anon_sym_BQUOTE] = ACTIONS(313),
    [anon_sym_COLON] = ACTIONS(313),
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
  [74] = {
    [anon_sym_SEMI] = ACTIONS(315),
    [anon_sym_LBRACE] = ACTIONS(315),
    [anon_sym_RBRACE] = ACTIONS(315),
    [anon_sym_LPAREN] = ACTIONS(315),
    [anon_sym_RPAREN] = ACTIONS(315),
    [anon_sym_EQ] = ACTIONS(315),
    [anon_sym_LBRACK] = ACTIONS(315),
    [anon_sym_RBRACK] = ACTIONS(315),
    [anon_sym_DASH] = ACTIONS(315),
    [anon_sym_AT] = ACTIONS(315),
    [anon_sym__] = ACTIONS(315),
    [anon_sym_BQUOTE] = ACTIONS(315),
    [anon_sym_COLON] = ACTIONS(315),
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
  [75] = {
    [anon_sym_SEMI] = ACTIONS(317),
    [anon_sym_LBRACE] = ACTIONS(317),
    [anon_sym_RBRACE] = ACTIONS(317),
    [anon_sym_LPAREN] = ACTIONS(317),
    [anon_sym_RPAREN] = ACTIONS(317),
    [anon_sym_EQ] = ACTIONS(317),
    [anon_sym_LBRACK] = ACTIONS(317),
    [anon_sym_RBRACK] = ACTIONS(317),
    [anon_sym_DASH] = ACTIONS(317),
    [anon_sym_AT] = ACTIONS(317),
    [anon_sym__] = ACTIONS(317),
    [anon_sym_BQUOTE] = ACTIONS(317),
    [anon_sym_COLON] = ACTIONS(317),
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
  [76] = {
    [anon_sym_SEMI] = ACTIONS(319),
    [anon_sym_LBRACE] = ACTIONS(319),
    [anon_sym_RBRACE] = ACTIONS(319),
    [anon_sym_LPAREN] = ACTIONS(319),
    [anon_sym_RPAREN] = ACTIONS(319),
    [anon_sym_EQ] = ACTIONS(319),
    [anon_sym_LBRACK] = ACTIONS(319),
    [anon_sym_RBRACK] = ACTIONS(319),
    [anon_sym_DASH] = ACTIONS(319),
    [anon_sym_AT] = ACTIONS(319),
    [anon_sym__] = ACTIONS(319),
    [anon_sym_BQUOTE] = ACTIONS(319),
    [anon_sym_COLON] = ACTIONS(319),
    [anon_sym_PIPE] = ACTIONS(319),
    [anon_sym_BANG] = ACTIONS(319),
    [anon_sym_DOT] = ACTIONS(319),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(319),
    [anon_sym_DQUOTE] = ACTIONS(319),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(319),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(319),
    [sym__ascii_large] = ACTIONS(319),
    [anon_sym_POUND] = ACTIONS(319),
    [anon_sym_DOLLAR] = ACTIONS(319),
    [anon_sym_PERCENT] = ACTIONS(319),
    [anon_sym_AMP] = ACTIONS(319),
    [anon_sym_1] = ACTIONS(319),
    [anon_sym_PLUS] = ACTIONS(319),
    [anon_sym_SLASH] = ACTIONS(319),
    [anon_sym_LT] = ACTIONS(319),
    [anon_sym_GT] = ACTIONS(319),
    [anon_sym_QMARK] = ACTIONS(319),
    [anon_sym_CARET] = ACTIONS(319),
    [anon_sym_TILDE] = ACTIONS(319),
    [anon_sym_BSLASH] = ACTIONS(319),
    [sym__space] = ACTIONS(319),
    [sym__newline] = ACTIONS(319),
    [sym__tab] = ACTIONS(319),
    [sym__vertical_tab] = ACTIONS(319),
  },
  [77] = {
    [sym__layout_semicolon] = ACTIONS(321),
    [anon_sym_SEMI] = ACTIONS(323),
    [sym__variable_pattern] = ACTIONS(323),
    [sym__constructor_pattern] = ACTIONS(325),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(325),
    [anon_sym_SQUOTE] = ACTIONS(323),
    [anon_sym_DQUOTE] = ACTIONS(323),
    [sym__integer_literal] = ACTIONS(323),
    [sym__octal_literal] = ACTIONS(323),
    [sym__hexidecimal_literal] = ACTIONS(323),
  },
  [78] = {
    [anon_sym_SEMI] = ACTIONS(327),
    [anon_sym_LBRACE] = ACTIONS(327),
    [anon_sym_RBRACE] = ACTIONS(327),
    [anon_sym_LPAREN] = ACTIONS(327),
    [anon_sym_RPAREN] = ACTIONS(327),
    [anon_sym_EQ] = ACTIONS(327),
    [anon_sym_LBRACK] = ACTIONS(327),
    [anon_sym_RBRACK] = ACTIONS(327),
    [anon_sym_DASH] = ACTIONS(327),
    [anon_sym_AT] = ACTIONS(327),
    [anon_sym__] = ACTIONS(327),
    [anon_sym_BQUOTE] = ACTIONS(327),
    [anon_sym_COLON] = ACTIONS(327),
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
  [79] = {
    [anon_sym_SEMI] = ACTIONS(329),
    [anon_sym_LBRACE] = ACTIONS(329),
    [anon_sym_RBRACE] = ACTIONS(329),
    [anon_sym_LPAREN] = ACTIONS(329),
    [anon_sym_RPAREN] = ACTIONS(329),
    [anon_sym_EQ] = ACTIONS(329),
    [anon_sym_LBRACK] = ACTIONS(329),
    [anon_sym_RBRACK] = ACTIONS(329),
    [anon_sym_DASH] = ACTIONS(329),
    [anon_sym_AT] = ACTIONS(329),
    [anon_sym__] = ACTIONS(329),
    [anon_sym_BQUOTE] = ACTIONS(329),
    [anon_sym_COLON] = ACTIONS(329),
    [anon_sym_PIPE] = ACTIONS(329),
    [anon_sym_BANG] = ACTIONS(329),
    [anon_sym_DOT] = ACTIONS(329),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(329),
    [anon_sym_DQUOTE] = ACTIONS(329),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(329),
    [sym__ascii_large] = ACTIONS(329),
    [anon_sym_POUND] = ACTIONS(329),
    [anon_sym_DOLLAR] = ACTIONS(329),
    [anon_sym_PERCENT] = ACTIONS(329),
    [anon_sym_AMP] = ACTIONS(329),
    [anon_sym_1] = ACTIONS(329),
    [anon_sym_PLUS] = ACTIONS(329),
    [anon_sym_SLASH] = ACTIONS(329),
    [anon_sym_LT] = ACTIONS(329),
    [anon_sym_GT] = ACTIONS(329),
    [anon_sym_QMARK] = ACTIONS(329),
    [anon_sym_CARET] = ACTIONS(329),
    [anon_sym_TILDE] = ACTIONS(329),
    [anon_sym_BSLASH] = ACTIONS(329),
    [sym__space] = ACTIONS(329),
    [sym__newline] = ACTIONS(329),
    [sym__tab] = ACTIONS(329),
    [sym__vertical_tab] = ACTIONS(329),
  },
  [80] = {
    [sym__char_escape] = STATE(174),
    [sym__ascii] = STATE(174),
    [anon_sym_SEMI] = ACTIONS(315),
    [anon_sym_LBRACE] = ACTIONS(315),
    [anon_sym_RBRACE] = ACTIONS(315),
    [anon_sym_LPAREN] = ACTIONS(315),
    [anon_sym_RPAREN] = ACTIONS(315),
    [anon_sym_EQ] = ACTIONS(315),
    [anon_sym_LBRACK] = ACTIONS(315),
    [anon_sym_RBRACK] = ACTIONS(315),
    [anon_sym_DASH] = ACTIONS(315),
    [anon_sym_AT] = ACTIONS(315),
    [anon_sym__] = ACTIONS(315),
    [anon_sym_BQUOTE] = ACTIONS(315),
    [anon_sym_COLON] = ACTIONS(315),
    [anon_sym_PIPE] = ACTIONS(315),
    [anon_sym_BANG] = ACTIONS(315),
    [anon_sym_DOT] = ACTIONS(315),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(331),
    [anon_sym_DQUOTE] = ACTIONS(331),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(333),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(315),
    [sym__ascii_large] = ACTIONS(315),
    [anon_sym_POUND] = ACTIONS(315),
    [anon_sym_DOLLAR] = ACTIONS(315),
    [anon_sym_PERCENT] = ACTIONS(315),
    [anon_sym_AMP] = ACTIONS(331),
    [anon_sym_1] = ACTIONS(315),
    [anon_sym_PLUS] = ACTIONS(315),
    [anon_sym_SLASH] = ACTIONS(315),
    [anon_sym_LT] = ACTIONS(315),
    [anon_sym_GT] = ACTIONS(315),
    [anon_sym_QMARK] = ACTIONS(315),
    [anon_sym_CARET] = ACTIONS(335),
    [anon_sym_TILDE] = ACTIONS(315),
    [anon_sym_BSLASH] = ACTIONS(331),
    [sym__space] = ACTIONS(315),
    [sym__newline] = ACTIONS(315),
    [sym__tab] = ACTIONS(315),
    [sym__vertical_tab] = ACTIONS(315),
    [anon_sym_x] = ACTIONS(337),
    [anon_sym_X] = ACTIONS(337),
    [anon_sym_o] = ACTIONS(339),
    [anon_sym_O] = ACTIONS(339),
    [anon_sym_a] = ACTIONS(331),
    [anon_sym_b] = ACTIONS(331),
    [anon_sym_f] = ACTIONS(331),
    [anon_sym_n] = ACTIONS(331),
    [anon_sym_r] = ACTIONS(331),
    [anon_sym_t] = ACTIONS(331),
    [anon_sym_v] = ACTIONS(331),
    [anon_sym_NUL] = ACTIONS(341),
    [anon_sym_SOH] = ACTIONS(341),
    [anon_sym_STX] = ACTIONS(341),
    [anon_sym_ETX] = ACTIONS(341),
    [anon_sym_EOT] = ACTIONS(341),
    [anon_sym_ENQ] = ACTIONS(341),
    [anon_sym_ACK] = ACTIONS(341),
    [anon_sym_BEL] = ACTIONS(341),
    [anon_sym_BS] = ACTIONS(341),
    [anon_sym_HT] = ACTIONS(341),
    [anon_sym_LF] = ACTIONS(341),
    [anon_sym_VT] = ACTIONS(341),
    [anon_sym_FF] = ACTIONS(341),
    [anon_sym_CR] = ACTIONS(341),
    [anon_sym_SO] = ACTIONS(341),
    [anon_sym_SI] = ACTIONS(341),
    [anon_sym_DLE] = ACTIONS(341),
    [anon_sym_DC1] = ACTIONS(341),
    [anon_sym_DC2] = ACTIONS(341),
    [anon_sym_DC3] = ACTIONS(341),
    [anon_sym_DC4] = ACTIONS(341),
    [anon_sym_NAK] = ACTIONS(341),
    [anon_sym_SYN] = ACTIONS(341),
    [anon_sym_ETB] = ACTIONS(341),
    [anon_sym_CAN] = ACTIONS(341),
    [anon_sym_EM] = ACTIONS(341),
    [anon_sym_SUB] = ACTIONS(341),
    [anon_sym_ESC] = ACTIONS(341),
    [anon_sym_FS] = ACTIONS(341),
    [anon_sym_GS] = ACTIONS(341),
    [anon_sym_RS] = ACTIONS(341),
    [anon_sym_US] = ACTIONS(341),
    [anon_sym_SP] = ACTIONS(341),
    [anon_sym_DEL] = ACTIONS(341),
  },
  [81] = {
    [anon_sym_SEMI] = ACTIONS(343),
    [anon_sym_LBRACE] = ACTIONS(343),
    [anon_sym_RBRACE] = ACTIONS(343),
    [anon_sym_LPAREN] = ACTIONS(343),
    [anon_sym_RPAREN] = ACTIONS(343),
    [anon_sym_EQ] = ACTIONS(343),
    [anon_sym_LBRACK] = ACTIONS(343),
    [anon_sym_RBRACK] = ACTIONS(343),
    [anon_sym_DASH] = ACTIONS(343),
    [anon_sym_AT] = ACTIONS(343),
    [anon_sym__] = ACTIONS(343),
    [anon_sym_BQUOTE] = ACTIONS(343),
    [anon_sym_COLON] = ACTIONS(343),
    [anon_sym_PIPE] = ACTIONS(343),
    [anon_sym_BANG] = ACTIONS(343),
    [anon_sym_DOT] = ACTIONS(343),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(343),
    [anon_sym_DQUOTE] = ACTIONS(343),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(343),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(343),
    [sym__ascii_large] = ACTIONS(343),
    [anon_sym_POUND] = ACTIONS(343),
    [anon_sym_DOLLAR] = ACTIONS(343),
    [anon_sym_PERCENT] = ACTIONS(343),
    [anon_sym_AMP] = ACTIONS(343),
    [anon_sym_1] = ACTIONS(343),
    [anon_sym_PLUS] = ACTIONS(343),
    [anon_sym_SLASH] = ACTIONS(343),
    [anon_sym_LT] = ACTIONS(343),
    [anon_sym_GT] = ACTIONS(343),
    [anon_sym_QMARK] = ACTIONS(343),
    [anon_sym_CARET] = ACTIONS(343),
    [anon_sym_TILDE] = ACTIONS(343),
    [anon_sym_BSLASH] = ACTIONS(343),
    [sym__space] = ACTIONS(343),
    [sym__newline] = ACTIONS(343),
    [sym__tab] = ACTIONS(343),
    [sym__vertical_tab] = ACTIONS(343),
  },
  [82] = {
    [sym__gap] = STATE(179),
    [sym__graphic] = STATE(179),
    [sym__small] = STATE(78),
    [sym__large] = STATE(78),
    [sym__symbol] = STATE(78),
    [sym__special] = STATE(78),
    [sym__escape] = STATE(179),
    [anon_sym_SEMI] = ACTIONS(111),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_RBRACE] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_RPAREN] = ACTIONS(111),
    [anon_sym_EQ] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(111),
    [anon_sym_RBRACK] = ACTIONS(111),
    [anon_sym_DASH] = ACTIONS(113),
    [anon_sym_AT] = ACTIONS(113),
    [anon_sym__] = ACTIONS(115),
    [anon_sym_BQUOTE] = ACTIONS(111),
    [anon_sym_COLON] = ACTIONS(113),
    [anon_sym_PIPE] = ACTIONS(113),
    [anon_sym_BANG] = ACTIONS(113),
    [anon_sym_DOT] = ACTIONS(113),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(345),
    [anon_sym_DQUOTE] = ACTIONS(347),
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
    [ts_builtin_sym_end] = ACTIONS(349),
    [anon_sym_RBRACE] = ACTIONS(351),
    [anon_sym_import] = ACTIONS(351),
    [anon_sym_foreign] = ACTIONS(351),
    [anon_sym_default] = ACTIONS(351),
    [anon_sym_do] = ACTIONS(351),
    [anon_sym_class] = ACTIONS(351),
    [anon_sym_instance] = ACTIONS(351),
    [anon_sym_infixl] = ACTIONS(351),
    [anon_sym_infixr] = ACTIONS(351),
    [anon_sym_infix] = ACTIONS(351),
    [anon_sym_data] = ACTIONS(351),
    [anon_sym_newtype] = ACTIONS(351),
    [anon_sym_type] = ACTIONS(351),
    [sym__variable_pattern] = ACTIONS(353),
    [sym__constructor_pattern] = ACTIONS(353),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(353),
    [anon_sym_SQUOTE] = ACTIONS(351),
    [anon_sym_DQUOTE] = ACTIONS(351),
    [sym__integer_literal] = ACTIONS(351),
    [sym__octal_literal] = ACTIONS(351),
    [sym__hexidecimal_literal] = ACTIONS(351),
  },
  [84] = {
    [sym_general_constructor] = STATE(183),
    [sym__literal] = STATE(183),
    [sym__identifier] = STATE(183),
    [sym_variable_identifier] = STATE(29),
    [sym_constructor_identifier] = STATE(184),
    [sym_integer] = STATE(15),
    [sym_char] = STATE(15),
    [sym_string] = STATE(15),
    [aux_sym_function_body_repeat1] = STATE(185),
    [sym__layout_semicolon] = ACTIONS(355),
    [anon_sym_SEMI] = ACTIONS(357),
    [sym__variable_pattern] = ACTIONS(359),
    [sym__constructor_pattern] = ACTIONS(361),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym__integer_literal] = ACTIONS(43),
    [sym__octal_literal] = ACTIONS(43),
    [sym__hexidecimal_literal] = ACTIONS(43),
  },
  [85] = {
    [sym__layout_semicolon] = ACTIONS(363),
    [anon_sym_SEMI] = ACTIONS(365),
    [sym_comment] = ACTIONS(5),
  },
  [86] = {
    [sym__function_pattern] = STATE(188),
    [sym_list_pattern] = STATE(89),
    [sym_tuple_pattern] = STATE(89),
    [sym_parenthesized_pattern] = STATE(89),
    [sym__pattern] = STATE(189),
    [sym_negative_literal] = STATE(190),
    [sym_general_constructor] = STATE(190),
    [sym_as_pattern] = STATE(89),
    [sym_wildcard] = STATE(89),
    [sym__variable] = STATE(191),
    [sym_qualified_variable_identifier] = STATE(97),
    [sym__literal] = STATE(89),
    [sym__identifier] = STATE(98),
    [sym_simple_type] = STATE(99),
    [sym_variable_identifier] = STATE(100),
    [sym_constructor_identifier] = STATE(192),
    [sym_integer] = STATE(92),
    [sym_char] = STATE(92),
    [sym_string] = STATE(92),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_DASH] = ACTIONS(367),
    [anon_sym__] = ACTIONS(155),
    [sym_list_constructor] = ACTIONS(157),
    [sym__variable_pattern] = ACTIONS(159),
    [sym__constructor_pattern] = ACTIONS(369),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(163),
    [anon_sym_SQUOTE] = ACTIONS(165),
    [anon_sym_DQUOTE] = ACTIONS(167),
    [sym__integer_literal] = ACTIONS(71),
    [sym__octal_literal] = ACTIONS(71),
    [sym__hexidecimal_literal] = ACTIONS(71),
  },
  [87] = {
    [sym__function_pattern] = STATE(193),
    [sym_list_pattern] = STATE(89),
    [sym_tuple_pattern] = STATE(89),
    [sym_parenthesized_pattern] = STATE(89),
    [sym_as_pattern] = STATE(89),
    [sym_wildcard] = STATE(89),
    [sym__variable] = STATE(194),
    [sym_qualified_variable_identifier] = STATE(97),
    [sym__literal] = STATE(89),
    [sym__identifier] = STATE(98),
    [sym_simple_type] = STATE(99),
    [sym_variable_identifier] = STATE(100),
    [sym_constructor_identifier] = STATE(195),
    [sym_integer] = STATE(92),
    [sym_char] = STATE(92),
    [sym_string] = STATE(92),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym__] = ACTIONS(155),
    [sym_list_constructor] = ACTIONS(157),
    [sym__variable_pattern] = ACTIONS(159),
    [sym__constructor_pattern] = ACTIONS(369),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(163),
    [anon_sym_SQUOTE] = ACTIONS(165),
    [anon_sym_DQUOTE] = ACTIONS(167),
    [sym__integer_literal] = ACTIONS(71),
    [sym__octal_literal] = ACTIONS(71),
    [sym__hexidecimal_literal] = ACTIONS(71),
  },
  [88] = {
    [anon_sym_LPAREN] = ACTIONS(371),
    [anon_sym_COMMA] = ACTIONS(371),
    [anon_sym_RPAREN] = ACTIONS(371),
    [anon_sym_EQ] = ACTIONS(371),
    [anon_sym_LBRACK] = ACTIONS(371),
    [anon_sym_RBRACK] = ACTIONS(371),
    [anon_sym_DASH] = ACTIONS(371),
    [anon_sym__] = ACTIONS(371),
    [anon_sym_BQUOTE] = ACTIONS(371),
    [anon_sym_COLON] = ACTIONS(371),
    [sym_list_constructor] = ACTIONS(371),
    [anon_sym_BANG] = ACTIONS(371),
    [sym__variable_pattern] = ACTIONS(373),
    [sym__constructor_pattern] = ACTIONS(373),
    [anon_sym_DOT] = ACTIONS(371),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(373),
    [anon_sym_SQUOTE] = ACTIONS(371),
    [anon_sym_DQUOTE] = ACTIONS(371),
    [anon_sym_POUND] = ACTIONS(371),
    [anon_sym_DOLLAR] = ACTIONS(371),
    [anon_sym_PERCENT] = ACTIONS(371),
    [anon_sym_AMP] = ACTIONS(371),
    [anon_sym_1] = ACTIONS(371),
    [anon_sym_PLUS] = ACTIONS(371),
    [anon_sym_SLASH] = ACTIONS(371),
    [anon_sym_LT] = ACTIONS(371),
    [anon_sym_GT] = ACTIONS(371),
    [anon_sym_QMARK] = ACTIONS(371),
    [anon_sym_CARET] = ACTIONS(371),
    [sym__integer_literal] = ACTIONS(371),
    [sym__octal_literal] = ACTIONS(371),
    [sym__hexidecimal_literal] = ACTIONS(371),
  },
  [89] = {
    [anon_sym_LPAREN] = ACTIONS(375),
    [anon_sym_COMMA] = ACTIONS(375),
    [anon_sym_RPAREN] = ACTIONS(375),
    [anon_sym_EQ] = ACTIONS(375),
    [anon_sym_LBRACK] = ACTIONS(375),
    [anon_sym_RBRACK] = ACTIONS(375),
    [anon_sym_DASH] = ACTIONS(375),
    [anon_sym__] = ACTIONS(375),
    [anon_sym_BQUOTE] = ACTIONS(375),
    [anon_sym_COLON] = ACTIONS(375),
    [sym_list_constructor] = ACTIONS(375),
    [anon_sym_BANG] = ACTIONS(375),
    [sym__variable_pattern] = ACTIONS(377),
    [sym__constructor_pattern] = ACTIONS(377),
    [anon_sym_DOT] = ACTIONS(375),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(377),
    [anon_sym_SQUOTE] = ACTIONS(375),
    [anon_sym_DQUOTE] = ACTIONS(375),
    [anon_sym_POUND] = ACTIONS(375),
    [anon_sym_DOLLAR] = ACTIONS(375),
    [anon_sym_PERCENT] = ACTIONS(375),
    [anon_sym_AMP] = ACTIONS(375),
    [anon_sym_1] = ACTIONS(375),
    [anon_sym_PLUS] = ACTIONS(375),
    [anon_sym_SLASH] = ACTIONS(375),
    [anon_sym_LT] = ACTIONS(375),
    [anon_sym_GT] = ACTIONS(375),
    [anon_sym_QMARK] = ACTIONS(375),
    [anon_sym_CARET] = ACTIONS(375),
    [sym__integer_literal] = ACTIONS(375),
    [sym__octal_literal] = ACTIONS(375),
    [sym__hexidecimal_literal] = ACTIONS(375),
  },
  [90] = {
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_RBRACE] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_RBRACK] = ACTIONS(79),
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
  [91] = {
    [anon_sym_LBRACE] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_EQ] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(85),
    [anon_sym__] = ACTIONS(85),
    [sym_list_constructor] = ACTIONS(85),
    [sym__variable_pattern] = ACTIONS(223),
    [sym__constructor_pattern] = ACTIONS(223),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(223),
    [anon_sym_SQUOTE] = ACTIONS(85),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym__integer_literal] = ACTIONS(85),
    [sym__octal_literal] = ACTIONS(85),
    [sym__hexidecimal_literal] = ACTIONS(85),
  },
  [92] = {
    [anon_sym_RBRACE] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(91),
    [anon_sym_COMMA] = ACTIONS(91),
    [anon_sym_RPAREN] = ACTIONS(91),
    [anon_sym_EQ] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_RBRACK] = ACTIONS(91),
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
  [93] = {
    [sym__graphic] = STATE(197),
    [sym__small] = STATE(70),
    [sym__large] = STATE(70),
    [sym__symbol] = STATE(70),
    [sym__special] = STATE(70),
    [sym__escape] = STATE(197),
    [anon_sym_SEMI] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(95),
    [anon_sym_RBRACE] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(95),
    [anon_sym_RPAREN] = ACTIONS(95),
    [anon_sym_EQ] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_RBRACK] = ACTIONS(95),
    [anon_sym_DASH] = ACTIONS(97),
    [anon_sym_AT] = ACTIONS(97),
    [anon_sym__] = ACTIONS(99),
    [anon_sym_BQUOTE] = ACTIONS(95),
    [anon_sym_COLON] = ACTIONS(97),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_BANG] = ACTIONS(97),
    [anon_sym_DOT] = ACTIONS(97),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(379),
    [anon_sym_DQUOTE] = ACTIONS(379),
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
    [sym__space] = ACTIONS(379),
  },
  [94] = {
    [sym__gap] = STATE(76),
    [sym__graphic] = STATE(76),
    [sym__small] = STATE(78),
    [sym__large] = STATE(78),
    [sym__symbol] = STATE(78),
    [sym__special] = STATE(78),
    [sym__escape] = STATE(76),
    [aux_sym_string_repeat1] = STATE(199),
    [anon_sym_SEMI] = ACTIONS(111),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_RBRACE] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_RPAREN] = ACTIONS(111),
    [anon_sym_EQ] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(111),
    [anon_sym_RBRACK] = ACTIONS(111),
    [anon_sym_DASH] = ACTIONS(113),
    [anon_sym_AT] = ACTIONS(113),
    [anon_sym__] = ACTIONS(115),
    [anon_sym_BQUOTE] = ACTIONS(111),
    [anon_sym_COLON] = ACTIONS(113),
    [anon_sym_PIPE] = ACTIONS(113),
    [anon_sym_BANG] = ACTIONS(113),
    [anon_sym_DOT] = ACTIONS(113),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(117),
    [anon_sym_DQUOTE] = ACTIONS(381),
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
  [95] = {
    [anon_sym_LPAREN] = ACTIONS(383),
    [anon_sym_EQ] = ACTIONS(383),
    [anon_sym_LBRACK] = ACTIONS(383),
    [anon_sym__] = ACTIONS(383),
    [sym_list_constructor] = ACTIONS(383),
    [sym__variable_pattern] = ACTIONS(385),
    [sym__constructor_pattern] = ACTIONS(385),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(385),
    [anon_sym_SQUOTE] = ACTIONS(383),
    [anon_sym_DQUOTE] = ACTIONS(383),
    [sym__integer_literal] = ACTIONS(383),
    [sym__octal_literal] = ACTIONS(383),
    [sym__hexidecimal_literal] = ACTIONS(383),
  },
  [96] = {
    [anon_sym_AT] = ACTIONS(387),
    [sym_comment] = ACTIONS(5),
  },
  [97] = {
    [anon_sym_AT] = ACTIONS(171),
    [sym_comment] = ACTIONS(5),
  },
  [98] = {
    [anon_sym_LBRACE] = ACTIONS(389),
    [anon_sym_LPAREN] = ACTIONS(375),
    [anon_sym_COMMA] = ACTIONS(375),
    [anon_sym_RPAREN] = ACTIONS(375),
    [anon_sym_EQ] = ACTIONS(375),
    [anon_sym_LBRACK] = ACTIONS(375),
    [anon_sym_RBRACK] = ACTIONS(375),
    [anon_sym_DASH] = ACTIONS(375),
    [anon_sym__] = ACTIONS(375),
    [anon_sym_BQUOTE] = ACTIONS(375),
    [anon_sym_COLON] = ACTIONS(375),
    [sym_list_constructor] = ACTIONS(375),
    [anon_sym_BANG] = ACTIONS(375),
    [sym__variable_pattern] = ACTIONS(377),
    [sym__constructor_pattern] = ACTIONS(377),
    [anon_sym_DOT] = ACTIONS(375),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(377),
    [anon_sym_SQUOTE] = ACTIONS(375),
    [anon_sym_DQUOTE] = ACTIONS(375),
    [anon_sym_POUND] = ACTIONS(375),
    [anon_sym_DOLLAR] = ACTIONS(375),
    [anon_sym_PERCENT] = ACTIONS(375),
    [anon_sym_AMP] = ACTIONS(375),
    [anon_sym_1] = ACTIONS(375),
    [anon_sym_PLUS] = ACTIONS(375),
    [anon_sym_SLASH] = ACTIONS(375),
    [anon_sym_LT] = ACTIONS(375),
    [anon_sym_GT] = ACTIONS(375),
    [anon_sym_QMARK] = ACTIONS(375),
    [anon_sym_CARET] = ACTIONS(375),
    [sym__integer_literal] = ACTIONS(375),
    [sym__octal_literal] = ACTIONS(375),
    [sym__hexidecimal_literal] = ACTIONS(375),
  },
  [99] = {
    [anon_sym_LBRACE] = ACTIONS(389),
    [sym_comment] = ACTIONS(5),
  },
  [100] = {
    [anon_sym_LBRACE] = ACTIONS(183),
    [anon_sym_LPAREN] = ACTIONS(183),
    [anon_sym_COMMA] = ACTIONS(183),
    [anon_sym_RPAREN] = ACTIONS(183),
    [anon_sym_EQ] = ACTIONS(183),
    [anon_sym_LBRACK] = ACTIONS(183),
    [anon_sym_RBRACK] = ACTIONS(183),
    [anon_sym_DASH] = ACTIONS(183),
    [anon_sym_AT] = ACTIONS(171),
    [anon_sym__] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(183),
    [anon_sym_COLON] = ACTIONS(183),
    [sym_list_constructor] = ACTIONS(183),
    [anon_sym_BANG] = ACTIONS(183),
    [sym__variable_pattern] = ACTIONS(185),
    [sym__constructor_pattern] = ACTIONS(185),
    [anon_sym_DOT] = ACTIONS(183),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(185),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_DQUOTE] = ACTIONS(183),
    [anon_sym_POUND] = ACTIONS(183),
    [anon_sym_DOLLAR] = ACTIONS(183),
    [anon_sym_PERCENT] = ACTIONS(183),
    [anon_sym_AMP] = ACTIONS(183),
    [anon_sym_1] = ACTIONS(183),
    [anon_sym_PLUS] = ACTIONS(183),
    [anon_sym_SLASH] = ACTIONS(183),
    [anon_sym_LT] = ACTIONS(183),
    [anon_sym_GT] = ACTIONS(183),
    [anon_sym_QMARK] = ACTIONS(183),
    [anon_sym_CARET] = ACTIONS(183),
    [sym__integer_literal] = ACTIONS(183),
    [sym__octal_literal] = ACTIONS(183),
    [sym__hexidecimal_literal] = ACTIONS(183),
  },
  [101] = {
    [sym_variable_identifier] = STATE(165),
    [aux_sym_type_class_repeat1] = STATE(202),
    [anon_sym_LBRACE] = ACTIONS(183),
    [anon_sym_LPAREN] = ACTIONS(183),
    [anon_sym_EQ] = ACTIONS(183),
    [anon_sym_LBRACK] = ACTIONS(183),
    [anon_sym__] = ACTIONS(183),
    [sym_list_constructor] = ACTIONS(183),
    [sym__variable_pattern] = ACTIONS(185),
    [sym__constructor_pattern] = ACTIONS(185),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(185),
    [anon_sym_SQUOTE] = ACTIONS(183),
    [anon_sym_DQUOTE] = ACTIONS(183),
    [sym__integer_literal] = ACTIONS(183),
    [sym__octal_literal] = ACTIONS(183),
    [sym__hexidecimal_literal] = ACTIONS(183),
  },
  [102] = {
    [sym__function_pattern] = STATE(203),
    [sym_list_pattern] = STATE(89),
    [sym_tuple_pattern] = STATE(89),
    [sym_parenthesized_pattern] = STATE(89),
    [sym_as_pattern] = STATE(89),
    [sym_wildcard] = STATE(89),
    [sym__variable] = STATE(96),
    [sym_qualified_variable_identifier] = STATE(97),
    [sym__literal] = STATE(89),
    [sym__identifier] = STATE(98),
    [sym_simple_type] = STATE(99),
    [sym_variable_identifier] = STATE(100),
    [sym_constructor_identifier] = STATE(101),
    [sym_integer] = STATE(92),
    [sym_char] = STATE(92),
    [sym_string] = STATE(92),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_EQ] = ACTIONS(391),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym__] = ACTIONS(155),
    [sym_list_constructor] = ACTIONS(157),
    [sym__variable_pattern] = ACTIONS(159),
    [sym__constructor_pattern] = ACTIONS(161),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(163),
    [anon_sym_SQUOTE] = ACTIONS(165),
    [anon_sym_DQUOTE] = ACTIONS(167),
    [sym__integer_literal] = ACTIONS(71),
    [sym__octal_literal] = ACTIONS(71),
    [sym__hexidecimal_literal] = ACTIONS(71),
  },
  [103] = {
    [sym_type] = STATE(209),
    [sym__generic_type_constructor] = STATE(210),
    [sym_tupling_constructor] = STATE(206),
    [sym_tuple] = STATE(210),
    [sym_list] = STATE(210),
    [sym_parenthesized_constructor] = STATE(210),
    [sym_context] = STATE(211),
    [sym_class] = STATE(212),
    [sym_variable_identifier] = STATE(213),
    [sym_constructor_identifier] = STATE(214),
    [sym__type_constructors] = STATE(206),
    [sym_qualified_type_constructor] = STATE(215),
    [anon_sym_LPAREN] = ACTIONS(393),
    [anon_sym_LBRACK] = ACTIONS(395),
    [sym_unit_type] = ACTIONS(397),
    [sym_list_constructor] = ACTIONS(397),
    [sym_function_constructor] = ACTIONS(397),
    [sym__variable_pattern] = ACTIONS(399),
    [sym__constructor_pattern] = ACTIONS(401),
    [sym_module_identifier] = ACTIONS(403),
    [sym_comment] = ACTIONS(5),
  },
  [104] = {
    [sym__layout_semicolon] = ACTIONS(405),
    [anon_sym_SEMI] = ACTIONS(407),
    [sym_comment] = ACTIONS(5),
  },
  [105] = {
    [sym_declarations] = STATE(219),
    [sym__layout_open_brace] = ACTIONS(409),
    [anon_sym_LBRACE] = ACTIONS(411),
    [sym_comment] = ACTIONS(5),
  },
  [106] = {
    [sym_export] = STATE(221),
    [sym__identifier] = STATE(222),
    [sym_variable_identifier] = STATE(117),
    [sym_constructor_identifier] = STATE(117),
    [anon_sym_RPAREN] = ACTIONS(413),
    [sym__variable_pattern] = ACTIONS(211),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [107] = {
    [anon_sym_where] = ACTIONS(415),
    [sym_comment] = ACTIONS(5),
  },
  [108] = {
    [sym_import_specification] = STATE(225),
    [sym__layout_semicolon] = ACTIONS(417),
    [anon_sym_SEMI] = ACTIONS(419),
    [anon_sym_LPAREN] = ACTIONS(199),
    [anon_sym_as] = ACTIONS(421),
    [anon_sym_hiding] = ACTIONS(203),
    [sym_comment] = ACTIONS(5),
  },
  [109] = {
    [sym__identifier] = STATE(227),
    [sym_variable_identifier] = STATE(117),
    [sym_constructor_identifier] = STATE(117),
    [anon_sym_RPAREN] = ACTIONS(423),
    [sym__variable_pattern] = ACTIONS(211),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [110] = {
    [sym_module_identifier] = ACTIONS(425),
    [sym_comment] = ACTIONS(5),
  },
  [111] = {
    [anon_sym_LPAREN] = ACTIONS(427),
    [sym_comment] = ACTIONS(5),
  },
  [112] = {
    [sym__layout_semicolon] = ACTIONS(417),
    [anon_sym_SEMI] = ACTIONS(419),
    [sym_comment] = ACTIONS(5),
  },
  [113] = {
    [anon_sym_unsafe] = ACTIONS(429),
    [anon_sym_safe] = ACTIONS(429),
    [sym__variable_pattern] = ACTIONS(431),
    [sym__constructor_pattern] = ACTIONS(431),
    [sym_comment] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(429),
  },
  [114] = {
    [sym_safety] = STATE(232),
    [sym_type_signature] = STATE(233),
    [sym__identifier] = STATE(234),
    [sym_variable_identifier] = STATE(117),
    [sym_constructor_identifier] = STATE(117),
    [sym_string] = STATE(235),
    [anon_sym_unsafe] = ACTIONS(433),
    [anon_sym_safe] = ACTIONS(433),
    [sym__variable_pattern] = ACTIONS(231),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(435),
  },
  [115] = {
    [sym__layout_semicolon] = ACTIONS(437),
    [anon_sym_SEMI] = ACTIONS(439),
    [sym_comment] = ACTIONS(5),
  },
  [116] = {
    [aux_sym_export_repeat1] = STATE(238),
    [anon_sym_COMMA] = ACTIONS(441),
    [anon_sym_RPAREN] = ACTIONS(443),
    [sym_comment] = ACTIONS(5),
  },
  [117] = {
    [anon_sym_RBRACE] = ACTIONS(183),
    [anon_sym_LPAREN] = ACTIONS(183),
    [anon_sym_COMMA] = ACTIONS(183),
    [anon_sym_RPAREN] = ACTIONS(183),
    [anon_sym_EQ] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(183),
    [anon_sym_COLON_COLON] = ACTIONS(183),
    [sym_comment] = ACTIONS(5),
  },
  [118] = {
    [sym__layout_semicolon] = ACTIONS(445),
    [anon_sym_SEMI] = ACTIONS(447),
    [sym_comment] = ACTIONS(5),
  },
  [119] = {
    [sym__variable_pattern] = ACTIONS(87),
    [sym_comment] = ACTIONS(5),
  },
  [120] = {
    [sym__layout_semicolon] = ACTIONS(449),
    [anon_sym_SEMI] = ACTIONS(451),
    [sym_comment] = ACTIONS(5),
  },
  [121] = {
    [sym__layout_close_brace] = ACTIONS(453),
    [anon_sym_do] = ACTIONS(455),
    [sym__variable_pattern] = ACTIONS(457),
    [sym__constructor_pattern] = ACTIONS(457),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(457),
    [anon_sym_SQUOTE] = ACTIONS(455),
    [anon_sym_DQUOTE] = ACTIONS(455),
    [sym__integer_literal] = ACTIONS(455),
    [sym__octal_literal] = ACTIONS(455),
    [sym__hexidecimal_literal] = ACTIONS(455),
  },
  [122] = {
    [sym__variable] = STATE(25),
    [sym_qualified_variable_identifier] = STATE(24),
    [sym__expression] = STATE(120),
    [sym_do_expression] = STATE(25),
    [sym__statement] = STATE(241),
    [sym__literal] = STATE(25),
    [sym_variable_identifier] = STATE(24),
    [sym_integer] = STATE(15),
    [sym_char] = STATE(15),
    [sym_string] = STATE(15),
    [sym__layout_close_brace] = ACTIONS(459),
    [anon_sym_do] = ACTIONS(19),
    [sym__variable_pattern] = ACTIONS(33),
    [sym__constructor_pattern] = ACTIONS(215),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym__integer_literal] = ACTIONS(43),
    [sym__octal_literal] = ACTIONS(43),
    [sym__hexidecimal_literal] = ACTIONS(43),
  },
  [123] = {
    [sym__layout_semicolon] = ACTIONS(461),
    [anon_sym_SEMI] = ACTIONS(463),
    [sym_comment] = ACTIONS(5),
  },
  [124] = {
    [anon_sym_RBRACE] = ACTIONS(455),
    [anon_sym_do] = ACTIONS(455),
    [sym__variable_pattern] = ACTIONS(457),
    [sym__constructor_pattern] = ACTIONS(457),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(457),
    [anon_sym_SQUOTE] = ACTIONS(455),
    [anon_sym_DQUOTE] = ACTIONS(455),
    [sym__integer_literal] = ACTIONS(455),
    [sym__octal_literal] = ACTIONS(455),
    [sym__hexidecimal_literal] = ACTIONS(455),
  },
  [125] = {
    [sym__variable] = STATE(25),
    [sym_qualified_variable_identifier] = STATE(24),
    [sym__expression] = STATE(123),
    [sym_do_expression] = STATE(25),
    [sym__statement] = STATE(243),
    [sym__literal] = STATE(25),
    [sym_variable_identifier] = STATE(24),
    [sym_integer] = STATE(15),
    [sym_char] = STATE(15),
    [sym_string] = STATE(15),
    [anon_sym_RBRACE] = ACTIONS(465),
    [anon_sym_do] = ACTIONS(19),
    [sym__variable_pattern] = ACTIONS(33),
    [sym__constructor_pattern] = ACTIONS(215),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym__integer_literal] = ACTIONS(43),
    [sym__octal_literal] = ACTIONS(43),
    [sym__hexidecimal_literal] = ACTIONS(43),
  },
  [126] = {
    [aux_sym_context_repeat1] = STATE(246),
    [anon_sym_COMMA] = ACTIONS(467),
    [anon_sym_RPAREN] = ACTIONS(469),
    [sym_comment] = ACTIONS(5),
  },
  [127] = {
    [sym_variable_identifier] = STATE(247),
    [anon_sym_LPAREN] = ACTIONS(229),
    [sym__variable_pattern] = ACTIONS(211),
    [sym_comment] = ACTIONS(5),
  },
  [128] = {
    [sym_variable_identifier] = STATE(249),
    [aux_sym_type_class_repeat1] = STATE(250),
    [anon_sym_where] = ACTIONS(471),
    [sym__variable_pattern] = ACTIONS(231),
    [sym_comment] = ACTIONS(5),
  },
  [129] = {
    [sym__constructor_pattern] = ACTIONS(473),
    [sym_comment] = ACTIONS(5),
  },
  [130] = {
    [sym_general_declarations] = STATE(253),
    [sym__layout_open_brace] = ACTIONS(475),
    [anon_sym_LBRACE] = ACTIONS(477),
    [sym_comment] = ACTIONS(5),
  },
  [131] = {
    [sym_variable_identifier] = STATE(165),
    [aux_sym_type_class_repeat1] = STATE(254),
    [sym__variable_pattern] = ACTIONS(277),
    [sym_comment] = ACTIONS(5),
  },
  [132] = {
    [anon_sym_where] = ACTIONS(79),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(79),
    [anon_sym_COLON_COLON] = ACTIONS(79),
    [anon_sym_DASH_GT] = ACTIONS(79),
    [anon_sym_EQ_GT] = ACTIONS(79),
    [sym__variable_pattern] = ACTIONS(81),
    [sym_comment] = ACTIONS(5),
  },
  [133] = {
    [anon_sym_where] = ACTIONS(479),
    [anon_sym_EQ_GT] = ACTIONS(481),
    [sym__variable_pattern] = ACTIONS(483),
    [sym_comment] = ACTIONS(5),
  },
  [134] = {
    [sym_variable_identifier] = STATE(255),
    [anon_sym_where] = ACTIONS(471),
    [sym__variable_pattern] = ACTIONS(231),
    [sym_comment] = ACTIONS(5),
  },
  [135] = {
    [sym_variable_identifier] = STATE(249),
    [aux_sym_type_class_repeat1] = STATE(257),
    [anon_sym_where] = ACTIONS(485),
    [sym__variable_pattern] = ACTIONS(231),
    [sym_comment] = ACTIONS(5),
  },
  [136] = {
    [sym_general_declarations] = STATE(258),
    [sym__layout_open_brace] = ACTIONS(475),
    [anon_sym_LBRACE] = ACTIONS(477),
    [sym_comment] = ACTIONS(5),
  },
  [137] = {
    [sym_variable_identifier] = STATE(255),
    [anon_sym_where] = ACTIONS(485),
    [sym__variable_pattern] = ACTIONS(231),
    [sym_comment] = ACTIONS(5),
  },
  [138] = {
    [anon_sym_BQUOTE] = ACTIONS(487),
    [sym_comment] = ACTIONS(5),
  },
  [139] = {
    [sym__layout_semicolon] = ACTIONS(489),
    [anon_sym_SEMI] = ACTIONS(491),
    [anon_sym_COMMA] = ACTIONS(491),
    [anon_sym_DASH] = ACTIONS(491),
    [anon_sym_COLON] = ACTIONS(491),
    [anon_sym_BANG] = ACTIONS(491),
    [anon_sym_DOT] = ACTIONS(491),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(491),
    [anon_sym_DOLLAR] = ACTIONS(491),
    [anon_sym_PERCENT] = ACTIONS(491),
    [anon_sym_AMP] = ACTIONS(491),
    [anon_sym_1] = ACTIONS(491),
    [anon_sym_PLUS] = ACTIONS(491),
    [anon_sym_SLASH] = ACTIONS(491),
    [anon_sym_LT] = ACTIONS(491),
    [anon_sym_GT] = ACTIONS(491),
    [anon_sym_QMARK] = ACTIONS(491),
    [anon_sym_CARET] = ACTIONS(491),
  },
  [140] = {
    [sym__layout_semicolon] = ACTIONS(493),
    [anon_sym_SEMI] = ACTIONS(495),
    [anon_sym_COMMA] = ACTIONS(495),
    [anon_sym_DASH] = ACTIONS(495),
    [anon_sym_COLON] = ACTIONS(495),
    [anon_sym_BANG] = ACTIONS(495),
    [anon_sym_DOT] = ACTIONS(495),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(495),
    [anon_sym_DOLLAR] = ACTIONS(495),
    [anon_sym_PERCENT] = ACTIONS(495),
    [anon_sym_AMP] = ACTIONS(495),
    [anon_sym_1] = ACTIONS(495),
    [anon_sym_PLUS] = ACTIONS(495),
    [anon_sym_SLASH] = ACTIONS(495),
    [anon_sym_LT] = ACTIONS(495),
    [anon_sym_GT] = ACTIONS(495),
    [anon_sym_QMARK] = ACTIONS(495),
    [anon_sym_CARET] = ACTIONS(495),
  },
  [141] = {
    [sym__constructor_symbol] = STATE(260),
    [sym__layout_semicolon] = ACTIONS(497),
    [anon_sym_SEMI] = ACTIONS(499),
    [anon_sym_COMMA] = ACTIONS(499),
    [anon_sym_DASH] = ACTIONS(243),
    [anon_sym_COLON] = ACTIONS(243),
    [anon_sym_BANG] = ACTIONS(243),
    [anon_sym_DOT] = ACTIONS(243),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(243),
    [anon_sym_DOLLAR] = ACTIONS(243),
    [anon_sym_PERCENT] = ACTIONS(243),
    [anon_sym_AMP] = ACTIONS(243),
    [anon_sym_1] = ACTIONS(243),
    [anon_sym_PLUS] = ACTIONS(243),
    [anon_sym_SLASH] = ACTIONS(243),
    [anon_sym_LT] = ACTIONS(243),
    [anon_sym_GT] = ACTIONS(243),
    [anon_sym_QMARK] = ACTIONS(243),
    [anon_sym_CARET] = ACTIONS(243),
  },
  [142] = {
    [sym__op] = STATE(261),
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
  [143] = {
    [sym__layout_semicolon] = ACTIONS(501),
    [anon_sym_SEMI] = ACTIONS(503),
    [anon_sym_COMMA] = ACTIONS(505),
    [sym_comment] = ACTIONS(5),
  },
  [144] = {
    [aux_sym_fixity_repeat1] = STATE(263),
    [sym__layout_semicolon] = ACTIONS(501),
    [anon_sym_SEMI] = ACTIONS(503),
    [anon_sym_COMMA] = ACTIONS(249),
    [sym_comment] = ACTIONS(5),
  },
  [145] = {
    [sym__layout_semicolon] = ACTIONS(507),
    [anon_sym_SEMI] = ACTIONS(509),
    [anon_sym_COMMA] = ACTIONS(509),
    [anon_sym_DASH] = ACTIONS(509),
    [anon_sym_BANG] = ACTIONS(509),
    [anon_sym_DOT] = ACTIONS(509),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(509),
    [anon_sym_DOLLAR] = ACTIONS(509),
    [anon_sym_PERCENT] = ACTIONS(509),
    [anon_sym_AMP] = ACTIONS(509),
    [anon_sym_1] = ACTIONS(509),
    [anon_sym_PLUS] = ACTIONS(509),
    [anon_sym_SLASH] = ACTIONS(509),
    [anon_sym_LT] = ACTIONS(509),
    [anon_sym_GT] = ACTIONS(509),
    [anon_sym_QMARK] = ACTIONS(509),
    [anon_sym_CARET] = ACTIONS(509),
  },
  [146] = {
    [sym__variable_symbol] = STATE(264),
    [sym__layout_semicolon] = ACTIONS(511),
    [anon_sym_SEMI] = ACTIONS(513),
    [anon_sym_COMMA] = ACTIONS(513),
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
  [147] = {
    [sym_constructors] = STATE(266),
    [sym_constructor] = STATE(152),
    [sym_deriving] = STATE(267),
    [sym_constructor_identifier] = STATE(154),
    [sym__layout_semicolon] = ACTIONS(515),
    [anon_sym_SEMI] = ACTIONS(517),
    [anon_sym_EQ] = ACTIONS(519),
    [anon_sym_deriving] = ACTIONS(265),
    [sym__constructor_pattern] = ACTIONS(73),
    [sym_comment] = ACTIONS(5),
  },
  [148] = {
    [sym_variable_identifier] = STATE(269),
    [aux_sym_type_class_repeat1] = STATE(157),
    [sym__layout_semicolon] = ACTIONS(267),
    [anon_sym_SEMI] = ACTIONS(269),
    [anon_sym_EQ] = ACTIONS(269),
    [anon_sym_deriving] = ACTIONS(269),
    [sym__variable_pattern] = ACTIONS(521),
    [sym__constructor_pattern] = ACTIONS(273),
    [sym_comment] = ACTIONS(5),
  },
  [149] = {
    [sym_constructors] = STATE(266),
    [sym_constructor] = STATE(152),
    [sym_deriving] = STATE(267),
    [sym_constructor_identifier] = STATE(154),
    [sym__layout_semicolon] = ACTIONS(515),
    [anon_sym_SEMI] = ACTIONS(517),
    [anon_sym_deriving] = ACTIONS(265),
    [sym__constructor_pattern] = ACTIONS(73),
    [sym_comment] = ACTIONS(5),
  },
  [150] = {
    [sym__identifier] = STATE(271),
    [sym_variable_identifier] = STATE(29),
    [sym_constructor_identifier] = STATE(29),
    [anon_sym_LPAREN] = ACTIONS(523),
    [sym__variable_pattern] = ACTIONS(399),
    [sym__constructor_pattern] = ACTIONS(73),
    [sym_comment] = ACTIONS(5),
  },
  [151] = {
    [sym_deriving] = STATE(267),
    [sym__layout_semicolon] = ACTIONS(515),
    [anon_sym_SEMI] = ACTIONS(517),
    [anon_sym_deriving] = ACTIONS(265),
    [sym_comment] = ACTIONS(5),
  },
  [152] = {
    [aux_sym_constructors_repeat1] = STATE(273),
    [sym__layout_semicolon] = ACTIONS(525),
    [anon_sym_SEMI] = ACTIONS(527),
    [anon_sym_PIPE] = ACTIONS(529),
    [anon_sym_deriving] = ACTIONS(527),
    [sym_comment] = ACTIONS(5),
  },
  [153] = {
    [sym__layout_semicolon] = ACTIONS(515),
    [anon_sym_SEMI] = ACTIONS(517),
    [sym_comment] = ACTIONS(5),
  },
  [154] = {
    [sym_strict] = STATE(276),
    [sym__identifier] = STATE(276),
    [sym_variable_identifier] = STATE(277),
    [sym_constructor_identifier] = STATE(277),
    [sym_fields] = STATE(278),
    [aux_sym_constructor_repeat1] = STATE(279),
    [sym__layout_semicolon] = ACTIONS(531),
    [anon_sym_SEMI] = ACTIONS(533),
    [anon_sym_LBRACE] = ACTIONS(535),
    [anon_sym_PIPE] = ACTIONS(533),
    [anon_sym_deriving] = ACTIONS(533),
    [anon_sym_BANG] = ACTIONS(537),
    [sym__variable_pattern] = ACTIONS(271),
    [sym__constructor_pattern] = ACTIONS(73),
    [sym_comment] = ACTIONS(5),
  },
  [155] = {
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
  [156] = {
    [sym__layout_semicolon] = ACTIONS(539),
    [anon_sym_SEMI] = ACTIONS(479),
    [anon_sym_EQ] = ACTIONS(479),
    [anon_sym_EQ_GT] = ACTIONS(481),
    [anon_sym_deriving] = ACTIONS(479),
    [sym__variable_pattern] = ACTIONS(483),
    [sym__constructor_pattern] = ACTIONS(483),
    [sym_comment] = ACTIONS(5),
  },
  [157] = {
    [sym_variable_identifier] = STATE(280),
    [sym__layout_semicolon] = ACTIONS(541),
    [anon_sym_SEMI] = ACTIONS(543),
    [anon_sym_EQ] = ACTIONS(543),
    [anon_sym_deriving] = ACTIONS(543),
    [sym__variable_pattern] = ACTIONS(521),
    [sym__constructor_pattern] = ACTIONS(545),
    [sym_comment] = ACTIONS(5),
  },
  [158] = {
    [anon_sym_EQ] = ACTIONS(547),
    [sym_comment] = ACTIONS(5),
  },
  [159] = {
    [sym_new_constructor] = STATE(282),
    [sym_constructor_identifier] = STATE(283),
    [sym__constructor_pattern] = ACTIONS(75),
    [sym_comment] = ACTIONS(5),
  },
  [160] = {
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_RBRACK] = ACTIONS(79),
    [anon_sym_DASH_GT] = ACTIONS(79),
    [sym_unit_type] = ACTIONS(79),
    [sym_list_constructor] = ACTIONS(79),
    [sym_function_constructor] = ACTIONS(79),
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
  [161] = {
    [anon_sym_EQ] = ACTIONS(479),
    [anon_sym_EQ_GT] = ACTIONS(481),
    [sym__variable_pattern] = ACTIONS(479),
    [sym_comment] = ACTIONS(5),
  },
  [162] = {
    [sym_variable_identifier] = STATE(284),
    [anon_sym_EQ] = ACTIONS(543),
    [sym__variable_pattern] = ACTIONS(281),
    [sym_comment] = ACTIONS(5),
  },
  [163] = {
    [sym_type] = STATE(287),
    [sym__generic_type_constructor] = STATE(210),
    [sym_tupling_constructor] = STATE(206),
    [sym_tuple] = STATE(210),
    [sym_list] = STATE(210),
    [sym_parenthesized_constructor] = STATE(210),
    [sym_variable_identifier] = STATE(213),
    [sym__type_constructors] = STATE(206),
    [sym_qualified_type_constructor] = STATE(215),
    [anon_sym_LPAREN] = ACTIONS(549),
    [anon_sym_LBRACK] = ACTIONS(395),
    [sym_unit_type] = ACTIONS(397),
    [sym_list_constructor] = ACTIONS(397),
    [sym_function_constructor] = ACTIONS(397),
    [sym__variable_pattern] = ACTIONS(399),
    [sym__constructor_pattern] = ACTIONS(551),
    [sym_module_identifier] = ACTIONS(403),
    [sym_comment] = ACTIONS(5),
  },
  [164] = {
    [anon_sym_EQ] = ACTIONS(79),
    [sym__variable_pattern] = ACTIONS(79),
    [sym_comment] = ACTIONS(5),
  },
  [165] = {
    [anon_sym_LBRACE] = ACTIONS(479),
    [anon_sym_LPAREN] = ACTIONS(479),
    [anon_sym_COMMA] = ACTIONS(479),
    [anon_sym_RPAREN] = ACTIONS(479),
    [anon_sym_EQ] = ACTIONS(479),
    [anon_sym_LBRACK] = ACTIONS(479),
    [anon_sym_RBRACK] = ACTIONS(479),
    [anon_sym_DASH_GT] = ACTIONS(479),
    [sym_unit_type] = ACTIONS(479),
    [sym_list_constructor] = ACTIONS(479),
    [sym_function_constructor] = ACTIONS(479),
    [sym__variable_pattern] = ACTIONS(479),
    [sym__constructor_pattern] = ACTIONS(483),
    [sym_module_identifier] = ACTIONS(483),
    [sym_comment] = ACTIONS(5),
  },
  [166] = {
    [sym__layout_semicolon] = ACTIONS(553),
    [anon_sym_SEMI] = ACTIONS(555),
    [sym__variable_pattern] = ACTIONS(555),
    [sym__constructor_pattern] = ACTIONS(557),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(557),
    [anon_sym_SQUOTE] = ACTIONS(555),
    [anon_sym_DQUOTE] = ACTIONS(555),
    [sym__integer_literal] = ACTIONS(555),
    [sym__octal_literal] = ACTIONS(555),
    [sym__hexidecimal_literal] = ACTIONS(555),
  },
  [167] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(559),
  },
  [168] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(561),
  },
  [169] = {
    [sym__cntrl] = STATE(289),
    [anon_sym_LBRACK] = ACTIONS(563),
    [anon_sym_RBRACK] = ACTIONS(563),
    [anon_sym_AT] = ACTIONS(563),
    [anon_sym__] = ACTIONS(563),
    [sym_comment] = ACTIONS(101),
    [sym__ascii_large] = ACTIONS(563),
    [anon_sym_CARET] = ACTIONS(563),
    [anon_sym_BSLASH] = ACTIONS(563),
  },
  [170] = {
    [aux_sym__escape_repeat1] = STATE(291),
    [sym_comment] = ACTIONS(5),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(565),
  },
  [171] = {
    [aux_sym__escape_repeat2] = STATE(293),
    [sym_comment] = ACTIONS(5),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(567),
  },
  [172] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(569),
  },
  [173] = {
    [anon_sym_SEMI] = ACTIONS(571),
    [anon_sym_LBRACE] = ACTIONS(571),
    [anon_sym_RBRACE] = ACTIONS(571),
    [anon_sym_LPAREN] = ACTIONS(571),
    [anon_sym_RPAREN] = ACTIONS(571),
    [anon_sym_EQ] = ACTIONS(571),
    [anon_sym_LBRACK] = ACTIONS(571),
    [anon_sym_RBRACK] = ACTIONS(571),
    [anon_sym_DASH] = ACTIONS(571),
    [anon_sym_AT] = ACTIONS(571),
    [anon_sym__] = ACTIONS(571),
    [anon_sym_BQUOTE] = ACTIONS(571),
    [anon_sym_COLON] = ACTIONS(571),
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
    [anon_sym_SEMI] = ACTIONS(573),
    [anon_sym_LBRACE] = ACTIONS(573),
    [anon_sym_RBRACE] = ACTIONS(573),
    [anon_sym_LPAREN] = ACTIONS(573),
    [anon_sym_RPAREN] = ACTIONS(573),
    [anon_sym_EQ] = ACTIONS(573),
    [anon_sym_LBRACK] = ACTIONS(573),
    [anon_sym_RBRACK] = ACTIONS(573),
    [anon_sym_DASH] = ACTIONS(573),
    [anon_sym_AT] = ACTIONS(573),
    [anon_sym__] = ACTIONS(573),
    [anon_sym_BQUOTE] = ACTIONS(573),
    [anon_sym_COLON] = ACTIONS(573),
    [anon_sym_PIPE] = ACTIONS(573),
    [anon_sym_BANG] = ACTIONS(573),
    [anon_sym_DOT] = ACTIONS(573),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(573),
    [anon_sym_DQUOTE] = ACTIONS(573),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(573),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(573),
    [sym__ascii_large] = ACTIONS(573),
    [anon_sym_POUND] = ACTIONS(573),
    [anon_sym_DOLLAR] = ACTIONS(573),
    [anon_sym_PERCENT] = ACTIONS(573),
    [anon_sym_AMP] = ACTIONS(573),
    [anon_sym_1] = ACTIONS(573),
    [anon_sym_PLUS] = ACTIONS(573),
    [anon_sym_SLASH] = ACTIONS(573),
    [anon_sym_LT] = ACTIONS(573),
    [anon_sym_GT] = ACTIONS(573),
    [anon_sym_QMARK] = ACTIONS(573),
    [anon_sym_CARET] = ACTIONS(573),
    [anon_sym_TILDE] = ACTIONS(573),
    [anon_sym_BSLASH] = ACTIONS(573),
    [sym__space] = ACTIONS(573),
    [sym__newline] = ACTIONS(573),
    [sym__tab] = ACTIONS(573),
    [sym__vertical_tab] = ACTIONS(573),
  },
  [175] = {
    [sym__cntrl] = STATE(295),
    [anon_sym_LBRACK] = ACTIONS(575),
    [anon_sym_RBRACK] = ACTIONS(575),
    [anon_sym_AT] = ACTIONS(575),
    [anon_sym__] = ACTIONS(575),
    [sym_comment] = ACTIONS(101),
    [sym__ascii_large] = ACTIONS(575),
    [anon_sym_CARET] = ACTIONS(575),
    [anon_sym_BSLASH] = ACTIONS(575),
  },
  [176] = {
    [aux_sym__escape_repeat1] = STATE(297),
    [sym_comment] = ACTIONS(5),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(577),
  },
  [177] = {
    [aux_sym__escape_repeat2] = STATE(299),
    [sym_comment] = ACTIONS(5),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(579),
  },
  [178] = {
    [anon_sym_SEMI] = ACTIONS(581),
    [anon_sym_LBRACE] = ACTIONS(581),
    [anon_sym_RBRACE] = ACTIONS(581),
    [anon_sym_LPAREN] = ACTIONS(581),
    [anon_sym_RPAREN] = ACTIONS(581),
    [anon_sym_EQ] = ACTIONS(581),
    [anon_sym_LBRACK] = ACTIONS(581),
    [anon_sym_RBRACK] = ACTIONS(581),
    [anon_sym_DASH] = ACTIONS(581),
    [anon_sym_AT] = ACTIONS(581),
    [anon_sym__] = ACTIONS(581),
    [anon_sym_BQUOTE] = ACTIONS(581),
    [anon_sym_COLON] = ACTIONS(581),
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
    [anon_sym_SEMI] = ACTIONS(583),
    [anon_sym_LBRACE] = ACTIONS(583),
    [anon_sym_RBRACE] = ACTIONS(583),
    [anon_sym_LPAREN] = ACTIONS(583),
    [anon_sym_RPAREN] = ACTIONS(583),
    [anon_sym_EQ] = ACTIONS(583),
    [anon_sym_LBRACK] = ACTIONS(583),
    [anon_sym_RBRACK] = ACTIONS(583),
    [anon_sym_DASH] = ACTIONS(583),
    [anon_sym_AT] = ACTIONS(583),
    [anon_sym__] = ACTIONS(583),
    [anon_sym_BQUOTE] = ACTIONS(583),
    [anon_sym_COLON] = ACTIONS(583),
    [anon_sym_PIPE] = ACTIONS(583),
    [anon_sym_BANG] = ACTIONS(583),
    [anon_sym_DOT] = ACTIONS(583),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(583),
    [anon_sym_DQUOTE] = ACTIONS(583),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(583),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(583),
    [sym__ascii_large] = ACTIONS(583),
    [anon_sym_POUND] = ACTIONS(583),
    [anon_sym_DOLLAR] = ACTIONS(583),
    [anon_sym_PERCENT] = ACTIONS(583),
    [anon_sym_AMP] = ACTIONS(583),
    [anon_sym_1] = ACTIONS(583),
    [anon_sym_PLUS] = ACTIONS(583),
    [anon_sym_SLASH] = ACTIONS(583),
    [anon_sym_LT] = ACTIONS(583),
    [anon_sym_GT] = ACTIONS(583),
    [anon_sym_QMARK] = ACTIONS(583),
    [anon_sym_CARET] = ACTIONS(583),
    [anon_sym_TILDE] = ACTIONS(583),
    [anon_sym_BSLASH] = ACTIONS(583),
    [sym__space] = ACTIONS(583),
    [sym__newline] = ACTIONS(583),
    [sym__tab] = ACTIONS(583),
    [sym__vertical_tab] = ACTIONS(583),
  },
  [180] = {
    [sym__layout_semicolon] = ACTIONS(585),
    [anon_sym_SEMI] = ACTIONS(587),
    [sym__variable_pattern] = ACTIONS(587),
    [sym__constructor_pattern] = ACTIONS(589),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(589),
    [anon_sym_SQUOTE] = ACTIONS(587),
    [anon_sym_DQUOTE] = ACTIONS(587),
    [sym__integer_literal] = ACTIONS(587),
    [sym__octal_literal] = ACTIONS(587),
    [sym__hexidecimal_literal] = ACTIONS(587),
  },
  [181] = {
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
  [182] = {
    [sym__layout_semicolon] = ACTIONS(83),
    [anon_sym_SEMI] = ACTIONS(85),
    [anon_sym_DASH_GT] = ACTIONS(85),
    [sym__variable_pattern] = ACTIONS(85),
    [sym__constructor_pattern] = ACTIONS(223),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(223),
    [anon_sym_SQUOTE] = ACTIONS(85),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym__integer_literal] = ACTIONS(85),
    [sym__octal_literal] = ACTIONS(85),
    [sym__hexidecimal_literal] = ACTIONS(85),
  },
  [183] = {
    [sym__layout_semicolon] = ACTIONS(591),
    [anon_sym_SEMI] = ACTIONS(593),
    [sym__variable_pattern] = ACTIONS(593),
    [sym__constructor_pattern] = ACTIONS(595),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(595),
    [anon_sym_SQUOTE] = ACTIONS(593),
    [anon_sym_DQUOTE] = ACTIONS(593),
    [sym__integer_literal] = ACTIONS(593),
    [sym__octal_literal] = ACTIONS(593),
    [sym__hexidecimal_literal] = ACTIONS(593),
  },
  [184] = {
    [sym__literal] = STATE(300),
    [sym_variable_identifier] = STATE(300),
    [sym_integer] = STATE(15),
    [sym_char] = STATE(15),
    [sym_string] = STATE(15),
    [aux_sym_general_constructor_repeat1] = STATE(301),
    [sym__layout_semicolon] = ACTIONS(181),
    [anon_sym_SEMI] = ACTIONS(183),
    [sym__variable_pattern] = ACTIONS(359),
    [sym__constructor_pattern] = ACTIONS(185),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym__integer_literal] = ACTIONS(43),
    [sym__octal_literal] = ACTIONS(43),
    [sym__hexidecimal_literal] = ACTIONS(43),
  },
  [185] = {
    [sym_general_constructor] = STATE(302),
    [sym__literal] = STATE(302),
    [sym__identifier] = STATE(302),
    [sym_variable_identifier] = STATE(29),
    [sym_constructor_identifier] = STATE(184),
    [sym_integer] = STATE(15),
    [sym_char] = STATE(15),
    [sym_string] = STATE(15),
    [sym__layout_semicolon] = ACTIONS(597),
    [anon_sym_SEMI] = ACTIONS(599),
    [sym__variable_pattern] = ACTIONS(359),
    [sym__constructor_pattern] = ACTIONS(361),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(37),
    [anon_sym_SQUOTE] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym__integer_literal] = ACTIONS(43),
    [sym__octal_literal] = ACTIONS(43),
    [sym__hexidecimal_literal] = ACTIONS(43),
  },
  [186] = {
    [anon_sym_LPAREN] = ACTIONS(601),
    [sym_comment] = ACTIONS(5),
  },
  [187] = {
    [anon_sym_LBRACE] = ACTIONS(85),
    [anon_sym_COMMA] = ACTIONS(85),
    [anon_sym_RPAREN] = ACTIONS(85),
    [anon_sym_RBRACK] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym_BQUOTE] = ACTIONS(85),
    [anon_sym_COLON] = ACTIONS(85),
    [anon_sym_BANG] = ACTIONS(85),
    [sym__variable_pattern] = ACTIONS(85),
    [anon_sym_DOT] = ACTIONS(85),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(223),
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
  [188] = {
    [sym__op] = STATE(309),
    [sym_variable_symbol] = STATE(310),
    [sym_constructor_symbol] = STATE(310),
    [sym__variable_symbol] = STATE(311),
    [aux_sym_tuple_pattern_repeat1] = STATE(312),
    [anon_sym_COMMA] = ACTIONS(603),
    [anon_sym_RPAREN] = ACTIONS(605),
    [anon_sym_DASH] = ACTIONS(607),
    [anon_sym_BQUOTE] = ACTIONS(609),
    [anon_sym_COLON] = ACTIONS(611),
    [anon_sym_BANG] = ACTIONS(607),
    [anon_sym_DOT] = ACTIONS(607),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(607),
    [anon_sym_DOLLAR] = ACTIONS(607),
    [anon_sym_PERCENT] = ACTIONS(607),
    [anon_sym_AMP] = ACTIONS(607),
    [anon_sym_1] = ACTIONS(607),
    [anon_sym_PLUS] = ACTIONS(607),
    [anon_sym_SLASH] = ACTIONS(607),
    [anon_sym_LT] = ACTIONS(607),
    [anon_sym_GT] = ACTIONS(607),
    [anon_sym_QMARK] = ACTIONS(607),
    [anon_sym_CARET] = ACTIONS(607),
  },
  [189] = {
    [aux_sym_tuple_pattern_repeat1] = STATE(312),
    [anon_sym_COMMA] = ACTIONS(603),
    [anon_sym_RPAREN] = ACTIONS(605),
    [sym_comment] = ACTIONS(5),
  },
  [190] = {
    [anon_sym_COMMA] = ACTIONS(613),
    [anon_sym_RPAREN] = ACTIONS(613),
    [sym_comment] = ACTIONS(5),
  },
  [191] = {
    [anon_sym_AT] = ACTIONS(615),
    [sym_comment] = ACTIONS(5),
  },
  [192] = {
    [sym__literal] = STATE(317),
    [sym_variable_identifier] = STATE(318),
    [sym_integer] = STATE(314),
    [sym_char] = STATE(314),
    [sym_string] = STATE(314),
    [aux_sym_general_constructor_repeat1] = STATE(319),
    [aux_sym_type_class_repeat1] = STATE(202),
    [anon_sym_LBRACE] = ACTIONS(183),
    [anon_sym_COMMA] = ACTIONS(183),
    [anon_sym_RPAREN] = ACTIONS(183),
    [anon_sym_DASH] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(183),
    [anon_sym_COLON] = ACTIONS(183),
    [anon_sym_BANG] = ACTIONS(183),
    [sym__variable_pattern] = ACTIONS(277),
    [anon_sym_DOT] = ACTIONS(183),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(617),
    [anon_sym_SQUOTE] = ACTIONS(619),
    [anon_sym_DQUOTE] = ACTIONS(435),
    [anon_sym_POUND] = ACTIONS(183),
    [anon_sym_DOLLAR] = ACTIONS(183),
    [anon_sym_PERCENT] = ACTIONS(183),
    [anon_sym_AMP] = ACTIONS(183),
    [anon_sym_1] = ACTIONS(183),
    [anon_sym_PLUS] = ACTIONS(183),
    [anon_sym_SLASH] = ACTIONS(183),
    [anon_sym_LT] = ACTIONS(183),
    [anon_sym_GT] = ACTIONS(183),
    [anon_sym_QMARK] = ACTIONS(183),
    [anon_sym_CARET] = ACTIONS(183),
    [sym__integer_literal] = ACTIONS(621),
    [sym__octal_literal] = ACTIONS(621),
    [sym__hexidecimal_literal] = ACTIONS(621),
  },
  [193] = {
    [anon_sym_RBRACK] = ACTIONS(623),
    [sym_comment] = ACTIONS(5),
  },
  [194] = {
    [anon_sym_AT] = ACTIONS(625),
    [sym_comment] = ACTIONS(5),
  },
  [195] = {
    [sym_variable_identifier] = STATE(165),
    [aux_sym_type_class_repeat1] = STATE(202),
    [anon_sym_LBRACE] = ACTIONS(183),
    [anon_sym_COMMA] = ACTIONS(183),
    [anon_sym_RPAREN] = ACTIONS(183),
    [anon_sym_RBRACK] = ACTIONS(183),
    [anon_sym_DASH] = ACTIONS(183),
    [anon_sym_BQUOTE] = ACTIONS(183),
    [anon_sym_COLON] = ACTIONS(183),
    [anon_sym_BANG] = ACTIONS(183),
    [sym__variable_pattern] = ACTIONS(277),
    [anon_sym_DOT] = ACTIONS(183),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(183),
    [anon_sym_DOLLAR] = ACTIONS(183),
    [anon_sym_PERCENT] = ACTIONS(183),
    [anon_sym_AMP] = ACTIONS(183),
    [anon_sym_1] = ACTIONS(183),
    [anon_sym_PLUS] = ACTIONS(183),
    [anon_sym_SLASH] = ACTIONS(183),
    [anon_sym_LT] = ACTIONS(183),
    [anon_sym_GT] = ACTIONS(183),
    [anon_sym_QMARK] = ACTIONS(183),
    [anon_sym_CARET] = ACTIONS(183),
  },
  [196] = {
    [anon_sym_AT] = ACTIONS(285),
    [sym_comment] = ACTIONS(5),
  },
  [197] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(627),
  },
  [198] = {
    [anon_sym_RBRACE] = ACTIONS(323),
    [anon_sym_LPAREN] = ACTIONS(323),
    [anon_sym_COMMA] = ACTIONS(323),
    [anon_sym_RPAREN] = ACTIONS(323),
    [anon_sym_EQ] = ACTIONS(323),
    [anon_sym_LBRACK] = ACTIONS(323),
    [anon_sym_RBRACK] = ACTIONS(323),
    [anon_sym_DASH] = ACTIONS(323),
    [anon_sym__] = ACTIONS(323),
    [anon_sym_BQUOTE] = ACTIONS(323),
    [anon_sym_COLON] = ACTIONS(323),
    [sym_list_constructor] = ACTIONS(323),
    [anon_sym_BANG] = ACTIONS(323),
    [sym__variable_pattern] = ACTIONS(325),
    [sym__constructor_pattern] = ACTIONS(325),
    [anon_sym_DOT] = ACTIONS(323),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(325),
    [anon_sym_SQUOTE] = ACTIONS(323),
    [anon_sym_DQUOTE] = ACTIONS(323),
    [anon_sym_POUND] = ACTIONS(323),
    [anon_sym_DOLLAR] = ACTIONS(323),
    [anon_sym_PERCENT] = ACTIONS(323),
    [anon_sym_AMP] = ACTIONS(323),
    [anon_sym_1] = ACTIONS(323),
    [anon_sym_PLUS] = ACTIONS(323),
    [anon_sym_SLASH] = ACTIONS(323),
    [anon_sym_LT] = ACTIONS(323),
    [anon_sym_GT] = ACTIONS(323),
    [anon_sym_QMARK] = ACTIONS(323),
    [anon_sym_CARET] = ACTIONS(323),
    [sym__integer_literal] = ACTIONS(323),
    [sym__octal_literal] = ACTIONS(323),
    [sym__hexidecimal_literal] = ACTIONS(323),
  },
  [199] = {
    [sym__gap] = STATE(179),
    [sym__graphic] = STATE(179),
    [sym__small] = STATE(78),
    [sym__large] = STATE(78),
    [sym__symbol] = STATE(78),
    [sym__special] = STATE(78),
    [sym__escape] = STATE(179),
    [anon_sym_SEMI] = ACTIONS(111),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_RBRACE] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_RPAREN] = ACTIONS(111),
    [anon_sym_EQ] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(111),
    [anon_sym_RBRACK] = ACTIONS(111),
    [anon_sym_DASH] = ACTIONS(113),
    [anon_sym_AT] = ACTIONS(113),
    [anon_sym__] = ACTIONS(115),
    [anon_sym_BQUOTE] = ACTIONS(111),
    [anon_sym_COLON] = ACTIONS(113),
    [anon_sym_PIPE] = ACTIONS(113),
    [anon_sym_BANG] = ACTIONS(113),
    [anon_sym_DOT] = ACTIONS(113),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(345),
    [anon_sym_DQUOTE] = ACTIONS(629),
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
  [200] = {
    [sym__function_pattern] = STATE(324),
    [sym_list_pattern] = STATE(89),
    [sym_tuple_pattern] = STATE(89),
    [sym_parenthesized_pattern] = STATE(89),
    [sym_as_pattern] = STATE(89),
    [sym_wildcard] = STATE(89),
    [sym__variable] = STATE(96),
    [sym_qualified_variable_identifier] = STATE(97),
    [sym__literal] = STATE(89),
    [sym__identifier] = STATE(98),
    [sym_simple_type] = STATE(99),
    [sym_variable_identifier] = STATE(100),
    [sym_constructor_identifier] = STATE(101),
    [sym_integer] = STATE(92),
    [sym_char] = STATE(92),
    [sym_string] = STATE(92),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym__] = ACTIONS(155),
    [sym_list_constructor] = ACTIONS(157),
    [sym__variable_pattern] = ACTIONS(159),
    [sym__constructor_pattern] = ACTIONS(161),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(163),
    [anon_sym_SQUOTE] = ACTIONS(165),
    [anon_sym_DQUOTE] = ACTIONS(167),
    [sym__integer_literal] = ACTIONS(71),
    [sym__octal_literal] = ACTIONS(71),
    [sym__hexidecimal_literal] = ACTIONS(71),
  },
  [201] = {
    [sym_labels] = STATE(326),
    [sym_label] = STATE(327),
    [sym__identifier] = STATE(328),
    [sym_variable_identifier] = STATE(117),
    [sym_constructor_identifier] = STATE(117),
    [anon_sym_RBRACE] = ACTIONS(631),
    [sym__variable_pattern] = ACTIONS(211),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [202] = {
    [sym_variable_identifier] = STATE(284),
    [anon_sym_LBRACE] = ACTIONS(543),
    [sym__variable_pattern] = ACTIONS(277),
    [sym_comment] = ACTIONS(5),
  },
  [203] = {
    [anon_sym_LPAREN] = ACTIONS(633),
    [anon_sym_EQ] = ACTIONS(633),
    [anon_sym_LBRACK] = ACTIONS(633),
    [anon_sym__] = ACTIONS(633),
    [sym_list_constructor] = ACTIONS(633),
    [sym__variable_pattern] = ACTIONS(635),
    [sym__constructor_pattern] = ACTIONS(635),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(635),
    [anon_sym_SQUOTE] = ACTIONS(633),
    [anon_sym_DQUOTE] = ACTIONS(633),
    [sym__integer_literal] = ACTIONS(633),
    [sym__octal_literal] = ACTIONS(633),
    [sym__hexidecimal_literal] = ACTIONS(633),
  },
  [204] = {
    [sym_type] = STATE(335),
    [sym__generic_type_constructor] = STATE(336),
    [sym_tupling_constructor] = STATE(332),
    [sym_tuple] = STATE(336),
    [sym_list] = STATE(336),
    [sym_parenthesized_constructor] = STATE(336),
    [sym_class] = STATE(337),
    [sym_variable_identifier] = STATE(338),
    [sym_constructor_identifier] = STATE(127),
    [sym__type_constructors] = STATE(332),
    [sym_qualified_type_constructor] = STATE(339),
    [anon_sym_LPAREN] = ACTIONS(637),
    [anon_sym_COMMA] = ACTIONS(639),
    [anon_sym_LBRACK] = ACTIONS(641),
    [sym_unit_type] = ACTIONS(643),
    [sym_list_constructor] = ACTIONS(643),
    [sym_function_constructor] = ACTIONS(643),
    [sym__variable_pattern] = ACTIONS(645),
    [sym__constructor_pattern] = ACTIONS(647),
    [sym_module_identifier] = ACTIONS(649),
    [sym_comment] = ACTIONS(5),
  },
  [205] = {
    [sym_type] = STATE(342),
    [sym__generic_type_constructor] = STATE(343),
    [sym_tupling_constructor] = STATE(332),
    [sym_tuple] = STATE(343),
    [sym_list] = STATE(343),
    [sym_parenthesized_constructor] = STATE(343),
    [sym_variable_identifier] = STATE(344),
    [sym__type_constructors] = STATE(332),
    [sym_qualified_type_constructor] = STATE(339),
    [aux_sym_list_repeat1] = STATE(345),
    [anon_sym_LPAREN] = ACTIONS(637),
    [anon_sym_LBRACK] = ACTIONS(641),
    [sym_unit_type] = ACTIONS(643),
    [sym_list_constructor] = ACTIONS(643),
    [sym_function_constructor] = ACTIONS(643),
    [sym__variable_pattern] = ACTIONS(277),
    [sym__constructor_pattern] = ACTIONS(651),
    [sym_module_identifier] = ACTIONS(653),
    [sym_comment] = ACTIONS(5),
  },
  [206] = {
    [sym__layout_semicolon] = ACTIONS(655),
    [anon_sym_SEMI] = ACTIONS(657),
    [anon_sym_DASH_GT] = ACTIONS(657),
    [sym_comment] = ACTIONS(5),
  },
  [207] = {
    [sym_variable_identifier] = STATE(346),
    [aux_sym_type_class_repeat1] = STATE(347),
    [sym__layout_semicolon] = ACTIONS(659),
    [anon_sym_SEMI] = ACTIONS(661),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_DASH_GT] = ACTIONS(661),
    [sym__variable_pattern] = ACTIONS(85),
    [sym_comment] = ACTIONS(5),
  },
  [208] = {
    [sym_constructor_identifier] = STATE(349),
    [aux_sym_qualified_type_constructor_repeat1] = STATE(350),
    [sym__constructor_pattern] = ACTIONS(361),
    [anon_sym_DOT] = ACTIONS(663),
    [sym_comment] = ACTIONS(5),
  },
  [209] = {
    [sym__layout_semicolon] = ACTIONS(665),
    [anon_sym_SEMI] = ACTIONS(667),
    [sym_comment] = ACTIONS(5),
  },
  [210] = {
    [sym__layout_semicolon] = ACTIONS(669),
    [anon_sym_SEMI] = ACTIONS(671),
    [anon_sym_DASH_GT] = ACTIONS(673),
    [sym_comment] = ACTIONS(5),
  },
  [211] = {
    [sym_type] = STATE(352),
    [sym__generic_type_constructor] = STATE(210),
    [sym_tupling_constructor] = STATE(206),
    [sym_tuple] = STATE(210),
    [sym_list] = STATE(210),
    [sym_parenthesized_constructor] = STATE(210),
    [sym_variable_identifier] = STATE(213),
    [sym__type_constructors] = STATE(206),
    [sym_qualified_type_constructor] = STATE(215),
    [anon_sym_LPAREN] = ACTIONS(549),
    [anon_sym_LBRACK] = ACTIONS(395),
    [sym_unit_type] = ACTIONS(397),
    [sym_list_constructor] = ACTIONS(397),
    [sym_function_constructor] = ACTIONS(397),
    [sym__variable_pattern] = ACTIONS(399),
    [sym__constructor_pattern] = ACTIONS(551),
    [sym_module_identifier] = ACTIONS(403),
    [sym_comment] = ACTIONS(5),
  },
  [212] = {
    [anon_sym_EQ_GT] = ACTIONS(675),
    [sym_comment] = ACTIONS(5),
  },
  [213] = {
    [sym__layout_semicolon] = ACTIONS(677),
    [anon_sym_SEMI] = ACTIONS(679),
    [anon_sym_DASH_GT] = ACTIONS(681),
    [sym_comment] = ACTIONS(5),
  },
  [214] = {
    [sym_variable_identifier] = STATE(247),
    [anon_sym_LPAREN] = ACTIONS(229),
    [sym__variable_pattern] = ACTIONS(645),
    [sym_comment] = ACTIONS(5),
  },
  [215] = {
    [sym__layout_semicolon] = ACTIONS(683),
    [anon_sym_SEMI] = ACTIONS(685),
    [anon_sym_DASH_GT] = ACTIONS(685),
    [sym_comment] = ACTIONS(5),
  },
  [216] = {
    [ts_builtin_sym_end] = ACTIONS(687),
    [anon_sym_RBRACE] = ACTIONS(689),
    [anon_sym_import] = ACTIONS(689),
    [anon_sym_foreign] = ACTIONS(689),
    [anon_sym_default] = ACTIONS(689),
    [anon_sym_do] = ACTIONS(689),
    [anon_sym_class] = ACTIONS(689),
    [anon_sym_instance] = ACTIONS(689),
    [anon_sym_infixl] = ACTIONS(689),
    [anon_sym_infixr] = ACTIONS(689),
    [anon_sym_infix] = ACTIONS(689),
    [anon_sym_data] = ACTIONS(689),
    [anon_sym_newtype] = ACTIONS(689),
    [anon_sym_type] = ACTIONS(689),
    [sym__variable_pattern] = ACTIONS(691),
    [sym__constructor_pattern] = ACTIONS(691),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(691),
    [anon_sym_SQUOTE] = ACTIONS(689),
    [anon_sym_DQUOTE] = ACTIONS(689),
    [sym__integer_literal] = ACTIONS(689),
    [sym__octal_literal] = ACTIONS(689),
    [sym__hexidecimal_literal] = ACTIONS(689),
  },
  [217] = {
    [sym_import] = STATE(20),
    [sym__declaration] = STATE(356),
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
    [aux_sym_module_repeat1] = STATE(357),
    [sym__layout_close_brace] = ACTIONS(693),
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
  [218] = {
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
    [aux_sym_module_repeat1] = STATE(358),
    [anon_sym_RBRACE] = ACTIONS(695),
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
  [219] = {
    [ts_builtin_sym_end] = ACTIONS(697),
    [sym_comment] = ACTIONS(5),
  },
  [220] = {
    [anon_sym_where] = ACTIONS(699),
    [sym_comment] = ACTIONS(5),
  },
  [221] = {
    [aux_sym_module_exports_repeat1] = STATE(361),
    [anon_sym_COMMA] = ACTIONS(701),
    [anon_sym_RPAREN] = ACTIONS(703),
    [sym_comment] = ACTIONS(5),
  },
  [222] = {
    [anon_sym_LPAREN] = ACTIONS(705),
    [anon_sym_COMMA] = ACTIONS(707),
    [anon_sym_RPAREN] = ACTIONS(707),
    [sym_comment] = ACTIONS(5),
  },
  [223] = {
    [sym_declarations] = STATE(363),
    [sym__layout_open_brace] = ACTIONS(409),
    [anon_sym_LBRACE] = ACTIONS(411),
    [sym_comment] = ACTIONS(5),
  },
  [224] = {
    [sym_module_identifier] = ACTIONS(709),
    [sym_comment] = ACTIONS(5),
  },
  [225] = {
    [sym__layout_semicolon] = ACTIONS(711),
    [anon_sym_SEMI] = ACTIONS(713),
    [sym_comment] = ACTIONS(5),
  },
  [226] = {
    [sym__layout_semicolon] = ACTIONS(715),
    [anon_sym_SEMI] = ACTIONS(717),
    [sym_comment] = ACTIONS(5),
  },
  [227] = {
    [aux_sym_import_specification_repeat1] = STATE(368),
    [anon_sym_LPAREN] = ACTIONS(719),
    [anon_sym_COMMA] = ACTIONS(721),
    [anon_sym_RPAREN] = ACTIONS(723),
    [sym_comment] = ACTIONS(5),
  },
  [228] = {
    [sym_import_specification] = STATE(369),
    [sym__layout_semicolon] = ACTIONS(711),
    [anon_sym_SEMI] = ACTIONS(713),
    [anon_sym_LPAREN] = ACTIONS(199),
    [anon_sym_hiding] = ACTIONS(203),
    [sym_comment] = ACTIONS(5),
  },
  [229] = {
    [sym__identifier] = STATE(370),
    [sym_variable_identifier] = STATE(117),
    [sym_constructor_identifier] = STATE(117),
    [anon_sym_RPAREN] = ACTIONS(723),
    [sym__variable_pattern] = ACTIONS(211),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [230] = {
    [sym__variable_pattern] = ACTIONS(725),
    [sym__constructor_pattern] = ACTIONS(727),
    [sym_comment] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(725),
  },
  [231] = {
    [sym__gap] = STATE(76),
    [sym__graphic] = STATE(76),
    [sym__small] = STATE(78),
    [sym__large] = STATE(78),
    [sym__symbol] = STATE(78),
    [sym__special] = STATE(78),
    [sym__escape] = STATE(76),
    [aux_sym_string_repeat1] = STATE(372),
    [anon_sym_SEMI] = ACTIONS(111),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_RBRACE] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_RPAREN] = ACTIONS(111),
    [anon_sym_EQ] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(111),
    [anon_sym_RBRACK] = ACTIONS(111),
    [anon_sym_DASH] = ACTIONS(113),
    [anon_sym_AT] = ACTIONS(113),
    [anon_sym__] = ACTIONS(115),
    [anon_sym_BQUOTE] = ACTIONS(111),
    [anon_sym_COLON] = ACTIONS(113),
    [anon_sym_PIPE] = ACTIONS(113),
    [anon_sym_BANG] = ACTIONS(113),
    [anon_sym_DOT] = ACTIONS(113),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(117),
    [anon_sym_DQUOTE] = ACTIONS(729),
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
  [232] = {
    [sym_type_signature] = STATE(373),
    [sym__identifier] = STATE(234),
    [sym_variable_identifier] = STATE(117),
    [sym_constructor_identifier] = STATE(117),
    [sym_string] = STATE(374),
    [sym__variable_pattern] = ACTIONS(645),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(435),
  },
  [233] = {
    [sym__layout_semicolon] = ACTIONS(731),
    [anon_sym_SEMI] = ACTIONS(733),
    [sym_comment] = ACTIONS(5),
  },
  [234] = {
    [anon_sym_COLON_COLON] = ACTIONS(179),
    [sym_comment] = ACTIONS(5),
  },
  [235] = {
    [sym_type_signature] = STATE(373),
    [sym__identifier] = STATE(234),
    [sym_variable_identifier] = STATE(117),
    [sym_constructor_identifier] = STATE(117),
    [sym__variable_pattern] = ACTIONS(645),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [236] = {
    [sym__identifier] = STATE(375),
    [sym_variable_identifier] = STATE(117),
    [sym_constructor_identifier] = STATE(117),
    [sym__variable_pattern] = ACTIONS(211),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [237] = {
    [sym__layout_semicolon] = ACTIONS(735),
    [anon_sym_SEMI] = ACTIONS(737),
    [sym_comment] = ACTIONS(5),
  },
  [238] = {
    [anon_sym_COMMA] = ACTIONS(739),
    [anon_sym_RPAREN] = ACTIONS(741),
    [sym_comment] = ACTIONS(5),
  },
  [239] = {
    [sym__layout_close_brace] = ACTIONS(743),
    [anon_sym_do] = ACTIONS(745),
    [sym__variable_pattern] = ACTIONS(747),
    [sym__constructor_pattern] = ACTIONS(747),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(747),
    [anon_sym_SQUOTE] = ACTIONS(745),
    [anon_sym_DQUOTE] = ACTIONS(745),
    [sym__integer_literal] = ACTIONS(745),
    [sym__octal_literal] = ACTIONS(745),
    [sym__hexidecimal_literal] = ACTIONS(745),
  },
  [240] = {
    [sym__layout_semicolon] = ACTIONS(749),
    [anon_sym_SEMI] = ACTIONS(751),
    [sym_comment] = ACTIONS(5),
  },
  [241] = {
    [sym__layout_close_brace] = ACTIONS(753),
    [anon_sym_do] = ACTIONS(755),
    [sym__variable_pattern] = ACTIONS(757),
    [sym__constructor_pattern] = ACTIONS(757),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(757),
    [anon_sym_SQUOTE] = ACTIONS(755),
    [anon_sym_DQUOTE] = ACTIONS(755),
    [sym__integer_literal] = ACTIONS(755),
    [sym__octal_literal] = ACTIONS(755),
    [sym__hexidecimal_literal] = ACTIONS(755),
  },
  [242] = {
    [anon_sym_RBRACE] = ACTIONS(745),
    [anon_sym_do] = ACTIONS(745),
    [sym__variable_pattern] = ACTIONS(747),
    [sym__constructor_pattern] = ACTIONS(747),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(747),
    [anon_sym_SQUOTE] = ACTIONS(745),
    [anon_sym_DQUOTE] = ACTIONS(745),
    [sym__integer_literal] = ACTIONS(745),
    [sym__octal_literal] = ACTIONS(745),
    [sym__hexidecimal_literal] = ACTIONS(745),
  },
  [243] = {
    [anon_sym_RBRACE] = ACTIONS(755),
    [anon_sym_do] = ACTIONS(755),
    [sym__variable_pattern] = ACTIONS(757),
    [sym__constructor_pattern] = ACTIONS(757),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(757),
    [anon_sym_SQUOTE] = ACTIONS(755),
    [anon_sym_DQUOTE] = ACTIONS(755),
    [sym__integer_literal] = ACTIONS(755),
    [sym__octal_literal] = ACTIONS(755),
    [sym__hexidecimal_literal] = ACTIONS(755),
  },
  [244] = {
    [sym_class] = STATE(378),
    [sym_constructor_identifier] = STATE(127),
    [sym__constructor_pattern] = ACTIONS(75),
    [sym_comment] = ACTIONS(5),
  },
  [245] = {
    [anon_sym_EQ_GT] = ACTIONS(759),
    [sym_comment] = ACTIONS(5),
  },
  [246] = {
    [anon_sym_COMMA] = ACTIONS(761),
    [anon_sym_RPAREN] = ACTIONS(763),
    [sym_comment] = ACTIONS(5),
  },
  [247] = {
    [anon_sym_COMMA] = ACTIONS(481),
    [anon_sym_RPAREN] = ACTIONS(481),
    [anon_sym_EQ_GT] = ACTIONS(481),
    [sym_comment] = ACTIONS(5),
  },
  [248] = {
    [sym_general_declarations] = STATE(382),
    [sym__layout_open_brace] = ACTIONS(475),
    [anon_sym_LBRACE] = ACTIONS(477),
    [sym_comment] = ACTIONS(5),
  },
  [249] = {
    [anon_sym_where] = ACTIONS(479),
    [sym__variable_pattern] = ACTIONS(483),
    [sym_comment] = ACTIONS(5),
  },
  [250] = {
    [sym_variable_identifier] = STATE(255),
    [anon_sym_where] = ACTIONS(765),
    [sym__variable_pattern] = ACTIONS(231),
    [sym_comment] = ACTIONS(5),
  },
  [251] = {
    [sym__general_declaration] = STATE(385),
    [sym_fixity] = STATE(26),
    [sym_type_signature] = STATE(26),
    [sym__identifier] = STATE(234),
    [sym_variable_identifier] = STATE(117),
    [sym_constructor_identifier] = STATE(117),
    [aux_sym_general_declarations_repeat1] = STATE(386),
    [sym__layout_close_brace] = ACTIONS(767),
    [anon_sym_infixl] = ACTIONS(25),
    [anon_sym_infixr] = ACTIONS(25),
    [anon_sym_infix] = ACTIONS(25),
    [sym__variable_pattern] = ACTIONS(231),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [252] = {
    [sym__general_declaration] = STATE(387),
    [sym_fixity] = STATE(26),
    [sym_type_signature] = STATE(26),
    [sym__identifier] = STATE(234),
    [sym_variable_identifier] = STATE(117),
    [sym_constructor_identifier] = STATE(117),
    [aux_sym_general_declarations_repeat1] = STATE(388),
    [anon_sym_RBRACE] = ACTIONS(769),
    [anon_sym_infixl] = ACTIONS(25),
    [anon_sym_infixr] = ACTIONS(25),
    [anon_sym_infix] = ACTIONS(25),
    [sym__variable_pattern] = ACTIONS(231),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [253] = {
    [sym__layout_semicolon] = ACTIONS(771),
    [anon_sym_SEMI] = ACTIONS(773),
    [sym_comment] = ACTIONS(5),
  },
  [254] = {
    [sym_variable_identifier] = STATE(284),
    [anon_sym_RPAREN] = ACTIONS(775),
    [sym__variable_pattern] = ACTIONS(277),
    [sym_comment] = ACTIONS(5),
  },
  [255] = {
    [anon_sym_where] = ACTIONS(777),
    [sym__variable_pattern] = ACTIONS(779),
    [sym_comment] = ACTIONS(5),
  },
  [256] = {
    [sym_general_declarations] = STATE(390),
    [sym__layout_open_brace] = ACTIONS(475),
    [anon_sym_LBRACE] = ACTIONS(477),
    [sym_comment] = ACTIONS(5),
  },
  [257] = {
    [sym_variable_identifier] = STATE(255),
    [anon_sym_where] = ACTIONS(781),
    [sym__variable_pattern] = ACTIONS(231),
    [sym_comment] = ACTIONS(5),
  },
  [258] = {
    [sym__layout_semicolon] = ACTIONS(783),
    [anon_sym_SEMI] = ACTIONS(785),
    [sym_comment] = ACTIONS(5),
  },
  [259] = {
    [sym__layout_semicolon] = ACTIONS(787),
    [anon_sym_SEMI] = ACTIONS(789),
    [anon_sym_COMMA] = ACTIONS(789),
    [sym_comment] = ACTIONS(5),
  },
  [260] = {
    [sym__layout_semicolon] = ACTIONS(791),
    [anon_sym_SEMI] = ACTIONS(793),
    [anon_sym_COMMA] = ACTIONS(793),
    [anon_sym_DASH] = ACTIONS(793),
    [anon_sym_COLON] = ACTIONS(793),
    [anon_sym_BANG] = ACTIONS(793),
    [anon_sym_DOT] = ACTIONS(793),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(793),
    [anon_sym_DOLLAR] = ACTIONS(793),
    [anon_sym_PERCENT] = ACTIONS(793),
    [anon_sym_AMP] = ACTIONS(793),
    [anon_sym_1] = ACTIONS(793),
    [anon_sym_PLUS] = ACTIONS(793),
    [anon_sym_SLASH] = ACTIONS(793),
    [anon_sym_LT] = ACTIONS(793),
    [anon_sym_GT] = ACTIONS(793),
    [anon_sym_QMARK] = ACTIONS(793),
    [anon_sym_CARET] = ACTIONS(793),
  },
  [261] = {
    [sym__layout_semicolon] = ACTIONS(795),
    [anon_sym_SEMI] = ACTIONS(797),
    [anon_sym_COMMA] = ACTIONS(797),
    [sym_comment] = ACTIONS(5),
  },
  [262] = {
    [sym__op] = STATE(392),
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
  [263] = {
    [sym__layout_semicolon] = ACTIONS(799),
    [anon_sym_SEMI] = ACTIONS(801),
    [anon_sym_COMMA] = ACTIONS(505),
    [sym_comment] = ACTIONS(5),
  },
  [264] = {
    [sym__layout_semicolon] = ACTIONS(803),
    [anon_sym_SEMI] = ACTIONS(805),
    [anon_sym_COMMA] = ACTIONS(805),
    [anon_sym_DASH] = ACTIONS(805),
    [anon_sym_BANG] = ACTIONS(805),
    [anon_sym_DOT] = ACTIONS(805),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(805),
    [anon_sym_DOLLAR] = ACTIONS(805),
    [anon_sym_PERCENT] = ACTIONS(805),
    [anon_sym_AMP] = ACTIONS(805),
    [anon_sym_1] = ACTIONS(805),
    [anon_sym_PLUS] = ACTIONS(805),
    [anon_sym_SLASH] = ACTIONS(805),
    [anon_sym_LT] = ACTIONS(805),
    [anon_sym_GT] = ACTIONS(805),
    [anon_sym_QMARK] = ACTIONS(805),
    [anon_sym_CARET] = ACTIONS(805),
  },
  [265] = {
    [sym_constructors] = STATE(393),
    [sym_constructor] = STATE(152),
    [sym_deriving] = STATE(394),
    [sym_constructor_identifier] = STATE(154),
    [sym__layout_semicolon] = ACTIONS(807),
    [anon_sym_SEMI] = ACTIONS(809),
    [anon_sym_deriving] = ACTIONS(265),
    [sym__constructor_pattern] = ACTIONS(73),
    [sym_comment] = ACTIONS(5),
  },
  [266] = {
    [sym_deriving] = STATE(394),
    [sym__layout_semicolon] = ACTIONS(807),
    [anon_sym_SEMI] = ACTIONS(809),
    [anon_sym_deriving] = ACTIONS(265),
    [sym_comment] = ACTIONS(5),
  },
  [267] = {
    [sym__layout_semicolon] = ACTIONS(807),
    [anon_sym_SEMI] = ACTIONS(809),
    [sym_comment] = ACTIONS(5),
  },
  [268] = {
    [sym__layout_semicolon] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(79),
    [anon_sym_deriving] = ACTIONS(79),
    [sym__variable_pattern] = ACTIONS(81),
    [sym__constructor_pattern] = ACTIONS(81),
    [sym_comment] = ACTIONS(5),
  },
  [269] = {
    [sym__layout_semicolon] = ACTIONS(539),
    [anon_sym_SEMI] = ACTIONS(479),
    [anon_sym_EQ] = ACTIONS(479),
    [anon_sym_deriving] = ACTIONS(479),
    [sym__variable_pattern] = ACTIONS(483),
    [sym__constructor_pattern] = ACTIONS(483),
    [sym_comment] = ACTIONS(5),
  },
  [270] = {
    [sym__identifier] = STATE(395),
    [sym_variable_identifier] = STATE(117),
    [sym_constructor_identifier] = STATE(117),
    [sym__variable_pattern] = ACTIONS(211),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [271] = {
    [sym__layout_semicolon] = ACTIONS(811),
    [anon_sym_SEMI] = ACTIONS(813),
    [sym_comment] = ACTIONS(5),
  },
  [272] = {
    [sym_constructor] = STATE(396),
    [sym_constructor_identifier] = STATE(154),
    [sym__constructor_pattern] = ACTIONS(73),
    [sym_comment] = ACTIONS(5),
  },
  [273] = {
    [sym__layout_semicolon] = ACTIONS(815),
    [anon_sym_SEMI] = ACTIONS(817),
    [anon_sym_PIPE] = ACTIONS(819),
    [anon_sym_deriving] = ACTIONS(817),
    [sym_comment] = ACTIONS(5),
  },
  [274] = {
    [sym_field] = STATE(398),
    [sym_variable_identifier] = STATE(399),
    [sym__variable_pattern] = ACTIONS(645),
    [sym_comment] = ACTIONS(5),
  },
  [275] = {
    [sym__identifier] = STATE(400),
    [sym_variable_identifier] = STATE(277),
    [sym_constructor_identifier] = STATE(277),
    [sym__variable_pattern] = ACTIONS(821),
    [sym__constructor_pattern] = ACTIONS(73),
    [sym_comment] = ACTIONS(5),
  },
  [276] = {
    [sym__layout_semicolon] = ACTIONS(823),
    [anon_sym_SEMI] = ACTIONS(825),
    [anon_sym_PIPE] = ACTIONS(825),
    [anon_sym_deriving] = ACTIONS(825),
    [anon_sym_BANG] = ACTIONS(825),
    [sym__variable_pattern] = ACTIONS(827),
    [sym__constructor_pattern] = ACTIONS(827),
    [sym_comment] = ACTIONS(5),
  },
  [277] = {
    [sym__layout_semicolon] = ACTIONS(181),
    [anon_sym_SEMI] = ACTIONS(183),
    [anon_sym_PIPE] = ACTIONS(183),
    [anon_sym_deriving] = ACTIONS(183),
    [anon_sym_BANG] = ACTIONS(183),
    [sym__variable_pattern] = ACTIONS(185),
    [sym__constructor_pattern] = ACTIONS(185),
    [sym_comment] = ACTIONS(5),
  },
  [278] = {
    [sym__layout_semicolon] = ACTIONS(829),
    [anon_sym_SEMI] = ACTIONS(831),
    [anon_sym_PIPE] = ACTIONS(831),
    [anon_sym_deriving] = ACTIONS(831),
    [sym_comment] = ACTIONS(5),
  },
  [279] = {
    [sym_strict] = STATE(401),
    [sym__identifier] = STATE(401),
    [sym_variable_identifier] = STATE(277),
    [sym_constructor_identifier] = STATE(277),
    [sym__layout_semicolon] = ACTIONS(829),
    [anon_sym_SEMI] = ACTIONS(831),
    [anon_sym_PIPE] = ACTIONS(831),
    [anon_sym_deriving] = ACTIONS(831),
    [anon_sym_BANG] = ACTIONS(537),
    [sym__variable_pattern] = ACTIONS(271),
    [sym__constructor_pattern] = ACTIONS(73),
    [sym_comment] = ACTIONS(5),
  },
  [280] = {
    [sym__layout_semicolon] = ACTIONS(833),
    [anon_sym_SEMI] = ACTIONS(777),
    [anon_sym_EQ] = ACTIONS(777),
    [anon_sym_deriving] = ACTIONS(777),
    [sym__variable_pattern] = ACTIONS(779),
    [sym__constructor_pattern] = ACTIONS(779),
    [sym_comment] = ACTIONS(5),
  },
  [281] = {
    [sym_new_constructor] = STATE(402),
    [sym_constructor_identifier] = STATE(283),
    [sym__constructor_pattern] = ACTIONS(75),
    [sym_comment] = ACTIONS(5),
  },
  [282] = {
    [sym_deriving] = STATE(403),
    [sym__layout_semicolon] = ACTIONS(835),
    [anon_sym_SEMI] = ACTIONS(837),
    [anon_sym_deriving] = ACTIONS(265),
    [sym_comment] = ACTIONS(5),
  },
  [283] = {
    [sym__identifier] = STATE(404),
    [sym_variable_identifier] = STATE(277),
    [sym_constructor_identifier] = STATE(277),
    [sym_fields] = STATE(404),
    [anon_sym_LBRACE] = ACTIONS(535),
    [sym__variable_pattern] = ACTIONS(821),
    [sym__constructor_pattern] = ACTIONS(73),
    [sym_comment] = ACTIONS(5),
  },
  [284] = {
    [anon_sym_LBRACE] = ACTIONS(777),
    [anon_sym_LPAREN] = ACTIONS(777),
    [anon_sym_COMMA] = ACTIONS(777),
    [anon_sym_RPAREN] = ACTIONS(777),
    [anon_sym_EQ] = ACTIONS(777),
    [anon_sym_LBRACK] = ACTIONS(777),
    [anon_sym_RBRACK] = ACTIONS(777),
    [anon_sym_DASH_GT] = ACTIONS(777),
    [sym_unit_type] = ACTIONS(777),
    [sym_list_constructor] = ACTIONS(777),
    [sym_function_constructor] = ACTIONS(777),
    [sym__variable_pattern] = ACTIONS(777),
    [sym__constructor_pattern] = ACTIONS(779),
    [sym_module_identifier] = ACTIONS(779),
    [sym_comment] = ACTIONS(5),
  },
  [285] = {
    [sym_type] = STATE(335),
    [sym__generic_type_constructor] = STATE(336),
    [sym_tupling_constructor] = STATE(332),
    [sym_tuple] = STATE(336),
    [sym_list] = STATE(336),
    [sym_parenthesized_constructor] = STATE(336),
    [sym_variable_identifier] = STATE(338),
    [sym__type_constructors] = STATE(332),
    [sym_qualified_type_constructor] = STATE(339),
    [anon_sym_LPAREN] = ACTIONS(637),
    [anon_sym_COMMA] = ACTIONS(639),
    [anon_sym_LBRACK] = ACTIONS(641),
    [sym_unit_type] = ACTIONS(643),
    [sym_list_constructor] = ACTIONS(643),
    [sym_function_constructor] = ACTIONS(643),
    [sym__variable_pattern] = ACTIONS(645),
    [sym__constructor_pattern] = ACTIONS(651),
    [sym_module_identifier] = ACTIONS(649),
    [sym_comment] = ACTIONS(5),
  },
  [286] = {
    [sym_variable_identifier] = STATE(346),
    [aux_sym_type_class_repeat1] = STATE(347),
    [sym__layout_semicolon] = ACTIONS(659),
    [anon_sym_SEMI] = ACTIONS(661),
    [anon_sym_DASH_GT] = ACTIONS(661),
    [sym__variable_pattern] = ACTIONS(359),
    [sym_comment] = ACTIONS(5),
  },
  [287] = {
    [sym__layout_semicolon] = ACTIONS(839),
    [anon_sym_SEMI] = ACTIONS(841),
    [sym_comment] = ACTIONS(5),
  },
  [288] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(843),
  },
  [289] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(845),
  },
  [290] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(847),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(847),
  },
  [291] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(849),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(851),
  },
  [292] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(853),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(853),
  },
  [293] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(849),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(855),
  },
  [294] = {
    [anon_sym_SEMI] = ACTIONS(857),
    [anon_sym_LBRACE] = ACTIONS(857),
    [anon_sym_RBRACE] = ACTIONS(857),
    [anon_sym_LPAREN] = ACTIONS(857),
    [anon_sym_RPAREN] = ACTIONS(857),
    [anon_sym_EQ] = ACTIONS(857),
    [anon_sym_LBRACK] = ACTIONS(857),
    [anon_sym_RBRACK] = ACTIONS(857),
    [anon_sym_DASH] = ACTIONS(857),
    [anon_sym_AT] = ACTIONS(857),
    [anon_sym__] = ACTIONS(857),
    [anon_sym_BQUOTE] = ACTIONS(857),
    [anon_sym_COLON] = ACTIONS(857),
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
  },
  [295] = {
    [anon_sym_SEMI] = ACTIONS(859),
    [anon_sym_LBRACE] = ACTIONS(859),
    [anon_sym_RBRACE] = ACTIONS(859),
    [anon_sym_LPAREN] = ACTIONS(859),
    [anon_sym_RPAREN] = ACTIONS(859),
    [anon_sym_EQ] = ACTIONS(859),
    [anon_sym_LBRACK] = ACTIONS(859),
    [anon_sym_RBRACK] = ACTIONS(859),
    [anon_sym_DASH] = ACTIONS(859),
    [anon_sym_AT] = ACTIONS(859),
    [anon_sym__] = ACTIONS(859),
    [anon_sym_BQUOTE] = ACTIONS(859),
    [anon_sym_COLON] = ACTIONS(859),
    [anon_sym_PIPE] = ACTIONS(859),
    [anon_sym_BANG] = ACTIONS(859),
    [anon_sym_DOT] = ACTIONS(859),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(859),
    [anon_sym_DQUOTE] = ACTIONS(859),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(859),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(859),
    [sym__ascii_large] = ACTIONS(859),
    [anon_sym_POUND] = ACTIONS(859),
    [anon_sym_DOLLAR] = ACTIONS(859),
    [anon_sym_PERCENT] = ACTIONS(859),
    [anon_sym_AMP] = ACTIONS(859),
    [anon_sym_1] = ACTIONS(859),
    [anon_sym_PLUS] = ACTIONS(859),
    [anon_sym_SLASH] = ACTIONS(859),
    [anon_sym_LT] = ACTIONS(859),
    [anon_sym_GT] = ACTIONS(859),
    [anon_sym_QMARK] = ACTIONS(859),
    [anon_sym_CARET] = ACTIONS(859),
    [anon_sym_TILDE] = ACTIONS(859),
    [anon_sym_BSLASH] = ACTIONS(859),
    [sym__space] = ACTIONS(859),
    [sym__newline] = ACTIONS(859),
    [sym__tab] = ACTIONS(859),
    [sym__vertical_tab] = ACTIONS(859),
  },
  [296] = {
    [anon_sym_SEMI] = ACTIONS(861),
    [anon_sym_LBRACE] = ACTIONS(861),
    [anon_sym_RBRACE] = ACTIONS(861),
    [anon_sym_LPAREN] = ACTIONS(861),
    [anon_sym_RPAREN] = ACTIONS(861),
    [anon_sym_EQ] = ACTIONS(861),
    [anon_sym_LBRACK] = ACTIONS(861),
    [anon_sym_RBRACK] = ACTIONS(861),
    [anon_sym_DASH] = ACTIONS(861),
    [anon_sym_AT] = ACTIONS(861),
    [anon_sym__] = ACTIONS(861),
    [anon_sym_BQUOTE] = ACTIONS(861),
    [anon_sym_COLON] = ACTIONS(861),
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
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(861),
  },
  [297] = {
    [anon_sym_SEMI] = ACTIONS(863),
    [anon_sym_LBRACE] = ACTIONS(863),
    [anon_sym_RBRACE] = ACTIONS(863),
    [anon_sym_LPAREN] = ACTIONS(863),
    [anon_sym_RPAREN] = ACTIONS(863),
    [anon_sym_EQ] = ACTIONS(863),
    [anon_sym_LBRACK] = ACTIONS(863),
    [anon_sym_RBRACK] = ACTIONS(863),
    [anon_sym_DASH] = ACTIONS(863),
    [anon_sym_AT] = ACTIONS(863),
    [anon_sym__] = ACTIONS(863),
    [anon_sym_BQUOTE] = ACTIONS(863),
    [anon_sym_COLON] = ACTIONS(863),
    [anon_sym_PIPE] = ACTIONS(863),
    [anon_sym_BANG] = ACTIONS(863),
    [anon_sym_DOT] = ACTIONS(863),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(863),
    [anon_sym_DQUOTE] = ACTIONS(863),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(863),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(863),
    [sym__ascii_large] = ACTIONS(863),
    [anon_sym_POUND] = ACTIONS(863),
    [anon_sym_DOLLAR] = ACTIONS(863),
    [anon_sym_PERCENT] = ACTIONS(863),
    [anon_sym_AMP] = ACTIONS(863),
    [anon_sym_1] = ACTIONS(863),
    [anon_sym_PLUS] = ACTIONS(863),
    [anon_sym_SLASH] = ACTIONS(863),
    [anon_sym_LT] = ACTIONS(863),
    [anon_sym_GT] = ACTIONS(863),
    [anon_sym_QMARK] = ACTIONS(863),
    [anon_sym_CARET] = ACTIONS(863),
    [anon_sym_TILDE] = ACTIONS(863),
    [anon_sym_BSLASH] = ACTIONS(863),
    [sym__space] = ACTIONS(863),
    [sym__newline] = ACTIONS(863),
    [sym__tab] = ACTIONS(863),
    [sym__vertical_tab] = ACTIONS(863),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(865),
  },
  [298] = {
    [anon_sym_SEMI] = ACTIONS(867),
    [anon_sym_LBRACE] = ACTIONS(867),
    [anon_sym_RBRACE] = ACTIONS(867),
    [anon_sym_LPAREN] = ACTIONS(867),
    [anon_sym_RPAREN] = ACTIONS(867),
    [anon_sym_EQ] = ACTIONS(867),
    [anon_sym_LBRACK] = ACTIONS(867),
    [anon_sym_RBRACK] = ACTIONS(867),
    [anon_sym_DASH] = ACTIONS(867),
    [anon_sym_AT] = ACTIONS(867),
    [anon_sym__] = ACTIONS(867),
    [anon_sym_BQUOTE] = ACTIONS(867),
    [anon_sym_COLON] = ACTIONS(867),
    [anon_sym_PIPE] = ACTIONS(867),
    [anon_sym_BANG] = ACTIONS(867),
    [anon_sym_DOT] = ACTIONS(867),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(867),
    [anon_sym_DQUOTE] = ACTIONS(867),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(867),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(867),
    [sym__ascii_large] = ACTIONS(867),
    [anon_sym_POUND] = ACTIONS(867),
    [anon_sym_DOLLAR] = ACTIONS(867),
    [anon_sym_PERCENT] = ACTIONS(867),
    [anon_sym_AMP] = ACTIONS(867),
    [anon_sym_1] = ACTIONS(867),
    [anon_sym_PLUS] = ACTIONS(867),
    [anon_sym_SLASH] = ACTIONS(867),
    [anon_sym_LT] = ACTIONS(867),
    [anon_sym_GT] = ACTIONS(867),
    [anon_sym_QMARK] = ACTIONS(867),
    [anon_sym_CARET] = ACTIONS(867),
    [anon_sym_TILDE] = ACTIONS(867),
    [anon_sym_BSLASH] = ACTIONS(867),
    [sym__space] = ACTIONS(867),
    [sym__newline] = ACTIONS(867),
    [sym__tab] = ACTIONS(867),
    [sym__vertical_tab] = ACTIONS(867),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(867),
  },
  [299] = {
    [anon_sym_SEMI] = ACTIONS(863),
    [anon_sym_LBRACE] = ACTIONS(863),
    [anon_sym_RBRACE] = ACTIONS(863),
    [anon_sym_LPAREN] = ACTIONS(863),
    [anon_sym_RPAREN] = ACTIONS(863),
    [anon_sym_EQ] = ACTIONS(863),
    [anon_sym_LBRACK] = ACTIONS(863),
    [anon_sym_RBRACK] = ACTIONS(863),
    [anon_sym_DASH] = ACTIONS(863),
    [anon_sym_AT] = ACTIONS(863),
    [anon_sym__] = ACTIONS(863),
    [anon_sym_BQUOTE] = ACTIONS(863),
    [anon_sym_COLON] = ACTIONS(863),
    [anon_sym_PIPE] = ACTIONS(863),
    [anon_sym_BANG] = ACTIONS(863),
    [anon_sym_DOT] = ACTIONS(863),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(863),
    [anon_sym_DQUOTE] = ACTIONS(863),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(863),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(863),
    [sym__ascii_large] = ACTIONS(863),
    [anon_sym_POUND] = ACTIONS(863),
    [anon_sym_DOLLAR] = ACTIONS(863),
    [anon_sym_PERCENT] = ACTIONS(863),
    [anon_sym_AMP] = ACTIONS(863),
    [anon_sym_1] = ACTIONS(863),
    [anon_sym_PLUS] = ACTIONS(863),
    [anon_sym_SLASH] = ACTIONS(863),
    [anon_sym_LT] = ACTIONS(863),
    [anon_sym_GT] = ACTIONS(863),
    [anon_sym_QMARK] = ACTIONS(863),
    [anon_sym_CARET] = ACTIONS(863),
    [anon_sym_TILDE] = ACTIONS(863),
    [anon_sym_BSLASH] = ACTIONS(863),
    [sym__space] = ACTIONS(863),
    [sym__newline] = ACTIONS(863),
    [sym__tab] = ACTIONS(863),
    [sym__vertical_tab] = ACTIONS(863),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(869),
  },
  [300] = {
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
  [301] = {
    [sym__literal] = STATE(409),
    [sym_variable_identifier] = STATE(409),
    [sym_integer] = STATE(15),
    [sym_char] = STATE(15),
    [sym_string] = STATE(15),
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
  [302] = {
    [sym__layout_semicolon] = ACTIONS(883),
    [anon_sym_SEMI] = ACTIONS(885),
    [sym__variable_pattern] = ACTIONS(885),
    [sym__constructor_pattern] = ACTIONS(887),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(887),
    [anon_sym_SQUOTE] = ACTIONS(885),
    [anon_sym_DQUOTE] = ACTIONS(885),
    [sym__integer_literal] = ACTIONS(885),
    [sym__octal_literal] = ACTIONS(885),
    [sym__hexidecimal_literal] = ACTIONS(885),
  },
  [303] = {
    [sym__literal] = STATE(410),
    [sym_integer] = STATE(92),
    [sym_char] = STATE(92),
    [sym_string] = STATE(92),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(163),
    [anon_sym_SQUOTE] = ACTIONS(165),
    [anon_sym_DQUOTE] = ACTIONS(167),
    [sym__integer_literal] = ACTIONS(71),
    [sym__octal_literal] = ACTIONS(71),
    [sym__hexidecimal_literal] = ACTIONS(71),
  },
  [304] = {
    [sym__function_pattern] = STATE(411),
    [sym_list_pattern] = STATE(89),
    [sym_tuple_pattern] = STATE(89),
    [sym_parenthesized_pattern] = STATE(89),
    [sym__pattern] = STATE(412),
    [sym_negative_literal] = STATE(190),
    [sym_general_constructor] = STATE(190),
    [sym_as_pattern] = STATE(89),
    [sym_wildcard] = STATE(89),
    [sym__variable] = STATE(191),
    [sym_qualified_variable_identifier] = STATE(97),
    [sym__literal] = STATE(89),
    [sym__identifier] = STATE(98),
    [sym_simple_type] = STATE(99),
    [sym_variable_identifier] = STATE(100),
    [sym_constructor_identifier] = STATE(192),
    [sym_integer] = STATE(92),
    [sym_char] = STATE(92),
    [sym_string] = STATE(92),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_DASH] = ACTIONS(367),
    [anon_sym__] = ACTIONS(155),
    [sym_list_constructor] = ACTIONS(157),
    [sym__variable_pattern] = ACTIONS(159),
    [sym__constructor_pattern] = ACTIONS(369),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(163),
    [anon_sym_SQUOTE] = ACTIONS(165),
    [anon_sym_DQUOTE] = ACTIONS(167),
    [sym__integer_literal] = ACTIONS(71),
    [sym__octal_literal] = ACTIONS(71),
    [sym__hexidecimal_literal] = ACTIONS(71),
  },
  [305] = {
    [anon_sym_LPAREN] = ACTIONS(889),
    [anon_sym_COMMA] = ACTIONS(889),
    [anon_sym_RPAREN] = ACTIONS(889),
    [anon_sym_EQ] = ACTIONS(889),
    [anon_sym_LBRACK] = ACTIONS(889),
    [anon_sym_RBRACK] = ACTIONS(889),
    [anon_sym_DASH] = ACTIONS(889),
    [anon_sym__] = ACTIONS(889),
    [anon_sym_BQUOTE] = ACTIONS(889),
    [anon_sym_COLON] = ACTIONS(889),
    [sym_list_constructor] = ACTIONS(889),
    [anon_sym_BANG] = ACTIONS(889),
    [sym__variable_pattern] = ACTIONS(891),
    [sym__constructor_pattern] = ACTIONS(891),
    [anon_sym_DOT] = ACTIONS(889),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(891),
    [anon_sym_SQUOTE] = ACTIONS(889),
    [anon_sym_DQUOTE] = ACTIONS(889),
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
    [sym__integer_literal] = ACTIONS(889),
    [sym__octal_literal] = ACTIONS(889),
    [sym__hexidecimal_literal] = ACTIONS(889),
  },
  [306] = {
    [anon_sym_LPAREN] = ACTIONS(237),
    [anon_sym_LBRACK] = ACTIONS(237),
    [anon_sym_DASH] = ACTIONS(237),
    [anon_sym__] = ACTIONS(237),
    [sym_list_constructor] = ACTIONS(237),
    [anon_sym_BANG] = ACTIONS(237),
    [sym__variable_pattern] = ACTIONS(893),
    [sym__constructor_pattern] = ACTIONS(893),
    [anon_sym_DOT] = ACTIONS(237),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(893),
    [anon_sym_SQUOTE] = ACTIONS(237),
    [anon_sym_DQUOTE] = ACTIONS(237),
    [anon_sym_POUND] = ACTIONS(237),
    [anon_sym_DOLLAR] = ACTIONS(237),
    [anon_sym_PERCENT] = ACTIONS(237),
    [anon_sym_AMP] = ACTIONS(237),
    [anon_sym_1] = ACTIONS(237),
    [anon_sym_PLUS] = ACTIONS(237),
    [anon_sym_SLASH] = ACTIONS(237),
    [anon_sym_LT] = ACTIONS(237),
    [anon_sym_GT] = ACTIONS(237),
    [anon_sym_QMARK] = ACTIONS(237),
    [anon_sym_CARET] = ACTIONS(237),
    [sym__integer_literal] = ACTIONS(237),
    [sym__octal_literal] = ACTIONS(237),
    [sym__hexidecimal_literal] = ACTIONS(237),
  },
  [307] = {
    [sym__identifier] = STATE(413),
    [sym_variable_identifier] = STATE(117),
    [sym_constructor_identifier] = STATE(117),
    [sym__variable_pattern] = ACTIONS(211),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [308] = {
    [sym__constructor_symbol] = STATE(415),
    [aux_sym_constructor_symbol_repeat1] = STATE(416),
    [anon_sym_LPAREN] = ACTIONS(241),
    [anon_sym_LBRACK] = ACTIONS(241),
    [anon_sym_DASH] = ACTIONS(241),
    [anon_sym__] = ACTIONS(241),
    [anon_sym_COLON] = ACTIONS(895),
    [sym_list_constructor] = ACTIONS(241),
    [anon_sym_BANG] = ACTIONS(895),
    [sym__variable_pattern] = ACTIONS(897),
    [sym__constructor_pattern] = ACTIONS(897),
    [anon_sym_DOT] = ACTIONS(895),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(897),
    [anon_sym_SQUOTE] = ACTIONS(241),
    [anon_sym_DQUOTE] = ACTIONS(241),
    [anon_sym_POUND] = ACTIONS(895),
    [anon_sym_DOLLAR] = ACTIONS(895),
    [anon_sym_PERCENT] = ACTIONS(895),
    [anon_sym_AMP] = ACTIONS(895),
    [anon_sym_1] = ACTIONS(895),
    [anon_sym_PLUS] = ACTIONS(895),
    [anon_sym_SLASH] = ACTIONS(895),
    [anon_sym_LT] = ACTIONS(895),
    [anon_sym_GT] = ACTIONS(895),
    [anon_sym_QMARK] = ACTIONS(895),
    [anon_sym_CARET] = ACTIONS(895),
    [sym__integer_literal] = ACTIONS(241),
    [sym__octal_literal] = ACTIONS(241),
    [sym__hexidecimal_literal] = ACTIONS(241),
  },
  [309] = {
    [sym__function_pattern] = STATE(417),
    [sym_list_pattern] = STATE(89),
    [sym_tuple_pattern] = STATE(89),
    [sym_parenthesized_pattern] = STATE(89),
    [sym__pattern] = STATE(418),
    [sym_negative_literal] = STATE(190),
    [sym_general_constructor] = STATE(190),
    [sym_as_pattern] = STATE(89),
    [sym_wildcard] = STATE(89),
    [sym__variable] = STATE(191),
    [sym_qualified_variable_identifier] = STATE(97),
    [sym__literal] = STATE(89),
    [sym__identifier] = STATE(98),
    [sym_simple_type] = STATE(99),
    [sym_variable_identifier] = STATE(100),
    [sym_constructor_identifier] = STATE(192),
    [sym_integer] = STATE(92),
    [sym_char] = STATE(92),
    [sym_string] = STATE(92),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_DASH] = ACTIONS(367),
    [anon_sym__] = ACTIONS(155),
    [sym_list_constructor] = ACTIONS(157),
    [sym__variable_pattern] = ACTIONS(159),
    [sym__constructor_pattern] = ACTIONS(369),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(163),
    [anon_sym_SQUOTE] = ACTIONS(165),
    [anon_sym_DQUOTE] = ACTIONS(167),
    [sym__integer_literal] = ACTIONS(71),
    [sym__octal_literal] = ACTIONS(71),
    [sym__hexidecimal_literal] = ACTIONS(71),
  },
  [310] = {
    [anon_sym_LPAREN] = ACTIONS(253),
    [anon_sym_LBRACK] = ACTIONS(253),
    [anon_sym_DASH] = ACTIONS(253),
    [anon_sym__] = ACTIONS(253),
    [sym_list_constructor] = ACTIONS(253),
    [sym__variable_pattern] = ACTIONS(899),
    [sym__constructor_pattern] = ACTIONS(899),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(899),
    [anon_sym_SQUOTE] = ACTIONS(253),
    [anon_sym_DQUOTE] = ACTIONS(253),
    [sym__integer_literal] = ACTIONS(253),
    [sym__octal_literal] = ACTIONS(253),
    [sym__hexidecimal_literal] = ACTIONS(253),
  },
  [311] = {
    [sym__variable_symbol] = STATE(419),
    [aux_sym_variable_symbol_repeat1] = STATE(420),
    [anon_sym_LPAREN] = ACTIONS(257),
    [anon_sym_LBRACK] = ACTIONS(257),
    [anon_sym_DASH] = ACTIONS(607),
    [anon_sym__] = ACTIONS(257),
    [sym_list_constructor] = ACTIONS(257),
    [anon_sym_BANG] = ACTIONS(607),
    [sym__variable_pattern] = ACTIONS(901),
    [sym__constructor_pattern] = ACTIONS(901),
    [anon_sym_DOT] = ACTIONS(607),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(901),
    [anon_sym_SQUOTE] = ACTIONS(257),
    [anon_sym_DQUOTE] = ACTIONS(257),
    [anon_sym_POUND] = ACTIONS(607),
    [anon_sym_DOLLAR] = ACTIONS(607),
    [anon_sym_PERCENT] = ACTIONS(607),
    [anon_sym_AMP] = ACTIONS(607),
    [anon_sym_1] = ACTIONS(607),
    [anon_sym_PLUS] = ACTIONS(607),
    [anon_sym_SLASH] = ACTIONS(607),
    [anon_sym_LT] = ACTIONS(607),
    [anon_sym_GT] = ACTIONS(607),
    [anon_sym_QMARK] = ACTIONS(607),
    [anon_sym_CARET] = ACTIONS(607),
    [sym__integer_literal] = ACTIONS(257),
    [sym__octal_literal] = ACTIONS(257),
    [sym__hexidecimal_literal] = ACTIONS(257),
  },
  [312] = {
    [anon_sym_COMMA] = ACTIONS(903),
    [anon_sym_RPAREN] = ACTIONS(905),
    [sym_comment] = ACTIONS(5),
  },
  [313] = {
    [sym__function_pattern] = STATE(324),
    [sym_list_pattern] = STATE(89),
    [sym_tuple_pattern] = STATE(89),
    [sym_parenthesized_pattern] = STATE(89),
    [sym_as_pattern] = STATE(89),
    [sym_wildcard] = STATE(89),
    [sym__variable] = STATE(191),
    [sym_qualified_variable_identifier] = STATE(97),
    [sym__literal] = STATE(89),
    [sym__identifier] = STATE(98),
    [sym_simple_type] = STATE(99),
    [sym_variable_identifier] = STATE(100),
    [sym_constructor_identifier] = STATE(195),
    [sym_integer] = STATE(92),
    [sym_char] = STATE(92),
    [sym_string] = STATE(92),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym__] = ACTIONS(155),
    [sym_list_constructor] = ACTIONS(157),
    [sym__variable_pattern] = ACTIONS(159),
    [sym__constructor_pattern] = ACTIONS(369),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(163),
    [anon_sym_SQUOTE] = ACTIONS(165),
    [anon_sym_DQUOTE] = ACTIONS(167),
    [sym__integer_literal] = ACTIONS(71),
    [sym__octal_literal] = ACTIONS(71),
    [sym__hexidecimal_literal] = ACTIONS(71),
  },
  [314] = {
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
  [315] = {
    [sym__graphic] = STATE(423),
    [sym__small] = STATE(70),
    [sym__large] = STATE(70),
    [sym__symbol] = STATE(70),
    [sym__special] = STATE(70),
    [sym__escape] = STATE(423),
    [anon_sym_SEMI] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(95),
    [anon_sym_RBRACE] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(95),
    [anon_sym_RPAREN] = ACTIONS(95),
    [anon_sym_EQ] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_RBRACK] = ACTIONS(95),
    [anon_sym_DASH] = ACTIONS(97),
    [anon_sym_AT] = ACTIONS(97),
    [anon_sym__] = ACTIONS(99),
    [anon_sym_BQUOTE] = ACTIONS(95),
    [anon_sym_COLON] = ACTIONS(97),
    [anon_sym_PIPE] = ACTIONS(97),
    [anon_sym_BANG] = ACTIONS(97),
    [anon_sym_DOT] = ACTIONS(97),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(907),
    [anon_sym_DQUOTE] = ACTIONS(907),
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
    [sym__space] = ACTIONS(907),
  },
  [316] = {
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
  [317] = {
    [anon_sym_COMMA] = ACTIONS(873),
    [anon_sym_RPAREN] = ACTIONS(873),
    [sym__variable_pattern] = ACTIONS(873),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(875),
    [anon_sym_SQUOTE] = ACTIONS(873),
    [anon_sym_DQUOTE] = ACTIONS(873),
    [sym__integer_literal] = ACTIONS(873),
    [sym__octal_literal] = ACTIONS(873),
    [sym__hexidecimal_literal] = ACTIONS(873),
  },
  [318] = {
    [anon_sym_LBRACE] = ACTIONS(479),
    [anon_sym_COMMA] = ACTIONS(873),
    [anon_sym_RPAREN] = ACTIONS(873),
    [sym__variable_pattern] = ACTIONS(909),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(875),
    [anon_sym_SQUOTE] = ACTIONS(873),
    [anon_sym_DQUOTE] = ACTIONS(873),
    [sym__integer_literal] = ACTIONS(873),
    [sym__octal_literal] = ACTIONS(873),
    [sym__hexidecimal_literal] = ACTIONS(873),
  },
  [319] = {
    [sym__literal] = STATE(424),
    [sym_variable_identifier] = STATE(424),
    [sym_integer] = STATE(314),
    [sym_char] = STATE(314),
    [sym_string] = STATE(314),
    [anon_sym_COMMA] = ACTIONS(879),
    [anon_sym_RPAREN] = ACTIONS(879),
    [sym__variable_pattern] = ACTIONS(277),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(617),
    [anon_sym_SQUOTE] = ACTIONS(619),
    [anon_sym_DQUOTE] = ACTIONS(435),
    [sym__integer_literal] = ACTIONS(621),
    [sym__octal_literal] = ACTIONS(621),
    [sym__hexidecimal_literal] = ACTIONS(621),
  },
  [320] = {
    [anon_sym_LPAREN] = ACTIONS(912),
    [anon_sym_COMMA] = ACTIONS(912),
    [anon_sym_RPAREN] = ACTIONS(912),
    [anon_sym_EQ] = ACTIONS(912),
    [anon_sym_LBRACK] = ACTIONS(912),
    [anon_sym_RBRACK] = ACTIONS(912),
    [anon_sym_DASH] = ACTIONS(912),
    [anon_sym__] = ACTIONS(912),
    [anon_sym_BQUOTE] = ACTIONS(912),
    [anon_sym_COLON] = ACTIONS(912),
    [sym_list_constructor] = ACTIONS(912),
    [anon_sym_BANG] = ACTIONS(912),
    [sym__variable_pattern] = ACTIONS(914),
    [sym__constructor_pattern] = ACTIONS(914),
    [anon_sym_DOT] = ACTIONS(912),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(914),
    [anon_sym_SQUOTE] = ACTIONS(912),
    [anon_sym_DQUOTE] = ACTIONS(912),
    [anon_sym_POUND] = ACTIONS(912),
    [anon_sym_DOLLAR] = ACTIONS(912),
    [anon_sym_PERCENT] = ACTIONS(912),
    [anon_sym_AMP] = ACTIONS(912),
    [anon_sym_1] = ACTIONS(912),
    [anon_sym_PLUS] = ACTIONS(912),
    [anon_sym_SLASH] = ACTIONS(912),
    [anon_sym_LT] = ACTIONS(912),
    [anon_sym_GT] = ACTIONS(912),
    [anon_sym_QMARK] = ACTIONS(912),
    [anon_sym_CARET] = ACTIONS(912),
    [sym__integer_literal] = ACTIONS(912),
    [sym__octal_literal] = ACTIONS(912),
    [sym__hexidecimal_literal] = ACTIONS(912),
  },
  [321] = {
    [sym__function_pattern] = STATE(324),
    [sym_list_pattern] = STATE(89),
    [sym_tuple_pattern] = STATE(89),
    [sym_parenthesized_pattern] = STATE(89),
    [sym_as_pattern] = STATE(89),
    [sym_wildcard] = STATE(89),
    [sym__variable] = STATE(194),
    [sym_qualified_variable_identifier] = STATE(97),
    [sym__literal] = STATE(89),
    [sym__identifier] = STATE(98),
    [sym_simple_type] = STATE(99),
    [sym_variable_identifier] = STATE(100),
    [sym_constructor_identifier] = STATE(195),
    [sym_integer] = STATE(92),
    [sym_char] = STATE(92),
    [sym_string] = STATE(92),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym__] = ACTIONS(155),
    [sym_list_constructor] = ACTIONS(157),
    [sym__variable_pattern] = ACTIONS(159),
    [sym__constructor_pattern] = ACTIONS(369),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(163),
    [anon_sym_SQUOTE] = ACTIONS(165),
    [anon_sym_DQUOTE] = ACTIONS(167),
    [sym__integer_literal] = ACTIONS(71),
    [sym__octal_literal] = ACTIONS(71),
    [sym__hexidecimal_literal] = ACTIONS(71),
  },
  [322] = {
    [anon_sym_RBRACE] = ACTIONS(555),
    [anon_sym_LPAREN] = ACTIONS(555),
    [anon_sym_COMMA] = ACTIONS(555),
    [anon_sym_RPAREN] = ACTIONS(555),
    [anon_sym_EQ] = ACTIONS(555),
    [anon_sym_LBRACK] = ACTIONS(555),
    [anon_sym_RBRACK] = ACTIONS(555),
    [anon_sym_DASH] = ACTIONS(555),
    [anon_sym__] = ACTIONS(555),
    [anon_sym_BQUOTE] = ACTIONS(555),
    [anon_sym_COLON] = ACTIONS(555),
    [sym_list_constructor] = ACTIONS(555),
    [anon_sym_BANG] = ACTIONS(555),
    [sym__variable_pattern] = ACTIONS(557),
    [sym__constructor_pattern] = ACTIONS(557),
    [anon_sym_DOT] = ACTIONS(555),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(557),
    [anon_sym_SQUOTE] = ACTIONS(555),
    [anon_sym_DQUOTE] = ACTIONS(555),
    [anon_sym_POUND] = ACTIONS(555),
    [anon_sym_DOLLAR] = ACTIONS(555),
    [anon_sym_PERCENT] = ACTIONS(555),
    [anon_sym_AMP] = ACTIONS(555),
    [anon_sym_1] = ACTIONS(555),
    [anon_sym_PLUS] = ACTIONS(555),
    [anon_sym_SLASH] = ACTIONS(555),
    [anon_sym_LT] = ACTIONS(555),
    [anon_sym_GT] = ACTIONS(555),
    [anon_sym_QMARK] = ACTIONS(555),
    [anon_sym_CARET] = ACTIONS(555),
    [sym__integer_literal] = ACTIONS(555),
    [sym__octal_literal] = ACTIONS(555),
    [sym__hexidecimal_literal] = ACTIONS(555),
  },
  [323] = {
    [anon_sym_RBRACE] = ACTIONS(587),
    [anon_sym_LPAREN] = ACTIONS(587),
    [anon_sym_COMMA] = ACTIONS(587),
    [anon_sym_RPAREN] = ACTIONS(587),
    [anon_sym_EQ] = ACTIONS(587),
    [anon_sym_LBRACK] = ACTIONS(587),
    [anon_sym_RBRACK] = ACTIONS(587),
    [anon_sym_DASH] = ACTIONS(587),
    [anon_sym__] = ACTIONS(587),
    [anon_sym_BQUOTE] = ACTIONS(587),
    [anon_sym_COLON] = ACTIONS(587),
    [sym_list_constructor] = ACTIONS(587),
    [anon_sym_BANG] = ACTIONS(587),
    [sym__variable_pattern] = ACTIONS(589),
    [sym__constructor_pattern] = ACTIONS(589),
    [anon_sym_DOT] = ACTIONS(587),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(589),
    [anon_sym_SQUOTE] = ACTIONS(587),
    [anon_sym_DQUOTE] = ACTIONS(587),
    [anon_sym_POUND] = ACTIONS(587),
    [anon_sym_DOLLAR] = ACTIONS(587),
    [anon_sym_PERCENT] = ACTIONS(587),
    [anon_sym_AMP] = ACTIONS(587),
    [anon_sym_1] = ACTIONS(587),
    [anon_sym_PLUS] = ACTIONS(587),
    [anon_sym_SLASH] = ACTIONS(587),
    [anon_sym_LT] = ACTIONS(587),
    [anon_sym_GT] = ACTIONS(587),
    [anon_sym_QMARK] = ACTIONS(587),
    [anon_sym_CARET] = ACTIONS(587),
    [sym__integer_literal] = ACTIONS(587),
    [sym__octal_literal] = ACTIONS(587),
    [sym__hexidecimal_literal] = ACTIONS(587),
  },
  [324] = {
    [anon_sym_LPAREN] = ACTIONS(916),
    [anon_sym_COMMA] = ACTIONS(916),
    [anon_sym_RPAREN] = ACTIONS(916),
    [anon_sym_EQ] = ACTIONS(916),
    [anon_sym_LBRACK] = ACTIONS(916),
    [anon_sym_RBRACK] = ACTIONS(916),
    [anon_sym_DASH] = ACTIONS(916),
    [anon_sym__] = ACTIONS(916),
    [anon_sym_BQUOTE] = ACTIONS(916),
    [anon_sym_COLON] = ACTIONS(916),
    [sym_list_constructor] = ACTIONS(916),
    [anon_sym_BANG] = ACTIONS(916),
    [sym__variable_pattern] = ACTIONS(918),
    [sym__constructor_pattern] = ACTIONS(918),
    [anon_sym_DOT] = ACTIONS(916),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(918),
    [anon_sym_SQUOTE] = ACTIONS(916),
    [anon_sym_DQUOTE] = ACTIONS(916),
    [anon_sym_POUND] = ACTIONS(916),
    [anon_sym_DOLLAR] = ACTIONS(916),
    [anon_sym_PERCENT] = ACTIONS(916),
    [anon_sym_AMP] = ACTIONS(916),
    [anon_sym_1] = ACTIONS(916),
    [anon_sym_PLUS] = ACTIONS(916),
    [anon_sym_SLASH] = ACTIONS(916),
    [anon_sym_LT] = ACTIONS(916),
    [anon_sym_GT] = ACTIONS(916),
    [anon_sym_QMARK] = ACTIONS(916),
    [anon_sym_CARET] = ACTIONS(916),
    [sym__integer_literal] = ACTIONS(916),
    [sym__octal_literal] = ACTIONS(916),
    [sym__hexidecimal_literal] = ACTIONS(916),
  },
  [325] = {
    [anon_sym_LPAREN] = ACTIONS(920),
    [anon_sym_COMMA] = ACTIONS(920),
    [anon_sym_RPAREN] = ACTIONS(920),
    [anon_sym_EQ] = ACTIONS(920),
    [anon_sym_LBRACK] = ACTIONS(920),
    [anon_sym_RBRACK] = ACTIONS(920),
    [anon_sym_DASH] = ACTIONS(920),
    [anon_sym__] = ACTIONS(920),
    [anon_sym_BQUOTE] = ACTIONS(920),
    [anon_sym_COLON] = ACTIONS(920),
    [sym_list_constructor] = ACTIONS(920),
    [anon_sym_BANG] = ACTIONS(920),
    [sym__variable_pattern] = ACTIONS(922),
    [sym__constructor_pattern] = ACTIONS(922),
    [anon_sym_DOT] = ACTIONS(920),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(922),
    [anon_sym_SQUOTE] = ACTIONS(920),
    [anon_sym_DQUOTE] = ACTIONS(920),
    [anon_sym_POUND] = ACTIONS(920),
    [anon_sym_DOLLAR] = ACTIONS(920),
    [anon_sym_PERCENT] = ACTIONS(920),
    [anon_sym_AMP] = ACTIONS(920),
    [anon_sym_1] = ACTIONS(920),
    [anon_sym_PLUS] = ACTIONS(920),
    [anon_sym_SLASH] = ACTIONS(920),
    [anon_sym_LT] = ACTIONS(920),
    [anon_sym_GT] = ACTIONS(920),
    [anon_sym_QMARK] = ACTIONS(920),
    [anon_sym_CARET] = ACTIONS(920),
    [sym__integer_literal] = ACTIONS(920),
    [sym__octal_literal] = ACTIONS(920),
    [sym__hexidecimal_literal] = ACTIONS(920),
  },
  [326] = {
    [anon_sym_RBRACE] = ACTIONS(924),
    [sym_comment] = ACTIONS(5),
  },
  [327] = {
    [aux_sym_labels_repeat1] = STATE(427),
    [anon_sym_RBRACE] = ACTIONS(926),
    [anon_sym_COMMA] = ACTIONS(928),
    [sym_comment] = ACTIONS(5),
  },
  [328] = {
    [anon_sym_EQ] = ACTIONS(930),
    [sym_comment] = ACTIONS(5),
  },
  [329] = {
    [sym_type] = STATE(430),
    [sym__generic_type_constructor] = STATE(336),
    [sym_tupling_constructor] = STATE(332),
    [sym_tuple] = STATE(336),
    [sym_list] = STATE(336),
    [sym_parenthesized_constructor] = STATE(336),
    [sym_variable_identifier] = STATE(338),
    [sym__type_constructors] = STATE(332),
    [sym_qualified_type_constructor] = STATE(339),
    [anon_sym_LPAREN] = ACTIONS(637),
    [anon_sym_COMMA] = ACTIONS(932),
    [anon_sym_LBRACK] = ACTIONS(641),
    [sym_unit_type] = ACTIONS(643),
    [sym_list_constructor] = ACTIONS(643),
    [sym_function_constructor] = ACTIONS(643),
    [sym__variable_pattern] = ACTIONS(645),
    [sym__constructor_pattern] = ACTIONS(651),
    [sym_module_identifier] = ACTIONS(649),
    [sym_comment] = ACTIONS(5),
  },
  [330] = {
    [aux_sym_tupling_constructor_repeat1] = STATE(433),
    [anon_sym_COMMA] = ACTIONS(934),
    [anon_sym_RPAREN] = ACTIONS(936),
    [sym_comment] = ACTIONS(5),
  },
  [331] = {
    [sym_type] = STATE(342),
    [sym__generic_type_constructor] = STATE(343),
    [sym_tupling_constructor] = STATE(332),
    [sym_tuple] = STATE(343),
    [sym_list] = STATE(343),
    [sym_parenthesized_constructor] = STATE(343),
    [sym_variable_identifier] = STATE(344),
    [sym__type_constructors] = STATE(332),
    [sym_qualified_type_constructor] = STATE(339),
    [aux_sym_list_repeat1] = STATE(434),
    [anon_sym_LPAREN] = ACTIONS(637),
    [anon_sym_LBRACK] = ACTIONS(641),
    [sym_unit_type] = ACTIONS(643),
    [sym_list_constructor] = ACTIONS(643),
    [sym_function_constructor] = ACTIONS(643),
    [sym__variable_pattern] = ACTIONS(277),
    [sym__constructor_pattern] = ACTIONS(651),
    [sym_module_identifier] = ACTIONS(653),
    [sym_comment] = ACTIONS(5),
  },
  [332] = {
    [anon_sym_LPAREN] = ACTIONS(657),
    [anon_sym_COMMA] = ACTIONS(657),
    [anon_sym_RPAREN] = ACTIONS(657),
    [anon_sym_LBRACK] = ACTIONS(657),
    [anon_sym_RBRACK] = ACTIONS(657),
    [anon_sym_DASH_GT] = ACTIONS(657),
    [sym_unit_type] = ACTIONS(657),
    [sym_list_constructor] = ACTIONS(657),
    [sym_function_constructor] = ACTIONS(657),
    [sym__variable_pattern] = ACTIONS(657),
    [sym__constructor_pattern] = ACTIONS(938),
    [sym_module_identifier] = ACTIONS(938),
    [sym_comment] = ACTIONS(5),
  },
  [333] = {
    [sym_variable_identifier] = STATE(165),
    [aux_sym_type_class_repeat1] = STATE(435),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_COMMA] = ACTIONS(661),
    [anon_sym_RPAREN] = ACTIONS(661),
    [anon_sym_DASH_GT] = ACTIONS(661),
    [sym__variable_pattern] = ACTIONS(85),
    [sym_comment] = ACTIONS(5),
  },
  [334] = {
    [sym_constructor_identifier] = STATE(437),
    [aux_sym_qualified_type_constructor_repeat1] = STATE(438),
    [sym__constructor_pattern] = ACTIONS(75),
    [anon_sym_DOT] = ACTIONS(940),
    [sym_comment] = ACTIONS(5),
  },
  [335] = {
    [aux_sym_tuple_repeat1] = STATE(441),
    [anon_sym_COMMA] = ACTIONS(942),
    [anon_sym_RPAREN] = ACTIONS(944),
    [sym_comment] = ACTIONS(5),
  },
  [336] = {
    [anon_sym_COMMA] = ACTIONS(671),
    [anon_sym_RPAREN] = ACTIONS(671),
    [anon_sym_DASH_GT] = ACTIONS(946),
    [sym_comment] = ACTIONS(5),
  },
  [337] = {
    [aux_sym_context_repeat1] = STATE(444),
    [anon_sym_COMMA] = ACTIONS(467),
    [anon_sym_RPAREN] = ACTIONS(948),
    [sym_comment] = ACTIONS(5),
  },
  [338] = {
    [anon_sym_COMMA] = ACTIONS(679),
    [anon_sym_RPAREN] = ACTIONS(679),
    [anon_sym_DASH_GT] = ACTIONS(950),
    [sym_comment] = ACTIONS(5),
  },
  [339] = {
    [anon_sym_LPAREN] = ACTIONS(685),
    [anon_sym_COMMA] = ACTIONS(685),
    [anon_sym_RPAREN] = ACTIONS(685),
    [anon_sym_LBRACK] = ACTIONS(685),
    [anon_sym_RBRACK] = ACTIONS(685),
    [anon_sym_DASH_GT] = ACTIONS(685),
    [sym_unit_type] = ACTIONS(685),
    [sym_list_constructor] = ACTIONS(685),
    [sym_function_constructor] = ACTIONS(685),
    [sym__variable_pattern] = ACTIONS(685),
    [sym__constructor_pattern] = ACTIONS(952),
    [sym_module_identifier] = ACTIONS(952),
    [sym_comment] = ACTIONS(5),
  },
  [340] = {
    [sym_variable_identifier] = STATE(165),
    [aux_sym_type_class_repeat1] = STATE(435),
    [anon_sym_LPAREN] = ACTIONS(661),
    [anon_sym_COMMA] = ACTIONS(661),
    [anon_sym_RPAREN] = ACTIONS(661),
    [anon_sym_LBRACK] = ACTIONS(661),
    [anon_sym_RBRACK] = ACTIONS(661),
    [anon_sym_DASH_GT] = ACTIONS(661),
    [sym_unit_type] = ACTIONS(661),
    [sym_list_constructor] = ACTIONS(661),
    [sym_function_constructor] = ACTIONS(661),
    [sym__variable_pattern] = ACTIONS(277),
    [sym__constructor_pattern] = ACTIONS(954),
    [sym_module_identifier] = ACTIONS(954),
    [sym_comment] = ACTIONS(5),
  },
  [341] = {
    [sym_constructor_identifier] = STATE(437),
    [aux_sym_qualified_type_constructor_repeat1] = STATE(448),
    [sym__constructor_pattern] = ACTIONS(956),
    [anon_sym_DOT] = ACTIONS(958),
    [sym_comment] = ACTIONS(5),
  },
  [342] = {
    [anon_sym_LPAREN] = ACTIONS(960),
    [anon_sym_LBRACK] = ACTIONS(960),
    [anon_sym_RBRACK] = ACTIONS(960),
    [sym_unit_type] = ACTIONS(960),
    [sym_list_constructor] = ACTIONS(960),
    [sym_function_constructor] = ACTIONS(960),
    [sym__variable_pattern] = ACTIONS(960),
    [sym__constructor_pattern] = ACTIONS(962),
    [sym_module_identifier] = ACTIONS(962),
    [sym_comment] = ACTIONS(5),
  },
  [343] = {
    [anon_sym_LPAREN] = ACTIONS(671),
    [anon_sym_LBRACK] = ACTIONS(671),
    [anon_sym_RBRACK] = ACTIONS(671),
    [anon_sym_DASH_GT] = ACTIONS(964),
    [sym_unit_type] = ACTIONS(671),
    [sym_list_constructor] = ACTIONS(671),
    [sym_function_constructor] = ACTIONS(671),
    [sym__variable_pattern] = ACTIONS(671),
    [sym__constructor_pattern] = ACTIONS(966),
    [sym_module_identifier] = ACTIONS(966),
    [sym_comment] = ACTIONS(5),
  },
  [344] = {
    [anon_sym_LPAREN] = ACTIONS(679),
    [anon_sym_LBRACK] = ACTIONS(679),
    [anon_sym_RBRACK] = ACTIONS(679),
    [anon_sym_DASH_GT] = ACTIONS(968),
    [sym_unit_type] = ACTIONS(679),
    [sym_list_constructor] = ACTIONS(679),
    [sym_function_constructor] = ACTIONS(679),
    [sym__variable_pattern] = ACTIONS(679),
    [sym__constructor_pattern] = ACTIONS(970),
    [sym_module_identifier] = ACTIONS(970),
    [sym_comment] = ACTIONS(5),
  },
  [345] = {
    [sym_type] = STATE(452),
    [sym__generic_type_constructor] = STATE(343),
    [sym_tupling_constructor] = STATE(332),
    [sym_tuple] = STATE(343),
    [sym_list] = STATE(343),
    [sym_parenthesized_constructor] = STATE(343),
    [sym_variable_identifier] = STATE(344),
    [sym__type_constructors] = STATE(332),
    [sym_qualified_type_constructor] = STATE(339),
    [anon_sym_LPAREN] = ACTIONS(637),
    [anon_sym_LBRACK] = ACTIONS(641),
    [anon_sym_RBRACK] = ACTIONS(972),
    [sym_unit_type] = ACTIONS(643),
    [sym_list_constructor] = ACTIONS(643),
    [sym_function_constructor] = ACTIONS(643),
    [sym__variable_pattern] = ACTIONS(277),
    [sym__constructor_pattern] = ACTIONS(651),
    [sym_module_identifier] = ACTIONS(653),
    [sym_comment] = ACTIONS(5),
  },
  [346] = {
    [sym__layout_semicolon] = ACTIONS(539),
    [anon_sym_SEMI] = ACTIONS(479),
    [anon_sym_DASH_GT] = ACTIONS(479),
    [sym__variable_pattern] = ACTIONS(479),
    [sym_comment] = ACTIONS(5),
  },
  [347] = {
    [sym_variable_identifier] = STATE(453),
    [sym__layout_semicolon] = ACTIONS(974),
    [anon_sym_SEMI] = ACTIONS(976),
    [anon_sym_DASH_GT] = ACTIONS(976),
    [sym__variable_pattern] = ACTIONS(359),
    [sym_comment] = ACTIONS(5),
  },
  [348] = {
    [sym_constructor_identifier] = STATE(455),
    [sym__constructor_pattern] = ACTIONS(361),
    [sym_module_identifier] = ACTIONS(978),
    [sym_comment] = ACTIONS(5),
  },
  [349] = {
    [sym_variable_identifier] = STATE(346),
    [aux_sym_type_class_repeat1] = STATE(456),
    [sym__layout_semicolon] = ACTIONS(980),
    [anon_sym_SEMI] = ACTIONS(982),
    [anon_sym_DASH_GT] = ACTIONS(982),
    [sym__variable_pattern] = ACTIONS(359),
    [sym_comment] = ACTIONS(5),
  },
  [350] = {
    [sym_constructor_identifier] = STATE(455),
    [sym__constructor_pattern] = ACTIONS(361),
    [anon_sym_DOT] = ACTIONS(984),
    [sym_comment] = ACTIONS(5),
  },
  [351] = {
    [sym_type] = STATE(458),
    [sym__generic_type_constructor] = STATE(210),
    [sym_tupling_constructor] = STATE(206),
    [sym_tuple] = STATE(210),
    [sym_list] = STATE(210),
    [sym_parenthesized_constructor] = STATE(210),
    [sym_variable_identifier] = STATE(213),
    [sym__type_constructors] = STATE(206),
    [sym_qualified_type_constructor] = STATE(215),
    [anon_sym_LPAREN] = ACTIONS(549),
    [anon_sym_LBRACK] = ACTIONS(395),
    [sym_unit_type] = ACTIONS(397),
    [sym_list_constructor] = ACTIONS(397),
    [sym_function_constructor] = ACTIONS(397),
    [sym__variable_pattern] = ACTIONS(399),
    [sym__constructor_pattern] = ACTIONS(551),
    [sym_module_identifier] = ACTIONS(403),
    [sym_comment] = ACTIONS(5),
  },
  [352] = {
    [sym__layout_semicolon] = ACTIONS(986),
    [anon_sym_SEMI] = ACTIONS(988),
    [sym_comment] = ACTIONS(5),
  },
  [353] = {
    [anon_sym_LPAREN] = ACTIONS(990),
    [anon_sym_LBRACK] = ACTIONS(990),
    [sym_unit_type] = ACTIONS(990),
    [sym_list_constructor] = ACTIONS(990),
    [sym_function_constructor] = ACTIONS(990),
    [sym__variable_pattern] = ACTIONS(990),
    [sym__constructor_pattern] = ACTIONS(473),
    [sym_module_identifier] = ACTIONS(473),
    [sym_comment] = ACTIONS(5),
  },
  [354] = {
    [sym_type] = STATE(459),
    [sym__generic_type_constructor] = STATE(210),
    [sym_tupling_constructor] = STATE(206),
    [sym_tuple] = STATE(210),
    [sym_list] = STATE(210),
    [sym_parenthesized_constructor] = STATE(210),
    [sym_variable_identifier] = STATE(213),
    [sym__type_constructors] = STATE(206),
    [sym_qualified_type_constructor] = STATE(215),
    [anon_sym_LPAREN] = ACTIONS(549),
    [anon_sym_LBRACK] = ACTIONS(395),
    [sym_unit_type] = ACTIONS(397),
    [sym_list_constructor] = ACTIONS(397),
    [sym_function_constructor] = ACTIONS(397),
    [sym__variable_pattern] = ACTIONS(399),
    [sym__constructor_pattern] = ACTIONS(551),
    [sym_module_identifier] = ACTIONS(403),
    [sym_comment] = ACTIONS(5),
  },
  [355] = {
    [ts_builtin_sym_end] = ACTIONS(992),
    [sym_comment] = ACTIONS(5),
  },
  [356] = {
    [sym__layout_semicolon] = ACTIONS(994),
    [anon_sym_SEMI] = ACTIONS(996),
    [sym_comment] = ACTIONS(5),
  },
  [357] = {
    [sym_import] = STATE(20),
    [sym__declaration] = STATE(462),
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
    [sym__layout_close_brace] = ACTIONS(998),
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
  [358] = {
    [sym_import] = STATE(20),
    [sym__declaration] = STATE(104),
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
    [anon_sym_RBRACE] = ACTIONS(1000),
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
  [359] = {
    [sym_export] = STATE(463),
    [sym__identifier] = STATE(222),
    [sym_variable_identifier] = STATE(117),
    [sym_constructor_identifier] = STATE(117),
    [sym__variable_pattern] = ACTIONS(211),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [360] = {
    [anon_sym_where] = ACTIONS(1002),
    [sym_comment] = ACTIONS(5),
  },
  [361] = {
    [anon_sym_COMMA] = ACTIONS(1004),
    [anon_sym_RPAREN] = ACTIONS(1006),
    [sym_comment] = ACTIONS(5),
  },
  [362] = {
    [sym__identifier] = STATE(467),
    [sym_variable_identifier] = STATE(117),
    [sym_constructor_identifier] = STATE(117),
    [anon_sym_DOT_DOT] = ACTIONS(1008),
    [sym__variable_pattern] = ACTIONS(211),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [363] = {
    [ts_builtin_sym_end] = ACTIONS(1010),
    [sym_comment] = ACTIONS(5),
  },
  [364] = {
    [sym_import_specification] = STATE(468),
    [sym__layout_semicolon] = ACTIONS(1012),
    [anon_sym_SEMI] = ACTIONS(1014),
    [anon_sym_LPAREN] = ACTIONS(199),
    [anon_sym_hiding] = ACTIONS(203),
    [sym_comment] = ACTIONS(5),
  },
  [365] = {
    [sym__identifier] = STATE(470),
    [sym_variable_identifier] = STATE(117),
    [sym_constructor_identifier] = STATE(117),
    [anon_sym_DOT_DOT] = ACTIONS(1016),
    [sym__variable_pattern] = ACTIONS(211),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [366] = {
    [sym__identifier] = STATE(471),
    [sym_variable_identifier] = STATE(117),
    [sym_constructor_identifier] = STATE(117),
    [sym__variable_pattern] = ACTIONS(211),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [367] = {
    [sym__layout_semicolon] = ACTIONS(1018),
    [anon_sym_SEMI] = ACTIONS(1020),
    [sym_comment] = ACTIONS(5),
  },
  [368] = {
    [anon_sym_COMMA] = ACTIONS(1022),
    [anon_sym_RPAREN] = ACTIONS(1024),
    [sym_comment] = ACTIONS(5),
  },
  [369] = {
    [sym__layout_semicolon] = ACTIONS(1012),
    [anon_sym_SEMI] = ACTIONS(1014),
    [sym_comment] = ACTIONS(5),
  },
  [370] = {
    [aux_sym_import_specification_repeat1] = STATE(475),
    [anon_sym_LPAREN] = ACTIONS(1026),
    [anon_sym_COMMA] = ACTIONS(721),
    [anon_sym_RPAREN] = ACTIONS(1024),
    [sym_comment] = ACTIONS(5),
  },
  [371] = {
    [anon_sym_COMMA] = ACTIONS(323),
    [anon_sym_RPAREN] = ACTIONS(323),
    [sym__variable_pattern] = ACTIONS(323),
    [sym__constructor_pattern] = ACTIONS(325),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(325),
    [anon_sym_SQUOTE] = ACTIONS(323),
    [anon_sym_DQUOTE] = ACTIONS(323),
    [sym__integer_literal] = ACTIONS(323),
    [sym__octal_literal] = ACTIONS(323),
    [sym__hexidecimal_literal] = ACTIONS(323),
  },
  [372] = {
    [sym__gap] = STATE(179),
    [sym__graphic] = STATE(179),
    [sym__small] = STATE(78),
    [sym__large] = STATE(78),
    [sym__symbol] = STATE(78),
    [sym__special] = STATE(78),
    [sym__escape] = STATE(179),
    [anon_sym_SEMI] = ACTIONS(111),
    [anon_sym_LBRACE] = ACTIONS(111),
    [anon_sym_RBRACE] = ACTIONS(111),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_RPAREN] = ACTIONS(111),
    [anon_sym_EQ] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(111),
    [anon_sym_RBRACK] = ACTIONS(111),
    [anon_sym_DASH] = ACTIONS(113),
    [anon_sym_AT] = ACTIONS(113),
    [anon_sym__] = ACTIONS(115),
    [anon_sym_BQUOTE] = ACTIONS(111),
    [anon_sym_COLON] = ACTIONS(113),
    [anon_sym_PIPE] = ACTIONS(113),
    [anon_sym_BANG] = ACTIONS(113),
    [anon_sym_DOT] = ACTIONS(113),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(345),
    [anon_sym_DQUOTE] = ACTIONS(1028),
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
  [373] = {
    [sym__layout_semicolon] = ACTIONS(1030),
    [anon_sym_SEMI] = ACTIONS(1032),
    [sym_comment] = ACTIONS(5),
  },
  [374] = {
    [sym_type_signature] = STATE(477),
    [sym__identifier] = STATE(234),
    [sym_variable_identifier] = STATE(117),
    [sym_constructor_identifier] = STATE(117),
    [sym__variable_pattern] = ACTIONS(645),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [375] = {
    [anon_sym_COMMA] = ACTIONS(1034),
    [anon_sym_RPAREN] = ACTIONS(1034),
    [sym_comment] = ACTIONS(5),
  },
  [376] = {
    [sym__identifier] = STATE(478),
    [sym_variable_identifier] = STATE(117),
    [sym_constructor_identifier] = STATE(117),
    [sym__variable_pattern] = ACTIONS(211),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [377] = {
    [sym__layout_semicolon] = ACTIONS(1036),
    [anon_sym_SEMI] = ACTIONS(1038),
    [sym_comment] = ACTIONS(5),
  },
  [378] = {
    [anon_sym_COMMA] = ACTIONS(1040),
    [anon_sym_RPAREN] = ACTIONS(1040),
    [sym_comment] = ACTIONS(5),
  },
  [379] = {
    [sym__constructor_pattern] = ACTIONS(1042),
    [sym_comment] = ACTIONS(5),
  },
  [380] = {
    [sym_class] = STATE(479),
    [sym_constructor_identifier] = STATE(127),
    [sym__constructor_pattern] = ACTIONS(75),
    [sym_comment] = ACTIONS(5),
  },
  [381] = {
    [anon_sym_EQ_GT] = ACTIONS(1044),
    [sym_comment] = ACTIONS(5),
  },
  [382] = {
    [sym__layout_semicolon] = ACTIONS(1046),
    [anon_sym_SEMI] = ACTIONS(1048),
    [sym_comment] = ACTIONS(5),
  },
  [383] = {
    [sym_general_declarations] = STATE(481),
    [sym__layout_open_brace] = ACTIONS(475),
    [anon_sym_LBRACE] = ACTIONS(477),
    [sym_comment] = ACTIONS(5),
  },
  [384] = {
    [sym__layout_semicolon] = ACTIONS(1050),
    [anon_sym_SEMI] = ACTIONS(1052),
    [sym_comment] = ACTIONS(5),
  },
  [385] = {
    [sym__layout_semicolon] = ACTIONS(1054),
    [anon_sym_SEMI] = ACTIONS(1056),
    [sym_comment] = ACTIONS(5),
  },
  [386] = {
    [sym__general_declaration] = STATE(484),
    [sym_fixity] = STATE(26),
    [sym_type_signature] = STATE(26),
    [sym__identifier] = STATE(234),
    [sym_variable_identifier] = STATE(117),
    [sym_constructor_identifier] = STATE(117),
    [sym__layout_close_brace] = ACTIONS(1058),
    [anon_sym_infixl] = ACTIONS(25),
    [anon_sym_infixr] = ACTIONS(25),
    [anon_sym_infix] = ACTIONS(25),
    [sym__variable_pattern] = ACTIONS(231),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [387] = {
    [sym__layout_semicolon] = ACTIONS(1060),
    [anon_sym_SEMI] = ACTIONS(1062),
    [sym_comment] = ACTIONS(5),
  },
  [388] = {
    [sym__general_declaration] = STATE(486),
    [sym_fixity] = STATE(26),
    [sym_type_signature] = STATE(26),
    [sym__identifier] = STATE(234),
    [sym_variable_identifier] = STATE(117),
    [sym_constructor_identifier] = STATE(117),
    [anon_sym_RBRACE] = ACTIONS(1064),
    [anon_sym_infixl] = ACTIONS(25),
    [anon_sym_infixr] = ACTIONS(25),
    [anon_sym_infix] = ACTIONS(25),
    [sym__variable_pattern] = ACTIONS(231),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [389] = {
    [anon_sym_COMMA] = ACTIONS(1066),
    [anon_sym_RPAREN] = ACTIONS(1066),
    [anon_sym_EQ_GT] = ACTIONS(1066),
    [sym_comment] = ACTIONS(5),
  },
  [390] = {
    [sym__layout_semicolon] = ACTIONS(1068),
    [anon_sym_SEMI] = ACTIONS(1070),
    [sym_comment] = ACTIONS(5),
  },
  [391] = {
    [sym_general_declarations] = STATE(487),
    [sym__layout_open_brace] = ACTIONS(475),
    [anon_sym_LBRACE] = ACTIONS(477),
    [sym_comment] = ACTIONS(5),
  },
  [392] = {
    [sym__layout_semicolon] = ACTIONS(1072),
    [anon_sym_SEMI] = ACTIONS(1074),
    [anon_sym_COMMA] = ACTIONS(1074),
    [sym_comment] = ACTIONS(5),
  },
  [393] = {
    [sym_deriving] = STATE(488),
    [sym__layout_semicolon] = ACTIONS(1076),
    [anon_sym_SEMI] = ACTIONS(1078),
    [anon_sym_deriving] = ACTIONS(265),
    [sym_comment] = ACTIONS(5),
  },
  [394] = {
    [sym__layout_semicolon] = ACTIONS(1076),
    [anon_sym_SEMI] = ACTIONS(1078),
    [sym_comment] = ACTIONS(5),
  },
  [395] = {
    [aux_sym_export_repeat1] = STATE(490),
    [anon_sym_COMMA] = ACTIONS(441),
    [anon_sym_RPAREN] = ACTIONS(1080),
    [sym_comment] = ACTIONS(5),
  },
  [396] = {
    [sym__layout_semicolon] = ACTIONS(1082),
    [anon_sym_SEMI] = ACTIONS(1084),
    [anon_sym_PIPE] = ACTIONS(1084),
    [anon_sym_deriving] = ACTIONS(1084),
    [sym_comment] = ACTIONS(5),
  },
  [397] = {
    [sym_constructor] = STATE(491),
    [sym_constructor_identifier] = STATE(154),
    [sym__constructor_pattern] = ACTIONS(73),
    [sym_comment] = ACTIONS(5),
  },
  [398] = {
    [aux_sym_fields_repeat1] = STATE(494),
    [anon_sym_RBRACE] = ACTIONS(1086),
    [anon_sym_COMMA] = ACTIONS(1088),
    [sym_comment] = ACTIONS(5),
  },
  [399] = {
    [aux_sym_field_repeat1] = STATE(497),
    [anon_sym_COMMA] = ACTIONS(1090),
    [anon_sym_COLON_COLON] = ACTIONS(1092),
    [sym_comment] = ACTIONS(5),
  },
  [400] = {
    [sym__layout_semicolon] = ACTIONS(1094),
    [anon_sym_SEMI] = ACTIONS(1096),
    [anon_sym_PIPE] = ACTIONS(1096),
    [anon_sym_deriving] = ACTIONS(1096),
    [anon_sym_BANG] = ACTIONS(1096),
    [sym__variable_pattern] = ACTIONS(1098),
    [sym__constructor_pattern] = ACTIONS(1098),
    [sym_comment] = ACTIONS(5),
  },
  [401] = {
    [sym__layout_semicolon] = ACTIONS(1100),
    [anon_sym_SEMI] = ACTIONS(1102),
    [anon_sym_PIPE] = ACTIONS(1102),
    [anon_sym_deriving] = ACTIONS(1102),
    [anon_sym_BANG] = ACTIONS(1102),
    [sym__variable_pattern] = ACTIONS(1104),
    [sym__constructor_pattern] = ACTIONS(1104),
    [sym_comment] = ACTIONS(5),
  },
  [402] = {
    [sym_deriving] = STATE(498),
    [sym__layout_semicolon] = ACTIONS(1106),
    [anon_sym_SEMI] = ACTIONS(1108),
    [anon_sym_deriving] = ACTIONS(265),
    [sym_comment] = ACTIONS(5),
  },
  [403] = {
    [sym__layout_semicolon] = ACTIONS(1106),
    [anon_sym_SEMI] = ACTIONS(1108),
    [sym_comment] = ACTIONS(5),
  },
  [404] = {
    [sym__layout_semicolon] = ACTIONS(1110),
    [anon_sym_SEMI] = ACTIONS(1112),
    [anon_sym_deriving] = ACTIONS(1112),
    [sym_comment] = ACTIONS(5),
  },
  [405] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(1114),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1114),
  },
  [406] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(1116),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(1116),
  },
  [407] = {
    [anon_sym_SEMI] = ACTIONS(1118),
    [anon_sym_LBRACE] = ACTIONS(1118),
    [anon_sym_RBRACE] = ACTIONS(1118),
    [anon_sym_LPAREN] = ACTIONS(1118),
    [anon_sym_RPAREN] = ACTIONS(1118),
    [anon_sym_EQ] = ACTIONS(1118),
    [anon_sym_LBRACK] = ACTIONS(1118),
    [anon_sym_RBRACK] = ACTIONS(1118),
    [anon_sym_DASH] = ACTIONS(1118),
    [anon_sym_AT] = ACTIONS(1118),
    [anon_sym__] = ACTIONS(1118),
    [anon_sym_BQUOTE] = ACTIONS(1118),
    [anon_sym_COLON] = ACTIONS(1118),
    [anon_sym_PIPE] = ACTIONS(1118),
    [anon_sym_BANG] = ACTIONS(1118),
    [anon_sym_DOT] = ACTIONS(1118),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(1118),
    [anon_sym_DQUOTE] = ACTIONS(1118),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(1118),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(1118),
    [sym__ascii_large] = ACTIONS(1118),
    [anon_sym_POUND] = ACTIONS(1118),
    [anon_sym_DOLLAR] = ACTIONS(1118),
    [anon_sym_PERCENT] = ACTIONS(1118),
    [anon_sym_AMP] = ACTIONS(1118),
    [anon_sym_1] = ACTIONS(1118),
    [anon_sym_PLUS] = ACTIONS(1118),
    [anon_sym_SLASH] = ACTIONS(1118),
    [anon_sym_LT] = ACTIONS(1118),
    [anon_sym_GT] = ACTIONS(1118),
    [anon_sym_QMARK] = ACTIONS(1118),
    [anon_sym_CARET] = ACTIONS(1118),
    [anon_sym_TILDE] = ACTIONS(1118),
    [anon_sym_BSLASH] = ACTIONS(1118),
    [sym__space] = ACTIONS(1118),
    [sym__newline] = ACTIONS(1118),
    [sym__tab] = ACTIONS(1118),
    [sym__vertical_tab] = ACTIONS(1118),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1118),
  },
  [408] = {
    [anon_sym_SEMI] = ACTIONS(1120),
    [anon_sym_LBRACE] = ACTIONS(1120),
    [anon_sym_RBRACE] = ACTIONS(1120),
    [anon_sym_LPAREN] = ACTIONS(1120),
    [anon_sym_RPAREN] = ACTIONS(1120),
    [anon_sym_EQ] = ACTIONS(1120),
    [anon_sym_LBRACK] = ACTIONS(1120),
    [anon_sym_RBRACK] = ACTIONS(1120),
    [anon_sym_DASH] = ACTIONS(1120),
    [anon_sym_AT] = ACTIONS(1120),
    [anon_sym__] = ACTIONS(1120),
    [anon_sym_BQUOTE] = ACTIONS(1120),
    [anon_sym_COLON] = ACTIONS(1120),
    [anon_sym_PIPE] = ACTIONS(1120),
    [anon_sym_BANG] = ACTIONS(1120),
    [anon_sym_DOT] = ACTIONS(1120),
    [sym_comment] = ACTIONS(101),
    [anon_sym_SQUOTE] = ACTIONS(1120),
    [anon_sym_DQUOTE] = ACTIONS(1120),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(1120),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(1120),
    [sym__ascii_large] = ACTIONS(1120),
    [anon_sym_POUND] = ACTIONS(1120),
    [anon_sym_DOLLAR] = ACTIONS(1120),
    [anon_sym_PERCENT] = ACTIONS(1120),
    [anon_sym_AMP] = ACTIONS(1120),
    [anon_sym_1] = ACTIONS(1120),
    [anon_sym_PLUS] = ACTIONS(1120),
    [anon_sym_SLASH] = ACTIONS(1120),
    [anon_sym_LT] = ACTIONS(1120),
    [anon_sym_GT] = ACTIONS(1120),
    [anon_sym_QMARK] = ACTIONS(1120),
    [anon_sym_CARET] = ACTIONS(1120),
    [anon_sym_TILDE] = ACTIONS(1120),
    [anon_sym_BSLASH] = ACTIONS(1120),
    [sym__space] = ACTIONS(1120),
    [sym__newline] = ACTIONS(1120),
    [sym__tab] = ACTIONS(1120),
    [sym__vertical_tab] = ACTIONS(1120),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(1120),
  },
  [409] = {
    [sym__layout_semicolon] = ACTIONS(1122),
    [anon_sym_SEMI] = ACTIONS(1124),
    [sym__variable_pattern] = ACTIONS(1124),
    [sym__constructor_pattern] = ACTIONS(1126),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1126),
    [anon_sym_SQUOTE] = ACTIONS(1124),
    [anon_sym_DQUOTE] = ACTIONS(1124),
    [sym__integer_literal] = ACTIONS(1124),
    [sym__octal_literal] = ACTIONS(1124),
    [sym__hexidecimal_literal] = ACTIONS(1124),
  },
  [410] = {
    [anon_sym_RPAREN] = ACTIONS(1128),
    [sym_comment] = ACTIONS(5),
  },
  [411] = {
    [sym__op] = STATE(309),
    [sym_variable_symbol] = STATE(310),
    [sym_constructor_symbol] = STATE(310),
    [sym__variable_symbol] = STATE(311),
    [anon_sym_COMMA] = ACTIONS(1130),
    [anon_sym_RPAREN] = ACTIONS(1130),
    [anon_sym_DASH] = ACTIONS(607),
    [anon_sym_BQUOTE] = ACTIONS(609),
    [anon_sym_COLON] = ACTIONS(611),
    [anon_sym_BANG] = ACTIONS(607),
    [anon_sym_DOT] = ACTIONS(607),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(607),
    [anon_sym_DOLLAR] = ACTIONS(607),
    [anon_sym_PERCENT] = ACTIONS(607),
    [anon_sym_AMP] = ACTIONS(607),
    [anon_sym_1] = ACTIONS(607),
    [anon_sym_PLUS] = ACTIONS(607),
    [anon_sym_SLASH] = ACTIONS(607),
    [anon_sym_LT] = ACTIONS(607),
    [anon_sym_GT] = ACTIONS(607),
    [anon_sym_QMARK] = ACTIONS(607),
    [anon_sym_CARET] = ACTIONS(607),
  },
  [412] = {
    [anon_sym_COMMA] = ACTIONS(1130),
    [anon_sym_RPAREN] = ACTIONS(1130),
    [sym_comment] = ACTIONS(5),
  },
  [413] = {
    [anon_sym_BQUOTE] = ACTIONS(1132),
    [sym_comment] = ACTIONS(5),
  },
  [414] = {
    [anon_sym_LPAREN] = ACTIONS(491),
    [anon_sym_LBRACK] = ACTIONS(491),
    [anon_sym_DASH] = ACTIONS(491),
    [anon_sym__] = ACTIONS(491),
    [anon_sym_COLON] = ACTIONS(491),
    [sym_list_constructor] = ACTIONS(491),
    [anon_sym_BANG] = ACTIONS(491),
    [sym__variable_pattern] = ACTIONS(1134),
    [sym__constructor_pattern] = ACTIONS(1134),
    [anon_sym_DOT] = ACTIONS(491),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1134),
    [anon_sym_SQUOTE] = ACTIONS(491),
    [anon_sym_DQUOTE] = ACTIONS(491),
    [anon_sym_POUND] = ACTIONS(491),
    [anon_sym_DOLLAR] = ACTIONS(491),
    [anon_sym_PERCENT] = ACTIONS(491),
    [anon_sym_AMP] = ACTIONS(491),
    [anon_sym_1] = ACTIONS(491),
    [anon_sym_PLUS] = ACTIONS(491),
    [anon_sym_SLASH] = ACTIONS(491),
    [anon_sym_LT] = ACTIONS(491),
    [anon_sym_GT] = ACTIONS(491),
    [anon_sym_QMARK] = ACTIONS(491),
    [anon_sym_CARET] = ACTIONS(491),
    [sym__integer_literal] = ACTIONS(491),
    [sym__octal_literal] = ACTIONS(491),
    [sym__hexidecimal_literal] = ACTIONS(491),
  },
  [415] = {
    [anon_sym_LPAREN] = ACTIONS(495),
    [anon_sym_LBRACK] = ACTIONS(495),
    [anon_sym_DASH] = ACTIONS(495),
    [anon_sym__] = ACTIONS(495),
    [anon_sym_COLON] = ACTIONS(495),
    [sym_list_constructor] = ACTIONS(495),
    [anon_sym_BANG] = ACTIONS(495),
    [sym__variable_pattern] = ACTIONS(1136),
    [sym__constructor_pattern] = ACTIONS(1136),
    [anon_sym_DOT] = ACTIONS(495),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1136),
    [anon_sym_SQUOTE] = ACTIONS(495),
    [anon_sym_DQUOTE] = ACTIONS(495),
    [anon_sym_POUND] = ACTIONS(495),
    [anon_sym_DOLLAR] = ACTIONS(495),
    [anon_sym_PERCENT] = ACTIONS(495),
    [anon_sym_AMP] = ACTIONS(495),
    [anon_sym_1] = ACTIONS(495),
    [anon_sym_PLUS] = ACTIONS(495),
    [anon_sym_SLASH] = ACTIONS(495),
    [anon_sym_LT] = ACTIONS(495),
    [anon_sym_GT] = ACTIONS(495),
    [anon_sym_QMARK] = ACTIONS(495),
    [anon_sym_CARET] = ACTIONS(495),
    [sym__integer_literal] = ACTIONS(495),
    [sym__octal_literal] = ACTIONS(495),
    [sym__hexidecimal_literal] = ACTIONS(495),
  },
  [416] = {
    [sym__constructor_symbol] = STATE(501),
    [anon_sym_LPAREN] = ACTIONS(499),
    [anon_sym_LBRACK] = ACTIONS(499),
    [anon_sym_DASH] = ACTIONS(499),
    [anon_sym__] = ACTIONS(499),
    [anon_sym_COLON] = ACTIONS(895),
    [sym_list_constructor] = ACTIONS(499),
    [anon_sym_BANG] = ACTIONS(895),
    [sym__variable_pattern] = ACTIONS(1138),
    [sym__constructor_pattern] = ACTIONS(1138),
    [anon_sym_DOT] = ACTIONS(895),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1138),
    [anon_sym_SQUOTE] = ACTIONS(499),
    [anon_sym_DQUOTE] = ACTIONS(499),
    [anon_sym_POUND] = ACTIONS(895),
    [anon_sym_DOLLAR] = ACTIONS(895),
    [anon_sym_PERCENT] = ACTIONS(895),
    [anon_sym_AMP] = ACTIONS(895),
    [anon_sym_1] = ACTIONS(895),
    [anon_sym_PLUS] = ACTIONS(895),
    [anon_sym_SLASH] = ACTIONS(895),
    [anon_sym_LT] = ACTIONS(895),
    [anon_sym_GT] = ACTIONS(895),
    [anon_sym_QMARK] = ACTIONS(895),
    [anon_sym_CARET] = ACTIONS(895),
    [sym__integer_literal] = ACTIONS(499),
    [sym__octal_literal] = ACTIONS(499),
    [sym__hexidecimal_literal] = ACTIONS(499),
  },
  [417] = {
    [sym__op] = STATE(309),
    [sym_variable_symbol] = STATE(310),
    [sym_constructor_symbol] = STATE(310),
    [sym__variable_symbol] = STATE(311),
    [anon_sym_COMMA] = ACTIONS(1140),
    [anon_sym_RPAREN] = ACTIONS(1140),
    [anon_sym_DASH] = ACTIONS(607),
    [anon_sym_BQUOTE] = ACTIONS(609),
    [anon_sym_COLON] = ACTIONS(611),
    [anon_sym_BANG] = ACTIONS(607),
    [anon_sym_DOT] = ACTIONS(607),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(607),
    [anon_sym_DOLLAR] = ACTIONS(607),
    [anon_sym_PERCENT] = ACTIONS(607),
    [anon_sym_AMP] = ACTIONS(607),
    [anon_sym_1] = ACTIONS(607),
    [anon_sym_PLUS] = ACTIONS(607),
    [anon_sym_SLASH] = ACTIONS(607),
    [anon_sym_LT] = ACTIONS(607),
    [anon_sym_GT] = ACTIONS(607),
    [anon_sym_QMARK] = ACTIONS(607),
    [anon_sym_CARET] = ACTIONS(607),
  },
  [418] = {
    [anon_sym_COMMA] = ACTIONS(1140),
    [anon_sym_RPAREN] = ACTIONS(1140),
    [sym_comment] = ACTIONS(5),
  },
  [419] = {
    [anon_sym_LPAREN] = ACTIONS(509),
    [anon_sym_LBRACK] = ACTIONS(509),
    [anon_sym_DASH] = ACTIONS(509),
    [anon_sym__] = ACTIONS(509),
    [sym_list_constructor] = ACTIONS(509),
    [anon_sym_BANG] = ACTIONS(509),
    [sym__variable_pattern] = ACTIONS(1142),
    [sym__constructor_pattern] = ACTIONS(1142),
    [anon_sym_DOT] = ACTIONS(509),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1142),
    [anon_sym_SQUOTE] = ACTIONS(509),
    [anon_sym_DQUOTE] = ACTIONS(509),
    [anon_sym_POUND] = ACTIONS(509),
    [anon_sym_DOLLAR] = ACTIONS(509),
    [anon_sym_PERCENT] = ACTIONS(509),
    [anon_sym_AMP] = ACTIONS(509),
    [anon_sym_1] = ACTIONS(509),
    [anon_sym_PLUS] = ACTIONS(509),
    [anon_sym_SLASH] = ACTIONS(509),
    [anon_sym_LT] = ACTIONS(509),
    [anon_sym_GT] = ACTIONS(509),
    [anon_sym_QMARK] = ACTIONS(509),
    [anon_sym_CARET] = ACTIONS(509),
    [sym__integer_literal] = ACTIONS(509),
    [sym__octal_literal] = ACTIONS(509),
    [sym__hexidecimal_literal] = ACTIONS(509),
  },
  [420] = {
    [sym__variable_symbol] = STATE(502),
    [anon_sym_LPAREN] = ACTIONS(513),
    [anon_sym_LBRACK] = ACTIONS(513),
    [anon_sym_DASH] = ACTIONS(607),
    [anon_sym__] = ACTIONS(513),
    [sym_list_constructor] = ACTIONS(513),
    [anon_sym_BANG] = ACTIONS(607),
    [sym__variable_pattern] = ACTIONS(1144),
    [sym__constructor_pattern] = ACTIONS(1144),
    [anon_sym_DOT] = ACTIONS(607),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1144),
    [anon_sym_SQUOTE] = ACTIONS(513),
    [anon_sym_DQUOTE] = ACTIONS(513),
    [anon_sym_POUND] = ACTIONS(607),
    [anon_sym_DOLLAR] = ACTIONS(607),
    [anon_sym_PERCENT] = ACTIONS(607),
    [anon_sym_AMP] = ACTIONS(607),
    [anon_sym_1] = ACTIONS(607),
    [anon_sym_PLUS] = ACTIONS(607),
    [anon_sym_SLASH] = ACTIONS(607),
    [anon_sym_LT] = ACTIONS(607),
    [anon_sym_GT] = ACTIONS(607),
    [anon_sym_QMARK] = ACTIONS(607),
    [anon_sym_CARET] = ACTIONS(607),
    [sym__integer_literal] = ACTIONS(513),
    [sym__octal_literal] = ACTIONS(513),
    [sym__hexidecimal_literal] = ACTIONS(513),
  },
  [421] = {
    [sym__function_pattern] = STATE(503),
    [sym_list_pattern] = STATE(89),
    [sym_tuple_pattern] = STATE(89),
    [sym_parenthesized_pattern] = STATE(89),
    [sym__pattern] = STATE(504),
    [sym_negative_literal] = STATE(190),
    [sym_general_constructor] = STATE(190),
    [sym_as_pattern] = STATE(89),
    [sym_wildcard] = STATE(89),
    [sym__variable] = STATE(191),
    [sym_qualified_variable_identifier] = STATE(97),
    [sym__literal] = STATE(89),
    [sym__identifier] = STATE(98),
    [sym_simple_type] = STATE(99),
    [sym_variable_identifier] = STATE(100),
    [sym_constructor_identifier] = STATE(192),
    [sym_integer] = STATE(92),
    [sym_char] = STATE(92),
    [sym_string] = STATE(92),
    [anon_sym_LPAREN] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(153),
    [anon_sym_DASH] = ACTIONS(367),
    [anon_sym__] = ACTIONS(155),
    [sym_list_constructor] = ACTIONS(157),
    [sym__variable_pattern] = ACTIONS(159),
    [sym__constructor_pattern] = ACTIONS(369),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(163),
    [anon_sym_SQUOTE] = ACTIONS(165),
    [anon_sym_DQUOTE] = ACTIONS(167),
    [sym__integer_literal] = ACTIONS(71),
    [sym__octal_literal] = ACTIONS(71),
    [sym__hexidecimal_literal] = ACTIONS(71),
  },
  [422] = {
    [anon_sym_LPAREN] = ACTIONS(1146),
    [anon_sym_COMMA] = ACTIONS(1146),
    [anon_sym_RPAREN] = ACTIONS(1146),
    [anon_sym_EQ] = ACTIONS(1146),
    [anon_sym_LBRACK] = ACTIONS(1146),
    [anon_sym_RBRACK] = ACTIONS(1146),
    [anon_sym_DASH] = ACTIONS(1146),
    [anon_sym__] = ACTIONS(1146),
    [anon_sym_BQUOTE] = ACTIONS(1146),
    [anon_sym_COLON] = ACTIONS(1146),
    [sym_list_constructor] = ACTIONS(1146),
    [anon_sym_BANG] = ACTIONS(1146),
    [sym__variable_pattern] = ACTIONS(1148),
    [sym__constructor_pattern] = ACTIONS(1148),
    [anon_sym_DOT] = ACTIONS(1146),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1148),
    [anon_sym_SQUOTE] = ACTIONS(1146),
    [anon_sym_DQUOTE] = ACTIONS(1146),
    [anon_sym_POUND] = ACTIONS(1146),
    [anon_sym_DOLLAR] = ACTIONS(1146),
    [anon_sym_PERCENT] = ACTIONS(1146),
    [anon_sym_AMP] = ACTIONS(1146),
    [anon_sym_1] = ACTIONS(1146),
    [anon_sym_PLUS] = ACTIONS(1146),
    [anon_sym_SLASH] = ACTIONS(1146),
    [anon_sym_LT] = ACTIONS(1146),
    [anon_sym_GT] = ACTIONS(1146),
    [anon_sym_QMARK] = ACTIONS(1146),
    [anon_sym_CARET] = ACTIONS(1146),
    [sym__integer_literal] = ACTIONS(1146),
    [sym__octal_literal] = ACTIONS(1146),
    [sym__hexidecimal_literal] = ACTIONS(1146),
  },
  [423] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(1150),
  },
  [424] = {
    [anon_sym_COMMA] = ACTIONS(1124),
    [anon_sym_RPAREN] = ACTIONS(1124),
    [sym__variable_pattern] = ACTIONS(1124),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1126),
    [anon_sym_SQUOTE] = ACTIONS(1124),
    [anon_sym_DQUOTE] = ACTIONS(1124),
    [sym__integer_literal] = ACTIONS(1124),
    [sym__octal_literal] = ACTIONS(1124),
    [sym__hexidecimal_literal] = ACTIONS(1124),
  },
  [425] = {
    [anon_sym_LPAREN] = ACTIONS(1152),
    [anon_sym_COMMA] = ACTIONS(1152),
    [anon_sym_RPAREN] = ACTIONS(1152),
    [anon_sym_EQ] = ACTIONS(1152),
    [anon_sym_LBRACK] = ACTIONS(1152),
    [anon_sym_RBRACK] = ACTIONS(1152),
    [anon_sym_DASH] = ACTIONS(1152),
    [anon_sym__] = ACTIONS(1152),
    [anon_sym_BQUOTE] = ACTIONS(1152),
    [anon_sym_COLON] = ACTIONS(1152),
    [sym_list_constructor] = ACTIONS(1152),
    [anon_sym_BANG] = ACTIONS(1152),
    [sym__variable_pattern] = ACTIONS(1154),
    [sym__constructor_pattern] = ACTIONS(1154),
    [anon_sym_DOT] = ACTIONS(1152),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1154),
    [anon_sym_SQUOTE] = ACTIONS(1152),
    [anon_sym_DQUOTE] = ACTIONS(1152),
    [anon_sym_POUND] = ACTIONS(1152),
    [anon_sym_DOLLAR] = ACTIONS(1152),
    [anon_sym_PERCENT] = ACTIONS(1152),
    [anon_sym_AMP] = ACTIONS(1152),
    [anon_sym_1] = ACTIONS(1152),
    [anon_sym_PLUS] = ACTIONS(1152),
    [anon_sym_SLASH] = ACTIONS(1152),
    [anon_sym_LT] = ACTIONS(1152),
    [anon_sym_GT] = ACTIONS(1152),
    [anon_sym_QMARK] = ACTIONS(1152),
    [anon_sym_CARET] = ACTIONS(1152),
    [sym__integer_literal] = ACTIONS(1152),
    [sym__octal_literal] = ACTIONS(1152),
    [sym__hexidecimal_literal] = ACTIONS(1152),
  },
  [426] = {
    [sym_label] = STATE(506),
    [sym__identifier] = STATE(328),
    [sym_variable_identifier] = STATE(117),
    [sym_constructor_identifier] = STATE(117),
    [sym__variable_pattern] = ACTIONS(211),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [427] = {
    [anon_sym_RBRACE] = ACTIONS(1156),
    [anon_sym_COMMA] = ACTIONS(1158),
    [sym_comment] = ACTIONS(5),
  },
  [428] = {
    [sym__literal] = STATE(508),
    [sym_integer] = STATE(92),
    [sym_char] = STATE(92),
    [sym_string] = STATE(92),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(163),
    [anon_sym_SQUOTE] = ACTIONS(165),
    [anon_sym_DQUOTE] = ACTIONS(167),
    [sym__integer_literal] = ACTIONS(71),
    [sym__octal_literal] = ACTIONS(71),
    [sym__hexidecimal_literal] = ACTIONS(71),
  },
  [429] = {
    [aux_sym_tupling_constructor_repeat1] = STATE(510),
    [anon_sym_COMMA] = ACTIONS(934),
    [anon_sym_RPAREN] = ACTIONS(1160),
    [sym_comment] = ACTIONS(5),
  },
  [430] = {
    [aux_sym_tuple_repeat1] = STATE(512),
    [anon_sym_COMMA] = ACTIONS(942),
    [anon_sym_RPAREN] = ACTIONS(1162),
    [sym_comment] = ACTIONS(5),
  },
  [431] = {
    [anon_sym_COMMA] = ACTIONS(1164),
    [anon_sym_RPAREN] = ACTIONS(1164),
    [sym_comment] = ACTIONS(5),
  },
  [432] = {
    [sym__layout_semicolon] = ACTIONS(1166),
    [anon_sym_SEMI] = ACTIONS(1168),
    [anon_sym_DASH_GT] = ACTIONS(1168),
    [sym_comment] = ACTIONS(5),
  },
  [433] = {
    [anon_sym_COMMA] = ACTIONS(1170),
    [anon_sym_RPAREN] = ACTIONS(1172),
    [sym_comment] = ACTIONS(5),
  },
  [434] = {
    [sym_type] = STATE(452),
    [sym__generic_type_constructor] = STATE(343),
    [sym_tupling_constructor] = STATE(332),
    [sym_tuple] = STATE(343),
    [sym_list] = STATE(343),
    [sym_parenthesized_constructor] = STATE(343),
    [sym_variable_identifier] = STATE(344),
    [sym__type_constructors] = STATE(332),
    [sym_qualified_type_constructor] = STATE(339),
    [anon_sym_LPAREN] = ACTIONS(637),
    [anon_sym_LBRACK] = ACTIONS(641),
    [anon_sym_RBRACK] = ACTIONS(1174),
    [sym_unit_type] = ACTIONS(643),
    [sym_list_constructor] = ACTIONS(643),
    [sym_function_constructor] = ACTIONS(643),
    [sym__variable_pattern] = ACTIONS(277),
    [sym__constructor_pattern] = ACTIONS(651),
    [sym_module_identifier] = ACTIONS(653),
    [sym_comment] = ACTIONS(5),
  },
  [435] = {
    [sym_variable_identifier] = STATE(284),
    [anon_sym_LPAREN] = ACTIONS(976),
    [anon_sym_COMMA] = ACTIONS(976),
    [anon_sym_RPAREN] = ACTIONS(976),
    [anon_sym_LBRACK] = ACTIONS(976),
    [anon_sym_RBRACK] = ACTIONS(976),
    [anon_sym_DASH_GT] = ACTIONS(976),
    [sym_unit_type] = ACTIONS(976),
    [sym_list_constructor] = ACTIONS(976),
    [sym_function_constructor] = ACTIONS(976),
    [sym__variable_pattern] = ACTIONS(277),
    [sym__constructor_pattern] = ACTIONS(1176),
    [sym_module_identifier] = ACTIONS(1176),
    [sym_comment] = ACTIONS(5),
  },
  [436] = {
    [sym_constructor_identifier] = STATE(516),
    [sym__constructor_pattern] = ACTIONS(75),
    [sym_module_identifier] = ACTIONS(978),
    [sym_comment] = ACTIONS(5),
  },
  [437] = {
    [sym_variable_identifier] = STATE(165),
    [aux_sym_type_class_repeat1] = STATE(517),
    [anon_sym_LPAREN] = ACTIONS(982),
    [anon_sym_COMMA] = ACTIONS(982),
    [anon_sym_RPAREN] = ACTIONS(982),
    [anon_sym_LBRACK] = ACTIONS(982),
    [anon_sym_RBRACK] = ACTIONS(982),
    [anon_sym_DASH_GT] = ACTIONS(982),
    [sym_unit_type] = ACTIONS(982),
    [sym_list_constructor] = ACTIONS(982),
    [sym_function_constructor] = ACTIONS(982),
    [sym__variable_pattern] = ACTIONS(277),
    [sym__constructor_pattern] = ACTIONS(1178),
    [sym_module_identifier] = ACTIONS(1178),
    [sym_comment] = ACTIONS(5),
  },
  [438] = {
    [sym_constructor_identifier] = STATE(516),
    [sym__constructor_pattern] = ACTIONS(75),
    [anon_sym_DOT] = ACTIONS(1180),
    [sym_comment] = ACTIONS(5),
  },
  [439] = {
    [sym_type] = STATE(519),
    [sym__generic_type_constructor] = STATE(336),
    [sym_tupling_constructor] = STATE(332),
    [sym_tuple] = STATE(336),
    [sym_list] = STATE(336),
    [sym_parenthesized_constructor] = STATE(336),
    [sym_variable_identifier] = STATE(338),
    [sym__type_constructors] = STATE(332),
    [sym_qualified_type_constructor] = STATE(339),
    [anon_sym_LPAREN] = ACTIONS(637),
    [anon_sym_LBRACK] = ACTIONS(641),
    [sym_unit_type] = ACTIONS(643),
    [sym_list_constructor] = ACTIONS(643),
    [sym_function_constructor] = ACTIONS(643),
    [sym__variable_pattern] = ACTIONS(645),
    [sym__constructor_pattern] = ACTIONS(651),
    [sym_module_identifier] = ACTIONS(649),
    [sym_comment] = ACTIONS(5),
  },
  [440] = {
    [sym__layout_semicolon] = ACTIONS(1182),
    [anon_sym_SEMI] = ACTIONS(1185),
    [anon_sym_DASH_GT] = ACTIONS(1185),
    [sym_comment] = ACTIONS(5),
  },
  [441] = {
    [anon_sym_COMMA] = ACTIONS(1188),
    [anon_sym_RPAREN] = ACTIONS(1190),
    [sym_comment] = ACTIONS(5),
  },
  [442] = {
    [sym_type] = STATE(522),
    [sym__generic_type_constructor] = STATE(336),
    [sym_tupling_constructor] = STATE(332),
    [sym_tuple] = STATE(336),
    [sym_list] = STATE(336),
    [sym_parenthesized_constructor] = STATE(336),
    [sym_variable_identifier] = STATE(338),
    [sym__type_constructors] = STATE(332),
    [sym_qualified_type_constructor] = STATE(339),
    [anon_sym_LPAREN] = ACTIONS(637),
    [anon_sym_LBRACK] = ACTIONS(641),
    [sym_unit_type] = ACTIONS(643),
    [sym_list_constructor] = ACTIONS(643),
    [sym_function_constructor] = ACTIONS(643),
    [sym__variable_pattern] = ACTIONS(645),
    [sym__constructor_pattern] = ACTIONS(651),
    [sym_module_identifier] = ACTIONS(649),
    [sym_comment] = ACTIONS(5),
  },
  [443] = {
    [anon_sym_EQ_GT] = ACTIONS(1192),
    [sym_comment] = ACTIONS(5),
  },
  [444] = {
    [anon_sym_COMMA] = ACTIONS(761),
    [anon_sym_RPAREN] = ACTIONS(1194),
    [sym_comment] = ACTIONS(5),
  },
  [445] = {
    [sym_type] = STATE(525),
    [sym__generic_type_constructor] = STATE(336),
    [sym_tupling_constructor] = STATE(332),
    [sym_tuple] = STATE(336),
    [sym_list] = STATE(336),
    [sym_parenthesized_constructor] = STATE(336),
    [sym_variable_identifier] = STATE(338),
    [sym__type_constructors] = STATE(332),
    [sym_qualified_type_constructor] = STATE(339),
    [anon_sym_LPAREN] = ACTIONS(637),
    [anon_sym_LBRACK] = ACTIONS(641),
    [sym_unit_type] = ACTIONS(643),
    [sym_list_constructor] = ACTIONS(643),
    [sym_function_constructor] = ACTIONS(643),
    [sym__variable_pattern] = ACTIONS(645),
    [sym__constructor_pattern] = ACTIONS(651),
    [sym_module_identifier] = ACTIONS(649),
    [sym_comment] = ACTIONS(5),
  },
  [446] = {
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(85),
    [anon_sym_RBRACK] = ACTIONS(85),
    [anon_sym_DASH_GT] = ACTIONS(85),
    [sym_unit_type] = ACTIONS(85),
    [sym_list_constructor] = ACTIONS(85),
    [sym_function_constructor] = ACTIONS(85),
    [sym__variable_pattern] = ACTIONS(85),
    [sym__constructor_pattern] = ACTIONS(223),
    [sym_module_identifier] = ACTIONS(223),
    [sym_comment] = ACTIONS(5),
  },
  [447] = {
    [sym_constructor_identifier] = STATE(516),
    [sym__constructor_pattern] = ACTIONS(956),
    [sym_module_identifier] = ACTIONS(978),
    [sym_comment] = ACTIONS(5),
  },
  [448] = {
    [sym_constructor_identifier] = STATE(516),
    [sym__constructor_pattern] = ACTIONS(956),
    [anon_sym_DOT] = ACTIONS(1196),
    [sym_comment] = ACTIONS(5),
  },
  [449] = {
    [sym_type] = STATE(522),
    [sym__generic_type_constructor] = STATE(343),
    [sym_tupling_constructor] = STATE(332),
    [sym_tuple] = STATE(343),
    [sym_list] = STATE(343),
    [sym_parenthesized_constructor] = STATE(343),
    [sym_variable_identifier] = STATE(344),
    [sym__type_constructors] = STATE(332),
    [sym_qualified_type_constructor] = STATE(339),
    [anon_sym_LPAREN] = ACTIONS(637),
    [anon_sym_LBRACK] = ACTIONS(641),
    [sym_unit_type] = ACTIONS(643),
    [sym_list_constructor] = ACTIONS(643),
    [sym_function_constructor] = ACTIONS(643),
    [sym__variable_pattern] = ACTIONS(277),
    [sym__constructor_pattern] = ACTIONS(651),
    [sym_module_identifier] = ACTIONS(653),
    [sym_comment] = ACTIONS(5),
  },
  [450] = {
    [sym_type] = STATE(525),
    [sym__generic_type_constructor] = STATE(343),
    [sym_tupling_constructor] = STATE(332),
    [sym_tuple] = STATE(343),
    [sym_list] = STATE(343),
    [sym_parenthesized_constructor] = STATE(343),
    [sym_variable_identifier] = STATE(344),
    [sym__type_constructors] = STATE(332),
    [sym_qualified_type_constructor] = STATE(339),
    [anon_sym_LPAREN] = ACTIONS(637),
    [anon_sym_LBRACK] = ACTIONS(641),
    [sym_unit_type] = ACTIONS(643),
    [sym_list_constructor] = ACTIONS(643),
    [sym_function_constructor] = ACTIONS(643),
    [sym__variable_pattern] = ACTIONS(277),
    [sym__constructor_pattern] = ACTIONS(651),
    [sym_module_identifier] = ACTIONS(653),
    [sym_comment] = ACTIONS(5),
  },
  [451] = {
    [sym__layout_semicolon] = ACTIONS(1198),
    [anon_sym_SEMI] = ACTIONS(1200),
    [anon_sym_DASH_GT] = ACTIONS(1200),
    [sym_comment] = ACTIONS(5),
  },
  [452] = {
    [anon_sym_LPAREN] = ACTIONS(1202),
    [anon_sym_LBRACK] = ACTIONS(1202),
    [anon_sym_RBRACK] = ACTIONS(1202),
    [sym_unit_type] = ACTIONS(1202),
    [sym_list_constructor] = ACTIONS(1202),
    [sym_function_constructor] = ACTIONS(1202),
    [sym__variable_pattern] = ACTIONS(1202),
    [sym__constructor_pattern] = ACTIONS(1204),
    [sym_module_identifier] = ACTIONS(1204),
    [sym_comment] = ACTIONS(5),
  },
  [453] = {
    [sym__layout_semicolon] = ACTIONS(833),
    [anon_sym_SEMI] = ACTIONS(777),
    [anon_sym_DASH_GT] = ACTIONS(777),
    [sym__variable_pattern] = ACTIONS(777),
    [sym_comment] = ACTIONS(5),
  },
  [454] = {
    [sym__constructor_pattern] = ACTIONS(1206),
    [anon_sym_DOT] = ACTIONS(1208),
    [sym_comment] = ACTIONS(5),
  },
  [455] = {
    [sym_variable_identifier] = STATE(346),
    [aux_sym_type_class_repeat1] = STATE(527),
    [sym__layout_semicolon] = ACTIONS(1210),
    [anon_sym_SEMI] = ACTIONS(1212),
    [anon_sym_DASH_GT] = ACTIONS(1212),
    [sym__variable_pattern] = ACTIONS(359),
    [sym_comment] = ACTIONS(5),
  },
  [456] = {
    [sym_variable_identifier] = STATE(453),
    [sym__layout_semicolon] = ACTIONS(1210),
    [anon_sym_SEMI] = ACTIONS(1212),
    [anon_sym_DASH_GT] = ACTIONS(1212),
    [sym__variable_pattern] = ACTIONS(359),
    [sym_comment] = ACTIONS(5),
  },
  [457] = {
    [sym_constructor_identifier] = STATE(529),
    [sym__constructor_pattern] = ACTIONS(361),
    [sym_module_identifier] = ACTIONS(1214),
    [sym_comment] = ACTIONS(5),
  },
  [458] = {
    [sym__layout_semicolon] = ACTIONS(1216),
    [anon_sym_SEMI] = ACTIONS(1218),
    [sym_comment] = ACTIONS(5),
  },
  [459] = {
    [sym__layout_semicolon] = ACTIONS(1220),
    [anon_sym_SEMI] = ACTIONS(1222),
    [sym_comment] = ACTIONS(5),
  },
  [460] = {
    [sym__layout_close_brace] = ACTIONS(349),
    [anon_sym_import] = ACTIONS(351),
    [anon_sym_foreign] = ACTIONS(351),
    [anon_sym_default] = ACTIONS(351),
    [anon_sym_do] = ACTIONS(351),
    [anon_sym_class] = ACTIONS(351),
    [anon_sym_instance] = ACTIONS(351),
    [anon_sym_infixl] = ACTIONS(351),
    [anon_sym_infixr] = ACTIONS(351),
    [anon_sym_infix] = ACTIONS(351),
    [anon_sym_data] = ACTIONS(351),
    [anon_sym_newtype] = ACTIONS(351),
    [anon_sym_type] = ACTIONS(351),
    [sym__variable_pattern] = ACTIONS(353),
    [sym__constructor_pattern] = ACTIONS(353),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(353),
    [anon_sym_SQUOTE] = ACTIONS(351),
    [anon_sym_DQUOTE] = ACTIONS(351),
    [sym__integer_literal] = ACTIONS(351),
    [sym__octal_literal] = ACTIONS(351),
    [sym__hexidecimal_literal] = ACTIONS(351),
  },
  [461] = {
    [ts_builtin_sym_end] = ACTIONS(1224),
    [sym_comment] = ACTIONS(5),
  },
  [462] = {
    [sym__layout_semicolon] = ACTIONS(1226),
    [anon_sym_SEMI] = ACTIONS(1228),
    [sym_comment] = ACTIONS(5),
  },
  [463] = {
    [anon_sym_COMMA] = ACTIONS(1230),
    [anon_sym_RPAREN] = ACTIONS(1230),
    [sym_comment] = ACTIONS(5),
  },
  [464] = {
    [sym_export] = STATE(531),
    [sym__identifier] = STATE(222),
    [sym_variable_identifier] = STATE(117),
    [sym_constructor_identifier] = STATE(117),
    [sym__variable_pattern] = ACTIONS(211),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [465] = {
    [anon_sym_where] = ACTIONS(1232),
    [sym_comment] = ACTIONS(5),
  },
  [466] = {
    [anon_sym_RPAREN] = ACTIONS(1234),
    [sym_comment] = ACTIONS(5),
  },
  [467] = {
    [aux_sym_export_repeat1] = STATE(533),
    [anon_sym_COMMA] = ACTIONS(441),
    [anon_sym_RPAREN] = ACTIONS(1234),
    [sym_comment] = ACTIONS(5),
  },
  [468] = {
    [sym__layout_semicolon] = ACTIONS(1236),
    [anon_sym_SEMI] = ACTIONS(1238),
    [sym_comment] = ACTIONS(5),
  },
  [469] = {
    [anon_sym_RPAREN] = ACTIONS(1240),
    [sym_comment] = ACTIONS(5),
  },
  [470] = {
    [aux_sym_export_repeat1] = STATE(535),
    [anon_sym_COMMA] = ACTIONS(441),
    [anon_sym_RPAREN] = ACTIONS(1240),
    [sym_comment] = ACTIONS(5),
  },
  [471] = {
    [anon_sym_LPAREN] = ACTIONS(1242),
    [anon_sym_COMMA] = ACTIONS(1244),
    [anon_sym_RPAREN] = ACTIONS(1244),
    [sym_comment] = ACTIONS(5),
  },
  [472] = {
    [sym__identifier] = STATE(537),
    [sym_variable_identifier] = STATE(117),
    [sym_constructor_identifier] = STATE(117),
    [sym__variable_pattern] = ACTIONS(211),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [473] = {
    [sym__layout_semicolon] = ACTIONS(1246),
    [anon_sym_SEMI] = ACTIONS(1248),
    [sym_comment] = ACTIONS(5),
  },
  [474] = {
    [sym__identifier] = STATE(539),
    [sym_variable_identifier] = STATE(117),
    [sym_constructor_identifier] = STATE(117),
    [anon_sym_DOT_DOT] = ACTIONS(1250),
    [sym__variable_pattern] = ACTIONS(211),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [475] = {
    [anon_sym_COMMA] = ACTIONS(1022),
    [anon_sym_RPAREN] = ACTIONS(1252),
    [sym_comment] = ACTIONS(5),
  },
  [476] = {
    [anon_sym_COMMA] = ACTIONS(587),
    [anon_sym_RPAREN] = ACTIONS(587),
    [sym__variable_pattern] = ACTIONS(587),
    [sym__constructor_pattern] = ACTIONS(589),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(589),
    [anon_sym_SQUOTE] = ACTIONS(587),
    [anon_sym_DQUOTE] = ACTIONS(587),
    [sym__integer_literal] = ACTIONS(587),
    [sym__octal_literal] = ACTIONS(587),
    [sym__hexidecimal_literal] = ACTIONS(587),
  },
  [477] = {
    [sym__layout_semicolon] = ACTIONS(1254),
    [anon_sym_SEMI] = ACTIONS(1256),
    [sym_comment] = ACTIONS(5),
  },
  [478] = {
    [anon_sym_COMMA] = ACTIONS(1258),
    [anon_sym_RPAREN] = ACTIONS(1258),
    [sym_comment] = ACTIONS(5),
  },
  [479] = {
    [anon_sym_COMMA] = ACTIONS(1260),
    [anon_sym_RPAREN] = ACTIONS(1260),
    [sym_comment] = ACTIONS(5),
  },
  [480] = {
    [sym__constructor_pattern] = ACTIONS(1262),
    [sym_comment] = ACTIONS(5),
  },
  [481] = {
    [sym__layout_semicolon] = ACTIONS(1264),
    [anon_sym_SEMI] = ACTIONS(1266),
    [sym_comment] = ACTIONS(5),
  },
  [482] = {
    [sym__layout_close_brace] = ACTIONS(1268),
    [anon_sym_infixl] = ACTIONS(1270),
    [anon_sym_infixr] = ACTIONS(1270),
    [anon_sym_infix] = ACTIONS(1270),
    [sym__variable_pattern] = ACTIONS(1272),
    [sym__constructor_pattern] = ACTIONS(1272),
    [sym_comment] = ACTIONS(5),
  },
  [483] = {
    [sym__layout_semicolon] = ACTIONS(1274),
    [anon_sym_SEMI] = ACTIONS(1276),
    [sym_comment] = ACTIONS(5),
  },
  [484] = {
    [sym__layout_semicolon] = ACTIONS(1278),
    [anon_sym_SEMI] = ACTIONS(1280),
    [sym_comment] = ACTIONS(5),
  },
  [485] = {
    [anon_sym_RBRACE] = ACTIONS(1270),
    [anon_sym_infixl] = ACTIONS(1270),
    [anon_sym_infixr] = ACTIONS(1270),
    [anon_sym_infix] = ACTIONS(1270),
    [sym__variable_pattern] = ACTIONS(1272),
    [sym__constructor_pattern] = ACTIONS(1272),
    [sym_comment] = ACTIONS(5),
  },
  [486] = {
    [sym__layout_semicolon] = ACTIONS(1282),
    [anon_sym_SEMI] = ACTIONS(1284),
    [sym_comment] = ACTIONS(5),
  },
  [487] = {
    [sym__layout_semicolon] = ACTIONS(1286),
    [anon_sym_SEMI] = ACTIONS(1288),
    [sym_comment] = ACTIONS(5),
  },
  [488] = {
    [sym__layout_semicolon] = ACTIONS(1290),
    [anon_sym_SEMI] = ACTIONS(1292),
    [sym_comment] = ACTIONS(5),
  },
  [489] = {
    [sym__layout_semicolon] = ACTIONS(1294),
    [anon_sym_SEMI] = ACTIONS(1296),
    [sym_comment] = ACTIONS(5),
  },
  [490] = {
    [anon_sym_COMMA] = ACTIONS(739),
    [anon_sym_RPAREN] = ACTIONS(1298),
    [sym_comment] = ACTIONS(5),
  },
  [491] = {
    [sym__layout_semicolon] = ACTIONS(1300),
    [anon_sym_SEMI] = ACTIONS(1302),
    [anon_sym_PIPE] = ACTIONS(1302),
    [anon_sym_deriving] = ACTIONS(1302),
    [sym_comment] = ACTIONS(5),
  },
  [492] = {
    [sym__layout_semicolon] = ACTIONS(1304),
    [anon_sym_SEMI] = ACTIONS(1306),
    [anon_sym_PIPE] = ACTIONS(1306),
    [anon_sym_deriving] = ACTIONS(1306),
    [sym_comment] = ACTIONS(5),
  },
  [493] = {
    [sym_field] = STATE(544),
    [sym_variable_identifier] = STATE(399),
    [sym__variable_pattern] = ACTIONS(645),
    [sym_comment] = ACTIONS(5),
  },
  [494] = {
    [anon_sym_RBRACE] = ACTIONS(1308),
    [anon_sym_COMMA] = ACTIONS(1310),
    [sym_comment] = ACTIONS(5),
  },
  [495] = {
    [sym_variable_identifier] = STATE(547),
    [sym__variable_pattern] = ACTIONS(645),
    [sym_comment] = ACTIONS(5),
  },
  [496] = {
    [sym_strict] = STATE(549),
    [sym__identifier] = STATE(549),
    [sym_variable_identifier] = STATE(117),
    [sym_constructor_identifier] = STATE(117),
    [anon_sym_BANG] = ACTIONS(1312),
    [sym__variable_pattern] = ACTIONS(211),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [497] = {
    [anon_sym_COMMA] = ACTIONS(1314),
    [anon_sym_COLON_COLON] = ACTIONS(1316),
    [sym_comment] = ACTIONS(5),
  },
  [498] = {
    [sym__layout_semicolon] = ACTIONS(1318),
    [anon_sym_SEMI] = ACTIONS(1320),
    [sym_comment] = ACTIONS(5),
  },
  [499] = {
    [anon_sym_COMMA] = ACTIONS(1322),
    [anon_sym_RPAREN] = ACTIONS(1322),
    [sym_comment] = ACTIONS(5),
  },
  [500] = {
    [anon_sym_LPAREN] = ACTIONS(789),
    [anon_sym_LBRACK] = ACTIONS(789),
    [anon_sym_DASH] = ACTIONS(789),
    [anon_sym__] = ACTIONS(789),
    [sym_list_constructor] = ACTIONS(789),
    [sym__variable_pattern] = ACTIONS(1324),
    [sym__constructor_pattern] = ACTIONS(1324),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1324),
    [anon_sym_SQUOTE] = ACTIONS(789),
    [anon_sym_DQUOTE] = ACTIONS(789),
    [sym__integer_literal] = ACTIONS(789),
    [sym__octal_literal] = ACTIONS(789),
    [sym__hexidecimal_literal] = ACTIONS(789),
  },
  [501] = {
    [anon_sym_LPAREN] = ACTIONS(793),
    [anon_sym_LBRACK] = ACTIONS(793),
    [anon_sym_DASH] = ACTIONS(793),
    [anon_sym__] = ACTIONS(793),
    [anon_sym_COLON] = ACTIONS(793),
    [sym_list_constructor] = ACTIONS(793),
    [anon_sym_BANG] = ACTIONS(793),
    [sym__variable_pattern] = ACTIONS(1326),
    [sym__constructor_pattern] = ACTIONS(1326),
    [anon_sym_DOT] = ACTIONS(793),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1326),
    [anon_sym_SQUOTE] = ACTIONS(793),
    [anon_sym_DQUOTE] = ACTIONS(793),
    [anon_sym_POUND] = ACTIONS(793),
    [anon_sym_DOLLAR] = ACTIONS(793),
    [anon_sym_PERCENT] = ACTIONS(793),
    [anon_sym_AMP] = ACTIONS(793),
    [anon_sym_1] = ACTIONS(793),
    [anon_sym_PLUS] = ACTIONS(793),
    [anon_sym_SLASH] = ACTIONS(793),
    [anon_sym_LT] = ACTIONS(793),
    [anon_sym_GT] = ACTIONS(793),
    [anon_sym_QMARK] = ACTIONS(793),
    [anon_sym_CARET] = ACTIONS(793),
    [sym__integer_literal] = ACTIONS(793),
    [sym__octal_literal] = ACTIONS(793),
    [sym__hexidecimal_literal] = ACTIONS(793),
  },
  [502] = {
    [anon_sym_LPAREN] = ACTIONS(805),
    [anon_sym_LBRACK] = ACTIONS(805),
    [anon_sym_DASH] = ACTIONS(805),
    [anon_sym__] = ACTIONS(805),
    [sym_list_constructor] = ACTIONS(805),
    [anon_sym_BANG] = ACTIONS(805),
    [sym__variable_pattern] = ACTIONS(1328),
    [sym__constructor_pattern] = ACTIONS(1328),
    [anon_sym_DOT] = ACTIONS(805),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1328),
    [anon_sym_SQUOTE] = ACTIONS(805),
    [anon_sym_DQUOTE] = ACTIONS(805),
    [anon_sym_POUND] = ACTIONS(805),
    [anon_sym_DOLLAR] = ACTIONS(805),
    [anon_sym_PERCENT] = ACTIONS(805),
    [anon_sym_AMP] = ACTIONS(805),
    [anon_sym_1] = ACTIONS(805),
    [anon_sym_PLUS] = ACTIONS(805),
    [anon_sym_SLASH] = ACTIONS(805),
    [anon_sym_LT] = ACTIONS(805),
    [anon_sym_GT] = ACTIONS(805),
    [anon_sym_QMARK] = ACTIONS(805),
    [anon_sym_CARET] = ACTIONS(805),
    [sym__integer_literal] = ACTIONS(805),
    [sym__octal_literal] = ACTIONS(805),
    [sym__hexidecimal_literal] = ACTIONS(805),
  },
  [503] = {
    [sym__op] = STATE(309),
    [sym_variable_symbol] = STATE(310),
    [sym_constructor_symbol] = STATE(310),
    [sym__variable_symbol] = STATE(311),
    [anon_sym_COMMA] = ACTIONS(1330),
    [anon_sym_RPAREN] = ACTIONS(1330),
    [anon_sym_DASH] = ACTIONS(607),
    [anon_sym_BQUOTE] = ACTIONS(609),
    [anon_sym_COLON] = ACTIONS(611),
    [anon_sym_BANG] = ACTIONS(607),
    [anon_sym_DOT] = ACTIONS(607),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(607),
    [anon_sym_DOLLAR] = ACTIONS(607),
    [anon_sym_PERCENT] = ACTIONS(607),
    [anon_sym_AMP] = ACTIONS(607),
    [anon_sym_1] = ACTIONS(607),
    [anon_sym_PLUS] = ACTIONS(607),
    [anon_sym_SLASH] = ACTIONS(607),
    [anon_sym_LT] = ACTIONS(607),
    [anon_sym_GT] = ACTIONS(607),
    [anon_sym_QMARK] = ACTIONS(607),
    [anon_sym_CARET] = ACTIONS(607),
  },
  [504] = {
    [anon_sym_COMMA] = ACTIONS(1330),
    [anon_sym_RPAREN] = ACTIONS(1330),
    [sym_comment] = ACTIONS(5),
  },
  [505] = {
    [anon_sym_COMMA] = ACTIONS(555),
    [anon_sym_RPAREN] = ACTIONS(555),
    [sym__variable_pattern] = ACTIONS(555),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(557),
    [anon_sym_SQUOTE] = ACTIONS(555),
    [anon_sym_DQUOTE] = ACTIONS(555),
    [sym__integer_literal] = ACTIONS(555),
    [sym__octal_literal] = ACTIONS(555),
    [sym__hexidecimal_literal] = ACTIONS(555),
  },
  [506] = {
    [anon_sym_RBRACE] = ACTIONS(1332),
    [anon_sym_COMMA] = ACTIONS(1332),
    [sym_comment] = ACTIONS(5),
  },
  [507] = {
    [sym_label] = STATE(552),
    [sym__identifier] = STATE(328),
    [sym_variable_identifier] = STATE(117),
    [sym_constructor_identifier] = STATE(117),
    [sym__variable_pattern] = ACTIONS(211),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [508] = {
    [anon_sym_RBRACE] = ACTIONS(1334),
    [anon_sym_COMMA] = ACTIONS(1334),
    [sym_comment] = ACTIONS(5),
  },
  [509] = {
    [anon_sym_LPAREN] = ACTIONS(1168),
    [anon_sym_COMMA] = ACTIONS(1168),
    [anon_sym_RPAREN] = ACTIONS(1168),
    [anon_sym_LBRACK] = ACTIONS(1168),
    [anon_sym_RBRACK] = ACTIONS(1168),
    [anon_sym_DASH_GT] = ACTIONS(1168),
    [sym_unit_type] = ACTIONS(1168),
    [sym_list_constructor] = ACTIONS(1168),
    [sym_function_constructor] = ACTIONS(1168),
    [sym__variable_pattern] = ACTIONS(1168),
    [sym__constructor_pattern] = ACTIONS(1336),
    [sym_module_identifier] = ACTIONS(1336),
    [sym_comment] = ACTIONS(5),
  },
  [510] = {
    [anon_sym_COMMA] = ACTIONS(1170),
    [anon_sym_RPAREN] = ACTIONS(1338),
    [sym_comment] = ACTIONS(5),
  },
  [511] = {
    [anon_sym_LPAREN] = ACTIONS(1185),
    [anon_sym_COMMA] = ACTIONS(1185),
    [anon_sym_RPAREN] = ACTIONS(1185),
    [anon_sym_LBRACK] = ACTIONS(1185),
    [anon_sym_RBRACK] = ACTIONS(1185),
    [anon_sym_DASH_GT] = ACTIONS(1185),
    [sym_unit_type] = ACTIONS(1185),
    [sym_list_constructor] = ACTIONS(1185),
    [sym_function_constructor] = ACTIONS(1185),
    [sym__variable_pattern] = ACTIONS(1185),
    [sym__constructor_pattern] = ACTIONS(1340),
    [sym_module_identifier] = ACTIONS(1340),
    [sym_comment] = ACTIONS(5),
  },
  [512] = {
    [anon_sym_COMMA] = ACTIONS(1188),
    [anon_sym_RPAREN] = ACTIONS(1343),
    [sym_comment] = ACTIONS(5),
  },
  [513] = {
    [anon_sym_COMMA] = ACTIONS(1345),
    [anon_sym_RPAREN] = ACTIONS(1345),
    [sym_comment] = ACTIONS(5),
  },
  [514] = {
    [sym__layout_semicolon] = ACTIONS(1347),
    [anon_sym_SEMI] = ACTIONS(1349),
    [anon_sym_DASH_GT] = ACTIONS(1349),
    [sym_comment] = ACTIONS(5),
  },
  [515] = {
    [anon_sym_LPAREN] = ACTIONS(1200),
    [anon_sym_COMMA] = ACTIONS(1200),
    [anon_sym_RPAREN] = ACTIONS(1200),
    [anon_sym_LBRACK] = ACTIONS(1200),
    [anon_sym_RBRACK] = ACTIONS(1200),
    [anon_sym_DASH_GT] = ACTIONS(1200),
    [sym_unit_type] = ACTIONS(1200),
    [sym_list_constructor] = ACTIONS(1200),
    [sym_function_constructor] = ACTIONS(1200),
    [sym__variable_pattern] = ACTIONS(1200),
    [sym__constructor_pattern] = ACTIONS(1351),
    [sym_module_identifier] = ACTIONS(1351),
    [sym_comment] = ACTIONS(5),
  },
  [516] = {
    [sym_variable_identifier] = STATE(165),
    [aux_sym_type_class_repeat1] = STATE(555),
    [anon_sym_LPAREN] = ACTIONS(1212),
    [anon_sym_COMMA] = ACTIONS(1212),
    [anon_sym_RPAREN] = ACTIONS(1212),
    [anon_sym_LBRACK] = ACTIONS(1212),
    [anon_sym_RBRACK] = ACTIONS(1212),
    [anon_sym_DASH_GT] = ACTIONS(1212),
    [sym_unit_type] = ACTIONS(1212),
    [sym_list_constructor] = ACTIONS(1212),
    [sym_function_constructor] = ACTIONS(1212),
    [sym__variable_pattern] = ACTIONS(277),
    [sym__constructor_pattern] = ACTIONS(1353),
    [sym_module_identifier] = ACTIONS(1353),
    [sym_comment] = ACTIONS(5),
  },
  [517] = {
    [sym_variable_identifier] = STATE(284),
    [anon_sym_LPAREN] = ACTIONS(1212),
    [anon_sym_COMMA] = ACTIONS(1212),
    [anon_sym_RPAREN] = ACTIONS(1212),
    [anon_sym_LBRACK] = ACTIONS(1212),
    [anon_sym_RBRACK] = ACTIONS(1212),
    [anon_sym_DASH_GT] = ACTIONS(1212),
    [sym_unit_type] = ACTIONS(1212),
    [sym_list_constructor] = ACTIONS(1212),
    [sym_function_constructor] = ACTIONS(1212),
    [sym__variable_pattern] = ACTIONS(277),
    [sym__constructor_pattern] = ACTIONS(1353),
    [sym_module_identifier] = ACTIONS(1353),
    [sym_comment] = ACTIONS(5),
  },
  [518] = {
    [sym_constructor_identifier] = STATE(556),
    [sym__constructor_pattern] = ACTIONS(75),
    [sym_module_identifier] = ACTIONS(1214),
    [sym_comment] = ACTIONS(5),
  },
  [519] = {
    [anon_sym_COMMA] = ACTIONS(1355),
    [anon_sym_RPAREN] = ACTIONS(1355),
    [sym_comment] = ACTIONS(5),
  },
  [520] = {
    [sym_type] = STATE(557),
    [sym__generic_type_constructor] = STATE(336),
    [sym_tupling_constructor] = STATE(332),
    [sym_tuple] = STATE(336),
    [sym_list] = STATE(336),
    [sym_parenthesized_constructor] = STATE(336),
    [sym_variable_identifier] = STATE(338),
    [sym__type_constructors] = STATE(332),
    [sym_qualified_type_constructor] = STATE(339),
    [anon_sym_LPAREN] = ACTIONS(637),
    [anon_sym_LBRACK] = ACTIONS(641),
    [sym_unit_type] = ACTIONS(643),
    [sym_list_constructor] = ACTIONS(643),
    [sym_function_constructor] = ACTIONS(643),
    [sym__variable_pattern] = ACTIONS(645),
    [sym__constructor_pattern] = ACTIONS(651),
    [sym_module_identifier] = ACTIONS(649),
    [sym_comment] = ACTIONS(5),
  },
  [521] = {
    [sym__layout_semicolon] = ACTIONS(1357),
    [anon_sym_SEMI] = ACTIONS(1359),
    [anon_sym_DASH_GT] = ACTIONS(1359),
    [sym_comment] = ACTIONS(5),
  },
  [522] = {
    [anon_sym_LPAREN] = ACTIONS(1218),
    [anon_sym_COMMA] = ACTIONS(1218),
    [anon_sym_RPAREN] = ACTIONS(1218),
    [anon_sym_LBRACK] = ACTIONS(1218),
    [anon_sym_RBRACK] = ACTIONS(1218),
    [sym_unit_type] = ACTIONS(1218),
    [sym_list_constructor] = ACTIONS(1218),
    [sym_function_constructor] = ACTIONS(1218),
    [sym__variable_pattern] = ACTIONS(1218),
    [sym__constructor_pattern] = ACTIONS(1361),
    [sym_module_identifier] = ACTIONS(1361),
    [sym_comment] = ACTIONS(5),
  },
  [523] = {
    [anon_sym_LPAREN] = ACTIONS(1363),
    [anon_sym_LBRACK] = ACTIONS(1363),
    [sym_unit_type] = ACTIONS(1363),
    [sym_list_constructor] = ACTIONS(1363),
    [sym_function_constructor] = ACTIONS(1363),
    [sym__variable_pattern] = ACTIONS(1363),
    [sym__constructor_pattern] = ACTIONS(1042),
    [sym_module_identifier] = ACTIONS(1042),
    [sym_comment] = ACTIONS(5),
  },
  [524] = {
    [anon_sym_EQ_GT] = ACTIONS(1365),
    [sym_comment] = ACTIONS(5),
  },
  [525] = {
    [anon_sym_LPAREN] = ACTIONS(1222),
    [anon_sym_COMMA] = ACTIONS(1222),
    [anon_sym_RPAREN] = ACTIONS(1222),
    [anon_sym_LBRACK] = ACTIONS(1222),
    [anon_sym_RBRACK] = ACTIONS(1222),
    [sym_unit_type] = ACTIONS(1222),
    [sym_list_constructor] = ACTIONS(1222),
    [sym_function_constructor] = ACTIONS(1222),
    [sym__variable_pattern] = ACTIONS(1222),
    [sym__constructor_pattern] = ACTIONS(1367),
    [sym_module_identifier] = ACTIONS(1367),
    [sym_comment] = ACTIONS(5),
  },
  [526] = {
    [sym_constructor_identifier] = STATE(556),
    [sym__constructor_pattern] = ACTIONS(956),
    [sym_module_identifier] = ACTIONS(1214),
    [sym_comment] = ACTIONS(5),
  },
  [527] = {
    [sym_variable_identifier] = STATE(453),
    [sym__layout_semicolon] = ACTIONS(1369),
    [anon_sym_SEMI] = ACTIONS(1371),
    [anon_sym_DASH_GT] = ACTIONS(1371),
    [sym__variable_pattern] = ACTIONS(359),
    [sym_comment] = ACTIONS(5),
  },
  [528] = {
    [sym__constructor_pattern] = ACTIONS(1373),
    [anon_sym_DOT] = ACTIONS(1375),
    [sym_comment] = ACTIONS(5),
  },
  [529] = {
    [sym_variable_identifier] = STATE(346),
    [aux_sym_type_class_repeat1] = STATE(559),
    [sym__layout_semicolon] = ACTIONS(1369),
    [anon_sym_SEMI] = ACTIONS(1371),
    [anon_sym_DASH_GT] = ACTIONS(1371),
    [sym__variable_pattern] = ACTIONS(359),
    [sym_comment] = ACTIONS(5),
  },
  [530] = {
    [sym__layout_close_brace] = ACTIONS(687),
    [anon_sym_import] = ACTIONS(689),
    [anon_sym_foreign] = ACTIONS(689),
    [anon_sym_default] = ACTIONS(689),
    [anon_sym_do] = ACTIONS(689),
    [anon_sym_class] = ACTIONS(689),
    [anon_sym_instance] = ACTIONS(689),
    [anon_sym_infixl] = ACTIONS(689),
    [anon_sym_infixr] = ACTIONS(689),
    [anon_sym_infix] = ACTIONS(689),
    [anon_sym_data] = ACTIONS(689),
    [anon_sym_newtype] = ACTIONS(689),
    [anon_sym_type] = ACTIONS(689),
    [sym__variable_pattern] = ACTIONS(691),
    [sym__constructor_pattern] = ACTIONS(691),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(691),
    [anon_sym_SQUOTE] = ACTIONS(689),
    [anon_sym_DQUOTE] = ACTIONS(689),
    [sym__integer_literal] = ACTIONS(689),
    [sym__octal_literal] = ACTIONS(689),
    [sym__hexidecimal_literal] = ACTIONS(689),
  },
  [531] = {
    [anon_sym_COMMA] = ACTIONS(1377),
    [anon_sym_RPAREN] = ACTIONS(1377),
    [sym_comment] = ACTIONS(5),
  },
  [532] = {
    [anon_sym_COMMA] = ACTIONS(1379),
    [anon_sym_RPAREN] = ACTIONS(1379),
    [sym_comment] = ACTIONS(5),
  },
  [533] = {
    [anon_sym_COMMA] = ACTIONS(739),
    [anon_sym_RPAREN] = ACTIONS(1381),
    [sym_comment] = ACTIONS(5),
  },
  [534] = {
    [aux_sym_import_specification_repeat1] = STATE(562),
    [anon_sym_COMMA] = ACTIONS(721),
    [anon_sym_RPAREN] = ACTIONS(1383),
    [sym_comment] = ACTIONS(5),
  },
  [535] = {
    [anon_sym_COMMA] = ACTIONS(739),
    [anon_sym_RPAREN] = ACTIONS(1385),
    [sym_comment] = ACTIONS(5),
  },
  [536] = {
    [sym__identifier] = STATE(565),
    [sym_variable_identifier] = STATE(117),
    [sym_constructor_identifier] = STATE(117),
    [anon_sym_DOT_DOT] = ACTIONS(1387),
    [sym__variable_pattern] = ACTIONS(211),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [537] = {
    [anon_sym_LPAREN] = ACTIONS(1389),
    [anon_sym_COMMA] = ACTIONS(1391),
    [anon_sym_RPAREN] = ACTIONS(1391),
    [sym_comment] = ACTIONS(5),
  },
  [538] = {
    [anon_sym_RPAREN] = ACTIONS(1385),
    [sym_comment] = ACTIONS(5),
  },
  [539] = {
    [aux_sym_export_repeat1] = STATE(567),
    [anon_sym_COMMA] = ACTIONS(441),
    [anon_sym_RPAREN] = ACTIONS(1385),
    [sym_comment] = ACTIONS(5),
  },
  [540] = {
    [sym__layout_semicolon] = ACTIONS(1393),
    [anon_sym_SEMI] = ACTIONS(1395),
    [sym_comment] = ACTIONS(5),
  },
  [541] = {
    [sym__layout_close_brace] = ACTIONS(1397),
    [anon_sym_infixl] = ACTIONS(1399),
    [anon_sym_infixr] = ACTIONS(1399),
    [anon_sym_infix] = ACTIONS(1399),
    [sym__variable_pattern] = ACTIONS(1401),
    [sym__constructor_pattern] = ACTIONS(1401),
    [sym_comment] = ACTIONS(5),
  },
  [542] = {
    [anon_sym_RBRACE] = ACTIONS(1399),
    [anon_sym_infixl] = ACTIONS(1399),
    [anon_sym_infixr] = ACTIONS(1399),
    [anon_sym_infix] = ACTIONS(1399),
    [sym__variable_pattern] = ACTIONS(1401),
    [sym__constructor_pattern] = ACTIONS(1401),
    [sym_comment] = ACTIONS(5),
  },
  [543] = {
    [sym__layout_semicolon] = ACTIONS(1403),
    [anon_sym_SEMI] = ACTIONS(1405),
    [sym_comment] = ACTIONS(5),
  },
  [544] = {
    [anon_sym_RBRACE] = ACTIONS(1407),
    [anon_sym_COMMA] = ACTIONS(1407),
    [sym_comment] = ACTIONS(5),
  },
  [545] = {
    [sym__layout_semicolon] = ACTIONS(1409),
    [anon_sym_SEMI] = ACTIONS(1411),
    [anon_sym_PIPE] = ACTIONS(1411),
    [anon_sym_deriving] = ACTIONS(1411),
    [sym_comment] = ACTIONS(5),
  },
  [546] = {
    [sym_field] = STATE(568),
    [sym_variable_identifier] = STATE(399),
    [sym__variable_pattern] = ACTIONS(645),
    [sym_comment] = ACTIONS(5),
  },
  [547] = {
    [anon_sym_COMMA] = ACTIONS(1413),
    [anon_sym_COLON_COLON] = ACTIONS(1413),
    [sym_comment] = ACTIONS(5),
  },
  [548] = {
    [sym__identifier] = STATE(569),
    [sym_variable_identifier] = STATE(117),
    [sym_constructor_identifier] = STATE(117),
    [sym__variable_pattern] = ACTIONS(211),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [549] = {
    [anon_sym_RBRACE] = ACTIONS(1415),
    [anon_sym_COMMA] = ACTIONS(1415),
    [sym_comment] = ACTIONS(5),
  },
  [550] = {
    [sym_variable_identifier] = STATE(570),
    [sym__variable_pattern] = ACTIONS(645),
    [sym_comment] = ACTIONS(5),
  },
  [551] = {
    [sym_strict] = STATE(571),
    [sym__identifier] = STATE(571),
    [sym_variable_identifier] = STATE(117),
    [sym_constructor_identifier] = STATE(117),
    [anon_sym_BANG] = ACTIONS(1312),
    [sym__variable_pattern] = ACTIONS(211),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [552] = {
    [anon_sym_RBRACE] = ACTIONS(1417),
    [anon_sym_COMMA] = ACTIONS(1417),
    [sym_comment] = ACTIONS(5),
  },
  [553] = {
    [anon_sym_LPAREN] = ACTIONS(1349),
    [anon_sym_COMMA] = ACTIONS(1349),
    [anon_sym_RPAREN] = ACTIONS(1349),
    [anon_sym_LBRACK] = ACTIONS(1349),
    [anon_sym_RBRACK] = ACTIONS(1349),
    [anon_sym_DASH_GT] = ACTIONS(1349),
    [sym_unit_type] = ACTIONS(1349),
    [sym_list_constructor] = ACTIONS(1349),
    [sym_function_constructor] = ACTIONS(1349),
    [sym__variable_pattern] = ACTIONS(1349),
    [sym__constructor_pattern] = ACTIONS(1419),
    [sym_module_identifier] = ACTIONS(1419),
    [sym_comment] = ACTIONS(5),
  },
  [554] = {
    [anon_sym_LPAREN] = ACTIONS(1359),
    [anon_sym_COMMA] = ACTIONS(1359),
    [anon_sym_RPAREN] = ACTIONS(1359),
    [anon_sym_LBRACK] = ACTIONS(1359),
    [anon_sym_RBRACK] = ACTIONS(1359),
    [anon_sym_DASH_GT] = ACTIONS(1359),
    [sym_unit_type] = ACTIONS(1359),
    [sym_list_constructor] = ACTIONS(1359),
    [sym_function_constructor] = ACTIONS(1359),
    [sym__variable_pattern] = ACTIONS(1359),
    [sym__constructor_pattern] = ACTIONS(1421),
    [sym_module_identifier] = ACTIONS(1421),
    [sym_comment] = ACTIONS(5),
  },
  [555] = {
    [sym_variable_identifier] = STATE(284),
    [anon_sym_LPAREN] = ACTIONS(1371),
    [anon_sym_COMMA] = ACTIONS(1371),
    [anon_sym_RPAREN] = ACTIONS(1371),
    [anon_sym_LBRACK] = ACTIONS(1371),
    [anon_sym_RBRACK] = ACTIONS(1371),
    [anon_sym_DASH_GT] = ACTIONS(1371),
    [sym_unit_type] = ACTIONS(1371),
    [sym_list_constructor] = ACTIONS(1371),
    [sym_function_constructor] = ACTIONS(1371),
    [sym__variable_pattern] = ACTIONS(277),
    [sym__constructor_pattern] = ACTIONS(1423),
    [sym_module_identifier] = ACTIONS(1423),
    [sym_comment] = ACTIONS(5),
  },
  [556] = {
    [sym_variable_identifier] = STATE(165),
    [aux_sym_type_class_repeat1] = STATE(572),
    [anon_sym_LPAREN] = ACTIONS(1371),
    [anon_sym_COMMA] = ACTIONS(1371),
    [anon_sym_RPAREN] = ACTIONS(1371),
    [anon_sym_LBRACK] = ACTIONS(1371),
    [anon_sym_RBRACK] = ACTIONS(1371),
    [anon_sym_DASH_GT] = ACTIONS(1371),
    [sym_unit_type] = ACTIONS(1371),
    [sym_list_constructor] = ACTIONS(1371),
    [sym_function_constructor] = ACTIONS(1371),
    [sym__variable_pattern] = ACTIONS(277),
    [sym__constructor_pattern] = ACTIONS(1423),
    [sym_module_identifier] = ACTIONS(1423),
    [sym_comment] = ACTIONS(5),
  },
  [557] = {
    [anon_sym_COMMA] = ACTIONS(1425),
    [anon_sym_RPAREN] = ACTIONS(1425),
    [sym_comment] = ACTIONS(5),
  },
  [558] = {
    [anon_sym_LPAREN] = ACTIONS(1427),
    [anon_sym_LBRACK] = ACTIONS(1427),
    [sym_unit_type] = ACTIONS(1427),
    [sym_list_constructor] = ACTIONS(1427),
    [sym_function_constructor] = ACTIONS(1427),
    [sym__variable_pattern] = ACTIONS(1427),
    [sym__constructor_pattern] = ACTIONS(1262),
    [sym_module_identifier] = ACTIONS(1262),
    [sym_comment] = ACTIONS(5),
  },
  [559] = {
    [sym_variable_identifier] = STATE(453),
    [sym__layout_semicolon] = ACTIONS(1429),
    [anon_sym_SEMI] = ACTIONS(1431),
    [anon_sym_DASH_GT] = ACTIONS(1431),
    [sym__variable_pattern] = ACTIONS(359),
    [sym_comment] = ACTIONS(5),
  },
  [560] = {
    [anon_sym_COMMA] = ACTIONS(1433),
    [anon_sym_RPAREN] = ACTIONS(1433),
    [sym_comment] = ACTIONS(5),
  },
  [561] = {
    [sym__layout_semicolon] = ACTIONS(1435),
    [anon_sym_SEMI] = ACTIONS(1437),
    [sym_comment] = ACTIONS(5),
  },
  [562] = {
    [anon_sym_COMMA] = ACTIONS(1022),
    [anon_sym_RPAREN] = ACTIONS(1439),
    [sym_comment] = ACTIONS(5),
  },
  [563] = {
    [aux_sym_import_specification_repeat1] = STATE(574),
    [anon_sym_COMMA] = ACTIONS(721),
    [anon_sym_RPAREN] = ACTIONS(1439),
    [sym_comment] = ACTIONS(5),
  },
  [564] = {
    [anon_sym_RPAREN] = ACTIONS(1441),
    [sym_comment] = ACTIONS(5),
  },
  [565] = {
    [aux_sym_export_repeat1] = STATE(576),
    [anon_sym_COMMA] = ACTIONS(441),
    [anon_sym_RPAREN] = ACTIONS(1441),
    [sym_comment] = ACTIONS(5),
  },
  [566] = {
    [sym__identifier] = STATE(578),
    [sym_variable_identifier] = STATE(117),
    [sym_constructor_identifier] = STATE(117),
    [anon_sym_DOT_DOT] = ACTIONS(1443),
    [sym__variable_pattern] = ACTIONS(211),
    [sym__constructor_pattern] = ACTIONS(63),
    [sym_comment] = ACTIONS(5),
  },
  [567] = {
    [anon_sym_COMMA] = ACTIONS(739),
    [anon_sym_RPAREN] = ACTIONS(1445),
    [sym_comment] = ACTIONS(5),
  },
  [568] = {
    [anon_sym_RBRACE] = ACTIONS(1447),
    [anon_sym_COMMA] = ACTIONS(1447),
    [sym_comment] = ACTIONS(5),
  },
  [569] = {
    [anon_sym_RBRACE] = ACTIONS(1096),
    [anon_sym_COMMA] = ACTIONS(1096),
    [sym_comment] = ACTIONS(5),
  },
  [570] = {
    [anon_sym_COMMA] = ACTIONS(1449),
    [anon_sym_COLON_COLON] = ACTIONS(1449),
    [sym_comment] = ACTIONS(5),
  },
  [571] = {
    [anon_sym_RBRACE] = ACTIONS(1451),
    [anon_sym_COMMA] = ACTIONS(1451),
    [sym_comment] = ACTIONS(5),
  },
  [572] = {
    [sym_variable_identifier] = STATE(284),
    [anon_sym_LPAREN] = ACTIONS(1431),
    [anon_sym_COMMA] = ACTIONS(1431),
    [anon_sym_RPAREN] = ACTIONS(1431),
    [anon_sym_LBRACK] = ACTIONS(1431),
    [anon_sym_RBRACK] = ACTIONS(1431),
    [anon_sym_DASH_GT] = ACTIONS(1431),
    [sym_unit_type] = ACTIONS(1431),
    [sym_list_constructor] = ACTIONS(1431),
    [sym_function_constructor] = ACTIONS(1431),
    [sym__variable_pattern] = ACTIONS(277),
    [sym__constructor_pattern] = ACTIONS(1453),
    [sym_module_identifier] = ACTIONS(1453),
    [sym_comment] = ACTIONS(5),
  },
  [573] = {
    [sym__layout_semicolon] = ACTIONS(1455),
    [anon_sym_SEMI] = ACTIONS(1457),
    [sym_comment] = ACTIONS(5),
  },
  [574] = {
    [anon_sym_COMMA] = ACTIONS(1022),
    [anon_sym_RPAREN] = ACTIONS(1459),
    [sym_comment] = ACTIONS(5),
  },
  [575] = {
    [anon_sym_COMMA] = ACTIONS(1461),
    [anon_sym_RPAREN] = ACTIONS(1461),
    [sym_comment] = ACTIONS(5),
  },
  [576] = {
    [anon_sym_COMMA] = ACTIONS(739),
    [anon_sym_RPAREN] = ACTIONS(1463),
    [sym_comment] = ACTIONS(5),
  },
  [577] = {
    [anon_sym_RPAREN] = ACTIONS(1463),
    [sym_comment] = ACTIONS(5),
  },
  [578] = {
    [aux_sym_export_repeat1] = STATE(582),
    [anon_sym_COMMA] = ACTIONS(441),
    [anon_sym_RPAREN] = ACTIONS(1463),
    [sym_comment] = ACTIONS(5),
  },
  [579] = {
    [aux_sym_import_specification_repeat1] = STATE(583),
    [anon_sym_COMMA] = ACTIONS(721),
    [anon_sym_RPAREN] = ACTIONS(1459),
    [sym_comment] = ACTIONS(5),
  },
  [580] = {
    [sym__layout_semicolon] = ACTIONS(1465),
    [anon_sym_SEMI] = ACTIONS(1467),
    [sym_comment] = ACTIONS(5),
  },
  [581] = {
    [anon_sym_COMMA] = ACTIONS(1469),
    [anon_sym_RPAREN] = ACTIONS(1469),
    [sym_comment] = ACTIONS(5),
  },
  [582] = {
    [anon_sym_COMMA] = ACTIONS(739),
    [anon_sym_RPAREN] = ACTIONS(1471),
    [sym_comment] = ACTIONS(5),
  },
  [583] = {
    [anon_sym_COMMA] = ACTIONS(1022),
    [anon_sym_RPAREN] = ACTIONS(1473),
    [sym_comment] = ACTIONS(5),
  },
  [584] = {
    [anon_sym_COMMA] = ACTIONS(1475),
    [anon_sym_RPAREN] = ACTIONS(1475),
    [sym_comment] = ACTIONS(5),
  },
  [585] = {
    [sym__layout_semicolon] = ACTIONS(1477),
    [anon_sym_SEMI] = ACTIONS(1479),
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
  [157] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(89),
  [159] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(90),
  [161] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(91),
  [163] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(92),
  [165] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(93),
  [167] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(94),
  [169] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__variable, 1, .fragile = true),
  [171] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__variable, 1, .fragile = true),
  [173] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__variable, 1, .fragile = true),
  [175] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__general_declaration, 1),
  [177] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__general_declaration, 1),
  [179] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(103),
  [181] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [183] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__identifier, 1),
  [185] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [187] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 1),
  [189] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(105),
  [191] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(106),
  [193] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(108),
  [195] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 2),
  [197] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 2),
  [199] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(109),
  [201] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(110),
  [203] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(111),
  [205] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreign_import, 1),
  [207] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(113),
  [209] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(115),
  [211] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(90),
  [213] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(118),
  [215] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(119),
  [217] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(118),
  [219] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_do_expression, 2),
  [221] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_do_expression, 2),
  [223] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_identifier, 1),
  [225] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(129),
  [227] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(130),
  [229] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(131),
  [231] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(132),
  [233] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(136),
  [235] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__variable_symbol, 1),
  [237] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__variable_symbol, 1),
  [239] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 1),
  [241] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_symbol, 1),
  [243] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(139),
  [245] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fixity, 2),
  [247] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 2),
  [249] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(142),
  [251] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__op, 1),
  [253] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__op, 1),
  [255] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 1, .fragile = true),
  [257] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_symbol, 1, .fragile = true),
  [259] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 2),
  [261] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 2),
  [263] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(149),
  [265] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(150),
  [267] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 1, .fragile = true, .alias_sequence_id = 1),
  [269] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_simple_type, 1, .fragile = true, .alias_sequence_id = 1),
  [271] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(155),
  [273] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 1, .fragile = true, .alias_sequence_id = 1),
  [275] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(159),
  [277] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(160),
  [279] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(163),
  [281] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(164),
  [283] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_variable_identifier, 2),
  [285] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_qualified_variable_identifier, 2),
  [287] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_qualified_variable_identifier, 2),
  [289] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__special, 1),
  [291] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__symbol, 1),
  [293] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__small, 1),
  [295] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(166),
  [297] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__graphic, 1),
  [299] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__large, 1),
  [301] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(167),
  [303] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(168),
  [305] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(169),
  [307] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(170),
  [309] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(171),
  [311] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(172),
  [313] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__special, 1),
  [315] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__symbol, 1),
  [317] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__small, 1),
  [319] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 1),
  [321] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [323] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 2),
  [325] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [327] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__graphic, 1),
  [329] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__large, 1),
  [331] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(173),
  [333] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(174),
  [335] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(175),
  [337] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(176),
  [339] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(177),
  [341] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(178),
  [343] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__gap, 1),
  [345] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(179),
  [347] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(180),
  [349] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
  [351] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 2),
  [353] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
  [355] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_body, 1),
  [357] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_body, 1),
  [359] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(181),
  [361] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(182),
  [363] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_declaration, 2),
  [365] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_declaration, 2),
  [367] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(186),
  [369] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(187),
  [371] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_wildcard, 1),
  [373] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_wildcard, 1),
  [375] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__function_pattern, 1),
  [377] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__function_pattern, 1),
  [379] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(197),
  [381] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(198),
  [383] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_function_head_repeat1, 1),
  [385] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_function_head_repeat1, 1),
  [387] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(200),
  [389] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(201),
  [391] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_head, 2),
  [393] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(204),
  [395] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(205),
  [397] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(206),
  [399] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(13),
  [401] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(207),
  [403] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(208),
  [405] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(216),
  [407] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(216),
  [409] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(217),
  [411] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(218),
  [413] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(220),
  [415] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(223),
  [417] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 3),
  [419] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 3),
  [421] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(224),
  [423] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(226),
  [425] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(228),
  [427] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(229),
  [429] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_calling_convention, 1),
  [431] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_calling_convention, 1),
  [433] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(230),
  [435] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(231),
  [437] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default, 3),
  [439] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_default, 3),
  [441] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(236),
  [443] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(237),
  [445] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_list, 2),
  [447] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_list, 2),
  [449] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(239),
  [451] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(239),
  [453] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [455] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [457] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [459] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(240),
  [461] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(242),
  [463] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(242),
  [465] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(240),
  [467] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(244),
  [469] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(245),
  [471] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(248),
  [473] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 2),
  [475] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(251),
  [477] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(252),
  [479] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_class_repeat1, 1, .fragile = true),
  [481] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class, 2),
  [483] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 1, .fragile = true),
  [485] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(256),
  [487] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(259),
  [489] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__constructor_symbol, 1),
  [491] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__constructor_symbol, 1),
  [493] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_symbol_repeat1, 1),
  [495] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_symbol_repeat1, 1),
  [497] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 2),
  [499] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_symbol, 2),
  [501] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fixity, 3),
  [503] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 3),
  [505] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(262),
  [507] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 1),
  [509] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_variable_symbol_repeat1, 1),
  [511] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 2, .fragile = true),
  [513] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_symbol, 2, .fragile = true),
  [515] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 3),
  [517] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 3),
  [519] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(265),
  [521] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(268),
  [523] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(270),
  [525] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructors, 1),
  [527] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructors, 1),
  [529] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(272),
  [531] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor, 1),
  [533] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor, 1),
  [535] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(274),
  [537] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(275),
  [539] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 1, .fragile = true),
  [541] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 2, .alias_sequence_id = 2),
  [543] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_simple_type, 2, .alias_sequence_id = 2),
  [545] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 2, .alias_sequence_id = 2),
  [547] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(281),
  [549] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(285),
  [551] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(286),
  [553] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [555] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_char, 3),
  [557] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [559] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__char_escape, 1),
  [561] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__escape, 2),
  [563] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(288),
  [565] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(290),
  [567] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(292),
  [569] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__ascii, 1),
  [571] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__char_escape, 1),
  [573] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 2),
  [575] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(294),
  [577] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(296),
  [579] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(298),
  [581] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 1),
  [583] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 2),
  [585] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [587] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 3),
  [589] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [591] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_function_body_repeat1, 1),
  [593] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_function_body_repeat1, 1),
  [595] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_function_body_repeat1, 1),
  [597] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_body, 2),
  [599] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_body, 2),
  [601] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(303),
  [603] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(304),
  [605] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(305),
  [607] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(306),
  [609] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(307),
  [611] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(308),
  [613] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__pattern, 1),
  [615] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(313),
  [617] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(314),
  [619] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(315),
  [621] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(316),
  [623] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(320),
  [625] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(321),
  [627] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(322),
  [629] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(323),
  [631] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(325),
  [633] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_function_head_repeat1, 2),
  [635] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_function_head_repeat1, 2),
  [637] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(329),
  [639] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(330),
  [641] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(331),
  [643] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(332),
  [645] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(132),
  [647] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(333),
  [649] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(334),
  [651] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(340),
  [653] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(341),
  [655] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__generic_type_constructor, 1),
  [657] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__generic_type_constructor, 1),
  [659] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 1, .fragile = true, .alias_sequence_id = 1),
  [661] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type_constructors, 1, .fragile = true, .alias_sequence_id = 1),
  [663] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(348),
  [665] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_signature, 3),
  [667] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_signature, 3),
  [669] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type, 1),
  [671] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type, 1),
  [673] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(351),
  [675] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(353),
  [677] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type, 1, .alias_sequence_id = 3),
  [679] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type, 1, .alias_sequence_id = 3),
  [681] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(354),
  [683] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 1, .fragile = true),
  [685] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type_constructors, 1, .fragile = true),
  [687] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 3),
  [689] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 3),
  [691] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 3),
  [693] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(355),
  [695] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(355),
  [697] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 4),
  [699] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 2),
  [701] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(359),
  [703] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(360),
  [705] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(362),
  [707] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 1),
  [709] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(364),
  [711] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 4),
  [713] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 4),
  [715] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 2),
  [717] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 2),
  [719] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(365),
  [721] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(366),
  [723] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(367),
  [725] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_safety, 1),
  [727] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_safety, 1),
  [729] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(371),
  [731] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreign, 4),
  [733] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreign, 4),
  [735] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default, 4),
  [737] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_default, 4),
  [739] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(376),
  [741] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(377),
  [743] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
  [745] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2),
  [747] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
  [749] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_list, 3),
  [751] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_list, 3),
  [753] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [755] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [757] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [759] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(379),
  [761] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(380),
  [763] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(381),
  [765] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(383),
  [767] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(384),
  [769] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(384),
  [771] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 4),
  [773] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 4),
  [775] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(389),
  [777] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_class_repeat1, 2),
  [779] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 2),
  [781] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(391),
  [783] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class_instance, 4),
  [785] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class_instance, 4),
  [787] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__op, 3),
  [789] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__op, 3),
  [791] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_symbol_repeat1, 2),
  [793] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_symbol_repeat1, 2),
  [795] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_fixity_repeat1, 2),
  [797] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fixity_repeat1, 2),
  [799] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fixity, 4),
  [801] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 4),
  [803] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 2),
  [805] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_variable_symbol_repeat1, 2),
  [807] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 4),
  [809] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 4),
  [811] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 2),
  [813] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 2),
  [815] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructors, 2),
  [817] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructors, 2),
  [819] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(397),
  [821] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(155),
  [823] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 1),
  [825] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat1, 1),
  [827] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 1),
  [829] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor, 2),
  [831] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor, 2),
  [833] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 2),
  [835] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 4),
  [837] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 4),
  [839] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_synonym, 4),
  [841] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_synonym, 4),
  [843] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__cntrl, 1),
  [845] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__ascii, 2),
  [847] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat1, 1),
  [849] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__escape, 3),
  [851] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(405),
  [853] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat2, 1),
  [855] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(406),
  [857] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__cntrl, 1),
  [859] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 2),
  [861] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 1),
  [863] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 3),
  [865] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(407),
  [867] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 1),
  [869] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(408),
  [871] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_general_constructor_repeat1, 1, .fragile = true),
  [873] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_general_constructor_repeat1, 1, .fragile = true),
  [875] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_general_constructor_repeat1, 1, .fragile = true),
  [877] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_general_constructor, 2),
  [879] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_general_constructor, 2),
  [881] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_general_constructor, 2),
  [883] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_function_body_repeat1, 2),
  [885] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_function_body_repeat1, 2),
  [887] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_function_body_repeat1, 2),
  [889] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parenthesized_pattern, 3),
  [891] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parenthesized_pattern, 3),
  [893] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__variable_symbol, 1),
  [895] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(414),
  [897] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 1),
  [899] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__op, 1),
  [901] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 1, .fragile = true),
  [903] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(421),
  [905] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(422),
  [907] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(423),
  [909] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_general_constructor_repeat1, 1, .fragile = true), REDUCE(aux_sym_type_class_repeat1, 1, .fragile = true),
  [912] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list_pattern, 3),
  [914] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_list_pattern, 3),
  [916] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_as_pattern, 3),
  [918] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_as_pattern, 3),
  [920] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__function_pattern, 3),
  [922] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__function_pattern, 3),
  [924] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(425),
  [926] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_labels, 1),
  [928] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(426),
  [930] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(428),
  [932] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(429),
  [934] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(431),
  [936] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(432),
  [938] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__generic_type_constructor, 1),
  [940] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(436),
  [942] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(439),
  [944] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(440),
  [946] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(442),
  [948] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(443),
  [950] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(445),
  [952] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 1, .fragile = true),
  [954] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 1, .fragile = true, .alias_sequence_id = 1),
  [956] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(446),
  [958] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(447),
  [960] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_list_repeat1, 1),
  [962] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_list_repeat1, 1),
  [964] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(449),
  [966] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type, 1),
  [968] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(450),
  [970] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type, 1, .alias_sequence_id = 3),
  [972] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(451),
  [974] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 2, .fragile = true, .alias_sequence_id = 1),
  [976] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type_constructors, 2, .fragile = true, .alias_sequence_id = 1),
  [978] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(454),
  [980] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 2, .fragile = true),
  [982] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_qualified_type_constructor, 2, .fragile = true),
  [984] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(457),
  [986] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_signature, 4),
  [988] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_signature, 4),
  [990] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 2),
  [992] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_declarations, 2),
  [994] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(460),
  [996] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(460),
  [998] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(461),
  [1000] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(461),
  [1002] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 3),
  [1004] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(464),
  [1006] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(465),
  [1008] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(466),
  [1010] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 5),
  [1012] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 5),
  [1014] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 5),
  [1016] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(469),
  [1018] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 3),
  [1020] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 3),
  [1022] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(472),
  [1024] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(473),
  [1026] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(474),
  [1028] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(476),
  [1030] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreign, 5),
  [1032] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreign, 5),
  [1034] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_export_repeat1, 2),
  [1036] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default, 5),
  [1038] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_default, 5),
  [1040] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_context_repeat1, 2),
  [1042] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 4),
  [1044] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(480),
  [1046] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 5),
  [1048] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 5),
  [1050] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_general_declarations, 2),
  [1052] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_general_declarations, 2),
  [1054] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(482),
  [1056] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(482),
  [1058] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(483),
  [1060] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(485),
  [1062] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(485),
  [1064] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(483),
  [1066] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class, 4),
  [1068] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class_instance, 5),
  [1070] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class_instance, 5),
  [1072] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_fixity_repeat1, 3),
  [1074] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fixity_repeat1, 3),
  [1076] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 5),
  [1078] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 5),
  [1080] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(489),
  [1082] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 2),
  [1084] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructors_repeat1, 2),
  [1086] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(492),
  [1088] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(493),
  [1090] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(495),
  [1092] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(496),
  [1094] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_strict, 2),
  [1096] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_strict, 2),
  [1098] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_strict, 2),
  [1100] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 2),
  [1102] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat1, 2),
  [1104] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 2),
  [1106] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 5),
  [1108] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 5),
  [1110] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_new_constructor, 2),
  [1112] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_new_constructor, 2),
  [1114] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat1, 2),
  [1116] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat2, 2),
  [1118] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 2),
  [1120] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 2),
  [1122] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_general_constructor_repeat1, 2),
  [1124] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_general_constructor_repeat1, 2),
  [1126] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_general_constructor_repeat1, 2),
  [1128] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(499),
  [1130] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tuple_pattern_repeat1, 2),
  [1132] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(500),
  [1134] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__constructor_symbol, 1),
  [1136] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_symbol_repeat1, 1),
  [1138] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 2),
  [1140] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__pattern, 3),
  [1142] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 1),
  [1144] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 2, .fragile = true),
  [1146] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_tuple_pattern, 4),
  [1148] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_tuple_pattern, 4),
  [1150] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(505),
  [1152] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__function_pattern, 4),
  [1154] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__function_pattern, 4),
  [1156] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_labels, 2),
  [1158] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(507),
  [1160] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(509),
  [1162] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(511),
  [1164] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tupling_constructor_repeat1, 1),
  [1166] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tupling_constructor, 3),
  [1168] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_tupling_constructor, 3),
  [1170] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(513),
  [1172] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(514),
  [1174] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(515),
  [1176] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 2, .fragile = true, .alias_sequence_id = 1),
  [1178] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 2, .fragile = true),
  [1180] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(518),
  [1182] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tuple, 3, .fragile = true), REDUCE(sym_parenthesized_constructor, 3, .fragile = true),
  [1185] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_tuple, 3, .fragile = true), REDUCE(sym_parenthesized_constructor, 3, .fragile = true),
  [1188] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(520),
  [1190] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(521),
  [1192] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(523),
  [1194] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(524),
  [1196] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(526),
  [1198] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 3),
  [1200] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 3),
  [1202] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_list_repeat1, 2),
  [1204] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_list_repeat1, 2),
  [1206] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_qualified_type_constructor_repeat1, 2),
  [1208] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_qualified_type_constructor_repeat1, 2),
  [1210] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 3, .fragile = true),
  [1212] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_qualified_type_constructor, 3, .fragile = true),
  [1214] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(528),
  [1216] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type, 3),
  [1218] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type, 3),
  [1220] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type, 3, .alias_sequence_id = 3),
  [1222] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type, 3, .alias_sequence_id = 3),
  [1224] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_declarations, 3),
  [1226] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(530),
  [1228] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(530),
  [1230] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_exports_repeat1, 2),
  [1232] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 4),
  [1234] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(532),
  [1236] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 6),
  [1238] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 6),
  [1240] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(534),
  [1242] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(536),
  [1244] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 2),
  [1246] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 4),
  [1248] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 4),
  [1250] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(538),
  [1252] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(540),
  [1254] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreign, 6),
  [1256] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreign, 6),
  [1258] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_export_repeat1, 3),
  [1260] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_context_repeat1, 3),
  [1262] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 5),
  [1264] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 6),
  [1266] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 6),
  [1268] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_general_declarations_repeat1, 2),
  [1270] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_general_declarations_repeat1, 2),
  [1272] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_general_declarations_repeat1, 2),
  [1274] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_general_declarations, 3),
  [1276] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_general_declarations, 3),
  [1278] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(541),
  [1280] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(541),
  [1282] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(542),
  [1284] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(542),
  [1286] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class_instance, 6),
  [1288] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class_instance, 6),
  [1290] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 6),
  [1292] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 6),
  [1294] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 4),
  [1296] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 4),
  [1298] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(543),
  [1300] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 3),
  [1302] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructors_repeat1, 3),
  [1304] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fields, 3),
  [1306] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fields, 3),
  [1308] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(545),
  [1310] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(546),
  [1312] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(548),
  [1314] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(550),
  [1316] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(551),
  [1318] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 6),
  [1320] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 6),
  [1322] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_negative_literal, 4),
  [1324] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__op, 3),
  [1326] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_symbol_repeat1, 2),
  [1328] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 2),
  [1330] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tuple_pattern_repeat1, 3),
  [1332] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_labels_repeat1, 2),
  [1334] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_label, 3),
  [1336] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_tupling_constructor, 3),
  [1338] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(553),
  [1340] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_tuple, 3, .fragile = true), REDUCE(sym_parenthesized_constructor, 3, .fragile = true),
  [1343] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(554),
  [1345] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tupling_constructor_repeat1, 2),
  [1347] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tupling_constructor, 4),
  [1349] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_tupling_constructor, 4),
  [1351] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_list, 3),
  [1353] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 3, .fragile = true),
  [1355] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tuple_repeat1, 2),
  [1357] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tuple, 4),
  [1359] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_tuple, 4),
  [1361] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type, 3),
  [1363] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 4),
  [1365] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(558),
  [1367] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type, 3, .alias_sequence_id = 3),
  [1369] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 4, .fragile = true),
  [1371] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_qualified_type_constructor, 4, .fragile = true),
  [1373] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_qualified_type_constructor_repeat1, 3),
  [1375] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_qualified_type_constructor_repeat1, 3),
  [1377] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_exports_repeat1, 3),
  [1379] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 4),
  [1381] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(560),
  [1383] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(561),
  [1385] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(563),
  [1387] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(564),
  [1389] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(566),
  [1391] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 3),
  [1393] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 5),
  [1395] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 5),
  [1397] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_general_declarations_repeat1, 3),
  [1399] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_general_declarations_repeat1, 3),
  [1401] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_general_declarations_repeat1, 3),
  [1403] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 5),
  [1405] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 5),
  [1407] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fields_repeat1, 2),
  [1409] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fields, 4),
  [1411] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fields, 4),
  [1413] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_field_repeat1, 2),
  [1415] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field, 3),
  [1417] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_labels_repeat1, 3),
  [1419] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_tupling_constructor, 4),
  [1421] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_tuple, 4),
  [1423] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 4, .fragile = true),
  [1425] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tuple_repeat1, 3),
  [1427] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 5),
  [1429] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 5, .fragile = true),
  [1431] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_qualified_type_constructor, 5, .fragile = true),
  [1433] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 5),
  [1435] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 6),
  [1437] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 6),
  [1439] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(573),
  [1441] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(575),
  [1443] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(577),
  [1445] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(579),
  [1447] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fields_repeat1, 3),
  [1449] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_field_repeat1, 3),
  [1451] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field, 4),
  [1453] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 5, .fragile = true),
  [1455] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 7),
  [1457] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 7),
  [1459] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(580),
  [1461] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 5),
  [1463] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(581),
  [1465] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 8),
  [1467] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 8),
  [1469] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 6),
  [1471] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(584),
  [1473] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(585),
  [1475] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 7),
  [1477] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 9),
  [1479] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 9),
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
