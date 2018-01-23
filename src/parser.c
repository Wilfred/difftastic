#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 600
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
  anon_sym_SEMI = 5,
  anon_sym_LBRACE = 6,
  anon_sym_RBRACE = 7,
  anon_sym_LPAREN = 8,
  anon_sym_COMMA = 9,
  anon_sym_RPAREN = 10,
  anon_sym_DOT_DOT = 11,
  anon_sym_import = 12,
  anon_sym_qualified = 13,
  anon_sym_as = 14,
  anon_sym_hiding = 15,
  anon_sym_EQ = 16,
  anon_sym_where = 17,
  anon_sym_TILDE = 18,
  anon_sym_LBRACK = 19,
  anon_sym_RBRACK = 20,
  anon_sym_DASH = 21,
  anon_sym_AT = 22,
  anon_sym__ = 23,
  anon_sym_foreign = 24,
  sym_foreign_export = 25,
  anon_sym_ccall = 26,
  anon_sym_stdcall = 27,
  anon_sym_cplusplus = 28,
  anon_sym_jvm = 29,
  anon_sym_dotnet = 30,
  anon_sym_unsafe = 31,
  anon_sym_safe = 32,
  anon_sym_default = 33,
  anon_sym_do = 34,
  anon_sym_class = 35,
  anon_sym_instance = 36,
  anon_sym_infixl = 37,
  anon_sym_infixr = 38,
  anon_sym_infix = 39,
  anon_sym_BQUOTE = 40,
  anon_sym_COLON = 41,
  anon_sym_COLON_COLON = 42,
  anon_sym_DASH_GT = 43,
  sym_unit_type = 44,
  sym_list_constructor = 45,
  sym_function_constructor = 46,
  anon_sym_data = 47,
  anon_sym_EQ_GT = 48,
  anon_sym_PIPE = 49,
  anon_sym_deriving = 50,
  anon_sym_newtype = 51,
  anon_sym_BANG = 52,
  anon_sym_type = 53,
  sym__variable_pattern = 54,
  sym__constructor_pattern = 55,
  anon_sym_DOT = 56,
  sym_module_identifier = 57,
  sym_comment = 58,
  sym_float = 59,
  anon_sym_SQUOTE = 60,
  anon_sym_DQUOTE = 61,
  aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH = 62,
  aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH = 63,
  sym__ascii_large = 64,
  anon_sym_POUND = 65,
  anon_sym_DOLLAR = 66,
  anon_sym_PERCENT = 67,
  anon_sym_AMP = 68,
  anon_sym_1 = 69,
  anon_sym_PLUS = 70,
  anon_sym_SLASH = 71,
  anon_sym_LT = 72,
  anon_sym_GT = 73,
  anon_sym_QMARK = 74,
  anon_sym_CARET = 75,
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
  sym__declarations = 133,
  sym_module_exports = 134,
  sym_export = 135,
  sym_import = 136,
  sym_import_specification = 137,
  sym__declaration = 138,
  sym_function_declaration = 139,
  sym_function_head = 140,
  sym_function_body = 141,
  sym_where_pattern = 142,
  sym__function_pattern = 143,
  sym_irrefutable_pattern = 144,
  sym_list_pattern = 145,
  sym_tuple_pattern = 146,
  sym_parenthesized_pattern = 147,
  sym__pattern = 148,
  sym_negative_literal = 149,
  sym_general_constructor = 150,
  sym_as_pattern = 151,
  sym_labels = 152,
  sym_label = 153,
  sym_wildcard = 154,
  sym__variable = 155,
  sym_qualified_variable_identifier = 156,
  sym__expression = 157,
  sym_foreign = 158,
  sym_foreign_import = 159,
  sym_calling_convention = 160,
  sym_safety = 161,
  sym_default = 162,
  sym_do_expression = 163,
  sym_statement_list = 164,
  sym__statement = 165,
  sym_type_class = 166,
  sym_type_class_instance = 167,
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
  [anon_sym_where] = "where",
  [anon_sym_TILDE] = "~",
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
  [sym__declarations] = "_declarations",
  [sym_module_exports] = "module_exports",
  [sym_export] = "export",
  [sym_import] = "import",
  [sym_import_specification] = "import_specification",
  [sym__declaration] = "_declaration",
  [sym_function_declaration] = "function_declaration",
  [sym_function_head] = "function_head",
  [sym_function_body] = "function_body",
  [sym_where_pattern] = "where_pattern",
  [sym__function_pattern] = "_function_pattern",
  [sym_irrefutable_pattern] = "irrefutable_pattern",
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
  [sym_type_class_instance] = "type_class_instance",
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
  [anon_sym_where] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
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
  [sym__declarations] = {
    .visible = false,
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
  [sym_where_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym__function_pattern] = {
    .visible = false,
    .named = true,
  },
  [sym_irrefutable_pattern] = {
    .visible = true,
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
  [sym_type_class_instance] = {
    .visible = true,
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
        ADVANCE(253);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(254);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '.')
        ADVANCE(256);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == ':')
        ADVANCE(262);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == '\\')
        SKIP(264);
      if (lookahead == 'c')
        ADVANCE(265);
      if (lookahead == 'd')
        ADVANCE(271);
      if (lookahead == 'f')
        ADVANCE(281);
      if (lookahead == 'i')
        ADVANCE(288);
      if (lookahead == 'm')
        ADVANCE(306);
      if (lookahead == 'n')
        ADVANCE(312);
      if (lookahead == 't')
        ADVANCE(319);
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
        ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
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
        ADVANCE(210);
      if (lookahead == 'i')
        ADVANCE(217);
      if (lookahead == 'm')
        ADVANCE(235);
      if (lookahead == 'n')
        ADVANCE(241);
      if (lookahead == 't')
        ADVANCE(248);
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
        ADVANCE(252);
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
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(211);
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
      if (lookahead == 'r')
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
      if (lookahead == 'e')
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
      if (lookahead == 'i')
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
      if (lookahead == 'g')
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
      if (lookahead == 'n')
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
    case 217:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'm')
        ADVANCE(218);
      if (lookahead == 'n')
        ADVANCE(223);
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
      if (lookahead == 'p')
        ADVANCE(219);
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
      if (lookahead == 'o')
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
      if (lookahead == 'r')
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
      if (lookahead == 't')
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
    case 223:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(224);
      if (lookahead == 's')
        ADVANCE(229);
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
      if (lookahead == 'i')
        ADVANCE(225);
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
      if (lookahead == 'x')
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
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(227);
      if (lookahead == 'r')
        ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 227:
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
    case 228:
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
    case 229:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(230);
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
      if (lookahead == 'a')
        ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
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
      if (lookahead == 'n')
        ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
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
      if (lookahead == 'c')
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
      if (lookahead == 'e')
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
    case 235:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(236);
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
      if (lookahead == 'd')
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
      if (lookahead == 'u')
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
      if (lookahead == 'l')
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
      if (lookahead == 'e')
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
    case 241:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(242);
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
      if (lookahead == 'w')
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
      if (lookahead == 't')
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
      if (lookahead == 'y')
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
      if (lookahead == 'p')
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
      if (lookahead == 'e')
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
    case 248:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'y')
        ADVANCE(249);
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
      if (lookahead == 'p')
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
      if (lookahead == 'e')
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
    case 252:
      ACCEPT_TOKEN(sym__constructor_pattern);
      if (lookahead == '\'')
        ADVANCE(252);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(252);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 253:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(182);
      if (lookahead == '\r')
        ADVANCE(253);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(254);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '.')
        ADVANCE(256);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == ':')
        ADVANCE(262);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == '\\')
        SKIP(264);
      if (lookahead == 'c')
        ADVANCE(265);
      if (lookahead == 'd')
        ADVANCE(271);
      if (lookahead == 'f')
        ADVANCE(281);
      if (lookahead == 'i')
        ADVANCE(288);
      if (lookahead == 'm')
        ADVANCE(306);
      if (lookahead == 'n')
        ADVANCE(312);
      if (lookahead == 't')
        ADVANCE(319);
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
        ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 255:
      if (lookahead == '-')
        ADVANCE(29);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == 'E')
        ADVANCE(175);
      if (lookahead == 'O')
        ADVANCE(258);
      if (lookahead == 'X')
        ADVANCE(260);
      if (lookahead == 'e')
        ADVANCE(175);
      if (lookahead == 'o')
        ADVANCE(258);
      if (lookahead == 'x')
        ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      END_STATE();
    case 258:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(259);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__octal_literal);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(259);
      END_STATE();
    case 260:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(261);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__hexidecimal_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(261);
      END_STATE();
    case 262:
      if (lookahead == ':')
        ADVANCE(120);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 264:
      if (lookahead == 'n')
        SKIP(181);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'l')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'a')
        ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 's')
        ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 's')
        ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '\'')
        ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'a')
        ADVANCE(272);
      if (lookahead == 'e')
        ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 't')
        ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'a')
        ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_data);
      if (lookahead == '\'')
        ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'f')
        ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'a')
        ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'u')
        ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'l')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 't')
        ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '\'')
        ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'o')
        ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'r')
        ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'e')
        ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'i')
        ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'g')
        ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'n')
        ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_foreign);
      if (lookahead == '\'')
        ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'm')
        ADVANCE(289);
      if (lookahead == 'n')
        ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'p')
        ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'o')
        ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'r')
        ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 't')
        ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '\'')
        ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'f')
        ADVANCE(295);
      if (lookahead == 's')
        ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'i')
        ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'x')
        ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'l')
        ADVANCE(298);
      if (lookahead == 'r')
        ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_infixl);
      if (lookahead == '\'')
        ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_infixr);
      if (lookahead == '\'')
        ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 't')
        ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'a')
        ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'n')
        ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'c')
        ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'e')
        ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_instance);
      if (lookahead == '\'')
        ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'o')
        ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'd')
        ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'u')
        ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'l')
        ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'e')
        ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == '\'')
        ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'e')
        ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'w')
        ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 't')
        ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'y')
        ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'p')
        ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'e')
        ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_newtype);
      if (lookahead == '\'')
        ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'y')
        ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'p')
        ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'e')
        ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '\'')
        ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__constructor_pattern);
      if (lookahead == '\'')
        ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(323);
      END_STATE();
    case 324:
      if (lookahead == '\n')
        ADVANCE(325);
      if (lookahead == '\r')
        ADVANCE(337);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '\\')
        SKIP(338);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == 'q')
        ADVANCE(339);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(324);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(348);
      END_STATE();
    case 325:
      if (lookahead == '\n')
        ADVANCE(325);
      if (lookahead == '\r')
        ADVANCE(325);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '\\')
        ADVANCE(326);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == 'q')
        ADVANCE(327);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(325);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(336);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 326:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(325);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 327:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(328);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 328:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(329);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 329:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(330);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 330:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(331);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 331:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
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
      if (lookahead == 'e')
        ADVANCE(334);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 334:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(335);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_qualified);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_module_identifier);
      if (lookahead == '\'')
        ADVANCE(336);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(336);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 337:
      if (lookahead == '\n')
        ADVANCE(325);
      if (lookahead == '\r')
        ADVANCE(337);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '\\')
        SKIP(338);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == 'q')
        ADVANCE(339);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(324);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(348);
      END_STATE();
    case 338:
      if (lookahead == 'n')
        SKIP(324);
      END_STATE();
    case 339:
      if (lookahead == 'u')
        ADVANCE(340);
      END_STATE();
    case 340:
      if (lookahead == 'a')
        ADVANCE(341);
      END_STATE();
    case 341:
      if (lookahead == 'l')
        ADVANCE(342);
      END_STATE();
    case 342:
      if (lookahead == 'i')
        ADVANCE(343);
      END_STATE();
    case 343:
      if (lookahead == 'f')
        ADVANCE(344);
      END_STATE();
    case 344:
      if (lookahead == 'i')
        ADVANCE(345);
      END_STATE();
    case 345:
      if (lookahead == 'e')
        ADVANCE(346);
      END_STATE();
    case 346:
      if (lookahead == 'd')
        ADVANCE(347);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_qualified);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_module_identifier);
      if (lookahead == '\'')
        ADVANCE(348);
      if (lookahead == '.')
        ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(348);
      END_STATE();
    case 349:
      if (lookahead == '\n')
        ADVANCE(350);
      if (lookahead == '\r')
        ADVANCE(402);
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
        ADVANCE(254);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(403);
      if (lookahead == '.')
        ADVANCE(256);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(404);
      if (lookahead == '<')
        ADVANCE(405);
      if (lookahead == '=')
        ADVANCE(406);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(407);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == 'c')
        ADVANCE(408);
      if (lookahead == 'd')
        ADVANCE(421);
      if (lookahead == 'e')
        ADVANCE(427);
      if (lookahead == 'i')
        ADVANCE(433);
      if (lookahead == 'j')
        ADVANCE(439);
      if (lookahead == 's')
        ADVANCE(442);
      if (lookahead == 'w')
        ADVANCE(449);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(349);
      END_STATE();
    case 350:
      if (lookahead == '\n')
        ADVANCE(350);
      if (lookahead == '\r')
        ADVANCE(350);
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
        ADVANCE(351);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(352);
      if (lookahead == '<')
        ADVANCE(353);
      if (lookahead == '=')
        ADVANCE(354);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(355);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == 'c')
        ADVANCE(356);
      if (lookahead == 'd')
        ADVANCE(369);
      if (lookahead == 'e')
        ADVANCE(375);
      if (lookahead == 'i')
        ADVANCE(381);
      if (lookahead == 'j')
        ADVANCE(387);
      if (lookahead == 's')
        ADVANCE(390);
      if (lookahead == 'w')
        ADVANCE(397);
      if (lookahead == 8902)
        ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(350);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(25);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 354:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '>')
        ADVANCE(40);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 355:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(350);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 356:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'c')
        ADVANCE(357);
      if (lookahead == 'p')
        ADVANCE(361);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 357:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(358);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 358:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(359);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 359:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(360);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_ccall);
      if (lookahead == '-')
        ADVANCE(4);
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
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(363);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 363:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(364);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 364:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(365);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 365:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(366);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 366:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(367);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 367:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(368);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_cplusplus);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 369:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(370);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 370:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(371);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 371:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(372);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 372:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(373);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 373:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(374);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_dotnet);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 375:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'x')
        ADVANCE(376);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 376:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(377);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 377:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(378);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 378:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(379);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 379:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(380);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_foreign_export);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 381:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'm')
        ADVANCE(382);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 382:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(383);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 383:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(384);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 384:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(385);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 385:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(386);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 387:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'v')
        ADVANCE(388);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 388:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'm')
        ADVANCE(389);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_jvm);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 390:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(391);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 391:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(392);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 392:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'c')
        ADVANCE(393);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 393:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(394);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 394:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(395);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 395:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(396);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_stdcall);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 397:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'h')
        ADVANCE(398);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 398:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(399);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 399:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
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
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 402:
      if (lookahead == '\n')
        ADVANCE(350);
      if (lookahead == '\r')
        ADVANCE(402);
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
        ADVANCE(254);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(403);
      if (lookahead == '.')
        ADVANCE(256);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(404);
      if (lookahead == '<')
        ADVANCE(405);
      if (lookahead == '=')
        ADVANCE(406);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(407);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == 'c')
        ADVANCE(408);
      if (lookahead == 'd')
        ADVANCE(421);
      if (lookahead == 'e')
        ADVANCE(427);
      if (lookahead == 'i')
        ADVANCE(433);
      if (lookahead == 'j')
        ADVANCE(439);
      if (lookahead == 's')
        ADVANCE(442);
      if (lookahead == 'w')
        ADVANCE(449);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(349);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(29);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 406:
      if (lookahead == '>')
        ADVANCE(125);
      END_STATE();
    case 407:
      if (lookahead == 'n')
        SKIP(349);
      END_STATE();
    case 408:
      if (lookahead == 'c')
        ADVANCE(409);
      if (lookahead == 'p')
        ADVANCE(413);
      END_STATE();
    case 409:
      if (lookahead == 'a')
        ADVANCE(410);
      END_STATE();
    case 410:
      if (lookahead == 'l')
        ADVANCE(411);
      END_STATE();
    case 411:
      if (lookahead == 'l')
        ADVANCE(412);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_ccall);
      END_STATE();
    case 413:
      if (lookahead == 'l')
        ADVANCE(414);
      END_STATE();
    case 414:
      if (lookahead == 'u')
        ADVANCE(415);
      END_STATE();
    case 415:
      if (lookahead == 's')
        ADVANCE(416);
      END_STATE();
    case 416:
      if (lookahead == 'p')
        ADVANCE(417);
      END_STATE();
    case 417:
      if (lookahead == 'l')
        ADVANCE(418);
      END_STATE();
    case 418:
      if (lookahead == 'u')
        ADVANCE(419);
      END_STATE();
    case 419:
      if (lookahead == 's')
        ADVANCE(420);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_cplusplus);
      END_STATE();
    case 421:
      if (lookahead == 'o')
        ADVANCE(422);
      END_STATE();
    case 422:
      if (lookahead == 't')
        ADVANCE(423);
      END_STATE();
    case 423:
      if (lookahead == 'n')
        ADVANCE(424);
      END_STATE();
    case 424:
      if (lookahead == 'e')
        ADVANCE(425);
      END_STATE();
    case 425:
      if (lookahead == 't')
        ADVANCE(426);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_dotnet);
      END_STATE();
    case 427:
      if (lookahead == 'x')
        ADVANCE(428);
      END_STATE();
    case 428:
      if (lookahead == 'p')
        ADVANCE(429);
      END_STATE();
    case 429:
      if (lookahead == 'o')
        ADVANCE(430);
      END_STATE();
    case 430:
      if (lookahead == 'r')
        ADVANCE(431);
      END_STATE();
    case 431:
      if (lookahead == 't')
        ADVANCE(432);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_foreign_export);
      END_STATE();
    case 433:
      if (lookahead == 'm')
        ADVANCE(434);
      END_STATE();
    case 434:
      if (lookahead == 'p')
        ADVANCE(435);
      END_STATE();
    case 435:
      if (lookahead == 'o')
        ADVANCE(436);
      END_STATE();
    case 436:
      if (lookahead == 'r')
        ADVANCE(437);
      END_STATE();
    case 437:
      if (lookahead == 't')
        ADVANCE(438);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 439:
      if (lookahead == 'v')
        ADVANCE(440);
      END_STATE();
    case 440:
      if (lookahead == 'm')
        ADVANCE(441);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_jvm);
      END_STATE();
    case 442:
      if (lookahead == 't')
        ADVANCE(443);
      END_STATE();
    case 443:
      if (lookahead == 'd')
        ADVANCE(444);
      END_STATE();
    case 444:
      if (lookahead == 'c')
        ADVANCE(445);
      END_STATE();
    case 445:
      if (lookahead == 'a')
        ADVANCE(446);
      END_STATE();
    case 446:
      if (lookahead == 'l')
        ADVANCE(447);
      END_STATE();
    case 447:
      if (lookahead == 'l')
        ADVANCE(448);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_stdcall);
      END_STATE();
    case 449:
      if (lookahead == 'h')
        ADVANCE(450);
      END_STATE();
    case 450:
      if (lookahead == 'e')
        ADVANCE(451);
      END_STATE();
    case 451:
      if (lookahead == 'r')
        ADVANCE(452);
      END_STATE();
    case 452:
      if (lookahead == 'e')
        ADVANCE(453);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 454:
      if (lookahead == '\n')
        ADVANCE(455);
      if (lookahead == '\r')
        ADVANCE(464);
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
        ADVANCE(254);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(403);
      if (lookahead == '.')
        ADVANCE(256);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == '0')
        ADVANCE(465);
      if (lookahead == ':')
        ADVANCE(404);
      if (lookahead == '<')
        ADVANCE(405);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(467);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == 'w')
        ADVANCE(468);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(454);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(466);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 455:
      if (lookahead == '\n')
        ADVANCE(455);
      if (lookahead == '\r')
        ADVANCE(455);
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
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == '-')
        ADVANCE(351);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == '0')
        ADVANCE(456);
      if (lookahead == ':')
        ADVANCE(352);
      if (lookahead == '<')
        ADVANCE(353);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(458);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == 'w')
        ADVANCE(459);
      if (lookahead == 8902)
        ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(455);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(457);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 456:
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
        ADVANCE(457);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(457);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 458:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(455);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'h')
        ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 463:
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
    case 464:
      if (lookahead == '\n')
        ADVANCE(455);
      if (lookahead == '\r')
        ADVANCE(464);
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
        ADVANCE(254);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(403);
      if (lookahead == '.')
        ADVANCE(256);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == '0')
        ADVANCE(465);
      if (lookahead == ':')
        ADVANCE(404);
      if (lookahead == '<')
        ADVANCE(405);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(467);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == 'w')
        ADVANCE(468);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(454);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(466);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == 'O')
        ADVANCE(258);
      if (lookahead == 'X')
        ADVANCE(260);
      if (lookahead == 'o')
        ADVANCE(258);
      if (lookahead == 'x')
        ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(466);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym__integer_literal);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(466);
      END_STATE();
    case 467:
      if (lookahead == 'n')
        SKIP(454);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'h')
        ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'e')
        ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'r')
        ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'e')
        ADVANCE(472);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '\'')
        ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 473:
      if (lookahead == '\n')
        ADVANCE(474);
      if (lookahead == '\r')
        ADVANCE(478);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(254);
      if (lookahead == '-')
        ADVANCE(479);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == ':')
        ADVANCE(262);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(480);
      if (lookahead == '_')
        ADVANCE(481);
      if (lookahead == '~')
        ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(473);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 474:
      if (lookahead == '\n')
        ADVANCE(474);
      if (lookahead == '\r')
        ADVANCE(474);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == '-')
        ADVANCE(475);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '[')
        ADVANCE(72);
      if (lookahead == '\\')
        ADVANCE(476);
      if (lookahead == '_')
        ADVANCE(477);
      if (lookahead == '~')
        ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(474);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 475:
      if (lookahead == '-')
        ADVANCE(25);
      if (lookahead == '>')
        ADVANCE(30);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 476:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(474);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 477:
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
    case 478:
      if (lookahead == '\n')
        ADVANCE(474);
      if (lookahead == '\r')
        ADVANCE(478);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(254);
      if (lookahead == '-')
        ADVANCE(479);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == ':')
        ADVANCE(262);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(480);
      if (lookahead == '_')
        ADVANCE(481);
      if (lookahead == '~')
        ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(473);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 479:
      if (lookahead == '-')
        ADVANCE(29);
      if (lookahead == '>')
        ADVANCE(115);
      END_STATE();
    case 480:
      if (lookahead == 'n')
        SKIP(473);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '\'')
        ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 482:
      if (lookahead == '\n')
        ADVANCE(483);
      if (lookahead == '\r')
        ADVANCE(485);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ':')
        ADVANCE(262);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(486);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(482);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 483:
      if (lookahead == '\n')
        ADVANCE(483);
      if (lookahead == '\r')
        ADVANCE(483);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(484);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(483);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 484:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(483);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 485:
      if (lookahead == '\n')
        ADVANCE(483);
      if (lookahead == '\r')
        ADVANCE(485);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ':')
        ADVANCE(262);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(486);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(482);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 486:
      if (lookahead == 'n')
        SKIP(482);
      END_STATE();
    case 487:
      if (lookahead == '\n')
        ADVANCE(488);
      if (lookahead == '\r')
        ADVANCE(492);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(493);
      if (lookahead == 'd')
        ADVANCE(494);
      if (lookahead == 'w')
        ADVANCE(468);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(487);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      END_STATE();
    case 488:
      if (lookahead == '\n')
        ADVANCE(488);
      if (lookahead == '\r')
        ADVANCE(488);
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
        ADVANCE(489);
      if (lookahead == 'd')
        ADVANCE(490);
      if (lookahead == 'w')
        ADVANCE(459);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(488);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 489:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(488);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 491:
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
    case 492:
      if (lookahead == '\n')
        ADVANCE(488);
      if (lookahead == '\r')
        ADVANCE(492);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(493);
      if (lookahead == 'd')
        ADVANCE(494);
      if (lookahead == 'w')
        ADVANCE(468);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(487);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      END_STATE();
    case 493:
      if (lookahead == 'n')
        SKIP(487);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'o')
        ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '\'')
        ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 496:
      if (lookahead == '\t')
        SKIP(496);
      if (lookahead == '\n')
        ADVANCE(497);
      if (lookahead == '\r')
        ADVANCE(502);
      if (lookahead == ' ')
        ADVANCE(503);
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
        ADVANCE(254);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(403);
      if (lookahead == '.')
        ADVANCE(256);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(404);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(405);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == '[')
        ADVANCE(504);
      if (lookahead == '\\')
        ADVANCE(505);
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
        ADVANCE(506);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 497:
      if (lookahead == '\t')
        ADVANCE(497);
      if (lookahead == '\n')
        ADVANCE(497);
      if (lookahead == '\r')
        ADVANCE(497);
      if (lookahead == ' ')
        ADVANCE(498);
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
        ADVANCE(351);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(352);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(353);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(499);
      if (lookahead == '\\')
        ADVANCE(500);
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
        ADVANCE(501);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(497);
      if (lookahead == '\n')
        ADVANCE(497);
      if (lookahead == '\r')
        ADVANCE(497);
      if (lookahead == ' ')
        ADVANCE(498);
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
        ADVANCE(351);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(352);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(353);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(499);
      if (lookahead == '\\')
        ADVANCE(500);
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
        ADVANCE(501);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(497);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 502:
      if (lookahead == '\t')
        SKIP(496);
      if (lookahead == '\n')
        ADVANCE(497);
      if (lookahead == '\r')
        ADVANCE(502);
      if (lookahead == ' ')
        ADVANCE(503);
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
        ADVANCE(254);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(403);
      if (lookahead == '.')
        ADVANCE(256);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(404);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(405);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == '[')
        ADVANCE(504);
      if (lookahead == '\\')
        ADVANCE(505);
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
        ADVANCE(506);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      END_STATE();
    case 507:
      if (lookahead == '\t')
        ADVANCE(508);
      if (lookahead == '\n')
        ADVANCE(509);
      if (lookahead == 11)
        ADVANCE(97);
      if (lookahead == '\r')
        ADVANCE(514);
      if (lookahead == ' ')
        ADVANCE(503);
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
        ADVANCE(254);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(403);
      if (lookahead == '.')
        ADVANCE(256);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(404);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(405);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == '[')
        ADVANCE(504);
      if (lookahead == '\\')
        ADVANCE(505);
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
        ADVANCE(506);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym__tab);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(510);
      if (lookahead == '\n')
        ADVANCE(509);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(511);
      if (lookahead == ' ')
        ADVANCE(512);
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
        ADVANCE(351);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(352);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(353);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(499);
      if (lookahead == '\\')
        ADVANCE(513);
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
        ADVANCE(501);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(510);
      if (lookahead == '\n')
        ADVANCE(509);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(511);
      if (lookahead == ' ')
        ADVANCE(512);
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
        ADVANCE(351);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(352);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(353);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(499);
      if (lookahead == '\\')
        ADVANCE(513);
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
        ADVANCE(501);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 511:
      if (lookahead == '\t')
        ADVANCE(510);
      if (lookahead == '\n')
        ADVANCE(509);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(511);
      if (lookahead == ' ')
        ADVANCE(512);
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
        ADVANCE(351);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(352);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(353);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(499);
      if (lookahead == '\\')
        ADVANCE(513);
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
        ADVANCE(501);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(510);
      if (lookahead == '\n')
        ADVANCE(509);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(511);
      if (lookahead == ' ')
        ADVANCE(512);
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
        ADVANCE(351);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(352);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(353);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(499);
      if (lookahead == '\\')
        ADVANCE(513);
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
        ADVANCE(501);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(511);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 514:
      if (lookahead == '\t')
        ADVANCE(508);
      if (lookahead == '\n')
        ADVANCE(509);
      if (lookahead == 11)
        ADVANCE(97);
      if (lookahead == '\r')
        ADVANCE(514);
      if (lookahead == ' ')
        ADVANCE(503);
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
        ADVANCE(254);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(403);
      if (lookahead == '.')
        ADVANCE(256);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(404);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(405);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == '[')
        ADVANCE(504);
      if (lookahead == '\\')
        ADVANCE(505);
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
        ADVANCE(506);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 515:
      if (lookahead == '\n')
        ADVANCE(516);
      if (lookahead == '\r')
        ADVANCE(518);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(519);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(515);
      END_STATE();
    case 516:
      if (lookahead == '\n')
        ADVANCE(516);
      if (lookahead == '\r')
        ADVANCE(516);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(517);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(516);
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
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(519);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(515);
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
        ADVANCE(254);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(403);
      if (lookahead == '.')
        ADVANCE(256);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == ':')
        ADVANCE(404);
      if (lookahead == '<')
        ADVANCE(405);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(524);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '_')
        ADVANCE(481);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '~')
        ADVANCE(171);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(520);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 521:
      if (lookahead == '\n')
        ADVANCE(521);
      if (lookahead == '\r')
        ADVANCE(521);
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
        ADVANCE(351);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ':')
        ADVANCE(352);
      if (lookahead == '<')
        ADVANCE(353);
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
        ADVANCE(522);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(477);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '~')
        ADVANCE(86);
      if (lookahead == 8902)
        ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(521);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
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
        ADVANCE(254);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(403);
      if (lookahead == '.')
        ADVANCE(256);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == ':')
        ADVANCE(404);
      if (lookahead == '<')
        ADVANCE(405);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(524);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '_')
        ADVANCE(481);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '~')
        ADVANCE(171);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(520);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
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
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ':')
        ADVANCE(262);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(529);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(525);
      END_STATE();
    case 526:
      if (lookahead == '\n')
        ADVANCE(526);
      if (lookahead == '\r')
        ADVANCE(526);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(527);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(526);
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
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ':')
        ADVANCE(262);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(529);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(525);
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
      if (lookahead == '(')
        ADVANCE(254);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == ':')
        ADVANCE(262);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(534);
      if (lookahead == '_')
        ADVANCE(481);
      if (lookahead == '~')
        ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(530);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
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
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '[')
        ADVANCE(72);
      if (lookahead == '\\')
        ADVANCE(532);
      if (lookahead == '_')
        ADVANCE(477);
      if (lookahead == '~')
        ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(531);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (('a' <= lookahead && lookahead <= 'z'))
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
      if (lookahead == '(')
        ADVANCE(254);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == ':')
        ADVANCE(262);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(534);
      if (lookahead == '_')
        ADVANCE(481);
      if (lookahead == '~')
        ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(530);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 534:
      if (lookahead == 'n')
        SKIP(530);
      END_STATE();
    case 535:
      if (lookahead == '\n')
        ADVANCE(536);
      if (lookahead == '\r')
        ADVANCE(538);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == ':')
        ADVANCE(262);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(539);
      if (lookahead == 'd')
        ADVANCE(494);
      if (lookahead == 'w')
        ADVANCE(468);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(535);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      END_STATE();
    case 536:
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
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(537);
      if (lookahead == 'd')
        ADVANCE(490);
      if (lookahead == 'w')
        ADVANCE(459);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(536);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead != 0)
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
      if (lookahead == '\n')
        ADVANCE(536);
      if (lookahead == '\r')
        ADVANCE(538);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == ':')
        ADVANCE(262);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(539);
      if (lookahead == 'd')
        ADVANCE(494);
      if (lookahead == 'w')
        ADVANCE(468);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(535);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      END_STATE();
    case 539:
      if (lookahead == 'n')
        SKIP(535);
      END_STATE();
    case 540:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(541);
      if (lookahead == '\r')
        ADVANCE(543);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == '\\')
        SKIP(544);
      if (lookahead == 'c')
        ADVANCE(265);
      if (lookahead == 'd')
        ADVANCE(271);
      if (lookahead == 'f')
        ADVANCE(281);
      if (lookahead == 'i')
        ADVANCE(288);
      if (lookahead == 'n')
        ADVANCE(312);
      if (lookahead == 't')
        ADVANCE(319);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(540);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      END_STATE();
    case 541:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(541);
      if (lookahead == '\r')
        ADVANCE(541);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == '\\')
        ADVANCE(542);
      if (lookahead == 'c')
        ADVANCE(194);
      if (lookahead == 'd')
        ADVANCE(200);
      if (lookahead == 'f')
        ADVANCE(210);
      if (lookahead == 'i')
        ADVANCE(217);
      if (lookahead == 'n')
        ADVANCE(241);
      if (lookahead == 't')
        ADVANCE(248);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(541);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
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
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(541);
      if (lookahead == '\r')
        ADVANCE(543);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == '\\')
        SKIP(544);
      if (lookahead == 'c')
        ADVANCE(265);
      if (lookahead == 'd')
        ADVANCE(271);
      if (lookahead == 'f')
        ADVANCE(281);
      if (lookahead == 'i')
        ADVANCE(288);
      if (lookahead == 'n')
        ADVANCE(312);
      if (lookahead == 't')
        ADVANCE(319);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(540);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      END_STATE();
    case 544:
      if (lookahead == 'n')
        SKIP(540);
      END_STATE();
    case 545:
      if (lookahead == '\n')
        ADVANCE(546);
      if (lookahead == '\r')
        ADVANCE(556);
      if (lookahead == '(')
        ADVANCE(254);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(557);
      if (lookahead == 'a')
        ADVANCE(558);
      if (lookahead == 'h')
        ADVANCE(560);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(545);
      END_STATE();
    case 546:
      if (lookahead == '\n')
        ADVANCE(546);
      if (lookahead == '\r')
        ADVANCE(546);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(547);
      if (lookahead == 'a')
        ADVANCE(548);
      if (lookahead == 'h')
        ADVANCE(550);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(546);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 547:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(546);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 548:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(549);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 550:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(551);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 551:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(552);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 552:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(553);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 553:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(554);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 554:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(555);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_hiding);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 556:
      if (lookahead == '\n')
        ADVANCE(546);
      if (lookahead == '\r')
        ADVANCE(556);
      if (lookahead == '(')
        ADVANCE(254);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(557);
      if (lookahead == 'a')
        ADVANCE(558);
      if (lookahead == 'h')
        ADVANCE(560);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(545);
      END_STATE();
    case 557:
      if (lookahead == 'n')
        SKIP(545);
      END_STATE();
    case 558:
      if (lookahead == 's')
        ADVANCE(559);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 560:
      if (lookahead == 'i')
        ADVANCE(561);
      END_STATE();
    case 561:
      if (lookahead == 'd')
        ADVANCE(562);
      END_STATE();
    case 562:
      if (lookahead == 'i')
        ADVANCE(563);
      END_STATE();
    case 563:
      if (lookahead == 'n')
        ADVANCE(564);
      END_STATE();
    case 564:
      if (lookahead == 'g')
        ADVANCE(565);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_hiding);
      END_STATE();
    case 566:
      if (lookahead == '\n')
        ADVANCE(567);
      if (lookahead == '\r')
        ADVANCE(570);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '(')
        ADVANCE(254);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(479);
      if (lookahead == '.')
        ADVANCE(571);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '\\')
        SKIP(572);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(566);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 567:
      if (lookahead == '\n')
        ADVANCE(567);
      if (lookahead == '\r')
        ADVANCE(567);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(475);
      if (lookahead == '.')
        ADVANCE(568);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '\\')
        ADVANCE(569);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(567);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 568:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(32);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 569:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(567);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 570:
      if (lookahead == '\n')
        ADVANCE(567);
      if (lookahead == '\r')
        ADVANCE(570);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '(')
        ADVANCE(254);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(479);
      if (lookahead == '.')
        ADVANCE(571);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '\\')
        SKIP(572);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(566);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 571:
      if (lookahead == '.')
        ADVANCE(117);
      END_STATE();
    case 572:
      if (lookahead == 'n')
        SKIP(566);
      END_STATE();
    case 573:
      if (lookahead == '\n')
        ADVANCE(574);
      if (lookahead == '\r')
        ADVANCE(576);
      if (lookahead == '(')
        ADVANCE(254);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ':')
        ADVANCE(262);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '\\')
        SKIP(577);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == 'w')
        ADVANCE(468);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(573);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 574:
      if (lookahead == '\n')
        ADVANCE(574);
      if (lookahead == '\r')
        ADVANCE(574);
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
        ADVANCE(575);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == 'w')
        ADVANCE(459);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(574);
      if (('_' <= lookahead && lookahead <= 'z'))
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
      if (lookahead == '(')
        ADVANCE(254);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ':')
        ADVANCE(262);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '\\')
        SKIP(577);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == 'w')
        ADVANCE(468);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(573);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 577:
      if (lookahead == 'n')
        SKIP(573);
      END_STATE();
    case 578:
      if (lookahead == '\n')
        ADVANCE(579);
      if (lookahead == '\r')
        ADVANCE(581);
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
        ADVANCE(403);
      if (lookahead == '.')
        ADVANCE(256);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(405);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(582);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(578);
      END_STATE();
    case 579:
      if (lookahead == '\n')
        ADVANCE(579);
      if (lookahead == '\r')
        ADVANCE(579);
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
        ADVANCE(351);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(353);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(580);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == 8902)
        ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(579);
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
      if (lookahead == '\n')
        ADVANCE(579);
      if (lookahead == '\r')
        ADVANCE(581);
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
        ADVANCE(403);
      if (lookahead == '.')
        ADVANCE(256);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(405);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(582);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(578);
      END_STATE();
    case 582:
      if (lookahead == 'n')
        SKIP(578);
      END_STATE();
    case 583:
      if (lookahead == '\n')
        ADVANCE(584);
      if (lookahead == '\r')
        ADVANCE(586);
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
        ADVANCE(403);
      if (lookahead == '.')
        ADVANCE(256);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(404);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(405);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(587);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(583);
      END_STATE();
    case 584:
      if (lookahead == '\n')
        ADVANCE(584);
      if (lookahead == '\r')
        ADVANCE(584);
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
        ADVANCE(351);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(352);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(353);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(585);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == 8902)
        ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(584);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 585:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(584);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 586:
      if (lookahead == '\n')
        ADVANCE(584);
      if (lookahead == '\r')
        ADVANCE(586);
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
        ADVANCE(403);
      if (lookahead == '.')
        ADVANCE(256);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(404);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(405);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(587);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(583);
      END_STATE();
    case 587:
      if (lookahead == 'n')
        SKIP(583);
      END_STATE();
    case 588:
      if (lookahead == '\n')
        ADVANCE(589);
      if (lookahead == '\r')
        ADVANCE(591);
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
        ADVANCE(254);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(403);
      if (lookahead == '.')
        ADVANCE(256);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == ':')
        ADVANCE(404);
      if (lookahead == '<')
        ADVANCE(405);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(592);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '_')
        ADVANCE(481);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '~')
        ADVANCE(171);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(588);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 589:
      if (lookahead == '\n')
        ADVANCE(589);
      if (lookahead == '\r')
        ADVANCE(589);
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
        ADVANCE(351);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ':')
        ADVANCE(352);
      if (lookahead == '<')
        ADVANCE(353);
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
        ADVANCE(590);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(477);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '~')
        ADVANCE(86);
      if (lookahead == 8902)
        ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(589);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 590:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(589);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 591:
      if (lookahead == '\n')
        ADVANCE(589);
      if (lookahead == '\r')
        ADVANCE(591);
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
        ADVANCE(254);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(403);
      if (lookahead == '.')
        ADVANCE(256);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == ':')
        ADVANCE(404);
      if (lookahead == '<')
        ADVANCE(405);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(592);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '_')
        ADVANCE(481);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '~')
        ADVANCE(171);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(588);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 592:
      if (lookahead == 'n')
        SKIP(588);
      END_STATE();
    case 593:
      if (lookahead == '\n')
        ADVANCE(594);
      if (lookahead == '\r')
        ADVANCE(596);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(597);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(593);
      END_STATE();
    case 594:
      if (lookahead == '\n')
        ADVANCE(594);
      if (lookahead == '\r')
        ADVANCE(594);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(595);
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
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(597);
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
        ADVANCE(609);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(254);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '\\')
        SKIP(610);
      if (lookahead == 'd')
        ADVANCE(611);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(598);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 599:
      if (lookahead == '\n')
        ADVANCE(599);
      if (lookahead == '\r')
        ADVANCE(599);
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
        ADVANCE(600);
      if (lookahead == 'd')
        ADVANCE(601);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(599);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
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
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(602);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(603);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(604);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'v')
        ADVANCE(605);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(606);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(608);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 608:
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
    case 609:
      if (lookahead == '\n')
        ADVANCE(599);
      if (lookahead == '\r')
        ADVANCE(609);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(254);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '\\')
        SKIP(610);
      if (lookahead == 'd')
        ADVANCE(611);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(598);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 610:
      if (lookahead == 'n')
        SKIP(598);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'e')
        ADVANCE(612);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'r')
        ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'i')
        ADVANCE(614);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'v')
        ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'i')
        ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'n')
        ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'g')
        ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '\'')
        ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 619:
      if (lookahead == '\n')
        ADVANCE(620);
      if (lookahead == '\r')
        ADVANCE(630);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '\\')
        SKIP(631);
      if (lookahead == 'd')
        ADVANCE(632);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(619);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      END_STATE();
    case 620:
      if (lookahead == '\n')
        ADVANCE(620);
      if (lookahead == '\r')
        ADVANCE(620);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '\\')
        ADVANCE(621);
      if (lookahead == 'd')
        ADVANCE(622);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(620);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 621:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(620);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 622:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(623);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 623:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(624);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 624:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(625);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 625:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'v')
        ADVANCE(626);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 626:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(627);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 627:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(628);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 628:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(629);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 630:
      if (lookahead == '\n')
        ADVANCE(620);
      if (lookahead == '\r')
        ADVANCE(630);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '\\')
        SKIP(631);
      if (lookahead == 'd')
        ADVANCE(632);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(619);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      END_STATE();
    case 631:
      if (lookahead == 'n')
        SKIP(619);
      END_STATE();
    case 632:
      if (lookahead == 'e')
        ADVANCE(633);
      END_STATE();
    case 633:
      if (lookahead == 'r')
        ADVANCE(634);
      END_STATE();
    case 634:
      if (lookahead == 'i')
        ADVANCE(635);
      END_STATE();
    case 635:
      if (lookahead == 'v')
        ADVANCE(636);
      END_STATE();
    case 636:
      if (lookahead == 'i')
        ADVANCE(637);
      END_STATE();
    case 637:
      if (lookahead == 'n')
        ADVANCE(638);
      END_STATE();
    case 638:
      if (lookahead == 'g')
        ADVANCE(639);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_deriving);
      END_STATE();
    case 640:
      if (lookahead == '\n')
        ADVANCE(641);
      if (lookahead == '\r')
        ADVANCE(643);
      if (lookahead == '(')
        ADVANCE(254);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '\\')
        SKIP(644);
      if (lookahead == 'd')
        ADVANCE(611);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(640);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 641:
      if (lookahead == '\n')
        ADVANCE(641);
      if (lookahead == '\r')
        ADVANCE(641);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '\\')
        ADVANCE(642);
      if (lookahead == 'd')
        ADVANCE(601);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(641);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 642:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(641);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 643:
      if (lookahead == '\n')
        ADVANCE(641);
      if (lookahead == '\r')
        ADVANCE(643);
      if (lookahead == '(')
        ADVANCE(254);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '\\')
        SKIP(644);
      if (lookahead == 'd')
        ADVANCE(611);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(640);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 644:
      if (lookahead == 'n')
        SKIP(640);
      END_STATE();
    case 645:
      if (lookahead == '\n')
        ADVANCE(646);
      if (lookahead == '\r')
        ADVANCE(698);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '&')
        ADVANCE(104);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == 'A')
        ADVANCE(699);
      if (lookahead == 'B')
        ADVANCE(702);
      if (lookahead == 'C')
        ADVANCE(706);
      if (lookahead == 'D')
        ADVANCE(710);
      if (lookahead == 'E')
        ADVANCE(720);
      if (lookahead == 'F')
        ADVANCE(731);
      if (lookahead == 'G')
        ADVANCE(734);
      if (lookahead == 'H')
        ADVANCE(735);
      if (lookahead == 'L')
        ADVANCE(736);
      if (lookahead == 'N')
        ADVANCE(737);
      if (lookahead == 'O')
        ADVANCE(738);
      if (lookahead == 'R')
        ADVANCE(739);
      if (lookahead == 'S')
        ADVANCE(740);
      if (lookahead == 'U')
        ADVANCE(741);
      if (lookahead == 'V')
        ADVANCE(742);
      if (lookahead == 'X')
        ADVANCE(743);
      if (lookahead == '\\')
        ADVANCE(505);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == 'a')
        ADVANCE(744);
      if (lookahead == 'b')
        ADVANCE(745);
      if (lookahead == 'f')
        ADVANCE(746);
      if (lookahead == 'n')
        ADVANCE(164);
      if (lookahead == 'o')
        ADVANCE(747);
      if (lookahead == 'r')
        ADVANCE(165);
      if (lookahead == 't')
        ADVANCE(166);
      if (lookahead == 'v')
        ADVANCE(167);
      if (lookahead == 'x')
        ADVANCE(748);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(645);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(506);
      END_STATE();
    case 646:
      if (lookahead == '\n')
        ADVANCE(646);
      if (lookahead == '\r')
        ADVANCE(646);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '&')
        ADVANCE(14);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == 'A')
        ADVANCE(647);
      if (lookahead == 'B')
        ADVANCE(650);
      if (lookahead == 'C')
        ADVANCE(654);
      if (lookahead == 'D')
        ADVANCE(658);
      if (lookahead == 'E')
        ADVANCE(668);
      if (lookahead == 'F')
        ADVANCE(679);
      if (lookahead == 'G')
        ADVANCE(682);
      if (lookahead == 'H')
        ADVANCE(683);
      if (lookahead == 'L')
        ADVANCE(684);
      if (lookahead == 'N')
        ADVANCE(685);
      if (lookahead == 'O')
        ADVANCE(686);
      if (lookahead == 'R')
        ADVANCE(687);
      if (lookahead == 'S')
        ADVANCE(688);
      if (lookahead == 'U')
        ADVANCE(689);
      if (lookahead == 'V')
        ADVANCE(690);
      if (lookahead == 'X')
        ADVANCE(691);
      if (lookahead == '\\')
        ADVANCE(692);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == 'a')
        ADVANCE(693);
      if (lookahead == 'b')
        ADVANCE(694);
      if (lookahead == 'f')
        ADVANCE(695);
      if (lookahead == 'n')
        ADVANCE(79);
      if (lookahead == 'o')
        ADVANCE(696);
      if (lookahead == 'r')
        ADVANCE(80);
      if (lookahead == 't')
        ADVANCE(81);
      if (lookahead == 'v')
        ADVANCE(82);
      if (lookahead == 'x')
        ADVANCE(697);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(501);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 647:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(648);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 648:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'K')
        ADVANCE(649);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_ACK);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 650:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(651);
      if (lookahead == 'S')
        ADVANCE(653);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 651:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'L')
        ADVANCE(652);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_BEL);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_BS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 654:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(655);
      if (lookahead == 'R')
        ADVANCE(657);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 655:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'N')
        ADVANCE(656);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_CAN);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 658:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(659);
      if (lookahead == 'E')
        ADVANCE(664);
      if (lookahead == 'L')
        ADVANCE(666);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 659:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '1')
        ADVANCE(660);
      if (lookahead == '2')
        ADVANCE(661);
      if (lookahead == '3')
        ADVANCE(662);
      if (lookahead == '4')
        ADVANCE(663);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_DC1);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_DC2);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_DC3);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_DC4);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 664:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'L')
        ADVANCE(665);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_DEL);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 666:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(667);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_DLE);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 668:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'M')
        ADVANCE(669);
      if (lookahead == 'N')
        ADVANCE(670);
      if (lookahead == 'O')
        ADVANCE(672);
      if (lookahead == 'S')
        ADVANCE(674);
      if (lookahead == 'T')
        ADVANCE(676);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_EM);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 670:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'Q')
        ADVANCE(671);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_ENQ);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 672:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(673);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_EOT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 674:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(675);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_ESC);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 676:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'B')
        ADVANCE(677);
      if (lookahead == 'X')
        ADVANCE(678);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_ETB);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_ETX);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 679:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(680);
      if (lookahead == 'S')
        ADVANCE(681);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_FS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 682:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(45);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 683:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(47);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 684:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(49);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 685:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(51);
      if (lookahead == 'U')
        ADVANCE(53);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 687:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(56);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 688:
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
    case 689:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(69);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 690:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(71);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_X);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(646);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_a);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 698:
      if (lookahead == '\n')
        ADVANCE(646);
      if (lookahead == '\r')
        ADVANCE(698);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '&')
        ADVANCE(104);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == 'A')
        ADVANCE(699);
      if (lookahead == 'B')
        ADVANCE(702);
      if (lookahead == 'C')
        ADVANCE(706);
      if (lookahead == 'D')
        ADVANCE(710);
      if (lookahead == 'E')
        ADVANCE(720);
      if (lookahead == 'F')
        ADVANCE(731);
      if (lookahead == 'G')
        ADVANCE(734);
      if (lookahead == 'H')
        ADVANCE(735);
      if (lookahead == 'L')
        ADVANCE(736);
      if (lookahead == 'N')
        ADVANCE(737);
      if (lookahead == 'O')
        ADVANCE(738);
      if (lookahead == 'R')
        ADVANCE(739);
      if (lookahead == 'S')
        ADVANCE(740);
      if (lookahead == 'U')
        ADVANCE(741);
      if (lookahead == 'V')
        ADVANCE(742);
      if (lookahead == 'X')
        ADVANCE(743);
      if (lookahead == '\\')
        ADVANCE(505);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == 'a')
        ADVANCE(744);
      if (lookahead == 'b')
        ADVANCE(745);
      if (lookahead == 'f')
        ADVANCE(746);
      if (lookahead == 'n')
        ADVANCE(164);
      if (lookahead == 'o')
        ADVANCE(747);
      if (lookahead == 'r')
        ADVANCE(165);
      if (lookahead == 't')
        ADVANCE(166);
      if (lookahead == 'v')
        ADVANCE(167);
      if (lookahead == 'x')
        ADVANCE(748);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(645);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(506);
      END_STATE();
    case 699:
      if (lookahead == 'C')
        ADVANCE(700);
      END_STATE();
    case 700:
      if (lookahead == 'K')
        ADVANCE(701);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_ACK);
      END_STATE();
    case 702:
      if (lookahead == 'E')
        ADVANCE(703);
      if (lookahead == 'S')
        ADVANCE(705);
      END_STATE();
    case 703:
      if (lookahead == 'L')
        ADVANCE(704);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_BEL);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_BS);
      END_STATE();
    case 706:
      if (lookahead == 'A')
        ADVANCE(707);
      if (lookahead == 'R')
        ADVANCE(709);
      END_STATE();
    case 707:
      if (lookahead == 'N')
        ADVANCE(708);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_CAN);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    case 710:
      if (lookahead == 'C')
        ADVANCE(711);
      if (lookahead == 'E')
        ADVANCE(716);
      if (lookahead == 'L')
        ADVANCE(718);
      END_STATE();
    case 711:
      if (lookahead == '1')
        ADVANCE(712);
      if (lookahead == '2')
        ADVANCE(713);
      if (lookahead == '3')
        ADVANCE(714);
      if (lookahead == '4')
        ADVANCE(715);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_DC1);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_DC2);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_DC3);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_DC4);
      END_STATE();
    case 716:
      if (lookahead == 'L')
        ADVANCE(717);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_DEL);
      END_STATE();
    case 718:
      if (lookahead == 'E')
        ADVANCE(719);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_DLE);
      END_STATE();
    case 720:
      if (lookahead == 'M')
        ADVANCE(721);
      if (lookahead == 'N')
        ADVANCE(722);
      if (lookahead == 'O')
        ADVANCE(724);
      if (lookahead == 'S')
        ADVANCE(726);
      if (lookahead == 'T')
        ADVANCE(728);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_EM);
      END_STATE();
    case 722:
      if (lookahead == 'Q')
        ADVANCE(723);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_ENQ);
      END_STATE();
    case 724:
      if (lookahead == 'T')
        ADVANCE(725);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_EOT);
      END_STATE();
    case 726:
      if (lookahead == 'C')
        ADVANCE(727);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_ESC);
      END_STATE();
    case 728:
      if (lookahead == 'B')
        ADVANCE(729);
      if (lookahead == 'X')
        ADVANCE(730);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_ETB);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_ETX);
      END_STATE();
    case 731:
      if (lookahead == 'F')
        ADVANCE(732);
      if (lookahead == 'S')
        ADVANCE(733);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_FF);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_FS);
      END_STATE();
    case 734:
      if (lookahead == 'S')
        ADVANCE(130);
      END_STATE();
    case 735:
      if (lookahead == 'T')
        ADVANCE(132);
      END_STATE();
    case 736:
      if (lookahead == 'F')
        ADVANCE(134);
      END_STATE();
    case 737:
      if (lookahead == 'A')
        ADVANCE(136);
      if (lookahead == 'U')
        ADVANCE(138);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 739:
      if (lookahead == 'S')
        ADVANCE(141);
      END_STATE();
    case 740:
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
    case 741:
      if (lookahead == 'S')
        ADVANCE(154);
      END_STATE();
    case 742:
      if (lookahead == 'T')
        ADVANCE(156);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 749:
      if (lookahead == '\t')
        ADVANCE(508);
      if (lookahead == '\n')
        ADVANCE(750);
      if (lookahead == 11)
        ADVANCE(97);
      if (lookahead == '\r')
        ADVANCE(761);
      if (lookahead == ' ')
        ADVANCE(503);
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
        ADVANCE(254);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(403);
      if (lookahead == '.')
        ADVANCE(256);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(404);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(405);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == 'A')
        ADVANCE(762);
      if (lookahead == 'B')
        ADVANCE(763);
      if (lookahead == 'C')
        ADVANCE(764);
      if (lookahead == 'D')
        ADVANCE(765);
      if (lookahead == 'E')
        ADVANCE(766);
      if (lookahead == 'F')
        ADVANCE(767);
      if (lookahead == 'G')
        ADVANCE(129);
      if (lookahead == 'H')
        ADVANCE(131);
      if (lookahead == 'L')
        ADVANCE(133);
      if (lookahead == 'N')
        ADVANCE(135);
      if (lookahead == 'O')
        ADVANCE(738);
      if (lookahead == 'R')
        ADVANCE(140);
      if (lookahead == 'S')
        ADVANCE(142);
      if (lookahead == 'U')
        ADVANCE(153);
      if (lookahead == 'V')
        ADVANCE(155);
      if (lookahead == 'X')
        ADVANCE(743);
      if (lookahead == '[')
        ADVANCE(504);
      if (lookahead == '\\')
        ADVANCE(505);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '_')
        ADVANCE(162);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == 'a')
        ADVANCE(744);
      if (lookahead == 'b')
        ADVANCE(745);
      if (lookahead == 'f')
        ADVANCE(746);
      if (lookahead == 'n')
        ADVANCE(164);
      if (lookahead == 'o')
        ADVANCE(747);
      if (lookahead == 'r')
        ADVANCE(165);
      if (lookahead == 't')
        ADVANCE(166);
      if (lookahead == 'v')
        ADVANCE(167);
      if (lookahead == 'x')
        ADVANCE(748);
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
        ADVANCE(506);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(751);
      if (lookahead == '\n')
        ADVANCE(750);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(752);
      if (lookahead == ' ')
        ADVANCE(753);
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
        ADVANCE(351);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(352);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(353);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == 'A')
        ADVANCE(754);
      if (lookahead == 'B')
        ADVANCE(755);
      if (lookahead == 'C')
        ADVANCE(756);
      if (lookahead == 'D')
        ADVANCE(757);
      if (lookahead == 'E')
        ADVANCE(758);
      if (lookahead == 'F')
        ADVANCE(759);
      if (lookahead == 'G')
        ADVANCE(44);
      if (lookahead == 'H')
        ADVANCE(46);
      if (lookahead == 'L')
        ADVANCE(48);
      if (lookahead == 'N')
        ADVANCE(50);
      if (lookahead == 'O')
        ADVANCE(686);
      if (lookahead == 'R')
        ADVANCE(55);
      if (lookahead == 'S')
        ADVANCE(57);
      if (lookahead == 'U')
        ADVANCE(68);
      if (lookahead == 'V')
        ADVANCE(70);
      if (lookahead == 'X')
        ADVANCE(691);
      if (lookahead == '[')
        ADVANCE(499);
      if (lookahead == '\\')
        ADVANCE(760);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(77);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == 'a')
        ADVANCE(693);
      if (lookahead == 'b')
        ADVANCE(694);
      if (lookahead == 'f')
        ADVANCE(695);
      if (lookahead == 'n')
        ADVANCE(79);
      if (lookahead == 'o')
        ADVANCE(696);
      if (lookahead == 'r')
        ADVANCE(80);
      if (lookahead == 't')
        ADVANCE(81);
      if (lookahead == 'v')
        ADVANCE(82);
      if (lookahead == 'x')
        ADVANCE(697);
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
        ADVANCE(501);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(751);
      if (lookahead == '\n')
        ADVANCE(750);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(752);
      if (lookahead == ' ')
        ADVANCE(753);
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
        ADVANCE(351);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(352);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(353);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == 'A')
        ADVANCE(754);
      if (lookahead == 'B')
        ADVANCE(755);
      if (lookahead == 'C')
        ADVANCE(756);
      if (lookahead == 'D')
        ADVANCE(757);
      if (lookahead == 'E')
        ADVANCE(758);
      if (lookahead == 'F')
        ADVANCE(759);
      if (lookahead == 'G')
        ADVANCE(44);
      if (lookahead == 'H')
        ADVANCE(46);
      if (lookahead == 'L')
        ADVANCE(48);
      if (lookahead == 'N')
        ADVANCE(50);
      if (lookahead == 'O')
        ADVANCE(686);
      if (lookahead == 'R')
        ADVANCE(55);
      if (lookahead == 'S')
        ADVANCE(57);
      if (lookahead == 'U')
        ADVANCE(68);
      if (lookahead == 'V')
        ADVANCE(70);
      if (lookahead == 'X')
        ADVANCE(691);
      if (lookahead == '[')
        ADVANCE(499);
      if (lookahead == '\\')
        ADVANCE(760);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(77);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == 'a')
        ADVANCE(693);
      if (lookahead == 'b')
        ADVANCE(694);
      if (lookahead == 'f')
        ADVANCE(695);
      if (lookahead == 'n')
        ADVANCE(79);
      if (lookahead == 'o')
        ADVANCE(696);
      if (lookahead == 'r')
        ADVANCE(80);
      if (lookahead == 't')
        ADVANCE(81);
      if (lookahead == 'v')
        ADVANCE(82);
      if (lookahead == 'x')
        ADVANCE(697);
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
        ADVANCE(501);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 752:
      if (lookahead == '\t')
        ADVANCE(751);
      if (lookahead == '\n')
        ADVANCE(750);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(752);
      if (lookahead == ' ')
        ADVANCE(753);
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
        ADVANCE(351);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(352);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(353);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == 'A')
        ADVANCE(754);
      if (lookahead == 'B')
        ADVANCE(755);
      if (lookahead == 'C')
        ADVANCE(756);
      if (lookahead == 'D')
        ADVANCE(757);
      if (lookahead == 'E')
        ADVANCE(758);
      if (lookahead == 'F')
        ADVANCE(759);
      if (lookahead == 'G')
        ADVANCE(44);
      if (lookahead == 'H')
        ADVANCE(46);
      if (lookahead == 'L')
        ADVANCE(48);
      if (lookahead == 'N')
        ADVANCE(50);
      if (lookahead == 'O')
        ADVANCE(686);
      if (lookahead == 'R')
        ADVANCE(55);
      if (lookahead == 'S')
        ADVANCE(57);
      if (lookahead == 'U')
        ADVANCE(68);
      if (lookahead == 'V')
        ADVANCE(70);
      if (lookahead == 'X')
        ADVANCE(691);
      if (lookahead == '[')
        ADVANCE(499);
      if (lookahead == '\\')
        ADVANCE(760);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(77);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == 'a')
        ADVANCE(693);
      if (lookahead == 'b')
        ADVANCE(694);
      if (lookahead == 'f')
        ADVANCE(695);
      if (lookahead == 'n')
        ADVANCE(79);
      if (lookahead == 'o')
        ADVANCE(696);
      if (lookahead == 'r')
        ADVANCE(80);
      if (lookahead == 't')
        ADVANCE(81);
      if (lookahead == 'v')
        ADVANCE(82);
      if (lookahead == 'x')
        ADVANCE(697);
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
        ADVANCE(501);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(751);
      if (lookahead == '\n')
        ADVANCE(750);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(752);
      if (lookahead == ' ')
        ADVANCE(753);
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
        ADVANCE(351);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(352);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(353);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == 'A')
        ADVANCE(754);
      if (lookahead == 'B')
        ADVANCE(755);
      if (lookahead == 'C')
        ADVANCE(756);
      if (lookahead == 'D')
        ADVANCE(757);
      if (lookahead == 'E')
        ADVANCE(758);
      if (lookahead == 'F')
        ADVANCE(759);
      if (lookahead == 'G')
        ADVANCE(44);
      if (lookahead == 'H')
        ADVANCE(46);
      if (lookahead == 'L')
        ADVANCE(48);
      if (lookahead == 'N')
        ADVANCE(50);
      if (lookahead == 'O')
        ADVANCE(686);
      if (lookahead == 'R')
        ADVANCE(55);
      if (lookahead == 'S')
        ADVANCE(57);
      if (lookahead == 'U')
        ADVANCE(68);
      if (lookahead == 'V')
        ADVANCE(70);
      if (lookahead == 'X')
        ADVANCE(691);
      if (lookahead == '[')
        ADVANCE(499);
      if (lookahead == '\\')
        ADVANCE(760);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(77);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == 'a')
        ADVANCE(693);
      if (lookahead == 'b')
        ADVANCE(694);
      if (lookahead == 'f')
        ADVANCE(695);
      if (lookahead == 'n')
        ADVANCE(79);
      if (lookahead == 'o')
        ADVANCE(696);
      if (lookahead == 'r')
        ADVANCE(80);
      if (lookahead == 't')
        ADVANCE(81);
      if (lookahead == 'v')
        ADVANCE(82);
      if (lookahead == 'x')
        ADVANCE(697);
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
        ADVANCE(501);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(648);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(651);
      if (lookahead == 'S')
        ADVANCE(653);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(655);
      if (lookahead == 'R')
        ADVANCE(657);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(659);
      if (lookahead == 'E')
        ADVANCE(664);
      if (lookahead == 'L')
        ADVANCE(666);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'M')
        ADVANCE(669);
      if (lookahead == 'N')
        ADVANCE(670);
      if (lookahead == 'O')
        ADVANCE(672);
      if (lookahead == 'S')
        ADVANCE(674);
      if (lookahead == 'T')
        ADVANCE(676);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(680);
      if (lookahead == 'S')
        ADVANCE(681);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(752);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 761:
      if (lookahead == '\t')
        ADVANCE(508);
      if (lookahead == '\n')
        ADVANCE(750);
      if (lookahead == 11)
        ADVANCE(97);
      if (lookahead == '\r')
        ADVANCE(761);
      if (lookahead == ' ')
        ADVANCE(503);
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
        ADVANCE(254);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(403);
      if (lookahead == '.')
        ADVANCE(256);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(404);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(405);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == 'A')
        ADVANCE(762);
      if (lookahead == 'B')
        ADVANCE(763);
      if (lookahead == 'C')
        ADVANCE(764);
      if (lookahead == 'D')
        ADVANCE(765);
      if (lookahead == 'E')
        ADVANCE(766);
      if (lookahead == 'F')
        ADVANCE(767);
      if (lookahead == 'G')
        ADVANCE(129);
      if (lookahead == 'H')
        ADVANCE(131);
      if (lookahead == 'L')
        ADVANCE(133);
      if (lookahead == 'N')
        ADVANCE(135);
      if (lookahead == 'O')
        ADVANCE(738);
      if (lookahead == 'R')
        ADVANCE(140);
      if (lookahead == 'S')
        ADVANCE(142);
      if (lookahead == 'U')
        ADVANCE(153);
      if (lookahead == 'V')
        ADVANCE(155);
      if (lookahead == 'X')
        ADVANCE(743);
      if (lookahead == '[')
        ADVANCE(504);
      if (lookahead == '\\')
        ADVANCE(505);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '_')
        ADVANCE(162);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == 'a')
        ADVANCE(744);
      if (lookahead == 'b')
        ADVANCE(745);
      if (lookahead == 'f')
        ADVANCE(746);
      if (lookahead == 'n')
        ADVANCE(164);
      if (lookahead == 'o')
        ADVANCE(747);
      if (lookahead == 'r')
        ADVANCE(165);
      if (lookahead == 't')
        ADVANCE(166);
      if (lookahead == 'v')
        ADVANCE(167);
      if (lookahead == 'x')
        ADVANCE(748);
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
        ADVANCE(506);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(700);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'E')
        ADVANCE(703);
      if (lookahead == 'S')
        ADVANCE(705);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'A')
        ADVANCE(707);
      if (lookahead == 'R')
        ADVANCE(709);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(711);
      if (lookahead == 'E')
        ADVANCE(716);
      if (lookahead == 'L')
        ADVANCE(718);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'M')
        ADVANCE(721);
      if (lookahead == 'N')
        ADVANCE(722);
      if (lookahead == 'O')
        ADVANCE(724);
      if (lookahead == 'S')
        ADVANCE(726);
      if (lookahead == 'T')
        ADVANCE(728);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'F')
        ADVANCE(732);
      if (lookahead == 'S')
        ADVANCE(733);
      END_STATE();
    case 768:
      if (lookahead == '\n')
        ADVANCE(769);
      if (lookahead == '\r')
        ADVANCE(772);
      if (lookahead == '(')
        ADVANCE(106);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(479);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(773);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(768);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(774);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 769:
      if (lookahead == '\n')
        ADVANCE(769);
      if (lookahead == '\r')
        ADVANCE(769);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(475);
      if (lookahead == '[')
        ADVANCE(72);
      if (lookahead == '\\')
        ADVANCE(770);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(769);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(771);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 770:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(769);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym__constructor_pattern);
      if (lookahead == '\'')
        ADVANCE(771);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(771);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 772:
      if (lookahead == '\n')
        ADVANCE(769);
      if (lookahead == '\r')
        ADVANCE(772);
      if (lookahead == '(')
        ADVANCE(106);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(479);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(773);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(768);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(774);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 773:
      if (lookahead == 'n')
        SKIP(768);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym__constructor_pattern);
      if (lookahead == '\'')
        ADVANCE(774);
      if (lookahead == '.')
        ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(774);
      END_STATE();
    case 775:
      if (lookahead == '\n')
        ADVANCE(776);
      if (lookahead == '\r')
        ADVANCE(778);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '\\')
        SKIP(779);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(775);
      END_STATE();
    case 776:
      if (lookahead == '\n')
        ADVANCE(776);
      if (lookahead == '\r')
        ADVANCE(776);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '\\')
        ADVANCE(777);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(776);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 777:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(776);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 778:
      if (lookahead == '\n')
        ADVANCE(776);
      if (lookahead == '\r')
        ADVANCE(778);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '\\')
        SKIP(779);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(775);
      END_STATE();
    case 779:
      if (lookahead == 'n')
        SKIP(775);
      END_STATE();
    case 780:
      if (lookahead == '\n')
        ADVANCE(781);
      if (lookahead == '\r')
        ADVANCE(793);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '\\')
        SKIP(794);
      if (lookahead == 's')
        ADVANCE(795);
      if (lookahead == 'u')
        ADVANCE(799);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(780);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      END_STATE();
    case 781:
      if (lookahead == '\n')
        ADVANCE(781);
      if (lookahead == '\r')
        ADVANCE(781);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '\\')
        ADVANCE(782);
      if (lookahead == 's')
        ADVANCE(783);
      if (lookahead == 'u')
        ADVANCE(787);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(781);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 782:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(781);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(784);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(785);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(786);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 786:
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
    case 787:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(788);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(789);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(790);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(791);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(792);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 792:
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
    case 793:
      if (lookahead == '\n')
        ADVANCE(781);
      if (lookahead == '\r')
        ADVANCE(793);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '\\')
        SKIP(794);
      if (lookahead == 's')
        ADVANCE(795);
      if (lookahead == 'u')
        ADVANCE(799);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(780);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      END_STATE();
    case 794:
      if (lookahead == 'n')
        SKIP(780);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'a')
        ADVANCE(796);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'f')
        ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'e')
        ADVANCE(798);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(anon_sym_safe);
      if (lookahead == '\'')
        ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'n')
        ADVANCE(800);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 's')
        ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'a')
        ADVANCE(802);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'f')
        ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'e')
        ADVANCE(804);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(anon_sym_unsafe);
      if (lookahead == '\'')
        ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 805:
      if (lookahead == '\n')
        ADVANCE(806);
      if (lookahead == '\r')
        ADVANCE(808);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(479);
      if (lookahead == ':')
        ADVANCE(262);
      if (lookahead == '=')
        ADVANCE(406);
      if (lookahead == '\\')
        SKIP(809);
      if (lookahead == 'w')
        ADVANCE(468);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(805);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 806:
      if (lookahead == '\n')
        ADVANCE(806);
      if (lookahead == '\r')
        ADVANCE(806);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(475);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == '=')
        ADVANCE(354);
      if (lookahead == '\\')
        ADVANCE(807);
      if (lookahead == 'w')
        ADVANCE(459);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(806);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 807:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(806);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 808:
      if (lookahead == '\n')
        ADVANCE(806);
      if (lookahead == '\r')
        ADVANCE(808);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(479);
      if (lookahead == ':')
        ADVANCE(262);
      if (lookahead == '=')
        ADVANCE(406);
      if (lookahead == '\\')
        SKIP(809);
      if (lookahead == 'w')
        ADVANCE(468);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(805);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 809:
      if (lookahead == 'n')
        SKIP(805);
      END_STATE();
    case 810:
      if (lookahead == '\n')
        ADVANCE(811);
      if (lookahead == '\r')
        ADVANCE(813);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '\\')
        SKIP(814);
      if (lookahead == 'd')
        ADVANCE(611);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(810);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 811:
      if (lookahead == '\n')
        ADVANCE(811);
      if (lookahead == '\r')
        ADVANCE(811);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '\\')
        ADVANCE(812);
      if (lookahead == 'd')
        ADVANCE(601);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(811);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 812:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(811);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 813:
      if (lookahead == '\n')
        ADVANCE(811);
      if (lookahead == '\r')
        ADVANCE(813);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '\\')
        SKIP(814);
      if (lookahead == 'd')
        ADVANCE(611);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(810);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 814:
      if (lookahead == 'n')
        SKIP(810);
      END_STATE();
    case 815:
      if (lookahead == '\n')
        ADVANCE(816);
      if (lookahead == '\r')
        ADVANCE(818);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(819);
      if (lookahead == 'd')
        ADVANCE(632);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(815);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      END_STATE();
    case 816:
      if (lookahead == '\n')
        ADVANCE(816);
      if (lookahead == '\r')
        ADVANCE(816);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(817);
      if (lookahead == 'd')
        ADVANCE(622);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(816);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 817:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(816);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 818:
      if (lookahead == '\n')
        ADVANCE(816);
      if (lookahead == '\r')
        ADVANCE(818);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(819);
      if (lookahead == 'd')
        ADVANCE(632);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(815);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      END_STATE();
    case 819:
      if (lookahead == 'n')
        SKIP(815);
      END_STATE();
    case 820:
      if (lookahead == '\n')
        ADVANCE(821);
      if (lookahead == '\r')
        ADVANCE(823);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(824);
      if (lookahead == 'd')
        ADVANCE(632);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(820);
      END_STATE();
    case 821:
      if (lookahead == '\n')
        ADVANCE(821);
      if (lookahead == '\r')
        ADVANCE(821);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(822);
      if (lookahead == 'd')
        ADVANCE(622);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(821);
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
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(824);
      if (lookahead == 'd')
        ADVANCE(632);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(820);
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
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(829);
      if (lookahead == 'd')
        ADVANCE(632);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(825);
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
      if (lookahead == '\\')
        ADVANCE(827);
      if (lookahead == 'd')
        ADVANCE(622);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(826);
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
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(829);
      if (lookahead == 'd')
        ADVANCE(632);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(825);
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
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(834);
      if (lookahead == 'd')
        ADVANCE(611);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(830);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 831:
      if (lookahead == '\n')
        ADVANCE(831);
      if (lookahead == '\r')
        ADVANCE(831);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(832);
      if (lookahead == 'd')
        ADVANCE(601);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(831);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
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
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(834);
      if (lookahead == 'd')
        ADVANCE(611);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(830);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
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
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(839);
      if (lookahead == 'd')
        ADVANCE(611);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(835);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 836:
      if (lookahead == '\n')
        ADVANCE(836);
      if (lookahead == '\r')
        ADVANCE(836);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(39);
      if (lookahead == '\\')
        ADVANCE(837);
      if (lookahead == 'd')
        ADVANCE(601);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(836);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
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
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(839);
      if (lookahead == 'd')
        ADVANCE(611);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(835);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
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
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(844);
      if (lookahead == 'd')
        ADVANCE(611);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(840);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
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
      if (lookahead == '=')
        ADVANCE(39);
      if (lookahead == '\\')
        ADVANCE(842);
      if (lookahead == 'd')
        ADVANCE(601);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(841);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
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
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(844);
      if (lookahead == 'd')
        ADVANCE(611);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(840);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
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
        ADVANCE(479);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(849);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(845);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(774);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 846:
      if (lookahead == '\n')
        ADVANCE(846);
      if (lookahead == '\r')
        ADVANCE(846);
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
        ADVANCE(475);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == '=')
        ADVANCE(39);
      if (lookahead == '[')
        ADVANCE(72);
      if (lookahead == '\\')
        ADVANCE(847);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(846);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(771);
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
        ADVANCE(479);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(849);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(845);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(774);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
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
        ADVANCE(403);
      if (lookahead == '.')
        ADVANCE(256);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(404);
      if (lookahead == '<')
        ADVANCE(405);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(854);
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
        SKIP(850);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 851:
      if (lookahead == '\n')
        ADVANCE(851);
      if (lookahead == '\r')
        ADVANCE(851);
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
        ADVANCE(351);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(352);
      if (lookahead == '<')
        ADVANCE(353);
      if (lookahead == '=')
        ADVANCE(39);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(852);
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
        ADVANCE(851);
      if (('_' <= lookahead && lookahead <= 'z'))
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
        ADVANCE(403);
      if (lookahead == '.')
        ADVANCE(256);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(404);
      if (lookahead == '<')
        ADVANCE(405);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(854);
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
        SKIP(850);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
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
      if (lookahead == '(')
        ADVANCE(106);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(479);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(859);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(855);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(774);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 856:
      if (lookahead == '\n')
        ADVANCE(856);
      if (lookahead == '\r')
        ADVANCE(856);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(475);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '[')
        ADVANCE(72);
      if (lookahead == '\\')
        ADVANCE(857);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(856);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(771);
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
      if (lookahead == '(')
        ADVANCE(106);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(479);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(859);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(855);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(774);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
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
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == '[')
        ADVANCE(504);
      if (lookahead == '\\')
        ADVANCE(505);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '_')
        ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(860);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      END_STATE();
    case 861:
      if (lookahead == '\n')
        ADVANCE(861);
      if (lookahead == '\r')
        ADVANCE(861);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(499);
      if (lookahead == '\\')
        ADVANCE(862);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(861);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(anon_sym_BSLASH);
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
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == '[')
        ADVANCE(504);
      if (lookahead == '\\')
        ADVANCE(505);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '_')
        ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(860);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      END_STATE();
    case 864:
      if (lookahead == '\n')
        ADVANCE(865);
      if (lookahead == '\r')
        ADVANCE(868);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '\\')
        SKIP(869);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(864);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(870);
      END_STATE();
    case 865:
      if (lookahead == '\n')
        ADVANCE(865);
      if (lookahead == '\r')
        ADVANCE(865);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '\\')
        ADVANCE(866);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(867);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 866:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(865);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 868:
      if (lookahead == '\n')
        ADVANCE(865);
      if (lookahead == '\r')
        ADVANCE(868);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '\\')
        SKIP(869);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(864);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(870);
      END_STATE();
    case 869:
      if (lookahead == 'n')
        SKIP(864);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      END_STATE();
    case 871:
      if (lookahead == '\n')
        ADVANCE(872);
      if (lookahead == '\r')
        ADVANCE(875);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '\\')
        SKIP(876);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(871);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(877);
      END_STATE();
    case 872:
      if (lookahead == '\n')
        ADVANCE(872);
      if (lookahead == '\r')
        ADVANCE(872);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '\\')
        ADVANCE(873);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(872);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(874);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 873:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(872);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 875:
      if (lookahead == '\n')
        ADVANCE(872);
      if (lookahead == '\r')
        ADVANCE(875);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '\\')
        SKIP(876);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(871);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(877);
      END_STATE();
    case 876:
      if (lookahead == 'n')
        SKIP(871);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    case 878:
      if (lookahead == '\n')
        ADVANCE(879);
      if (lookahead == '\r')
        ADVANCE(881);
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
        ADVANCE(403);
      if (lookahead == '.')
        ADVANCE(256);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == ':')
        ADVANCE(404);
      if (lookahead == '<')
        ADVANCE(405);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(882);
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
        SKIP(878);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 879:
      if (lookahead == '\n')
        ADVANCE(879);
      if (lookahead == '\r')
        ADVANCE(879);
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
        ADVANCE(351);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ':')
        ADVANCE(352);
      if (lookahead == '<')
        ADVANCE(353);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(880);
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
        ADVANCE(879);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 880:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(879);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 881:
      if (lookahead == '\n')
        ADVANCE(879);
      if (lookahead == '\r')
        ADVANCE(881);
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
        ADVANCE(403);
      if (lookahead == '.')
        ADVANCE(256);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == ':')
        ADVANCE(404);
      if (lookahead == '<')
        ADVANCE(405);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(882);
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
        SKIP(878);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 882:
      if (lookahead == 'n')
        SKIP(878);
      END_STATE();
    case 883:
      if (lookahead == '\n')
        ADVANCE(884);
      if (lookahead == '\r')
        ADVANCE(886);
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
        ADVANCE(403);
      if (lookahead == '.')
        ADVANCE(256);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == ':')
        ADVANCE(404);
      if (lookahead == '<')
        ADVANCE(405);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(887);
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
        SKIP(883);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 884:
      if (lookahead == '\n')
        ADVANCE(884);
      if (lookahead == '\r')
        ADVANCE(884);
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
        ADVANCE(351);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ':')
        ADVANCE(352);
      if (lookahead == '<')
        ADVANCE(353);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(885);
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
        ADVANCE(884);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 885:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(884);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 886:
      if (lookahead == '\n')
        ADVANCE(884);
      if (lookahead == '\r')
        ADVANCE(886);
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
        ADVANCE(403);
      if (lookahead == '.')
        ADVANCE(256);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == ':')
        ADVANCE(404);
      if (lookahead == '<')
        ADVANCE(405);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(887);
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
        SKIP(883);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 887:
      if (lookahead == 'n')
        SKIP(883);
      END_STATE();
    case 888:
      if (lookahead == '\n')
        ADVANCE(889);
      if (lookahead == '\r')
        ADVANCE(891);
      if (lookahead == '-')
        ADVANCE(479);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(892);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(888);
      END_STATE();
    case 889:
      if (lookahead == '\n')
        ADVANCE(889);
      if (lookahead == '\r')
        ADVANCE(889);
      if (lookahead == '-')
        ADVANCE(475);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(890);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(889);
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
      if (lookahead == '\n')
        ADVANCE(889);
      if (lookahead == '\r')
        ADVANCE(891);
      if (lookahead == '-')
        ADVANCE(479);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(892);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(888);
      END_STATE();
    case 892:
      if (lookahead == 'n')
        SKIP(888);
      END_STATE();
    case 893:
      if (lookahead == '\n')
        ADVANCE(894);
      if (lookahead == '\r')
        ADVANCE(896);
      if (lookahead == '(')
        ADVANCE(254);
      if (lookahead == '-')
        ADVANCE(479);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(897);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(893);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 894:
      if (lookahead == '\n')
        ADVANCE(894);
      if (lookahead == '\r')
        ADVANCE(894);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == '-')
        ADVANCE(475);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(895);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(894);
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
      if (lookahead == '(')
        ADVANCE(254);
      if (lookahead == '-')
        ADVANCE(479);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(897);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(893);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
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
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == '\\')
        SKIP(902);
      if (lookahead == 'c')
        ADVANCE(265);
      if (lookahead == 'd')
        ADVANCE(271);
      if (lookahead == 'f')
        ADVANCE(281);
      if (lookahead == 'i')
        ADVANCE(288);
      if (lookahead == 'n')
        ADVANCE(312);
      if (lookahead == 't')
        ADVANCE(319);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(898);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      END_STATE();
    case 899:
      if (lookahead == '\n')
        ADVANCE(899);
      if (lookahead == '\r')
        ADVANCE(899);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == '\\')
        ADVANCE(900);
      if (lookahead == 'c')
        ADVANCE(194);
      if (lookahead == 'd')
        ADVANCE(200);
      if (lookahead == 'f')
        ADVANCE(210);
      if (lookahead == 'i')
        ADVANCE(217);
      if (lookahead == 'n')
        ADVANCE(241);
      if (lookahead == 't')
        ADVANCE(248);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(899);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
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
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == '\\')
        SKIP(902);
      if (lookahead == 'c')
        ADVANCE(265);
      if (lookahead == 'd')
        ADVANCE(271);
      if (lookahead == 'f')
        ADVANCE(281);
      if (lookahead == 'i')
        ADVANCE(288);
      if (lookahead == 'n')
        ADVANCE(312);
      if (lookahead == 't')
        ADVANCE(319);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(898);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
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
      if (lookahead == '(')
        ADVANCE(254);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(907);
      if (lookahead == 'h')
        ADVANCE(560);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(903);
      END_STATE();
    case 904:
      if (lookahead == '\n')
        ADVANCE(904);
      if (lookahead == '\r')
        ADVANCE(904);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(905);
      if (lookahead == 'h')
        ADVANCE(550);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(904);
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
      if (lookahead == '(')
        ADVANCE(254);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(907);
      if (lookahead == 'h')
        ADVANCE(560);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(903);
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
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(912);
      if (lookahead == 'd')
        ADVANCE(611);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(908);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 909:
      if (lookahead == '\n')
        ADVANCE(909);
      if (lookahead == '\r')
        ADVANCE(909);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(910);
      if (lookahead == 'd')
        ADVANCE(601);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(909);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
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
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(912);
      if (lookahead == 'd')
        ADVANCE(611);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(908);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
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
      if (lookahead == '-')
        ADVANCE(479);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(917);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(913);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 914:
      if (lookahead == '\n')
        ADVANCE(914);
      if (lookahead == '\r')
        ADVANCE(914);
      if (lookahead == '-')
        ADVANCE(475);
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
      if (lookahead == '-')
        ADVANCE(479);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(917);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(913);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 917:
      if (lookahead == 'n')
        SKIP(913);
      END_STATE();
    case 918:
      if (lookahead == '\t')
        ADVANCE(508);
      if (lookahead == '\n')
        ADVANCE(919);
      if (lookahead == 11)
        ADVANCE(97);
      if (lookahead == '\r')
        ADVANCE(924);
      if (lookahead == ' ')
        ADVANCE(503);
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
        ADVANCE(254);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(403);
      if (lookahead == '.')
        ADVANCE(256);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(404);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(405);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == '[')
        ADVANCE(504);
      if (lookahead == '\\')
        ADVANCE(505);
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
        ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(506);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(920);
      if (lookahead == '\n')
        ADVANCE(919);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(921);
      if (lookahead == ' ')
        ADVANCE(922);
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
        ADVANCE(351);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(352);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(353);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(499);
      if (lookahead == '\\')
        ADVANCE(923);
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
        ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(501);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(920);
      if (lookahead == '\n')
        ADVANCE(919);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(921);
      if (lookahead == ' ')
        ADVANCE(922);
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
        ADVANCE(351);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(352);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(353);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(499);
      if (lookahead == '\\')
        ADVANCE(923);
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
        ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(501);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 921:
      if (lookahead == '\t')
        ADVANCE(920);
      if (lookahead == '\n')
        ADVANCE(919);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(921);
      if (lookahead == ' ')
        ADVANCE(922);
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
        ADVANCE(351);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(352);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(353);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(499);
      if (lookahead == '\\')
        ADVANCE(923);
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
        ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(501);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(920);
      if (lookahead == '\n')
        ADVANCE(919);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(921);
      if (lookahead == ' ')
        ADVANCE(922);
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
        ADVANCE(351);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(352);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(353);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(499);
      if (lookahead == '\\')
        ADVANCE(923);
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
        ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(501);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(921);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 924:
      if (lookahead == '\t')
        ADVANCE(508);
      if (lookahead == '\n')
        ADVANCE(919);
      if (lookahead == 11)
        ADVANCE(97);
      if (lookahead == '\r')
        ADVANCE(924);
      if (lookahead == ' ')
        ADVANCE(503);
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
        ADVANCE(254);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(403);
      if (lookahead == '.')
        ADVANCE(256);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(404);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(405);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == '[')
        ADVANCE(504);
      if (lookahead == '\\')
        ADVANCE(505);
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
        ADVANCE(506);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(506);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 925:
      if (lookahead == '\n')
        ADVANCE(926);
      if (lookahead == '\r')
        ADVANCE(928);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == '\\')
        SKIP(929);
      if (lookahead == 'd')
        ADVANCE(494);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(925);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 926:
      if (lookahead == '\n')
        ADVANCE(926);
      if (lookahead == '\r')
        ADVANCE(926);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == '\\')
        ADVANCE(927);
      if (lookahead == 'd')
        ADVANCE(490);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(926);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
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
      if (lookahead == '\n')
        ADVANCE(926);
      if (lookahead == '\r')
        ADVANCE(928);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == '\\')
        SKIP(929);
      if (lookahead == 'd')
        ADVANCE(494);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(925);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 929:
      if (lookahead == 'n')
        SKIP(925);
      END_STATE();
    case 930:
      if (lookahead == '\n')
        ADVANCE(931);
      if (lookahead == '\r')
        ADVANCE(933);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == '\\')
        SKIP(934);
      if (lookahead == 'd')
        ADVANCE(494);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(930);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 931:
      if (lookahead == '\n')
        ADVANCE(931);
      if (lookahead == '\r')
        ADVANCE(931);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == '\\')
        ADVANCE(932);
      if (lookahead == 'd')
        ADVANCE(490);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(931);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 932:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(931);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 933:
      if (lookahead == '\n')
        ADVANCE(931);
      if (lookahead == '\r')
        ADVANCE(933);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == '\\')
        SKIP(934);
      if (lookahead == 'd')
        ADVANCE(494);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(930);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 934:
      if (lookahead == 'n')
        SKIP(930);
      END_STATE();
    case 935:
      if (lookahead == '\n')
        ADVANCE(936);
      if (lookahead == '\r')
        ADVANCE(938);
      if (lookahead == '(')
        ADVANCE(106);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(479);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(939);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(935);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(774);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 936:
      if (lookahead == '\n')
        ADVANCE(936);
      if (lookahead == '\r')
        ADVANCE(936);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(475);
      if (lookahead == '[')
        ADVANCE(72);
      if (lookahead == '\\')
        ADVANCE(937);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(936);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(771);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 937:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(936);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 938:
      if (lookahead == '\n')
        ADVANCE(936);
      if (lookahead == '\r')
        ADVANCE(938);
      if (lookahead == '(')
        ADVANCE(106);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(479);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(939);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(935);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(774);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 939:
      if (lookahead == 'n')
        SKIP(935);
      END_STATE();
    case 940:
      if (lookahead == '\n')
        ADVANCE(941);
      if (lookahead == '\r')
        ADVANCE(943);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(479);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(944);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(940);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 941:
      if (lookahead == '\n')
        ADVANCE(941);
      if (lookahead == '\r')
        ADVANCE(941);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(475);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(942);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(941);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 942:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(941);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 943:
      if (lookahead == '\n')
        ADVANCE(941);
      if (lookahead == '\r')
        ADVANCE(943);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(479);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(944);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(940);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 944:
      if (lookahead == 'n')
        SKIP(940);
      END_STATE();
    case 945:
      if (lookahead == '\n')
        ADVANCE(946);
      if (lookahead == '\r')
        ADVANCE(948);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == '\\')
        SKIP(949);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(945);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 946:
      if (lookahead == '\n')
        ADVANCE(946);
      if (lookahead == '\r')
        ADVANCE(946);
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
        ADVANCE(947);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(946);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 947:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(946);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 948:
      if (lookahead == '\n')
        ADVANCE(946);
      if (lookahead == '\r')
        ADVANCE(948);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == '\\')
        SKIP(949);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(945);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 949:
      if (lookahead == 'n')
        SKIP(945);
      END_STATE();
    case 950:
      if (lookahead == '\n')
        ADVANCE(951);
      if (lookahead == '\r')
        ADVANCE(953);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(954);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(950);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 951:
      if (lookahead == '\n')
        ADVANCE(951);
      if (lookahead == '\r')
        ADVANCE(951);
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
        ADVANCE(952);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(951);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 952:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(951);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 953:
      if (lookahead == '\n')
        ADVANCE(951);
      if (lookahead == '\r')
        ADVANCE(953);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(954);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(950);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 954:
      if (lookahead == 'n')
        SKIP(950);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 181},
  [2] = {.lex_state = 324},
  [3] = {.lex_state = 324},
  [4] = {.lex_state = 349},
  [5] = {.lex_state = 181},
  [6] = {.lex_state = 181},
  [7] = {.lex_state = 181},
  [8] = {.lex_state = 454},
  [9] = {.lex_state = 181},
  [10] = {.lex_state = 181},
  [11] = {.lex_state = 181},
  [12] = {.lex_state = 473, .external_lex_state = 2},
  [13] = {.lex_state = 482, .external_lex_state = 2},
  [14] = {.lex_state = 487, .external_lex_state = 2},
  [15] = {.lex_state = 496},
  [16] = {.lex_state = 507},
  [17] = {.lex_state = 487, .external_lex_state = 2},
  [18] = {.lex_state = 181},
  [19] = {.lex_state = 515, .external_lex_state = 2},
  [20] = {.lex_state = 515, .external_lex_state = 2},
  [21] = {.lex_state = 181},
  [22] = {.lex_state = 520},
  [23] = {.lex_state = 520},
  [24] = {.lex_state = 525, .external_lex_state = 2},
  [25] = {.lex_state = 530, .external_lex_state = 2},
  [26] = {.lex_state = 535, .external_lex_state = 2},
  [27] = {.lex_state = 540},
  [28] = {.lex_state = 349},
  [29] = {.lex_state = 324},
  [30] = {.lex_state = 545, .external_lex_state = 2},
  [31] = {.lex_state = 349},
  [32] = {.lex_state = 349},
  [33] = {.lex_state = 566},
  [34] = {.lex_state = 181},
  [35] = {.lex_state = 573},
  [36] = {.lex_state = 181},
  [37] = {.lex_state = 349},
  [38] = {.lex_state = 454},
  [39] = {.lex_state = 181},
  [40] = {.lex_state = 454},
  [41] = {.lex_state = 578, .external_lex_state = 2},
  [42] = {.lex_state = 566},
  [43] = {.lex_state = 583, .external_lex_state = 2},
  [44] = {.lex_state = 588},
  [45] = {.lex_state = 593, .external_lex_state = 2},
  [46] = {.lex_state = 593, .external_lex_state = 2},
  [47] = {.lex_state = 349},
  [48] = {.lex_state = 578, .external_lex_state = 2},
  [49] = {.lex_state = 598, .external_lex_state = 2},
  [50] = {.lex_state = 181},
  [51] = {.lex_state = 619, .external_lex_state = 2},
  [52] = {.lex_state = 640, .external_lex_state = 2},
  [53] = {.lex_state = 566},
  [54] = {.lex_state = 181},
  [55] = {.lex_state = 181},
  [56] = {.lex_state = 566},
  [57] = {.lex_state = 181},
  [58] = {.lex_state = 566},
  [59] = {.lex_state = 520},
  [60] = {.lex_state = 181},
  [61] = {.lex_state = 181},
  [62] = {.lex_state = 181},
  [63] = {.lex_state = 181},
  [64] = {.lex_state = 181},
  [65] = {.lex_state = 181},
  [66] = {.lex_state = 645},
  [67] = {.lex_state = 507},
  [68] = {.lex_state = 507},
  [69] = {.lex_state = 507},
  [70] = {.lex_state = 507},
  [71] = {.lex_state = 487, .external_lex_state = 2},
  [72] = {.lex_state = 507},
  [73] = {.lex_state = 507},
  [74] = {.lex_state = 749},
  [75] = {.lex_state = 507},
  [76] = {.lex_state = 507},
  [77] = {.lex_state = 540},
  [78] = {.lex_state = 487, .external_lex_state = 2},
  [79] = {.lex_state = 515, .external_lex_state = 2},
  [80] = {.lex_state = 520},
  [81] = {.lex_state = 520},
  [82] = {.lex_state = 520},
  [83] = {.lex_state = 588},
  [84] = {.lex_state = 588},
  [85] = {.lex_state = 588},
  [86] = {.lex_state = 520},
  [87] = {.lex_state = 588},
  [88] = {.lex_state = 496},
  [89] = {.lex_state = 507},
  [90] = {.lex_state = 520},
  [91] = {.lex_state = 181},
  [92] = {.lex_state = 588},
  [93] = {.lex_state = 181},
  [94] = {.lex_state = 588},
  [95] = {.lex_state = 520},
  [96] = {.lex_state = 520},
  [97] = {.lex_state = 768},
  [98] = {.lex_state = 515, .external_lex_state = 2},
  [99] = {.lex_state = 566},
  [100] = {.lex_state = 775, .external_lex_state = 3},
  [101] = {.lex_state = 349},
  [102] = {.lex_state = 181},
  [103] = {.lex_state = 545, .external_lex_state = 2},
  [104] = {.lex_state = 566},
  [105] = {.lex_state = 324},
  [106] = {.lex_state = 181},
  [107] = {.lex_state = 515, .external_lex_state = 2},
  [108] = {.lex_state = 780},
  [109] = {.lex_state = 780},
  [110] = {.lex_state = 515, .external_lex_state = 2},
  [111] = {.lex_state = 181},
  [112] = {.lex_state = 573},
  [113] = {.lex_state = 181},
  [114] = {.lex_state = 566},
  [115] = {.lex_state = 454},
  [116] = {.lex_state = 181},
  [117] = {.lex_state = 482},
  [118] = {.lex_state = 775, .external_lex_state = 3},
  [119] = {.lex_state = 805},
  [120] = {.lex_state = 805},
  [121] = {.lex_state = 454},
  [122] = {.lex_state = 454},
  [123] = {.lex_state = 775, .external_lex_state = 3},
  [124] = {.lex_state = 454},
  [125] = {.lex_state = 349},
  [126] = {.lex_state = 583, .external_lex_state = 2},
  [127] = {.lex_state = 583, .external_lex_state = 2},
  [128] = {.lex_state = 583, .external_lex_state = 2},
  [129] = {.lex_state = 349},
  [130] = {.lex_state = 593, .external_lex_state = 2},
  [131] = {.lex_state = 593, .external_lex_state = 2},
  [132] = {.lex_state = 578, .external_lex_state = 2},
  [133] = {.lex_state = 578, .external_lex_state = 2},
  [134] = {.lex_state = 619, .external_lex_state = 2},
  [135] = {.lex_state = 810, .external_lex_state = 2},
  [136] = {.lex_state = 815, .external_lex_state = 2},
  [137] = {.lex_state = 566},
  [138] = {.lex_state = 820, .external_lex_state = 2},
  [139] = {.lex_state = 825, .external_lex_state = 2},
  [140] = {.lex_state = 515, .external_lex_state = 2},
  [141] = {.lex_state = 830, .external_lex_state = 2},
  [142] = {.lex_state = 835, .external_lex_state = 2},
  [143] = {.lex_state = 840, .external_lex_state = 2},
  [144] = {.lex_state = 810, .external_lex_state = 2},
  [145] = {.lex_state = 181},
  [146] = {.lex_state = 181},
  [147] = {.lex_state = 845},
  [148] = {.lex_state = 850},
  [149] = {.lex_state = 566},
  [150] = {.lex_state = 768},
  [151] = {.lex_state = 566},
  [152] = {.lex_state = 855},
  [153] = {.lex_state = 487, .external_lex_state = 2},
  [154] = {.lex_state = 181},
  [155] = {.lex_state = 181},
  [156] = {.lex_state = 860},
  [157] = {.lex_state = 864},
  [158] = {.lex_state = 871},
  [159] = {.lex_state = 181},
  [160] = {.lex_state = 507},
  [161] = {.lex_state = 507},
  [162] = {.lex_state = 860},
  [163] = {.lex_state = 864},
  [164] = {.lex_state = 871},
  [165] = {.lex_state = 507},
  [166] = {.lex_state = 507},
  [167] = {.lex_state = 487, .external_lex_state = 2},
  [168] = {.lex_state = 775, .external_lex_state = 3},
  [169] = {.lex_state = 775, .external_lex_state = 3},
  [170] = {.lex_state = 487, .external_lex_state = 2},
  [171] = {.lex_state = 487, .external_lex_state = 2},
  [172] = {.lex_state = 515, .external_lex_state = 2},
  [173] = {.lex_state = 487, .external_lex_state = 2},
  [174] = {.lex_state = 487, .external_lex_state = 2},
  [175] = {.lex_state = 487, .external_lex_state = 2},
  [176] = {.lex_state = 487, .external_lex_state = 2},
  [177] = {.lex_state = 487, .external_lex_state = 2},
  [178] = {.lex_state = 520},
  [179] = {.lex_state = 181},
  [180] = {.lex_state = 878},
  [181] = {.lex_state = 349},
  [182] = {.lex_state = 181},
  [183] = {.lex_state = 181},
  [184] = {.lex_state = 181},
  [185] = {.lex_state = 883},
  [186] = {.lex_state = 588},
  [187] = {.lex_state = 520},
  [188] = {.lex_state = 324},
  [189] = {.lex_state = 181},
  [190] = {.lex_state = 850},
  [191] = {.lex_state = 181},
  [192] = {.lex_state = 588},
  [193] = {.lex_state = 507},
  [194] = {.lex_state = 520},
  [195] = {.lex_state = 566},
  [196] = {.lex_state = 566},
  [197] = {.lex_state = 520},
  [198] = {.lex_state = 768},
  [199] = {.lex_state = 768},
  [200] = {.lex_state = 888, .external_lex_state = 2},
  [201] = {.lex_state = 893, .external_lex_state = 2},
  [202] = {.lex_state = 181},
  [203] = {.lex_state = 515, .external_lex_state = 2},
  [204] = {.lex_state = 888, .external_lex_state = 2},
  [205] = {.lex_state = 768},
  [206] = {.lex_state = 349},
  [207] = {.lex_state = 888, .external_lex_state = 2},
  [208] = {.lex_state = 566},
  [209] = {.lex_state = 888, .external_lex_state = 2},
  [210] = {.lex_state = 540},
  [211] = {.lex_state = 349},
  [212] = {.lex_state = 181},
  [213] = {.lex_state = 181},
  [214] = {.lex_state = 898, .external_lex_state = 4},
  [215] = {.lex_state = 540},
  [216] = {.lex_state = 181},
  [217] = {.lex_state = 181},
  [218] = {.lex_state = 324},
  [219] = {.lex_state = 515, .external_lex_state = 2},
  [220] = {.lex_state = 515, .external_lex_state = 2},
  [221] = {.lex_state = 181},
  [222] = {.lex_state = 903, .external_lex_state = 2},
  [223] = {.lex_state = 566},
  [224] = {.lex_state = 566},
  [225] = {.lex_state = 507},
  [226] = {.lex_state = 566},
  [227] = {.lex_state = 515, .external_lex_state = 2},
  [228] = {.lex_state = 181},
  [229] = {.lex_state = 566},
  [230] = {.lex_state = 566},
  [231] = {.lex_state = 515, .external_lex_state = 2},
  [232] = {.lex_state = 181},
  [233] = {.lex_state = 181},
  [234] = {.lex_state = 349},
  [235] = {.lex_state = 181},
  [236] = {.lex_state = 349},
  [237] = {.lex_state = 775, .external_lex_state = 3},
  [238] = {.lex_state = 454},
  [239] = {.lex_state = 454},
  [240] = {.lex_state = 566},
  [241] = {.lex_state = 898, .external_lex_state = 4},
  [242] = {.lex_state = 540},
  [243] = {.lex_state = 515, .external_lex_state = 2},
  [244] = {.lex_state = 454},
  [245] = {.lex_state = 775, .external_lex_state = 3},
  [246] = {.lex_state = 454},
  [247] = {.lex_state = 515, .external_lex_state = 2},
  [248] = {.lex_state = 593, .external_lex_state = 2},
  [249] = {.lex_state = 583, .external_lex_state = 2},
  [250] = {.lex_state = 593, .external_lex_state = 2},
  [251] = {.lex_state = 349},
  [252] = {.lex_state = 593, .external_lex_state = 2},
  [253] = {.lex_state = 578, .external_lex_state = 2},
  [254] = {.lex_state = 815, .external_lex_state = 2},
  [255] = {.lex_state = 820, .external_lex_state = 2},
  [256] = {.lex_state = 515, .external_lex_state = 2},
  [257] = {.lex_state = 810, .external_lex_state = 2},
  [258] = {.lex_state = 810, .external_lex_state = 2},
  [259] = {.lex_state = 566},
  [260] = {.lex_state = 515, .external_lex_state = 2},
  [261] = {.lex_state = 181},
  [262] = {.lex_state = 825, .external_lex_state = 2},
  [263] = {.lex_state = 482},
  [264] = {.lex_state = 566},
  [265] = {.lex_state = 908, .external_lex_state = 2},
  [266] = {.lex_state = 908, .external_lex_state = 2},
  [267] = {.lex_state = 825, .external_lex_state = 2},
  [268] = {.lex_state = 908, .external_lex_state = 2},
  [269] = {.lex_state = 810, .external_lex_state = 2},
  [270] = {.lex_state = 181},
  [271] = {.lex_state = 820, .external_lex_state = 2},
  [272] = {.lex_state = 566},
  [273] = {.lex_state = 855},
  [274] = {.lex_state = 768},
  [275] = {.lex_state = 913, .external_lex_state = 2},
  [276] = {.lex_state = 515, .external_lex_state = 2},
  [277] = {.lex_state = 181},
  [278] = {.lex_state = 181},
  [279] = {.lex_state = 864},
  [280] = {.lex_state = 864},
  [281] = {.lex_state = 871},
  [282] = {.lex_state = 871},
  [283] = {.lex_state = 507},
  [284] = {.lex_state = 507},
  [285] = {.lex_state = 507},
  [286] = {.lex_state = 507},
  [287] = {.lex_state = 918},
  [288] = {.lex_state = 918},
  [289] = {.lex_state = 515, .external_lex_state = 2},
  [290] = {.lex_state = 925, .external_lex_state = 4},
  [291] = {.lex_state = 930},
  [292] = {.lex_state = 487, .external_lex_state = 2},
  [293] = {.lex_state = 487, .external_lex_state = 2},
  [294] = {.lex_state = 487, .external_lex_state = 2},
  [295] = {.lex_state = 487, .external_lex_state = 2},
  [296] = {.lex_state = 515, .external_lex_state = 2},
  [297] = {.lex_state = 487, .external_lex_state = 2},
  [298] = {.lex_state = 181},
  [299] = {.lex_state = 520},
  [300] = {.lex_state = 588},
  [301] = {.lex_state = 520},
  [302] = {.lex_state = 566},
  [303] = {.lex_state = 520},
  [304] = {.lex_state = 520},
  [305] = {.lex_state = 520},
  [306] = {.lex_state = 520},
  [307] = {.lex_state = 181},
  [308] = {.lex_state = 520},
  [309] = {.lex_state = 883},
  [310] = {.lex_state = 496},
  [311] = {.lex_state = 883},
  [312] = {.lex_state = 883},
  [313] = {.lex_state = 883},
  [314] = {.lex_state = 883},
  [315] = {.lex_state = 588},
  [316] = {.lex_state = 520},
  [317] = {.lex_state = 588},
  [318] = {.lex_state = 588},
  [319] = {.lex_state = 588},
  [320] = {.lex_state = 588},
  [321] = {.lex_state = 181},
  [322] = {.lex_state = 181},
  [323] = {.lex_state = 181},
  [324] = {.lex_state = 768},
  [325] = {.lex_state = 181},
  [326] = {.lex_state = 768},
  [327] = {.lex_state = 935},
  [328] = {.lex_state = 566},
  [329] = {.lex_state = 181},
  [330] = {.lex_state = 181},
  [331] = {.lex_state = 566},
  [332] = {.lex_state = 181},
  [333] = {.lex_state = 566},
  [334] = {.lex_state = 935},
  [335] = {.lex_state = 935},
  [336] = {.lex_state = 181},
  [337] = {.lex_state = 768},
  [338] = {.lex_state = 768},
  [339] = {.lex_state = 768},
  [340] = {.lex_state = 768},
  [341] = {.lex_state = 940, .external_lex_state = 2},
  [342] = {.lex_state = 913, .external_lex_state = 2},
  [343] = {.lex_state = 913, .external_lex_state = 2},
  [344] = {.lex_state = 913, .external_lex_state = 2},
  [345] = {.lex_state = 768},
  [346] = {.lex_state = 913, .external_lex_state = 2},
  [347] = {.lex_state = 181},
  [348] = {.lex_state = 768},
  [349] = {.lex_state = 515, .external_lex_state = 2},
  [350] = {.lex_state = 768},
  [351] = {.lex_state = 768},
  [352] = {.lex_state = 566},
  [353] = {.lex_state = 349},
  [354] = {.lex_state = 181},
  [355] = {.lex_state = 566},
  [356] = {.lex_state = 181},
  [357] = {.lex_state = 515, .external_lex_state = 2},
  [358] = {.lex_state = 898, .external_lex_state = 4},
  [359] = {.lex_state = 540},
  [360] = {.lex_state = 903, .external_lex_state = 2},
  [361] = {.lex_state = 566},
  [362] = {.lex_state = 566},
  [363] = {.lex_state = 515, .external_lex_state = 2},
  [364] = {.lex_state = 181},
  [365] = {.lex_state = 515, .external_lex_state = 2},
  [366] = {.lex_state = 181},
  [367] = {.lex_state = 945},
  [368] = {.lex_state = 507},
  [369] = {.lex_state = 515, .external_lex_state = 2},
  [370] = {.lex_state = 566},
  [371] = {.lex_state = 181},
  [372] = {.lex_state = 566},
  [373] = {.lex_state = 515, .external_lex_state = 2},
  [374] = {.lex_state = 181},
  [375] = {.lex_state = 181},
  [376] = {.lex_state = 181},
  [377] = {.lex_state = 349},
  [378] = {.lex_state = 515, .external_lex_state = 2},
  [379] = {.lex_state = 775, .external_lex_state = 3},
  [380] = {.lex_state = 349},
  [381] = {.lex_state = 515, .external_lex_state = 2},
  [382] = {.lex_state = 898, .external_lex_state = 4},
  [383] = {.lex_state = 540},
  [384] = {.lex_state = 515, .external_lex_state = 2},
  [385] = {.lex_state = 775, .external_lex_state = 3},
  [386] = {.lex_state = 593, .external_lex_state = 2},
  [387] = {.lex_state = 820, .external_lex_state = 2},
  [388] = {.lex_state = 515, .external_lex_state = 2},
  [389] = {.lex_state = 181},
  [390] = {.lex_state = 825, .external_lex_state = 2},
  [391] = {.lex_state = 181},
  [392] = {.lex_state = 181},
  [393] = {.lex_state = 181},
  [394] = {.lex_state = 908, .external_lex_state = 2},
  [395] = {.lex_state = 908, .external_lex_state = 2},
  [396] = {.lex_state = 820, .external_lex_state = 2},
  [397] = {.lex_state = 515, .external_lex_state = 2},
  [398] = {.lex_state = 820, .external_lex_state = 2},
  [399] = {.lex_state = 864},
  [400] = {.lex_state = 871},
  [401] = {.lex_state = 507},
  [402] = {.lex_state = 918},
  [403] = {.lex_state = 487, .external_lex_state = 2},
  [404] = {.lex_state = 950, .external_lex_state = 2},
  [405] = {.lex_state = 515, .external_lex_state = 2},
  [406] = {.lex_state = 925, .external_lex_state = 4},
  [407] = {.lex_state = 950, .external_lex_state = 2},
  [408] = {.lex_state = 925, .external_lex_state = 4},
  [409] = {.lex_state = 515, .external_lex_state = 2},
  [410] = {.lex_state = 930},
  [411] = {.lex_state = 930},
  [412] = {.lex_state = 487, .external_lex_state = 2},
  [413] = {.lex_state = 181},
  [414] = {.lex_state = 349},
  [415] = {.lex_state = 181},
  [416] = {.lex_state = 349},
  [417] = {.lex_state = 520},
  [418] = {.lex_state = 520},
  [419] = {.lex_state = 520},
  [420] = {.lex_state = 349},
  [421] = {.lex_state = 181},
  [422] = {.lex_state = 520},
  [423] = {.lex_state = 520},
  [424] = {.lex_state = 520},
  [425] = {.lex_state = 588},
  [426] = {.lex_state = 181},
  [427] = {.lex_state = 883},
  [428] = {.lex_state = 588},
  [429] = {.lex_state = 566},
  [430] = {.lex_state = 181},
  [431] = {.lex_state = 181},
  [432] = {.lex_state = 181},
  [433] = {.lex_state = 181},
  [434] = {.lex_state = 181},
  [435] = {.lex_state = 888, .external_lex_state = 2},
  [436] = {.lex_state = 181},
  [437] = {.lex_state = 768},
  [438] = {.lex_state = 935},
  [439] = {.lex_state = 768},
  [440] = {.lex_state = 935},
  [441] = {.lex_state = 181},
  [442] = {.lex_state = 768},
  [443] = {.lex_state = 888, .external_lex_state = 2},
  [444] = {.lex_state = 181},
  [445] = {.lex_state = 768},
  [446] = {.lex_state = 349},
  [447] = {.lex_state = 181},
  [448] = {.lex_state = 768},
  [449] = {.lex_state = 768},
  [450] = {.lex_state = 768},
  [451] = {.lex_state = 181},
  [452] = {.lex_state = 768},
  [453] = {.lex_state = 768},
  [454] = {.lex_state = 888, .external_lex_state = 2},
  [455] = {.lex_state = 768},
  [456] = {.lex_state = 913, .external_lex_state = 2},
  [457] = {.lex_state = 181},
  [458] = {.lex_state = 913, .external_lex_state = 2},
  [459] = {.lex_state = 913, .external_lex_state = 2},
  [460] = {.lex_state = 768},
  [461] = {.lex_state = 515, .external_lex_state = 2},
  [462] = {.lex_state = 515, .external_lex_state = 2},
  [463] = {.lex_state = 181},
  [464] = {.lex_state = 566},
  [465] = {.lex_state = 349},
  [466] = {.lex_state = 181},
  [467] = {.lex_state = 181},
  [468] = {.lex_state = 898, .external_lex_state = 4},
  [469] = {.lex_state = 181},
  [470] = {.lex_state = 515, .external_lex_state = 2},
  [471] = {.lex_state = 515, .external_lex_state = 2},
  [472] = {.lex_state = 181},
  [473] = {.lex_state = 181},
  [474] = {.lex_state = 181},
  [475] = {.lex_state = 566},
  [476] = {.lex_state = 515, .external_lex_state = 2},
  [477] = {.lex_state = 566},
  [478] = {.lex_state = 181},
  [479] = {.lex_state = 945},
  [480] = {.lex_state = 515, .external_lex_state = 2},
  [481] = {.lex_state = 181},
  [482] = {.lex_state = 181},
  [483] = {.lex_state = 181},
  [484] = {.lex_state = 515, .external_lex_state = 2},
  [485] = {.lex_state = 515, .external_lex_state = 2},
  [486] = {.lex_state = 515, .external_lex_state = 2},
  [487] = {.lex_state = 515, .external_lex_state = 2},
  [488] = {.lex_state = 515, .external_lex_state = 2},
  [489] = {.lex_state = 181},
  [490] = {.lex_state = 825, .external_lex_state = 2},
  [491] = {.lex_state = 825, .external_lex_state = 2},
  [492] = {.lex_state = 482},
  [493] = {.lex_state = 181},
  [494] = {.lex_state = 482},
  [495] = {.lex_state = 566},
  [496] = {.lex_state = 181},
  [497] = {.lex_state = 515, .external_lex_state = 2},
  [498] = {.lex_state = 925, .external_lex_state = 4},
  [499] = {.lex_state = 950, .external_lex_state = 2},
  [500] = {.lex_state = 496},
  [501] = {.lex_state = 507},
  [502] = {.lex_state = 950, .external_lex_state = 2},
  [503] = {.lex_state = 950, .external_lex_state = 2},
  [504] = {.lex_state = 950, .external_lex_state = 2},
  [505] = {.lex_state = 487, .external_lex_state = 2},
  [506] = {.lex_state = 925, .external_lex_state = 4},
  [507] = {.lex_state = 930},
  [508] = {.lex_state = 930},
  [509] = {.lex_state = 181},
  [510] = {.lex_state = 520},
  [511] = {.lex_state = 520},
  [512] = {.lex_state = 520},
  [513] = {.lex_state = 349},
  [514] = {.lex_state = 181},
  [515] = {.lex_state = 883},
  [516] = {.lex_state = 181},
  [517] = {.lex_state = 566},
  [518] = {.lex_state = 181},
  [519] = {.lex_state = 935},
  [520] = {.lex_state = 181},
  [521] = {.lex_state = 935},
  [522] = {.lex_state = 181},
  [523] = {.lex_state = 181},
  [524] = {.lex_state = 888, .external_lex_state = 2},
  [525] = {.lex_state = 935},
  [526] = {.lex_state = 935},
  [527] = {.lex_state = 935},
  [528] = {.lex_state = 768},
  [529] = {.lex_state = 181},
  [530] = {.lex_state = 768},
  [531] = {.lex_state = 888, .external_lex_state = 2},
  [532] = {.lex_state = 935},
  [533] = {.lex_state = 768},
  [534] = {.lex_state = 349},
  [535] = {.lex_state = 935},
  [536] = {.lex_state = 768},
  [537] = {.lex_state = 913, .external_lex_state = 2},
  [538] = {.lex_state = 181},
  [539] = {.lex_state = 913, .external_lex_state = 2},
  [540] = {.lex_state = 181},
  [541] = {.lex_state = 181},
  [542] = {.lex_state = 181},
  [543] = {.lex_state = 898, .external_lex_state = 4},
  [544] = {.lex_state = 181},
  [545] = {.lex_state = 181},
  [546] = {.lex_state = 566},
  [547] = {.lex_state = 181},
  [548] = {.lex_state = 181},
  [549] = {.lex_state = 181},
  [550] = {.lex_state = 515, .external_lex_state = 2},
  [551] = {.lex_state = 515, .external_lex_state = 2},
  [552] = {.lex_state = 181},
  [553] = {.lex_state = 825, .external_lex_state = 2},
  [554] = {.lex_state = 482},
  [555] = {.lex_state = 181},
  [556] = {.lex_state = 566},
  [557] = {.lex_state = 181},
  [558] = {.lex_state = 482},
  [559] = {.lex_state = 566},
  [560] = {.lex_state = 181},
  [561] = {.lex_state = 950, .external_lex_state = 2},
  [562] = {.lex_state = 507},
  [563] = {.lex_state = 950, .external_lex_state = 2},
  [564] = {.lex_state = 181},
  [565] = {.lex_state = 935},
  [566] = {.lex_state = 935},
  [567] = {.lex_state = 935},
  [568] = {.lex_state = 935},
  [569] = {.lex_state = 181},
  [570] = {.lex_state = 768},
  [571] = {.lex_state = 913, .external_lex_state = 2},
  [572] = {.lex_state = 181},
  [573] = {.lex_state = 515, .external_lex_state = 2},
  [574] = {.lex_state = 181},
  [575] = {.lex_state = 181},
  [576] = {.lex_state = 181},
  [577] = {.lex_state = 181},
  [578] = {.lex_state = 566},
  [579] = {.lex_state = 181},
  [580] = {.lex_state = 181},
  [581] = {.lex_state = 181},
  [582] = {.lex_state = 181},
  [583] = {.lex_state = 181},
  [584] = {.lex_state = 950, .external_lex_state = 2},
  [585] = {.lex_state = 950, .external_lex_state = 2},
  [586] = {.lex_state = 935},
  [587] = {.lex_state = 515, .external_lex_state = 2},
  [588] = {.lex_state = 181},
  [589] = {.lex_state = 181},
  [590] = {.lex_state = 181},
  [591] = {.lex_state = 181},
  [592] = {.lex_state = 181},
  [593] = {.lex_state = 181},
  [594] = {.lex_state = 515, .external_lex_state = 2},
  [595] = {.lex_state = 181},
  [596] = {.lex_state = 181},
  [597] = {.lex_state = 181},
  [598] = {.lex_state = 181},
  [599] = {.lex_state = 515, .external_lex_state = 2},
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
    [ts_external_token__layout_semicolon] = true,
  },
  [3] = {
    [ts_external_token__layout_open_brace] = true,
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
    [anon_sym_TILDE] = ACTIONS(3),
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
    [sym_module] = STATE(18),
    [sym_import] = STATE(19),
    [sym__declaration] = STATE(20),
    [sym_function_declaration] = STATE(19),
    [sym_function_head] = STATE(21),
    [sym__variable] = STATE(22),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym_foreign] = STATE(19),
    [sym_default] = STATE(19),
    [sym_type_class] = STATE(19),
    [sym_type_class_instance] = STATE(19),
    [sym_fixity] = STATE(19),
    [sym_type_signature] = STATE(19),
    [sym_algebraic_datatype] = STATE(19),
    [sym_newtype] = STATE(19),
    [sym_type_synonym] = STATE(19),
    [sym__literal] = STATE(19),
    [sym__identifier] = STATE(24),
    [sym_variable_identifier] = STATE(25),
    [sym_constructor_identifier] = STATE(26),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [aux_sym_module_repeat1] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_module] = ACTIONS(11),
    [anon_sym_import] = ACTIONS(13),
    [anon_sym_foreign] = ACTIONS(15),
    [anon_sym_default] = ACTIONS(17),
    [anon_sym_class] = ACTIONS(19),
    [anon_sym_instance] = ACTIONS(21),
    [anon_sym_infixl] = ACTIONS(23),
    [anon_sym_infixr] = ACTIONS(23),
    [anon_sym_infix] = ACTIONS(23),
    [anon_sym_data] = ACTIONS(25),
    [anon_sym_newtype] = ACTIONS(27),
    [anon_sym_type] = ACTIONS(29),
    [sym__variable_pattern] = ACTIONS(31),
    [sym__constructor_pattern] = ACTIONS(33),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym__integer_literal] = ACTIONS(41),
    [sym__octal_literal] = ACTIONS(41),
    [sym__hexidecimal_literal] = ACTIONS(41),
  },
  [2] = {
    [sym_module_identifier] = ACTIONS(43),
    [sym_comment] = ACTIONS(5),
  },
  [3] = {
    [anon_sym_qualified] = ACTIONS(45),
    [sym_module_identifier] = ACTIONS(47),
    [sym_comment] = ACTIONS(5),
  },
  [4] = {
    [sym_foreign_import] = STATE(32),
    [anon_sym_import] = ACTIONS(49),
    [sym_foreign_export] = ACTIONS(51),
    [sym_comment] = ACTIONS(5),
  },
  [5] = {
    [anon_sym_LPAREN] = ACTIONS(53),
    [sym_comment] = ACTIONS(5),
  },
  [6] = {
    [sym_context] = STATE(36),
    [sym_class] = STATE(37),
    [sym_constructor_identifier] = STATE(38),
    [anon_sym_LPAREN] = ACTIONS(55),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [7] = {
    [sym_context] = STATE(39),
    [sym_class] = STATE(37),
    [sym_constructor_identifier] = STATE(40),
    [anon_sym_LPAREN] = ACTIONS(55),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [8] = {
    [sym__op] = STATE(45),
    [sym_variable_symbol] = STATE(46),
    [sym_constructor_symbol] = STATE(46),
    [sym_integer] = STATE(47),
    [sym__variable_symbol] = STATE(48),
    [anon_sym_DASH] = ACTIONS(59),
    [anon_sym_BQUOTE] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(63),
    [anon_sym_BANG] = ACTIONS(59),
    [anon_sym_DOT] = ACTIONS(59),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(59),
    [anon_sym_DOLLAR] = ACTIONS(59),
    [anon_sym_PERCENT] = ACTIONS(59),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_1] = ACTIONS(59),
    [anon_sym_PLUS] = ACTIONS(59),
    [anon_sym_SLASH] = ACTIONS(59),
    [anon_sym_LT] = ACTIONS(59),
    [anon_sym_GT] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(59),
    [anon_sym_CARET] = ACTIONS(59),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [9] = {
    [sym_context] = STATE(50),
    [sym_class] = STATE(37),
    [sym_simple_type] = STATE(51),
    [sym_constructor_identifier] = STATE(52),
    [anon_sym_LPAREN] = ACTIONS(55),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [10] = {
    [sym_context] = STATE(54),
    [sym_class] = STATE(37),
    [sym_simple_type] = STATE(55),
    [sym_constructor_identifier] = STATE(56),
    [anon_sym_LPAREN] = ACTIONS(55),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
  },
  [11] = {
    [sym_simple_type] = STATE(57),
    [sym_constructor_identifier] = STATE(58),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
  },
  [12] = {
    [sym__layout_semicolon] = ACTIONS(71),
    [anon_sym_SEMI] = ACTIONS(73),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_EQ] = ACTIONS(73),
    [anon_sym_TILDE] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(73),
    [anon_sym__] = ACTIONS(73),
    [anon_sym_COLON_COLON] = ACTIONS(73),
    [anon_sym_DASH_GT] = ACTIONS(73),
    [sym_list_constructor] = ACTIONS(73),
    [sym__variable_pattern] = ACTIONS(75),
    [sym__constructor_pattern] = ACTIONS(75),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(75),
    [anon_sym_SQUOTE] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [sym__integer_literal] = ACTIONS(73),
    [sym__octal_literal] = ACTIONS(73),
    [sym__hexidecimal_literal] = ACTIONS(73),
  },
  [13] = {
    [sym__layout_semicolon] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_COLON_COLON] = ACTIONS(79),
    [sym__variable_pattern] = ACTIONS(81),
    [sym_comment] = ACTIONS(5),
  },
  [14] = {
    [sym__layout_semicolon] = ACTIONS(83),
    [anon_sym_SEMI] = ACTIONS(85),
    [anon_sym_where] = ACTIONS(85),
    [anon_sym_do] = ACTIONS(85),
    [sym__variable_pattern] = ACTIONS(87),
    [sym__constructor_pattern] = ACTIONS(87),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(85),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym__integer_literal] = ACTIONS(85),
    [sym__octal_literal] = ACTIONS(85),
    [sym__hexidecimal_literal] = ACTIONS(85),
  },
  [15] = {
    [sym__graphic] = STATE(63),
    [sym__small] = STATE(64),
    [sym__large] = STATE(64),
    [sym__symbol] = STATE(64),
    [sym__special] = STATE(64),
    [sym__escape] = STATE(63),
    [anon_sym_SEMI] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_RBRACE] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_RPAREN] = ACTIONS(89),
    [anon_sym_EQ] = ACTIONS(91),
    [anon_sym_TILDE] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_RBRACK] = ACTIONS(89),
    [anon_sym_DASH] = ACTIONS(91),
    [anon_sym_AT] = ACTIONS(91),
    [anon_sym__] = ACTIONS(93),
    [anon_sym_BQUOTE] = ACTIONS(89),
    [anon_sym_COLON] = ACTIONS(91),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_BANG] = ACTIONS(91),
    [anon_sym_DOT] = ACTIONS(91),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(99),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(93),
    [sym__ascii_large] = ACTIONS(101),
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
    [anon_sym_BSLASH] = ACTIONS(103),
    [sym__space] = ACTIONS(97),
  },
  [16] = {
    [sym__gap] = STATE(70),
    [sym__graphic] = STATE(70),
    [sym__small] = STATE(72),
    [sym__large] = STATE(72),
    [sym__symbol] = STATE(72),
    [sym__special] = STATE(72),
    [sym__escape] = STATE(70),
    [aux_sym_string_repeat1] = STATE(76),
    [anon_sym_SEMI] = ACTIONS(105),
    [anon_sym_LBRACE] = ACTIONS(105),
    [anon_sym_RBRACE] = ACTIONS(105),
    [anon_sym_LPAREN] = ACTIONS(105),
    [anon_sym_RPAREN] = ACTIONS(105),
    [anon_sym_EQ] = ACTIONS(107),
    [anon_sym_TILDE] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(105),
    [anon_sym_RBRACK] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(107),
    [anon_sym_AT] = ACTIONS(107),
    [anon_sym__] = ACTIONS(109),
    [anon_sym_BQUOTE] = ACTIONS(105),
    [anon_sym_COLON] = ACTIONS(107),
    [anon_sym_PIPE] = ACTIONS(107),
    [anon_sym_BANG] = ACTIONS(107),
    [anon_sym_DOT] = ACTIONS(107),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(111),
    [anon_sym_DQUOTE] = ACTIONS(113),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(115),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(109),
    [sym__ascii_large] = ACTIONS(117),
    [anon_sym_POUND] = ACTIONS(107),
    [anon_sym_DOLLAR] = ACTIONS(107),
    [anon_sym_PERCENT] = ACTIONS(107),
    [anon_sym_AMP] = ACTIONS(107),
    [anon_sym_1] = ACTIONS(107),
    [anon_sym_PLUS] = ACTIONS(107),
    [anon_sym_SLASH] = ACTIONS(107),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_QMARK] = ACTIONS(107),
    [anon_sym_CARET] = ACTIONS(107),
    [anon_sym_BSLASH] = ACTIONS(119),
    [sym__space] = ACTIONS(121),
    [sym__newline] = ACTIONS(121),
    [sym__tab] = ACTIONS(121),
    [sym__vertical_tab] = ACTIONS(121),
  },
  [17] = {
    [sym__layout_semicolon] = ACTIONS(123),
    [anon_sym_SEMI] = ACTIONS(125),
    [anon_sym_where] = ACTIONS(125),
    [anon_sym_do] = ACTIONS(125),
    [sym__variable_pattern] = ACTIONS(127),
    [sym__constructor_pattern] = ACTIONS(127),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(127),
    [anon_sym_SQUOTE] = ACTIONS(125),
    [anon_sym_DQUOTE] = ACTIONS(125),
    [sym__integer_literal] = ACTIONS(125),
    [sym__octal_literal] = ACTIONS(125),
    [sym__hexidecimal_literal] = ACTIONS(125),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(129),
    [sym_comment] = ACTIONS(5),
  },
  [19] = {
    [sym__layout_semicolon] = ACTIONS(131),
    [anon_sym_SEMI] = ACTIONS(133),
    [sym_comment] = ACTIONS(5),
  },
  [20] = {
    [sym__layout_semicolon] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(137),
    [sym_comment] = ACTIONS(5),
  },
  [21] = {
    [sym_function_body] = STATE(79),
    [anon_sym_EQ] = ACTIONS(139),
    [sym_comment] = ACTIONS(5),
  },
  [22] = {
    [sym__function_pattern] = STATE(90),
    [sym_irrefutable_pattern] = STATE(84),
    [sym_list_pattern] = STATE(84),
    [sym_tuple_pattern] = STATE(84),
    [sym_parenthesized_pattern] = STATE(84),
    [sym_as_pattern] = STATE(84),
    [sym_wildcard] = STATE(84),
    [sym__variable] = STATE(91),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym__literal] = STATE(84),
    [sym__identifier] = STATE(92),
    [sym_simple_type] = STATE(93),
    [sym_variable_identifier] = STATE(94),
    [sym_constructor_identifier] = STATE(95),
    [sym_integer] = STATE(87),
    [sym_char] = STATE(87),
    [sym_string] = STATE(87),
    [aux_sym_function_head_repeat1] = STATE(96),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_EQ] = ACTIONS(143),
    [anon_sym_TILDE] = ACTIONS(145),
    [anon_sym_LBRACK] = ACTIONS(147),
    [anon_sym__] = ACTIONS(149),
    [sym_list_constructor] = ACTIONS(151),
    [sym__variable_pattern] = ACTIONS(153),
    [sym__constructor_pattern] = ACTIONS(155),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(159),
    [anon_sym_DQUOTE] = ACTIONS(161),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [23] = {
    [anon_sym_LPAREN] = ACTIONS(163),
    [anon_sym_EQ] = ACTIONS(163),
    [anon_sym_TILDE] = ACTIONS(163),
    [anon_sym_LBRACK] = ACTIONS(163),
    [anon_sym_AT] = ACTIONS(163),
    [anon_sym__] = ACTIONS(163),
    [sym_list_constructor] = ACTIONS(163),
    [sym__variable_pattern] = ACTIONS(165),
    [sym__constructor_pattern] = ACTIONS(165),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(163),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym__integer_literal] = ACTIONS(163),
    [sym__octal_literal] = ACTIONS(163),
    [sym__hexidecimal_literal] = ACTIONS(163),
  },
  [24] = {
    [sym__layout_semicolon] = ACTIONS(131),
    [anon_sym_SEMI] = ACTIONS(133),
    [anon_sym_COLON_COLON] = ACTIONS(167),
    [sym_comment] = ACTIONS(5),
  },
  [25] = {
    [sym__layout_semicolon] = ACTIONS(169),
    [anon_sym_SEMI] = ACTIONS(171),
    [anon_sym_LPAREN] = ACTIONS(163),
    [anon_sym_EQ] = ACTIONS(163),
    [anon_sym_TILDE] = ACTIONS(163),
    [anon_sym_LBRACK] = ACTIONS(163),
    [anon_sym__] = ACTIONS(163),
    [anon_sym_COLON_COLON] = ACTIONS(171),
    [sym_list_constructor] = ACTIONS(163),
    [sym__variable_pattern] = ACTIONS(165),
    [sym__constructor_pattern] = ACTIONS(165),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(163),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym__integer_literal] = ACTIONS(163),
    [sym__octal_literal] = ACTIONS(163),
    [sym__hexidecimal_literal] = ACTIONS(163),
  },
  [26] = {
    [sym__layout_semicolon] = ACTIONS(169),
    [anon_sym_SEMI] = ACTIONS(171),
    [anon_sym_where] = ACTIONS(171),
    [anon_sym_do] = ACTIONS(171),
    [anon_sym_COLON_COLON] = ACTIONS(171),
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
  [27] = {
    [sym_import] = STATE(19),
    [sym__declaration] = STATE(98),
    [sym_function_declaration] = STATE(19),
    [sym_function_head] = STATE(21),
    [sym__variable] = STATE(22),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym_foreign] = STATE(19),
    [sym_default] = STATE(19),
    [sym_type_class] = STATE(19),
    [sym_type_class_instance] = STATE(19),
    [sym_fixity] = STATE(19),
    [sym_type_signature] = STATE(19),
    [sym_algebraic_datatype] = STATE(19),
    [sym_newtype] = STATE(19),
    [sym_type_synonym] = STATE(19),
    [sym__literal] = STATE(19),
    [sym__identifier] = STATE(24),
    [sym_variable_identifier] = STATE(25),
    [sym_constructor_identifier] = STATE(26),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(175),
    [anon_sym_import] = ACTIONS(13),
    [anon_sym_foreign] = ACTIONS(15),
    [anon_sym_default] = ACTIONS(17),
    [anon_sym_class] = ACTIONS(19),
    [anon_sym_instance] = ACTIONS(21),
    [anon_sym_infixl] = ACTIONS(23),
    [anon_sym_infixr] = ACTIONS(23),
    [anon_sym_infix] = ACTIONS(23),
    [anon_sym_data] = ACTIONS(25),
    [anon_sym_newtype] = ACTIONS(27),
    [anon_sym_type] = ACTIONS(29),
    [sym__variable_pattern] = ACTIONS(31),
    [sym__constructor_pattern] = ACTIONS(33),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym__integer_literal] = ACTIONS(41),
    [sym__octal_literal] = ACTIONS(41),
    [sym__hexidecimal_literal] = ACTIONS(41),
  },
  [28] = {
    [sym_module_exports] = STATE(101),
    [sym_where_pattern] = STATE(102),
    [anon_sym_LPAREN] = ACTIONS(177),
    [anon_sym_where] = ACTIONS(179),
    [sym_comment] = ACTIONS(5),
  },
  [29] = {
    [sym_module_identifier] = ACTIONS(181),
    [sym_comment] = ACTIONS(5),
  },
  [30] = {
    [sym_import_specification] = STATE(107),
    [sym__layout_semicolon] = ACTIONS(183),
    [anon_sym_SEMI] = ACTIONS(185),
    [anon_sym_LPAREN] = ACTIONS(187),
    [anon_sym_as] = ACTIONS(189),
    [anon_sym_hiding] = ACTIONS(191),
    [sym_comment] = ACTIONS(5),
  },
  [31] = {
    [anon_sym_ccall] = ACTIONS(193),
    [anon_sym_stdcall] = ACTIONS(193),
    [anon_sym_cplusplus] = ACTIONS(193),
    [anon_sym_jvm] = ACTIONS(193),
    [anon_sym_dotnet] = ACTIONS(193),
    [sym_comment] = ACTIONS(5),
  },
  [32] = {
    [sym_calling_convention] = STATE(109),
    [anon_sym_ccall] = ACTIONS(195),
    [anon_sym_stdcall] = ACTIONS(195),
    [anon_sym_cplusplus] = ACTIONS(195),
    [anon_sym_jvm] = ACTIONS(195),
    [anon_sym_dotnet] = ACTIONS(195),
    [sym_comment] = ACTIONS(5),
  },
  [33] = {
    [sym__identifier] = STATE(111),
    [sym_variable_identifier] = STATE(112),
    [sym_constructor_identifier] = STATE(112),
    [anon_sym_RPAREN] = ACTIONS(197),
    [sym__variable_pattern] = ACTIONS(199),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [34] = {
    [sym_class] = STATE(113),
    [sym_constructor_identifier] = STATE(114),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
  },
  [35] = {
    [anon_sym_RBRACE] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(79),
    [anon_sym_where] = ACTIONS(79),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_COLON_COLON] = ACTIONS(79),
    [sym__variable_pattern] = ACTIONS(201),
    [sym_comment] = ACTIONS(5),
  },
  [36] = {
    [sym_constructor_identifier] = STATE(115),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [37] = {
    [anon_sym_EQ_GT] = ACTIONS(203),
    [sym_comment] = ACTIONS(5),
  },
  [38] = {
    [sym_variable_identifier] = STATE(120),
    [aux_sym_type_class_repeat1] = STATE(121),
    [anon_sym_LPAREN] = ACTIONS(205),
    [anon_sym_where] = ACTIONS(207),
    [sym__variable_pattern] = ACTIONS(209),
    [sym_comment] = ACTIONS(5),
  },
  [39] = {
    [sym_constructor_identifier] = STATE(122),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [40] = {
    [sym_variable_identifier] = STATE(120),
    [aux_sym_type_class_repeat1] = STATE(124),
    [anon_sym_LPAREN] = ACTIONS(205),
    [anon_sym_where] = ACTIONS(211),
    [sym__variable_pattern] = ACTIONS(209),
    [sym_comment] = ACTIONS(5),
  },
  [41] = {
    [sym__layout_semicolon] = ACTIONS(213),
    [anon_sym_SEMI] = ACTIONS(215),
    [anon_sym_COMMA] = ACTIONS(215),
    [anon_sym_DASH] = ACTIONS(215),
    [anon_sym_BANG] = ACTIONS(215),
    [anon_sym_DOT] = ACTIONS(215),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(215),
    [anon_sym_DOLLAR] = ACTIONS(215),
    [anon_sym_PERCENT] = ACTIONS(215),
    [anon_sym_AMP] = ACTIONS(215),
    [anon_sym_1] = ACTIONS(215),
    [anon_sym_PLUS] = ACTIONS(215),
    [anon_sym_SLASH] = ACTIONS(215),
    [anon_sym_LT] = ACTIONS(215),
    [anon_sym_GT] = ACTIONS(215),
    [anon_sym_QMARK] = ACTIONS(215),
    [anon_sym_CARET] = ACTIONS(215),
  },
  [42] = {
    [sym__identifier] = STATE(125),
    [sym_variable_identifier] = STATE(112),
    [sym_constructor_identifier] = STATE(112),
    [sym__variable_pattern] = ACTIONS(199),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [43] = {
    [sym__constructor_symbol] = STATE(127),
    [aux_sym_constructor_symbol_repeat1] = STATE(128),
    [sym__layout_semicolon] = ACTIONS(217),
    [anon_sym_SEMI] = ACTIONS(219),
    [anon_sym_COMMA] = ACTIONS(219),
    [anon_sym_DASH] = ACTIONS(221),
    [anon_sym_COLON] = ACTIONS(221),
    [anon_sym_BANG] = ACTIONS(221),
    [anon_sym_DOT] = ACTIONS(221),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(221),
    [anon_sym_DOLLAR] = ACTIONS(221),
    [anon_sym_PERCENT] = ACTIONS(221),
    [anon_sym_AMP] = ACTIONS(221),
    [anon_sym_1] = ACTIONS(221),
    [anon_sym_PLUS] = ACTIONS(221),
    [anon_sym_SLASH] = ACTIONS(221),
    [anon_sym_LT] = ACTIONS(221),
    [anon_sym_GT] = ACTIONS(221),
    [anon_sym_QMARK] = ACTIONS(221),
    [anon_sym_CARET] = ACTIONS(221),
  },
  [44] = {
    [anon_sym_RBRACE] = ACTIONS(125),
    [anon_sym_LPAREN] = ACTIONS(125),
    [anon_sym_COMMA] = ACTIONS(125),
    [anon_sym_RPAREN] = ACTIONS(125),
    [anon_sym_EQ] = ACTIONS(125),
    [anon_sym_TILDE] = ACTIONS(125),
    [anon_sym_LBRACK] = ACTIONS(125),
    [anon_sym_RBRACK] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym__] = ACTIONS(125),
    [anon_sym_BQUOTE] = ACTIONS(125),
    [anon_sym_COLON] = ACTIONS(125),
    [sym_list_constructor] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(125),
    [sym__variable_pattern] = ACTIONS(127),
    [sym__constructor_pattern] = ACTIONS(127),
    [anon_sym_DOT] = ACTIONS(125),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(127),
    [anon_sym_SQUOTE] = ACTIONS(125),
    [anon_sym_DQUOTE] = ACTIONS(125),
    [anon_sym_POUND] = ACTIONS(125),
    [anon_sym_DOLLAR] = ACTIONS(125),
    [anon_sym_PERCENT] = ACTIONS(125),
    [anon_sym_AMP] = ACTIONS(125),
    [anon_sym_1] = ACTIONS(125),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_SLASH] = ACTIONS(125),
    [anon_sym_LT] = ACTIONS(125),
    [anon_sym_GT] = ACTIONS(125),
    [anon_sym_QMARK] = ACTIONS(125),
    [anon_sym_CARET] = ACTIONS(125),
    [sym__integer_literal] = ACTIONS(125),
    [sym__octal_literal] = ACTIONS(125),
    [sym__hexidecimal_literal] = ACTIONS(125),
  },
  [45] = {
    [aux_sym_fixity_repeat1] = STATE(130),
    [sym__layout_semicolon] = ACTIONS(223),
    [anon_sym_SEMI] = ACTIONS(225),
    [anon_sym_COMMA] = ACTIONS(227),
    [sym_comment] = ACTIONS(5),
  },
  [46] = {
    [sym__layout_semicolon] = ACTIONS(229),
    [anon_sym_SEMI] = ACTIONS(231),
    [anon_sym_COMMA] = ACTIONS(231),
    [sym_comment] = ACTIONS(5),
  },
  [47] = {
    [sym__op] = STATE(131),
    [sym_variable_symbol] = STATE(46),
    [sym_constructor_symbol] = STATE(46),
    [sym__variable_symbol] = STATE(48),
    [anon_sym_DASH] = ACTIONS(59),
    [anon_sym_BQUOTE] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(63),
    [anon_sym_BANG] = ACTIONS(59),
    [anon_sym_DOT] = ACTIONS(59),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(59),
    [anon_sym_DOLLAR] = ACTIONS(59),
    [anon_sym_PERCENT] = ACTIONS(59),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_1] = ACTIONS(59),
    [anon_sym_PLUS] = ACTIONS(59),
    [anon_sym_SLASH] = ACTIONS(59),
    [anon_sym_LT] = ACTIONS(59),
    [anon_sym_GT] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(59),
    [anon_sym_CARET] = ACTIONS(59),
  },
  [48] = {
    [sym__variable_symbol] = STATE(132),
    [aux_sym_variable_symbol_repeat1] = STATE(133),
    [sym__layout_semicolon] = ACTIONS(233),
    [anon_sym_SEMI] = ACTIONS(235),
    [anon_sym_COMMA] = ACTIONS(235),
    [anon_sym_DASH] = ACTIONS(59),
    [anon_sym_BANG] = ACTIONS(59),
    [anon_sym_DOT] = ACTIONS(59),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(59),
    [anon_sym_DOLLAR] = ACTIONS(59),
    [anon_sym_PERCENT] = ACTIONS(59),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_1] = ACTIONS(59),
    [anon_sym_PLUS] = ACTIONS(59),
    [anon_sym_SLASH] = ACTIONS(59),
    [anon_sym_LT] = ACTIONS(59),
    [anon_sym_GT] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(59),
    [anon_sym_CARET] = ACTIONS(59),
  },
  [49] = {
    [sym__layout_semicolon] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(79),
    [anon_sym_PIPE] = ACTIONS(79),
    [anon_sym_deriving] = ACTIONS(79),
    [anon_sym_BANG] = ACTIONS(79),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(201),
    [sym_comment] = ACTIONS(5),
  },
  [50] = {
    [sym_simple_type] = STATE(134),
    [sym_constructor_identifier] = STATE(135),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [51] = {
    [sym_constructors] = STATE(138),
    [sym_constructor] = STATE(139),
    [sym_deriving] = STATE(140),
    [sym_constructor_identifier] = STATE(141),
    [sym__layout_semicolon] = ACTIONS(237),
    [anon_sym_SEMI] = ACTIONS(239),
    [anon_sym_EQ] = ACTIONS(241),
    [anon_sym_deriving] = ACTIONS(243),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [52] = {
    [sym_variable_identifier] = STATE(143),
    [aux_sym_type_class_repeat1] = STATE(144),
    [sym__layout_semicolon] = ACTIONS(245),
    [anon_sym_SEMI] = ACTIONS(247),
    [anon_sym_LPAREN] = ACTIONS(205),
    [anon_sym_EQ] = ACTIONS(247),
    [anon_sym_deriving] = ACTIONS(247),
    [sym__variable_pattern] = ACTIONS(249),
    [sym__constructor_pattern] = ACTIONS(251),
    [sym_comment] = ACTIONS(5),
  },
  [53] = {
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(79),
    [anon_sym_DASH_GT] = ACTIONS(79),
    [sym__variable_pattern] = ACTIONS(79),
    [sym__constructor_pattern] = ACTIONS(201),
    [sym_comment] = ACTIONS(5),
  },
  [54] = {
    [sym_simple_type] = STATE(145),
    [sym_constructor_identifier] = STATE(58),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
  },
  [55] = {
    [anon_sym_EQ] = ACTIONS(253),
    [sym_comment] = ACTIONS(5),
  },
  [56] = {
    [sym_variable_identifier] = STATE(148),
    [aux_sym_type_class_repeat1] = STATE(149),
    [anon_sym_LPAREN] = ACTIONS(205),
    [anon_sym_EQ] = ACTIONS(247),
    [sym__variable_pattern] = ACTIONS(255),
    [sym_comment] = ACTIONS(5),
  },
  [57] = {
    [anon_sym_EQ] = ACTIONS(257),
    [sym_comment] = ACTIONS(5),
  },
  [58] = {
    [sym_variable_identifier] = STATE(152),
    [aux_sym_type_class_repeat1] = STATE(149),
    [anon_sym_EQ] = ACTIONS(247),
    [sym__variable_pattern] = ACTIONS(259),
    [sym_comment] = ACTIONS(5),
  },
  [59] = {
    [anon_sym_LPAREN] = ACTIONS(261),
    [anon_sym_EQ] = ACTIONS(261),
    [anon_sym_TILDE] = ACTIONS(261),
    [anon_sym_LBRACK] = ACTIONS(261),
    [anon_sym_AT] = ACTIONS(261),
    [anon_sym__] = ACTIONS(261),
    [sym_list_constructor] = ACTIONS(261),
    [sym__variable_pattern] = ACTIONS(263),
    [sym__constructor_pattern] = ACTIONS(263),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(263),
    [anon_sym_SQUOTE] = ACTIONS(261),
    [anon_sym_DQUOTE] = ACTIONS(261),
    [sym__integer_literal] = ACTIONS(261),
    [sym__octal_literal] = ACTIONS(261),
    [sym__hexidecimal_literal] = ACTIONS(261),
  },
  [60] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(265),
  },
  [61] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(267),
  },
  [62] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(269),
  },
  [63] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(271),
  },
  [64] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(273),
  },
  [65] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(275),
  },
  [66] = {
    [sym__char_escape] = STATE(155),
    [sym__ascii] = STATE(155),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(277),
    [anon_sym_DQUOTE] = ACTIONS(277),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(279),
    [anon_sym_AMP] = ACTIONS(277),
    [anon_sym_CARET] = ACTIONS(281),
    [anon_sym_BSLASH] = ACTIONS(277),
    [anon_sym_x] = ACTIONS(283),
    [anon_sym_X] = ACTIONS(283),
    [anon_sym_o] = ACTIONS(285),
    [anon_sym_O] = ACTIONS(285),
    [anon_sym_a] = ACTIONS(277),
    [anon_sym_b] = ACTIONS(277),
    [anon_sym_f] = ACTIONS(277),
    [anon_sym_n] = ACTIONS(277),
    [anon_sym_r] = ACTIONS(277),
    [anon_sym_t] = ACTIONS(277),
    [anon_sym_v] = ACTIONS(277),
    [anon_sym_NUL] = ACTIONS(287),
    [anon_sym_SOH] = ACTIONS(287),
    [anon_sym_STX] = ACTIONS(287),
    [anon_sym_ETX] = ACTIONS(287),
    [anon_sym_EOT] = ACTIONS(287),
    [anon_sym_ENQ] = ACTIONS(287),
    [anon_sym_ACK] = ACTIONS(287),
    [anon_sym_BEL] = ACTIONS(287),
    [anon_sym_BS] = ACTIONS(287),
    [anon_sym_HT] = ACTIONS(287),
    [anon_sym_LF] = ACTIONS(287),
    [anon_sym_VT] = ACTIONS(287),
    [anon_sym_FF] = ACTIONS(287),
    [anon_sym_CR] = ACTIONS(287),
    [anon_sym_SO] = ACTIONS(287),
    [anon_sym_SI] = ACTIONS(287),
    [anon_sym_DLE] = ACTIONS(287),
    [anon_sym_DC1] = ACTIONS(287),
    [anon_sym_DC2] = ACTIONS(287),
    [anon_sym_DC3] = ACTIONS(287),
    [anon_sym_DC4] = ACTIONS(287),
    [anon_sym_NAK] = ACTIONS(287),
    [anon_sym_SYN] = ACTIONS(287),
    [anon_sym_ETB] = ACTIONS(287),
    [anon_sym_CAN] = ACTIONS(287),
    [anon_sym_EM] = ACTIONS(287),
    [anon_sym_SUB] = ACTIONS(287),
    [anon_sym_ESC] = ACTIONS(287),
    [anon_sym_FS] = ACTIONS(287),
    [anon_sym_GS] = ACTIONS(287),
    [anon_sym_RS] = ACTIONS(287),
    [anon_sym_US] = ACTIONS(287),
    [anon_sym_SP] = ACTIONS(287),
    [anon_sym_DEL] = ACTIONS(287),
  },
  [67] = {
    [anon_sym_SEMI] = ACTIONS(289),
    [anon_sym_LBRACE] = ACTIONS(289),
    [anon_sym_RBRACE] = ACTIONS(289),
    [anon_sym_LPAREN] = ACTIONS(289),
    [anon_sym_RPAREN] = ACTIONS(289),
    [anon_sym_EQ] = ACTIONS(289),
    [anon_sym_TILDE] = ACTIONS(289),
    [anon_sym_LBRACK] = ACTIONS(289),
    [anon_sym_RBRACK] = ACTIONS(289),
    [anon_sym_DASH] = ACTIONS(289),
    [anon_sym_AT] = ACTIONS(289),
    [anon_sym__] = ACTIONS(289),
    [anon_sym_BQUOTE] = ACTIONS(289),
    [anon_sym_COLON] = ACTIONS(289),
    [anon_sym_PIPE] = ACTIONS(289),
    [anon_sym_BANG] = ACTIONS(289),
    [anon_sym_DOT] = ACTIONS(289),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(289),
    [anon_sym_DQUOTE] = ACTIONS(289),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(289),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(289),
    [sym__ascii_large] = ACTIONS(289),
    [anon_sym_POUND] = ACTIONS(289),
    [anon_sym_DOLLAR] = ACTIONS(289),
    [anon_sym_PERCENT] = ACTIONS(289),
    [anon_sym_AMP] = ACTIONS(289),
    [anon_sym_1] = ACTIONS(289),
    [anon_sym_PLUS] = ACTIONS(289),
    [anon_sym_SLASH] = ACTIONS(289),
    [anon_sym_LT] = ACTIONS(289),
    [anon_sym_GT] = ACTIONS(289),
    [anon_sym_QMARK] = ACTIONS(289),
    [anon_sym_CARET] = ACTIONS(289),
    [anon_sym_BSLASH] = ACTIONS(289),
    [sym__space] = ACTIONS(289),
    [sym__newline] = ACTIONS(289),
    [sym__tab] = ACTIONS(289),
    [sym__vertical_tab] = ACTIONS(289),
  },
  [68] = {
    [anon_sym_SEMI] = ACTIONS(291),
    [anon_sym_LBRACE] = ACTIONS(291),
    [anon_sym_RBRACE] = ACTIONS(291),
    [anon_sym_LPAREN] = ACTIONS(291),
    [anon_sym_RPAREN] = ACTIONS(291),
    [anon_sym_EQ] = ACTIONS(291),
    [anon_sym_TILDE] = ACTIONS(291),
    [anon_sym_LBRACK] = ACTIONS(291),
    [anon_sym_RBRACK] = ACTIONS(291),
    [anon_sym_DASH] = ACTIONS(291),
    [anon_sym_AT] = ACTIONS(291),
    [anon_sym__] = ACTIONS(291),
    [anon_sym_BQUOTE] = ACTIONS(291),
    [anon_sym_COLON] = ACTIONS(291),
    [anon_sym_PIPE] = ACTIONS(291),
    [anon_sym_BANG] = ACTIONS(291),
    [anon_sym_DOT] = ACTIONS(291),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(291),
    [anon_sym_DQUOTE] = ACTIONS(291),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(291),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(291),
    [sym__ascii_large] = ACTIONS(291),
    [anon_sym_POUND] = ACTIONS(291),
    [anon_sym_DOLLAR] = ACTIONS(291),
    [anon_sym_PERCENT] = ACTIONS(291),
    [anon_sym_AMP] = ACTIONS(291),
    [anon_sym_1] = ACTIONS(291),
    [anon_sym_PLUS] = ACTIONS(291),
    [anon_sym_SLASH] = ACTIONS(291),
    [anon_sym_LT] = ACTIONS(291),
    [anon_sym_GT] = ACTIONS(291),
    [anon_sym_QMARK] = ACTIONS(291),
    [anon_sym_CARET] = ACTIONS(291),
    [anon_sym_BSLASH] = ACTIONS(291),
    [sym__space] = ACTIONS(291),
    [sym__newline] = ACTIONS(291),
    [sym__tab] = ACTIONS(291),
    [sym__vertical_tab] = ACTIONS(291),
  },
  [69] = {
    [anon_sym_SEMI] = ACTIONS(293),
    [anon_sym_LBRACE] = ACTIONS(293),
    [anon_sym_RBRACE] = ACTIONS(293),
    [anon_sym_LPAREN] = ACTIONS(293),
    [anon_sym_RPAREN] = ACTIONS(293),
    [anon_sym_EQ] = ACTIONS(293),
    [anon_sym_TILDE] = ACTIONS(293),
    [anon_sym_LBRACK] = ACTIONS(293),
    [anon_sym_RBRACK] = ACTIONS(293),
    [anon_sym_DASH] = ACTIONS(293),
    [anon_sym_AT] = ACTIONS(293),
    [anon_sym__] = ACTIONS(293),
    [anon_sym_BQUOTE] = ACTIONS(293),
    [anon_sym_COLON] = ACTIONS(293),
    [anon_sym_PIPE] = ACTIONS(293),
    [anon_sym_BANG] = ACTIONS(293),
    [anon_sym_DOT] = ACTIONS(293),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(293),
    [anon_sym_DQUOTE] = ACTIONS(293),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(293),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(293),
    [sym__ascii_large] = ACTIONS(293),
    [anon_sym_POUND] = ACTIONS(293),
    [anon_sym_DOLLAR] = ACTIONS(293),
    [anon_sym_PERCENT] = ACTIONS(293),
    [anon_sym_AMP] = ACTIONS(293),
    [anon_sym_1] = ACTIONS(293),
    [anon_sym_PLUS] = ACTIONS(293),
    [anon_sym_SLASH] = ACTIONS(293),
    [anon_sym_LT] = ACTIONS(293),
    [anon_sym_GT] = ACTIONS(293),
    [anon_sym_QMARK] = ACTIONS(293),
    [anon_sym_CARET] = ACTIONS(293),
    [anon_sym_BSLASH] = ACTIONS(293),
    [sym__space] = ACTIONS(293),
    [sym__newline] = ACTIONS(293),
    [sym__tab] = ACTIONS(293),
    [sym__vertical_tab] = ACTIONS(293),
  },
  [70] = {
    [anon_sym_SEMI] = ACTIONS(295),
    [anon_sym_LBRACE] = ACTIONS(295),
    [anon_sym_RBRACE] = ACTIONS(295),
    [anon_sym_LPAREN] = ACTIONS(295),
    [anon_sym_RPAREN] = ACTIONS(295),
    [anon_sym_EQ] = ACTIONS(295),
    [anon_sym_TILDE] = ACTIONS(295),
    [anon_sym_LBRACK] = ACTIONS(295),
    [anon_sym_RBRACK] = ACTIONS(295),
    [anon_sym_DASH] = ACTIONS(295),
    [anon_sym_AT] = ACTIONS(295),
    [anon_sym__] = ACTIONS(295),
    [anon_sym_BQUOTE] = ACTIONS(295),
    [anon_sym_COLON] = ACTIONS(295),
    [anon_sym_PIPE] = ACTIONS(295),
    [anon_sym_BANG] = ACTIONS(295),
    [anon_sym_DOT] = ACTIONS(295),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(295),
    [anon_sym_DQUOTE] = ACTIONS(295),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(295),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(295),
    [sym__ascii_large] = ACTIONS(295),
    [anon_sym_POUND] = ACTIONS(295),
    [anon_sym_DOLLAR] = ACTIONS(295),
    [anon_sym_PERCENT] = ACTIONS(295),
    [anon_sym_AMP] = ACTIONS(295),
    [anon_sym_1] = ACTIONS(295),
    [anon_sym_PLUS] = ACTIONS(295),
    [anon_sym_SLASH] = ACTIONS(295),
    [anon_sym_LT] = ACTIONS(295),
    [anon_sym_GT] = ACTIONS(295),
    [anon_sym_QMARK] = ACTIONS(295),
    [anon_sym_CARET] = ACTIONS(295),
    [anon_sym_BSLASH] = ACTIONS(295),
    [sym__space] = ACTIONS(295),
    [sym__newline] = ACTIONS(295),
    [sym__tab] = ACTIONS(295),
    [sym__vertical_tab] = ACTIONS(295),
  },
  [71] = {
    [sym__layout_semicolon] = ACTIONS(297),
    [anon_sym_SEMI] = ACTIONS(299),
    [anon_sym_where] = ACTIONS(299),
    [anon_sym_do] = ACTIONS(299),
    [sym__variable_pattern] = ACTIONS(301),
    [sym__constructor_pattern] = ACTIONS(301),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(301),
    [anon_sym_SQUOTE] = ACTIONS(299),
    [anon_sym_DQUOTE] = ACTIONS(299),
    [sym__integer_literal] = ACTIONS(299),
    [sym__octal_literal] = ACTIONS(299),
    [sym__hexidecimal_literal] = ACTIONS(299),
  },
  [72] = {
    [anon_sym_SEMI] = ACTIONS(303),
    [anon_sym_LBRACE] = ACTIONS(303),
    [anon_sym_RBRACE] = ACTIONS(303),
    [anon_sym_LPAREN] = ACTIONS(303),
    [anon_sym_RPAREN] = ACTIONS(303),
    [anon_sym_EQ] = ACTIONS(303),
    [anon_sym_TILDE] = ACTIONS(303),
    [anon_sym_LBRACK] = ACTIONS(303),
    [anon_sym_RBRACK] = ACTIONS(303),
    [anon_sym_DASH] = ACTIONS(303),
    [anon_sym_AT] = ACTIONS(303),
    [anon_sym__] = ACTIONS(303),
    [anon_sym_BQUOTE] = ACTIONS(303),
    [anon_sym_COLON] = ACTIONS(303),
    [anon_sym_PIPE] = ACTIONS(303),
    [anon_sym_BANG] = ACTIONS(303),
    [anon_sym_DOT] = ACTIONS(303),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(303),
    [anon_sym_DQUOTE] = ACTIONS(303),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(303),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(303),
    [sym__ascii_large] = ACTIONS(303),
    [anon_sym_POUND] = ACTIONS(303),
    [anon_sym_DOLLAR] = ACTIONS(303),
    [anon_sym_PERCENT] = ACTIONS(303),
    [anon_sym_AMP] = ACTIONS(303),
    [anon_sym_1] = ACTIONS(303),
    [anon_sym_PLUS] = ACTIONS(303),
    [anon_sym_SLASH] = ACTIONS(303),
    [anon_sym_LT] = ACTIONS(303),
    [anon_sym_GT] = ACTIONS(303),
    [anon_sym_QMARK] = ACTIONS(303),
    [anon_sym_CARET] = ACTIONS(303),
    [anon_sym_BSLASH] = ACTIONS(303),
    [sym__space] = ACTIONS(303),
    [sym__newline] = ACTIONS(303),
    [sym__tab] = ACTIONS(303),
    [sym__vertical_tab] = ACTIONS(303),
  },
  [73] = {
    [anon_sym_SEMI] = ACTIONS(305),
    [anon_sym_LBRACE] = ACTIONS(305),
    [anon_sym_RBRACE] = ACTIONS(305),
    [anon_sym_LPAREN] = ACTIONS(305),
    [anon_sym_RPAREN] = ACTIONS(305),
    [anon_sym_EQ] = ACTIONS(305),
    [anon_sym_TILDE] = ACTIONS(305),
    [anon_sym_LBRACK] = ACTIONS(305),
    [anon_sym_RBRACK] = ACTIONS(305),
    [anon_sym_DASH] = ACTIONS(305),
    [anon_sym_AT] = ACTIONS(305),
    [anon_sym__] = ACTIONS(305),
    [anon_sym_BQUOTE] = ACTIONS(305),
    [anon_sym_COLON] = ACTIONS(305),
    [anon_sym_PIPE] = ACTIONS(305),
    [anon_sym_BANG] = ACTIONS(305),
    [anon_sym_DOT] = ACTIONS(305),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(305),
    [anon_sym_DQUOTE] = ACTIONS(305),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(305),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(305),
    [sym__ascii_large] = ACTIONS(305),
    [anon_sym_POUND] = ACTIONS(305),
    [anon_sym_DOLLAR] = ACTIONS(305),
    [anon_sym_PERCENT] = ACTIONS(305),
    [anon_sym_AMP] = ACTIONS(305),
    [anon_sym_1] = ACTIONS(305),
    [anon_sym_PLUS] = ACTIONS(305),
    [anon_sym_SLASH] = ACTIONS(305),
    [anon_sym_LT] = ACTIONS(305),
    [anon_sym_GT] = ACTIONS(305),
    [anon_sym_QMARK] = ACTIONS(305),
    [anon_sym_CARET] = ACTIONS(305),
    [anon_sym_BSLASH] = ACTIONS(305),
    [sym__space] = ACTIONS(305),
    [sym__newline] = ACTIONS(305),
    [sym__tab] = ACTIONS(305),
    [sym__vertical_tab] = ACTIONS(305),
  },
  [74] = {
    [sym__char_escape] = STATE(161),
    [sym__ascii] = STATE(161),
    [anon_sym_SEMI] = ACTIONS(291),
    [anon_sym_LBRACE] = ACTIONS(291),
    [anon_sym_RBRACE] = ACTIONS(291),
    [anon_sym_LPAREN] = ACTIONS(291),
    [anon_sym_RPAREN] = ACTIONS(291),
    [anon_sym_EQ] = ACTIONS(291),
    [anon_sym_TILDE] = ACTIONS(291),
    [anon_sym_LBRACK] = ACTIONS(291),
    [anon_sym_RBRACK] = ACTIONS(291),
    [anon_sym_DASH] = ACTIONS(291),
    [anon_sym_AT] = ACTIONS(291),
    [anon_sym__] = ACTIONS(291),
    [anon_sym_BQUOTE] = ACTIONS(291),
    [anon_sym_COLON] = ACTIONS(291),
    [anon_sym_PIPE] = ACTIONS(291),
    [anon_sym_BANG] = ACTIONS(291),
    [anon_sym_DOT] = ACTIONS(291),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(307),
    [anon_sym_DQUOTE] = ACTIONS(307),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(309),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(291),
    [sym__ascii_large] = ACTIONS(291),
    [anon_sym_POUND] = ACTIONS(291),
    [anon_sym_DOLLAR] = ACTIONS(291),
    [anon_sym_PERCENT] = ACTIONS(291),
    [anon_sym_AMP] = ACTIONS(307),
    [anon_sym_1] = ACTIONS(291),
    [anon_sym_PLUS] = ACTIONS(291),
    [anon_sym_SLASH] = ACTIONS(291),
    [anon_sym_LT] = ACTIONS(291),
    [anon_sym_GT] = ACTIONS(291),
    [anon_sym_QMARK] = ACTIONS(291),
    [anon_sym_CARET] = ACTIONS(311),
    [anon_sym_BSLASH] = ACTIONS(307),
    [sym__space] = ACTIONS(291),
    [sym__newline] = ACTIONS(291),
    [sym__tab] = ACTIONS(291),
    [sym__vertical_tab] = ACTIONS(291),
    [anon_sym_x] = ACTIONS(313),
    [anon_sym_X] = ACTIONS(313),
    [anon_sym_o] = ACTIONS(315),
    [anon_sym_O] = ACTIONS(315),
    [anon_sym_a] = ACTIONS(307),
    [anon_sym_b] = ACTIONS(307),
    [anon_sym_f] = ACTIONS(307),
    [anon_sym_n] = ACTIONS(307),
    [anon_sym_r] = ACTIONS(307),
    [anon_sym_t] = ACTIONS(307),
    [anon_sym_v] = ACTIONS(307),
    [anon_sym_NUL] = ACTIONS(317),
    [anon_sym_SOH] = ACTIONS(317),
    [anon_sym_STX] = ACTIONS(317),
    [anon_sym_ETX] = ACTIONS(317),
    [anon_sym_EOT] = ACTIONS(317),
    [anon_sym_ENQ] = ACTIONS(317),
    [anon_sym_ACK] = ACTIONS(317),
    [anon_sym_BEL] = ACTIONS(317),
    [anon_sym_BS] = ACTIONS(317),
    [anon_sym_HT] = ACTIONS(317),
    [anon_sym_LF] = ACTIONS(317),
    [anon_sym_VT] = ACTIONS(317),
    [anon_sym_FF] = ACTIONS(317),
    [anon_sym_CR] = ACTIONS(317),
    [anon_sym_SO] = ACTIONS(317),
    [anon_sym_SI] = ACTIONS(317),
    [anon_sym_DLE] = ACTIONS(317),
    [anon_sym_DC1] = ACTIONS(317),
    [anon_sym_DC2] = ACTIONS(317),
    [anon_sym_DC3] = ACTIONS(317),
    [anon_sym_DC4] = ACTIONS(317),
    [anon_sym_NAK] = ACTIONS(317),
    [anon_sym_SYN] = ACTIONS(317),
    [anon_sym_ETB] = ACTIONS(317),
    [anon_sym_CAN] = ACTIONS(317),
    [anon_sym_EM] = ACTIONS(317),
    [anon_sym_SUB] = ACTIONS(317),
    [anon_sym_ESC] = ACTIONS(317),
    [anon_sym_FS] = ACTIONS(317),
    [anon_sym_GS] = ACTIONS(317),
    [anon_sym_RS] = ACTIONS(317),
    [anon_sym_US] = ACTIONS(317),
    [anon_sym_SP] = ACTIONS(317),
    [anon_sym_DEL] = ACTIONS(317),
  },
  [75] = {
    [anon_sym_SEMI] = ACTIONS(319),
    [anon_sym_LBRACE] = ACTIONS(319),
    [anon_sym_RBRACE] = ACTIONS(319),
    [anon_sym_LPAREN] = ACTIONS(319),
    [anon_sym_RPAREN] = ACTIONS(319),
    [anon_sym_EQ] = ACTIONS(319),
    [anon_sym_TILDE] = ACTIONS(319),
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
    [sym_comment] = ACTIONS(95),
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
    [anon_sym_BSLASH] = ACTIONS(319),
    [sym__space] = ACTIONS(319),
    [sym__newline] = ACTIONS(319),
    [sym__tab] = ACTIONS(319),
    [sym__vertical_tab] = ACTIONS(319),
  },
  [76] = {
    [sym__gap] = STATE(166),
    [sym__graphic] = STATE(166),
    [sym__small] = STATE(72),
    [sym__large] = STATE(72),
    [sym__symbol] = STATE(72),
    [sym__special] = STATE(72),
    [sym__escape] = STATE(166),
    [anon_sym_SEMI] = ACTIONS(105),
    [anon_sym_LBRACE] = ACTIONS(105),
    [anon_sym_RBRACE] = ACTIONS(105),
    [anon_sym_LPAREN] = ACTIONS(105),
    [anon_sym_RPAREN] = ACTIONS(105),
    [anon_sym_EQ] = ACTIONS(107),
    [anon_sym_TILDE] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(105),
    [anon_sym_RBRACK] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(107),
    [anon_sym_AT] = ACTIONS(107),
    [anon_sym__] = ACTIONS(109),
    [anon_sym_BQUOTE] = ACTIONS(105),
    [anon_sym_COLON] = ACTIONS(107),
    [anon_sym_PIPE] = ACTIONS(107),
    [anon_sym_BANG] = ACTIONS(107),
    [anon_sym_DOT] = ACTIONS(107),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(321),
    [anon_sym_DQUOTE] = ACTIONS(323),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(115),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(109),
    [sym__ascii_large] = ACTIONS(117),
    [anon_sym_POUND] = ACTIONS(107),
    [anon_sym_DOLLAR] = ACTIONS(107),
    [anon_sym_PERCENT] = ACTIONS(107),
    [anon_sym_AMP] = ACTIONS(107),
    [anon_sym_1] = ACTIONS(107),
    [anon_sym_PLUS] = ACTIONS(107),
    [anon_sym_SLASH] = ACTIONS(107),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_QMARK] = ACTIONS(107),
    [anon_sym_CARET] = ACTIONS(107),
    [anon_sym_BSLASH] = ACTIONS(119),
    [sym__space] = ACTIONS(121),
    [sym__newline] = ACTIONS(121),
    [sym__tab] = ACTIONS(121),
    [sym__vertical_tab] = ACTIONS(121),
  },
  [77] = {
    [ts_builtin_sym_end] = ACTIONS(325),
    [anon_sym_RBRACE] = ACTIONS(327),
    [anon_sym_import] = ACTIONS(327),
    [anon_sym_foreign] = ACTIONS(327),
    [anon_sym_default] = ACTIONS(327),
    [anon_sym_class] = ACTIONS(327),
    [anon_sym_instance] = ACTIONS(327),
    [anon_sym_infixl] = ACTIONS(327),
    [anon_sym_infixr] = ACTIONS(327),
    [anon_sym_infix] = ACTIONS(327),
    [anon_sym_data] = ACTIONS(327),
    [anon_sym_newtype] = ACTIONS(327),
    [anon_sym_type] = ACTIONS(327),
    [sym__variable_pattern] = ACTIONS(329),
    [sym__constructor_pattern] = ACTIONS(329),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(329),
    [anon_sym_SQUOTE] = ACTIONS(327),
    [anon_sym_DQUOTE] = ACTIONS(327),
    [sym__integer_literal] = ACTIONS(327),
    [sym__octal_literal] = ACTIONS(327),
    [sym__hexidecimal_literal] = ACTIONS(327),
  },
  [78] = {
    [sym_where_pattern] = STATE(172),
    [sym_general_constructor] = STATE(173),
    [sym__variable] = STATE(173),
    [sym_qualified_variable_identifier] = STATE(174),
    [sym__expression] = STATE(175),
    [sym_do_expression] = STATE(173),
    [sym__literal] = STATE(173),
    [sym__identifier] = STATE(173),
    [sym_variable_identifier] = STATE(26),
    [sym_constructor_identifier] = STATE(176),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [aux_sym_function_body_repeat1] = STATE(177),
    [sym__layout_semicolon] = ACTIONS(331),
    [anon_sym_SEMI] = ACTIONS(333),
    [anon_sym_where] = ACTIONS(335),
    [anon_sym_do] = ACTIONS(337),
    [sym__variable_pattern] = ACTIONS(339),
    [sym__constructor_pattern] = ACTIONS(341),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym__integer_literal] = ACTIONS(41),
    [sym__octal_literal] = ACTIONS(41),
    [sym__hexidecimal_literal] = ACTIONS(41),
  },
  [79] = {
    [sym__layout_semicolon] = ACTIONS(343),
    [anon_sym_SEMI] = ACTIONS(345),
    [sym_comment] = ACTIONS(5),
  },
  [80] = {
    [sym__function_pattern] = STATE(181),
    [sym_irrefutable_pattern] = STATE(84),
    [sym_list_pattern] = STATE(84),
    [sym_tuple_pattern] = STATE(84),
    [sym_parenthesized_pattern] = STATE(84),
    [sym__pattern] = STATE(182),
    [sym_negative_literal] = STATE(183),
    [sym_general_constructor] = STATE(183),
    [sym_as_pattern] = STATE(84),
    [sym_wildcard] = STATE(84),
    [sym__variable] = STATE(184),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym__literal] = STATE(84),
    [sym__identifier] = STATE(92),
    [sym_simple_type] = STATE(93),
    [sym_variable_identifier] = STATE(94),
    [sym_constructor_identifier] = STATE(185),
    [sym_integer] = STATE(87),
    [sym_char] = STATE(87),
    [sym_string] = STATE(87),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(347),
    [anon_sym_LBRACK] = ACTIONS(147),
    [anon_sym_DASH] = ACTIONS(349),
    [anon_sym__] = ACTIONS(149),
    [sym_list_constructor] = ACTIONS(151),
    [sym__variable_pattern] = ACTIONS(153),
    [sym__constructor_pattern] = ACTIONS(351),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(159),
    [anon_sym_DQUOTE] = ACTIONS(161),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [81] = {
    [sym__function_pattern] = STATE(186),
    [sym_irrefutable_pattern] = STATE(84),
    [sym_list_pattern] = STATE(84),
    [sym_tuple_pattern] = STATE(84),
    [sym_parenthesized_pattern] = STATE(84),
    [sym_as_pattern] = STATE(84),
    [sym_wildcard] = STATE(84),
    [sym__variable] = STATE(91),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym__literal] = STATE(84),
    [sym__identifier] = STATE(92),
    [sym_simple_type] = STATE(93),
    [sym_variable_identifier] = STATE(94),
    [sym_constructor_identifier] = STATE(95),
    [sym_integer] = STATE(87),
    [sym_char] = STATE(87),
    [sym_string] = STATE(87),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(145),
    [anon_sym_LBRACK] = ACTIONS(147),
    [anon_sym__] = ACTIONS(149),
    [sym_list_constructor] = ACTIONS(151),
    [sym__variable_pattern] = ACTIONS(153),
    [sym__constructor_pattern] = ACTIONS(155),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(159),
    [anon_sym_DQUOTE] = ACTIONS(161),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [82] = {
    [sym__function_pattern] = STATE(188),
    [sym_irrefutable_pattern] = STATE(84),
    [sym_list_pattern] = STATE(84),
    [sym_tuple_pattern] = STATE(84),
    [sym_parenthesized_pattern] = STATE(84),
    [sym_as_pattern] = STATE(84),
    [sym_wildcard] = STATE(84),
    [sym__variable] = STATE(189),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym__literal] = STATE(84),
    [sym__identifier] = STATE(92),
    [sym_simple_type] = STATE(93),
    [sym_variable_identifier] = STATE(94),
    [sym_constructor_identifier] = STATE(190),
    [sym_integer] = STATE(87),
    [sym_char] = STATE(87),
    [sym_string] = STATE(87),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(353),
    [anon_sym_LBRACK] = ACTIONS(147),
    [anon_sym__] = ACTIONS(149),
    [sym_list_constructor] = ACTIONS(151),
    [sym__variable_pattern] = ACTIONS(153),
    [sym__constructor_pattern] = ACTIONS(351),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(159),
    [anon_sym_DQUOTE] = ACTIONS(161),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [83] = {
    [anon_sym_LPAREN] = ACTIONS(355),
    [anon_sym_COMMA] = ACTIONS(355),
    [anon_sym_RPAREN] = ACTIONS(355),
    [anon_sym_EQ] = ACTIONS(355),
    [anon_sym_TILDE] = ACTIONS(355),
    [anon_sym_LBRACK] = ACTIONS(355),
    [anon_sym_RBRACK] = ACTIONS(355),
    [anon_sym_DASH] = ACTIONS(355),
    [anon_sym__] = ACTIONS(355),
    [anon_sym_BQUOTE] = ACTIONS(355),
    [anon_sym_COLON] = ACTIONS(355),
    [sym_list_constructor] = ACTIONS(355),
    [anon_sym_BANG] = ACTIONS(355),
    [sym__variable_pattern] = ACTIONS(357),
    [sym__constructor_pattern] = ACTIONS(357),
    [anon_sym_DOT] = ACTIONS(355),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(357),
    [anon_sym_SQUOTE] = ACTIONS(355),
    [anon_sym_DQUOTE] = ACTIONS(355),
    [anon_sym_POUND] = ACTIONS(355),
    [anon_sym_DOLLAR] = ACTIONS(355),
    [anon_sym_PERCENT] = ACTIONS(355),
    [anon_sym_AMP] = ACTIONS(355),
    [anon_sym_1] = ACTIONS(355),
    [anon_sym_PLUS] = ACTIONS(355),
    [anon_sym_SLASH] = ACTIONS(355),
    [anon_sym_LT] = ACTIONS(355),
    [anon_sym_GT] = ACTIONS(355),
    [anon_sym_QMARK] = ACTIONS(355),
    [anon_sym_CARET] = ACTIONS(355),
    [sym__integer_literal] = ACTIONS(355),
    [sym__octal_literal] = ACTIONS(355),
    [sym__hexidecimal_literal] = ACTIONS(355),
  },
  [84] = {
    [anon_sym_LPAREN] = ACTIONS(359),
    [anon_sym_COMMA] = ACTIONS(359),
    [anon_sym_RPAREN] = ACTIONS(359),
    [anon_sym_EQ] = ACTIONS(359),
    [anon_sym_TILDE] = ACTIONS(359),
    [anon_sym_LBRACK] = ACTIONS(359),
    [anon_sym_RBRACK] = ACTIONS(359),
    [anon_sym_DASH] = ACTIONS(359),
    [anon_sym__] = ACTIONS(359),
    [anon_sym_BQUOTE] = ACTIONS(359),
    [anon_sym_COLON] = ACTIONS(359),
    [sym_list_constructor] = ACTIONS(359),
    [anon_sym_BANG] = ACTIONS(359),
    [sym__variable_pattern] = ACTIONS(361),
    [sym__constructor_pattern] = ACTIONS(361),
    [anon_sym_DOT] = ACTIONS(359),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(361),
    [anon_sym_SQUOTE] = ACTIONS(359),
    [anon_sym_DQUOTE] = ACTIONS(359),
    [anon_sym_POUND] = ACTIONS(359),
    [anon_sym_DOLLAR] = ACTIONS(359),
    [anon_sym_PERCENT] = ACTIONS(359),
    [anon_sym_AMP] = ACTIONS(359),
    [anon_sym_1] = ACTIONS(359),
    [anon_sym_PLUS] = ACTIONS(359),
    [anon_sym_SLASH] = ACTIONS(359),
    [anon_sym_LT] = ACTIONS(359),
    [anon_sym_GT] = ACTIONS(359),
    [anon_sym_QMARK] = ACTIONS(359),
    [anon_sym_CARET] = ACTIONS(359),
    [sym__integer_literal] = ACTIONS(359),
    [sym__octal_literal] = ACTIONS(359),
    [sym__hexidecimal_literal] = ACTIONS(359),
  },
  [85] = {
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_RBRACE] = ACTIONS(73),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_COMMA] = ACTIONS(73),
    [anon_sym_RPAREN] = ACTIONS(73),
    [anon_sym_EQ] = ACTIONS(73),
    [anon_sym_TILDE] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(73),
    [anon_sym_RBRACK] = ACTIONS(73),
    [anon_sym_DASH] = ACTIONS(73),
    [anon_sym_AT] = ACTIONS(73),
    [anon_sym__] = ACTIONS(73),
    [anon_sym_BQUOTE] = ACTIONS(73),
    [anon_sym_COLON] = ACTIONS(73),
    [sym_list_constructor] = ACTIONS(73),
    [anon_sym_BANG] = ACTIONS(73),
    [sym__variable_pattern] = ACTIONS(75),
    [sym__constructor_pattern] = ACTIONS(75),
    [anon_sym_DOT] = ACTIONS(73),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(75),
    [anon_sym_SQUOTE] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [anon_sym_POUND] = ACTIONS(73),
    [anon_sym_DOLLAR] = ACTIONS(73),
    [anon_sym_PERCENT] = ACTIONS(73),
    [anon_sym_AMP] = ACTIONS(73),
    [anon_sym_1] = ACTIONS(73),
    [anon_sym_PLUS] = ACTIONS(73),
    [anon_sym_SLASH] = ACTIONS(73),
    [anon_sym_LT] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(73),
    [anon_sym_QMARK] = ACTIONS(73),
    [anon_sym_CARET] = ACTIONS(73),
    [sym__integer_literal] = ACTIONS(73),
    [sym__octal_literal] = ACTIONS(73),
    [sym__hexidecimal_literal] = ACTIONS(73),
  },
  [86] = {
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(79),
    [anon_sym_TILDE] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym__] = ACTIONS(79),
    [sym_list_constructor] = ACTIONS(79),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(201),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(201),
    [anon_sym_SQUOTE] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym__integer_literal] = ACTIONS(79),
    [sym__octal_literal] = ACTIONS(79),
    [sym__hexidecimal_literal] = ACTIONS(79),
  },
  [87] = {
    [anon_sym_RBRACE] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_COMMA] = ACTIONS(85),
    [anon_sym_RPAREN] = ACTIONS(85),
    [anon_sym_EQ] = ACTIONS(85),
    [anon_sym_TILDE] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(85),
    [anon_sym_RBRACK] = ACTIONS(85),
    [anon_sym_DASH] = ACTIONS(85),
    [anon_sym__] = ACTIONS(85),
    [anon_sym_BQUOTE] = ACTIONS(85),
    [anon_sym_COLON] = ACTIONS(85),
    [sym_list_constructor] = ACTIONS(85),
    [anon_sym_BANG] = ACTIONS(85),
    [sym__variable_pattern] = ACTIONS(87),
    [sym__constructor_pattern] = ACTIONS(87),
    [anon_sym_DOT] = ACTIONS(85),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(87),
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
  [88] = {
    [sym__graphic] = STATE(191),
    [sym__small] = STATE(64),
    [sym__large] = STATE(64),
    [sym__symbol] = STATE(64),
    [sym__special] = STATE(64),
    [sym__escape] = STATE(191),
    [anon_sym_SEMI] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_RBRACE] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_RPAREN] = ACTIONS(89),
    [anon_sym_EQ] = ACTIONS(91),
    [anon_sym_TILDE] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_RBRACK] = ACTIONS(89),
    [anon_sym_DASH] = ACTIONS(91),
    [anon_sym_AT] = ACTIONS(91),
    [anon_sym__] = ACTIONS(93),
    [anon_sym_BQUOTE] = ACTIONS(89),
    [anon_sym_COLON] = ACTIONS(91),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_BANG] = ACTIONS(91),
    [anon_sym_DOT] = ACTIONS(91),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(363),
    [anon_sym_DQUOTE] = ACTIONS(363),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(99),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(93),
    [sym__ascii_large] = ACTIONS(101),
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
    [anon_sym_BSLASH] = ACTIONS(103),
    [sym__space] = ACTIONS(363),
  },
  [89] = {
    [sym__gap] = STATE(70),
    [sym__graphic] = STATE(70),
    [sym__small] = STATE(72),
    [sym__large] = STATE(72),
    [sym__symbol] = STATE(72),
    [sym__special] = STATE(72),
    [sym__escape] = STATE(70),
    [aux_sym_string_repeat1] = STATE(193),
    [anon_sym_SEMI] = ACTIONS(105),
    [anon_sym_LBRACE] = ACTIONS(105),
    [anon_sym_RBRACE] = ACTIONS(105),
    [anon_sym_LPAREN] = ACTIONS(105),
    [anon_sym_RPAREN] = ACTIONS(105),
    [anon_sym_EQ] = ACTIONS(107),
    [anon_sym_TILDE] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(105),
    [anon_sym_RBRACK] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(107),
    [anon_sym_AT] = ACTIONS(107),
    [anon_sym__] = ACTIONS(109),
    [anon_sym_BQUOTE] = ACTIONS(105),
    [anon_sym_COLON] = ACTIONS(107),
    [anon_sym_PIPE] = ACTIONS(107),
    [anon_sym_BANG] = ACTIONS(107),
    [anon_sym_DOT] = ACTIONS(107),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(111),
    [anon_sym_DQUOTE] = ACTIONS(365),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(115),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(109),
    [sym__ascii_large] = ACTIONS(117),
    [anon_sym_POUND] = ACTIONS(107),
    [anon_sym_DOLLAR] = ACTIONS(107),
    [anon_sym_PERCENT] = ACTIONS(107),
    [anon_sym_AMP] = ACTIONS(107),
    [anon_sym_1] = ACTIONS(107),
    [anon_sym_PLUS] = ACTIONS(107),
    [anon_sym_SLASH] = ACTIONS(107),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_QMARK] = ACTIONS(107),
    [anon_sym_CARET] = ACTIONS(107),
    [anon_sym_BSLASH] = ACTIONS(119),
    [sym__space] = ACTIONS(121),
    [sym__newline] = ACTIONS(121),
    [sym__tab] = ACTIONS(121),
    [sym__vertical_tab] = ACTIONS(121),
  },
  [90] = {
    [anon_sym_LPAREN] = ACTIONS(367),
    [anon_sym_EQ] = ACTIONS(367),
    [anon_sym_TILDE] = ACTIONS(367),
    [anon_sym_LBRACK] = ACTIONS(367),
    [anon_sym__] = ACTIONS(367),
    [sym_list_constructor] = ACTIONS(367),
    [sym__variable_pattern] = ACTIONS(369),
    [sym__constructor_pattern] = ACTIONS(369),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(369),
    [anon_sym_SQUOTE] = ACTIONS(367),
    [anon_sym_DQUOTE] = ACTIONS(367),
    [sym__integer_literal] = ACTIONS(367),
    [sym__octal_literal] = ACTIONS(367),
    [sym__hexidecimal_literal] = ACTIONS(367),
  },
  [91] = {
    [anon_sym_AT] = ACTIONS(371),
    [sym_comment] = ACTIONS(5),
  },
  [92] = {
    [anon_sym_LBRACE] = ACTIONS(373),
    [anon_sym_LPAREN] = ACTIONS(359),
    [anon_sym_COMMA] = ACTIONS(359),
    [anon_sym_RPAREN] = ACTIONS(359),
    [anon_sym_EQ] = ACTIONS(359),
    [anon_sym_TILDE] = ACTIONS(359),
    [anon_sym_LBRACK] = ACTIONS(359),
    [anon_sym_RBRACK] = ACTIONS(359),
    [anon_sym_DASH] = ACTIONS(359),
    [anon_sym__] = ACTIONS(359),
    [anon_sym_BQUOTE] = ACTIONS(359),
    [anon_sym_COLON] = ACTIONS(359),
    [sym_list_constructor] = ACTIONS(359),
    [anon_sym_BANG] = ACTIONS(359),
    [sym__variable_pattern] = ACTIONS(361),
    [sym__constructor_pattern] = ACTIONS(361),
    [anon_sym_DOT] = ACTIONS(359),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(361),
    [anon_sym_SQUOTE] = ACTIONS(359),
    [anon_sym_DQUOTE] = ACTIONS(359),
    [anon_sym_POUND] = ACTIONS(359),
    [anon_sym_DOLLAR] = ACTIONS(359),
    [anon_sym_PERCENT] = ACTIONS(359),
    [anon_sym_AMP] = ACTIONS(359),
    [anon_sym_1] = ACTIONS(359),
    [anon_sym_PLUS] = ACTIONS(359),
    [anon_sym_SLASH] = ACTIONS(359),
    [anon_sym_LT] = ACTIONS(359),
    [anon_sym_GT] = ACTIONS(359),
    [anon_sym_QMARK] = ACTIONS(359),
    [anon_sym_CARET] = ACTIONS(359),
    [sym__integer_literal] = ACTIONS(359),
    [sym__octal_literal] = ACTIONS(359),
    [sym__hexidecimal_literal] = ACTIONS(359),
  },
  [93] = {
    [anon_sym_LBRACE] = ACTIONS(373),
    [sym_comment] = ACTIONS(5),
  },
  [94] = {
    [anon_sym_LBRACE] = ACTIONS(171),
    [anon_sym_LPAREN] = ACTIONS(171),
    [anon_sym_COMMA] = ACTIONS(171),
    [anon_sym_RPAREN] = ACTIONS(171),
    [anon_sym_EQ] = ACTIONS(171),
    [anon_sym_TILDE] = ACTIONS(171),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_RBRACK] = ACTIONS(171),
    [anon_sym_DASH] = ACTIONS(171),
    [anon_sym_AT] = ACTIONS(163),
    [anon_sym__] = ACTIONS(171),
    [anon_sym_BQUOTE] = ACTIONS(171),
    [anon_sym_COLON] = ACTIONS(171),
    [sym_list_constructor] = ACTIONS(171),
    [anon_sym_BANG] = ACTIONS(171),
    [sym__variable_pattern] = ACTIONS(173),
    [sym__constructor_pattern] = ACTIONS(173),
    [anon_sym_DOT] = ACTIONS(171),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(173),
    [anon_sym_SQUOTE] = ACTIONS(171),
    [anon_sym_DQUOTE] = ACTIONS(171),
    [anon_sym_POUND] = ACTIONS(171),
    [anon_sym_DOLLAR] = ACTIONS(171),
    [anon_sym_PERCENT] = ACTIONS(171),
    [anon_sym_AMP] = ACTIONS(171),
    [anon_sym_1] = ACTIONS(171),
    [anon_sym_PLUS] = ACTIONS(171),
    [anon_sym_SLASH] = ACTIONS(171),
    [anon_sym_LT] = ACTIONS(171),
    [anon_sym_GT] = ACTIONS(171),
    [anon_sym_QMARK] = ACTIONS(171),
    [anon_sym_CARET] = ACTIONS(171),
    [sym__integer_literal] = ACTIONS(171),
    [sym__octal_literal] = ACTIONS(171),
    [sym__hexidecimal_literal] = ACTIONS(171),
  },
  [95] = {
    [sym_variable_identifier] = STATE(152),
    [aux_sym_type_class_repeat1] = STATE(196),
    [anon_sym_LBRACE] = ACTIONS(171),
    [anon_sym_LPAREN] = ACTIONS(171),
    [anon_sym_EQ] = ACTIONS(171),
    [anon_sym_TILDE] = ACTIONS(171),
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
  [96] = {
    [sym__function_pattern] = STATE(197),
    [sym_irrefutable_pattern] = STATE(84),
    [sym_list_pattern] = STATE(84),
    [sym_tuple_pattern] = STATE(84),
    [sym_parenthesized_pattern] = STATE(84),
    [sym_as_pattern] = STATE(84),
    [sym_wildcard] = STATE(84),
    [sym__variable] = STATE(91),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym__literal] = STATE(84),
    [sym__identifier] = STATE(92),
    [sym_simple_type] = STATE(93),
    [sym_variable_identifier] = STATE(94),
    [sym_constructor_identifier] = STATE(95),
    [sym_integer] = STATE(87),
    [sym_char] = STATE(87),
    [sym_string] = STATE(87),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_EQ] = ACTIONS(375),
    [anon_sym_TILDE] = ACTIONS(145),
    [anon_sym_LBRACK] = ACTIONS(147),
    [anon_sym__] = ACTIONS(149),
    [sym_list_constructor] = ACTIONS(151),
    [sym__variable_pattern] = ACTIONS(153),
    [sym__constructor_pattern] = ACTIONS(155),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(159),
    [anon_sym_DQUOTE] = ACTIONS(161),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [97] = {
    [sym_type] = STATE(203),
    [sym__generic_type_constructor] = STATE(204),
    [sym_tupling_constructor] = STATE(200),
    [sym_tuple] = STATE(204),
    [sym_list] = STATE(204),
    [sym_parenthesized_constructor] = STATE(204),
    [sym_context] = STATE(205),
    [sym_class] = STATE(206),
    [sym_variable_identifier] = STATE(207),
    [sym_constructor_identifier] = STATE(208),
    [sym__type_constructors] = STATE(200),
    [sym_qualified_type_constructor] = STATE(209),
    [anon_sym_LPAREN] = ACTIONS(377),
    [anon_sym_LBRACK] = ACTIONS(379),
    [sym_unit_type] = ACTIONS(381),
    [sym_list_constructor] = ACTIONS(381),
    [sym_function_constructor] = ACTIONS(381),
    [sym__variable_pattern] = ACTIONS(383),
    [sym__constructor_pattern] = ACTIONS(385),
    [sym_module_identifier] = ACTIONS(387),
    [sym_comment] = ACTIONS(5),
  },
  [98] = {
    [sym__layout_semicolon] = ACTIONS(389),
    [anon_sym_SEMI] = ACTIONS(391),
    [sym_comment] = ACTIONS(5),
  },
  [99] = {
    [sym_export] = STATE(212),
    [sym__identifier] = STATE(213),
    [sym_variable_identifier] = STATE(112),
    [sym_constructor_identifier] = STATE(112),
    [anon_sym_RPAREN] = ACTIONS(393),
    [sym__variable_pattern] = ACTIONS(199),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [100] = {
    [sym__declarations] = STATE(216),
    [sym__layout_open_brace] = ACTIONS(395),
    [anon_sym_LBRACE] = ACTIONS(397),
    [sym_comment] = ACTIONS(5),
  },
  [101] = {
    [sym_where_pattern] = STATE(217),
    [anon_sym_where] = ACTIONS(179),
    [sym_comment] = ACTIONS(5),
  },
  [102] = {
    [ts_builtin_sym_end] = ACTIONS(399),
    [sym_comment] = ACTIONS(5),
  },
  [103] = {
    [sym_import_specification] = STATE(219),
    [sym__layout_semicolon] = ACTIONS(401),
    [anon_sym_SEMI] = ACTIONS(403),
    [anon_sym_LPAREN] = ACTIONS(187),
    [anon_sym_as] = ACTIONS(405),
    [anon_sym_hiding] = ACTIONS(191),
    [sym_comment] = ACTIONS(5),
  },
  [104] = {
    [sym__identifier] = STATE(221),
    [sym_variable_identifier] = STATE(112),
    [sym_constructor_identifier] = STATE(112),
    [anon_sym_RPAREN] = ACTIONS(407),
    [sym__variable_pattern] = ACTIONS(199),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [105] = {
    [sym_module_identifier] = ACTIONS(409),
    [sym_comment] = ACTIONS(5),
  },
  [106] = {
    [anon_sym_LPAREN] = ACTIONS(411),
    [sym_comment] = ACTIONS(5),
  },
  [107] = {
    [sym__layout_semicolon] = ACTIONS(401),
    [anon_sym_SEMI] = ACTIONS(403),
    [sym_comment] = ACTIONS(5),
  },
  [108] = {
    [anon_sym_unsafe] = ACTIONS(413),
    [anon_sym_safe] = ACTIONS(413),
    [sym__variable_pattern] = ACTIONS(415),
    [sym__constructor_pattern] = ACTIONS(415),
    [sym_comment] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(413),
  },
  [109] = {
    [sym_safety] = STATE(226),
    [sym_type_signature] = STATE(227),
    [sym__identifier] = STATE(228),
    [sym_variable_identifier] = STATE(112),
    [sym_constructor_identifier] = STATE(112),
    [sym_string] = STATE(229),
    [anon_sym_unsafe] = ACTIONS(417),
    [anon_sym_safe] = ACTIONS(417),
    [sym__variable_pattern] = ACTIONS(209),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(419),
  },
  [110] = {
    [sym__layout_semicolon] = ACTIONS(421),
    [anon_sym_SEMI] = ACTIONS(423),
    [sym_comment] = ACTIONS(5),
  },
  [111] = {
    [aux_sym_export_repeat1] = STATE(232),
    [anon_sym_COMMA] = ACTIONS(425),
    [anon_sym_RPAREN] = ACTIONS(427),
    [sym_comment] = ACTIONS(5),
  },
  [112] = {
    [anon_sym_RBRACE] = ACTIONS(171),
    [anon_sym_LPAREN] = ACTIONS(171),
    [anon_sym_COMMA] = ACTIONS(171),
    [anon_sym_RPAREN] = ACTIONS(171),
    [anon_sym_EQ] = ACTIONS(171),
    [anon_sym_BQUOTE] = ACTIONS(171),
    [anon_sym_COLON_COLON] = ACTIONS(171),
    [sym_comment] = ACTIONS(5),
  },
  [113] = {
    [aux_sym_context_repeat1] = STATE(235),
    [anon_sym_COMMA] = ACTIONS(429),
    [anon_sym_RPAREN] = ACTIONS(431),
    [sym_comment] = ACTIONS(5),
  },
  [114] = {
    [sym_variable_identifier] = STATE(236),
    [anon_sym_LPAREN] = ACTIONS(205),
    [sym__variable_pattern] = ACTIONS(199),
    [sym_comment] = ACTIONS(5),
  },
  [115] = {
    [sym_variable_identifier] = STATE(238),
    [aux_sym_type_class_repeat1] = STATE(239),
    [anon_sym_where] = ACTIONS(433),
    [sym__variable_pattern] = ACTIONS(209),
    [sym_comment] = ACTIONS(5),
  },
  [116] = {
    [sym__constructor_pattern] = ACTIONS(435),
    [sym_comment] = ACTIONS(5),
  },
  [117] = {
    [sym_variable_identifier] = STATE(152),
    [aux_sym_type_class_repeat1] = STATE(240),
    [sym__variable_pattern] = ACTIONS(255),
    [sym_comment] = ACTIONS(5),
  },
  [118] = {
    [sym__declarations] = STATE(243),
    [sym__layout_open_brace] = ACTIONS(437),
    [anon_sym_LBRACE] = ACTIONS(439),
    [sym_comment] = ACTIONS(5),
  },
  [119] = {
    [anon_sym_COMMA] = ACTIONS(73),
    [anon_sym_RPAREN] = ACTIONS(73),
    [anon_sym_where] = ACTIONS(73),
    [anon_sym_COLON_COLON] = ACTIONS(73),
    [anon_sym_DASH_GT] = ACTIONS(73),
    [anon_sym_EQ_GT] = ACTIONS(73),
    [sym__variable_pattern] = ACTIONS(75),
    [sym_comment] = ACTIONS(5),
  },
  [120] = {
    [anon_sym_where] = ACTIONS(441),
    [anon_sym_EQ_GT] = ACTIONS(443),
    [sym__variable_pattern] = ACTIONS(445),
    [sym_comment] = ACTIONS(5),
  },
  [121] = {
    [sym_variable_identifier] = STATE(244),
    [anon_sym_where] = ACTIONS(433),
    [sym__variable_pattern] = ACTIONS(209),
    [sym_comment] = ACTIONS(5),
  },
  [122] = {
    [sym_variable_identifier] = STATE(238),
    [aux_sym_type_class_repeat1] = STATE(246),
    [anon_sym_where] = ACTIONS(447),
    [sym__variable_pattern] = ACTIONS(209),
    [sym_comment] = ACTIONS(5),
  },
  [123] = {
    [sym__declarations] = STATE(247),
    [sym__layout_open_brace] = ACTIONS(437),
    [anon_sym_LBRACE] = ACTIONS(439),
    [sym_comment] = ACTIONS(5),
  },
  [124] = {
    [sym_variable_identifier] = STATE(244),
    [anon_sym_where] = ACTIONS(447),
    [sym__variable_pattern] = ACTIONS(209),
    [sym_comment] = ACTIONS(5),
  },
  [125] = {
    [anon_sym_BQUOTE] = ACTIONS(449),
    [sym_comment] = ACTIONS(5),
  },
  [126] = {
    [sym__layout_semicolon] = ACTIONS(451),
    [anon_sym_SEMI] = ACTIONS(453),
    [anon_sym_COMMA] = ACTIONS(453),
    [anon_sym_DASH] = ACTIONS(453),
    [anon_sym_COLON] = ACTIONS(453),
    [anon_sym_BANG] = ACTIONS(453),
    [anon_sym_DOT] = ACTIONS(453),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(453),
    [anon_sym_DOLLAR] = ACTIONS(453),
    [anon_sym_PERCENT] = ACTIONS(453),
    [anon_sym_AMP] = ACTIONS(453),
    [anon_sym_1] = ACTIONS(453),
    [anon_sym_PLUS] = ACTIONS(453),
    [anon_sym_SLASH] = ACTIONS(453),
    [anon_sym_LT] = ACTIONS(453),
    [anon_sym_GT] = ACTIONS(453),
    [anon_sym_QMARK] = ACTIONS(453),
    [anon_sym_CARET] = ACTIONS(453),
  },
  [127] = {
    [sym__layout_semicolon] = ACTIONS(455),
    [anon_sym_SEMI] = ACTIONS(457),
    [anon_sym_COMMA] = ACTIONS(457),
    [anon_sym_DASH] = ACTIONS(457),
    [anon_sym_COLON] = ACTIONS(457),
    [anon_sym_BANG] = ACTIONS(457),
    [anon_sym_DOT] = ACTIONS(457),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(457),
    [anon_sym_DOLLAR] = ACTIONS(457),
    [anon_sym_PERCENT] = ACTIONS(457),
    [anon_sym_AMP] = ACTIONS(457),
    [anon_sym_1] = ACTIONS(457),
    [anon_sym_PLUS] = ACTIONS(457),
    [anon_sym_SLASH] = ACTIONS(457),
    [anon_sym_LT] = ACTIONS(457),
    [anon_sym_GT] = ACTIONS(457),
    [anon_sym_QMARK] = ACTIONS(457),
    [anon_sym_CARET] = ACTIONS(457),
  },
  [128] = {
    [sym__constructor_symbol] = STATE(249),
    [sym__layout_semicolon] = ACTIONS(459),
    [anon_sym_SEMI] = ACTIONS(461),
    [anon_sym_COMMA] = ACTIONS(461),
    [anon_sym_DASH] = ACTIONS(221),
    [anon_sym_COLON] = ACTIONS(221),
    [anon_sym_BANG] = ACTIONS(221),
    [anon_sym_DOT] = ACTIONS(221),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(221),
    [anon_sym_DOLLAR] = ACTIONS(221),
    [anon_sym_PERCENT] = ACTIONS(221),
    [anon_sym_AMP] = ACTIONS(221),
    [anon_sym_1] = ACTIONS(221),
    [anon_sym_PLUS] = ACTIONS(221),
    [anon_sym_SLASH] = ACTIONS(221),
    [anon_sym_LT] = ACTIONS(221),
    [anon_sym_GT] = ACTIONS(221),
    [anon_sym_QMARK] = ACTIONS(221),
    [anon_sym_CARET] = ACTIONS(221),
  },
  [129] = {
    [sym__op] = STATE(250),
    [sym_variable_symbol] = STATE(46),
    [sym_constructor_symbol] = STATE(46),
    [sym__variable_symbol] = STATE(48),
    [anon_sym_DASH] = ACTIONS(59),
    [anon_sym_BQUOTE] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(63),
    [anon_sym_BANG] = ACTIONS(59),
    [anon_sym_DOT] = ACTIONS(59),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(59),
    [anon_sym_DOLLAR] = ACTIONS(59),
    [anon_sym_PERCENT] = ACTIONS(59),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_1] = ACTIONS(59),
    [anon_sym_PLUS] = ACTIONS(59),
    [anon_sym_SLASH] = ACTIONS(59),
    [anon_sym_LT] = ACTIONS(59),
    [anon_sym_GT] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(59),
    [anon_sym_CARET] = ACTIONS(59),
  },
  [130] = {
    [sym__layout_semicolon] = ACTIONS(463),
    [anon_sym_SEMI] = ACTIONS(465),
    [anon_sym_COMMA] = ACTIONS(467),
    [sym_comment] = ACTIONS(5),
  },
  [131] = {
    [aux_sym_fixity_repeat1] = STATE(252),
    [sym__layout_semicolon] = ACTIONS(463),
    [anon_sym_SEMI] = ACTIONS(465),
    [anon_sym_COMMA] = ACTIONS(227),
    [sym_comment] = ACTIONS(5),
  },
  [132] = {
    [sym__layout_semicolon] = ACTIONS(469),
    [anon_sym_SEMI] = ACTIONS(471),
    [anon_sym_COMMA] = ACTIONS(471),
    [anon_sym_DASH] = ACTIONS(471),
    [anon_sym_BANG] = ACTIONS(471),
    [anon_sym_DOT] = ACTIONS(471),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(471),
    [anon_sym_DOLLAR] = ACTIONS(471),
    [anon_sym_PERCENT] = ACTIONS(471),
    [anon_sym_AMP] = ACTIONS(471),
    [anon_sym_1] = ACTIONS(471),
    [anon_sym_PLUS] = ACTIONS(471),
    [anon_sym_SLASH] = ACTIONS(471),
    [anon_sym_LT] = ACTIONS(471),
    [anon_sym_GT] = ACTIONS(471),
    [anon_sym_QMARK] = ACTIONS(471),
    [anon_sym_CARET] = ACTIONS(471),
  },
  [133] = {
    [sym__variable_symbol] = STATE(253),
    [sym__layout_semicolon] = ACTIONS(473),
    [anon_sym_SEMI] = ACTIONS(475),
    [anon_sym_COMMA] = ACTIONS(475),
    [anon_sym_DASH] = ACTIONS(59),
    [anon_sym_BANG] = ACTIONS(59),
    [anon_sym_DOT] = ACTIONS(59),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(59),
    [anon_sym_DOLLAR] = ACTIONS(59),
    [anon_sym_PERCENT] = ACTIONS(59),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_1] = ACTIONS(59),
    [anon_sym_PLUS] = ACTIONS(59),
    [anon_sym_SLASH] = ACTIONS(59),
    [anon_sym_LT] = ACTIONS(59),
    [anon_sym_GT] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(59),
    [anon_sym_CARET] = ACTIONS(59),
  },
  [134] = {
    [sym_constructors] = STATE(255),
    [sym_constructor] = STATE(139),
    [sym_deriving] = STATE(256),
    [sym_constructor_identifier] = STATE(141),
    [sym__layout_semicolon] = ACTIONS(477),
    [anon_sym_SEMI] = ACTIONS(479),
    [anon_sym_EQ] = ACTIONS(481),
    [anon_sym_deriving] = ACTIONS(243),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [135] = {
    [sym_variable_identifier] = STATE(258),
    [aux_sym_type_class_repeat1] = STATE(144),
    [sym__layout_semicolon] = ACTIONS(245),
    [anon_sym_SEMI] = ACTIONS(247),
    [anon_sym_EQ] = ACTIONS(247),
    [anon_sym_deriving] = ACTIONS(247),
    [sym__variable_pattern] = ACTIONS(483),
    [sym__constructor_pattern] = ACTIONS(251),
    [sym_comment] = ACTIONS(5),
  },
  [136] = {
    [sym_constructors] = STATE(255),
    [sym_constructor] = STATE(139),
    [sym_deriving] = STATE(256),
    [sym_constructor_identifier] = STATE(141),
    [sym__layout_semicolon] = ACTIONS(477),
    [anon_sym_SEMI] = ACTIONS(479),
    [anon_sym_deriving] = ACTIONS(243),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [137] = {
    [sym__identifier] = STATE(260),
    [sym_variable_identifier] = STATE(26),
    [sym_constructor_identifier] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(485),
    [sym__variable_pattern] = ACTIONS(383),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [138] = {
    [sym_deriving] = STATE(256),
    [sym__layout_semicolon] = ACTIONS(477),
    [anon_sym_SEMI] = ACTIONS(479),
    [anon_sym_deriving] = ACTIONS(243),
    [sym_comment] = ACTIONS(5),
  },
  [139] = {
    [aux_sym_constructors_repeat1] = STATE(262),
    [sym__layout_semicolon] = ACTIONS(487),
    [anon_sym_SEMI] = ACTIONS(489),
    [anon_sym_PIPE] = ACTIONS(491),
    [anon_sym_deriving] = ACTIONS(489),
    [sym_comment] = ACTIONS(5),
  },
  [140] = {
    [sym__layout_semicolon] = ACTIONS(477),
    [anon_sym_SEMI] = ACTIONS(479),
    [sym_comment] = ACTIONS(5),
  },
  [141] = {
    [sym_strict] = STATE(265),
    [sym__identifier] = STATE(265),
    [sym_variable_identifier] = STATE(266),
    [sym_constructor_identifier] = STATE(266),
    [sym_fields] = STATE(267),
    [aux_sym_constructor_repeat1] = STATE(268),
    [sym__layout_semicolon] = ACTIONS(493),
    [anon_sym_SEMI] = ACTIONS(495),
    [anon_sym_LBRACE] = ACTIONS(497),
    [anon_sym_PIPE] = ACTIONS(495),
    [anon_sym_deriving] = ACTIONS(495),
    [anon_sym_BANG] = ACTIONS(499),
    [sym__variable_pattern] = ACTIONS(249),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [142] = {
    [sym__layout_semicolon] = ACTIONS(71),
    [anon_sym_SEMI] = ACTIONS(73),
    [anon_sym_EQ] = ACTIONS(73),
    [anon_sym_EQ_GT] = ACTIONS(73),
    [anon_sym_PIPE] = ACTIONS(73),
    [anon_sym_deriving] = ACTIONS(73),
    [anon_sym_BANG] = ACTIONS(73),
    [sym__variable_pattern] = ACTIONS(75),
    [sym__constructor_pattern] = ACTIONS(75),
    [sym_comment] = ACTIONS(5),
  },
  [143] = {
    [sym__layout_semicolon] = ACTIONS(501),
    [anon_sym_SEMI] = ACTIONS(441),
    [anon_sym_EQ] = ACTIONS(441),
    [anon_sym_EQ_GT] = ACTIONS(443),
    [anon_sym_deriving] = ACTIONS(441),
    [sym__variable_pattern] = ACTIONS(445),
    [sym__constructor_pattern] = ACTIONS(445),
    [sym_comment] = ACTIONS(5),
  },
  [144] = {
    [sym_variable_identifier] = STATE(269),
    [sym__layout_semicolon] = ACTIONS(503),
    [anon_sym_SEMI] = ACTIONS(505),
    [anon_sym_EQ] = ACTIONS(505),
    [anon_sym_deriving] = ACTIONS(505),
    [sym__variable_pattern] = ACTIONS(483),
    [sym__constructor_pattern] = ACTIONS(507),
    [sym_comment] = ACTIONS(5),
  },
  [145] = {
    [anon_sym_EQ] = ACTIONS(509),
    [sym_comment] = ACTIONS(5),
  },
  [146] = {
    [sym_new_constructor] = STATE(271),
    [sym_constructor_identifier] = STATE(272),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
  },
  [147] = {
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_COMMA] = ACTIONS(73),
    [anon_sym_RPAREN] = ACTIONS(73),
    [anon_sym_EQ] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(73),
    [anon_sym_RBRACK] = ACTIONS(73),
    [anon_sym_DASH_GT] = ACTIONS(73),
    [sym_unit_type] = ACTIONS(73),
    [sym_list_constructor] = ACTIONS(73),
    [sym_function_constructor] = ACTIONS(73),
    [anon_sym_EQ_GT] = ACTIONS(73),
    [sym__variable_pattern] = ACTIONS(73),
    [sym__constructor_pattern] = ACTIONS(75),
    [sym_module_identifier] = ACTIONS(75),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(75),
    [anon_sym_SQUOTE] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [sym__integer_literal] = ACTIONS(73),
    [sym__octal_literal] = ACTIONS(73),
    [sym__hexidecimal_literal] = ACTIONS(73),
  },
  [148] = {
    [anon_sym_EQ] = ACTIONS(441),
    [anon_sym_EQ_GT] = ACTIONS(443),
    [sym__variable_pattern] = ACTIONS(441),
    [sym_comment] = ACTIONS(5),
  },
  [149] = {
    [sym_variable_identifier] = STATE(273),
    [anon_sym_EQ] = ACTIONS(505),
    [sym__variable_pattern] = ACTIONS(259),
    [sym_comment] = ACTIONS(5),
  },
  [150] = {
    [sym_type] = STATE(276),
    [sym__generic_type_constructor] = STATE(204),
    [sym_tupling_constructor] = STATE(200),
    [sym_tuple] = STATE(204),
    [sym_list] = STATE(204),
    [sym_parenthesized_constructor] = STATE(204),
    [sym_variable_identifier] = STATE(207),
    [sym__type_constructors] = STATE(200),
    [sym_qualified_type_constructor] = STATE(209),
    [anon_sym_LPAREN] = ACTIONS(511),
    [anon_sym_LBRACK] = ACTIONS(379),
    [sym_unit_type] = ACTIONS(381),
    [sym_list_constructor] = ACTIONS(381),
    [sym_function_constructor] = ACTIONS(381),
    [sym__variable_pattern] = ACTIONS(383),
    [sym__constructor_pattern] = ACTIONS(513),
    [sym_module_identifier] = ACTIONS(387),
    [sym_comment] = ACTIONS(5),
  },
  [151] = {
    [anon_sym_EQ] = ACTIONS(73),
    [sym__variable_pattern] = ACTIONS(73),
    [sym_comment] = ACTIONS(5),
  },
  [152] = {
    [anon_sym_LBRACE] = ACTIONS(441),
    [anon_sym_LPAREN] = ACTIONS(441),
    [anon_sym_COMMA] = ACTIONS(441),
    [anon_sym_RPAREN] = ACTIONS(441),
    [anon_sym_EQ] = ACTIONS(441),
    [anon_sym_LBRACK] = ACTIONS(441),
    [anon_sym_RBRACK] = ACTIONS(441),
    [anon_sym_DASH_GT] = ACTIONS(441),
    [sym_unit_type] = ACTIONS(441),
    [sym_list_constructor] = ACTIONS(441),
    [sym_function_constructor] = ACTIONS(441),
    [sym__variable_pattern] = ACTIONS(441),
    [sym__constructor_pattern] = ACTIONS(445),
    [sym_module_identifier] = ACTIONS(445),
    [sym_comment] = ACTIONS(5),
  },
  [153] = {
    [sym__layout_semicolon] = ACTIONS(515),
    [anon_sym_SEMI] = ACTIONS(517),
    [anon_sym_where] = ACTIONS(517),
    [anon_sym_do] = ACTIONS(517),
    [sym__variable_pattern] = ACTIONS(519),
    [sym__constructor_pattern] = ACTIONS(519),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(519),
    [anon_sym_SQUOTE] = ACTIONS(517),
    [anon_sym_DQUOTE] = ACTIONS(517),
    [sym__integer_literal] = ACTIONS(517),
    [sym__octal_literal] = ACTIONS(517),
    [sym__hexidecimal_literal] = ACTIONS(517),
  },
  [154] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(521),
  },
  [155] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(523),
  },
  [156] = {
    [sym__cntrl] = STATE(278),
    [anon_sym_LBRACK] = ACTIONS(525),
    [anon_sym_RBRACK] = ACTIONS(525),
    [anon_sym_AT] = ACTIONS(525),
    [anon_sym__] = ACTIONS(525),
    [sym_comment] = ACTIONS(95),
    [sym__ascii_large] = ACTIONS(525),
    [anon_sym_CARET] = ACTIONS(525),
    [anon_sym_BSLASH] = ACTIONS(525),
  },
  [157] = {
    [aux_sym__escape_repeat1] = STATE(280),
    [sym_comment] = ACTIONS(5),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(527),
  },
  [158] = {
    [aux_sym__escape_repeat2] = STATE(282),
    [sym_comment] = ACTIONS(5),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(529),
  },
  [159] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(531),
  },
  [160] = {
    [anon_sym_SEMI] = ACTIONS(533),
    [anon_sym_LBRACE] = ACTIONS(533),
    [anon_sym_RBRACE] = ACTIONS(533),
    [anon_sym_LPAREN] = ACTIONS(533),
    [anon_sym_RPAREN] = ACTIONS(533),
    [anon_sym_EQ] = ACTIONS(533),
    [anon_sym_TILDE] = ACTIONS(533),
    [anon_sym_LBRACK] = ACTIONS(533),
    [anon_sym_RBRACK] = ACTIONS(533),
    [anon_sym_DASH] = ACTIONS(533),
    [anon_sym_AT] = ACTIONS(533),
    [anon_sym__] = ACTIONS(533),
    [anon_sym_BQUOTE] = ACTIONS(533),
    [anon_sym_COLON] = ACTIONS(533),
    [anon_sym_PIPE] = ACTIONS(533),
    [anon_sym_BANG] = ACTIONS(533),
    [anon_sym_DOT] = ACTIONS(533),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(533),
    [anon_sym_DQUOTE] = ACTIONS(533),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(533),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(533),
    [sym__ascii_large] = ACTIONS(533),
    [anon_sym_POUND] = ACTIONS(533),
    [anon_sym_DOLLAR] = ACTIONS(533),
    [anon_sym_PERCENT] = ACTIONS(533),
    [anon_sym_AMP] = ACTIONS(533),
    [anon_sym_1] = ACTIONS(533),
    [anon_sym_PLUS] = ACTIONS(533),
    [anon_sym_SLASH] = ACTIONS(533),
    [anon_sym_LT] = ACTIONS(533),
    [anon_sym_GT] = ACTIONS(533),
    [anon_sym_QMARK] = ACTIONS(533),
    [anon_sym_CARET] = ACTIONS(533),
    [anon_sym_BSLASH] = ACTIONS(533),
    [sym__space] = ACTIONS(533),
    [sym__newline] = ACTIONS(533),
    [sym__tab] = ACTIONS(533),
    [sym__vertical_tab] = ACTIONS(533),
  },
  [161] = {
    [anon_sym_SEMI] = ACTIONS(535),
    [anon_sym_LBRACE] = ACTIONS(535),
    [anon_sym_RBRACE] = ACTIONS(535),
    [anon_sym_LPAREN] = ACTIONS(535),
    [anon_sym_RPAREN] = ACTIONS(535),
    [anon_sym_EQ] = ACTIONS(535),
    [anon_sym_TILDE] = ACTIONS(535),
    [anon_sym_LBRACK] = ACTIONS(535),
    [anon_sym_RBRACK] = ACTIONS(535),
    [anon_sym_DASH] = ACTIONS(535),
    [anon_sym_AT] = ACTIONS(535),
    [anon_sym__] = ACTIONS(535),
    [anon_sym_BQUOTE] = ACTIONS(535),
    [anon_sym_COLON] = ACTIONS(535),
    [anon_sym_PIPE] = ACTIONS(535),
    [anon_sym_BANG] = ACTIONS(535),
    [anon_sym_DOT] = ACTIONS(535),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(535),
    [anon_sym_DQUOTE] = ACTIONS(535),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(535),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(535),
    [sym__ascii_large] = ACTIONS(535),
    [anon_sym_POUND] = ACTIONS(535),
    [anon_sym_DOLLAR] = ACTIONS(535),
    [anon_sym_PERCENT] = ACTIONS(535),
    [anon_sym_AMP] = ACTIONS(535),
    [anon_sym_1] = ACTIONS(535),
    [anon_sym_PLUS] = ACTIONS(535),
    [anon_sym_SLASH] = ACTIONS(535),
    [anon_sym_LT] = ACTIONS(535),
    [anon_sym_GT] = ACTIONS(535),
    [anon_sym_QMARK] = ACTIONS(535),
    [anon_sym_CARET] = ACTIONS(535),
    [anon_sym_BSLASH] = ACTIONS(535),
    [sym__space] = ACTIONS(535),
    [sym__newline] = ACTIONS(535),
    [sym__tab] = ACTIONS(535),
    [sym__vertical_tab] = ACTIONS(535),
  },
  [162] = {
    [sym__cntrl] = STATE(284),
    [anon_sym_LBRACK] = ACTIONS(537),
    [anon_sym_RBRACK] = ACTIONS(537),
    [anon_sym_AT] = ACTIONS(537),
    [anon_sym__] = ACTIONS(537),
    [sym_comment] = ACTIONS(95),
    [sym__ascii_large] = ACTIONS(537),
    [anon_sym_CARET] = ACTIONS(537),
    [anon_sym_BSLASH] = ACTIONS(537),
  },
  [163] = {
    [aux_sym__escape_repeat1] = STATE(286),
    [sym_comment] = ACTIONS(5),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(539),
  },
  [164] = {
    [aux_sym__escape_repeat2] = STATE(288),
    [sym_comment] = ACTIONS(5),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(541),
  },
  [165] = {
    [anon_sym_SEMI] = ACTIONS(543),
    [anon_sym_LBRACE] = ACTIONS(543),
    [anon_sym_RBRACE] = ACTIONS(543),
    [anon_sym_LPAREN] = ACTIONS(543),
    [anon_sym_RPAREN] = ACTIONS(543),
    [anon_sym_EQ] = ACTIONS(543),
    [anon_sym_TILDE] = ACTIONS(543),
    [anon_sym_LBRACK] = ACTIONS(543),
    [anon_sym_RBRACK] = ACTIONS(543),
    [anon_sym_DASH] = ACTIONS(543),
    [anon_sym_AT] = ACTIONS(543),
    [anon_sym__] = ACTIONS(543),
    [anon_sym_BQUOTE] = ACTIONS(543),
    [anon_sym_COLON] = ACTIONS(543),
    [anon_sym_PIPE] = ACTIONS(543),
    [anon_sym_BANG] = ACTIONS(543),
    [anon_sym_DOT] = ACTIONS(543),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(543),
    [anon_sym_DQUOTE] = ACTIONS(543),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(543),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(543),
    [sym__ascii_large] = ACTIONS(543),
    [anon_sym_POUND] = ACTIONS(543),
    [anon_sym_DOLLAR] = ACTIONS(543),
    [anon_sym_PERCENT] = ACTIONS(543),
    [anon_sym_AMP] = ACTIONS(543),
    [anon_sym_1] = ACTIONS(543),
    [anon_sym_PLUS] = ACTIONS(543),
    [anon_sym_SLASH] = ACTIONS(543),
    [anon_sym_LT] = ACTIONS(543),
    [anon_sym_GT] = ACTIONS(543),
    [anon_sym_QMARK] = ACTIONS(543),
    [anon_sym_CARET] = ACTIONS(543),
    [anon_sym_BSLASH] = ACTIONS(543),
    [sym__space] = ACTIONS(543),
    [sym__newline] = ACTIONS(543),
    [sym__tab] = ACTIONS(543),
    [sym__vertical_tab] = ACTIONS(543),
  },
  [166] = {
    [anon_sym_SEMI] = ACTIONS(545),
    [anon_sym_LBRACE] = ACTIONS(545),
    [anon_sym_RBRACE] = ACTIONS(545),
    [anon_sym_LPAREN] = ACTIONS(545),
    [anon_sym_RPAREN] = ACTIONS(545),
    [anon_sym_EQ] = ACTIONS(545),
    [anon_sym_TILDE] = ACTIONS(545),
    [anon_sym_LBRACK] = ACTIONS(545),
    [anon_sym_RBRACK] = ACTIONS(545),
    [anon_sym_DASH] = ACTIONS(545),
    [anon_sym_AT] = ACTIONS(545),
    [anon_sym__] = ACTIONS(545),
    [anon_sym_BQUOTE] = ACTIONS(545),
    [anon_sym_COLON] = ACTIONS(545),
    [anon_sym_PIPE] = ACTIONS(545),
    [anon_sym_BANG] = ACTIONS(545),
    [anon_sym_DOT] = ACTIONS(545),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(545),
    [anon_sym_DQUOTE] = ACTIONS(545),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(545),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(545),
    [sym__ascii_large] = ACTIONS(545),
    [anon_sym_POUND] = ACTIONS(545),
    [anon_sym_DOLLAR] = ACTIONS(545),
    [anon_sym_PERCENT] = ACTIONS(545),
    [anon_sym_AMP] = ACTIONS(545),
    [anon_sym_1] = ACTIONS(545),
    [anon_sym_PLUS] = ACTIONS(545),
    [anon_sym_SLASH] = ACTIONS(545),
    [anon_sym_LT] = ACTIONS(545),
    [anon_sym_GT] = ACTIONS(545),
    [anon_sym_QMARK] = ACTIONS(545),
    [anon_sym_CARET] = ACTIONS(545),
    [anon_sym_BSLASH] = ACTIONS(545),
    [sym__space] = ACTIONS(545),
    [sym__newline] = ACTIONS(545),
    [sym__tab] = ACTIONS(545),
    [sym__vertical_tab] = ACTIONS(545),
  },
  [167] = {
    [sym__layout_semicolon] = ACTIONS(547),
    [anon_sym_SEMI] = ACTIONS(549),
    [anon_sym_where] = ACTIONS(549),
    [anon_sym_do] = ACTIONS(549),
    [sym__variable_pattern] = ACTIONS(551),
    [sym__constructor_pattern] = ACTIONS(551),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(551),
    [anon_sym_SQUOTE] = ACTIONS(549),
    [anon_sym_DQUOTE] = ACTIONS(549),
    [sym__integer_literal] = ACTIONS(549),
    [sym__octal_literal] = ACTIONS(549),
    [sym__hexidecimal_literal] = ACTIONS(549),
  },
  [168] = {
    [sym__declarations] = STATE(289),
    [sym__layout_open_brace] = ACTIONS(437),
    [anon_sym_LBRACE] = ACTIONS(439),
    [sym_comment] = ACTIONS(5),
  },
  [169] = {
    [sym_statement_list] = STATE(292),
    [sym__layout_open_brace] = ACTIONS(553),
    [anon_sym_LBRACE] = ACTIONS(555),
    [sym_comment] = ACTIONS(5),
  },
  [170] = {
    [sym__layout_semicolon] = ACTIONS(71),
    [anon_sym_SEMI] = ACTIONS(73),
    [anon_sym_where] = ACTIONS(73),
    [anon_sym_do] = ACTIONS(73),
    [sym__variable_pattern] = ACTIONS(75),
    [sym__constructor_pattern] = ACTIONS(75),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(75),
    [anon_sym_SQUOTE] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [sym__integer_literal] = ACTIONS(73),
    [sym__octal_literal] = ACTIONS(73),
    [sym__hexidecimal_literal] = ACTIONS(73),
  },
  [171] = {
    [sym__layout_semicolon] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_where] = ACTIONS(79),
    [anon_sym_do] = ACTIONS(79),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(201),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(201),
    [anon_sym_SQUOTE] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym__integer_literal] = ACTIONS(79),
    [sym__octal_literal] = ACTIONS(79),
    [sym__hexidecimal_literal] = ACTIONS(79),
  },
  [172] = {
    [sym__layout_semicolon] = ACTIONS(557),
    [anon_sym_SEMI] = ACTIONS(559),
    [sym_comment] = ACTIONS(5),
  },
  [173] = {
    [sym__layout_semicolon] = ACTIONS(561),
    [anon_sym_SEMI] = ACTIONS(563),
    [anon_sym_where] = ACTIONS(563),
    [anon_sym_do] = ACTIONS(563),
    [sym__variable_pattern] = ACTIONS(565),
    [sym__constructor_pattern] = ACTIONS(565),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(565),
    [anon_sym_SQUOTE] = ACTIONS(563),
    [anon_sym_DQUOTE] = ACTIONS(563),
    [sym__integer_literal] = ACTIONS(563),
    [sym__octal_literal] = ACTIONS(563),
    [sym__hexidecimal_literal] = ACTIONS(563),
  },
  [174] = {
    [sym__layout_semicolon] = ACTIONS(567),
    [anon_sym_SEMI] = ACTIONS(163),
    [anon_sym_where] = ACTIONS(163),
    [anon_sym_do] = ACTIONS(163),
    [sym__variable_pattern] = ACTIONS(165),
    [sym__constructor_pattern] = ACTIONS(165),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(165),
    [anon_sym_SQUOTE] = ACTIONS(163),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym__integer_literal] = ACTIONS(163),
    [sym__octal_literal] = ACTIONS(163),
    [sym__hexidecimal_literal] = ACTIONS(163),
  },
  [175] = {
    [sym__layout_semicolon] = ACTIONS(569),
    [anon_sym_SEMI] = ACTIONS(571),
    [anon_sym_where] = ACTIONS(571),
    [anon_sym_do] = ACTIONS(571),
    [sym__variable_pattern] = ACTIONS(573),
    [sym__constructor_pattern] = ACTIONS(573),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(573),
    [anon_sym_SQUOTE] = ACTIONS(571),
    [anon_sym_DQUOTE] = ACTIONS(571),
    [sym__integer_literal] = ACTIONS(571),
    [sym__octal_literal] = ACTIONS(571),
    [sym__hexidecimal_literal] = ACTIONS(571),
  },
  [176] = {
    [sym__literal] = STATE(294),
    [sym_variable_identifier] = STATE(294),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [aux_sym_general_constructor_repeat1] = STATE(295),
    [sym__layout_semicolon] = ACTIONS(169),
    [anon_sym_SEMI] = ACTIONS(171),
    [anon_sym_where] = ACTIONS(171),
    [anon_sym_do] = ACTIONS(171),
    [sym__variable_pattern] = ACTIONS(339),
    [sym__constructor_pattern] = ACTIONS(173),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym__integer_literal] = ACTIONS(41),
    [sym__octal_literal] = ACTIONS(41),
    [sym__hexidecimal_literal] = ACTIONS(41),
  },
  [177] = {
    [sym_where_pattern] = STATE(296),
    [sym_general_constructor] = STATE(173),
    [sym__variable] = STATE(173),
    [sym_qualified_variable_identifier] = STATE(174),
    [sym__expression] = STATE(297),
    [sym_do_expression] = STATE(173),
    [sym__literal] = STATE(173),
    [sym__identifier] = STATE(173),
    [sym_variable_identifier] = STATE(26),
    [sym_constructor_identifier] = STATE(176),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [sym__layout_semicolon] = ACTIONS(557),
    [anon_sym_SEMI] = ACTIONS(559),
    [anon_sym_where] = ACTIONS(335),
    [anon_sym_do] = ACTIONS(337),
    [sym__variable_pattern] = ACTIONS(339),
    [sym__constructor_pattern] = ACTIONS(341),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym__integer_literal] = ACTIONS(41),
    [sym__octal_literal] = ACTIONS(41),
    [sym__hexidecimal_literal] = ACTIONS(41),
  },
  [178] = {
    [sym__function_pattern] = STATE(186),
    [sym_irrefutable_pattern] = STATE(84),
    [sym_list_pattern] = STATE(84),
    [sym_tuple_pattern] = STATE(84),
    [sym_parenthesized_pattern] = STATE(84),
    [sym_as_pattern] = STATE(84),
    [sym_wildcard] = STATE(84),
    [sym__variable] = STATE(184),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym__literal] = STATE(84),
    [sym__identifier] = STATE(92),
    [sym_simple_type] = STATE(93),
    [sym_variable_identifier] = STATE(94),
    [sym_constructor_identifier] = STATE(190),
    [sym_integer] = STATE(87),
    [sym_char] = STATE(87),
    [sym_string] = STATE(87),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(347),
    [anon_sym_LBRACK] = ACTIONS(147),
    [anon_sym__] = ACTIONS(149),
    [sym_list_constructor] = ACTIONS(151),
    [sym__variable_pattern] = ACTIONS(153),
    [sym__constructor_pattern] = ACTIONS(351),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(159),
    [anon_sym_DQUOTE] = ACTIONS(161),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [179] = {
    [anon_sym_LPAREN] = ACTIONS(575),
    [sym_comment] = ACTIONS(5),
  },
  [180] = {
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(79),
    [anon_sym_RBRACK] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(79),
    [anon_sym_BANG] = ACTIONS(79),
    [sym__variable_pattern] = ACTIONS(79),
    [anon_sym_DOT] = ACTIONS(79),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(201),
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
  [181] = {
    [sym__op] = STATE(304),
    [sym_variable_symbol] = STATE(305),
    [sym_constructor_symbol] = STATE(305),
    [sym__variable_symbol] = STATE(306),
    [aux_sym_tuple_pattern_repeat1] = STATE(307),
    [anon_sym_COMMA] = ACTIONS(577),
    [anon_sym_RPAREN] = ACTIONS(579),
    [anon_sym_DASH] = ACTIONS(581),
    [anon_sym_BQUOTE] = ACTIONS(583),
    [anon_sym_COLON] = ACTIONS(585),
    [anon_sym_BANG] = ACTIONS(581),
    [anon_sym_DOT] = ACTIONS(581),
    [sym_comment] = ACTIONS(5),
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
  },
  [182] = {
    [aux_sym_tuple_pattern_repeat1] = STATE(307),
    [anon_sym_COMMA] = ACTIONS(577),
    [anon_sym_RPAREN] = ACTIONS(579),
    [sym_comment] = ACTIONS(5),
  },
  [183] = {
    [anon_sym_COMMA] = ACTIONS(587),
    [anon_sym_RPAREN] = ACTIONS(587),
    [sym_comment] = ACTIONS(5),
  },
  [184] = {
    [anon_sym_AT] = ACTIONS(589),
    [sym_comment] = ACTIONS(5),
  },
  [185] = {
    [sym__literal] = STATE(312),
    [sym_variable_identifier] = STATE(313),
    [sym_integer] = STATE(309),
    [sym_char] = STATE(309),
    [sym_string] = STATE(309),
    [aux_sym_general_constructor_repeat1] = STATE(314),
    [aux_sym_type_class_repeat1] = STATE(196),
    [anon_sym_LBRACE] = ACTIONS(171),
    [anon_sym_COMMA] = ACTIONS(171),
    [anon_sym_RPAREN] = ACTIONS(171),
    [anon_sym_DASH] = ACTIONS(171),
    [anon_sym_BQUOTE] = ACTIONS(171),
    [anon_sym_COLON] = ACTIONS(171),
    [anon_sym_BANG] = ACTIONS(171),
    [sym__variable_pattern] = ACTIONS(255),
    [anon_sym_DOT] = ACTIONS(171),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(591),
    [anon_sym_SQUOTE] = ACTIONS(593),
    [anon_sym_DQUOTE] = ACTIONS(419),
    [anon_sym_POUND] = ACTIONS(171),
    [anon_sym_DOLLAR] = ACTIONS(171),
    [anon_sym_PERCENT] = ACTIONS(171),
    [anon_sym_AMP] = ACTIONS(171),
    [anon_sym_1] = ACTIONS(171),
    [anon_sym_PLUS] = ACTIONS(171),
    [anon_sym_SLASH] = ACTIONS(171),
    [anon_sym_LT] = ACTIONS(171),
    [anon_sym_GT] = ACTIONS(171),
    [anon_sym_QMARK] = ACTIONS(171),
    [anon_sym_CARET] = ACTIONS(171),
    [sym__integer_literal] = ACTIONS(595),
    [sym__octal_literal] = ACTIONS(595),
    [sym__hexidecimal_literal] = ACTIONS(595),
  },
  [186] = {
    [anon_sym_LPAREN] = ACTIONS(597),
    [anon_sym_COMMA] = ACTIONS(597),
    [anon_sym_RPAREN] = ACTIONS(597),
    [anon_sym_EQ] = ACTIONS(597),
    [anon_sym_TILDE] = ACTIONS(597),
    [anon_sym_LBRACK] = ACTIONS(597),
    [anon_sym_RBRACK] = ACTIONS(597),
    [anon_sym_DASH] = ACTIONS(597),
    [anon_sym__] = ACTIONS(597),
    [anon_sym_BQUOTE] = ACTIONS(597),
    [anon_sym_COLON] = ACTIONS(597),
    [sym_list_constructor] = ACTIONS(597),
    [anon_sym_BANG] = ACTIONS(597),
    [sym__variable_pattern] = ACTIONS(599),
    [sym__constructor_pattern] = ACTIONS(599),
    [anon_sym_DOT] = ACTIONS(597),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(599),
    [anon_sym_SQUOTE] = ACTIONS(597),
    [anon_sym_DQUOTE] = ACTIONS(597),
    [anon_sym_POUND] = ACTIONS(597),
    [anon_sym_DOLLAR] = ACTIONS(597),
    [anon_sym_PERCENT] = ACTIONS(597),
    [anon_sym_AMP] = ACTIONS(597),
    [anon_sym_1] = ACTIONS(597),
    [anon_sym_PLUS] = ACTIONS(597),
    [anon_sym_SLASH] = ACTIONS(597),
    [anon_sym_LT] = ACTIONS(597),
    [anon_sym_GT] = ACTIONS(597),
    [anon_sym_QMARK] = ACTIONS(597),
    [anon_sym_CARET] = ACTIONS(597),
    [sym__integer_literal] = ACTIONS(597),
    [sym__octal_literal] = ACTIONS(597),
    [sym__hexidecimal_literal] = ACTIONS(597),
  },
  [187] = {
    [sym__function_pattern] = STATE(186),
    [sym_irrefutable_pattern] = STATE(84),
    [sym_list_pattern] = STATE(84),
    [sym_tuple_pattern] = STATE(84),
    [sym_parenthesized_pattern] = STATE(84),
    [sym_as_pattern] = STATE(84),
    [sym_wildcard] = STATE(84),
    [sym__variable] = STATE(189),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym__literal] = STATE(84),
    [sym__identifier] = STATE(92),
    [sym_simple_type] = STATE(93),
    [sym_variable_identifier] = STATE(94),
    [sym_constructor_identifier] = STATE(190),
    [sym_integer] = STATE(87),
    [sym_char] = STATE(87),
    [sym_string] = STATE(87),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(353),
    [anon_sym_LBRACK] = ACTIONS(147),
    [anon_sym__] = ACTIONS(149),
    [sym_list_constructor] = ACTIONS(151),
    [sym__variable_pattern] = ACTIONS(153),
    [sym__constructor_pattern] = ACTIONS(351),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(159),
    [anon_sym_DQUOTE] = ACTIONS(161),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [188] = {
    [anon_sym_RBRACK] = ACTIONS(601),
    [sym_comment] = ACTIONS(5),
  },
  [189] = {
    [anon_sym_AT] = ACTIONS(603),
    [sym_comment] = ACTIONS(5),
  },
  [190] = {
    [sym_variable_identifier] = STATE(152),
    [aux_sym_type_class_repeat1] = STATE(196),
    [anon_sym_LBRACE] = ACTIONS(171),
    [anon_sym_COMMA] = ACTIONS(171),
    [anon_sym_RPAREN] = ACTIONS(171),
    [anon_sym_RBRACK] = ACTIONS(171),
    [anon_sym_DASH] = ACTIONS(171),
    [anon_sym_BQUOTE] = ACTIONS(171),
    [anon_sym_COLON] = ACTIONS(171),
    [anon_sym_BANG] = ACTIONS(171),
    [sym__variable_pattern] = ACTIONS(255),
    [anon_sym_DOT] = ACTIONS(171),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(171),
    [anon_sym_DOLLAR] = ACTIONS(171),
    [anon_sym_PERCENT] = ACTIONS(171),
    [anon_sym_AMP] = ACTIONS(171),
    [anon_sym_1] = ACTIONS(171),
    [anon_sym_PLUS] = ACTIONS(171),
    [anon_sym_SLASH] = ACTIONS(171),
    [anon_sym_LT] = ACTIONS(171),
    [anon_sym_GT] = ACTIONS(171),
    [anon_sym_QMARK] = ACTIONS(171),
    [anon_sym_CARET] = ACTIONS(171),
  },
  [191] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(605),
  },
  [192] = {
    [anon_sym_RBRACE] = ACTIONS(299),
    [anon_sym_LPAREN] = ACTIONS(299),
    [anon_sym_COMMA] = ACTIONS(299),
    [anon_sym_RPAREN] = ACTIONS(299),
    [anon_sym_EQ] = ACTIONS(299),
    [anon_sym_TILDE] = ACTIONS(299),
    [anon_sym_LBRACK] = ACTIONS(299),
    [anon_sym_RBRACK] = ACTIONS(299),
    [anon_sym_DASH] = ACTIONS(299),
    [anon_sym__] = ACTIONS(299),
    [anon_sym_BQUOTE] = ACTIONS(299),
    [anon_sym_COLON] = ACTIONS(299),
    [sym_list_constructor] = ACTIONS(299),
    [anon_sym_BANG] = ACTIONS(299),
    [sym__variable_pattern] = ACTIONS(301),
    [sym__constructor_pattern] = ACTIONS(301),
    [anon_sym_DOT] = ACTIONS(299),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(301),
    [anon_sym_SQUOTE] = ACTIONS(299),
    [anon_sym_DQUOTE] = ACTIONS(299),
    [anon_sym_POUND] = ACTIONS(299),
    [anon_sym_DOLLAR] = ACTIONS(299),
    [anon_sym_PERCENT] = ACTIONS(299),
    [anon_sym_AMP] = ACTIONS(299),
    [anon_sym_1] = ACTIONS(299),
    [anon_sym_PLUS] = ACTIONS(299),
    [anon_sym_SLASH] = ACTIONS(299),
    [anon_sym_LT] = ACTIONS(299),
    [anon_sym_GT] = ACTIONS(299),
    [anon_sym_QMARK] = ACTIONS(299),
    [anon_sym_CARET] = ACTIONS(299),
    [sym__integer_literal] = ACTIONS(299),
    [sym__octal_literal] = ACTIONS(299),
    [sym__hexidecimal_literal] = ACTIONS(299),
  },
  [193] = {
    [sym__gap] = STATE(166),
    [sym__graphic] = STATE(166),
    [sym__small] = STATE(72),
    [sym__large] = STATE(72),
    [sym__symbol] = STATE(72),
    [sym__special] = STATE(72),
    [sym__escape] = STATE(166),
    [anon_sym_SEMI] = ACTIONS(105),
    [anon_sym_LBRACE] = ACTIONS(105),
    [anon_sym_RBRACE] = ACTIONS(105),
    [anon_sym_LPAREN] = ACTIONS(105),
    [anon_sym_RPAREN] = ACTIONS(105),
    [anon_sym_EQ] = ACTIONS(107),
    [anon_sym_TILDE] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(105),
    [anon_sym_RBRACK] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(107),
    [anon_sym_AT] = ACTIONS(107),
    [anon_sym__] = ACTIONS(109),
    [anon_sym_BQUOTE] = ACTIONS(105),
    [anon_sym_COLON] = ACTIONS(107),
    [anon_sym_PIPE] = ACTIONS(107),
    [anon_sym_BANG] = ACTIONS(107),
    [anon_sym_DOT] = ACTIONS(107),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(321),
    [anon_sym_DQUOTE] = ACTIONS(607),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(115),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(109),
    [sym__ascii_large] = ACTIONS(117),
    [anon_sym_POUND] = ACTIONS(107),
    [anon_sym_DOLLAR] = ACTIONS(107),
    [anon_sym_PERCENT] = ACTIONS(107),
    [anon_sym_AMP] = ACTIONS(107),
    [anon_sym_1] = ACTIONS(107),
    [anon_sym_PLUS] = ACTIONS(107),
    [anon_sym_SLASH] = ACTIONS(107),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_QMARK] = ACTIONS(107),
    [anon_sym_CARET] = ACTIONS(107),
    [anon_sym_BSLASH] = ACTIONS(119),
    [sym__space] = ACTIONS(121),
    [sym__newline] = ACTIONS(121),
    [sym__tab] = ACTIONS(121),
    [sym__vertical_tab] = ACTIONS(121),
  },
  [194] = {
    [sym__function_pattern] = STATE(319),
    [sym_irrefutable_pattern] = STATE(84),
    [sym_list_pattern] = STATE(84),
    [sym_tuple_pattern] = STATE(84),
    [sym_parenthesized_pattern] = STATE(84),
    [sym_as_pattern] = STATE(84),
    [sym_wildcard] = STATE(84),
    [sym__variable] = STATE(91),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym__literal] = STATE(84),
    [sym__identifier] = STATE(92),
    [sym_simple_type] = STATE(93),
    [sym_variable_identifier] = STATE(94),
    [sym_constructor_identifier] = STATE(95),
    [sym_integer] = STATE(87),
    [sym_char] = STATE(87),
    [sym_string] = STATE(87),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(145),
    [anon_sym_LBRACK] = ACTIONS(147),
    [anon_sym__] = ACTIONS(149),
    [sym_list_constructor] = ACTIONS(151),
    [sym__variable_pattern] = ACTIONS(153),
    [sym__constructor_pattern] = ACTIONS(155),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(159),
    [anon_sym_DQUOTE] = ACTIONS(161),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [195] = {
    [sym_labels] = STATE(321),
    [sym_label] = STATE(322),
    [sym__identifier] = STATE(323),
    [sym_variable_identifier] = STATE(112),
    [sym_constructor_identifier] = STATE(112),
    [anon_sym_RBRACE] = ACTIONS(609),
    [sym__variable_pattern] = ACTIONS(199),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [196] = {
    [sym_variable_identifier] = STATE(273),
    [anon_sym_LBRACE] = ACTIONS(505),
    [sym__variable_pattern] = ACTIONS(255),
    [sym_comment] = ACTIONS(5),
  },
  [197] = {
    [anon_sym_LPAREN] = ACTIONS(611),
    [anon_sym_EQ] = ACTIONS(611),
    [anon_sym_TILDE] = ACTIONS(611),
    [anon_sym_LBRACK] = ACTIONS(611),
    [anon_sym__] = ACTIONS(611),
    [sym_list_constructor] = ACTIONS(611),
    [sym__variable_pattern] = ACTIONS(613),
    [sym__constructor_pattern] = ACTIONS(613),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(613),
    [anon_sym_SQUOTE] = ACTIONS(611),
    [anon_sym_DQUOTE] = ACTIONS(611),
    [sym__integer_literal] = ACTIONS(611),
    [sym__octal_literal] = ACTIONS(611),
    [sym__hexidecimal_literal] = ACTIONS(611),
  },
  [198] = {
    [sym_type] = STATE(330),
    [sym__generic_type_constructor] = STATE(331),
    [sym_tupling_constructor] = STATE(327),
    [sym_tuple] = STATE(331),
    [sym_list] = STATE(331),
    [sym_parenthesized_constructor] = STATE(331),
    [sym_class] = STATE(332),
    [sym_variable_identifier] = STATE(333),
    [sym_constructor_identifier] = STATE(114),
    [sym__type_constructors] = STATE(327),
    [sym_qualified_type_constructor] = STATE(334),
    [anon_sym_LPAREN] = ACTIONS(615),
    [anon_sym_COMMA] = ACTIONS(617),
    [anon_sym_LBRACK] = ACTIONS(619),
    [sym_unit_type] = ACTIONS(621),
    [sym_list_constructor] = ACTIONS(621),
    [sym_function_constructor] = ACTIONS(621),
    [sym__variable_pattern] = ACTIONS(623),
    [sym__constructor_pattern] = ACTIONS(625),
    [sym_module_identifier] = ACTIONS(627),
    [sym_comment] = ACTIONS(5),
  },
  [199] = {
    [sym_type] = STATE(337),
    [sym__generic_type_constructor] = STATE(338),
    [sym_tupling_constructor] = STATE(327),
    [sym_tuple] = STATE(338),
    [sym_list] = STATE(338),
    [sym_parenthesized_constructor] = STATE(338),
    [sym_variable_identifier] = STATE(339),
    [sym__type_constructors] = STATE(327),
    [sym_qualified_type_constructor] = STATE(334),
    [aux_sym_list_repeat1] = STATE(340),
    [anon_sym_LPAREN] = ACTIONS(615),
    [anon_sym_LBRACK] = ACTIONS(619),
    [sym_unit_type] = ACTIONS(621),
    [sym_list_constructor] = ACTIONS(621),
    [sym_function_constructor] = ACTIONS(621),
    [sym__variable_pattern] = ACTIONS(255),
    [sym__constructor_pattern] = ACTIONS(629),
    [sym_module_identifier] = ACTIONS(631),
    [sym_comment] = ACTIONS(5),
  },
  [200] = {
    [sym__layout_semicolon] = ACTIONS(633),
    [anon_sym_SEMI] = ACTIONS(635),
    [anon_sym_DASH_GT] = ACTIONS(635),
    [sym_comment] = ACTIONS(5),
  },
  [201] = {
    [sym_variable_identifier] = STATE(342),
    [aux_sym_type_class_repeat1] = STATE(343),
    [sym__layout_semicolon] = ACTIONS(637),
    [anon_sym_SEMI] = ACTIONS(639),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_DASH_GT] = ACTIONS(639),
    [sym__variable_pattern] = ACTIONS(79),
    [sym_comment] = ACTIONS(5),
  },
  [202] = {
    [sym_constructor_identifier] = STATE(346),
    [aux_sym_qualified_type_constructor_repeat1] = STATE(347),
    [sym__constructor_pattern] = ACTIONS(641),
    [anon_sym_DOT] = ACTIONS(643),
    [sym_comment] = ACTIONS(5),
  },
  [203] = {
    [sym__layout_semicolon] = ACTIONS(645),
    [anon_sym_SEMI] = ACTIONS(647),
    [sym_comment] = ACTIONS(5),
  },
  [204] = {
    [sym__layout_semicolon] = ACTIONS(649),
    [anon_sym_SEMI] = ACTIONS(651),
    [anon_sym_DASH_GT] = ACTIONS(653),
    [sym_comment] = ACTIONS(5),
  },
  [205] = {
    [sym_type] = STATE(349),
    [sym__generic_type_constructor] = STATE(204),
    [sym_tupling_constructor] = STATE(200),
    [sym_tuple] = STATE(204),
    [sym_list] = STATE(204),
    [sym_parenthesized_constructor] = STATE(204),
    [sym_variable_identifier] = STATE(207),
    [sym__type_constructors] = STATE(200),
    [sym_qualified_type_constructor] = STATE(209),
    [anon_sym_LPAREN] = ACTIONS(511),
    [anon_sym_LBRACK] = ACTIONS(379),
    [sym_unit_type] = ACTIONS(381),
    [sym_list_constructor] = ACTIONS(381),
    [sym_function_constructor] = ACTIONS(381),
    [sym__variable_pattern] = ACTIONS(383),
    [sym__constructor_pattern] = ACTIONS(513),
    [sym_module_identifier] = ACTIONS(387),
    [sym_comment] = ACTIONS(5),
  },
  [206] = {
    [anon_sym_EQ_GT] = ACTIONS(655),
    [sym_comment] = ACTIONS(5),
  },
  [207] = {
    [sym__layout_semicolon] = ACTIONS(657),
    [anon_sym_SEMI] = ACTIONS(659),
    [anon_sym_DASH_GT] = ACTIONS(661),
    [sym_comment] = ACTIONS(5),
  },
  [208] = {
    [sym_variable_identifier] = STATE(236),
    [anon_sym_LPAREN] = ACTIONS(205),
    [sym__variable_pattern] = ACTIONS(623),
    [sym_comment] = ACTIONS(5),
  },
  [209] = {
    [sym__layout_semicolon] = ACTIONS(663),
    [anon_sym_SEMI] = ACTIONS(665),
    [anon_sym_DASH_GT] = ACTIONS(665),
    [sym_comment] = ACTIONS(5),
  },
  [210] = {
    [ts_builtin_sym_end] = ACTIONS(667),
    [anon_sym_RBRACE] = ACTIONS(669),
    [anon_sym_import] = ACTIONS(669),
    [anon_sym_foreign] = ACTIONS(669),
    [anon_sym_default] = ACTIONS(669),
    [anon_sym_class] = ACTIONS(669),
    [anon_sym_instance] = ACTIONS(669),
    [anon_sym_infixl] = ACTIONS(669),
    [anon_sym_infixr] = ACTIONS(669),
    [anon_sym_infix] = ACTIONS(669),
    [anon_sym_data] = ACTIONS(669),
    [anon_sym_newtype] = ACTIONS(669),
    [anon_sym_type] = ACTIONS(669),
    [sym__variable_pattern] = ACTIONS(671),
    [sym__constructor_pattern] = ACTIONS(671),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(671),
    [anon_sym_SQUOTE] = ACTIONS(669),
    [anon_sym_DQUOTE] = ACTIONS(669),
    [sym__integer_literal] = ACTIONS(669),
    [sym__octal_literal] = ACTIONS(669),
    [sym__hexidecimal_literal] = ACTIONS(669),
  },
  [211] = {
    [anon_sym_where] = ACTIONS(673),
    [sym_comment] = ACTIONS(5),
  },
  [212] = {
    [aux_sym_module_exports_repeat1] = STATE(354),
    [anon_sym_COMMA] = ACTIONS(675),
    [anon_sym_RPAREN] = ACTIONS(677),
    [sym_comment] = ACTIONS(5),
  },
  [213] = {
    [anon_sym_LPAREN] = ACTIONS(679),
    [anon_sym_COMMA] = ACTIONS(681),
    [anon_sym_RPAREN] = ACTIONS(681),
    [sym_comment] = ACTIONS(5),
  },
  [214] = {
    [sym_import] = STATE(19),
    [sym__declaration] = STATE(357),
    [sym_function_declaration] = STATE(19),
    [sym_function_head] = STATE(21),
    [sym__variable] = STATE(22),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym_foreign] = STATE(19),
    [sym_default] = STATE(19),
    [sym_type_class] = STATE(19),
    [sym_type_class_instance] = STATE(19),
    [sym_fixity] = STATE(19),
    [sym_type_signature] = STATE(19),
    [sym_algebraic_datatype] = STATE(19),
    [sym_newtype] = STATE(19),
    [sym_type_synonym] = STATE(19),
    [sym__literal] = STATE(19),
    [sym__identifier] = STATE(24),
    [sym_variable_identifier] = STATE(25),
    [sym_constructor_identifier] = STATE(26),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [aux_sym_module_repeat1] = STATE(358),
    [sym__layout_close_brace] = ACTIONS(683),
    [anon_sym_import] = ACTIONS(13),
    [anon_sym_foreign] = ACTIONS(15),
    [anon_sym_default] = ACTIONS(17),
    [anon_sym_class] = ACTIONS(19),
    [anon_sym_instance] = ACTIONS(21),
    [anon_sym_infixl] = ACTIONS(23),
    [anon_sym_infixr] = ACTIONS(23),
    [anon_sym_infix] = ACTIONS(23),
    [anon_sym_data] = ACTIONS(25),
    [anon_sym_newtype] = ACTIONS(27),
    [anon_sym_type] = ACTIONS(29),
    [sym__variable_pattern] = ACTIONS(31),
    [sym__constructor_pattern] = ACTIONS(33),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym__integer_literal] = ACTIONS(41),
    [sym__octal_literal] = ACTIONS(41),
    [sym__hexidecimal_literal] = ACTIONS(41),
  },
  [215] = {
    [sym_import] = STATE(19),
    [sym__declaration] = STATE(20),
    [sym_function_declaration] = STATE(19),
    [sym_function_head] = STATE(21),
    [sym__variable] = STATE(22),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym_foreign] = STATE(19),
    [sym_default] = STATE(19),
    [sym_type_class] = STATE(19),
    [sym_type_class_instance] = STATE(19),
    [sym_fixity] = STATE(19),
    [sym_type_signature] = STATE(19),
    [sym_algebraic_datatype] = STATE(19),
    [sym_newtype] = STATE(19),
    [sym_type_synonym] = STATE(19),
    [sym__literal] = STATE(19),
    [sym__identifier] = STATE(24),
    [sym_variable_identifier] = STATE(25),
    [sym_constructor_identifier] = STATE(26),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [aux_sym_module_repeat1] = STATE(359),
    [anon_sym_RBRACE] = ACTIONS(685),
    [anon_sym_import] = ACTIONS(13),
    [anon_sym_foreign] = ACTIONS(15),
    [anon_sym_default] = ACTIONS(17),
    [anon_sym_class] = ACTIONS(19),
    [anon_sym_instance] = ACTIONS(21),
    [anon_sym_infixl] = ACTIONS(23),
    [anon_sym_infixr] = ACTIONS(23),
    [anon_sym_infix] = ACTIONS(23),
    [anon_sym_data] = ACTIONS(25),
    [anon_sym_newtype] = ACTIONS(27),
    [anon_sym_type] = ACTIONS(29),
    [sym__variable_pattern] = ACTIONS(31),
    [sym__constructor_pattern] = ACTIONS(33),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym__integer_literal] = ACTIONS(41),
    [sym__octal_literal] = ACTIONS(41),
    [sym__hexidecimal_literal] = ACTIONS(41),
  },
  [216] = {
    [ts_builtin_sym_end] = ACTIONS(687),
    [sym_comment] = ACTIONS(5),
  },
  [217] = {
    [ts_builtin_sym_end] = ACTIONS(689),
    [sym_comment] = ACTIONS(5),
  },
  [218] = {
    [sym_module_identifier] = ACTIONS(691),
    [sym_comment] = ACTIONS(5),
  },
  [219] = {
    [sym__layout_semicolon] = ACTIONS(693),
    [anon_sym_SEMI] = ACTIONS(695),
    [sym_comment] = ACTIONS(5),
  },
  [220] = {
    [sym__layout_semicolon] = ACTIONS(697),
    [anon_sym_SEMI] = ACTIONS(699),
    [sym_comment] = ACTIONS(5),
  },
  [221] = {
    [aux_sym_import_specification_repeat1] = STATE(364),
    [anon_sym_LPAREN] = ACTIONS(701),
    [anon_sym_COMMA] = ACTIONS(703),
    [anon_sym_RPAREN] = ACTIONS(705),
    [sym_comment] = ACTIONS(5),
  },
  [222] = {
    [sym_import_specification] = STATE(365),
    [sym__layout_semicolon] = ACTIONS(693),
    [anon_sym_SEMI] = ACTIONS(695),
    [anon_sym_LPAREN] = ACTIONS(187),
    [anon_sym_hiding] = ACTIONS(191),
    [sym_comment] = ACTIONS(5),
  },
  [223] = {
    [sym__identifier] = STATE(366),
    [sym_variable_identifier] = STATE(112),
    [sym_constructor_identifier] = STATE(112),
    [anon_sym_RPAREN] = ACTIONS(705),
    [sym__variable_pattern] = ACTIONS(199),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [224] = {
    [sym__variable_pattern] = ACTIONS(707),
    [sym__constructor_pattern] = ACTIONS(709),
    [sym_comment] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(707),
  },
  [225] = {
    [sym__gap] = STATE(70),
    [sym__graphic] = STATE(70),
    [sym__small] = STATE(72),
    [sym__large] = STATE(72),
    [sym__symbol] = STATE(72),
    [sym__special] = STATE(72),
    [sym__escape] = STATE(70),
    [aux_sym_string_repeat1] = STATE(368),
    [anon_sym_SEMI] = ACTIONS(105),
    [anon_sym_LBRACE] = ACTIONS(105),
    [anon_sym_RBRACE] = ACTIONS(105),
    [anon_sym_LPAREN] = ACTIONS(105),
    [anon_sym_RPAREN] = ACTIONS(105),
    [anon_sym_EQ] = ACTIONS(107),
    [anon_sym_TILDE] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(105),
    [anon_sym_RBRACK] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(107),
    [anon_sym_AT] = ACTIONS(107),
    [anon_sym__] = ACTIONS(109),
    [anon_sym_BQUOTE] = ACTIONS(105),
    [anon_sym_COLON] = ACTIONS(107),
    [anon_sym_PIPE] = ACTIONS(107),
    [anon_sym_BANG] = ACTIONS(107),
    [anon_sym_DOT] = ACTIONS(107),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(111),
    [anon_sym_DQUOTE] = ACTIONS(711),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(115),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(109),
    [sym__ascii_large] = ACTIONS(117),
    [anon_sym_POUND] = ACTIONS(107),
    [anon_sym_DOLLAR] = ACTIONS(107),
    [anon_sym_PERCENT] = ACTIONS(107),
    [anon_sym_AMP] = ACTIONS(107),
    [anon_sym_1] = ACTIONS(107),
    [anon_sym_PLUS] = ACTIONS(107),
    [anon_sym_SLASH] = ACTIONS(107),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_QMARK] = ACTIONS(107),
    [anon_sym_CARET] = ACTIONS(107),
    [anon_sym_BSLASH] = ACTIONS(119),
    [sym__space] = ACTIONS(121),
    [sym__newline] = ACTIONS(121),
    [sym__tab] = ACTIONS(121),
    [sym__vertical_tab] = ACTIONS(121),
  },
  [226] = {
    [sym_type_signature] = STATE(369),
    [sym__identifier] = STATE(228),
    [sym_variable_identifier] = STATE(112),
    [sym_constructor_identifier] = STATE(112),
    [sym_string] = STATE(370),
    [sym__variable_pattern] = ACTIONS(623),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(419),
  },
  [227] = {
    [sym__layout_semicolon] = ACTIONS(713),
    [anon_sym_SEMI] = ACTIONS(715),
    [sym_comment] = ACTIONS(5),
  },
  [228] = {
    [anon_sym_COLON_COLON] = ACTIONS(167),
    [sym_comment] = ACTIONS(5),
  },
  [229] = {
    [sym_type_signature] = STATE(369),
    [sym__identifier] = STATE(228),
    [sym_variable_identifier] = STATE(112),
    [sym_constructor_identifier] = STATE(112),
    [sym__variable_pattern] = ACTIONS(623),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [230] = {
    [sym__identifier] = STATE(371),
    [sym_variable_identifier] = STATE(112),
    [sym_constructor_identifier] = STATE(112),
    [sym__variable_pattern] = ACTIONS(199),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [231] = {
    [sym__layout_semicolon] = ACTIONS(717),
    [anon_sym_SEMI] = ACTIONS(719),
    [sym_comment] = ACTIONS(5),
  },
  [232] = {
    [anon_sym_COMMA] = ACTIONS(721),
    [anon_sym_RPAREN] = ACTIONS(723),
    [sym_comment] = ACTIONS(5),
  },
  [233] = {
    [sym_class] = STATE(374),
    [sym_constructor_identifier] = STATE(114),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
  },
  [234] = {
    [anon_sym_EQ_GT] = ACTIONS(725),
    [sym_comment] = ACTIONS(5),
  },
  [235] = {
    [anon_sym_COMMA] = ACTIONS(727),
    [anon_sym_RPAREN] = ACTIONS(729),
    [sym_comment] = ACTIONS(5),
  },
  [236] = {
    [anon_sym_COMMA] = ACTIONS(443),
    [anon_sym_RPAREN] = ACTIONS(443),
    [anon_sym_EQ_GT] = ACTIONS(443),
    [sym_comment] = ACTIONS(5),
  },
  [237] = {
    [sym__declarations] = STATE(378),
    [sym__layout_open_brace] = ACTIONS(437),
    [anon_sym_LBRACE] = ACTIONS(439),
    [sym_comment] = ACTIONS(5),
  },
  [238] = {
    [anon_sym_where] = ACTIONS(441),
    [sym__variable_pattern] = ACTIONS(445),
    [sym_comment] = ACTIONS(5),
  },
  [239] = {
    [sym_variable_identifier] = STATE(244),
    [anon_sym_where] = ACTIONS(731),
    [sym__variable_pattern] = ACTIONS(209),
    [sym_comment] = ACTIONS(5),
  },
  [240] = {
    [sym_variable_identifier] = STATE(273),
    [anon_sym_RPAREN] = ACTIONS(733),
    [sym__variable_pattern] = ACTIONS(255),
    [sym_comment] = ACTIONS(5),
  },
  [241] = {
    [sym_import] = STATE(19),
    [sym__declaration] = STATE(357),
    [sym_function_declaration] = STATE(19),
    [sym_function_head] = STATE(21),
    [sym__variable] = STATE(22),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym_foreign] = STATE(19),
    [sym_default] = STATE(19),
    [sym_type_class] = STATE(19),
    [sym_type_class_instance] = STATE(19),
    [sym_fixity] = STATE(19),
    [sym_type_signature] = STATE(19),
    [sym_algebraic_datatype] = STATE(19),
    [sym_newtype] = STATE(19),
    [sym_type_synonym] = STATE(19),
    [sym__literal] = STATE(19),
    [sym__identifier] = STATE(24),
    [sym_variable_identifier] = STATE(25),
    [sym_constructor_identifier] = STATE(26),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [aux_sym_module_repeat1] = STATE(382),
    [sym__layout_close_brace] = ACTIONS(735),
    [anon_sym_import] = ACTIONS(13),
    [anon_sym_foreign] = ACTIONS(15),
    [anon_sym_default] = ACTIONS(17),
    [anon_sym_class] = ACTIONS(19),
    [anon_sym_instance] = ACTIONS(21),
    [anon_sym_infixl] = ACTIONS(23),
    [anon_sym_infixr] = ACTIONS(23),
    [anon_sym_infix] = ACTIONS(23),
    [anon_sym_data] = ACTIONS(25),
    [anon_sym_newtype] = ACTIONS(27),
    [anon_sym_type] = ACTIONS(29),
    [sym__variable_pattern] = ACTIONS(31),
    [sym__constructor_pattern] = ACTIONS(33),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym__integer_literal] = ACTIONS(41),
    [sym__octal_literal] = ACTIONS(41),
    [sym__hexidecimal_literal] = ACTIONS(41),
  },
  [242] = {
    [sym_import] = STATE(19),
    [sym__declaration] = STATE(20),
    [sym_function_declaration] = STATE(19),
    [sym_function_head] = STATE(21),
    [sym__variable] = STATE(22),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym_foreign] = STATE(19),
    [sym_default] = STATE(19),
    [sym_type_class] = STATE(19),
    [sym_type_class_instance] = STATE(19),
    [sym_fixity] = STATE(19),
    [sym_type_signature] = STATE(19),
    [sym_algebraic_datatype] = STATE(19),
    [sym_newtype] = STATE(19),
    [sym_type_synonym] = STATE(19),
    [sym__literal] = STATE(19),
    [sym__identifier] = STATE(24),
    [sym_variable_identifier] = STATE(25),
    [sym_constructor_identifier] = STATE(26),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [aux_sym_module_repeat1] = STATE(383),
    [anon_sym_RBRACE] = ACTIONS(737),
    [anon_sym_import] = ACTIONS(13),
    [anon_sym_foreign] = ACTIONS(15),
    [anon_sym_default] = ACTIONS(17),
    [anon_sym_class] = ACTIONS(19),
    [anon_sym_instance] = ACTIONS(21),
    [anon_sym_infixl] = ACTIONS(23),
    [anon_sym_infixr] = ACTIONS(23),
    [anon_sym_infix] = ACTIONS(23),
    [anon_sym_data] = ACTIONS(25),
    [anon_sym_newtype] = ACTIONS(27),
    [anon_sym_type] = ACTIONS(29),
    [sym__variable_pattern] = ACTIONS(31),
    [sym__constructor_pattern] = ACTIONS(33),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym__integer_literal] = ACTIONS(41),
    [sym__octal_literal] = ACTIONS(41),
    [sym__hexidecimal_literal] = ACTIONS(41),
  },
  [243] = {
    [sym__layout_semicolon] = ACTIONS(739),
    [anon_sym_SEMI] = ACTIONS(741),
    [sym_comment] = ACTIONS(5),
  },
  [244] = {
    [anon_sym_where] = ACTIONS(743),
    [sym__variable_pattern] = ACTIONS(745),
    [sym_comment] = ACTIONS(5),
  },
  [245] = {
    [sym__declarations] = STATE(384),
    [sym__layout_open_brace] = ACTIONS(437),
    [anon_sym_LBRACE] = ACTIONS(439),
    [sym_comment] = ACTIONS(5),
  },
  [246] = {
    [sym_variable_identifier] = STATE(244),
    [anon_sym_where] = ACTIONS(747),
    [sym__variable_pattern] = ACTIONS(209),
    [sym_comment] = ACTIONS(5),
  },
  [247] = {
    [sym__layout_semicolon] = ACTIONS(749),
    [anon_sym_SEMI] = ACTIONS(751),
    [sym_comment] = ACTIONS(5),
  },
  [248] = {
    [sym__layout_semicolon] = ACTIONS(753),
    [anon_sym_SEMI] = ACTIONS(755),
    [anon_sym_COMMA] = ACTIONS(755),
    [sym_comment] = ACTIONS(5),
  },
  [249] = {
    [sym__layout_semicolon] = ACTIONS(757),
    [anon_sym_SEMI] = ACTIONS(759),
    [anon_sym_COMMA] = ACTIONS(759),
    [anon_sym_DASH] = ACTIONS(759),
    [anon_sym_COLON] = ACTIONS(759),
    [anon_sym_BANG] = ACTIONS(759),
    [anon_sym_DOT] = ACTIONS(759),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(759),
    [anon_sym_DOLLAR] = ACTIONS(759),
    [anon_sym_PERCENT] = ACTIONS(759),
    [anon_sym_AMP] = ACTIONS(759),
    [anon_sym_1] = ACTIONS(759),
    [anon_sym_PLUS] = ACTIONS(759),
    [anon_sym_SLASH] = ACTIONS(759),
    [anon_sym_LT] = ACTIONS(759),
    [anon_sym_GT] = ACTIONS(759),
    [anon_sym_QMARK] = ACTIONS(759),
    [anon_sym_CARET] = ACTIONS(759),
  },
  [250] = {
    [sym__layout_semicolon] = ACTIONS(761),
    [anon_sym_SEMI] = ACTIONS(763),
    [anon_sym_COMMA] = ACTIONS(763),
    [sym_comment] = ACTIONS(5),
  },
  [251] = {
    [sym__op] = STATE(386),
    [sym_variable_symbol] = STATE(46),
    [sym_constructor_symbol] = STATE(46),
    [sym__variable_symbol] = STATE(48),
    [anon_sym_DASH] = ACTIONS(59),
    [anon_sym_BQUOTE] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(63),
    [anon_sym_BANG] = ACTIONS(59),
    [anon_sym_DOT] = ACTIONS(59),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(59),
    [anon_sym_DOLLAR] = ACTIONS(59),
    [anon_sym_PERCENT] = ACTIONS(59),
    [anon_sym_AMP] = ACTIONS(59),
    [anon_sym_1] = ACTIONS(59),
    [anon_sym_PLUS] = ACTIONS(59),
    [anon_sym_SLASH] = ACTIONS(59),
    [anon_sym_LT] = ACTIONS(59),
    [anon_sym_GT] = ACTIONS(59),
    [anon_sym_QMARK] = ACTIONS(59),
    [anon_sym_CARET] = ACTIONS(59),
  },
  [252] = {
    [sym__layout_semicolon] = ACTIONS(765),
    [anon_sym_SEMI] = ACTIONS(767),
    [anon_sym_COMMA] = ACTIONS(467),
    [sym_comment] = ACTIONS(5),
  },
  [253] = {
    [sym__layout_semicolon] = ACTIONS(769),
    [anon_sym_SEMI] = ACTIONS(771),
    [anon_sym_COMMA] = ACTIONS(771),
    [anon_sym_DASH] = ACTIONS(771),
    [anon_sym_BANG] = ACTIONS(771),
    [anon_sym_DOT] = ACTIONS(771),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(771),
    [anon_sym_DOLLAR] = ACTIONS(771),
    [anon_sym_PERCENT] = ACTIONS(771),
    [anon_sym_AMP] = ACTIONS(771),
    [anon_sym_1] = ACTIONS(771),
    [anon_sym_PLUS] = ACTIONS(771),
    [anon_sym_SLASH] = ACTIONS(771),
    [anon_sym_LT] = ACTIONS(771),
    [anon_sym_GT] = ACTIONS(771),
    [anon_sym_QMARK] = ACTIONS(771),
    [anon_sym_CARET] = ACTIONS(771),
  },
  [254] = {
    [sym_constructors] = STATE(387),
    [sym_constructor] = STATE(139),
    [sym_deriving] = STATE(388),
    [sym_constructor_identifier] = STATE(141),
    [sym__layout_semicolon] = ACTIONS(773),
    [anon_sym_SEMI] = ACTIONS(775),
    [anon_sym_deriving] = ACTIONS(243),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [255] = {
    [sym_deriving] = STATE(388),
    [sym__layout_semicolon] = ACTIONS(773),
    [anon_sym_SEMI] = ACTIONS(775),
    [anon_sym_deriving] = ACTIONS(243),
    [sym_comment] = ACTIONS(5),
  },
  [256] = {
    [sym__layout_semicolon] = ACTIONS(773),
    [anon_sym_SEMI] = ACTIONS(775),
    [sym_comment] = ACTIONS(5),
  },
  [257] = {
    [sym__layout_semicolon] = ACTIONS(71),
    [anon_sym_SEMI] = ACTIONS(73),
    [anon_sym_EQ] = ACTIONS(73),
    [anon_sym_deriving] = ACTIONS(73),
    [sym__variable_pattern] = ACTIONS(75),
    [sym__constructor_pattern] = ACTIONS(75),
    [sym_comment] = ACTIONS(5),
  },
  [258] = {
    [sym__layout_semicolon] = ACTIONS(501),
    [anon_sym_SEMI] = ACTIONS(441),
    [anon_sym_EQ] = ACTIONS(441),
    [anon_sym_deriving] = ACTIONS(441),
    [sym__variable_pattern] = ACTIONS(445),
    [sym__constructor_pattern] = ACTIONS(445),
    [sym_comment] = ACTIONS(5),
  },
  [259] = {
    [sym__identifier] = STATE(389),
    [sym_variable_identifier] = STATE(112),
    [sym_constructor_identifier] = STATE(112),
    [sym__variable_pattern] = ACTIONS(199),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [260] = {
    [sym__layout_semicolon] = ACTIONS(777),
    [anon_sym_SEMI] = ACTIONS(779),
    [sym_comment] = ACTIONS(5),
  },
  [261] = {
    [sym_constructor] = STATE(390),
    [sym_constructor_identifier] = STATE(141),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [262] = {
    [sym__layout_semicolon] = ACTIONS(781),
    [anon_sym_SEMI] = ACTIONS(783),
    [anon_sym_PIPE] = ACTIONS(785),
    [anon_sym_deriving] = ACTIONS(783),
    [sym_comment] = ACTIONS(5),
  },
  [263] = {
    [sym_field] = STATE(392),
    [sym_variable_identifier] = STATE(393),
    [sym__variable_pattern] = ACTIONS(623),
    [sym_comment] = ACTIONS(5),
  },
  [264] = {
    [sym__identifier] = STATE(394),
    [sym_variable_identifier] = STATE(266),
    [sym_constructor_identifier] = STATE(266),
    [sym__variable_pattern] = ACTIONS(787),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [265] = {
    [sym__layout_semicolon] = ACTIONS(789),
    [anon_sym_SEMI] = ACTIONS(791),
    [anon_sym_PIPE] = ACTIONS(791),
    [anon_sym_deriving] = ACTIONS(791),
    [anon_sym_BANG] = ACTIONS(791),
    [sym__variable_pattern] = ACTIONS(793),
    [sym__constructor_pattern] = ACTIONS(793),
    [sym_comment] = ACTIONS(5),
  },
  [266] = {
    [sym__layout_semicolon] = ACTIONS(169),
    [anon_sym_SEMI] = ACTIONS(171),
    [anon_sym_PIPE] = ACTIONS(171),
    [anon_sym_deriving] = ACTIONS(171),
    [anon_sym_BANG] = ACTIONS(171),
    [sym__variable_pattern] = ACTIONS(173),
    [sym__constructor_pattern] = ACTIONS(173),
    [sym_comment] = ACTIONS(5),
  },
  [267] = {
    [sym__layout_semicolon] = ACTIONS(795),
    [anon_sym_SEMI] = ACTIONS(797),
    [anon_sym_PIPE] = ACTIONS(797),
    [anon_sym_deriving] = ACTIONS(797),
    [sym_comment] = ACTIONS(5),
  },
  [268] = {
    [sym_strict] = STATE(395),
    [sym__identifier] = STATE(395),
    [sym_variable_identifier] = STATE(266),
    [sym_constructor_identifier] = STATE(266),
    [sym__layout_semicolon] = ACTIONS(795),
    [anon_sym_SEMI] = ACTIONS(797),
    [anon_sym_PIPE] = ACTIONS(797),
    [anon_sym_deriving] = ACTIONS(797),
    [anon_sym_BANG] = ACTIONS(499),
    [sym__variable_pattern] = ACTIONS(249),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [269] = {
    [sym__layout_semicolon] = ACTIONS(799),
    [anon_sym_SEMI] = ACTIONS(743),
    [anon_sym_EQ] = ACTIONS(743),
    [anon_sym_deriving] = ACTIONS(743),
    [sym__variable_pattern] = ACTIONS(745),
    [sym__constructor_pattern] = ACTIONS(745),
    [sym_comment] = ACTIONS(5),
  },
  [270] = {
    [sym_new_constructor] = STATE(396),
    [sym_constructor_identifier] = STATE(272),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
  },
  [271] = {
    [sym_deriving] = STATE(397),
    [sym__layout_semicolon] = ACTIONS(801),
    [anon_sym_SEMI] = ACTIONS(803),
    [anon_sym_deriving] = ACTIONS(243),
    [sym_comment] = ACTIONS(5),
  },
  [272] = {
    [sym__identifier] = STATE(398),
    [sym_variable_identifier] = STATE(266),
    [sym_constructor_identifier] = STATE(266),
    [sym_fields] = STATE(398),
    [anon_sym_LBRACE] = ACTIONS(497),
    [sym__variable_pattern] = ACTIONS(787),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [273] = {
    [anon_sym_LBRACE] = ACTIONS(743),
    [anon_sym_LPAREN] = ACTIONS(743),
    [anon_sym_COMMA] = ACTIONS(743),
    [anon_sym_RPAREN] = ACTIONS(743),
    [anon_sym_EQ] = ACTIONS(743),
    [anon_sym_LBRACK] = ACTIONS(743),
    [anon_sym_RBRACK] = ACTIONS(743),
    [anon_sym_DASH_GT] = ACTIONS(743),
    [sym_unit_type] = ACTIONS(743),
    [sym_list_constructor] = ACTIONS(743),
    [sym_function_constructor] = ACTIONS(743),
    [sym__variable_pattern] = ACTIONS(743),
    [sym__constructor_pattern] = ACTIONS(745),
    [sym_module_identifier] = ACTIONS(745),
    [sym_comment] = ACTIONS(5),
  },
  [274] = {
    [sym_type] = STATE(330),
    [sym__generic_type_constructor] = STATE(331),
    [sym_tupling_constructor] = STATE(327),
    [sym_tuple] = STATE(331),
    [sym_list] = STATE(331),
    [sym_parenthesized_constructor] = STATE(331),
    [sym_variable_identifier] = STATE(333),
    [sym__type_constructors] = STATE(327),
    [sym_qualified_type_constructor] = STATE(334),
    [anon_sym_LPAREN] = ACTIONS(615),
    [anon_sym_COMMA] = ACTIONS(617),
    [anon_sym_LBRACK] = ACTIONS(619),
    [sym_unit_type] = ACTIONS(621),
    [sym_list_constructor] = ACTIONS(621),
    [sym_function_constructor] = ACTIONS(621),
    [sym__variable_pattern] = ACTIONS(623),
    [sym__constructor_pattern] = ACTIONS(629),
    [sym_module_identifier] = ACTIONS(627),
    [sym_comment] = ACTIONS(5),
  },
  [275] = {
    [sym_variable_identifier] = STATE(342),
    [aux_sym_type_class_repeat1] = STATE(343),
    [sym__layout_semicolon] = ACTIONS(637),
    [anon_sym_SEMI] = ACTIONS(639),
    [anon_sym_DASH_GT] = ACTIONS(639),
    [sym__variable_pattern] = ACTIONS(805),
    [sym_comment] = ACTIONS(5),
  },
  [276] = {
    [sym__layout_semicolon] = ACTIONS(807),
    [anon_sym_SEMI] = ACTIONS(809),
    [sym_comment] = ACTIONS(5),
  },
  [277] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(811),
  },
  [278] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(813),
  },
  [279] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(815),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(815),
  },
  [280] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(817),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(819),
  },
  [281] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(821),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(821),
  },
  [282] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(817),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(823),
  },
  [283] = {
    [anon_sym_SEMI] = ACTIONS(825),
    [anon_sym_LBRACE] = ACTIONS(825),
    [anon_sym_RBRACE] = ACTIONS(825),
    [anon_sym_LPAREN] = ACTIONS(825),
    [anon_sym_RPAREN] = ACTIONS(825),
    [anon_sym_EQ] = ACTIONS(825),
    [anon_sym_TILDE] = ACTIONS(825),
    [anon_sym_LBRACK] = ACTIONS(825),
    [anon_sym_RBRACK] = ACTIONS(825),
    [anon_sym_DASH] = ACTIONS(825),
    [anon_sym_AT] = ACTIONS(825),
    [anon_sym__] = ACTIONS(825),
    [anon_sym_BQUOTE] = ACTIONS(825),
    [anon_sym_COLON] = ACTIONS(825),
    [anon_sym_PIPE] = ACTIONS(825),
    [anon_sym_BANG] = ACTIONS(825),
    [anon_sym_DOT] = ACTIONS(825),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(825),
    [anon_sym_DQUOTE] = ACTIONS(825),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(825),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(825),
    [sym__ascii_large] = ACTIONS(825),
    [anon_sym_POUND] = ACTIONS(825),
    [anon_sym_DOLLAR] = ACTIONS(825),
    [anon_sym_PERCENT] = ACTIONS(825),
    [anon_sym_AMP] = ACTIONS(825),
    [anon_sym_1] = ACTIONS(825),
    [anon_sym_PLUS] = ACTIONS(825),
    [anon_sym_SLASH] = ACTIONS(825),
    [anon_sym_LT] = ACTIONS(825),
    [anon_sym_GT] = ACTIONS(825),
    [anon_sym_QMARK] = ACTIONS(825),
    [anon_sym_CARET] = ACTIONS(825),
    [anon_sym_BSLASH] = ACTIONS(825),
    [sym__space] = ACTIONS(825),
    [sym__newline] = ACTIONS(825),
    [sym__tab] = ACTIONS(825),
    [sym__vertical_tab] = ACTIONS(825),
  },
  [284] = {
    [anon_sym_SEMI] = ACTIONS(827),
    [anon_sym_LBRACE] = ACTIONS(827),
    [anon_sym_RBRACE] = ACTIONS(827),
    [anon_sym_LPAREN] = ACTIONS(827),
    [anon_sym_RPAREN] = ACTIONS(827),
    [anon_sym_EQ] = ACTIONS(827),
    [anon_sym_TILDE] = ACTIONS(827),
    [anon_sym_LBRACK] = ACTIONS(827),
    [anon_sym_RBRACK] = ACTIONS(827),
    [anon_sym_DASH] = ACTIONS(827),
    [anon_sym_AT] = ACTIONS(827),
    [anon_sym__] = ACTIONS(827),
    [anon_sym_BQUOTE] = ACTIONS(827),
    [anon_sym_COLON] = ACTIONS(827),
    [anon_sym_PIPE] = ACTIONS(827),
    [anon_sym_BANG] = ACTIONS(827),
    [anon_sym_DOT] = ACTIONS(827),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(827),
    [anon_sym_DQUOTE] = ACTIONS(827),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(827),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(827),
    [sym__ascii_large] = ACTIONS(827),
    [anon_sym_POUND] = ACTIONS(827),
    [anon_sym_DOLLAR] = ACTIONS(827),
    [anon_sym_PERCENT] = ACTIONS(827),
    [anon_sym_AMP] = ACTIONS(827),
    [anon_sym_1] = ACTIONS(827),
    [anon_sym_PLUS] = ACTIONS(827),
    [anon_sym_SLASH] = ACTIONS(827),
    [anon_sym_LT] = ACTIONS(827),
    [anon_sym_GT] = ACTIONS(827),
    [anon_sym_QMARK] = ACTIONS(827),
    [anon_sym_CARET] = ACTIONS(827),
    [anon_sym_BSLASH] = ACTIONS(827),
    [sym__space] = ACTIONS(827),
    [sym__newline] = ACTIONS(827),
    [sym__tab] = ACTIONS(827),
    [sym__vertical_tab] = ACTIONS(827),
  },
  [285] = {
    [anon_sym_SEMI] = ACTIONS(829),
    [anon_sym_LBRACE] = ACTIONS(829),
    [anon_sym_RBRACE] = ACTIONS(829),
    [anon_sym_LPAREN] = ACTIONS(829),
    [anon_sym_RPAREN] = ACTIONS(829),
    [anon_sym_EQ] = ACTIONS(829),
    [anon_sym_TILDE] = ACTIONS(829),
    [anon_sym_LBRACK] = ACTIONS(829),
    [anon_sym_RBRACK] = ACTIONS(829),
    [anon_sym_DASH] = ACTIONS(829),
    [anon_sym_AT] = ACTIONS(829),
    [anon_sym__] = ACTIONS(829),
    [anon_sym_BQUOTE] = ACTIONS(829),
    [anon_sym_COLON] = ACTIONS(829),
    [anon_sym_PIPE] = ACTIONS(829),
    [anon_sym_BANG] = ACTIONS(829),
    [anon_sym_DOT] = ACTIONS(829),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(829),
    [anon_sym_DQUOTE] = ACTIONS(829),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(829),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(829),
    [sym__ascii_large] = ACTIONS(829),
    [anon_sym_POUND] = ACTIONS(829),
    [anon_sym_DOLLAR] = ACTIONS(829),
    [anon_sym_PERCENT] = ACTIONS(829),
    [anon_sym_AMP] = ACTIONS(829),
    [anon_sym_1] = ACTIONS(829),
    [anon_sym_PLUS] = ACTIONS(829),
    [anon_sym_SLASH] = ACTIONS(829),
    [anon_sym_LT] = ACTIONS(829),
    [anon_sym_GT] = ACTIONS(829),
    [anon_sym_QMARK] = ACTIONS(829),
    [anon_sym_CARET] = ACTIONS(829),
    [anon_sym_BSLASH] = ACTIONS(829),
    [sym__space] = ACTIONS(829),
    [sym__newline] = ACTIONS(829),
    [sym__tab] = ACTIONS(829),
    [sym__vertical_tab] = ACTIONS(829),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(829),
  },
  [286] = {
    [anon_sym_SEMI] = ACTIONS(831),
    [anon_sym_LBRACE] = ACTIONS(831),
    [anon_sym_RBRACE] = ACTIONS(831),
    [anon_sym_LPAREN] = ACTIONS(831),
    [anon_sym_RPAREN] = ACTIONS(831),
    [anon_sym_EQ] = ACTIONS(831),
    [anon_sym_TILDE] = ACTIONS(831),
    [anon_sym_LBRACK] = ACTIONS(831),
    [anon_sym_RBRACK] = ACTIONS(831),
    [anon_sym_DASH] = ACTIONS(831),
    [anon_sym_AT] = ACTIONS(831),
    [anon_sym__] = ACTIONS(831),
    [anon_sym_BQUOTE] = ACTIONS(831),
    [anon_sym_COLON] = ACTIONS(831),
    [anon_sym_PIPE] = ACTIONS(831),
    [anon_sym_BANG] = ACTIONS(831),
    [anon_sym_DOT] = ACTIONS(831),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(831),
    [anon_sym_DQUOTE] = ACTIONS(831),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(831),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(831),
    [sym__ascii_large] = ACTIONS(831),
    [anon_sym_POUND] = ACTIONS(831),
    [anon_sym_DOLLAR] = ACTIONS(831),
    [anon_sym_PERCENT] = ACTIONS(831),
    [anon_sym_AMP] = ACTIONS(831),
    [anon_sym_1] = ACTIONS(831),
    [anon_sym_PLUS] = ACTIONS(831),
    [anon_sym_SLASH] = ACTIONS(831),
    [anon_sym_LT] = ACTIONS(831),
    [anon_sym_GT] = ACTIONS(831),
    [anon_sym_QMARK] = ACTIONS(831),
    [anon_sym_CARET] = ACTIONS(831),
    [anon_sym_BSLASH] = ACTIONS(831),
    [sym__space] = ACTIONS(831),
    [sym__newline] = ACTIONS(831),
    [sym__tab] = ACTIONS(831),
    [sym__vertical_tab] = ACTIONS(831),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(833),
  },
  [287] = {
    [anon_sym_SEMI] = ACTIONS(835),
    [anon_sym_LBRACE] = ACTIONS(835),
    [anon_sym_RBRACE] = ACTIONS(835),
    [anon_sym_LPAREN] = ACTIONS(835),
    [anon_sym_RPAREN] = ACTIONS(835),
    [anon_sym_EQ] = ACTIONS(835),
    [anon_sym_TILDE] = ACTIONS(835),
    [anon_sym_LBRACK] = ACTIONS(835),
    [anon_sym_RBRACK] = ACTIONS(835),
    [anon_sym_DASH] = ACTIONS(835),
    [anon_sym_AT] = ACTIONS(835),
    [anon_sym__] = ACTIONS(835),
    [anon_sym_BQUOTE] = ACTIONS(835),
    [anon_sym_COLON] = ACTIONS(835),
    [anon_sym_PIPE] = ACTIONS(835),
    [anon_sym_BANG] = ACTIONS(835),
    [anon_sym_DOT] = ACTIONS(835),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(835),
    [anon_sym_DQUOTE] = ACTIONS(835),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(835),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(835),
    [sym__ascii_large] = ACTIONS(835),
    [anon_sym_POUND] = ACTIONS(835),
    [anon_sym_DOLLAR] = ACTIONS(835),
    [anon_sym_PERCENT] = ACTIONS(835),
    [anon_sym_AMP] = ACTIONS(835),
    [anon_sym_1] = ACTIONS(835),
    [anon_sym_PLUS] = ACTIONS(835),
    [anon_sym_SLASH] = ACTIONS(835),
    [anon_sym_LT] = ACTIONS(835),
    [anon_sym_GT] = ACTIONS(835),
    [anon_sym_QMARK] = ACTIONS(835),
    [anon_sym_CARET] = ACTIONS(835),
    [anon_sym_BSLASH] = ACTIONS(835),
    [sym__space] = ACTIONS(835),
    [sym__newline] = ACTIONS(835),
    [sym__tab] = ACTIONS(835),
    [sym__vertical_tab] = ACTIONS(835),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(835),
  },
  [288] = {
    [anon_sym_SEMI] = ACTIONS(831),
    [anon_sym_LBRACE] = ACTIONS(831),
    [anon_sym_RBRACE] = ACTIONS(831),
    [anon_sym_LPAREN] = ACTIONS(831),
    [anon_sym_RPAREN] = ACTIONS(831),
    [anon_sym_EQ] = ACTIONS(831),
    [anon_sym_TILDE] = ACTIONS(831),
    [anon_sym_LBRACK] = ACTIONS(831),
    [anon_sym_RBRACK] = ACTIONS(831),
    [anon_sym_DASH] = ACTIONS(831),
    [anon_sym_AT] = ACTIONS(831),
    [anon_sym__] = ACTIONS(831),
    [anon_sym_BQUOTE] = ACTIONS(831),
    [anon_sym_COLON] = ACTIONS(831),
    [anon_sym_PIPE] = ACTIONS(831),
    [anon_sym_BANG] = ACTIONS(831),
    [anon_sym_DOT] = ACTIONS(831),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(831),
    [anon_sym_DQUOTE] = ACTIONS(831),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(831),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(831),
    [sym__ascii_large] = ACTIONS(831),
    [anon_sym_POUND] = ACTIONS(831),
    [anon_sym_DOLLAR] = ACTIONS(831),
    [anon_sym_PERCENT] = ACTIONS(831),
    [anon_sym_AMP] = ACTIONS(831),
    [anon_sym_1] = ACTIONS(831),
    [anon_sym_PLUS] = ACTIONS(831),
    [anon_sym_SLASH] = ACTIONS(831),
    [anon_sym_LT] = ACTIONS(831),
    [anon_sym_GT] = ACTIONS(831),
    [anon_sym_QMARK] = ACTIONS(831),
    [anon_sym_CARET] = ACTIONS(831),
    [anon_sym_BSLASH] = ACTIONS(831),
    [sym__space] = ACTIONS(831),
    [sym__newline] = ACTIONS(831),
    [sym__tab] = ACTIONS(831),
    [sym__vertical_tab] = ACTIONS(831),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(837),
  },
  [289] = {
    [sym__layout_semicolon] = ACTIONS(687),
    [anon_sym_SEMI] = ACTIONS(839),
    [sym_comment] = ACTIONS(5),
  },
  [290] = {
    [sym_general_constructor] = STATE(173),
    [sym__variable] = STATE(173),
    [sym_qualified_variable_identifier] = STATE(174),
    [sym__expression] = STATE(405),
    [sym_do_expression] = STATE(173),
    [sym__statement] = STATE(406),
    [sym__literal] = STATE(173),
    [sym__identifier] = STATE(173),
    [sym_variable_identifier] = STATE(26),
    [sym_constructor_identifier] = STATE(407),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [aux_sym_statement_list_repeat1] = STATE(408),
    [sym__layout_close_brace] = ACTIONS(841),
    [anon_sym_do] = ACTIONS(337),
    [sym__variable_pattern] = ACTIONS(31),
    [sym__constructor_pattern] = ACTIONS(843),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym__integer_literal] = ACTIONS(41),
    [sym__octal_literal] = ACTIONS(41),
    [sym__hexidecimal_literal] = ACTIONS(41),
  },
  [291] = {
    [sym_general_constructor] = STATE(173),
    [sym__variable] = STATE(173),
    [sym_qualified_variable_identifier] = STATE(174),
    [sym__expression] = STATE(409),
    [sym_do_expression] = STATE(173),
    [sym__statement] = STATE(410),
    [sym__literal] = STATE(173),
    [sym__identifier] = STATE(173),
    [sym_variable_identifier] = STATE(26),
    [sym_constructor_identifier] = STATE(407),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [aux_sym_statement_list_repeat1] = STATE(411),
    [anon_sym_RBRACE] = ACTIONS(845),
    [anon_sym_do] = ACTIONS(337),
    [sym__variable_pattern] = ACTIONS(31),
    [sym__constructor_pattern] = ACTIONS(843),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym__integer_literal] = ACTIONS(41),
    [sym__octal_literal] = ACTIONS(41),
    [sym__hexidecimal_literal] = ACTIONS(41),
  },
  [292] = {
    [sym__layout_semicolon] = ACTIONS(847),
    [anon_sym_SEMI] = ACTIONS(849),
    [anon_sym_where] = ACTIONS(849),
    [anon_sym_do] = ACTIONS(849),
    [sym__variable_pattern] = ACTIONS(851),
    [sym__constructor_pattern] = ACTIONS(851),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(851),
    [anon_sym_SQUOTE] = ACTIONS(849),
    [anon_sym_DQUOTE] = ACTIONS(849),
    [sym__integer_literal] = ACTIONS(849),
    [sym__octal_literal] = ACTIONS(849),
    [sym__hexidecimal_literal] = ACTIONS(849),
  },
  [293] = {
    [sym__layout_semicolon] = ACTIONS(853),
    [anon_sym_SEMI] = ACTIONS(261),
    [anon_sym_where] = ACTIONS(261),
    [anon_sym_do] = ACTIONS(261),
    [sym__variable_pattern] = ACTIONS(263),
    [sym__constructor_pattern] = ACTIONS(263),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(263),
    [anon_sym_SQUOTE] = ACTIONS(261),
    [anon_sym_DQUOTE] = ACTIONS(261),
    [sym__integer_literal] = ACTIONS(261),
    [sym__octal_literal] = ACTIONS(261),
    [sym__hexidecimal_literal] = ACTIONS(261),
  },
  [294] = {
    [sym__layout_semicolon] = ACTIONS(855),
    [anon_sym_SEMI] = ACTIONS(857),
    [anon_sym_where] = ACTIONS(857),
    [anon_sym_do] = ACTIONS(857),
    [sym__variable_pattern] = ACTIONS(859),
    [sym__constructor_pattern] = ACTIONS(859),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(859),
    [anon_sym_SQUOTE] = ACTIONS(857),
    [anon_sym_DQUOTE] = ACTIONS(857),
    [sym__integer_literal] = ACTIONS(857),
    [sym__octal_literal] = ACTIONS(857),
    [sym__hexidecimal_literal] = ACTIONS(857),
  },
  [295] = {
    [sym__literal] = STATE(412),
    [sym_variable_identifier] = STATE(412),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [sym__layout_semicolon] = ACTIONS(861),
    [anon_sym_SEMI] = ACTIONS(863),
    [anon_sym_where] = ACTIONS(863),
    [anon_sym_do] = ACTIONS(863),
    [sym__variable_pattern] = ACTIONS(865),
    [sym__constructor_pattern] = ACTIONS(865),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(865),
    [anon_sym_SQUOTE] = ACTIONS(863),
    [anon_sym_DQUOTE] = ACTIONS(863),
    [sym__integer_literal] = ACTIONS(863),
    [sym__octal_literal] = ACTIONS(863),
    [sym__hexidecimal_literal] = ACTIONS(863),
  },
  [296] = {
    [sym__layout_semicolon] = ACTIONS(867),
    [anon_sym_SEMI] = ACTIONS(869),
    [sym_comment] = ACTIONS(5),
  },
  [297] = {
    [sym__layout_semicolon] = ACTIONS(871),
    [anon_sym_SEMI] = ACTIONS(873),
    [anon_sym_where] = ACTIONS(873),
    [anon_sym_do] = ACTIONS(873),
    [sym__variable_pattern] = ACTIONS(875),
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
    [sym__literal] = STATE(413),
    [sym_integer] = STATE(87),
    [sym_char] = STATE(87),
    [sym_string] = STATE(87),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(159),
    [anon_sym_DQUOTE] = ACTIONS(161),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [299] = {
    [sym__function_pattern] = STATE(414),
    [sym_irrefutable_pattern] = STATE(84),
    [sym_list_pattern] = STATE(84),
    [sym_tuple_pattern] = STATE(84),
    [sym_parenthesized_pattern] = STATE(84),
    [sym__pattern] = STATE(415),
    [sym_negative_literal] = STATE(183),
    [sym_general_constructor] = STATE(183),
    [sym_as_pattern] = STATE(84),
    [sym_wildcard] = STATE(84),
    [sym__variable] = STATE(184),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym__literal] = STATE(84),
    [sym__identifier] = STATE(92),
    [sym_simple_type] = STATE(93),
    [sym_variable_identifier] = STATE(94),
    [sym_constructor_identifier] = STATE(185),
    [sym_integer] = STATE(87),
    [sym_char] = STATE(87),
    [sym_string] = STATE(87),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(347),
    [anon_sym_LBRACK] = ACTIONS(147),
    [anon_sym_DASH] = ACTIONS(349),
    [anon_sym__] = ACTIONS(149),
    [sym_list_constructor] = ACTIONS(151),
    [sym__variable_pattern] = ACTIONS(153),
    [sym__constructor_pattern] = ACTIONS(351),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(159),
    [anon_sym_DQUOTE] = ACTIONS(161),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [300] = {
    [anon_sym_LPAREN] = ACTIONS(877),
    [anon_sym_COMMA] = ACTIONS(877),
    [anon_sym_RPAREN] = ACTIONS(877),
    [anon_sym_EQ] = ACTIONS(877),
    [anon_sym_TILDE] = ACTIONS(877),
    [anon_sym_LBRACK] = ACTIONS(877),
    [anon_sym_RBRACK] = ACTIONS(877),
    [anon_sym_DASH] = ACTIONS(877),
    [anon_sym__] = ACTIONS(877),
    [anon_sym_BQUOTE] = ACTIONS(877),
    [anon_sym_COLON] = ACTIONS(877),
    [sym_list_constructor] = ACTIONS(877),
    [anon_sym_BANG] = ACTIONS(877),
    [sym__variable_pattern] = ACTIONS(879),
    [sym__constructor_pattern] = ACTIONS(879),
    [anon_sym_DOT] = ACTIONS(877),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(879),
    [anon_sym_SQUOTE] = ACTIONS(877),
    [anon_sym_DQUOTE] = ACTIONS(877),
    [anon_sym_POUND] = ACTIONS(877),
    [anon_sym_DOLLAR] = ACTIONS(877),
    [anon_sym_PERCENT] = ACTIONS(877),
    [anon_sym_AMP] = ACTIONS(877),
    [anon_sym_1] = ACTIONS(877),
    [anon_sym_PLUS] = ACTIONS(877),
    [anon_sym_SLASH] = ACTIONS(877),
    [anon_sym_LT] = ACTIONS(877),
    [anon_sym_GT] = ACTIONS(877),
    [anon_sym_QMARK] = ACTIONS(877),
    [anon_sym_CARET] = ACTIONS(877),
    [sym__integer_literal] = ACTIONS(877),
    [sym__octal_literal] = ACTIONS(877),
    [sym__hexidecimal_literal] = ACTIONS(877),
  },
  [301] = {
    [anon_sym_LPAREN] = ACTIONS(215),
    [anon_sym_TILDE] = ACTIONS(215),
    [anon_sym_LBRACK] = ACTIONS(215),
    [anon_sym_DASH] = ACTIONS(215),
    [anon_sym__] = ACTIONS(215),
    [sym_list_constructor] = ACTIONS(215),
    [anon_sym_BANG] = ACTIONS(215),
    [sym__variable_pattern] = ACTIONS(881),
    [sym__constructor_pattern] = ACTIONS(881),
    [anon_sym_DOT] = ACTIONS(215),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(881),
    [anon_sym_SQUOTE] = ACTIONS(215),
    [anon_sym_DQUOTE] = ACTIONS(215),
    [anon_sym_POUND] = ACTIONS(215),
    [anon_sym_DOLLAR] = ACTIONS(215),
    [anon_sym_PERCENT] = ACTIONS(215),
    [anon_sym_AMP] = ACTIONS(215),
    [anon_sym_1] = ACTIONS(215),
    [anon_sym_PLUS] = ACTIONS(215),
    [anon_sym_SLASH] = ACTIONS(215),
    [anon_sym_LT] = ACTIONS(215),
    [anon_sym_GT] = ACTIONS(215),
    [anon_sym_QMARK] = ACTIONS(215),
    [anon_sym_CARET] = ACTIONS(215),
    [sym__integer_literal] = ACTIONS(215),
    [sym__octal_literal] = ACTIONS(215),
    [sym__hexidecimal_literal] = ACTIONS(215),
  },
  [302] = {
    [sym__identifier] = STATE(416),
    [sym_variable_identifier] = STATE(112),
    [sym_constructor_identifier] = STATE(112),
    [sym__variable_pattern] = ACTIONS(199),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [303] = {
    [sym__constructor_symbol] = STATE(418),
    [aux_sym_constructor_symbol_repeat1] = STATE(419),
    [anon_sym_LPAREN] = ACTIONS(219),
    [anon_sym_TILDE] = ACTIONS(219),
    [anon_sym_LBRACK] = ACTIONS(219),
    [anon_sym_DASH] = ACTIONS(219),
    [anon_sym__] = ACTIONS(219),
    [anon_sym_COLON] = ACTIONS(883),
    [sym_list_constructor] = ACTIONS(219),
    [anon_sym_BANG] = ACTIONS(883),
    [sym__variable_pattern] = ACTIONS(885),
    [sym__constructor_pattern] = ACTIONS(885),
    [anon_sym_DOT] = ACTIONS(883),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(885),
    [anon_sym_SQUOTE] = ACTIONS(219),
    [anon_sym_DQUOTE] = ACTIONS(219),
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
    [sym__integer_literal] = ACTIONS(219),
    [sym__octal_literal] = ACTIONS(219),
    [sym__hexidecimal_literal] = ACTIONS(219),
  },
  [304] = {
    [sym__function_pattern] = STATE(420),
    [sym_irrefutable_pattern] = STATE(84),
    [sym_list_pattern] = STATE(84),
    [sym_tuple_pattern] = STATE(84),
    [sym_parenthesized_pattern] = STATE(84),
    [sym__pattern] = STATE(421),
    [sym_negative_literal] = STATE(183),
    [sym_general_constructor] = STATE(183),
    [sym_as_pattern] = STATE(84),
    [sym_wildcard] = STATE(84),
    [sym__variable] = STATE(184),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym__literal] = STATE(84),
    [sym__identifier] = STATE(92),
    [sym_simple_type] = STATE(93),
    [sym_variable_identifier] = STATE(94),
    [sym_constructor_identifier] = STATE(185),
    [sym_integer] = STATE(87),
    [sym_char] = STATE(87),
    [sym_string] = STATE(87),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(347),
    [anon_sym_LBRACK] = ACTIONS(147),
    [anon_sym_DASH] = ACTIONS(349),
    [anon_sym__] = ACTIONS(149),
    [sym_list_constructor] = ACTIONS(151),
    [sym__variable_pattern] = ACTIONS(153),
    [sym__constructor_pattern] = ACTIONS(351),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(159),
    [anon_sym_DQUOTE] = ACTIONS(161),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [305] = {
    [anon_sym_LPAREN] = ACTIONS(231),
    [anon_sym_TILDE] = ACTIONS(231),
    [anon_sym_LBRACK] = ACTIONS(231),
    [anon_sym_DASH] = ACTIONS(231),
    [anon_sym__] = ACTIONS(231),
    [sym_list_constructor] = ACTIONS(231),
    [sym__variable_pattern] = ACTIONS(887),
    [sym__constructor_pattern] = ACTIONS(887),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(887),
    [anon_sym_SQUOTE] = ACTIONS(231),
    [anon_sym_DQUOTE] = ACTIONS(231),
    [sym__integer_literal] = ACTIONS(231),
    [sym__octal_literal] = ACTIONS(231),
    [sym__hexidecimal_literal] = ACTIONS(231),
  },
  [306] = {
    [sym__variable_symbol] = STATE(422),
    [aux_sym_variable_symbol_repeat1] = STATE(423),
    [anon_sym_LPAREN] = ACTIONS(235),
    [anon_sym_TILDE] = ACTIONS(235),
    [anon_sym_LBRACK] = ACTIONS(235),
    [anon_sym_DASH] = ACTIONS(581),
    [anon_sym__] = ACTIONS(235),
    [sym_list_constructor] = ACTIONS(235),
    [anon_sym_BANG] = ACTIONS(581),
    [sym__variable_pattern] = ACTIONS(889),
    [sym__constructor_pattern] = ACTIONS(889),
    [anon_sym_DOT] = ACTIONS(581),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(889),
    [anon_sym_SQUOTE] = ACTIONS(235),
    [anon_sym_DQUOTE] = ACTIONS(235),
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
    [sym__integer_literal] = ACTIONS(235),
    [sym__octal_literal] = ACTIONS(235),
    [sym__hexidecimal_literal] = ACTIONS(235),
  },
  [307] = {
    [anon_sym_COMMA] = ACTIONS(891),
    [anon_sym_RPAREN] = ACTIONS(893),
    [sym_comment] = ACTIONS(5),
  },
  [308] = {
    [sym__function_pattern] = STATE(319),
    [sym_irrefutable_pattern] = STATE(84),
    [sym_list_pattern] = STATE(84),
    [sym_tuple_pattern] = STATE(84),
    [sym_parenthesized_pattern] = STATE(84),
    [sym_as_pattern] = STATE(84),
    [sym_wildcard] = STATE(84),
    [sym__variable] = STATE(184),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym__literal] = STATE(84),
    [sym__identifier] = STATE(92),
    [sym_simple_type] = STATE(93),
    [sym_variable_identifier] = STATE(94),
    [sym_constructor_identifier] = STATE(190),
    [sym_integer] = STATE(87),
    [sym_char] = STATE(87),
    [sym_string] = STATE(87),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(347),
    [anon_sym_LBRACK] = ACTIONS(147),
    [anon_sym__] = ACTIONS(149),
    [sym_list_constructor] = ACTIONS(151),
    [sym__variable_pattern] = ACTIONS(153),
    [sym__constructor_pattern] = ACTIONS(351),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(159),
    [anon_sym_DQUOTE] = ACTIONS(161),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [309] = {
    [anon_sym_COMMA] = ACTIONS(85),
    [anon_sym_RPAREN] = ACTIONS(85),
    [sym__variable_pattern] = ACTIONS(85),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(85),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym__integer_literal] = ACTIONS(85),
    [sym__octal_literal] = ACTIONS(85),
    [sym__hexidecimal_literal] = ACTIONS(85),
  },
  [310] = {
    [sym__graphic] = STATE(426),
    [sym__small] = STATE(64),
    [sym__large] = STATE(64),
    [sym__symbol] = STATE(64),
    [sym__special] = STATE(64),
    [sym__escape] = STATE(426),
    [anon_sym_SEMI] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_RBRACE] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_RPAREN] = ACTIONS(89),
    [anon_sym_EQ] = ACTIONS(91),
    [anon_sym_TILDE] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_RBRACK] = ACTIONS(89),
    [anon_sym_DASH] = ACTIONS(91),
    [anon_sym_AT] = ACTIONS(91),
    [anon_sym__] = ACTIONS(93),
    [anon_sym_BQUOTE] = ACTIONS(89),
    [anon_sym_COLON] = ACTIONS(91),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_BANG] = ACTIONS(91),
    [anon_sym_DOT] = ACTIONS(91),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(895),
    [anon_sym_DQUOTE] = ACTIONS(895),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(99),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(93),
    [sym__ascii_large] = ACTIONS(101),
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
    [anon_sym_BSLASH] = ACTIONS(103),
    [sym__space] = ACTIONS(895),
  },
  [311] = {
    [anon_sym_COMMA] = ACTIONS(125),
    [anon_sym_RPAREN] = ACTIONS(125),
    [sym__variable_pattern] = ACTIONS(125),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(127),
    [anon_sym_SQUOTE] = ACTIONS(125),
    [anon_sym_DQUOTE] = ACTIONS(125),
    [sym__integer_literal] = ACTIONS(125),
    [sym__octal_literal] = ACTIONS(125),
    [sym__hexidecimal_literal] = ACTIONS(125),
  },
  [312] = {
    [anon_sym_COMMA] = ACTIONS(857),
    [anon_sym_RPAREN] = ACTIONS(857),
    [sym__variable_pattern] = ACTIONS(857),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(859),
    [anon_sym_SQUOTE] = ACTIONS(857),
    [anon_sym_DQUOTE] = ACTIONS(857),
    [sym__integer_literal] = ACTIONS(857),
    [sym__octal_literal] = ACTIONS(857),
    [sym__hexidecimal_literal] = ACTIONS(857),
  },
  [313] = {
    [anon_sym_LBRACE] = ACTIONS(441),
    [anon_sym_COMMA] = ACTIONS(857),
    [anon_sym_RPAREN] = ACTIONS(857),
    [sym__variable_pattern] = ACTIONS(897),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(859),
    [anon_sym_SQUOTE] = ACTIONS(857),
    [anon_sym_DQUOTE] = ACTIONS(857),
    [sym__integer_literal] = ACTIONS(857),
    [sym__octal_literal] = ACTIONS(857),
    [sym__hexidecimal_literal] = ACTIONS(857),
  },
  [314] = {
    [sym__literal] = STATE(427),
    [sym_variable_identifier] = STATE(427),
    [sym_integer] = STATE(309),
    [sym_char] = STATE(309),
    [sym_string] = STATE(309),
    [anon_sym_COMMA] = ACTIONS(863),
    [anon_sym_RPAREN] = ACTIONS(863),
    [sym__variable_pattern] = ACTIONS(255),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(591),
    [anon_sym_SQUOTE] = ACTIONS(593),
    [anon_sym_DQUOTE] = ACTIONS(419),
    [sym__integer_literal] = ACTIONS(595),
    [sym__octal_literal] = ACTIONS(595),
    [sym__hexidecimal_literal] = ACTIONS(595),
  },
  [315] = {
    [anon_sym_LPAREN] = ACTIONS(900),
    [anon_sym_COMMA] = ACTIONS(900),
    [anon_sym_RPAREN] = ACTIONS(900),
    [anon_sym_EQ] = ACTIONS(900),
    [anon_sym_TILDE] = ACTIONS(900),
    [anon_sym_LBRACK] = ACTIONS(900),
    [anon_sym_RBRACK] = ACTIONS(900),
    [anon_sym_DASH] = ACTIONS(900),
    [anon_sym__] = ACTIONS(900),
    [anon_sym_BQUOTE] = ACTIONS(900),
    [anon_sym_COLON] = ACTIONS(900),
    [sym_list_constructor] = ACTIONS(900),
    [anon_sym_BANG] = ACTIONS(900),
    [sym__variable_pattern] = ACTIONS(902),
    [sym__constructor_pattern] = ACTIONS(902),
    [anon_sym_DOT] = ACTIONS(900),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(902),
    [anon_sym_SQUOTE] = ACTIONS(900),
    [anon_sym_DQUOTE] = ACTIONS(900),
    [anon_sym_POUND] = ACTIONS(900),
    [anon_sym_DOLLAR] = ACTIONS(900),
    [anon_sym_PERCENT] = ACTIONS(900),
    [anon_sym_AMP] = ACTIONS(900),
    [anon_sym_1] = ACTIONS(900),
    [anon_sym_PLUS] = ACTIONS(900),
    [anon_sym_SLASH] = ACTIONS(900),
    [anon_sym_LT] = ACTIONS(900),
    [anon_sym_GT] = ACTIONS(900),
    [anon_sym_QMARK] = ACTIONS(900),
    [anon_sym_CARET] = ACTIONS(900),
    [sym__integer_literal] = ACTIONS(900),
    [sym__octal_literal] = ACTIONS(900),
    [sym__hexidecimal_literal] = ACTIONS(900),
  },
  [316] = {
    [sym__function_pattern] = STATE(319),
    [sym_irrefutable_pattern] = STATE(84),
    [sym_list_pattern] = STATE(84),
    [sym_tuple_pattern] = STATE(84),
    [sym_parenthesized_pattern] = STATE(84),
    [sym_as_pattern] = STATE(84),
    [sym_wildcard] = STATE(84),
    [sym__variable] = STATE(189),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym__literal] = STATE(84),
    [sym__identifier] = STATE(92),
    [sym_simple_type] = STATE(93),
    [sym_variable_identifier] = STATE(94),
    [sym_constructor_identifier] = STATE(190),
    [sym_integer] = STATE(87),
    [sym_char] = STATE(87),
    [sym_string] = STATE(87),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(353),
    [anon_sym_LBRACK] = ACTIONS(147),
    [anon_sym__] = ACTIONS(149),
    [sym_list_constructor] = ACTIONS(151),
    [sym__variable_pattern] = ACTIONS(153),
    [sym__constructor_pattern] = ACTIONS(351),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(159),
    [anon_sym_DQUOTE] = ACTIONS(161),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [317] = {
    [anon_sym_RBRACE] = ACTIONS(517),
    [anon_sym_LPAREN] = ACTIONS(517),
    [anon_sym_COMMA] = ACTIONS(517),
    [anon_sym_RPAREN] = ACTIONS(517),
    [anon_sym_EQ] = ACTIONS(517),
    [anon_sym_TILDE] = ACTIONS(517),
    [anon_sym_LBRACK] = ACTIONS(517),
    [anon_sym_RBRACK] = ACTIONS(517),
    [anon_sym_DASH] = ACTIONS(517),
    [anon_sym__] = ACTIONS(517),
    [anon_sym_BQUOTE] = ACTIONS(517),
    [anon_sym_COLON] = ACTIONS(517),
    [sym_list_constructor] = ACTIONS(517),
    [anon_sym_BANG] = ACTIONS(517),
    [sym__variable_pattern] = ACTIONS(519),
    [sym__constructor_pattern] = ACTIONS(519),
    [anon_sym_DOT] = ACTIONS(517),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(519),
    [anon_sym_SQUOTE] = ACTIONS(517),
    [anon_sym_DQUOTE] = ACTIONS(517),
    [anon_sym_POUND] = ACTIONS(517),
    [anon_sym_DOLLAR] = ACTIONS(517),
    [anon_sym_PERCENT] = ACTIONS(517),
    [anon_sym_AMP] = ACTIONS(517),
    [anon_sym_1] = ACTIONS(517),
    [anon_sym_PLUS] = ACTIONS(517),
    [anon_sym_SLASH] = ACTIONS(517),
    [anon_sym_LT] = ACTIONS(517),
    [anon_sym_GT] = ACTIONS(517),
    [anon_sym_QMARK] = ACTIONS(517),
    [anon_sym_CARET] = ACTIONS(517),
    [sym__integer_literal] = ACTIONS(517),
    [sym__octal_literal] = ACTIONS(517),
    [sym__hexidecimal_literal] = ACTIONS(517),
  },
  [318] = {
    [anon_sym_RBRACE] = ACTIONS(549),
    [anon_sym_LPAREN] = ACTIONS(549),
    [anon_sym_COMMA] = ACTIONS(549),
    [anon_sym_RPAREN] = ACTIONS(549),
    [anon_sym_EQ] = ACTIONS(549),
    [anon_sym_TILDE] = ACTIONS(549),
    [anon_sym_LBRACK] = ACTIONS(549),
    [anon_sym_RBRACK] = ACTIONS(549),
    [anon_sym_DASH] = ACTIONS(549),
    [anon_sym__] = ACTIONS(549),
    [anon_sym_BQUOTE] = ACTIONS(549),
    [anon_sym_COLON] = ACTIONS(549),
    [sym_list_constructor] = ACTIONS(549),
    [anon_sym_BANG] = ACTIONS(549),
    [sym__variable_pattern] = ACTIONS(551),
    [sym__constructor_pattern] = ACTIONS(551),
    [anon_sym_DOT] = ACTIONS(549),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(551),
    [anon_sym_SQUOTE] = ACTIONS(549),
    [anon_sym_DQUOTE] = ACTIONS(549),
    [anon_sym_POUND] = ACTIONS(549),
    [anon_sym_DOLLAR] = ACTIONS(549),
    [anon_sym_PERCENT] = ACTIONS(549),
    [anon_sym_AMP] = ACTIONS(549),
    [anon_sym_1] = ACTIONS(549),
    [anon_sym_PLUS] = ACTIONS(549),
    [anon_sym_SLASH] = ACTIONS(549),
    [anon_sym_LT] = ACTIONS(549),
    [anon_sym_GT] = ACTIONS(549),
    [anon_sym_QMARK] = ACTIONS(549),
    [anon_sym_CARET] = ACTIONS(549),
    [sym__integer_literal] = ACTIONS(549),
    [sym__octal_literal] = ACTIONS(549),
    [sym__hexidecimal_literal] = ACTIONS(549),
  },
  [319] = {
    [anon_sym_LPAREN] = ACTIONS(904),
    [anon_sym_COMMA] = ACTIONS(904),
    [anon_sym_RPAREN] = ACTIONS(904),
    [anon_sym_EQ] = ACTIONS(904),
    [anon_sym_TILDE] = ACTIONS(904),
    [anon_sym_LBRACK] = ACTIONS(904),
    [anon_sym_RBRACK] = ACTIONS(904),
    [anon_sym_DASH] = ACTIONS(904),
    [anon_sym__] = ACTIONS(904),
    [anon_sym_BQUOTE] = ACTIONS(904),
    [anon_sym_COLON] = ACTIONS(904),
    [sym_list_constructor] = ACTIONS(904),
    [anon_sym_BANG] = ACTIONS(904),
    [sym__variable_pattern] = ACTIONS(906),
    [sym__constructor_pattern] = ACTIONS(906),
    [anon_sym_DOT] = ACTIONS(904),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(906),
    [anon_sym_SQUOTE] = ACTIONS(904),
    [anon_sym_DQUOTE] = ACTIONS(904),
    [anon_sym_POUND] = ACTIONS(904),
    [anon_sym_DOLLAR] = ACTIONS(904),
    [anon_sym_PERCENT] = ACTIONS(904),
    [anon_sym_AMP] = ACTIONS(904),
    [anon_sym_1] = ACTIONS(904),
    [anon_sym_PLUS] = ACTIONS(904),
    [anon_sym_SLASH] = ACTIONS(904),
    [anon_sym_LT] = ACTIONS(904),
    [anon_sym_GT] = ACTIONS(904),
    [anon_sym_QMARK] = ACTIONS(904),
    [anon_sym_CARET] = ACTIONS(904),
    [sym__integer_literal] = ACTIONS(904),
    [sym__octal_literal] = ACTIONS(904),
    [sym__hexidecimal_literal] = ACTIONS(904),
  },
  [320] = {
    [anon_sym_LPAREN] = ACTIONS(908),
    [anon_sym_COMMA] = ACTIONS(908),
    [anon_sym_RPAREN] = ACTIONS(908),
    [anon_sym_EQ] = ACTIONS(908),
    [anon_sym_TILDE] = ACTIONS(908),
    [anon_sym_LBRACK] = ACTIONS(908),
    [anon_sym_RBRACK] = ACTIONS(908),
    [anon_sym_DASH] = ACTIONS(908),
    [anon_sym__] = ACTIONS(908),
    [anon_sym_BQUOTE] = ACTIONS(908),
    [anon_sym_COLON] = ACTIONS(908),
    [sym_list_constructor] = ACTIONS(908),
    [anon_sym_BANG] = ACTIONS(908),
    [sym__variable_pattern] = ACTIONS(910),
    [sym__constructor_pattern] = ACTIONS(910),
    [anon_sym_DOT] = ACTIONS(908),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(910),
    [anon_sym_SQUOTE] = ACTIONS(908),
    [anon_sym_DQUOTE] = ACTIONS(908),
    [anon_sym_POUND] = ACTIONS(908),
    [anon_sym_DOLLAR] = ACTIONS(908),
    [anon_sym_PERCENT] = ACTIONS(908),
    [anon_sym_AMP] = ACTIONS(908),
    [anon_sym_1] = ACTIONS(908),
    [anon_sym_PLUS] = ACTIONS(908),
    [anon_sym_SLASH] = ACTIONS(908),
    [anon_sym_LT] = ACTIONS(908),
    [anon_sym_GT] = ACTIONS(908),
    [anon_sym_QMARK] = ACTIONS(908),
    [anon_sym_CARET] = ACTIONS(908),
    [sym__integer_literal] = ACTIONS(908),
    [sym__octal_literal] = ACTIONS(908),
    [sym__hexidecimal_literal] = ACTIONS(908),
  },
  [321] = {
    [anon_sym_RBRACE] = ACTIONS(912),
    [sym_comment] = ACTIONS(5),
  },
  [322] = {
    [aux_sym_labels_repeat1] = STATE(430),
    [anon_sym_RBRACE] = ACTIONS(914),
    [anon_sym_COMMA] = ACTIONS(916),
    [sym_comment] = ACTIONS(5),
  },
  [323] = {
    [anon_sym_EQ] = ACTIONS(918),
    [sym_comment] = ACTIONS(5),
  },
  [324] = {
    [sym_type] = STATE(433),
    [sym__generic_type_constructor] = STATE(331),
    [sym_tupling_constructor] = STATE(327),
    [sym_tuple] = STATE(331),
    [sym_list] = STATE(331),
    [sym_parenthesized_constructor] = STATE(331),
    [sym_variable_identifier] = STATE(333),
    [sym__type_constructors] = STATE(327),
    [sym_qualified_type_constructor] = STATE(334),
    [anon_sym_LPAREN] = ACTIONS(615),
    [anon_sym_COMMA] = ACTIONS(920),
    [anon_sym_LBRACK] = ACTIONS(619),
    [sym_unit_type] = ACTIONS(621),
    [sym_list_constructor] = ACTIONS(621),
    [sym_function_constructor] = ACTIONS(621),
    [sym__variable_pattern] = ACTIONS(623),
    [sym__constructor_pattern] = ACTIONS(629),
    [sym_module_identifier] = ACTIONS(627),
    [sym_comment] = ACTIONS(5),
  },
  [325] = {
    [aux_sym_tupling_constructor_repeat1] = STATE(436),
    [anon_sym_COMMA] = ACTIONS(922),
    [anon_sym_RPAREN] = ACTIONS(924),
    [sym_comment] = ACTIONS(5),
  },
  [326] = {
    [sym_type] = STATE(337),
    [sym__generic_type_constructor] = STATE(338),
    [sym_tupling_constructor] = STATE(327),
    [sym_tuple] = STATE(338),
    [sym_list] = STATE(338),
    [sym_parenthesized_constructor] = STATE(338),
    [sym_variable_identifier] = STATE(339),
    [sym__type_constructors] = STATE(327),
    [sym_qualified_type_constructor] = STATE(334),
    [aux_sym_list_repeat1] = STATE(437),
    [anon_sym_LPAREN] = ACTIONS(615),
    [anon_sym_LBRACK] = ACTIONS(619),
    [sym_unit_type] = ACTIONS(621),
    [sym_list_constructor] = ACTIONS(621),
    [sym_function_constructor] = ACTIONS(621),
    [sym__variable_pattern] = ACTIONS(255),
    [sym__constructor_pattern] = ACTIONS(629),
    [sym_module_identifier] = ACTIONS(631),
    [sym_comment] = ACTIONS(5),
  },
  [327] = {
    [anon_sym_LPAREN] = ACTIONS(635),
    [anon_sym_COMMA] = ACTIONS(635),
    [anon_sym_RPAREN] = ACTIONS(635),
    [anon_sym_LBRACK] = ACTIONS(635),
    [anon_sym_RBRACK] = ACTIONS(635),
    [anon_sym_DASH_GT] = ACTIONS(635),
    [sym_unit_type] = ACTIONS(635),
    [sym_list_constructor] = ACTIONS(635),
    [sym_function_constructor] = ACTIONS(635),
    [sym__variable_pattern] = ACTIONS(635),
    [sym__constructor_pattern] = ACTIONS(926),
    [sym_module_identifier] = ACTIONS(926),
    [sym_comment] = ACTIONS(5),
  },
  [328] = {
    [sym_variable_identifier] = STATE(152),
    [aux_sym_type_class_repeat1] = STATE(438),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_COMMA] = ACTIONS(639),
    [anon_sym_RPAREN] = ACTIONS(639),
    [anon_sym_DASH_GT] = ACTIONS(639),
    [sym__variable_pattern] = ACTIONS(79),
    [sym_comment] = ACTIONS(5),
  },
  [329] = {
    [sym_constructor_identifier] = STATE(440),
    [aux_sym_qualified_type_constructor_repeat1] = STATE(441),
    [sym__constructor_pattern] = ACTIONS(69),
    [anon_sym_DOT] = ACTIONS(928),
    [sym_comment] = ACTIONS(5),
  },
  [330] = {
    [aux_sym_tuple_repeat1] = STATE(444),
    [anon_sym_COMMA] = ACTIONS(930),
    [anon_sym_RPAREN] = ACTIONS(932),
    [sym_comment] = ACTIONS(5),
  },
  [331] = {
    [anon_sym_COMMA] = ACTIONS(651),
    [anon_sym_RPAREN] = ACTIONS(651),
    [anon_sym_DASH_GT] = ACTIONS(934),
    [sym_comment] = ACTIONS(5),
  },
  [332] = {
    [aux_sym_context_repeat1] = STATE(447),
    [anon_sym_COMMA] = ACTIONS(429),
    [anon_sym_RPAREN] = ACTIONS(936),
    [sym_comment] = ACTIONS(5),
  },
  [333] = {
    [anon_sym_COMMA] = ACTIONS(659),
    [anon_sym_RPAREN] = ACTIONS(659),
    [anon_sym_DASH_GT] = ACTIONS(938),
    [sym_comment] = ACTIONS(5),
  },
  [334] = {
    [anon_sym_LPAREN] = ACTIONS(665),
    [anon_sym_COMMA] = ACTIONS(665),
    [anon_sym_RPAREN] = ACTIONS(665),
    [anon_sym_LBRACK] = ACTIONS(665),
    [anon_sym_RBRACK] = ACTIONS(665),
    [anon_sym_DASH_GT] = ACTIONS(665),
    [sym_unit_type] = ACTIONS(665),
    [sym_list_constructor] = ACTIONS(665),
    [sym_function_constructor] = ACTIONS(665),
    [sym__variable_pattern] = ACTIONS(665),
    [sym__constructor_pattern] = ACTIONS(940),
    [sym_module_identifier] = ACTIONS(940),
    [sym_comment] = ACTIONS(5),
  },
  [335] = {
    [sym_variable_identifier] = STATE(152),
    [aux_sym_type_class_repeat1] = STATE(438),
    [anon_sym_LPAREN] = ACTIONS(639),
    [anon_sym_COMMA] = ACTIONS(639),
    [anon_sym_RPAREN] = ACTIONS(639),
    [anon_sym_LBRACK] = ACTIONS(639),
    [anon_sym_RBRACK] = ACTIONS(639),
    [anon_sym_DASH_GT] = ACTIONS(639),
    [sym_unit_type] = ACTIONS(639),
    [sym_list_constructor] = ACTIONS(639),
    [sym_function_constructor] = ACTIONS(639),
    [sym__variable_pattern] = ACTIONS(255),
    [sym__constructor_pattern] = ACTIONS(942),
    [sym_module_identifier] = ACTIONS(942),
    [sym_comment] = ACTIONS(5),
  },
  [336] = {
    [sym_constructor_identifier] = STATE(440),
    [aux_sym_qualified_type_constructor_repeat1] = STATE(451),
    [sym__constructor_pattern] = ACTIONS(944),
    [anon_sym_DOT] = ACTIONS(946),
    [sym_comment] = ACTIONS(5),
  },
  [337] = {
    [anon_sym_LPAREN] = ACTIONS(948),
    [anon_sym_LBRACK] = ACTIONS(948),
    [anon_sym_RBRACK] = ACTIONS(948),
    [sym_unit_type] = ACTIONS(948),
    [sym_list_constructor] = ACTIONS(948),
    [sym_function_constructor] = ACTIONS(948),
    [sym__variable_pattern] = ACTIONS(948),
    [sym__constructor_pattern] = ACTIONS(950),
    [sym_module_identifier] = ACTIONS(950),
    [sym_comment] = ACTIONS(5),
  },
  [338] = {
    [anon_sym_LPAREN] = ACTIONS(651),
    [anon_sym_LBRACK] = ACTIONS(651),
    [anon_sym_RBRACK] = ACTIONS(651),
    [anon_sym_DASH_GT] = ACTIONS(952),
    [sym_unit_type] = ACTIONS(651),
    [sym_list_constructor] = ACTIONS(651),
    [sym_function_constructor] = ACTIONS(651),
    [sym__variable_pattern] = ACTIONS(651),
    [sym__constructor_pattern] = ACTIONS(954),
    [sym_module_identifier] = ACTIONS(954),
    [sym_comment] = ACTIONS(5),
  },
  [339] = {
    [anon_sym_LPAREN] = ACTIONS(659),
    [anon_sym_LBRACK] = ACTIONS(659),
    [anon_sym_RBRACK] = ACTIONS(659),
    [anon_sym_DASH_GT] = ACTIONS(956),
    [sym_unit_type] = ACTIONS(659),
    [sym_list_constructor] = ACTIONS(659),
    [sym_function_constructor] = ACTIONS(659),
    [sym__variable_pattern] = ACTIONS(659),
    [sym__constructor_pattern] = ACTIONS(958),
    [sym_module_identifier] = ACTIONS(958),
    [sym_comment] = ACTIONS(5),
  },
  [340] = {
    [sym_type] = STATE(455),
    [sym__generic_type_constructor] = STATE(338),
    [sym_tupling_constructor] = STATE(327),
    [sym_tuple] = STATE(338),
    [sym_list] = STATE(338),
    [sym_parenthesized_constructor] = STATE(338),
    [sym_variable_identifier] = STATE(339),
    [sym__type_constructors] = STATE(327),
    [sym_qualified_type_constructor] = STATE(334),
    [anon_sym_LPAREN] = ACTIONS(615),
    [anon_sym_LBRACK] = ACTIONS(619),
    [anon_sym_RBRACK] = ACTIONS(960),
    [sym_unit_type] = ACTIONS(621),
    [sym_list_constructor] = ACTIONS(621),
    [sym_function_constructor] = ACTIONS(621),
    [sym__variable_pattern] = ACTIONS(255),
    [sym__constructor_pattern] = ACTIONS(629),
    [sym_module_identifier] = ACTIONS(631),
    [sym_comment] = ACTIONS(5),
  },
  [341] = {
    [sym__layout_semicolon] = ACTIONS(71),
    [anon_sym_SEMI] = ACTIONS(73),
    [anon_sym_DASH_GT] = ACTIONS(73),
    [sym__variable_pattern] = ACTIONS(73),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(75),
    [anon_sym_SQUOTE] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [sym__integer_literal] = ACTIONS(73),
    [sym__octal_literal] = ACTIONS(73),
    [sym__hexidecimal_literal] = ACTIONS(73),
  },
  [342] = {
    [sym__layout_semicolon] = ACTIONS(501),
    [anon_sym_SEMI] = ACTIONS(441),
    [anon_sym_DASH_GT] = ACTIONS(441),
    [sym__variable_pattern] = ACTIONS(441),
    [sym_comment] = ACTIONS(5),
  },
  [343] = {
    [sym_variable_identifier] = STATE(456),
    [sym__layout_semicolon] = ACTIONS(962),
    [anon_sym_SEMI] = ACTIONS(964),
    [anon_sym_DASH_GT] = ACTIONS(964),
    [sym__variable_pattern] = ACTIONS(805),
    [sym_comment] = ACTIONS(5),
  },
  [344] = {
    [sym__layout_semicolon] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_DASH_GT] = ACTIONS(79),
    [sym__variable_pattern] = ACTIONS(79),
    [sym_comment] = ACTIONS(5),
  },
  [345] = {
    [sym_constructor_identifier] = STATE(458),
    [sym__constructor_pattern] = ACTIONS(641),
    [sym_module_identifier] = ACTIONS(966),
    [sym_comment] = ACTIONS(5),
  },
  [346] = {
    [sym_variable_identifier] = STATE(342),
    [aux_sym_type_class_repeat1] = STATE(459),
    [sym__layout_semicolon] = ACTIONS(968),
    [anon_sym_SEMI] = ACTIONS(970),
    [anon_sym_DASH_GT] = ACTIONS(970),
    [sym__variable_pattern] = ACTIONS(805),
    [sym_comment] = ACTIONS(5),
  },
  [347] = {
    [sym_constructor_identifier] = STATE(458),
    [sym__constructor_pattern] = ACTIONS(641),
    [anon_sym_DOT] = ACTIONS(972),
    [sym_comment] = ACTIONS(5),
  },
  [348] = {
    [sym_type] = STATE(461),
    [sym__generic_type_constructor] = STATE(204),
    [sym_tupling_constructor] = STATE(200),
    [sym_tuple] = STATE(204),
    [sym_list] = STATE(204),
    [sym_parenthesized_constructor] = STATE(204),
    [sym_variable_identifier] = STATE(207),
    [sym__type_constructors] = STATE(200),
    [sym_qualified_type_constructor] = STATE(209),
    [anon_sym_LPAREN] = ACTIONS(511),
    [anon_sym_LBRACK] = ACTIONS(379),
    [sym_unit_type] = ACTIONS(381),
    [sym_list_constructor] = ACTIONS(381),
    [sym_function_constructor] = ACTIONS(381),
    [sym__variable_pattern] = ACTIONS(383),
    [sym__constructor_pattern] = ACTIONS(513),
    [sym_module_identifier] = ACTIONS(387),
    [sym_comment] = ACTIONS(5),
  },
  [349] = {
    [sym__layout_semicolon] = ACTIONS(974),
    [anon_sym_SEMI] = ACTIONS(976),
    [sym_comment] = ACTIONS(5),
  },
  [350] = {
    [anon_sym_LPAREN] = ACTIONS(978),
    [anon_sym_LBRACK] = ACTIONS(978),
    [sym_unit_type] = ACTIONS(978),
    [sym_list_constructor] = ACTIONS(978),
    [sym_function_constructor] = ACTIONS(978),
    [sym__variable_pattern] = ACTIONS(978),
    [sym__constructor_pattern] = ACTIONS(435),
    [sym_module_identifier] = ACTIONS(435),
    [sym_comment] = ACTIONS(5),
  },
  [351] = {
    [sym_type] = STATE(462),
    [sym__generic_type_constructor] = STATE(204),
    [sym_tupling_constructor] = STATE(200),
    [sym_tuple] = STATE(204),
    [sym_list] = STATE(204),
    [sym_parenthesized_constructor] = STATE(204),
    [sym_variable_identifier] = STATE(207),
    [sym__type_constructors] = STATE(200),
    [sym_qualified_type_constructor] = STATE(209),
    [anon_sym_LPAREN] = ACTIONS(511),
    [anon_sym_LBRACK] = ACTIONS(379),
    [sym_unit_type] = ACTIONS(381),
    [sym_list_constructor] = ACTIONS(381),
    [sym_function_constructor] = ACTIONS(381),
    [sym__variable_pattern] = ACTIONS(383),
    [sym__constructor_pattern] = ACTIONS(513),
    [sym_module_identifier] = ACTIONS(387),
    [sym_comment] = ACTIONS(5),
  },
  [352] = {
    [sym_export] = STATE(463),
    [sym__identifier] = STATE(213),
    [sym_variable_identifier] = STATE(112),
    [sym_constructor_identifier] = STATE(112),
    [sym__variable_pattern] = ACTIONS(199),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [353] = {
    [anon_sym_where] = ACTIONS(980),
    [sym_comment] = ACTIONS(5),
  },
  [354] = {
    [anon_sym_COMMA] = ACTIONS(982),
    [anon_sym_RPAREN] = ACTIONS(984),
    [sym_comment] = ACTIONS(5),
  },
  [355] = {
    [sym__identifier] = STATE(467),
    [sym_variable_identifier] = STATE(112),
    [sym_constructor_identifier] = STATE(112),
    [anon_sym_DOT_DOT] = ACTIONS(986),
    [sym__variable_pattern] = ACTIONS(199),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [356] = {
    [ts_builtin_sym_end] = ACTIONS(988),
    [sym_comment] = ACTIONS(5),
  },
  [357] = {
    [sym__layout_semicolon] = ACTIONS(990),
    [anon_sym_SEMI] = ACTIONS(992),
    [sym_comment] = ACTIONS(5),
  },
  [358] = {
    [sym_import] = STATE(19),
    [sym__declaration] = STATE(470),
    [sym_function_declaration] = STATE(19),
    [sym_function_head] = STATE(21),
    [sym__variable] = STATE(22),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym_foreign] = STATE(19),
    [sym_default] = STATE(19),
    [sym_type_class] = STATE(19),
    [sym_type_class_instance] = STATE(19),
    [sym_fixity] = STATE(19),
    [sym_type_signature] = STATE(19),
    [sym_algebraic_datatype] = STATE(19),
    [sym_newtype] = STATE(19),
    [sym_type_synonym] = STATE(19),
    [sym__literal] = STATE(19),
    [sym__identifier] = STATE(24),
    [sym_variable_identifier] = STATE(25),
    [sym_constructor_identifier] = STATE(26),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [sym__layout_close_brace] = ACTIONS(994),
    [anon_sym_import] = ACTIONS(13),
    [anon_sym_foreign] = ACTIONS(15),
    [anon_sym_default] = ACTIONS(17),
    [anon_sym_class] = ACTIONS(19),
    [anon_sym_instance] = ACTIONS(21),
    [anon_sym_infixl] = ACTIONS(23),
    [anon_sym_infixr] = ACTIONS(23),
    [anon_sym_infix] = ACTIONS(23),
    [anon_sym_data] = ACTIONS(25),
    [anon_sym_newtype] = ACTIONS(27),
    [anon_sym_type] = ACTIONS(29),
    [sym__variable_pattern] = ACTIONS(31),
    [sym__constructor_pattern] = ACTIONS(33),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym__integer_literal] = ACTIONS(41),
    [sym__octal_literal] = ACTIONS(41),
    [sym__hexidecimal_literal] = ACTIONS(41),
  },
  [359] = {
    [sym_import] = STATE(19),
    [sym__declaration] = STATE(98),
    [sym_function_declaration] = STATE(19),
    [sym_function_head] = STATE(21),
    [sym__variable] = STATE(22),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym_foreign] = STATE(19),
    [sym_default] = STATE(19),
    [sym_type_class] = STATE(19),
    [sym_type_class_instance] = STATE(19),
    [sym_fixity] = STATE(19),
    [sym_type_signature] = STATE(19),
    [sym_algebraic_datatype] = STATE(19),
    [sym_newtype] = STATE(19),
    [sym_type_synonym] = STATE(19),
    [sym__literal] = STATE(19),
    [sym__identifier] = STATE(24),
    [sym_variable_identifier] = STATE(25),
    [sym_constructor_identifier] = STATE(26),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [anon_sym_RBRACE] = ACTIONS(996),
    [anon_sym_import] = ACTIONS(13),
    [anon_sym_foreign] = ACTIONS(15),
    [anon_sym_default] = ACTIONS(17),
    [anon_sym_class] = ACTIONS(19),
    [anon_sym_instance] = ACTIONS(21),
    [anon_sym_infixl] = ACTIONS(23),
    [anon_sym_infixr] = ACTIONS(23),
    [anon_sym_infix] = ACTIONS(23),
    [anon_sym_data] = ACTIONS(25),
    [anon_sym_newtype] = ACTIONS(27),
    [anon_sym_type] = ACTIONS(29),
    [sym__variable_pattern] = ACTIONS(31),
    [sym__constructor_pattern] = ACTIONS(33),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym__integer_literal] = ACTIONS(41),
    [sym__octal_literal] = ACTIONS(41),
    [sym__hexidecimal_literal] = ACTIONS(41),
  },
  [360] = {
    [sym_import_specification] = STATE(471),
    [sym__layout_semicolon] = ACTIONS(998),
    [anon_sym_SEMI] = ACTIONS(1000),
    [anon_sym_LPAREN] = ACTIONS(187),
    [anon_sym_hiding] = ACTIONS(191),
    [sym_comment] = ACTIONS(5),
  },
  [361] = {
    [sym__identifier] = STATE(473),
    [sym_variable_identifier] = STATE(112),
    [sym_constructor_identifier] = STATE(112),
    [anon_sym_DOT_DOT] = ACTIONS(1002),
    [sym__variable_pattern] = ACTIONS(199),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [362] = {
    [sym__identifier] = STATE(474),
    [sym_variable_identifier] = STATE(112),
    [sym_constructor_identifier] = STATE(112),
    [sym__variable_pattern] = ACTIONS(199),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [363] = {
    [sym__layout_semicolon] = ACTIONS(1004),
    [anon_sym_SEMI] = ACTIONS(1006),
    [sym_comment] = ACTIONS(5),
  },
  [364] = {
    [anon_sym_COMMA] = ACTIONS(1008),
    [anon_sym_RPAREN] = ACTIONS(1010),
    [sym_comment] = ACTIONS(5),
  },
  [365] = {
    [sym__layout_semicolon] = ACTIONS(998),
    [anon_sym_SEMI] = ACTIONS(1000),
    [sym_comment] = ACTIONS(5),
  },
  [366] = {
    [aux_sym_import_specification_repeat1] = STATE(478),
    [anon_sym_LPAREN] = ACTIONS(1012),
    [anon_sym_COMMA] = ACTIONS(703),
    [anon_sym_RPAREN] = ACTIONS(1010),
    [sym_comment] = ACTIONS(5),
  },
  [367] = {
    [anon_sym_COMMA] = ACTIONS(299),
    [anon_sym_RPAREN] = ACTIONS(299),
    [sym__variable_pattern] = ACTIONS(299),
    [sym__constructor_pattern] = ACTIONS(301),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(301),
    [anon_sym_SQUOTE] = ACTIONS(299),
    [anon_sym_DQUOTE] = ACTIONS(299),
    [sym__integer_literal] = ACTIONS(299),
    [sym__octal_literal] = ACTIONS(299),
    [sym__hexidecimal_literal] = ACTIONS(299),
  },
  [368] = {
    [sym__gap] = STATE(166),
    [sym__graphic] = STATE(166),
    [sym__small] = STATE(72),
    [sym__large] = STATE(72),
    [sym__symbol] = STATE(72),
    [sym__special] = STATE(72),
    [sym__escape] = STATE(166),
    [anon_sym_SEMI] = ACTIONS(105),
    [anon_sym_LBRACE] = ACTIONS(105),
    [anon_sym_RBRACE] = ACTIONS(105),
    [anon_sym_LPAREN] = ACTIONS(105),
    [anon_sym_RPAREN] = ACTIONS(105),
    [anon_sym_EQ] = ACTIONS(107),
    [anon_sym_TILDE] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(105),
    [anon_sym_RBRACK] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(107),
    [anon_sym_AT] = ACTIONS(107),
    [anon_sym__] = ACTIONS(109),
    [anon_sym_BQUOTE] = ACTIONS(105),
    [anon_sym_COLON] = ACTIONS(107),
    [anon_sym_PIPE] = ACTIONS(107),
    [anon_sym_BANG] = ACTIONS(107),
    [anon_sym_DOT] = ACTIONS(107),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(321),
    [anon_sym_DQUOTE] = ACTIONS(1014),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(115),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(109),
    [sym__ascii_large] = ACTIONS(117),
    [anon_sym_POUND] = ACTIONS(107),
    [anon_sym_DOLLAR] = ACTIONS(107),
    [anon_sym_PERCENT] = ACTIONS(107),
    [anon_sym_AMP] = ACTIONS(107),
    [anon_sym_1] = ACTIONS(107),
    [anon_sym_PLUS] = ACTIONS(107),
    [anon_sym_SLASH] = ACTIONS(107),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_QMARK] = ACTIONS(107),
    [anon_sym_CARET] = ACTIONS(107),
    [anon_sym_BSLASH] = ACTIONS(119),
    [sym__space] = ACTIONS(121),
    [sym__newline] = ACTIONS(121),
    [sym__tab] = ACTIONS(121),
    [sym__vertical_tab] = ACTIONS(121),
  },
  [369] = {
    [sym__layout_semicolon] = ACTIONS(1016),
    [anon_sym_SEMI] = ACTIONS(1018),
    [sym_comment] = ACTIONS(5),
  },
  [370] = {
    [sym_type_signature] = STATE(480),
    [sym__identifier] = STATE(228),
    [sym_variable_identifier] = STATE(112),
    [sym_constructor_identifier] = STATE(112),
    [sym__variable_pattern] = ACTIONS(623),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [371] = {
    [anon_sym_COMMA] = ACTIONS(1020),
    [anon_sym_RPAREN] = ACTIONS(1020),
    [sym_comment] = ACTIONS(5),
  },
  [372] = {
    [sym__identifier] = STATE(481),
    [sym_variable_identifier] = STATE(112),
    [sym_constructor_identifier] = STATE(112),
    [sym__variable_pattern] = ACTIONS(199),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [373] = {
    [sym__layout_semicolon] = ACTIONS(1022),
    [anon_sym_SEMI] = ACTIONS(1024),
    [sym_comment] = ACTIONS(5),
  },
  [374] = {
    [anon_sym_COMMA] = ACTIONS(1026),
    [anon_sym_RPAREN] = ACTIONS(1026),
    [sym_comment] = ACTIONS(5),
  },
  [375] = {
    [sym__constructor_pattern] = ACTIONS(1028),
    [sym_comment] = ACTIONS(5),
  },
  [376] = {
    [sym_class] = STATE(482),
    [sym_constructor_identifier] = STATE(114),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
  },
  [377] = {
    [anon_sym_EQ_GT] = ACTIONS(1030),
    [sym_comment] = ACTIONS(5),
  },
  [378] = {
    [sym__layout_semicolon] = ACTIONS(1032),
    [anon_sym_SEMI] = ACTIONS(1034),
    [sym_comment] = ACTIONS(5),
  },
  [379] = {
    [sym__declarations] = STATE(484),
    [sym__layout_open_brace] = ACTIONS(437),
    [anon_sym_LBRACE] = ACTIONS(439),
    [sym_comment] = ACTIONS(5),
  },
  [380] = {
    [anon_sym_COMMA] = ACTIONS(1036),
    [anon_sym_RPAREN] = ACTIONS(1036),
    [anon_sym_EQ_GT] = ACTIONS(1036),
    [sym_comment] = ACTIONS(5),
  },
  [381] = {
    [sym__layout_semicolon] = ACTIONS(988),
    [anon_sym_SEMI] = ACTIONS(1038),
    [sym_comment] = ACTIONS(5),
  },
  [382] = {
    [sym_import] = STATE(19),
    [sym__declaration] = STATE(470),
    [sym_function_declaration] = STATE(19),
    [sym_function_head] = STATE(21),
    [sym__variable] = STATE(22),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym_foreign] = STATE(19),
    [sym_default] = STATE(19),
    [sym_type_class] = STATE(19),
    [sym_type_class_instance] = STATE(19),
    [sym_fixity] = STATE(19),
    [sym_type_signature] = STATE(19),
    [sym_algebraic_datatype] = STATE(19),
    [sym_newtype] = STATE(19),
    [sym_type_synonym] = STATE(19),
    [sym__literal] = STATE(19),
    [sym__identifier] = STATE(24),
    [sym_variable_identifier] = STATE(25),
    [sym_constructor_identifier] = STATE(26),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [sym__layout_close_brace] = ACTIONS(1040),
    [anon_sym_import] = ACTIONS(13),
    [anon_sym_foreign] = ACTIONS(15),
    [anon_sym_default] = ACTIONS(17),
    [anon_sym_class] = ACTIONS(19),
    [anon_sym_instance] = ACTIONS(21),
    [anon_sym_infixl] = ACTIONS(23),
    [anon_sym_infixr] = ACTIONS(23),
    [anon_sym_infix] = ACTIONS(23),
    [anon_sym_data] = ACTIONS(25),
    [anon_sym_newtype] = ACTIONS(27),
    [anon_sym_type] = ACTIONS(29),
    [sym__variable_pattern] = ACTIONS(31),
    [sym__constructor_pattern] = ACTIONS(33),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym__integer_literal] = ACTIONS(41),
    [sym__octal_literal] = ACTIONS(41),
    [sym__hexidecimal_literal] = ACTIONS(41),
  },
  [383] = {
    [sym_import] = STATE(19),
    [sym__declaration] = STATE(98),
    [sym_function_declaration] = STATE(19),
    [sym_function_head] = STATE(21),
    [sym__variable] = STATE(22),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym_foreign] = STATE(19),
    [sym_default] = STATE(19),
    [sym_type_class] = STATE(19),
    [sym_type_class_instance] = STATE(19),
    [sym_fixity] = STATE(19),
    [sym_type_signature] = STATE(19),
    [sym_algebraic_datatype] = STATE(19),
    [sym_newtype] = STATE(19),
    [sym_type_synonym] = STATE(19),
    [sym__literal] = STATE(19),
    [sym__identifier] = STATE(24),
    [sym_variable_identifier] = STATE(25),
    [sym_constructor_identifier] = STATE(26),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [anon_sym_RBRACE] = ACTIONS(1042),
    [anon_sym_import] = ACTIONS(13),
    [anon_sym_foreign] = ACTIONS(15),
    [anon_sym_default] = ACTIONS(17),
    [anon_sym_class] = ACTIONS(19),
    [anon_sym_instance] = ACTIONS(21),
    [anon_sym_infixl] = ACTIONS(23),
    [anon_sym_infixr] = ACTIONS(23),
    [anon_sym_infix] = ACTIONS(23),
    [anon_sym_data] = ACTIONS(25),
    [anon_sym_newtype] = ACTIONS(27),
    [anon_sym_type] = ACTIONS(29),
    [sym__variable_pattern] = ACTIONS(31),
    [sym__constructor_pattern] = ACTIONS(33),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym__integer_literal] = ACTIONS(41),
    [sym__octal_literal] = ACTIONS(41),
    [sym__hexidecimal_literal] = ACTIONS(41),
  },
  [384] = {
    [sym__layout_semicolon] = ACTIONS(1044),
    [anon_sym_SEMI] = ACTIONS(1046),
    [sym_comment] = ACTIONS(5),
  },
  [385] = {
    [sym__declarations] = STATE(486),
    [sym__layout_open_brace] = ACTIONS(437),
    [anon_sym_LBRACE] = ACTIONS(439),
    [sym_comment] = ACTIONS(5),
  },
  [386] = {
    [sym__layout_semicolon] = ACTIONS(1048),
    [anon_sym_SEMI] = ACTIONS(1050),
    [anon_sym_COMMA] = ACTIONS(1050),
    [sym_comment] = ACTIONS(5),
  },
  [387] = {
    [sym_deriving] = STATE(487),
    [sym__layout_semicolon] = ACTIONS(1052),
    [anon_sym_SEMI] = ACTIONS(1054),
    [anon_sym_deriving] = ACTIONS(243),
    [sym_comment] = ACTIONS(5),
  },
  [388] = {
    [sym__layout_semicolon] = ACTIONS(1052),
    [anon_sym_SEMI] = ACTIONS(1054),
    [sym_comment] = ACTIONS(5),
  },
  [389] = {
    [aux_sym_export_repeat1] = STATE(489),
    [anon_sym_COMMA] = ACTIONS(425),
    [anon_sym_RPAREN] = ACTIONS(1056),
    [sym_comment] = ACTIONS(5),
  },
  [390] = {
    [sym__layout_semicolon] = ACTIONS(1058),
    [anon_sym_SEMI] = ACTIONS(1060),
    [anon_sym_PIPE] = ACTIONS(1060),
    [anon_sym_deriving] = ACTIONS(1060),
    [sym_comment] = ACTIONS(5),
  },
  [391] = {
    [sym_constructor] = STATE(490),
    [sym_constructor_identifier] = STATE(141),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [392] = {
    [aux_sym_fields_repeat1] = STATE(493),
    [anon_sym_RBRACE] = ACTIONS(1062),
    [anon_sym_COMMA] = ACTIONS(1064),
    [sym_comment] = ACTIONS(5),
  },
  [393] = {
    [aux_sym_field_repeat1] = STATE(496),
    [anon_sym_COMMA] = ACTIONS(1066),
    [anon_sym_COLON_COLON] = ACTIONS(1068),
    [sym_comment] = ACTIONS(5),
  },
  [394] = {
    [sym__layout_semicolon] = ACTIONS(1070),
    [anon_sym_SEMI] = ACTIONS(1072),
    [anon_sym_PIPE] = ACTIONS(1072),
    [anon_sym_deriving] = ACTIONS(1072),
    [anon_sym_BANG] = ACTIONS(1072),
    [sym__variable_pattern] = ACTIONS(1074),
    [sym__constructor_pattern] = ACTIONS(1074),
    [sym_comment] = ACTIONS(5),
  },
  [395] = {
    [sym__layout_semicolon] = ACTIONS(1076),
    [anon_sym_SEMI] = ACTIONS(1078),
    [anon_sym_PIPE] = ACTIONS(1078),
    [anon_sym_deriving] = ACTIONS(1078),
    [anon_sym_BANG] = ACTIONS(1078),
    [sym__variable_pattern] = ACTIONS(1080),
    [sym__constructor_pattern] = ACTIONS(1080),
    [sym_comment] = ACTIONS(5),
  },
  [396] = {
    [sym_deriving] = STATE(497),
    [sym__layout_semicolon] = ACTIONS(1082),
    [anon_sym_SEMI] = ACTIONS(1084),
    [anon_sym_deriving] = ACTIONS(243),
    [sym_comment] = ACTIONS(5),
  },
  [397] = {
    [sym__layout_semicolon] = ACTIONS(1082),
    [anon_sym_SEMI] = ACTIONS(1084),
    [sym_comment] = ACTIONS(5),
  },
  [398] = {
    [sym__layout_semicolon] = ACTIONS(1086),
    [anon_sym_SEMI] = ACTIONS(1088),
    [anon_sym_deriving] = ACTIONS(1088),
    [sym_comment] = ACTIONS(5),
  },
  [399] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(1090),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1090),
  },
  [400] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(1092),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(1092),
  },
  [401] = {
    [anon_sym_SEMI] = ACTIONS(1094),
    [anon_sym_LBRACE] = ACTIONS(1094),
    [anon_sym_RBRACE] = ACTIONS(1094),
    [anon_sym_LPAREN] = ACTIONS(1094),
    [anon_sym_RPAREN] = ACTIONS(1094),
    [anon_sym_EQ] = ACTIONS(1094),
    [anon_sym_TILDE] = ACTIONS(1094),
    [anon_sym_LBRACK] = ACTIONS(1094),
    [anon_sym_RBRACK] = ACTIONS(1094),
    [anon_sym_DASH] = ACTIONS(1094),
    [anon_sym_AT] = ACTIONS(1094),
    [anon_sym__] = ACTIONS(1094),
    [anon_sym_BQUOTE] = ACTIONS(1094),
    [anon_sym_COLON] = ACTIONS(1094),
    [anon_sym_PIPE] = ACTIONS(1094),
    [anon_sym_BANG] = ACTIONS(1094),
    [anon_sym_DOT] = ACTIONS(1094),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(1094),
    [anon_sym_DQUOTE] = ACTIONS(1094),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(1094),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(1094),
    [sym__ascii_large] = ACTIONS(1094),
    [anon_sym_POUND] = ACTIONS(1094),
    [anon_sym_DOLLAR] = ACTIONS(1094),
    [anon_sym_PERCENT] = ACTIONS(1094),
    [anon_sym_AMP] = ACTIONS(1094),
    [anon_sym_1] = ACTIONS(1094),
    [anon_sym_PLUS] = ACTIONS(1094),
    [anon_sym_SLASH] = ACTIONS(1094),
    [anon_sym_LT] = ACTIONS(1094),
    [anon_sym_GT] = ACTIONS(1094),
    [anon_sym_QMARK] = ACTIONS(1094),
    [anon_sym_CARET] = ACTIONS(1094),
    [anon_sym_BSLASH] = ACTIONS(1094),
    [sym__space] = ACTIONS(1094),
    [sym__newline] = ACTIONS(1094),
    [sym__tab] = ACTIONS(1094),
    [sym__vertical_tab] = ACTIONS(1094),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1094),
  },
  [402] = {
    [anon_sym_SEMI] = ACTIONS(1096),
    [anon_sym_LBRACE] = ACTIONS(1096),
    [anon_sym_RBRACE] = ACTIONS(1096),
    [anon_sym_LPAREN] = ACTIONS(1096),
    [anon_sym_RPAREN] = ACTIONS(1096),
    [anon_sym_EQ] = ACTIONS(1096),
    [anon_sym_TILDE] = ACTIONS(1096),
    [anon_sym_LBRACK] = ACTIONS(1096),
    [anon_sym_RBRACK] = ACTIONS(1096),
    [anon_sym_DASH] = ACTIONS(1096),
    [anon_sym_AT] = ACTIONS(1096),
    [anon_sym__] = ACTIONS(1096),
    [anon_sym_BQUOTE] = ACTIONS(1096),
    [anon_sym_COLON] = ACTIONS(1096),
    [anon_sym_PIPE] = ACTIONS(1096),
    [anon_sym_BANG] = ACTIONS(1096),
    [anon_sym_DOT] = ACTIONS(1096),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(1096),
    [anon_sym_DQUOTE] = ACTIONS(1096),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(1096),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(1096),
    [sym__ascii_large] = ACTIONS(1096),
    [anon_sym_POUND] = ACTIONS(1096),
    [anon_sym_DOLLAR] = ACTIONS(1096),
    [anon_sym_PERCENT] = ACTIONS(1096),
    [anon_sym_AMP] = ACTIONS(1096),
    [anon_sym_1] = ACTIONS(1096),
    [anon_sym_PLUS] = ACTIONS(1096),
    [anon_sym_SLASH] = ACTIONS(1096),
    [anon_sym_LT] = ACTIONS(1096),
    [anon_sym_GT] = ACTIONS(1096),
    [anon_sym_QMARK] = ACTIONS(1096),
    [anon_sym_CARET] = ACTIONS(1096),
    [anon_sym_BSLASH] = ACTIONS(1096),
    [sym__space] = ACTIONS(1096),
    [sym__newline] = ACTIONS(1096),
    [sym__tab] = ACTIONS(1096),
    [sym__vertical_tab] = ACTIONS(1096),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(1096),
  },
  [403] = {
    [sym__layout_semicolon] = ACTIONS(1098),
    [anon_sym_SEMI] = ACTIONS(1100),
    [anon_sym_where] = ACTIONS(1100),
    [anon_sym_do] = ACTIONS(1100),
    [sym__variable_pattern] = ACTIONS(1102),
    [sym__constructor_pattern] = ACTIONS(1102),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1102),
    [anon_sym_SQUOTE] = ACTIONS(1100),
    [anon_sym_DQUOTE] = ACTIONS(1100),
    [sym__integer_literal] = ACTIONS(1100),
    [sym__octal_literal] = ACTIONS(1100),
    [sym__hexidecimal_literal] = ACTIONS(1100),
  },
  [404] = {
    [sym__layout_semicolon] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(79),
    [sym__variable_pattern] = ACTIONS(79),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(201),
    [anon_sym_SQUOTE] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym__integer_literal] = ACTIONS(79),
    [sym__octal_literal] = ACTIONS(79),
    [sym__hexidecimal_literal] = ACTIONS(79),
  },
  [405] = {
    [sym__layout_semicolon] = ACTIONS(1104),
    [anon_sym_SEMI] = ACTIONS(1106),
    [sym_comment] = ACTIONS(5),
  },
  [406] = {
    [sym__layout_close_brace] = ACTIONS(1108),
    [anon_sym_do] = ACTIONS(1110),
    [sym__variable_pattern] = ACTIONS(1112),
    [sym__constructor_pattern] = ACTIONS(1112),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1112),
    [anon_sym_SQUOTE] = ACTIONS(1110),
    [anon_sym_DQUOTE] = ACTIONS(1110),
    [sym__integer_literal] = ACTIONS(1110),
    [sym__octal_literal] = ACTIONS(1110),
    [sym__hexidecimal_literal] = ACTIONS(1110),
  },
  [407] = {
    [sym__literal] = STATE(503),
    [sym_variable_identifier] = STATE(503),
    [sym_integer] = STATE(499),
    [sym_char] = STATE(499),
    [sym_string] = STATE(499),
    [aux_sym_general_constructor_repeat1] = STATE(504),
    [sym__layout_semicolon] = ACTIONS(169),
    [anon_sym_SEMI] = ACTIONS(171),
    [sym__variable_pattern] = ACTIONS(805),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1114),
    [anon_sym_SQUOTE] = ACTIONS(1116),
    [anon_sym_DQUOTE] = ACTIONS(1118),
    [sym__integer_literal] = ACTIONS(1120),
    [sym__octal_literal] = ACTIONS(1120),
    [sym__hexidecimal_literal] = ACTIONS(1120),
  },
  [408] = {
    [sym_general_constructor] = STATE(173),
    [sym__variable] = STATE(173),
    [sym_qualified_variable_identifier] = STATE(174),
    [sym__expression] = STATE(405),
    [sym_do_expression] = STATE(173),
    [sym__statement] = STATE(506),
    [sym__literal] = STATE(173),
    [sym__identifier] = STATE(173),
    [sym_variable_identifier] = STATE(26),
    [sym_constructor_identifier] = STATE(407),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [sym__layout_close_brace] = ACTIONS(1122),
    [anon_sym_do] = ACTIONS(337),
    [sym__variable_pattern] = ACTIONS(31),
    [sym__constructor_pattern] = ACTIONS(843),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym__integer_literal] = ACTIONS(41),
    [sym__octal_literal] = ACTIONS(41),
    [sym__hexidecimal_literal] = ACTIONS(41),
  },
  [409] = {
    [sym__layout_semicolon] = ACTIONS(1124),
    [anon_sym_SEMI] = ACTIONS(1126),
    [sym_comment] = ACTIONS(5),
  },
  [410] = {
    [anon_sym_RBRACE] = ACTIONS(1110),
    [anon_sym_do] = ACTIONS(1110),
    [sym__variable_pattern] = ACTIONS(1112),
    [sym__constructor_pattern] = ACTIONS(1112),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1112),
    [anon_sym_SQUOTE] = ACTIONS(1110),
    [anon_sym_DQUOTE] = ACTIONS(1110),
    [sym__integer_literal] = ACTIONS(1110),
    [sym__octal_literal] = ACTIONS(1110),
    [sym__hexidecimal_literal] = ACTIONS(1110),
  },
  [411] = {
    [sym_general_constructor] = STATE(173),
    [sym__variable] = STATE(173),
    [sym_qualified_variable_identifier] = STATE(174),
    [sym__expression] = STATE(409),
    [sym_do_expression] = STATE(173),
    [sym__statement] = STATE(508),
    [sym__literal] = STATE(173),
    [sym__identifier] = STATE(173),
    [sym_variable_identifier] = STATE(26),
    [sym_constructor_identifier] = STATE(407),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [anon_sym_RBRACE] = ACTIONS(1128),
    [anon_sym_do] = ACTIONS(337),
    [sym__variable_pattern] = ACTIONS(31),
    [sym__constructor_pattern] = ACTIONS(843),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym__integer_literal] = ACTIONS(41),
    [sym__octal_literal] = ACTIONS(41),
    [sym__hexidecimal_literal] = ACTIONS(41),
  },
  [412] = {
    [sym__layout_semicolon] = ACTIONS(1130),
    [anon_sym_SEMI] = ACTIONS(1132),
    [anon_sym_where] = ACTIONS(1132),
    [anon_sym_do] = ACTIONS(1132),
    [sym__variable_pattern] = ACTIONS(1134),
    [sym__constructor_pattern] = ACTIONS(1134),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1134),
    [anon_sym_SQUOTE] = ACTIONS(1132),
    [anon_sym_DQUOTE] = ACTIONS(1132),
    [sym__integer_literal] = ACTIONS(1132),
    [sym__octal_literal] = ACTIONS(1132),
    [sym__hexidecimal_literal] = ACTIONS(1132),
  },
  [413] = {
    [anon_sym_RPAREN] = ACTIONS(1136),
    [sym_comment] = ACTIONS(5),
  },
  [414] = {
    [sym__op] = STATE(304),
    [sym_variable_symbol] = STATE(305),
    [sym_constructor_symbol] = STATE(305),
    [sym__variable_symbol] = STATE(306),
    [anon_sym_COMMA] = ACTIONS(1138),
    [anon_sym_RPAREN] = ACTIONS(1138),
    [anon_sym_DASH] = ACTIONS(581),
    [anon_sym_BQUOTE] = ACTIONS(583),
    [anon_sym_COLON] = ACTIONS(585),
    [anon_sym_BANG] = ACTIONS(581),
    [anon_sym_DOT] = ACTIONS(581),
    [sym_comment] = ACTIONS(5),
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
  },
  [415] = {
    [anon_sym_COMMA] = ACTIONS(1138),
    [anon_sym_RPAREN] = ACTIONS(1138),
    [sym_comment] = ACTIONS(5),
  },
  [416] = {
    [anon_sym_BQUOTE] = ACTIONS(1140),
    [sym_comment] = ACTIONS(5),
  },
  [417] = {
    [anon_sym_LPAREN] = ACTIONS(453),
    [anon_sym_TILDE] = ACTIONS(453),
    [anon_sym_LBRACK] = ACTIONS(453),
    [anon_sym_DASH] = ACTIONS(453),
    [anon_sym__] = ACTIONS(453),
    [anon_sym_COLON] = ACTIONS(453),
    [sym_list_constructor] = ACTIONS(453),
    [anon_sym_BANG] = ACTIONS(453),
    [sym__variable_pattern] = ACTIONS(1142),
    [sym__constructor_pattern] = ACTIONS(1142),
    [anon_sym_DOT] = ACTIONS(453),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1142),
    [anon_sym_SQUOTE] = ACTIONS(453),
    [anon_sym_DQUOTE] = ACTIONS(453),
    [anon_sym_POUND] = ACTIONS(453),
    [anon_sym_DOLLAR] = ACTIONS(453),
    [anon_sym_PERCENT] = ACTIONS(453),
    [anon_sym_AMP] = ACTIONS(453),
    [anon_sym_1] = ACTIONS(453),
    [anon_sym_PLUS] = ACTIONS(453),
    [anon_sym_SLASH] = ACTIONS(453),
    [anon_sym_LT] = ACTIONS(453),
    [anon_sym_GT] = ACTIONS(453),
    [anon_sym_QMARK] = ACTIONS(453),
    [anon_sym_CARET] = ACTIONS(453),
    [sym__integer_literal] = ACTIONS(453),
    [sym__octal_literal] = ACTIONS(453),
    [sym__hexidecimal_literal] = ACTIONS(453),
  },
  [418] = {
    [anon_sym_LPAREN] = ACTIONS(457),
    [anon_sym_TILDE] = ACTIONS(457),
    [anon_sym_LBRACK] = ACTIONS(457),
    [anon_sym_DASH] = ACTIONS(457),
    [anon_sym__] = ACTIONS(457),
    [anon_sym_COLON] = ACTIONS(457),
    [sym_list_constructor] = ACTIONS(457),
    [anon_sym_BANG] = ACTIONS(457),
    [sym__variable_pattern] = ACTIONS(1144),
    [sym__constructor_pattern] = ACTIONS(1144),
    [anon_sym_DOT] = ACTIONS(457),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1144),
    [anon_sym_SQUOTE] = ACTIONS(457),
    [anon_sym_DQUOTE] = ACTIONS(457),
    [anon_sym_POUND] = ACTIONS(457),
    [anon_sym_DOLLAR] = ACTIONS(457),
    [anon_sym_PERCENT] = ACTIONS(457),
    [anon_sym_AMP] = ACTIONS(457),
    [anon_sym_1] = ACTIONS(457),
    [anon_sym_PLUS] = ACTIONS(457),
    [anon_sym_SLASH] = ACTIONS(457),
    [anon_sym_LT] = ACTIONS(457),
    [anon_sym_GT] = ACTIONS(457),
    [anon_sym_QMARK] = ACTIONS(457),
    [anon_sym_CARET] = ACTIONS(457),
    [sym__integer_literal] = ACTIONS(457),
    [sym__octal_literal] = ACTIONS(457),
    [sym__hexidecimal_literal] = ACTIONS(457),
  },
  [419] = {
    [sym__constructor_symbol] = STATE(511),
    [anon_sym_LPAREN] = ACTIONS(461),
    [anon_sym_TILDE] = ACTIONS(461),
    [anon_sym_LBRACK] = ACTIONS(461),
    [anon_sym_DASH] = ACTIONS(461),
    [anon_sym__] = ACTIONS(461),
    [anon_sym_COLON] = ACTIONS(883),
    [sym_list_constructor] = ACTIONS(461),
    [anon_sym_BANG] = ACTIONS(883),
    [sym__variable_pattern] = ACTIONS(1146),
    [sym__constructor_pattern] = ACTIONS(1146),
    [anon_sym_DOT] = ACTIONS(883),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1146),
    [anon_sym_SQUOTE] = ACTIONS(461),
    [anon_sym_DQUOTE] = ACTIONS(461),
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
    [sym__integer_literal] = ACTIONS(461),
    [sym__octal_literal] = ACTIONS(461),
    [sym__hexidecimal_literal] = ACTIONS(461),
  },
  [420] = {
    [sym__op] = STATE(304),
    [sym_variable_symbol] = STATE(305),
    [sym_constructor_symbol] = STATE(305),
    [sym__variable_symbol] = STATE(306),
    [anon_sym_COMMA] = ACTIONS(1148),
    [anon_sym_RPAREN] = ACTIONS(1148),
    [anon_sym_DASH] = ACTIONS(581),
    [anon_sym_BQUOTE] = ACTIONS(583),
    [anon_sym_COLON] = ACTIONS(585),
    [anon_sym_BANG] = ACTIONS(581),
    [anon_sym_DOT] = ACTIONS(581),
    [sym_comment] = ACTIONS(5),
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
  },
  [421] = {
    [anon_sym_COMMA] = ACTIONS(1148),
    [anon_sym_RPAREN] = ACTIONS(1148),
    [sym_comment] = ACTIONS(5),
  },
  [422] = {
    [anon_sym_LPAREN] = ACTIONS(471),
    [anon_sym_TILDE] = ACTIONS(471),
    [anon_sym_LBRACK] = ACTIONS(471),
    [anon_sym_DASH] = ACTIONS(471),
    [anon_sym__] = ACTIONS(471),
    [sym_list_constructor] = ACTIONS(471),
    [anon_sym_BANG] = ACTIONS(471),
    [sym__variable_pattern] = ACTIONS(1150),
    [sym__constructor_pattern] = ACTIONS(1150),
    [anon_sym_DOT] = ACTIONS(471),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1150),
    [anon_sym_SQUOTE] = ACTIONS(471),
    [anon_sym_DQUOTE] = ACTIONS(471),
    [anon_sym_POUND] = ACTIONS(471),
    [anon_sym_DOLLAR] = ACTIONS(471),
    [anon_sym_PERCENT] = ACTIONS(471),
    [anon_sym_AMP] = ACTIONS(471),
    [anon_sym_1] = ACTIONS(471),
    [anon_sym_PLUS] = ACTIONS(471),
    [anon_sym_SLASH] = ACTIONS(471),
    [anon_sym_LT] = ACTIONS(471),
    [anon_sym_GT] = ACTIONS(471),
    [anon_sym_QMARK] = ACTIONS(471),
    [anon_sym_CARET] = ACTIONS(471),
    [sym__integer_literal] = ACTIONS(471),
    [sym__octal_literal] = ACTIONS(471),
    [sym__hexidecimal_literal] = ACTIONS(471),
  },
  [423] = {
    [sym__variable_symbol] = STATE(512),
    [anon_sym_LPAREN] = ACTIONS(475),
    [anon_sym_TILDE] = ACTIONS(475),
    [anon_sym_LBRACK] = ACTIONS(475),
    [anon_sym_DASH] = ACTIONS(581),
    [anon_sym__] = ACTIONS(475),
    [sym_list_constructor] = ACTIONS(475),
    [anon_sym_BANG] = ACTIONS(581),
    [sym__variable_pattern] = ACTIONS(1152),
    [sym__constructor_pattern] = ACTIONS(1152),
    [anon_sym_DOT] = ACTIONS(581),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1152),
    [anon_sym_SQUOTE] = ACTIONS(475),
    [anon_sym_DQUOTE] = ACTIONS(475),
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
    [sym__integer_literal] = ACTIONS(475),
    [sym__octal_literal] = ACTIONS(475),
    [sym__hexidecimal_literal] = ACTIONS(475),
  },
  [424] = {
    [sym__function_pattern] = STATE(513),
    [sym_irrefutable_pattern] = STATE(84),
    [sym_list_pattern] = STATE(84),
    [sym_tuple_pattern] = STATE(84),
    [sym_parenthesized_pattern] = STATE(84),
    [sym__pattern] = STATE(514),
    [sym_negative_literal] = STATE(183),
    [sym_general_constructor] = STATE(183),
    [sym_as_pattern] = STATE(84),
    [sym_wildcard] = STATE(84),
    [sym__variable] = STATE(184),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym__literal] = STATE(84),
    [sym__identifier] = STATE(92),
    [sym_simple_type] = STATE(93),
    [sym_variable_identifier] = STATE(94),
    [sym_constructor_identifier] = STATE(185),
    [sym_integer] = STATE(87),
    [sym_char] = STATE(87),
    [sym_string] = STATE(87),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(347),
    [anon_sym_LBRACK] = ACTIONS(147),
    [anon_sym_DASH] = ACTIONS(349),
    [anon_sym__] = ACTIONS(149),
    [sym_list_constructor] = ACTIONS(151),
    [sym__variable_pattern] = ACTIONS(153),
    [sym__constructor_pattern] = ACTIONS(351),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(159),
    [anon_sym_DQUOTE] = ACTIONS(161),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [425] = {
    [anon_sym_LPAREN] = ACTIONS(1154),
    [anon_sym_COMMA] = ACTIONS(1154),
    [anon_sym_RPAREN] = ACTIONS(1154),
    [anon_sym_EQ] = ACTIONS(1154),
    [anon_sym_TILDE] = ACTIONS(1154),
    [anon_sym_LBRACK] = ACTIONS(1154),
    [anon_sym_RBRACK] = ACTIONS(1154),
    [anon_sym_DASH] = ACTIONS(1154),
    [anon_sym__] = ACTIONS(1154),
    [anon_sym_BQUOTE] = ACTIONS(1154),
    [anon_sym_COLON] = ACTIONS(1154),
    [sym_list_constructor] = ACTIONS(1154),
    [anon_sym_BANG] = ACTIONS(1154),
    [sym__variable_pattern] = ACTIONS(1156),
    [sym__constructor_pattern] = ACTIONS(1156),
    [anon_sym_DOT] = ACTIONS(1154),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1156),
    [anon_sym_SQUOTE] = ACTIONS(1154),
    [anon_sym_DQUOTE] = ACTIONS(1154),
    [anon_sym_POUND] = ACTIONS(1154),
    [anon_sym_DOLLAR] = ACTIONS(1154),
    [anon_sym_PERCENT] = ACTIONS(1154),
    [anon_sym_AMP] = ACTIONS(1154),
    [anon_sym_1] = ACTIONS(1154),
    [anon_sym_PLUS] = ACTIONS(1154),
    [anon_sym_SLASH] = ACTIONS(1154),
    [anon_sym_LT] = ACTIONS(1154),
    [anon_sym_GT] = ACTIONS(1154),
    [anon_sym_QMARK] = ACTIONS(1154),
    [anon_sym_CARET] = ACTIONS(1154),
    [sym__integer_literal] = ACTIONS(1154),
    [sym__octal_literal] = ACTIONS(1154),
    [sym__hexidecimal_literal] = ACTIONS(1154),
  },
  [426] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(1158),
  },
  [427] = {
    [anon_sym_COMMA] = ACTIONS(1132),
    [anon_sym_RPAREN] = ACTIONS(1132),
    [sym__variable_pattern] = ACTIONS(1132),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1134),
    [anon_sym_SQUOTE] = ACTIONS(1132),
    [anon_sym_DQUOTE] = ACTIONS(1132),
    [sym__integer_literal] = ACTIONS(1132),
    [sym__octal_literal] = ACTIONS(1132),
    [sym__hexidecimal_literal] = ACTIONS(1132),
  },
  [428] = {
    [anon_sym_LPAREN] = ACTIONS(1160),
    [anon_sym_COMMA] = ACTIONS(1160),
    [anon_sym_RPAREN] = ACTIONS(1160),
    [anon_sym_EQ] = ACTIONS(1160),
    [anon_sym_TILDE] = ACTIONS(1160),
    [anon_sym_LBRACK] = ACTIONS(1160),
    [anon_sym_RBRACK] = ACTIONS(1160),
    [anon_sym_DASH] = ACTIONS(1160),
    [anon_sym__] = ACTIONS(1160),
    [anon_sym_BQUOTE] = ACTIONS(1160),
    [anon_sym_COLON] = ACTIONS(1160),
    [sym_list_constructor] = ACTIONS(1160),
    [anon_sym_BANG] = ACTIONS(1160),
    [sym__variable_pattern] = ACTIONS(1162),
    [sym__constructor_pattern] = ACTIONS(1162),
    [anon_sym_DOT] = ACTIONS(1160),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1162),
    [anon_sym_SQUOTE] = ACTIONS(1160),
    [anon_sym_DQUOTE] = ACTIONS(1160),
    [anon_sym_POUND] = ACTIONS(1160),
    [anon_sym_DOLLAR] = ACTIONS(1160),
    [anon_sym_PERCENT] = ACTIONS(1160),
    [anon_sym_AMP] = ACTIONS(1160),
    [anon_sym_1] = ACTIONS(1160),
    [anon_sym_PLUS] = ACTIONS(1160),
    [anon_sym_SLASH] = ACTIONS(1160),
    [anon_sym_LT] = ACTIONS(1160),
    [anon_sym_GT] = ACTIONS(1160),
    [anon_sym_QMARK] = ACTIONS(1160),
    [anon_sym_CARET] = ACTIONS(1160),
    [sym__integer_literal] = ACTIONS(1160),
    [sym__octal_literal] = ACTIONS(1160),
    [sym__hexidecimal_literal] = ACTIONS(1160),
  },
  [429] = {
    [sym_label] = STATE(516),
    [sym__identifier] = STATE(323),
    [sym_variable_identifier] = STATE(112),
    [sym_constructor_identifier] = STATE(112),
    [sym__variable_pattern] = ACTIONS(199),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [430] = {
    [anon_sym_RBRACE] = ACTIONS(1164),
    [anon_sym_COMMA] = ACTIONS(1166),
    [sym_comment] = ACTIONS(5),
  },
  [431] = {
    [sym__literal] = STATE(518),
    [sym_integer] = STATE(87),
    [sym_char] = STATE(87),
    [sym_string] = STATE(87),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(157),
    [anon_sym_SQUOTE] = ACTIONS(159),
    [anon_sym_DQUOTE] = ACTIONS(161),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [432] = {
    [aux_sym_tupling_constructor_repeat1] = STATE(520),
    [anon_sym_COMMA] = ACTIONS(922),
    [anon_sym_RPAREN] = ACTIONS(1168),
    [sym_comment] = ACTIONS(5),
  },
  [433] = {
    [aux_sym_tuple_repeat1] = STATE(522),
    [anon_sym_COMMA] = ACTIONS(930),
    [anon_sym_RPAREN] = ACTIONS(1170),
    [sym_comment] = ACTIONS(5),
  },
  [434] = {
    [anon_sym_COMMA] = ACTIONS(1172),
    [anon_sym_RPAREN] = ACTIONS(1172),
    [sym_comment] = ACTIONS(5),
  },
  [435] = {
    [sym__layout_semicolon] = ACTIONS(1174),
    [anon_sym_SEMI] = ACTIONS(1176),
    [anon_sym_DASH_GT] = ACTIONS(1176),
    [sym_comment] = ACTIONS(5),
  },
  [436] = {
    [anon_sym_COMMA] = ACTIONS(1178),
    [anon_sym_RPAREN] = ACTIONS(1180),
    [sym_comment] = ACTIONS(5),
  },
  [437] = {
    [sym_type] = STATE(455),
    [sym__generic_type_constructor] = STATE(338),
    [sym_tupling_constructor] = STATE(327),
    [sym_tuple] = STATE(338),
    [sym_list] = STATE(338),
    [sym_parenthesized_constructor] = STATE(338),
    [sym_variable_identifier] = STATE(339),
    [sym__type_constructors] = STATE(327),
    [sym_qualified_type_constructor] = STATE(334),
    [anon_sym_LPAREN] = ACTIONS(615),
    [anon_sym_LBRACK] = ACTIONS(619),
    [anon_sym_RBRACK] = ACTIONS(1182),
    [sym_unit_type] = ACTIONS(621),
    [sym_list_constructor] = ACTIONS(621),
    [sym_function_constructor] = ACTIONS(621),
    [sym__variable_pattern] = ACTIONS(255),
    [sym__constructor_pattern] = ACTIONS(629),
    [sym_module_identifier] = ACTIONS(631),
    [sym_comment] = ACTIONS(5),
  },
  [438] = {
    [sym_variable_identifier] = STATE(273),
    [anon_sym_LPAREN] = ACTIONS(964),
    [anon_sym_COMMA] = ACTIONS(964),
    [anon_sym_RPAREN] = ACTIONS(964),
    [anon_sym_LBRACK] = ACTIONS(964),
    [anon_sym_RBRACK] = ACTIONS(964),
    [anon_sym_DASH_GT] = ACTIONS(964),
    [sym_unit_type] = ACTIONS(964),
    [sym_list_constructor] = ACTIONS(964),
    [sym_function_constructor] = ACTIONS(964),
    [sym__variable_pattern] = ACTIONS(255),
    [sym__constructor_pattern] = ACTIONS(1184),
    [sym_module_identifier] = ACTIONS(1184),
    [sym_comment] = ACTIONS(5),
  },
  [439] = {
    [sym_constructor_identifier] = STATE(526),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_module_identifier] = ACTIONS(966),
    [sym_comment] = ACTIONS(5),
  },
  [440] = {
    [sym_variable_identifier] = STATE(152),
    [aux_sym_type_class_repeat1] = STATE(527),
    [anon_sym_LPAREN] = ACTIONS(970),
    [anon_sym_COMMA] = ACTIONS(970),
    [anon_sym_RPAREN] = ACTIONS(970),
    [anon_sym_LBRACK] = ACTIONS(970),
    [anon_sym_RBRACK] = ACTIONS(970),
    [anon_sym_DASH_GT] = ACTIONS(970),
    [sym_unit_type] = ACTIONS(970),
    [sym_list_constructor] = ACTIONS(970),
    [sym_function_constructor] = ACTIONS(970),
    [sym__variable_pattern] = ACTIONS(255),
    [sym__constructor_pattern] = ACTIONS(1186),
    [sym_module_identifier] = ACTIONS(1186),
    [sym_comment] = ACTIONS(5),
  },
  [441] = {
    [sym_constructor_identifier] = STATE(526),
    [sym__constructor_pattern] = ACTIONS(69),
    [anon_sym_DOT] = ACTIONS(1188),
    [sym_comment] = ACTIONS(5),
  },
  [442] = {
    [sym_type] = STATE(529),
    [sym__generic_type_constructor] = STATE(331),
    [sym_tupling_constructor] = STATE(327),
    [sym_tuple] = STATE(331),
    [sym_list] = STATE(331),
    [sym_parenthesized_constructor] = STATE(331),
    [sym_variable_identifier] = STATE(333),
    [sym__type_constructors] = STATE(327),
    [sym_qualified_type_constructor] = STATE(334),
    [anon_sym_LPAREN] = ACTIONS(615),
    [anon_sym_LBRACK] = ACTIONS(619),
    [sym_unit_type] = ACTIONS(621),
    [sym_list_constructor] = ACTIONS(621),
    [sym_function_constructor] = ACTIONS(621),
    [sym__variable_pattern] = ACTIONS(623),
    [sym__constructor_pattern] = ACTIONS(629),
    [sym_module_identifier] = ACTIONS(627),
    [sym_comment] = ACTIONS(5),
  },
  [443] = {
    [sym__layout_semicolon] = ACTIONS(1190),
    [anon_sym_SEMI] = ACTIONS(1193),
    [anon_sym_DASH_GT] = ACTIONS(1193),
    [sym_comment] = ACTIONS(5),
  },
  [444] = {
    [anon_sym_COMMA] = ACTIONS(1196),
    [anon_sym_RPAREN] = ACTIONS(1198),
    [sym_comment] = ACTIONS(5),
  },
  [445] = {
    [sym_type] = STATE(532),
    [sym__generic_type_constructor] = STATE(331),
    [sym_tupling_constructor] = STATE(327),
    [sym_tuple] = STATE(331),
    [sym_list] = STATE(331),
    [sym_parenthesized_constructor] = STATE(331),
    [sym_variable_identifier] = STATE(333),
    [sym__type_constructors] = STATE(327),
    [sym_qualified_type_constructor] = STATE(334),
    [anon_sym_LPAREN] = ACTIONS(615),
    [anon_sym_LBRACK] = ACTIONS(619),
    [sym_unit_type] = ACTIONS(621),
    [sym_list_constructor] = ACTIONS(621),
    [sym_function_constructor] = ACTIONS(621),
    [sym__variable_pattern] = ACTIONS(623),
    [sym__constructor_pattern] = ACTIONS(629),
    [sym_module_identifier] = ACTIONS(627),
    [sym_comment] = ACTIONS(5),
  },
  [446] = {
    [anon_sym_EQ_GT] = ACTIONS(1200),
    [sym_comment] = ACTIONS(5),
  },
  [447] = {
    [anon_sym_COMMA] = ACTIONS(727),
    [anon_sym_RPAREN] = ACTIONS(1202),
    [sym_comment] = ACTIONS(5),
  },
  [448] = {
    [sym_type] = STATE(535),
    [sym__generic_type_constructor] = STATE(331),
    [sym_tupling_constructor] = STATE(327),
    [sym_tuple] = STATE(331),
    [sym_list] = STATE(331),
    [sym_parenthesized_constructor] = STATE(331),
    [sym_variable_identifier] = STATE(333),
    [sym__type_constructors] = STATE(327),
    [sym_qualified_type_constructor] = STATE(334),
    [anon_sym_LPAREN] = ACTIONS(615),
    [anon_sym_LBRACK] = ACTIONS(619),
    [sym_unit_type] = ACTIONS(621),
    [sym_list_constructor] = ACTIONS(621),
    [sym_function_constructor] = ACTIONS(621),
    [sym__variable_pattern] = ACTIONS(623),
    [sym__constructor_pattern] = ACTIONS(629),
    [sym_module_identifier] = ACTIONS(627),
    [sym_comment] = ACTIONS(5),
  },
  [449] = {
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_RBRACK] = ACTIONS(79),
    [anon_sym_DASH_GT] = ACTIONS(79),
    [sym_unit_type] = ACTIONS(79),
    [sym_list_constructor] = ACTIONS(79),
    [sym_function_constructor] = ACTIONS(79),
    [sym__variable_pattern] = ACTIONS(79),
    [sym__constructor_pattern] = ACTIONS(201),
    [sym_module_identifier] = ACTIONS(201),
    [sym_comment] = ACTIONS(5),
  },
  [450] = {
    [sym_constructor_identifier] = STATE(526),
    [sym__constructor_pattern] = ACTIONS(944),
    [sym_module_identifier] = ACTIONS(966),
    [sym_comment] = ACTIONS(5),
  },
  [451] = {
    [sym_constructor_identifier] = STATE(526),
    [sym__constructor_pattern] = ACTIONS(944),
    [anon_sym_DOT] = ACTIONS(1204),
    [sym_comment] = ACTIONS(5),
  },
  [452] = {
    [sym_type] = STATE(532),
    [sym__generic_type_constructor] = STATE(338),
    [sym_tupling_constructor] = STATE(327),
    [sym_tuple] = STATE(338),
    [sym_list] = STATE(338),
    [sym_parenthesized_constructor] = STATE(338),
    [sym_variable_identifier] = STATE(339),
    [sym__type_constructors] = STATE(327),
    [sym_qualified_type_constructor] = STATE(334),
    [anon_sym_LPAREN] = ACTIONS(615),
    [anon_sym_LBRACK] = ACTIONS(619),
    [sym_unit_type] = ACTIONS(621),
    [sym_list_constructor] = ACTIONS(621),
    [sym_function_constructor] = ACTIONS(621),
    [sym__variable_pattern] = ACTIONS(255),
    [sym__constructor_pattern] = ACTIONS(629),
    [sym_module_identifier] = ACTIONS(631),
    [sym_comment] = ACTIONS(5),
  },
  [453] = {
    [sym_type] = STATE(535),
    [sym__generic_type_constructor] = STATE(338),
    [sym_tupling_constructor] = STATE(327),
    [sym_tuple] = STATE(338),
    [sym_list] = STATE(338),
    [sym_parenthesized_constructor] = STATE(338),
    [sym_variable_identifier] = STATE(339),
    [sym__type_constructors] = STATE(327),
    [sym_qualified_type_constructor] = STATE(334),
    [anon_sym_LPAREN] = ACTIONS(615),
    [anon_sym_LBRACK] = ACTIONS(619),
    [sym_unit_type] = ACTIONS(621),
    [sym_list_constructor] = ACTIONS(621),
    [sym_function_constructor] = ACTIONS(621),
    [sym__variable_pattern] = ACTIONS(255),
    [sym__constructor_pattern] = ACTIONS(629),
    [sym_module_identifier] = ACTIONS(631),
    [sym_comment] = ACTIONS(5),
  },
  [454] = {
    [sym__layout_semicolon] = ACTIONS(1206),
    [anon_sym_SEMI] = ACTIONS(1208),
    [anon_sym_DASH_GT] = ACTIONS(1208),
    [sym_comment] = ACTIONS(5),
  },
  [455] = {
    [anon_sym_LPAREN] = ACTIONS(1210),
    [anon_sym_LBRACK] = ACTIONS(1210),
    [anon_sym_RBRACK] = ACTIONS(1210),
    [sym_unit_type] = ACTIONS(1210),
    [sym_list_constructor] = ACTIONS(1210),
    [sym_function_constructor] = ACTIONS(1210),
    [sym__variable_pattern] = ACTIONS(1210),
    [sym__constructor_pattern] = ACTIONS(1212),
    [sym_module_identifier] = ACTIONS(1212),
    [sym_comment] = ACTIONS(5),
  },
  [456] = {
    [sym__layout_semicolon] = ACTIONS(799),
    [anon_sym_SEMI] = ACTIONS(743),
    [anon_sym_DASH_GT] = ACTIONS(743),
    [sym__variable_pattern] = ACTIONS(743),
    [sym_comment] = ACTIONS(5),
  },
  [457] = {
    [sym__constructor_pattern] = ACTIONS(1214),
    [anon_sym_DOT] = ACTIONS(1216),
    [sym_comment] = ACTIONS(5),
  },
  [458] = {
    [sym_variable_identifier] = STATE(342),
    [aux_sym_type_class_repeat1] = STATE(537),
    [sym__layout_semicolon] = ACTIONS(1218),
    [anon_sym_SEMI] = ACTIONS(1220),
    [anon_sym_DASH_GT] = ACTIONS(1220),
    [sym__variable_pattern] = ACTIONS(805),
    [sym_comment] = ACTIONS(5),
  },
  [459] = {
    [sym_variable_identifier] = STATE(456),
    [sym__layout_semicolon] = ACTIONS(1218),
    [anon_sym_SEMI] = ACTIONS(1220),
    [anon_sym_DASH_GT] = ACTIONS(1220),
    [sym__variable_pattern] = ACTIONS(805),
    [sym_comment] = ACTIONS(5),
  },
  [460] = {
    [sym_constructor_identifier] = STATE(539),
    [sym__constructor_pattern] = ACTIONS(641),
    [sym_module_identifier] = ACTIONS(1222),
    [sym_comment] = ACTIONS(5),
  },
  [461] = {
    [sym__layout_semicolon] = ACTIONS(1224),
    [anon_sym_SEMI] = ACTIONS(1226),
    [sym_comment] = ACTIONS(5),
  },
  [462] = {
    [sym__layout_semicolon] = ACTIONS(1228),
    [anon_sym_SEMI] = ACTIONS(1230),
    [sym_comment] = ACTIONS(5),
  },
  [463] = {
    [anon_sym_COMMA] = ACTIONS(1232),
    [anon_sym_RPAREN] = ACTIONS(1232),
    [sym_comment] = ACTIONS(5),
  },
  [464] = {
    [sym_export] = STATE(540),
    [sym__identifier] = STATE(213),
    [sym_variable_identifier] = STATE(112),
    [sym_constructor_identifier] = STATE(112),
    [sym__variable_pattern] = ACTIONS(199),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [465] = {
    [anon_sym_where] = ACTIONS(1234),
    [sym_comment] = ACTIONS(5),
  },
  [466] = {
    [anon_sym_RPAREN] = ACTIONS(1236),
    [sym_comment] = ACTIONS(5),
  },
  [467] = {
    [aux_sym_export_repeat1] = STATE(542),
    [anon_sym_COMMA] = ACTIONS(425),
    [anon_sym_RPAREN] = ACTIONS(1236),
    [sym_comment] = ACTIONS(5),
  },
  [468] = {
    [sym__layout_close_brace] = ACTIONS(325),
    [anon_sym_import] = ACTIONS(327),
    [anon_sym_foreign] = ACTIONS(327),
    [anon_sym_default] = ACTIONS(327),
    [anon_sym_class] = ACTIONS(327),
    [anon_sym_instance] = ACTIONS(327),
    [anon_sym_infixl] = ACTIONS(327),
    [anon_sym_infixr] = ACTIONS(327),
    [anon_sym_infix] = ACTIONS(327),
    [anon_sym_data] = ACTIONS(327),
    [anon_sym_newtype] = ACTIONS(327),
    [anon_sym_type] = ACTIONS(327),
    [sym__variable_pattern] = ACTIONS(329),
    [sym__constructor_pattern] = ACTIONS(329),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(329),
    [anon_sym_SQUOTE] = ACTIONS(327),
    [anon_sym_DQUOTE] = ACTIONS(327),
    [sym__integer_literal] = ACTIONS(327),
    [sym__octal_literal] = ACTIONS(327),
    [sym__hexidecimal_literal] = ACTIONS(327),
  },
  [469] = {
    [ts_builtin_sym_end] = ACTIONS(1238),
    [sym_comment] = ACTIONS(5),
  },
  [470] = {
    [sym__layout_semicolon] = ACTIONS(1240),
    [anon_sym_SEMI] = ACTIONS(1242),
    [sym_comment] = ACTIONS(5),
  },
  [471] = {
    [sym__layout_semicolon] = ACTIONS(1244),
    [anon_sym_SEMI] = ACTIONS(1246),
    [sym_comment] = ACTIONS(5),
  },
  [472] = {
    [anon_sym_RPAREN] = ACTIONS(1248),
    [sym_comment] = ACTIONS(5),
  },
  [473] = {
    [aux_sym_export_repeat1] = STATE(545),
    [anon_sym_COMMA] = ACTIONS(425),
    [anon_sym_RPAREN] = ACTIONS(1248),
    [sym_comment] = ACTIONS(5),
  },
  [474] = {
    [anon_sym_LPAREN] = ACTIONS(1250),
    [anon_sym_COMMA] = ACTIONS(1252),
    [anon_sym_RPAREN] = ACTIONS(1252),
    [sym_comment] = ACTIONS(5),
  },
  [475] = {
    [sym__identifier] = STATE(547),
    [sym_variable_identifier] = STATE(112),
    [sym_constructor_identifier] = STATE(112),
    [sym__variable_pattern] = ACTIONS(199),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [476] = {
    [sym__layout_semicolon] = ACTIONS(1254),
    [anon_sym_SEMI] = ACTIONS(1256),
    [sym_comment] = ACTIONS(5),
  },
  [477] = {
    [sym__identifier] = STATE(549),
    [sym_variable_identifier] = STATE(112),
    [sym_constructor_identifier] = STATE(112),
    [anon_sym_DOT_DOT] = ACTIONS(1258),
    [sym__variable_pattern] = ACTIONS(199),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [478] = {
    [anon_sym_COMMA] = ACTIONS(1008),
    [anon_sym_RPAREN] = ACTIONS(1260),
    [sym_comment] = ACTIONS(5),
  },
  [479] = {
    [anon_sym_COMMA] = ACTIONS(549),
    [anon_sym_RPAREN] = ACTIONS(549),
    [sym__variable_pattern] = ACTIONS(549),
    [sym__constructor_pattern] = ACTIONS(551),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(551),
    [anon_sym_SQUOTE] = ACTIONS(549),
    [anon_sym_DQUOTE] = ACTIONS(549),
    [sym__integer_literal] = ACTIONS(549),
    [sym__octal_literal] = ACTIONS(549),
    [sym__hexidecimal_literal] = ACTIONS(549),
  },
  [480] = {
    [sym__layout_semicolon] = ACTIONS(1262),
    [anon_sym_SEMI] = ACTIONS(1264),
    [sym_comment] = ACTIONS(5),
  },
  [481] = {
    [anon_sym_COMMA] = ACTIONS(1266),
    [anon_sym_RPAREN] = ACTIONS(1266),
    [sym_comment] = ACTIONS(5),
  },
  [482] = {
    [anon_sym_COMMA] = ACTIONS(1268),
    [anon_sym_RPAREN] = ACTIONS(1268),
    [sym_comment] = ACTIONS(5),
  },
  [483] = {
    [sym__constructor_pattern] = ACTIONS(1270),
    [sym_comment] = ACTIONS(5),
  },
  [484] = {
    [sym__layout_semicolon] = ACTIONS(1272),
    [anon_sym_SEMI] = ACTIONS(1274),
    [sym_comment] = ACTIONS(5),
  },
  [485] = {
    [sym__layout_semicolon] = ACTIONS(1238),
    [anon_sym_SEMI] = ACTIONS(1276),
    [sym_comment] = ACTIONS(5),
  },
  [486] = {
    [sym__layout_semicolon] = ACTIONS(1278),
    [anon_sym_SEMI] = ACTIONS(1280),
    [sym_comment] = ACTIONS(5),
  },
  [487] = {
    [sym__layout_semicolon] = ACTIONS(1282),
    [anon_sym_SEMI] = ACTIONS(1284),
    [sym_comment] = ACTIONS(5),
  },
  [488] = {
    [sym__layout_semicolon] = ACTIONS(1286),
    [anon_sym_SEMI] = ACTIONS(1288),
    [sym_comment] = ACTIONS(5),
  },
  [489] = {
    [anon_sym_COMMA] = ACTIONS(721),
    [anon_sym_RPAREN] = ACTIONS(1290),
    [sym_comment] = ACTIONS(5),
  },
  [490] = {
    [sym__layout_semicolon] = ACTIONS(1292),
    [anon_sym_SEMI] = ACTIONS(1294),
    [anon_sym_PIPE] = ACTIONS(1294),
    [anon_sym_deriving] = ACTIONS(1294),
    [sym_comment] = ACTIONS(5),
  },
  [491] = {
    [sym__layout_semicolon] = ACTIONS(1296),
    [anon_sym_SEMI] = ACTIONS(1298),
    [anon_sym_PIPE] = ACTIONS(1298),
    [anon_sym_deriving] = ACTIONS(1298),
    [sym_comment] = ACTIONS(5),
  },
  [492] = {
    [sym_field] = STATE(552),
    [sym_variable_identifier] = STATE(393),
    [sym__variable_pattern] = ACTIONS(623),
    [sym_comment] = ACTIONS(5),
  },
  [493] = {
    [anon_sym_RBRACE] = ACTIONS(1300),
    [anon_sym_COMMA] = ACTIONS(1302),
    [sym_comment] = ACTIONS(5),
  },
  [494] = {
    [sym_variable_identifier] = STATE(555),
    [sym__variable_pattern] = ACTIONS(623),
    [sym_comment] = ACTIONS(5),
  },
  [495] = {
    [sym_strict] = STATE(557),
    [sym__identifier] = STATE(557),
    [sym_variable_identifier] = STATE(112),
    [sym_constructor_identifier] = STATE(112),
    [anon_sym_BANG] = ACTIONS(1304),
    [sym__variable_pattern] = ACTIONS(199),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [496] = {
    [anon_sym_COMMA] = ACTIONS(1306),
    [anon_sym_COLON_COLON] = ACTIONS(1308),
    [sym_comment] = ACTIONS(5),
  },
  [497] = {
    [sym__layout_semicolon] = ACTIONS(1310),
    [anon_sym_SEMI] = ACTIONS(1312),
    [sym_comment] = ACTIONS(5),
  },
  [498] = {
    [sym__layout_close_brace] = ACTIONS(1314),
    [anon_sym_do] = ACTIONS(1316),
    [sym__variable_pattern] = ACTIONS(1318),
    [sym__constructor_pattern] = ACTIONS(1318),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1318),
    [anon_sym_SQUOTE] = ACTIONS(1316),
    [anon_sym_DQUOTE] = ACTIONS(1316),
    [sym__integer_literal] = ACTIONS(1316),
    [sym__octal_literal] = ACTIONS(1316),
    [sym__hexidecimal_literal] = ACTIONS(1316),
  },
  [499] = {
    [sym__layout_semicolon] = ACTIONS(83),
    [anon_sym_SEMI] = ACTIONS(85),
    [sym__variable_pattern] = ACTIONS(85),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(85),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [sym__integer_literal] = ACTIONS(85),
    [sym__octal_literal] = ACTIONS(85),
    [sym__hexidecimal_literal] = ACTIONS(85),
  },
  [500] = {
    [sym__graphic] = STATE(560),
    [sym__small] = STATE(64),
    [sym__large] = STATE(64),
    [sym__symbol] = STATE(64),
    [sym__special] = STATE(64),
    [sym__escape] = STATE(560),
    [anon_sym_SEMI] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_RBRACE] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_RPAREN] = ACTIONS(89),
    [anon_sym_EQ] = ACTIONS(91),
    [anon_sym_TILDE] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_RBRACK] = ACTIONS(89),
    [anon_sym_DASH] = ACTIONS(91),
    [anon_sym_AT] = ACTIONS(91),
    [anon_sym__] = ACTIONS(93),
    [anon_sym_BQUOTE] = ACTIONS(89),
    [anon_sym_COLON] = ACTIONS(91),
    [anon_sym_PIPE] = ACTIONS(91),
    [anon_sym_BANG] = ACTIONS(91),
    [anon_sym_DOT] = ACTIONS(91),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(1320),
    [anon_sym_DQUOTE] = ACTIONS(1320),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(99),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(93),
    [sym__ascii_large] = ACTIONS(101),
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
    [anon_sym_BSLASH] = ACTIONS(103),
    [sym__space] = ACTIONS(1320),
  },
  [501] = {
    [sym__gap] = STATE(70),
    [sym__graphic] = STATE(70),
    [sym__small] = STATE(72),
    [sym__large] = STATE(72),
    [sym__symbol] = STATE(72),
    [sym__special] = STATE(72),
    [sym__escape] = STATE(70),
    [aux_sym_string_repeat1] = STATE(562),
    [anon_sym_SEMI] = ACTIONS(105),
    [anon_sym_LBRACE] = ACTIONS(105),
    [anon_sym_RBRACE] = ACTIONS(105),
    [anon_sym_LPAREN] = ACTIONS(105),
    [anon_sym_RPAREN] = ACTIONS(105),
    [anon_sym_EQ] = ACTIONS(107),
    [anon_sym_TILDE] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(105),
    [anon_sym_RBRACK] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(107),
    [anon_sym_AT] = ACTIONS(107),
    [anon_sym__] = ACTIONS(109),
    [anon_sym_BQUOTE] = ACTIONS(105),
    [anon_sym_COLON] = ACTIONS(107),
    [anon_sym_PIPE] = ACTIONS(107),
    [anon_sym_BANG] = ACTIONS(107),
    [anon_sym_DOT] = ACTIONS(107),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(111),
    [anon_sym_DQUOTE] = ACTIONS(1322),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(115),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(109),
    [sym__ascii_large] = ACTIONS(117),
    [anon_sym_POUND] = ACTIONS(107),
    [anon_sym_DOLLAR] = ACTIONS(107),
    [anon_sym_PERCENT] = ACTIONS(107),
    [anon_sym_AMP] = ACTIONS(107),
    [anon_sym_1] = ACTIONS(107),
    [anon_sym_PLUS] = ACTIONS(107),
    [anon_sym_SLASH] = ACTIONS(107),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_QMARK] = ACTIONS(107),
    [anon_sym_CARET] = ACTIONS(107),
    [anon_sym_BSLASH] = ACTIONS(119),
    [sym__space] = ACTIONS(121),
    [sym__newline] = ACTIONS(121),
    [sym__tab] = ACTIONS(121),
    [sym__vertical_tab] = ACTIONS(121),
  },
  [502] = {
    [sym__layout_semicolon] = ACTIONS(123),
    [anon_sym_SEMI] = ACTIONS(125),
    [sym__variable_pattern] = ACTIONS(125),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(127),
    [anon_sym_SQUOTE] = ACTIONS(125),
    [anon_sym_DQUOTE] = ACTIONS(125),
    [sym__integer_literal] = ACTIONS(125),
    [sym__octal_literal] = ACTIONS(125),
    [sym__hexidecimal_literal] = ACTIONS(125),
  },
  [503] = {
    [sym__layout_semicolon] = ACTIONS(855),
    [anon_sym_SEMI] = ACTIONS(857),
    [sym__variable_pattern] = ACTIONS(857),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(859),
    [anon_sym_SQUOTE] = ACTIONS(857),
    [anon_sym_DQUOTE] = ACTIONS(857),
    [sym__integer_literal] = ACTIONS(857),
    [sym__octal_literal] = ACTIONS(857),
    [sym__hexidecimal_literal] = ACTIONS(857),
  },
  [504] = {
    [sym__literal] = STATE(563),
    [sym_variable_identifier] = STATE(563),
    [sym_integer] = STATE(499),
    [sym_char] = STATE(499),
    [sym_string] = STATE(499),
    [sym__layout_semicolon] = ACTIONS(861),
    [anon_sym_SEMI] = ACTIONS(863),
    [sym__variable_pattern] = ACTIONS(805),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1114),
    [anon_sym_SQUOTE] = ACTIONS(1116),
    [anon_sym_DQUOTE] = ACTIONS(1118),
    [sym__integer_literal] = ACTIONS(1120),
    [sym__octal_literal] = ACTIONS(1120),
    [sym__hexidecimal_literal] = ACTIONS(1120),
  },
  [505] = {
    [sym__layout_semicolon] = ACTIONS(1324),
    [anon_sym_SEMI] = ACTIONS(1326),
    [anon_sym_where] = ACTIONS(1326),
    [anon_sym_do] = ACTIONS(1326),
    [sym__variable_pattern] = ACTIONS(1328),
    [sym__constructor_pattern] = ACTIONS(1328),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1328),
    [anon_sym_SQUOTE] = ACTIONS(1326),
    [anon_sym_DQUOTE] = ACTIONS(1326),
    [sym__integer_literal] = ACTIONS(1326),
    [sym__octal_literal] = ACTIONS(1326),
    [sym__hexidecimal_literal] = ACTIONS(1326),
  },
  [506] = {
    [sym__layout_close_brace] = ACTIONS(1330),
    [anon_sym_do] = ACTIONS(1332),
    [sym__variable_pattern] = ACTIONS(1334),
    [sym__constructor_pattern] = ACTIONS(1334),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1334),
    [anon_sym_SQUOTE] = ACTIONS(1332),
    [anon_sym_DQUOTE] = ACTIONS(1332),
    [sym__integer_literal] = ACTIONS(1332),
    [sym__octal_literal] = ACTIONS(1332),
    [sym__hexidecimal_literal] = ACTIONS(1332),
  },
  [507] = {
    [anon_sym_RBRACE] = ACTIONS(1316),
    [anon_sym_do] = ACTIONS(1316),
    [sym__variable_pattern] = ACTIONS(1318),
    [sym__constructor_pattern] = ACTIONS(1318),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1318),
    [anon_sym_SQUOTE] = ACTIONS(1316),
    [anon_sym_DQUOTE] = ACTIONS(1316),
    [sym__integer_literal] = ACTIONS(1316),
    [sym__octal_literal] = ACTIONS(1316),
    [sym__hexidecimal_literal] = ACTIONS(1316),
  },
  [508] = {
    [anon_sym_RBRACE] = ACTIONS(1332),
    [anon_sym_do] = ACTIONS(1332),
    [sym__variable_pattern] = ACTIONS(1334),
    [sym__constructor_pattern] = ACTIONS(1334),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1334),
    [anon_sym_SQUOTE] = ACTIONS(1332),
    [anon_sym_DQUOTE] = ACTIONS(1332),
    [sym__integer_literal] = ACTIONS(1332),
    [sym__octal_literal] = ACTIONS(1332),
    [sym__hexidecimal_literal] = ACTIONS(1332),
  },
  [509] = {
    [anon_sym_COMMA] = ACTIONS(1336),
    [anon_sym_RPAREN] = ACTIONS(1336),
    [sym_comment] = ACTIONS(5),
  },
  [510] = {
    [anon_sym_LPAREN] = ACTIONS(755),
    [anon_sym_TILDE] = ACTIONS(755),
    [anon_sym_LBRACK] = ACTIONS(755),
    [anon_sym_DASH] = ACTIONS(755),
    [anon_sym__] = ACTIONS(755),
    [sym_list_constructor] = ACTIONS(755),
    [sym__variable_pattern] = ACTIONS(1338),
    [sym__constructor_pattern] = ACTIONS(1338),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1338),
    [anon_sym_SQUOTE] = ACTIONS(755),
    [anon_sym_DQUOTE] = ACTIONS(755),
    [sym__integer_literal] = ACTIONS(755),
    [sym__octal_literal] = ACTIONS(755),
    [sym__hexidecimal_literal] = ACTIONS(755),
  },
  [511] = {
    [anon_sym_LPAREN] = ACTIONS(759),
    [anon_sym_TILDE] = ACTIONS(759),
    [anon_sym_LBRACK] = ACTIONS(759),
    [anon_sym_DASH] = ACTIONS(759),
    [anon_sym__] = ACTIONS(759),
    [anon_sym_COLON] = ACTIONS(759),
    [sym_list_constructor] = ACTIONS(759),
    [anon_sym_BANG] = ACTIONS(759),
    [sym__variable_pattern] = ACTIONS(1340),
    [sym__constructor_pattern] = ACTIONS(1340),
    [anon_sym_DOT] = ACTIONS(759),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1340),
    [anon_sym_SQUOTE] = ACTIONS(759),
    [anon_sym_DQUOTE] = ACTIONS(759),
    [anon_sym_POUND] = ACTIONS(759),
    [anon_sym_DOLLAR] = ACTIONS(759),
    [anon_sym_PERCENT] = ACTIONS(759),
    [anon_sym_AMP] = ACTIONS(759),
    [anon_sym_1] = ACTIONS(759),
    [anon_sym_PLUS] = ACTIONS(759),
    [anon_sym_SLASH] = ACTIONS(759),
    [anon_sym_LT] = ACTIONS(759),
    [anon_sym_GT] = ACTIONS(759),
    [anon_sym_QMARK] = ACTIONS(759),
    [anon_sym_CARET] = ACTIONS(759),
    [sym__integer_literal] = ACTIONS(759),
    [sym__octal_literal] = ACTIONS(759),
    [sym__hexidecimal_literal] = ACTIONS(759),
  },
  [512] = {
    [anon_sym_LPAREN] = ACTIONS(771),
    [anon_sym_TILDE] = ACTIONS(771),
    [anon_sym_LBRACK] = ACTIONS(771),
    [anon_sym_DASH] = ACTIONS(771),
    [anon_sym__] = ACTIONS(771),
    [sym_list_constructor] = ACTIONS(771),
    [anon_sym_BANG] = ACTIONS(771),
    [sym__variable_pattern] = ACTIONS(1342),
    [sym__constructor_pattern] = ACTIONS(1342),
    [anon_sym_DOT] = ACTIONS(771),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1342),
    [anon_sym_SQUOTE] = ACTIONS(771),
    [anon_sym_DQUOTE] = ACTIONS(771),
    [anon_sym_POUND] = ACTIONS(771),
    [anon_sym_DOLLAR] = ACTIONS(771),
    [anon_sym_PERCENT] = ACTIONS(771),
    [anon_sym_AMP] = ACTIONS(771),
    [anon_sym_1] = ACTIONS(771),
    [anon_sym_PLUS] = ACTIONS(771),
    [anon_sym_SLASH] = ACTIONS(771),
    [anon_sym_LT] = ACTIONS(771),
    [anon_sym_GT] = ACTIONS(771),
    [anon_sym_QMARK] = ACTIONS(771),
    [anon_sym_CARET] = ACTIONS(771),
    [sym__integer_literal] = ACTIONS(771),
    [sym__octal_literal] = ACTIONS(771),
    [sym__hexidecimal_literal] = ACTIONS(771),
  },
  [513] = {
    [sym__op] = STATE(304),
    [sym_variable_symbol] = STATE(305),
    [sym_constructor_symbol] = STATE(305),
    [sym__variable_symbol] = STATE(306),
    [anon_sym_COMMA] = ACTIONS(1344),
    [anon_sym_RPAREN] = ACTIONS(1344),
    [anon_sym_DASH] = ACTIONS(581),
    [anon_sym_BQUOTE] = ACTIONS(583),
    [anon_sym_COLON] = ACTIONS(585),
    [anon_sym_BANG] = ACTIONS(581),
    [anon_sym_DOT] = ACTIONS(581),
    [sym_comment] = ACTIONS(5),
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
  },
  [514] = {
    [anon_sym_COMMA] = ACTIONS(1344),
    [anon_sym_RPAREN] = ACTIONS(1344),
    [sym_comment] = ACTIONS(5),
  },
  [515] = {
    [anon_sym_COMMA] = ACTIONS(517),
    [anon_sym_RPAREN] = ACTIONS(517),
    [sym__variable_pattern] = ACTIONS(517),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(519),
    [anon_sym_SQUOTE] = ACTIONS(517),
    [anon_sym_DQUOTE] = ACTIONS(517),
    [sym__integer_literal] = ACTIONS(517),
    [sym__octal_literal] = ACTIONS(517),
    [sym__hexidecimal_literal] = ACTIONS(517),
  },
  [516] = {
    [anon_sym_RBRACE] = ACTIONS(1346),
    [anon_sym_COMMA] = ACTIONS(1346),
    [sym_comment] = ACTIONS(5),
  },
  [517] = {
    [sym_label] = STATE(564),
    [sym__identifier] = STATE(323),
    [sym_variable_identifier] = STATE(112),
    [sym_constructor_identifier] = STATE(112),
    [sym__variable_pattern] = ACTIONS(199),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [518] = {
    [anon_sym_RBRACE] = ACTIONS(1348),
    [anon_sym_COMMA] = ACTIONS(1348),
    [sym_comment] = ACTIONS(5),
  },
  [519] = {
    [anon_sym_LPAREN] = ACTIONS(1176),
    [anon_sym_COMMA] = ACTIONS(1176),
    [anon_sym_RPAREN] = ACTIONS(1176),
    [anon_sym_LBRACK] = ACTIONS(1176),
    [anon_sym_RBRACK] = ACTIONS(1176),
    [anon_sym_DASH_GT] = ACTIONS(1176),
    [sym_unit_type] = ACTIONS(1176),
    [sym_list_constructor] = ACTIONS(1176),
    [sym_function_constructor] = ACTIONS(1176),
    [sym__variable_pattern] = ACTIONS(1176),
    [sym__constructor_pattern] = ACTIONS(1350),
    [sym_module_identifier] = ACTIONS(1350),
    [sym_comment] = ACTIONS(5),
  },
  [520] = {
    [anon_sym_COMMA] = ACTIONS(1178),
    [anon_sym_RPAREN] = ACTIONS(1352),
    [sym_comment] = ACTIONS(5),
  },
  [521] = {
    [anon_sym_LPAREN] = ACTIONS(1193),
    [anon_sym_COMMA] = ACTIONS(1193),
    [anon_sym_RPAREN] = ACTIONS(1193),
    [anon_sym_LBRACK] = ACTIONS(1193),
    [anon_sym_RBRACK] = ACTIONS(1193),
    [anon_sym_DASH_GT] = ACTIONS(1193),
    [sym_unit_type] = ACTIONS(1193),
    [sym_list_constructor] = ACTIONS(1193),
    [sym_function_constructor] = ACTIONS(1193),
    [sym__variable_pattern] = ACTIONS(1193),
    [sym__constructor_pattern] = ACTIONS(1354),
    [sym_module_identifier] = ACTIONS(1354),
    [sym_comment] = ACTIONS(5),
  },
  [522] = {
    [anon_sym_COMMA] = ACTIONS(1196),
    [anon_sym_RPAREN] = ACTIONS(1357),
    [sym_comment] = ACTIONS(5),
  },
  [523] = {
    [anon_sym_COMMA] = ACTIONS(1359),
    [anon_sym_RPAREN] = ACTIONS(1359),
    [sym_comment] = ACTIONS(5),
  },
  [524] = {
    [sym__layout_semicolon] = ACTIONS(1361),
    [anon_sym_SEMI] = ACTIONS(1363),
    [anon_sym_DASH_GT] = ACTIONS(1363),
    [sym_comment] = ACTIONS(5),
  },
  [525] = {
    [anon_sym_LPAREN] = ACTIONS(1208),
    [anon_sym_COMMA] = ACTIONS(1208),
    [anon_sym_RPAREN] = ACTIONS(1208),
    [anon_sym_LBRACK] = ACTIONS(1208),
    [anon_sym_RBRACK] = ACTIONS(1208),
    [anon_sym_DASH_GT] = ACTIONS(1208),
    [sym_unit_type] = ACTIONS(1208),
    [sym_list_constructor] = ACTIONS(1208),
    [sym_function_constructor] = ACTIONS(1208),
    [sym__variable_pattern] = ACTIONS(1208),
    [sym__constructor_pattern] = ACTIONS(1365),
    [sym_module_identifier] = ACTIONS(1365),
    [sym_comment] = ACTIONS(5),
  },
  [526] = {
    [sym_variable_identifier] = STATE(152),
    [aux_sym_type_class_repeat1] = STATE(567),
    [anon_sym_LPAREN] = ACTIONS(1220),
    [anon_sym_COMMA] = ACTIONS(1220),
    [anon_sym_RPAREN] = ACTIONS(1220),
    [anon_sym_LBRACK] = ACTIONS(1220),
    [anon_sym_RBRACK] = ACTIONS(1220),
    [anon_sym_DASH_GT] = ACTIONS(1220),
    [sym_unit_type] = ACTIONS(1220),
    [sym_list_constructor] = ACTIONS(1220),
    [sym_function_constructor] = ACTIONS(1220),
    [sym__variable_pattern] = ACTIONS(255),
    [sym__constructor_pattern] = ACTIONS(1367),
    [sym_module_identifier] = ACTIONS(1367),
    [sym_comment] = ACTIONS(5),
  },
  [527] = {
    [sym_variable_identifier] = STATE(273),
    [anon_sym_LPAREN] = ACTIONS(1220),
    [anon_sym_COMMA] = ACTIONS(1220),
    [anon_sym_RPAREN] = ACTIONS(1220),
    [anon_sym_LBRACK] = ACTIONS(1220),
    [anon_sym_RBRACK] = ACTIONS(1220),
    [anon_sym_DASH_GT] = ACTIONS(1220),
    [sym_unit_type] = ACTIONS(1220),
    [sym_list_constructor] = ACTIONS(1220),
    [sym_function_constructor] = ACTIONS(1220),
    [sym__variable_pattern] = ACTIONS(255),
    [sym__constructor_pattern] = ACTIONS(1367),
    [sym_module_identifier] = ACTIONS(1367),
    [sym_comment] = ACTIONS(5),
  },
  [528] = {
    [sym_constructor_identifier] = STATE(568),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_module_identifier] = ACTIONS(1222),
    [sym_comment] = ACTIONS(5),
  },
  [529] = {
    [anon_sym_COMMA] = ACTIONS(1369),
    [anon_sym_RPAREN] = ACTIONS(1369),
    [sym_comment] = ACTIONS(5),
  },
  [530] = {
    [sym_type] = STATE(569),
    [sym__generic_type_constructor] = STATE(331),
    [sym_tupling_constructor] = STATE(327),
    [sym_tuple] = STATE(331),
    [sym_list] = STATE(331),
    [sym_parenthesized_constructor] = STATE(331),
    [sym_variable_identifier] = STATE(333),
    [sym__type_constructors] = STATE(327),
    [sym_qualified_type_constructor] = STATE(334),
    [anon_sym_LPAREN] = ACTIONS(615),
    [anon_sym_LBRACK] = ACTIONS(619),
    [sym_unit_type] = ACTIONS(621),
    [sym_list_constructor] = ACTIONS(621),
    [sym_function_constructor] = ACTIONS(621),
    [sym__variable_pattern] = ACTIONS(623),
    [sym__constructor_pattern] = ACTIONS(629),
    [sym_module_identifier] = ACTIONS(627),
    [sym_comment] = ACTIONS(5),
  },
  [531] = {
    [sym__layout_semicolon] = ACTIONS(1371),
    [anon_sym_SEMI] = ACTIONS(1373),
    [anon_sym_DASH_GT] = ACTIONS(1373),
    [sym_comment] = ACTIONS(5),
  },
  [532] = {
    [anon_sym_LPAREN] = ACTIONS(1226),
    [anon_sym_COMMA] = ACTIONS(1226),
    [anon_sym_RPAREN] = ACTIONS(1226),
    [anon_sym_LBRACK] = ACTIONS(1226),
    [anon_sym_RBRACK] = ACTIONS(1226),
    [sym_unit_type] = ACTIONS(1226),
    [sym_list_constructor] = ACTIONS(1226),
    [sym_function_constructor] = ACTIONS(1226),
    [sym__variable_pattern] = ACTIONS(1226),
    [sym__constructor_pattern] = ACTIONS(1375),
    [sym_module_identifier] = ACTIONS(1375),
    [sym_comment] = ACTIONS(5),
  },
  [533] = {
    [anon_sym_LPAREN] = ACTIONS(1377),
    [anon_sym_LBRACK] = ACTIONS(1377),
    [sym_unit_type] = ACTIONS(1377),
    [sym_list_constructor] = ACTIONS(1377),
    [sym_function_constructor] = ACTIONS(1377),
    [sym__variable_pattern] = ACTIONS(1377),
    [sym__constructor_pattern] = ACTIONS(1028),
    [sym_module_identifier] = ACTIONS(1028),
    [sym_comment] = ACTIONS(5),
  },
  [534] = {
    [anon_sym_EQ_GT] = ACTIONS(1379),
    [sym_comment] = ACTIONS(5),
  },
  [535] = {
    [anon_sym_LPAREN] = ACTIONS(1230),
    [anon_sym_COMMA] = ACTIONS(1230),
    [anon_sym_RPAREN] = ACTIONS(1230),
    [anon_sym_LBRACK] = ACTIONS(1230),
    [anon_sym_RBRACK] = ACTIONS(1230),
    [sym_unit_type] = ACTIONS(1230),
    [sym_list_constructor] = ACTIONS(1230),
    [sym_function_constructor] = ACTIONS(1230),
    [sym__variable_pattern] = ACTIONS(1230),
    [sym__constructor_pattern] = ACTIONS(1381),
    [sym_module_identifier] = ACTIONS(1381),
    [sym_comment] = ACTIONS(5),
  },
  [536] = {
    [sym_constructor_identifier] = STATE(568),
    [sym__constructor_pattern] = ACTIONS(944),
    [sym_module_identifier] = ACTIONS(1222),
    [sym_comment] = ACTIONS(5),
  },
  [537] = {
    [sym_variable_identifier] = STATE(456),
    [sym__layout_semicolon] = ACTIONS(1383),
    [anon_sym_SEMI] = ACTIONS(1385),
    [anon_sym_DASH_GT] = ACTIONS(1385),
    [sym__variable_pattern] = ACTIONS(805),
    [sym_comment] = ACTIONS(5),
  },
  [538] = {
    [sym__constructor_pattern] = ACTIONS(1387),
    [anon_sym_DOT] = ACTIONS(1389),
    [sym_comment] = ACTIONS(5),
  },
  [539] = {
    [sym_variable_identifier] = STATE(342),
    [aux_sym_type_class_repeat1] = STATE(571),
    [sym__layout_semicolon] = ACTIONS(1383),
    [anon_sym_SEMI] = ACTIONS(1385),
    [anon_sym_DASH_GT] = ACTIONS(1385),
    [sym__variable_pattern] = ACTIONS(805),
    [sym_comment] = ACTIONS(5),
  },
  [540] = {
    [anon_sym_COMMA] = ACTIONS(1391),
    [anon_sym_RPAREN] = ACTIONS(1391),
    [sym_comment] = ACTIONS(5),
  },
  [541] = {
    [anon_sym_COMMA] = ACTIONS(1393),
    [anon_sym_RPAREN] = ACTIONS(1393),
    [sym_comment] = ACTIONS(5),
  },
  [542] = {
    [anon_sym_COMMA] = ACTIONS(721),
    [anon_sym_RPAREN] = ACTIONS(1395),
    [sym_comment] = ACTIONS(5),
  },
  [543] = {
    [sym__layout_close_brace] = ACTIONS(667),
    [anon_sym_import] = ACTIONS(669),
    [anon_sym_foreign] = ACTIONS(669),
    [anon_sym_default] = ACTIONS(669),
    [anon_sym_class] = ACTIONS(669),
    [anon_sym_instance] = ACTIONS(669),
    [anon_sym_infixl] = ACTIONS(669),
    [anon_sym_infixr] = ACTIONS(669),
    [anon_sym_infix] = ACTIONS(669),
    [anon_sym_data] = ACTIONS(669),
    [anon_sym_newtype] = ACTIONS(669),
    [anon_sym_type] = ACTIONS(669),
    [sym__variable_pattern] = ACTIONS(671),
    [sym__constructor_pattern] = ACTIONS(671),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(671),
    [anon_sym_SQUOTE] = ACTIONS(669),
    [anon_sym_DQUOTE] = ACTIONS(669),
    [sym__integer_literal] = ACTIONS(669),
    [sym__octal_literal] = ACTIONS(669),
    [sym__hexidecimal_literal] = ACTIONS(669),
  },
  [544] = {
    [aux_sym_import_specification_repeat1] = STATE(574),
    [anon_sym_COMMA] = ACTIONS(703),
    [anon_sym_RPAREN] = ACTIONS(1397),
    [sym_comment] = ACTIONS(5),
  },
  [545] = {
    [anon_sym_COMMA] = ACTIONS(721),
    [anon_sym_RPAREN] = ACTIONS(1399),
    [sym_comment] = ACTIONS(5),
  },
  [546] = {
    [sym__identifier] = STATE(577),
    [sym_variable_identifier] = STATE(112),
    [sym_constructor_identifier] = STATE(112),
    [anon_sym_DOT_DOT] = ACTIONS(1401),
    [sym__variable_pattern] = ACTIONS(199),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [547] = {
    [anon_sym_LPAREN] = ACTIONS(1403),
    [anon_sym_COMMA] = ACTIONS(1405),
    [anon_sym_RPAREN] = ACTIONS(1405),
    [sym_comment] = ACTIONS(5),
  },
  [548] = {
    [anon_sym_RPAREN] = ACTIONS(1399),
    [sym_comment] = ACTIONS(5),
  },
  [549] = {
    [aux_sym_export_repeat1] = STATE(579),
    [anon_sym_COMMA] = ACTIONS(425),
    [anon_sym_RPAREN] = ACTIONS(1399),
    [sym_comment] = ACTIONS(5),
  },
  [550] = {
    [sym__layout_semicolon] = ACTIONS(1407),
    [anon_sym_SEMI] = ACTIONS(1409),
    [sym_comment] = ACTIONS(5),
  },
  [551] = {
    [sym__layout_semicolon] = ACTIONS(1411),
    [anon_sym_SEMI] = ACTIONS(1413),
    [sym_comment] = ACTIONS(5),
  },
  [552] = {
    [anon_sym_RBRACE] = ACTIONS(1415),
    [anon_sym_COMMA] = ACTIONS(1415),
    [sym_comment] = ACTIONS(5),
  },
  [553] = {
    [sym__layout_semicolon] = ACTIONS(1417),
    [anon_sym_SEMI] = ACTIONS(1419),
    [anon_sym_PIPE] = ACTIONS(1419),
    [anon_sym_deriving] = ACTIONS(1419),
    [sym_comment] = ACTIONS(5),
  },
  [554] = {
    [sym_field] = STATE(580),
    [sym_variable_identifier] = STATE(393),
    [sym__variable_pattern] = ACTIONS(623),
    [sym_comment] = ACTIONS(5),
  },
  [555] = {
    [anon_sym_COMMA] = ACTIONS(1421),
    [anon_sym_COLON_COLON] = ACTIONS(1421),
    [sym_comment] = ACTIONS(5),
  },
  [556] = {
    [sym__identifier] = STATE(581),
    [sym_variable_identifier] = STATE(112),
    [sym_constructor_identifier] = STATE(112),
    [sym__variable_pattern] = ACTIONS(199),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [557] = {
    [anon_sym_RBRACE] = ACTIONS(1423),
    [anon_sym_COMMA] = ACTIONS(1423),
    [sym_comment] = ACTIONS(5),
  },
  [558] = {
    [sym_variable_identifier] = STATE(582),
    [sym__variable_pattern] = ACTIONS(623),
    [sym_comment] = ACTIONS(5),
  },
  [559] = {
    [sym_strict] = STATE(583),
    [sym__identifier] = STATE(583),
    [sym_variable_identifier] = STATE(112),
    [sym_constructor_identifier] = STATE(112),
    [anon_sym_BANG] = ACTIONS(1304),
    [sym__variable_pattern] = ACTIONS(199),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [560] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(1425),
  },
  [561] = {
    [sym__layout_semicolon] = ACTIONS(297),
    [anon_sym_SEMI] = ACTIONS(299),
    [sym__variable_pattern] = ACTIONS(299),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(301),
    [anon_sym_SQUOTE] = ACTIONS(299),
    [anon_sym_DQUOTE] = ACTIONS(299),
    [sym__integer_literal] = ACTIONS(299),
    [sym__octal_literal] = ACTIONS(299),
    [sym__hexidecimal_literal] = ACTIONS(299),
  },
  [562] = {
    [sym__gap] = STATE(166),
    [sym__graphic] = STATE(166),
    [sym__small] = STATE(72),
    [sym__large] = STATE(72),
    [sym__symbol] = STATE(72),
    [sym__special] = STATE(72),
    [sym__escape] = STATE(166),
    [anon_sym_SEMI] = ACTIONS(105),
    [anon_sym_LBRACE] = ACTIONS(105),
    [anon_sym_RBRACE] = ACTIONS(105),
    [anon_sym_LPAREN] = ACTIONS(105),
    [anon_sym_RPAREN] = ACTIONS(105),
    [anon_sym_EQ] = ACTIONS(107),
    [anon_sym_TILDE] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(105),
    [anon_sym_RBRACK] = ACTIONS(105),
    [anon_sym_DASH] = ACTIONS(107),
    [anon_sym_AT] = ACTIONS(107),
    [anon_sym__] = ACTIONS(109),
    [anon_sym_BQUOTE] = ACTIONS(105),
    [anon_sym_COLON] = ACTIONS(107),
    [anon_sym_PIPE] = ACTIONS(107),
    [anon_sym_BANG] = ACTIONS(107),
    [anon_sym_DOT] = ACTIONS(107),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(321),
    [anon_sym_DQUOTE] = ACTIONS(1427),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(115),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(109),
    [sym__ascii_large] = ACTIONS(117),
    [anon_sym_POUND] = ACTIONS(107),
    [anon_sym_DOLLAR] = ACTIONS(107),
    [anon_sym_PERCENT] = ACTIONS(107),
    [anon_sym_AMP] = ACTIONS(107),
    [anon_sym_1] = ACTIONS(107),
    [anon_sym_PLUS] = ACTIONS(107),
    [anon_sym_SLASH] = ACTIONS(107),
    [anon_sym_LT] = ACTIONS(107),
    [anon_sym_GT] = ACTIONS(107),
    [anon_sym_QMARK] = ACTIONS(107),
    [anon_sym_CARET] = ACTIONS(107),
    [anon_sym_BSLASH] = ACTIONS(119),
    [sym__space] = ACTIONS(121),
    [sym__newline] = ACTIONS(121),
    [sym__tab] = ACTIONS(121),
    [sym__vertical_tab] = ACTIONS(121),
  },
  [563] = {
    [sym__layout_semicolon] = ACTIONS(1130),
    [anon_sym_SEMI] = ACTIONS(1132),
    [sym__variable_pattern] = ACTIONS(1132),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1134),
    [anon_sym_SQUOTE] = ACTIONS(1132),
    [anon_sym_DQUOTE] = ACTIONS(1132),
    [sym__integer_literal] = ACTIONS(1132),
    [sym__octal_literal] = ACTIONS(1132),
    [sym__hexidecimal_literal] = ACTIONS(1132),
  },
  [564] = {
    [anon_sym_RBRACE] = ACTIONS(1429),
    [anon_sym_COMMA] = ACTIONS(1429),
    [sym_comment] = ACTIONS(5),
  },
  [565] = {
    [anon_sym_LPAREN] = ACTIONS(1363),
    [anon_sym_COMMA] = ACTIONS(1363),
    [anon_sym_RPAREN] = ACTIONS(1363),
    [anon_sym_LBRACK] = ACTIONS(1363),
    [anon_sym_RBRACK] = ACTIONS(1363),
    [anon_sym_DASH_GT] = ACTIONS(1363),
    [sym_unit_type] = ACTIONS(1363),
    [sym_list_constructor] = ACTIONS(1363),
    [sym_function_constructor] = ACTIONS(1363),
    [sym__variable_pattern] = ACTIONS(1363),
    [sym__constructor_pattern] = ACTIONS(1431),
    [sym_module_identifier] = ACTIONS(1431),
    [sym_comment] = ACTIONS(5),
  },
  [566] = {
    [anon_sym_LPAREN] = ACTIONS(1373),
    [anon_sym_COMMA] = ACTIONS(1373),
    [anon_sym_RPAREN] = ACTIONS(1373),
    [anon_sym_LBRACK] = ACTIONS(1373),
    [anon_sym_RBRACK] = ACTIONS(1373),
    [anon_sym_DASH_GT] = ACTIONS(1373),
    [sym_unit_type] = ACTIONS(1373),
    [sym_list_constructor] = ACTIONS(1373),
    [sym_function_constructor] = ACTIONS(1373),
    [sym__variable_pattern] = ACTIONS(1373),
    [sym__constructor_pattern] = ACTIONS(1433),
    [sym_module_identifier] = ACTIONS(1433),
    [sym_comment] = ACTIONS(5),
  },
  [567] = {
    [sym_variable_identifier] = STATE(273),
    [anon_sym_LPAREN] = ACTIONS(1385),
    [anon_sym_COMMA] = ACTIONS(1385),
    [anon_sym_RPAREN] = ACTIONS(1385),
    [anon_sym_LBRACK] = ACTIONS(1385),
    [anon_sym_RBRACK] = ACTIONS(1385),
    [anon_sym_DASH_GT] = ACTIONS(1385),
    [sym_unit_type] = ACTIONS(1385),
    [sym_list_constructor] = ACTIONS(1385),
    [sym_function_constructor] = ACTIONS(1385),
    [sym__variable_pattern] = ACTIONS(255),
    [sym__constructor_pattern] = ACTIONS(1435),
    [sym_module_identifier] = ACTIONS(1435),
    [sym_comment] = ACTIONS(5),
  },
  [568] = {
    [sym_variable_identifier] = STATE(152),
    [aux_sym_type_class_repeat1] = STATE(586),
    [anon_sym_LPAREN] = ACTIONS(1385),
    [anon_sym_COMMA] = ACTIONS(1385),
    [anon_sym_RPAREN] = ACTIONS(1385),
    [anon_sym_LBRACK] = ACTIONS(1385),
    [anon_sym_RBRACK] = ACTIONS(1385),
    [anon_sym_DASH_GT] = ACTIONS(1385),
    [sym_unit_type] = ACTIONS(1385),
    [sym_list_constructor] = ACTIONS(1385),
    [sym_function_constructor] = ACTIONS(1385),
    [sym__variable_pattern] = ACTIONS(255),
    [sym__constructor_pattern] = ACTIONS(1435),
    [sym_module_identifier] = ACTIONS(1435),
    [sym_comment] = ACTIONS(5),
  },
  [569] = {
    [anon_sym_COMMA] = ACTIONS(1437),
    [anon_sym_RPAREN] = ACTIONS(1437),
    [sym_comment] = ACTIONS(5),
  },
  [570] = {
    [anon_sym_LPAREN] = ACTIONS(1439),
    [anon_sym_LBRACK] = ACTIONS(1439),
    [sym_unit_type] = ACTIONS(1439),
    [sym_list_constructor] = ACTIONS(1439),
    [sym_function_constructor] = ACTIONS(1439),
    [sym__variable_pattern] = ACTIONS(1439),
    [sym__constructor_pattern] = ACTIONS(1270),
    [sym_module_identifier] = ACTIONS(1270),
    [sym_comment] = ACTIONS(5),
  },
  [571] = {
    [sym_variable_identifier] = STATE(456),
    [sym__layout_semicolon] = ACTIONS(1441),
    [anon_sym_SEMI] = ACTIONS(1443),
    [anon_sym_DASH_GT] = ACTIONS(1443),
    [sym__variable_pattern] = ACTIONS(805),
    [sym_comment] = ACTIONS(5),
  },
  [572] = {
    [anon_sym_COMMA] = ACTIONS(1445),
    [anon_sym_RPAREN] = ACTIONS(1445),
    [sym_comment] = ACTIONS(5),
  },
  [573] = {
    [sym__layout_semicolon] = ACTIONS(1447),
    [anon_sym_SEMI] = ACTIONS(1449),
    [sym_comment] = ACTIONS(5),
  },
  [574] = {
    [anon_sym_COMMA] = ACTIONS(1008),
    [anon_sym_RPAREN] = ACTIONS(1451),
    [sym_comment] = ACTIONS(5),
  },
  [575] = {
    [aux_sym_import_specification_repeat1] = STATE(588),
    [anon_sym_COMMA] = ACTIONS(703),
    [anon_sym_RPAREN] = ACTIONS(1451),
    [sym_comment] = ACTIONS(5),
  },
  [576] = {
    [anon_sym_RPAREN] = ACTIONS(1453),
    [sym_comment] = ACTIONS(5),
  },
  [577] = {
    [aux_sym_export_repeat1] = STATE(590),
    [anon_sym_COMMA] = ACTIONS(425),
    [anon_sym_RPAREN] = ACTIONS(1453),
    [sym_comment] = ACTIONS(5),
  },
  [578] = {
    [sym__identifier] = STATE(592),
    [sym_variable_identifier] = STATE(112),
    [sym_constructor_identifier] = STATE(112),
    [anon_sym_DOT_DOT] = ACTIONS(1455),
    [sym__variable_pattern] = ACTIONS(199),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [579] = {
    [anon_sym_COMMA] = ACTIONS(721),
    [anon_sym_RPAREN] = ACTIONS(1457),
    [sym_comment] = ACTIONS(5),
  },
  [580] = {
    [anon_sym_RBRACE] = ACTIONS(1459),
    [anon_sym_COMMA] = ACTIONS(1459),
    [sym_comment] = ACTIONS(5),
  },
  [581] = {
    [anon_sym_RBRACE] = ACTIONS(1072),
    [anon_sym_COMMA] = ACTIONS(1072),
    [sym_comment] = ACTIONS(5),
  },
  [582] = {
    [anon_sym_COMMA] = ACTIONS(1461),
    [anon_sym_COLON_COLON] = ACTIONS(1461),
    [sym_comment] = ACTIONS(5),
  },
  [583] = {
    [anon_sym_RBRACE] = ACTIONS(1463),
    [anon_sym_COMMA] = ACTIONS(1463),
    [sym_comment] = ACTIONS(5),
  },
  [584] = {
    [sym__layout_semicolon] = ACTIONS(515),
    [anon_sym_SEMI] = ACTIONS(517),
    [sym__variable_pattern] = ACTIONS(517),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(519),
    [anon_sym_SQUOTE] = ACTIONS(517),
    [anon_sym_DQUOTE] = ACTIONS(517),
    [sym__integer_literal] = ACTIONS(517),
    [sym__octal_literal] = ACTIONS(517),
    [sym__hexidecimal_literal] = ACTIONS(517),
  },
  [585] = {
    [sym__layout_semicolon] = ACTIONS(547),
    [anon_sym_SEMI] = ACTIONS(549),
    [sym__variable_pattern] = ACTIONS(549),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(551),
    [anon_sym_SQUOTE] = ACTIONS(549),
    [anon_sym_DQUOTE] = ACTIONS(549),
    [sym__integer_literal] = ACTIONS(549),
    [sym__octal_literal] = ACTIONS(549),
    [sym__hexidecimal_literal] = ACTIONS(549),
  },
  [586] = {
    [sym_variable_identifier] = STATE(273),
    [anon_sym_LPAREN] = ACTIONS(1443),
    [anon_sym_COMMA] = ACTIONS(1443),
    [anon_sym_RPAREN] = ACTIONS(1443),
    [anon_sym_LBRACK] = ACTIONS(1443),
    [anon_sym_RBRACK] = ACTIONS(1443),
    [anon_sym_DASH_GT] = ACTIONS(1443),
    [sym_unit_type] = ACTIONS(1443),
    [sym_list_constructor] = ACTIONS(1443),
    [sym_function_constructor] = ACTIONS(1443),
    [sym__variable_pattern] = ACTIONS(255),
    [sym__constructor_pattern] = ACTIONS(1465),
    [sym_module_identifier] = ACTIONS(1465),
    [sym_comment] = ACTIONS(5),
  },
  [587] = {
    [sym__layout_semicolon] = ACTIONS(1467),
    [anon_sym_SEMI] = ACTIONS(1469),
    [sym_comment] = ACTIONS(5),
  },
  [588] = {
    [anon_sym_COMMA] = ACTIONS(1008),
    [anon_sym_RPAREN] = ACTIONS(1471),
    [sym_comment] = ACTIONS(5),
  },
  [589] = {
    [anon_sym_COMMA] = ACTIONS(1473),
    [anon_sym_RPAREN] = ACTIONS(1473),
    [sym_comment] = ACTIONS(5),
  },
  [590] = {
    [anon_sym_COMMA] = ACTIONS(721),
    [anon_sym_RPAREN] = ACTIONS(1475),
    [sym_comment] = ACTIONS(5),
  },
  [591] = {
    [anon_sym_RPAREN] = ACTIONS(1475),
    [sym_comment] = ACTIONS(5),
  },
  [592] = {
    [aux_sym_export_repeat1] = STATE(596),
    [anon_sym_COMMA] = ACTIONS(425),
    [anon_sym_RPAREN] = ACTIONS(1475),
    [sym_comment] = ACTIONS(5),
  },
  [593] = {
    [aux_sym_import_specification_repeat1] = STATE(597),
    [anon_sym_COMMA] = ACTIONS(703),
    [anon_sym_RPAREN] = ACTIONS(1471),
    [sym_comment] = ACTIONS(5),
  },
  [594] = {
    [sym__layout_semicolon] = ACTIONS(1477),
    [anon_sym_SEMI] = ACTIONS(1479),
    [sym_comment] = ACTIONS(5),
  },
  [595] = {
    [anon_sym_COMMA] = ACTIONS(1481),
    [anon_sym_RPAREN] = ACTIONS(1481),
    [sym_comment] = ACTIONS(5),
  },
  [596] = {
    [anon_sym_COMMA] = ACTIONS(721),
    [anon_sym_RPAREN] = ACTIONS(1483),
    [sym_comment] = ACTIONS(5),
  },
  [597] = {
    [anon_sym_COMMA] = ACTIONS(1008),
    [anon_sym_RPAREN] = ACTIONS(1485),
    [sym_comment] = ACTIONS(5),
  },
  [598] = {
    [anon_sym_COMMA] = ACTIONS(1487),
    [anon_sym_RPAREN] = ACTIONS(1487),
    [sym_comment] = ACTIONS(5),
  },
  [599] = {
    [sym__layout_semicolon] = ACTIONS(1489),
    [anon_sym_SEMI] = ACTIONS(1491),
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
  [31] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(12),
  [33] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(13),
  [35] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(14),
  [37] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(15),
  [39] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(16),
  [41] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(17),
  [43] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(28),
  [45] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(29),
  [47] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(30),
  [49] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(31),
  [51] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(32),
  [53] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(33),
  [55] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(34),
  [57] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(35),
  [59] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(41),
  [61] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(42),
  [63] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(43),
  [65] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(44),
  [67] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(49),
  [69] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(53),
  [71] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_identifier, 1),
  [73] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_identifier, 1),
  [75] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_identifier, 1),
  [77] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_identifier, 1),
  [79] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_identifier, 1),
  [81] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(59),
  [83] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [85] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__literal, 1),
  [87] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [89] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(60),
  [91] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(61),
  [93] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(62),
  [95] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [97] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(63),
  [99] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(64),
  [101] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(65),
  [103] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(66),
  [105] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(67),
  [107] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(68),
  [109] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(69),
  [111] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(70),
  [113] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(71),
  [115] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(72),
  [117] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(73),
  [119] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(74),
  [121] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(75),
  [123] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer, 1),
  [125] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_integer, 1),
  [127] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_integer, 1),
  [129] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [131] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__declaration, 1),
  [133] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__declaration, 1),
  [135] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(77),
  [137] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(77),
  [139] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(78),
  [141] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(80),
  [143] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_head, 1),
  [145] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(81),
  [147] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(82),
  [149] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(83),
  [151] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(84),
  [153] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(85),
  [155] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(86),
  [157] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(87),
  [159] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(88),
  [161] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(89),
  [163] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__variable, 1, .fragile = true),
  [165] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__variable, 1, .fragile = true),
  [167] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(97),
  [169] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [171] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__identifier, 1),
  [173] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [175] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 1),
  [177] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(99),
  [179] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(100),
  [181] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(103),
  [183] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 2),
  [185] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 2),
  [187] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(104),
  [189] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(105),
  [191] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(106),
  [193] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreign_import, 1),
  [195] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(108),
  [197] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(110),
  [199] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(85),
  [201] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_identifier, 1),
  [203] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(116),
  [205] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(117),
  [207] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(118),
  [209] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(119),
  [211] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(123),
  [213] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__variable_symbol, 1),
  [215] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__variable_symbol, 1),
  [217] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 1),
  [219] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_symbol, 1),
  [221] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(126),
  [223] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fixity, 2),
  [225] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 2),
  [227] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(129),
  [229] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__op, 1),
  [231] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__op, 1),
  [233] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 1, .fragile = true),
  [235] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_symbol, 1, .fragile = true),
  [237] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 2),
  [239] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 2),
  [241] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(136),
  [243] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(137),
  [245] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 1, .fragile = true, .alias_sequence_id = 1),
  [247] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_simple_type, 1, .fragile = true, .alias_sequence_id = 1),
  [249] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(142),
  [251] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 1, .fragile = true, .alias_sequence_id = 1),
  [253] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(146),
  [255] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(147),
  [257] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(150),
  [259] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(151),
  [261] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_qualified_variable_identifier, 2),
  [263] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_qualified_variable_identifier, 2),
  [265] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__special, 1),
  [267] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__symbol, 1),
  [269] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__small, 1),
  [271] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(153),
  [273] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__graphic, 1),
  [275] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__large, 1),
  [277] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(154),
  [279] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(155),
  [281] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(156),
  [283] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(157),
  [285] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(158),
  [287] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(159),
  [289] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__special, 1),
  [291] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__symbol, 1),
  [293] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__small, 1),
  [295] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 1),
  [297] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [299] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 2),
  [301] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [303] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__graphic, 1),
  [305] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__large, 1),
  [307] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(160),
  [309] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(161),
  [311] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(162),
  [313] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(163),
  [315] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(164),
  [317] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(165),
  [319] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__gap, 1),
  [321] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(166),
  [323] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(167),
  [325] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
  [327] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 2),
  [329] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
  [331] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_body, 1),
  [333] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_body, 1),
  [335] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(168),
  [337] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(169),
  [339] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(170),
  [341] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(171),
  [343] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_declaration, 2),
  [345] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_declaration, 2),
  [347] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(178),
  [349] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(179),
  [351] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(180),
  [353] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(187),
  [355] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_wildcard, 1),
  [357] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_wildcard, 1),
  [359] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__function_pattern, 1),
  [361] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__function_pattern, 1),
  [363] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(191),
  [365] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(192),
  [367] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_function_head_repeat1, 1),
  [369] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_function_head_repeat1, 1),
  [371] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(194),
  [373] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(195),
  [375] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_head, 2),
  [377] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(198),
  [379] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(199),
  [381] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(200),
  [383] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(12),
  [385] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(201),
  [387] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(202),
  [389] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(210),
  [391] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(210),
  [393] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(211),
  [395] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(214),
  [397] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(215),
  [399] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 3),
  [401] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 3),
  [403] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 3),
  [405] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(218),
  [407] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(220),
  [409] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(222),
  [411] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(223),
  [413] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_calling_convention, 1),
  [415] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_calling_convention, 1),
  [417] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(224),
  [419] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(225),
  [421] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default, 3),
  [423] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_default, 3),
  [425] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(230),
  [427] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(231),
  [429] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(233),
  [431] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(234),
  [433] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(237),
  [435] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 2),
  [437] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(241),
  [439] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(242),
  [441] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_class_repeat1, 1, .fragile = true),
  [443] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class, 2),
  [445] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 1, .fragile = true),
  [447] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(245),
  [449] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(248),
  [451] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__constructor_symbol, 1),
  [453] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__constructor_symbol, 1),
  [455] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_symbol_repeat1, 1),
  [457] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_symbol_repeat1, 1),
  [459] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 2),
  [461] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_symbol, 2),
  [463] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fixity, 3),
  [465] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 3),
  [467] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(251),
  [469] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 1),
  [471] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_variable_symbol_repeat1, 1),
  [473] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 2, .fragile = true),
  [475] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_symbol, 2, .fragile = true),
  [477] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 3),
  [479] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 3),
  [481] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(254),
  [483] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(257),
  [485] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(259),
  [487] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructors, 1),
  [489] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructors, 1),
  [491] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(261),
  [493] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor, 1),
  [495] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor, 1),
  [497] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(263),
  [499] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(264),
  [501] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 1, .fragile = true),
  [503] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 2, .alias_sequence_id = 2),
  [505] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_simple_type, 2, .alias_sequence_id = 2),
  [507] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 2, .alias_sequence_id = 2),
  [509] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(270),
  [511] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(274),
  [513] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(275),
  [515] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [517] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_char, 3),
  [519] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [521] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__char_escape, 1),
  [523] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__escape, 2),
  [525] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(277),
  [527] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(279),
  [529] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(281),
  [531] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__ascii, 1),
  [533] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__char_escape, 1),
  [535] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 2),
  [537] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(283),
  [539] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(285),
  [541] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(287),
  [543] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 1),
  [545] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 2),
  [547] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [549] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 3),
  [551] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [553] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(290),
  [555] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(291),
  [557] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_body, 2),
  [559] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_body, 2),
  [561] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [563] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
  [565] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [567] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__variable, 1, .fragile = true),
  [569] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_function_body_repeat1, 1),
  [571] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_function_body_repeat1, 1),
  [573] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_function_body_repeat1, 1),
  [575] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(298),
  [577] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(299),
  [579] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(300),
  [581] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(301),
  [583] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(302),
  [585] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(303),
  [587] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__pattern, 1),
  [589] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(308),
  [591] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(309),
  [593] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(310),
  [595] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(311),
  [597] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_irrefutable_pattern, 2),
  [599] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_irrefutable_pattern, 2),
  [601] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(315),
  [603] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(316),
  [605] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(317),
  [607] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(318),
  [609] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(320),
  [611] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_function_head_repeat1, 2),
  [613] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_function_head_repeat1, 2),
  [615] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(324),
  [617] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(325),
  [619] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(326),
  [621] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(327),
  [623] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(119),
  [625] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(328),
  [627] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(329),
  [629] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(335),
  [631] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(336),
  [633] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__generic_type_constructor, 1),
  [635] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__generic_type_constructor, 1),
  [637] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 1, .fragile = true, .alias_sequence_id = 1),
  [639] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type_constructors, 1, .fragile = true, .alias_sequence_id = 1),
  [641] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(344),
  [643] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(345),
  [645] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_signature, 3),
  [647] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_signature, 3),
  [649] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type, 1),
  [651] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type, 1),
  [653] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(348),
  [655] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(350),
  [657] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type, 1, .alias_sequence_id = 3),
  [659] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type, 1, .alias_sequence_id = 3),
  [661] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(351),
  [663] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 1, .fragile = true),
  [665] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type_constructors, 1, .fragile = true),
  [667] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 3),
  [669] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 3),
  [671] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 3),
  [673] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 2),
  [675] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(352),
  [677] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(353),
  [679] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(355),
  [681] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 1),
  [683] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(356),
  [685] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(356),
  [687] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_where_pattern, 2),
  [689] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 4),
  [691] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(360),
  [693] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 4),
  [695] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 4),
  [697] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 2),
  [699] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 2),
  [701] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(361),
  [703] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(362),
  [705] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(363),
  [707] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_safety, 1),
  [709] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_safety, 1),
  [711] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(367),
  [713] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreign, 4),
  [715] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreign, 4),
  [717] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default, 4),
  [719] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_default, 4),
  [721] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(372),
  [723] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(373),
  [725] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(375),
  [727] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(376),
  [729] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(377),
  [731] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(379),
  [733] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(380),
  [735] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(381),
  [737] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(381),
  [739] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 4),
  [741] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 4),
  [743] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_class_repeat1, 2),
  [745] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 2),
  [747] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(385),
  [749] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class_instance, 4),
  [751] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class_instance, 4),
  [753] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__op, 3),
  [755] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__op, 3),
  [757] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_symbol_repeat1, 2),
  [759] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_symbol_repeat1, 2),
  [761] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_fixity_repeat1, 2),
  [763] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fixity_repeat1, 2),
  [765] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fixity, 4),
  [767] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 4),
  [769] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 2),
  [771] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_variable_symbol_repeat1, 2),
  [773] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 4),
  [775] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 4),
  [777] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 2),
  [779] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 2),
  [781] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructors, 2),
  [783] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructors, 2),
  [785] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(391),
  [787] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(142),
  [789] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 1),
  [791] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat1, 1),
  [793] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 1),
  [795] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor, 2),
  [797] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor, 2),
  [799] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 2),
  [801] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 4),
  [803] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 4),
  [805] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(341),
  [807] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_synonym, 4),
  [809] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_synonym, 4),
  [811] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__cntrl, 1),
  [813] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__ascii, 2),
  [815] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat1, 1),
  [817] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__escape, 3),
  [819] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(399),
  [821] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat2, 1),
  [823] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(400),
  [825] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__cntrl, 1),
  [827] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 2),
  [829] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 1),
  [831] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 3),
  [833] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(401),
  [835] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 1),
  [837] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(402),
  [839] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_where_pattern, 2),
  [841] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(403),
  [843] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(404),
  [845] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(403),
  [847] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_do_expression, 2),
  [849] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_do_expression, 2),
  [851] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_expression, 2),
  [853] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_variable_identifier, 2),
  [855] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_general_constructor_repeat1, 1, .fragile = true),
  [857] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_general_constructor_repeat1, 1, .fragile = true),
  [859] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_general_constructor_repeat1, 1, .fragile = true),
  [861] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_general_constructor, 2),
  [863] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_general_constructor, 2),
  [865] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_general_constructor, 2),
  [867] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_body, 3),
  [869] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_body, 3),
  [871] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_function_body_repeat1, 2),
  [873] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_function_body_repeat1, 2),
  [875] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_function_body_repeat1, 2),
  [877] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parenthesized_pattern, 3),
  [879] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parenthesized_pattern, 3),
  [881] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__variable_symbol, 1),
  [883] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(417),
  [885] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 1),
  [887] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__op, 1),
  [889] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 1, .fragile = true),
  [891] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(424),
  [893] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(425),
  [895] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(426),
  [897] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_general_constructor_repeat1, 1, .fragile = true), REDUCE(aux_sym_type_class_repeat1, 1, .fragile = true),
  [900] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list_pattern, 3),
  [902] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_list_pattern, 3),
  [904] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_as_pattern, 3),
  [906] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_as_pattern, 3),
  [908] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__function_pattern, 3),
  [910] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__function_pattern, 3),
  [912] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(428),
  [914] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_labels, 1),
  [916] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(429),
  [918] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(431),
  [920] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(432),
  [922] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(434),
  [924] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(435),
  [926] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__generic_type_constructor, 1),
  [928] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(439),
  [930] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(442),
  [932] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(443),
  [934] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(445),
  [936] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(446),
  [938] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(448),
  [940] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 1, .fragile = true),
  [942] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 1, .fragile = true, .alias_sequence_id = 1),
  [944] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(449),
  [946] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(450),
  [948] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_list_repeat1, 1),
  [950] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_list_repeat1, 1),
  [952] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(452),
  [954] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type, 1),
  [956] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(453),
  [958] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type, 1, .alias_sequence_id = 3),
  [960] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(454),
  [962] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 2, .fragile = true, .alias_sequence_id = 1),
  [964] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type_constructors, 2, .fragile = true, .alias_sequence_id = 1),
  [966] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(457),
  [968] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 2, .fragile = true),
  [970] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_qualified_type_constructor, 2, .fragile = true),
  [972] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(460),
  [974] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_signature, 4),
  [976] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_signature, 4),
  [978] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 2),
  [980] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 3),
  [982] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(464),
  [984] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(465),
  [986] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(466),
  [988] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__declarations, 2),
  [990] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(468),
  [992] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(468),
  [994] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(469),
  [996] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(469),
  [998] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 5),
  [1000] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 5),
  [1002] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(472),
  [1004] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 3),
  [1006] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 3),
  [1008] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(475),
  [1010] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(476),
  [1012] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(477),
  [1014] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(479),
  [1016] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreign, 5),
  [1018] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreign, 5),
  [1020] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_export_repeat1, 2),
  [1022] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default, 5),
  [1024] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_default, 5),
  [1026] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_context_repeat1, 2),
  [1028] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 4),
  [1030] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(483),
  [1032] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 5),
  [1034] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 5),
  [1036] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class, 4),
  [1038] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__declarations, 2),
  [1040] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(485),
  [1042] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(485),
  [1044] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class_instance, 5),
  [1046] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class_instance, 5),
  [1048] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_fixity_repeat1, 3),
  [1050] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fixity_repeat1, 3),
  [1052] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 5),
  [1054] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 5),
  [1056] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(488),
  [1058] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 2),
  [1060] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructors_repeat1, 2),
  [1062] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(491),
  [1064] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(492),
  [1066] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(494),
  [1068] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(495),
  [1070] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_strict, 2),
  [1072] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_strict, 2),
  [1074] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_strict, 2),
  [1076] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 2),
  [1078] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat1, 2),
  [1080] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 2),
  [1082] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 5),
  [1084] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 5),
  [1086] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_new_constructor, 2),
  [1088] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_new_constructor, 2),
  [1090] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat1, 2),
  [1092] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat2, 2),
  [1094] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 2),
  [1096] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 2),
  [1098] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_list, 2),
  [1100] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_list, 2),
  [1102] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_statement_list, 2),
  [1104] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(498),
  [1106] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(498),
  [1108] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [1110] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [1112] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [1114] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(499),
  [1116] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(500),
  [1118] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(501),
  [1120] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(502),
  [1122] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(505),
  [1124] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(507),
  [1126] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(507),
  [1128] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(505),
  [1130] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_general_constructor_repeat1, 2),
  [1132] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_general_constructor_repeat1, 2),
  [1134] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_general_constructor_repeat1, 2),
  [1136] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(509),
  [1138] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tuple_pattern_repeat1, 2),
  [1140] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(510),
  [1142] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__constructor_symbol, 1),
  [1144] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_symbol_repeat1, 1),
  [1146] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 2),
  [1148] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__pattern, 3),
  [1150] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 1),
  [1152] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 2, .fragile = true),
  [1154] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_tuple_pattern, 4),
  [1156] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_tuple_pattern, 4),
  [1158] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(515),
  [1160] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__function_pattern, 4),
  [1162] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__function_pattern, 4),
  [1164] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_labels, 2),
  [1166] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(517),
  [1168] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(519),
  [1170] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(521),
  [1172] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tupling_constructor_repeat1, 1),
  [1174] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tupling_constructor, 3),
  [1176] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_tupling_constructor, 3),
  [1178] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(523),
  [1180] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(524),
  [1182] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(525),
  [1184] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 2, .fragile = true, .alias_sequence_id = 1),
  [1186] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 2, .fragile = true),
  [1188] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(528),
  [1190] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tuple, 3, .fragile = true), REDUCE(sym_parenthesized_constructor, 3, .fragile = true),
  [1193] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_tuple, 3, .fragile = true), REDUCE(sym_parenthesized_constructor, 3, .fragile = true),
  [1196] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(530),
  [1198] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(531),
  [1200] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(533),
  [1202] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(534),
  [1204] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(536),
  [1206] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 3),
  [1208] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 3),
  [1210] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_list_repeat1, 2),
  [1212] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_list_repeat1, 2),
  [1214] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_qualified_type_constructor_repeat1, 2),
  [1216] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_qualified_type_constructor_repeat1, 2),
  [1218] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 3, .fragile = true),
  [1220] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_qualified_type_constructor, 3, .fragile = true),
  [1222] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(538),
  [1224] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type, 3),
  [1226] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type, 3),
  [1228] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type, 3, .alias_sequence_id = 3),
  [1230] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type, 3, .alias_sequence_id = 3),
  [1232] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_exports_repeat1, 2),
  [1234] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 4),
  [1236] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(541),
  [1238] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__declarations, 3),
  [1240] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(543),
  [1242] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(543),
  [1244] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 6),
  [1246] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 6),
  [1248] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(544),
  [1250] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(546),
  [1252] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 2),
  [1254] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 4),
  [1256] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 4),
  [1258] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(548),
  [1260] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(550),
  [1262] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreign, 6),
  [1264] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreign, 6),
  [1266] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_export_repeat1, 3),
  [1268] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_context_repeat1, 3),
  [1270] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 5),
  [1272] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 6),
  [1274] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 6),
  [1276] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__declarations, 3),
  [1278] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class_instance, 6),
  [1280] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class_instance, 6),
  [1282] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 6),
  [1284] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 6),
  [1286] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 4),
  [1288] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 4),
  [1290] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(551),
  [1292] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 3),
  [1294] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructors_repeat1, 3),
  [1296] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fields, 3),
  [1298] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fields, 3),
  [1300] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(553),
  [1302] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(554),
  [1304] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(556),
  [1306] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(558),
  [1308] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(559),
  [1310] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 6),
  [1312] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 6),
  [1314] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
  [1316] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2),
  [1318] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
  [1320] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(560),
  [1322] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(561),
  [1324] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_list, 3),
  [1326] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_list, 3),
  [1328] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_statement_list, 3),
  [1330] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [1332] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [1334] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [1336] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_negative_literal, 4),
  [1338] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__op, 3),
  [1340] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_symbol_repeat1, 2),
  [1342] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 2),
  [1344] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tuple_pattern_repeat1, 3),
  [1346] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_labels_repeat1, 2),
  [1348] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_label, 3),
  [1350] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_tupling_constructor, 3),
  [1352] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(565),
  [1354] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_tuple, 3, .fragile = true), REDUCE(sym_parenthesized_constructor, 3, .fragile = true),
  [1357] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(566),
  [1359] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tupling_constructor_repeat1, 2),
  [1361] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tupling_constructor, 4),
  [1363] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_tupling_constructor, 4),
  [1365] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_list, 3),
  [1367] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 3, .fragile = true),
  [1369] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tuple_repeat1, 2),
  [1371] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tuple, 4),
  [1373] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_tuple, 4),
  [1375] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type, 3),
  [1377] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 4),
  [1379] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(570),
  [1381] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type, 3, .alias_sequence_id = 3),
  [1383] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 4, .fragile = true),
  [1385] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_qualified_type_constructor, 4, .fragile = true),
  [1387] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_qualified_type_constructor_repeat1, 3),
  [1389] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_qualified_type_constructor_repeat1, 3),
  [1391] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_exports_repeat1, 3),
  [1393] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 4),
  [1395] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(572),
  [1397] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(573),
  [1399] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(575),
  [1401] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(576),
  [1403] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(578),
  [1405] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 3),
  [1407] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 5),
  [1409] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 5),
  [1411] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 5),
  [1413] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 5),
  [1415] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fields_repeat1, 2),
  [1417] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fields, 4),
  [1419] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fields, 4),
  [1421] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_field_repeat1, 2),
  [1423] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field, 3),
  [1425] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(584),
  [1427] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(585),
  [1429] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_labels_repeat1, 3),
  [1431] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_tupling_constructor, 4),
  [1433] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_tuple, 4),
  [1435] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 4, .fragile = true),
  [1437] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tuple_repeat1, 3),
  [1439] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 5),
  [1441] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 5, .fragile = true),
  [1443] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_qualified_type_constructor, 5, .fragile = true),
  [1445] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 5),
  [1447] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 6),
  [1449] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 6),
  [1451] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(587),
  [1453] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(589),
  [1455] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(591),
  [1457] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(593),
  [1459] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fields_repeat1, 3),
  [1461] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_field_repeat1, 3),
  [1463] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field, 4),
  [1465] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 5, .fragile = true),
  [1467] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 7),
  [1469] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 7),
  [1471] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(594),
  [1473] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 5),
  [1475] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(595),
  [1477] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 8),
  [1479] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 8),
  [1481] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 6),
  [1483] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(598),
  [1485] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(599),
  [1487] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 7),
  [1489] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 9),
  [1491] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 9),
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
