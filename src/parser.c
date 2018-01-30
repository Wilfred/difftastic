#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 719
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
  sym_where = 142,
  sym__function_pattern = 143,
  sym_label_pattern = 144,
  sym_irrefutable_pattern = 145,
  sym_list_pattern = 146,
  sym_tuple_pattern = 147,
  sym_parenthesized_pattern = 148,
  sym__pattern = 149,
  sym_negative_literal = 150,
  sym_general_constructor = 151,
  sym_as_pattern = 152,
  sym_labels = 153,
  sym_label = 154,
  sym_wildcard = 155,
  sym__variable = 156,
  sym_qualified_variable_identifier = 157,
  sym__expression = 158,
  sym_foreign = 159,
  sym_foreign_import = 160,
  sym_calling_convention = 161,
  sym_safety = 162,
  sym_default = 163,
  sym_do_expression = 164,
  sym_statement_list = 165,
  sym__statement = 166,
  sym_type_class = 167,
  sym_type_class_instance = 168,
  sym_fixity = 169,
  sym__op = 170,
  sym_variable_symbol = 171,
  sym_constructor_symbol = 172,
  sym_type_signature = 173,
  sym_type = 174,
  sym__generic_type_constructor = 175,
  sym_tupling_constructor = 176,
  sym_tuple = 177,
  sym_list = 178,
  sym_parenthesized_constructor = 179,
  sym_algebraic_datatype = 180,
  sym_context = 181,
  sym_constructors = 182,
  sym_constructor = 183,
  sym_deriving = 184,
  sym_newtype = 185,
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
  aux_sym_fixity_repeat1 = 222,
  aux_sym_variable_symbol_repeat1 = 223,
  aux_sym_constructor_symbol_repeat1 = 224,
  aux_sym_tupling_constructor_repeat1 = 225,
  aux_sym_tuple_repeat1 = 226,
  aux_sym_list_repeat1 = 227,
  aux_sym_context_repeat1 = 228,
  aux_sym_constructors_repeat1 = 229,
  aux_sym_constructor_repeat1 = 230,
  aux_sym_constructor_repeat2 = 231,
  aux_sym_field_repeat1 = 232,
  aux_sym_simple_type_repeat1 = 233,
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
  [sym_where] = "where",
  [sym__function_pattern] = "_function_pattern",
  [sym_label_pattern] = "label_pattern",
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
  [sym_constructors] = "constructors",
  [sym_constructor] = "constructor",
  [sym_deriving] = "deriving",
  [sym_newtype] = "newtype",
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
  [aux_sym_fixity_repeat1] = "fixity_repeat1",
  [aux_sym_variable_symbol_repeat1] = "variable_symbol_repeat1",
  [aux_sym_constructor_symbol_repeat1] = "constructor_symbol_repeat1",
  [aux_sym_tupling_constructor_repeat1] = "tupling_constructor_repeat1",
  [aux_sym_tuple_repeat1] = "tuple_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
  [aux_sym_context_repeat1] = "context_repeat1",
  [aux_sym_constructors_repeat1] = "constructors_repeat1",
  [aux_sym_constructor_repeat1] = "constructor_repeat1",
  [aux_sym_constructor_repeat2] = "constructor_repeat2",
  [aux_sym_field_repeat1] = "field_repeat1",
  [aux_sym_simple_type_repeat1] = "simple_type_repeat1",
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
  [sym_where] = {
    .visible = true,
    .named = true,
  },
  [sym__function_pattern] = {
    .visible = false,
    .named = true,
  },
  [sym_label_pattern] = {
    .visible = true,
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
  [aux_sym_constructor_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_field_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_simple_type_repeat1] = {
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
      if (lookahead == '}')
        ADVANCE(170);
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
      if (lookahead == '}')
        ADVANCE(85);
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
      if (lookahead == '}')
        ADVANCE(170);
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
        ADVANCE(459);
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
      if (lookahead == '-')
        ADVANCE(403);
      if (lookahead == '.')
        ADVANCE(256);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == '0')
        ADVANCE(460);
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
      if (lookahead == '\\')
        SKIP(462);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(454);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(461);
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
      if (lookahead == '=')
        ADVANCE(192);
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
      if (lookahead == '\n')
        ADVANCE(455);
      if (lookahead == '\r')
        ADVANCE(459);
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
      if (lookahead == '-')
        ADVANCE(403);
      if (lookahead == '.')
        ADVANCE(256);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == '0')
        ADVANCE(460);
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
      if (lookahead == '\\')
        SKIP(462);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(454);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(461);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 460:
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
        ADVANCE(461);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym__integer_literal);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(461);
      END_STATE();
    case 462:
      if (lookahead == 'n')
        SKIP(454);
      END_STATE();
    case 463:
      if (lookahead == '\n')
        ADVANCE(464);
      if (lookahead == '\r')
        ADVANCE(468);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(254);
      if (lookahead == '-')
        ADVANCE(469);
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
        SKIP(470);
      if (lookahead == '_')
        ADVANCE(471);
      if (lookahead == '~')
        ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(463);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 464:
      if (lookahead == '\n')
        ADVANCE(464);
      if (lookahead == '\r')
        ADVANCE(464);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == '-')
        ADVANCE(465);
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
        ADVANCE(466);
      if (lookahead == '_')
        ADVANCE(467);
      if (lookahead == '~')
        ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(464);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 465:
      if (lookahead == '-')
        ADVANCE(25);
      if (lookahead == '>')
        ADVANCE(30);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 466:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(464);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 467:
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
    case 468:
      if (lookahead == '\n')
        ADVANCE(464);
      if (lookahead == '\r')
        ADVANCE(468);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(254);
      if (lookahead == '-')
        ADVANCE(469);
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
        SKIP(470);
      if (lookahead == '_')
        ADVANCE(471);
      if (lookahead == '~')
        ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(463);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 469:
      if (lookahead == '-')
        ADVANCE(29);
      if (lookahead == '>')
        ADVANCE(115);
      END_STATE();
    case 470:
      if (lookahead == 'n')
        SKIP(463);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '\'')
        ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 472:
      if (lookahead == '\n')
        ADVANCE(473);
      if (lookahead == '\r')
        ADVANCE(475);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ':')
        ADVANCE(262);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(476);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(472);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 473:
      if (lookahead == '\n')
        ADVANCE(473);
      if (lookahead == '\r')
        ADVANCE(473);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(474);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(473);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 474:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(473);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 475:
      if (lookahead == '\n')
        ADVANCE(473);
      if (lookahead == '\r')
        ADVANCE(475);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ':')
        ADVANCE(262);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(476);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(472);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 476:
      if (lookahead == 'n')
        SKIP(472);
      END_STATE();
    case 477:
      if (lookahead == '\n')
        ADVANCE(478);
      if (lookahead == '\r')
        ADVANCE(487);
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
        SKIP(488);
      if (lookahead == 'd')
        ADVANCE(489);
      if (lookahead == 'w')
        ADVANCE(491);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(477);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      END_STATE();
    case 478:
      if (lookahead == '\n')
        ADVANCE(478);
      if (lookahead == '\r')
        ADVANCE(478);
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
        ADVANCE(479);
      if (lookahead == 'd')
        ADVANCE(480);
      if (lookahead == 'w')
        ADVANCE(482);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(478);
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
    case 479:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(478);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 481:
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
    case 482:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'h')
        ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 486:
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
    case 487:
      if (lookahead == '\n')
        ADVANCE(478);
      if (lookahead == '\r')
        ADVANCE(487);
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
        SKIP(488);
      if (lookahead == 'd')
        ADVANCE(489);
      if (lookahead == 'w')
        ADVANCE(491);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(477);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      END_STATE();
    case 488:
      if (lookahead == 'n')
        SKIP(477);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'o')
        ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '\'')
        ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'h')
        ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'e')
        ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'r')
        ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'e')
        ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_where);
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
        ADVANCE(471);
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
        ADVANCE(467);
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
        ADVANCE(471);
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
        ADVANCE(471);
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
        ADVANCE(467);
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
        ADVANCE(471);
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
        ADVANCE(546);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ':')
        ADVANCE(262);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(547);
      if (lookahead == 'd')
        ADVANCE(548);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(535);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 536:
      if (lookahead == '\n')
        ADVANCE(536);
      if (lookahead == '\r')
        ADVANCE(536);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(39);
      if (lookahead == '\\')
        ADVANCE(537);
      if (lookahead == 'd')
        ADVANCE(538);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(536);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
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
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(539);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(540);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'v')
        ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 545:
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
    case 546:
      if (lookahead == '\n')
        ADVANCE(536);
      if (lookahead == '\r')
        ADVANCE(546);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ':')
        ADVANCE(262);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(547);
      if (lookahead == 'd')
        ADVANCE(548);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(535);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 547:
      if (lookahead == 'n')
        SKIP(535);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'e')
        ADVANCE(549);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'r')
        ADVANCE(550);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'i')
        ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'v')
        ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'i')
        ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'n')
        ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'g')
        ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '\'')
        ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 556:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(557);
      if (lookahead == '\r')
        ADVANCE(559);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == '\\')
        SKIP(560);
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
        SKIP(556);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      END_STATE();
    case 557:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(557);
      if (lookahead == '\r')
        ADVANCE(557);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == '\\')
        ADVANCE(558);
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
        ADVANCE(557);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      ADVANCE(8);
      END_STATE();
    case 558:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(557);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 559:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(557);
      if (lookahead == '\r')
        ADVANCE(559);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == '\\')
        SKIP(560);
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
        SKIP(556);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      END_STATE();
    case 560:
      if (lookahead == 'n')
        SKIP(556);
      END_STATE();
    case 561:
      if (lookahead == '\n')
        ADVANCE(562);
      if (lookahead == '\r')
        ADVANCE(572);
      if (lookahead == '(')
        ADVANCE(254);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(573);
      if (lookahead == 'a')
        ADVANCE(574);
      if (lookahead == 'h')
        ADVANCE(576);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(561);
      END_STATE();
    case 562:
      if (lookahead == '\n')
        ADVANCE(562);
      if (lookahead == '\r')
        ADVANCE(562);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(563);
      if (lookahead == 'a')
        ADVANCE(564);
      if (lookahead == 'h')
        ADVANCE(566);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(562);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 563:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(562);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 564:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(565);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 566:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(567);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 567:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(568);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 568:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(569);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 569:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(570);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 570:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(571);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_hiding);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 572:
      if (lookahead == '\n')
        ADVANCE(562);
      if (lookahead == '\r')
        ADVANCE(572);
      if (lookahead == '(')
        ADVANCE(254);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(573);
      if (lookahead == 'a')
        ADVANCE(574);
      if (lookahead == 'h')
        ADVANCE(576);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(561);
      END_STATE();
    case 573:
      if (lookahead == 'n')
        SKIP(561);
      END_STATE();
    case 574:
      if (lookahead == 's')
        ADVANCE(575);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 576:
      if (lookahead == 'i')
        ADVANCE(577);
      END_STATE();
    case 577:
      if (lookahead == 'd')
        ADVANCE(578);
      END_STATE();
    case 578:
      if (lookahead == 'i')
        ADVANCE(579);
      END_STATE();
    case 579:
      if (lookahead == 'n')
        ADVANCE(580);
      END_STATE();
    case 580:
      if (lookahead == 'g')
        ADVANCE(581);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_hiding);
      END_STATE();
    case 582:
      if (lookahead == '\n')
        ADVANCE(583);
      if (lookahead == '\r')
        ADVANCE(586);
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
        ADVANCE(469);
      if (lookahead == '.')
        ADVANCE(587);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(588);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(582);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 583:
      if (lookahead == '\n')
        ADVANCE(583);
      if (lookahead == '\r')
        ADVANCE(583);
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
        ADVANCE(465);
      if (lookahead == '.')
        ADVANCE(584);
      if (lookahead == '=')
        ADVANCE(39);
      if (lookahead == '\\')
        ADVANCE(585);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(583);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 584:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(32);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 585:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(583);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 586:
      if (lookahead == '\n')
        ADVANCE(583);
      if (lookahead == '\r')
        ADVANCE(586);
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
        ADVANCE(469);
      if (lookahead == '.')
        ADVANCE(587);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(588);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(582);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 587:
      if (lookahead == '.')
        ADVANCE(117);
      END_STATE();
    case 588:
      if (lookahead == 'n')
        SKIP(582);
      END_STATE();
    case 589:
      if (lookahead == '\n')
        ADVANCE(590);
      if (lookahead == '\r')
        ADVANCE(592);
      if (lookahead == '!')
        ADVANCE(99);
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
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(593);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == 'w')
        ADVANCE(491);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(589);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 590:
      if (lookahead == '\n')
        ADVANCE(590);
      if (lookahead == '\r')
        ADVANCE(590);
      if (lookahead == '!')
        ADVANCE(9);
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
        ADVANCE(39);
      if (lookahead == '\\')
        ADVANCE(591);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == 'w')
        ADVANCE(482);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(590);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 591:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(590);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 592:
      if (lookahead == '\n')
        ADVANCE(590);
      if (lookahead == '\r')
        ADVANCE(592);
      if (lookahead == '!')
        ADVANCE(99);
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
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(593);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == 'w')
        ADVANCE(491);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(589);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 593:
      if (lookahead == 'n')
        SKIP(589);
      END_STATE();
    case 594:
      if (lookahead == '\n')
        ADVANCE(595);
      if (lookahead == '\r')
        ADVANCE(597);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(254);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(469);
      if (lookahead == ':')
        ADVANCE(262);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(598);
      if (lookahead == 'w')
        ADVANCE(491);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(594);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 595:
      if (lookahead == '\n')
        ADVANCE(595);
      if (lookahead == '\r')
        ADVANCE(595);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(465);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == '=')
        ADVANCE(39);
      if (lookahead == '\\')
        ADVANCE(596);
      if (lookahead == 'w')
        ADVANCE(482);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(595);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 596:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(595);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 597:
      if (lookahead == '\n')
        ADVANCE(595);
      if (lookahead == '\r')
        ADVANCE(597);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(254);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(469);
      if (lookahead == ':')
        ADVANCE(262);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(598);
      if (lookahead == 'w')
        ADVANCE(491);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(594);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 598:
      if (lookahead == 'n')
        SKIP(594);
      END_STATE();
    case 599:
      if (lookahead == '\n')
        ADVANCE(600);
      if (lookahead == '\r')
        ADVANCE(602);
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
        SKIP(603);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(599);
      END_STATE();
    case 600:
      if (lookahead == '\n')
        ADVANCE(600);
      if (lookahead == '\r')
        ADVANCE(600);
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
        ADVANCE(601);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == 8902)
        ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(600);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 601:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(600);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 602:
      if (lookahead == '\n')
        ADVANCE(600);
      if (lookahead == '\r')
        ADVANCE(602);
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
        SKIP(603);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(599);
      END_STATE();
    case 603:
      if (lookahead == 'n')
        SKIP(599);
      END_STATE();
    case 604:
      if (lookahead == '\n')
        ADVANCE(605);
      if (lookahead == '\r')
        ADVANCE(607);
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
        SKIP(608);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(604);
      END_STATE();
    case 605:
      if (lookahead == '\n')
        ADVANCE(605);
      if (lookahead == '\r')
        ADVANCE(605);
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
        ADVANCE(606);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == 8902)
        ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(605);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 606:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(605);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 607:
      if (lookahead == '\n')
        ADVANCE(605);
      if (lookahead == '\r')
        ADVANCE(607);
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
        SKIP(608);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(604);
      END_STATE();
    case 608:
      if (lookahead == 'n')
        SKIP(604);
      END_STATE();
    case 609:
      if (lookahead == '\n')
        ADVANCE(610);
      if (lookahead == '\r')
        ADVANCE(612);
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
        SKIP(613);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '_')
        ADVANCE(471);
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
        SKIP(609);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 610:
      if (lookahead == '\n')
        ADVANCE(610);
      if (lookahead == '\r')
        ADVANCE(610);
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
        ADVANCE(611);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(467);
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
        ADVANCE(610);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 611:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(610);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 612:
      if (lookahead == '\n')
        ADVANCE(610);
      if (lookahead == '\r')
        ADVANCE(612);
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
        SKIP(613);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '_')
        ADVANCE(471);
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
        SKIP(609);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 613:
      if (lookahead == 'n')
        SKIP(609);
      END_STATE();
    case 614:
      if (lookahead == '\n')
        ADVANCE(615);
      if (lookahead == '\r')
        ADVANCE(617);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(618);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(614);
      END_STATE();
    case 615:
      if (lookahead == '\n')
        ADVANCE(615);
      if (lookahead == '\r')
        ADVANCE(615);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(616);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(615);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 616:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(615);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 617:
      if (lookahead == '\n')
        ADVANCE(615);
      if (lookahead == '\r')
        ADVANCE(617);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(618);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(614);
      END_STATE();
    case 618:
      if (lookahead == 'n')
        SKIP(614);
      END_STATE();
    case 619:
      if (lookahead == '\n')
        ADVANCE(620);
      if (lookahead == '\r')
        ADVANCE(622);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(254);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(623);
      if (lookahead == 'd')
        ADVANCE(548);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(619);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 620:
      if (lookahead == '\n')
        ADVANCE(620);
      if (lookahead == '\r')
        ADVANCE(620);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(39);
      if (lookahead == '\\')
        ADVANCE(621);
      if (lookahead == 'd')
        ADVANCE(538);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(620);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
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
      if (lookahead == '\n')
        ADVANCE(620);
      if (lookahead == '\r')
        ADVANCE(622);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(254);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(623);
      if (lookahead == 'd')
        ADVANCE(548);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(619);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 623:
      if (lookahead == 'n')
        SKIP(619);
      END_STATE();
    case 624:
      if (lookahead == '\n')
        ADVANCE(625);
      if (lookahead == '\r')
        ADVANCE(635);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(636);
      if (lookahead == 'd')
        ADVANCE(637);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(624);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      END_STATE();
    case 625:
      if (lookahead == '\n')
        ADVANCE(625);
      if (lookahead == '\r')
        ADVANCE(625);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(39);
      if (lookahead == '\\')
        ADVANCE(626);
      if (lookahead == 'd')
        ADVANCE(627);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(625);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 626:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(625);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 627:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(628);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 628:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(629);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 629:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(630);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 630:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'v')
        ADVANCE(631);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 631:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(632);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 632:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(633);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 633:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(634);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 635:
      if (lookahead == '\n')
        ADVANCE(625);
      if (lookahead == '\r')
        ADVANCE(635);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(636);
      if (lookahead == 'd')
        ADVANCE(637);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(624);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      END_STATE();
    case 636:
      if (lookahead == 'n')
        SKIP(624);
      END_STATE();
    case 637:
      if (lookahead == 'e')
        ADVANCE(638);
      END_STATE();
    case 638:
      if (lookahead == 'r')
        ADVANCE(639);
      END_STATE();
    case 639:
      if (lookahead == 'i')
        ADVANCE(640);
      END_STATE();
    case 640:
      if (lookahead == 'v')
        ADVANCE(641);
      END_STATE();
    case 641:
      if (lookahead == 'i')
        ADVANCE(642);
      END_STATE();
    case 642:
      if (lookahead == 'n')
        ADVANCE(643);
      END_STATE();
    case 643:
      if (lookahead == 'g')
        ADVANCE(644);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_deriving);
      END_STATE();
    case 645:
      if (lookahead == '\n')
        ADVANCE(646);
      if (lookahead == '\r')
        ADVANCE(648);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(254);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(649);
      if (lookahead == 'd')
        ADVANCE(548);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(645);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 646:
      if (lookahead == '\n')
        ADVANCE(646);
      if (lookahead == '\r')
        ADVANCE(646);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(39);
      if (lookahead == '\\')
        ADVANCE(647);
      if (lookahead == 'd')
        ADVANCE(538);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(646);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 647:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(646);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 648:
      if (lookahead == '\n')
        ADVANCE(646);
      if (lookahead == '\r')
        ADVANCE(648);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(254);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(649);
      if (lookahead == 'd')
        ADVANCE(548);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(645);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 649:
      if (lookahead == 'n')
        SKIP(645);
      END_STATE();
    case 650:
      if (lookahead == '\n')
        ADVANCE(651);
      if (lookahead == '\r')
        ADVANCE(653);
      if (lookahead == '!')
        ADVANCE(99);
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
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '\\')
        SKIP(654);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(650);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 651:
      if (lookahead == '\n')
        ADVANCE(651);
      if (lookahead == '\r')
        ADVANCE(651);
      if (lookahead == '!')
        ADVANCE(9);
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
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '\\')
        ADVANCE(652);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(651);
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
    case 652:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(651);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 653:
      if (lookahead == '\n')
        ADVANCE(651);
      if (lookahead == '\r')
        ADVANCE(653);
      if (lookahead == '!')
        ADVANCE(99);
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
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '\\')
        SKIP(654);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(650);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 654:
      if (lookahead == 'n')
        SKIP(650);
      END_STATE();
    case 655:
      if (lookahead == '\n')
        ADVANCE(656);
      if (lookahead == '\r')
        ADVANCE(708);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '&')
        ADVANCE(104);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == 'A')
        ADVANCE(709);
      if (lookahead == 'B')
        ADVANCE(712);
      if (lookahead == 'C')
        ADVANCE(716);
      if (lookahead == 'D')
        ADVANCE(720);
      if (lookahead == 'E')
        ADVANCE(730);
      if (lookahead == 'F')
        ADVANCE(741);
      if (lookahead == 'G')
        ADVANCE(744);
      if (lookahead == 'H')
        ADVANCE(745);
      if (lookahead == 'L')
        ADVANCE(746);
      if (lookahead == 'N')
        ADVANCE(747);
      if (lookahead == 'O')
        ADVANCE(748);
      if (lookahead == 'R')
        ADVANCE(749);
      if (lookahead == 'S')
        ADVANCE(750);
      if (lookahead == 'U')
        ADVANCE(751);
      if (lookahead == 'V')
        ADVANCE(752);
      if (lookahead == 'X')
        ADVANCE(753);
      if (lookahead == '\\')
        ADVANCE(505);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == 'a')
        ADVANCE(754);
      if (lookahead == 'b')
        ADVANCE(755);
      if (lookahead == 'f')
        ADVANCE(756);
      if (lookahead == 'n')
        ADVANCE(164);
      if (lookahead == 'o')
        ADVANCE(757);
      if (lookahead == 'r')
        ADVANCE(165);
      if (lookahead == 't')
        ADVANCE(166);
      if (lookahead == 'v')
        ADVANCE(167);
      if (lookahead == 'x')
        ADVANCE(758);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(655);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(506);
      END_STATE();
    case 656:
      if (lookahead == '\n')
        ADVANCE(656);
      if (lookahead == '\r')
        ADVANCE(656);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '&')
        ADVANCE(14);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == 'A')
        ADVANCE(657);
      if (lookahead == 'B')
        ADVANCE(660);
      if (lookahead == 'C')
        ADVANCE(664);
      if (lookahead == 'D')
        ADVANCE(668);
      if (lookahead == 'E')
        ADVANCE(678);
      if (lookahead == 'F')
        ADVANCE(689);
      if (lookahead == 'G')
        ADVANCE(692);
      if (lookahead == 'H')
        ADVANCE(693);
      if (lookahead == 'L')
        ADVANCE(694);
      if (lookahead == 'N')
        ADVANCE(695);
      if (lookahead == 'O')
        ADVANCE(696);
      if (lookahead == 'R')
        ADVANCE(697);
      if (lookahead == 'S')
        ADVANCE(698);
      if (lookahead == 'U')
        ADVANCE(699);
      if (lookahead == 'V')
        ADVANCE(700);
      if (lookahead == 'X')
        ADVANCE(701);
      if (lookahead == '\\')
        ADVANCE(702);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == 'a')
        ADVANCE(703);
      if (lookahead == 'b')
        ADVANCE(704);
      if (lookahead == 'f')
        ADVANCE(705);
      if (lookahead == 'n')
        ADVANCE(79);
      if (lookahead == 'o')
        ADVANCE(706);
      if (lookahead == 'r')
        ADVANCE(80);
      if (lookahead == 't')
        ADVANCE(81);
      if (lookahead == 'v')
        ADVANCE(82);
      if (lookahead == 'x')
        ADVANCE(707);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(501);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 657:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(658);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 658:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'K')
        ADVANCE(659);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_ACK);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 660:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(661);
      if (lookahead == 'S')
        ADVANCE(663);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 661:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'L')
        ADVANCE(662);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_BEL);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_BS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 664:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(665);
      if (lookahead == 'R')
        ADVANCE(667);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 665:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'N')
        ADVANCE(666);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_CAN);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 668:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(669);
      if (lookahead == 'E')
        ADVANCE(674);
      if (lookahead == 'L')
        ADVANCE(676);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 669:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '1')
        ADVANCE(670);
      if (lookahead == '2')
        ADVANCE(671);
      if (lookahead == '3')
        ADVANCE(672);
      if (lookahead == '4')
        ADVANCE(673);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_DC1);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_DC2);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_DC3);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_DC4);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 674:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'L')
        ADVANCE(675);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_DEL);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 676:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(677);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_DLE);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 678:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'M')
        ADVANCE(679);
      if (lookahead == 'N')
        ADVANCE(680);
      if (lookahead == 'O')
        ADVANCE(682);
      if (lookahead == 'S')
        ADVANCE(684);
      if (lookahead == 'T')
        ADVANCE(686);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_EM);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 680:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'Q')
        ADVANCE(681);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_ENQ);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 682:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(683);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_EOT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 684:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(685);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_ESC);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 686:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'B')
        ADVANCE(687);
      if (lookahead == 'X')
        ADVANCE(688);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_ETB);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_ETX);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 689:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(690);
      if (lookahead == 'S')
        ADVANCE(691);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_FS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 692:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(45);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 693:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(47);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 694:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(49);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 695:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(51);
      if (lookahead == 'U')
        ADVANCE(53);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 697:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(56);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 698:
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
    case 699:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(69);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 700:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(71);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_X);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(656);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_a);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 708:
      if (lookahead == '\n')
        ADVANCE(656);
      if (lookahead == '\r')
        ADVANCE(708);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '&')
        ADVANCE(104);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == 'A')
        ADVANCE(709);
      if (lookahead == 'B')
        ADVANCE(712);
      if (lookahead == 'C')
        ADVANCE(716);
      if (lookahead == 'D')
        ADVANCE(720);
      if (lookahead == 'E')
        ADVANCE(730);
      if (lookahead == 'F')
        ADVANCE(741);
      if (lookahead == 'G')
        ADVANCE(744);
      if (lookahead == 'H')
        ADVANCE(745);
      if (lookahead == 'L')
        ADVANCE(746);
      if (lookahead == 'N')
        ADVANCE(747);
      if (lookahead == 'O')
        ADVANCE(748);
      if (lookahead == 'R')
        ADVANCE(749);
      if (lookahead == 'S')
        ADVANCE(750);
      if (lookahead == 'U')
        ADVANCE(751);
      if (lookahead == 'V')
        ADVANCE(752);
      if (lookahead == 'X')
        ADVANCE(753);
      if (lookahead == '\\')
        ADVANCE(505);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == 'a')
        ADVANCE(754);
      if (lookahead == 'b')
        ADVANCE(755);
      if (lookahead == 'f')
        ADVANCE(756);
      if (lookahead == 'n')
        ADVANCE(164);
      if (lookahead == 'o')
        ADVANCE(757);
      if (lookahead == 'r')
        ADVANCE(165);
      if (lookahead == 't')
        ADVANCE(166);
      if (lookahead == 'v')
        ADVANCE(167);
      if (lookahead == 'x')
        ADVANCE(758);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(655);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(506);
      END_STATE();
    case 709:
      if (lookahead == 'C')
        ADVANCE(710);
      END_STATE();
    case 710:
      if (lookahead == 'K')
        ADVANCE(711);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_ACK);
      END_STATE();
    case 712:
      if (lookahead == 'E')
        ADVANCE(713);
      if (lookahead == 'S')
        ADVANCE(715);
      END_STATE();
    case 713:
      if (lookahead == 'L')
        ADVANCE(714);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_BEL);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_BS);
      END_STATE();
    case 716:
      if (lookahead == 'A')
        ADVANCE(717);
      if (lookahead == 'R')
        ADVANCE(719);
      END_STATE();
    case 717:
      if (lookahead == 'N')
        ADVANCE(718);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_CAN);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    case 720:
      if (lookahead == 'C')
        ADVANCE(721);
      if (lookahead == 'E')
        ADVANCE(726);
      if (lookahead == 'L')
        ADVANCE(728);
      END_STATE();
    case 721:
      if (lookahead == '1')
        ADVANCE(722);
      if (lookahead == '2')
        ADVANCE(723);
      if (lookahead == '3')
        ADVANCE(724);
      if (lookahead == '4')
        ADVANCE(725);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_DC1);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_DC2);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_DC3);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_DC4);
      END_STATE();
    case 726:
      if (lookahead == 'L')
        ADVANCE(727);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_DEL);
      END_STATE();
    case 728:
      if (lookahead == 'E')
        ADVANCE(729);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_DLE);
      END_STATE();
    case 730:
      if (lookahead == 'M')
        ADVANCE(731);
      if (lookahead == 'N')
        ADVANCE(732);
      if (lookahead == 'O')
        ADVANCE(734);
      if (lookahead == 'S')
        ADVANCE(736);
      if (lookahead == 'T')
        ADVANCE(738);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_EM);
      END_STATE();
    case 732:
      if (lookahead == 'Q')
        ADVANCE(733);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_ENQ);
      END_STATE();
    case 734:
      if (lookahead == 'T')
        ADVANCE(735);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_EOT);
      END_STATE();
    case 736:
      if (lookahead == 'C')
        ADVANCE(737);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_ESC);
      END_STATE();
    case 738:
      if (lookahead == 'B')
        ADVANCE(739);
      if (lookahead == 'X')
        ADVANCE(740);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_ETB);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_ETX);
      END_STATE();
    case 741:
      if (lookahead == 'F')
        ADVANCE(742);
      if (lookahead == 'S')
        ADVANCE(743);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_FF);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_FS);
      END_STATE();
    case 744:
      if (lookahead == 'S')
        ADVANCE(130);
      END_STATE();
    case 745:
      if (lookahead == 'T')
        ADVANCE(132);
      END_STATE();
    case 746:
      if (lookahead == 'F')
        ADVANCE(134);
      END_STATE();
    case 747:
      if (lookahead == 'A')
        ADVANCE(136);
      if (lookahead == 'U')
        ADVANCE(138);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 749:
      if (lookahead == 'S')
        ADVANCE(141);
      END_STATE();
    case 750:
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
    case 751:
      if (lookahead == 'S')
        ADVANCE(154);
      END_STATE();
    case 752:
      if (lookahead == 'T')
        ADVANCE(156);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 759:
      if (lookahead == '\t')
        ADVANCE(508);
      if (lookahead == '\n')
        ADVANCE(760);
      if (lookahead == 11)
        ADVANCE(97);
      if (lookahead == '\r')
        ADVANCE(771);
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
        ADVANCE(772);
      if (lookahead == 'B')
        ADVANCE(773);
      if (lookahead == 'C')
        ADVANCE(774);
      if (lookahead == 'D')
        ADVANCE(775);
      if (lookahead == 'E')
        ADVANCE(776);
      if (lookahead == 'F')
        ADVANCE(777);
      if (lookahead == 'G')
        ADVANCE(129);
      if (lookahead == 'H')
        ADVANCE(131);
      if (lookahead == 'L')
        ADVANCE(133);
      if (lookahead == 'N')
        ADVANCE(135);
      if (lookahead == 'O')
        ADVANCE(748);
      if (lookahead == 'R')
        ADVANCE(140);
      if (lookahead == 'S')
        ADVANCE(142);
      if (lookahead == 'U')
        ADVANCE(153);
      if (lookahead == 'V')
        ADVANCE(155);
      if (lookahead == 'X')
        ADVANCE(753);
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
        ADVANCE(754);
      if (lookahead == 'b')
        ADVANCE(755);
      if (lookahead == 'f')
        ADVANCE(756);
      if (lookahead == 'n')
        ADVANCE(164);
      if (lookahead == 'o')
        ADVANCE(757);
      if (lookahead == 'r')
        ADVANCE(165);
      if (lookahead == 't')
        ADVANCE(166);
      if (lookahead == 'v')
        ADVANCE(167);
      if (lookahead == 'x')
        ADVANCE(758);
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
    case 760:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(761);
      if (lookahead == '\n')
        ADVANCE(760);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(762);
      if (lookahead == ' ')
        ADVANCE(763);
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
        ADVANCE(764);
      if (lookahead == 'B')
        ADVANCE(765);
      if (lookahead == 'C')
        ADVANCE(766);
      if (lookahead == 'D')
        ADVANCE(767);
      if (lookahead == 'E')
        ADVANCE(768);
      if (lookahead == 'F')
        ADVANCE(769);
      if (lookahead == 'G')
        ADVANCE(44);
      if (lookahead == 'H')
        ADVANCE(46);
      if (lookahead == 'L')
        ADVANCE(48);
      if (lookahead == 'N')
        ADVANCE(50);
      if (lookahead == 'O')
        ADVANCE(696);
      if (lookahead == 'R')
        ADVANCE(55);
      if (lookahead == 'S')
        ADVANCE(57);
      if (lookahead == 'U')
        ADVANCE(68);
      if (lookahead == 'V')
        ADVANCE(70);
      if (lookahead == 'X')
        ADVANCE(701);
      if (lookahead == '[')
        ADVANCE(499);
      if (lookahead == '\\')
        ADVANCE(770);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(77);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == 'a')
        ADVANCE(703);
      if (lookahead == 'b')
        ADVANCE(704);
      if (lookahead == 'f')
        ADVANCE(705);
      if (lookahead == 'n')
        ADVANCE(79);
      if (lookahead == 'o')
        ADVANCE(706);
      if (lookahead == 'r')
        ADVANCE(80);
      if (lookahead == 't')
        ADVANCE(81);
      if (lookahead == 'v')
        ADVANCE(82);
      if (lookahead == 'x')
        ADVANCE(707);
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
    case 761:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(761);
      if (lookahead == '\n')
        ADVANCE(760);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(762);
      if (lookahead == ' ')
        ADVANCE(763);
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
        ADVANCE(764);
      if (lookahead == 'B')
        ADVANCE(765);
      if (lookahead == 'C')
        ADVANCE(766);
      if (lookahead == 'D')
        ADVANCE(767);
      if (lookahead == 'E')
        ADVANCE(768);
      if (lookahead == 'F')
        ADVANCE(769);
      if (lookahead == 'G')
        ADVANCE(44);
      if (lookahead == 'H')
        ADVANCE(46);
      if (lookahead == 'L')
        ADVANCE(48);
      if (lookahead == 'N')
        ADVANCE(50);
      if (lookahead == 'O')
        ADVANCE(696);
      if (lookahead == 'R')
        ADVANCE(55);
      if (lookahead == 'S')
        ADVANCE(57);
      if (lookahead == 'U')
        ADVANCE(68);
      if (lookahead == 'V')
        ADVANCE(70);
      if (lookahead == 'X')
        ADVANCE(701);
      if (lookahead == '[')
        ADVANCE(499);
      if (lookahead == '\\')
        ADVANCE(770);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(77);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == 'a')
        ADVANCE(703);
      if (lookahead == 'b')
        ADVANCE(704);
      if (lookahead == 'f')
        ADVANCE(705);
      if (lookahead == 'n')
        ADVANCE(79);
      if (lookahead == 'o')
        ADVANCE(706);
      if (lookahead == 'r')
        ADVANCE(80);
      if (lookahead == 't')
        ADVANCE(81);
      if (lookahead == 'v')
        ADVANCE(82);
      if (lookahead == 'x')
        ADVANCE(707);
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
    case 762:
      if (lookahead == '\t')
        ADVANCE(761);
      if (lookahead == '\n')
        ADVANCE(760);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(762);
      if (lookahead == ' ')
        ADVANCE(763);
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
        ADVANCE(764);
      if (lookahead == 'B')
        ADVANCE(765);
      if (lookahead == 'C')
        ADVANCE(766);
      if (lookahead == 'D')
        ADVANCE(767);
      if (lookahead == 'E')
        ADVANCE(768);
      if (lookahead == 'F')
        ADVANCE(769);
      if (lookahead == 'G')
        ADVANCE(44);
      if (lookahead == 'H')
        ADVANCE(46);
      if (lookahead == 'L')
        ADVANCE(48);
      if (lookahead == 'N')
        ADVANCE(50);
      if (lookahead == 'O')
        ADVANCE(696);
      if (lookahead == 'R')
        ADVANCE(55);
      if (lookahead == 'S')
        ADVANCE(57);
      if (lookahead == 'U')
        ADVANCE(68);
      if (lookahead == 'V')
        ADVANCE(70);
      if (lookahead == 'X')
        ADVANCE(701);
      if (lookahead == '[')
        ADVANCE(499);
      if (lookahead == '\\')
        ADVANCE(770);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(77);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == 'a')
        ADVANCE(703);
      if (lookahead == 'b')
        ADVANCE(704);
      if (lookahead == 'f')
        ADVANCE(705);
      if (lookahead == 'n')
        ADVANCE(79);
      if (lookahead == 'o')
        ADVANCE(706);
      if (lookahead == 'r')
        ADVANCE(80);
      if (lookahead == 't')
        ADVANCE(81);
      if (lookahead == 'v')
        ADVANCE(82);
      if (lookahead == 'x')
        ADVANCE(707);
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
    case 763:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(761);
      if (lookahead == '\n')
        ADVANCE(760);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(762);
      if (lookahead == ' ')
        ADVANCE(763);
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
        ADVANCE(764);
      if (lookahead == 'B')
        ADVANCE(765);
      if (lookahead == 'C')
        ADVANCE(766);
      if (lookahead == 'D')
        ADVANCE(767);
      if (lookahead == 'E')
        ADVANCE(768);
      if (lookahead == 'F')
        ADVANCE(769);
      if (lookahead == 'G')
        ADVANCE(44);
      if (lookahead == 'H')
        ADVANCE(46);
      if (lookahead == 'L')
        ADVANCE(48);
      if (lookahead == 'N')
        ADVANCE(50);
      if (lookahead == 'O')
        ADVANCE(696);
      if (lookahead == 'R')
        ADVANCE(55);
      if (lookahead == 'S')
        ADVANCE(57);
      if (lookahead == 'U')
        ADVANCE(68);
      if (lookahead == 'V')
        ADVANCE(70);
      if (lookahead == 'X')
        ADVANCE(701);
      if (lookahead == '[')
        ADVANCE(499);
      if (lookahead == '\\')
        ADVANCE(770);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(77);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == 'a')
        ADVANCE(703);
      if (lookahead == 'b')
        ADVANCE(704);
      if (lookahead == 'f')
        ADVANCE(705);
      if (lookahead == 'n')
        ADVANCE(79);
      if (lookahead == 'o')
        ADVANCE(706);
      if (lookahead == 'r')
        ADVANCE(80);
      if (lookahead == 't')
        ADVANCE(81);
      if (lookahead == 'v')
        ADVANCE(82);
      if (lookahead == 'x')
        ADVANCE(707);
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
    case 764:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(658);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(661);
      if (lookahead == 'S')
        ADVANCE(663);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(665);
      if (lookahead == 'R')
        ADVANCE(667);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(669);
      if (lookahead == 'E')
        ADVANCE(674);
      if (lookahead == 'L')
        ADVANCE(676);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'M')
        ADVANCE(679);
      if (lookahead == 'N')
        ADVANCE(680);
      if (lookahead == 'O')
        ADVANCE(682);
      if (lookahead == 'S')
        ADVANCE(684);
      if (lookahead == 'T')
        ADVANCE(686);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(690);
      if (lookahead == 'S')
        ADVANCE(691);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(762);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 771:
      if (lookahead == '\t')
        ADVANCE(508);
      if (lookahead == '\n')
        ADVANCE(760);
      if (lookahead == 11)
        ADVANCE(97);
      if (lookahead == '\r')
        ADVANCE(771);
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
        ADVANCE(772);
      if (lookahead == 'B')
        ADVANCE(773);
      if (lookahead == 'C')
        ADVANCE(774);
      if (lookahead == 'D')
        ADVANCE(775);
      if (lookahead == 'E')
        ADVANCE(776);
      if (lookahead == 'F')
        ADVANCE(777);
      if (lookahead == 'G')
        ADVANCE(129);
      if (lookahead == 'H')
        ADVANCE(131);
      if (lookahead == 'L')
        ADVANCE(133);
      if (lookahead == 'N')
        ADVANCE(135);
      if (lookahead == 'O')
        ADVANCE(748);
      if (lookahead == 'R')
        ADVANCE(140);
      if (lookahead == 'S')
        ADVANCE(142);
      if (lookahead == 'U')
        ADVANCE(153);
      if (lookahead == 'V')
        ADVANCE(155);
      if (lookahead == 'X')
        ADVANCE(753);
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
        ADVANCE(754);
      if (lookahead == 'b')
        ADVANCE(755);
      if (lookahead == 'f')
        ADVANCE(756);
      if (lookahead == 'n')
        ADVANCE(164);
      if (lookahead == 'o')
        ADVANCE(757);
      if (lookahead == 'r')
        ADVANCE(165);
      if (lookahead == 't')
        ADVANCE(166);
      if (lookahead == 'v')
        ADVANCE(167);
      if (lookahead == 'x')
        ADVANCE(758);
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
    case 772:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(710);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'E')
        ADVANCE(713);
      if (lookahead == 'S')
        ADVANCE(715);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'A')
        ADVANCE(717);
      if (lookahead == 'R')
        ADVANCE(719);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(721);
      if (lookahead == 'E')
        ADVANCE(726);
      if (lookahead == 'L')
        ADVANCE(728);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'M')
        ADVANCE(731);
      if (lookahead == 'N')
        ADVANCE(732);
      if (lookahead == 'O')
        ADVANCE(734);
      if (lookahead == 'S')
        ADVANCE(736);
      if (lookahead == 'T')
        ADVANCE(738);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'F')
        ADVANCE(742);
      if (lookahead == 'S')
        ADVANCE(743);
      END_STATE();
    case 778:
      if (lookahead == '\n')
        ADVANCE(779);
      if (lookahead == '\r')
        ADVANCE(781);
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
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == ':')
        ADVANCE(262);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(782);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '_')
        ADVANCE(471);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '~')
        ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(778);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 779:
      if (lookahead == '\n')
        ADVANCE(779);
      if (lookahead == '\r')
        ADVANCE(779);
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
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '[')
        ADVANCE(72);
      if (lookahead == '\\')
        ADVANCE(780);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '_')
        ADVANCE(467);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '~')
        ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(779);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 780:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(779);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 781:
      if (lookahead == '\n')
        ADVANCE(779);
      if (lookahead == '\r')
        ADVANCE(781);
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
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == ':')
        ADVANCE(262);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(782);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '_')
        ADVANCE(471);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '~')
        ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(778);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 782:
      if (lookahead == 'n')
        SKIP(778);
      END_STATE();
    case 783:
      if (lookahead == '\n')
        ADVANCE(784);
      if (lookahead == '\r')
        ADVANCE(787);
      if (lookahead == '(')
        ADVANCE(106);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(469);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(788);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(783);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(789);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 784:
      if (lookahead == '\n')
        ADVANCE(784);
      if (lookahead == '\r')
        ADVANCE(784);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(465);
      if (lookahead == '[')
        ADVANCE(72);
      if (lookahead == '\\')
        ADVANCE(785);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(784);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(786);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
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
      ACCEPT_TOKEN(sym__constructor_pattern);
      if (lookahead == '\'')
        ADVANCE(786);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(786);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 787:
      if (lookahead == '\n')
        ADVANCE(784);
      if (lookahead == '\r')
        ADVANCE(787);
      if (lookahead == '(')
        ADVANCE(106);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(469);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(788);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(783);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(789);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 788:
      if (lookahead == 'n')
        SKIP(783);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym__constructor_pattern);
      if (lookahead == '\'')
        ADVANCE(789);
      if (lookahead == '.')
        ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(789);
      END_STATE();
    case 790:
      if (lookahead == '\n')
        ADVANCE(791);
      if (lookahead == '\r')
        ADVANCE(793);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '\\')
        SKIP(794);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(790);
      END_STATE();
    case 791:
      if (lookahead == '\n')
        ADVANCE(791);
      if (lookahead == '\r')
        ADVANCE(791);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '\\')
        ADVANCE(792);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(791);
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
      if (lookahead == '\n')
        ADVANCE(791);
      if (lookahead == '\r')
        ADVANCE(793);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '\\')
        SKIP(794);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(790);
      END_STATE();
    case 794:
      if (lookahead == 'n')
        SKIP(790);
      END_STATE();
    case 795:
      if (lookahead == '\n')
        ADVANCE(796);
      if (lookahead == '\r')
        ADVANCE(808);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(255);
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
        ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
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
        ADVANCE(252);
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
        ADVANCE(255);
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
        ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      END_STATE();
    case 809:
      if (lookahead == 'n')
        SKIP(795);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'a')
        ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'f')
        ADVANCE(812);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'e')
        ADVANCE(813);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(anon_sym_safe);
      if (lookahead == '\'')
        ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'n')
        ADVANCE(815);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 's')
        ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'a')
        ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'f')
        ADVANCE(818);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'e')
        ADVANCE(819);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(anon_sym_unsafe);
      if (lookahead == '\'')
        ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 820:
      if (lookahead == '\n')
        ADVANCE(821);
      if (lookahead == '\r')
        ADVANCE(823);
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
        SKIP(824);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == 'w')
        ADVANCE(491);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(820);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 821:
      if (lookahead == '\n')
        ADVANCE(821);
      if (lookahead == '\r')
        ADVANCE(821);
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
        ADVANCE(822);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == 'w')
        ADVANCE(482);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == 8902)
        ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(821);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (('_' <= lookahead && lookahead <= 'z'))
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
        SKIP(824);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == 'w')
        ADVANCE(491);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(820);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
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
        SKIP(829);
      if (lookahead == 'd')
        ADVANCE(548);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(825);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 826:
      if (lookahead == '\n')
        ADVANCE(826);
      if (lookahead == '\r')
        ADVANCE(826);
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
        ADVANCE(827);
      if (lookahead == 'd')
        ADVANCE(538);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(826);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
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
        SKIP(829);
      if (lookahead == 'd')
        ADVANCE(548);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(825);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
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
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '\\')
        SKIP(834);
      if (lookahead == 'd')
        ADVANCE(637);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(830);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
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
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '\\')
        ADVANCE(832);
      if (lookahead == 'd')
        ADVANCE(627);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(831);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
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
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '\\')
        SKIP(834);
      if (lookahead == 'd')
        ADVANCE(637);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(830);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
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
      if (lookahead == '(')
        ADVANCE(254);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '\\')
        SKIP(839);
      if (lookahead == 'd')
        ADVANCE(548);
      if (lookahead == '{')
        ADVANCE(168);
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
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '\\')
        ADVANCE(837);
      if (lookahead == 'd')
        ADVANCE(538);
      if (lookahead == '{')
        ADVANCE(83);
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
      if (lookahead == '(')
        ADVANCE(254);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '\\')
        SKIP(839);
      if (lookahead == 'd')
        ADVANCE(548);
      if (lookahead == '{')
        ADVANCE(168);
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
      if (lookahead == '\\')
        SKIP(844);
      if (lookahead == 'd')
        ADVANCE(637);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(840);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
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
        ADVANCE(627);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(841);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
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
      if (lookahead == '\\')
        SKIP(844);
      if (lookahead == 'd')
        ADVANCE(637);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(840);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
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
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(849);
      if (lookahead == 'd')
        ADVANCE(637);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(845);
      END_STATE();
    case 846:
      if (lookahead == '\n')
        ADVANCE(846);
      if (lookahead == '\r')
        ADVANCE(846);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(847);
      if (lookahead == 'd')
        ADVANCE(627);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(846);
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
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(849);
      if (lookahead == 'd')
        ADVANCE(637);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(845);
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
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(854);
      if (lookahead == 'd')
        ADVANCE(637);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(850);
      END_STATE();
    case 851:
      if (lookahead == '\n')
        ADVANCE(851);
      if (lookahead == '\r')
        ADVANCE(851);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(852);
      if (lookahead == 'd')
        ADVANCE(627);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(851);
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
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(854);
      if (lookahead == 'd')
        ADVANCE(637);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(850);
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
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(254);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(859);
      if (lookahead == 'd')
        ADVANCE(548);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(855);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 856:
      if (lookahead == '\n')
        ADVANCE(856);
      if (lookahead == '\r')
        ADVANCE(856);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(857);
      if (lookahead == 'd')
        ADVANCE(538);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(856);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
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
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(254);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(859);
      if (lookahead == 'd')
        ADVANCE(548);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(855);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
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
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(864);
      if (lookahead == 'd')
        ADVANCE(548);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(860);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 861:
      if (lookahead == '\n')
        ADVANCE(861);
      if (lookahead == '\r')
        ADVANCE(861);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(39);
      if (lookahead == '\\')
        ADVANCE(862);
      if (lookahead == 'd')
        ADVANCE(538);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(861);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
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
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(864);
      if (lookahead == 'd')
        ADVANCE(548);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(860);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
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
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(869);
      if (lookahead == 'd')
        ADVANCE(637);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(865);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      END_STATE();
    case 866:
      if (lookahead == '\n')
        ADVANCE(866);
      if (lookahead == '\r')
        ADVANCE(866);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(39);
      if (lookahead == '\\')
        ADVANCE(867);
      if (lookahead == 'd')
        ADVANCE(627);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(866);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
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
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(869);
      if (lookahead == 'd')
        ADVANCE(637);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(865);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
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
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(874);
      if (lookahead == 'd')
        ADVANCE(637);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(870);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      END_STATE();
    case 871:
      if (lookahead == '\n')
        ADVANCE(871);
      if (lookahead == '\r')
        ADVANCE(871);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(39);
      if (lookahead == '\\')
        ADVANCE(872);
      if (lookahead == 'd')
        ADVANCE(627);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(871);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
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
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(874);
      if (lookahead == 'd')
        ADVANCE(637);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(870);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
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
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(879);
      if (lookahead == 'd')
        ADVANCE(548);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(875);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 876:
      if (lookahead == '\n')
        ADVANCE(876);
      if (lookahead == '\r')
        ADVANCE(876);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(39);
      if (lookahead == '\\')
        ADVANCE(877);
      if (lookahead == 'd')
        ADVANCE(538);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(876);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 877:
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
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(879);
      if (lookahead == 'd')
        ADVANCE(548);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(875);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 879:
      if (lookahead == 'n')
        SKIP(875);
      END_STATE();
    case 880:
      if (lookahead == '\n')
        ADVANCE(881);
      if (lookahead == '\r')
        ADVANCE(883);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(469);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(884);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(880);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 881:
      if (lookahead == '\n')
        ADVANCE(881);
      if (lookahead == '\r')
        ADVANCE(881);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(465);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == '=')
        ADVANCE(39);
      if (lookahead == '\\')
        ADVANCE(882);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(881);
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
    case 882:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(881);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 883:
      if (lookahead == '\n')
        ADVANCE(881);
      if (lookahead == '\r')
        ADVANCE(883);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(469);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(884);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(880);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 884:
      if (lookahead == 'n')
        SKIP(880);
      END_STATE();
    case 885:
      if (lookahead == '\n')
        ADVANCE(886);
      if (lookahead == '\r')
        ADVANCE(888);
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
        SKIP(885);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      END_STATE();
    case 886:
      if (lookahead == '\n')
        ADVANCE(886);
      if (lookahead == '\r')
        ADVANCE(886);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(499);
      if (lookahead == '\\')
        ADVANCE(887);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(886);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(886);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 888:
      if (lookahead == '\n')
        ADVANCE(886);
      if (lookahead == '\r')
        ADVANCE(888);
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
        SKIP(885);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      END_STATE();
    case 889:
      if (lookahead == '\n')
        ADVANCE(890);
      if (lookahead == '\r')
        ADVANCE(893);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '\\')
        SKIP(894);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(895);
      END_STATE();
    case 890:
      if (lookahead == '\n')
        ADVANCE(890);
      if (lookahead == '\r')
        ADVANCE(890);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '\\')
        ADVANCE(891);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(890);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(892);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 891:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(890);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 893:
      if (lookahead == '\n')
        ADVANCE(890);
      if (lookahead == '\r')
        ADVANCE(893);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '\\')
        SKIP(894);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(895);
      END_STATE();
    case 894:
      if (lookahead == 'n')
        SKIP(889);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      END_STATE();
    case 896:
      if (lookahead == '\n')
        ADVANCE(897);
      if (lookahead == '\r')
        ADVANCE(900);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '\\')
        SKIP(901);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(896);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(902);
      END_STATE();
    case 897:
      if (lookahead == '\n')
        ADVANCE(897);
      if (lookahead == '\r')
        ADVANCE(897);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '\\')
        ADVANCE(898);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(897);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(899);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 898:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(897);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 900:
      if (lookahead == '\n')
        ADVANCE(897);
      if (lookahead == '\r')
        ADVANCE(900);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '\\')
        SKIP(901);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(896);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(902);
      END_STATE();
    case 901:
      if (lookahead == 'n')
        SKIP(896);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
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
        ADVANCE(266);
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
        ADVANCE(266);
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
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(912);
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
        SKIP(908);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 909:
      if (lookahead == '\n')
        ADVANCE(909);
      if (lookahead == '\r')
        ADVANCE(909);
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
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(910);
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
        ADVANCE(909);
      if (('_' <= lookahead && lookahead <= 'z'))
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
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(912);
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
        SKIP(908);
      if (('_' <= lookahead && lookahead <= 'z'))
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
        ADVANCE(469);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(917);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(913);
      END_STATE();
    case 914:
      if (lookahead == '\n')
        ADVANCE(914);
      if (lookahead == '\r')
        ADVANCE(914);
      if (lookahead == '-')
        ADVANCE(465);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(915);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(914);
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
        ADVANCE(469);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(917);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(913);
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
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(254);
      if (lookahead == '-')
        ADVANCE(469);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(406);
      if (lookahead == '\\')
        SKIP(922);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(918);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 919:
      if (lookahead == '\n')
        ADVANCE(919);
      if (lookahead == '\r')
        ADVANCE(919);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == '-')
        ADVANCE(465);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(354);
      if (lookahead == '\\')
        ADVANCE(920);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(919);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
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
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '(')
        ADVANCE(254);
      if (lookahead == '-')
        ADVANCE(469);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(406);
      if (lookahead == '\\')
        SKIP(922);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(918);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
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
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == '\\')
        SKIP(927);
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
        SKIP(923);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      END_STATE();
    case 924:
      if (lookahead == '\n')
        ADVANCE(924);
      if (lookahead == '\r')
        ADVANCE(924);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == '\\')
        ADVANCE(925);
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
        ADVANCE(924);
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
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == '\\')
        SKIP(927);
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
        SKIP(923);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      END_STATE();
    case 927:
      if (lookahead == 'n')
        SKIP(923);
      END_STATE();
    case 928:
      if (lookahead == '\n')
        ADVANCE(929);
      if (lookahead == '\r')
        ADVANCE(931);
      if (lookahead == '(')
        ADVANCE(254);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(932);
      if (lookahead == 'h')
        ADVANCE(576);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(928);
      END_STATE();
    case 929:
      if (lookahead == '\n')
        ADVANCE(929);
      if (lookahead == '\r')
        ADVANCE(929);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(930);
      if (lookahead == 'h')
        ADVANCE(566);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(929);
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
      if (lookahead == '\n')
        ADVANCE(929);
      if (lookahead == '\r')
        ADVANCE(931);
      if (lookahead == '(')
        ADVANCE(254);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(932);
      if (lookahead == 'h')
        ADVANCE(576);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(928);
      END_STATE();
    case 932:
      if (lookahead == 'n')
        SKIP(928);
      END_STATE();
    case 933:
      if (lookahead == '\n')
        ADVANCE(934);
      if (lookahead == '\r')
        ADVANCE(936);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '\\')
        SKIP(937);
      if (lookahead == 'w')
        ADVANCE(491);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(933);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 934:
      if (lookahead == '\n')
        ADVANCE(934);
      if (lookahead == '\r')
        ADVANCE(934);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '\\')
        ADVANCE(935);
      if (lookahead == 'w')
        ADVANCE(482);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(934);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 935:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(934);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 936:
      if (lookahead == '\n')
        ADVANCE(934);
      if (lookahead == '\r')
        ADVANCE(936);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '\\')
        SKIP(937);
      if (lookahead == 'w')
        ADVANCE(491);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(933);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 937:
      if (lookahead == 'n')
        SKIP(933);
      END_STATE();
    case 938:
      if (lookahead == '\n')
        ADVANCE(939);
      if (lookahead == '\r')
        ADVANCE(941);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '\\')
        SKIP(942);
      if (lookahead == 'd')
        ADVANCE(548);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(938);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 939:
      if (lookahead == '\n')
        ADVANCE(939);
      if (lookahead == '\r')
        ADVANCE(939);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '\\')
        ADVANCE(940);
      if (lookahead == 'd')
        ADVANCE(538);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(939);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 940:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(939);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 941:
      if (lookahead == '\n')
        ADVANCE(939);
      if (lookahead == '\r')
        ADVANCE(941);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '\\')
        SKIP(942);
      if (lookahead == 'd')
        ADVANCE(548);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(938);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 942:
      if (lookahead == 'n')
        SKIP(938);
      END_STATE();
    case 943:
      if (lookahead == '\n')
        ADVANCE(944);
      if (lookahead == '\r')
        ADVANCE(946);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '\\')
        SKIP(947);
      if (lookahead == 'd')
        ADVANCE(637);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(943);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      END_STATE();
    case 944:
      if (lookahead == '\n')
        ADVANCE(944);
      if (lookahead == '\r')
        ADVANCE(944);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '\\')
        ADVANCE(945);
      if (lookahead == 'd')
        ADVANCE(627);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(944);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 945:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(944);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 946:
      if (lookahead == '\n')
        ADVANCE(944);
      if (lookahead == '\r')
        ADVANCE(946);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '\\')
        SKIP(947);
      if (lookahead == 'd')
        ADVANCE(637);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(943);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      END_STATE();
    case 947:
      if (lookahead == 'n')
        SKIP(943);
      END_STATE();
    case 948:
      if (lookahead == '\n')
        ADVANCE(949);
      if (lookahead == '\r')
        ADVANCE(951);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '\\')
        SKIP(952);
      if (lookahead == 'd')
        ADVANCE(548);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(948);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 949:
      if (lookahead == '\n')
        ADVANCE(949);
      if (lookahead == '\r')
        ADVANCE(949);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '\\')
        ADVANCE(950);
      if (lookahead == 'd')
        ADVANCE(538);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(949);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 950:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(949);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 951:
      if (lookahead == '\n')
        ADVANCE(949);
      if (lookahead == '\r')
        ADVANCE(951);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '\\')
        SKIP(952);
      if (lookahead == 'd')
        ADVANCE(548);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(948);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 952:
      if (lookahead == 'n')
        SKIP(948);
      END_STATE();
    case 953:
      if (lookahead == '\n')
        ADVANCE(954);
      if (lookahead == '\r')
        ADVANCE(956);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(957);
      if (lookahead == 'd')
        ADVANCE(548);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(953);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 954:
      if (lookahead == '\n')
        ADVANCE(954);
      if (lookahead == '\r')
        ADVANCE(954);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(955);
      if (lookahead == 'd')
        ADVANCE(538);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(954);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 955:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(954);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 956:
      if (lookahead == '\n')
        ADVANCE(954);
      if (lookahead == '\r')
        ADVANCE(956);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(957);
      if (lookahead == 'd')
        ADVANCE(548);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(953);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 957:
      if (lookahead == 'n')
        SKIP(953);
      END_STATE();
    case 958:
      if (lookahead == '\n')
        ADVANCE(959);
      if (lookahead == '\r')
        ADVANCE(961);
      if (lookahead == '(')
        ADVANCE(106);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(469);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(962);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(958);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(789);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 959:
      if (lookahead == '\n')
        ADVANCE(959);
      if (lookahead == '\r')
        ADVANCE(959);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(465);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '[')
        ADVANCE(72);
      if (lookahead == '\\')
        ADVANCE(960);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(959);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(786);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 960:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(959);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 961:
      if (lookahead == '\n')
        ADVANCE(959);
      if (lookahead == '\r')
        ADVANCE(961);
      if (lookahead == '(')
        ADVANCE(106);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(469);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(962);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(958);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(789);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 962:
      if (lookahead == 'n')
        SKIP(958);
      END_STATE();
    case 963:
      if (lookahead == '\n')
        ADVANCE(964);
      if (lookahead == '\r')
        ADVANCE(966);
      if (lookahead == '-')
        ADVANCE(469);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(967);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(963);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 964:
      if (lookahead == '\n')
        ADVANCE(964);
      if (lookahead == '\r')
        ADVANCE(964);
      if (lookahead == '-')
        ADVANCE(465);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(965);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(964);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 965:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(964);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 966:
      if (lookahead == '\n')
        ADVANCE(964);
      if (lookahead == '\r')
        ADVANCE(966);
      if (lookahead == '-')
        ADVANCE(469);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(967);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(963);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 967:
      if (lookahead == 'n')
        SKIP(963);
      END_STATE();
    case 968:
      if (lookahead == '\t')
        ADVANCE(508);
      if (lookahead == '\n')
        ADVANCE(969);
      if (lookahead == 11)
        ADVANCE(97);
      if (lookahead == '\r')
        ADVANCE(974);
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
    case 969:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(970);
      if (lookahead == '\n')
        ADVANCE(969);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(971);
      if (lookahead == ' ')
        ADVANCE(972);
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
        ADVANCE(973);
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
    case 970:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(970);
      if (lookahead == '\n')
        ADVANCE(969);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(971);
      if (lookahead == ' ')
        ADVANCE(972);
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
        ADVANCE(973);
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
    case 971:
      if (lookahead == '\t')
        ADVANCE(970);
      if (lookahead == '\n')
        ADVANCE(969);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(971);
      if (lookahead == ' ')
        ADVANCE(972);
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
        ADVANCE(973);
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
    case 972:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(970);
      if (lookahead == '\n')
        ADVANCE(969);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(971);
      if (lookahead == ' ')
        ADVANCE(972);
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
        ADVANCE(973);
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
    case 973:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(971);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 974:
      if (lookahead == '\t')
        ADVANCE(508);
      if (lookahead == '\n')
        ADVANCE(969);
      if (lookahead == 11)
        ADVANCE(97);
      if (lookahead == '\r')
        ADVANCE(974);
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
    case 975:
      if (lookahead == '\n')
        ADVANCE(976);
      if (lookahead == '\r')
        ADVANCE(978);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == '\\')
        SKIP(979);
      if (lookahead == 'd')
        ADVANCE(489);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(975);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 976:
      if (lookahead == '\n')
        ADVANCE(976);
      if (lookahead == '\r')
        ADVANCE(976);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == '\\')
        ADVANCE(977);
      if (lookahead == 'd')
        ADVANCE(480);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(976);
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
    case 977:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(976);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 978:
      if (lookahead == '\n')
        ADVANCE(976);
      if (lookahead == '\r')
        ADVANCE(978);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == '\\')
        SKIP(979);
      if (lookahead == 'd')
        ADVANCE(489);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(975);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 979:
      if (lookahead == 'n')
        SKIP(975);
      END_STATE();
    case 980:
      if (lookahead == '\n')
        ADVANCE(981);
      if (lookahead == '\r')
        ADVANCE(983);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == '\\')
        SKIP(984);
      if (lookahead == 'd')
        ADVANCE(489);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(980);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 981:
      if (lookahead == '\n')
        ADVANCE(981);
      if (lookahead == '\r')
        ADVANCE(981);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == '\\')
        ADVANCE(982);
      if (lookahead == 'd')
        ADVANCE(480);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(981);
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
    case 982:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(981);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 983:
      if (lookahead == '\n')
        ADVANCE(981);
      if (lookahead == '\r')
        ADVANCE(983);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == '\\')
        SKIP(984);
      if (lookahead == 'd')
        ADVANCE(489);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(980);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 984:
      if (lookahead == 'n')
        SKIP(980);
      END_STATE();
    case 985:
      if (lookahead == '\n')
        ADVANCE(986);
      if (lookahead == '\r')
        ADVANCE(988);
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
      if (lookahead == '=')
        ADVANCE(406);
      if (lookahead == '\\')
        SKIP(989);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(985);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 986:
      if (lookahead == '\n')
        ADVANCE(986);
      if (lookahead == '\r')
        ADVANCE(986);
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
      if (lookahead == '=')
        ADVANCE(354);
      if (lookahead == '\\')
        ADVANCE(987);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(986);
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
    case 987:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(986);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 988:
      if (lookahead == '\n')
        ADVANCE(986);
      if (lookahead == '\r')
        ADVANCE(988);
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
      if (lookahead == '=')
        ADVANCE(406);
      if (lookahead == '\\')
        SKIP(989);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(985);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 989:
      if (lookahead == 'n')
        SKIP(985);
      END_STATE();
    case 990:
      if (lookahead == '\n')
        ADVANCE(991);
      if (lookahead == '\r')
        ADVANCE(993);
      if (lookahead == '(')
        ADVANCE(106);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(469);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(994);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(990);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(789);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 991:
      if (lookahead == '\n')
        ADVANCE(991);
      if (lookahead == '\r')
        ADVANCE(991);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(465);
      if (lookahead == '[')
        ADVANCE(72);
      if (lookahead == '\\')
        ADVANCE(992);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(991);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(786);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 992:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(991);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 993:
      if (lookahead == '\n')
        ADVANCE(991);
      if (lookahead == '\r')
        ADVANCE(993);
      if (lookahead == '(')
        ADVANCE(106);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(469);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(994);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(990);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(789);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 994:
      if (lookahead == 'n')
        SKIP(990);
      END_STATE();
    case 995:
      if (lookahead == '\n')
        ADVANCE(996);
      if (lookahead == '\r')
        ADVANCE(998);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(469);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(999);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(995);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 996:
      if (lookahead == '\n')
        ADVANCE(996);
      if (lookahead == '\r')
        ADVANCE(996);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(465);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(997);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(996);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 997:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(996);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 998:
      if (lookahead == '\n')
        ADVANCE(996);
      if (lookahead == '\r')
        ADVANCE(998);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(469);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(999);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(995);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 999:
      if (lookahead == 'n')
        SKIP(995);
      END_STATE();
    case 1000:
      if (lookahead == '\n')
        ADVANCE(1001);
      if (lookahead == '\r')
        ADVANCE(1003);
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
        SKIP(1004);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(1000);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 1001:
      if (lookahead == '\n')
        ADVANCE(1001);
      if (lookahead == '\r')
        ADVANCE(1001);
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
        ADVANCE(1002);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(1001);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 1002:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(1001);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 1003:
      if (lookahead == '\n')
        ADVANCE(1001);
      if (lookahead == '\r')
        ADVANCE(1003);
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
        SKIP(1004);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(1000);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 1004:
      if (lookahead == 'n')
        SKIP(1000);
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
  [12] = {.lex_state = 463, .external_lex_state = 2},
  [13] = {.lex_state = 472, .external_lex_state = 2},
  [14] = {.lex_state = 477, .external_lex_state = 2},
  [15] = {.lex_state = 496},
  [16] = {.lex_state = 507},
  [17] = {.lex_state = 477, .external_lex_state = 2},
  [18] = {.lex_state = 181},
  [19] = {.lex_state = 515, .external_lex_state = 2},
  [20] = {.lex_state = 515, .external_lex_state = 2},
  [21] = {.lex_state = 181},
  [22] = {.lex_state = 520},
  [23] = {.lex_state = 520},
  [24] = {.lex_state = 525, .external_lex_state = 2},
  [25] = {.lex_state = 530, .external_lex_state = 2},
  [26] = {.lex_state = 535, .external_lex_state = 2},
  [27] = {.lex_state = 556},
  [28] = {.lex_state = 349},
  [29] = {.lex_state = 324},
  [30] = {.lex_state = 561, .external_lex_state = 2},
  [31] = {.lex_state = 349},
  [32] = {.lex_state = 349},
  [33] = {.lex_state = 582},
  [34] = {.lex_state = 181},
  [35] = {.lex_state = 589},
  [36] = {.lex_state = 181},
  [37] = {.lex_state = 349},
  [38] = {.lex_state = 594},
  [39] = {.lex_state = 181},
  [40] = {.lex_state = 349},
  [41] = {.lex_state = 599, .external_lex_state = 2},
  [42] = {.lex_state = 582},
  [43] = {.lex_state = 604, .external_lex_state = 2},
  [44] = {.lex_state = 609},
  [45] = {.lex_state = 614, .external_lex_state = 2},
  [46] = {.lex_state = 614, .external_lex_state = 2},
  [47] = {.lex_state = 349},
  [48] = {.lex_state = 599, .external_lex_state = 2},
  [49] = {.lex_state = 619, .external_lex_state = 2},
  [50] = {.lex_state = 181},
  [51] = {.lex_state = 624, .external_lex_state = 2},
  [52] = {.lex_state = 645, .external_lex_state = 2},
  [53] = {.lex_state = 582},
  [54] = {.lex_state = 181},
  [55] = {.lex_state = 349},
  [56] = {.lex_state = 181},
  [57] = {.lex_state = 582},
  [58] = {.lex_state = 650},
  [59] = {.lex_state = 181},
  [60] = {.lex_state = 650},
  [61] = {.lex_state = 520},
  [62] = {.lex_state = 181},
  [63] = {.lex_state = 181},
  [64] = {.lex_state = 181},
  [65] = {.lex_state = 181},
  [66] = {.lex_state = 181},
  [67] = {.lex_state = 181},
  [68] = {.lex_state = 655},
  [69] = {.lex_state = 507},
  [70] = {.lex_state = 507},
  [71] = {.lex_state = 507},
  [72] = {.lex_state = 507},
  [73] = {.lex_state = 477, .external_lex_state = 2},
  [74] = {.lex_state = 507},
  [75] = {.lex_state = 507},
  [76] = {.lex_state = 759},
  [77] = {.lex_state = 507},
  [78] = {.lex_state = 507},
  [79] = {.lex_state = 556},
  [80] = {.lex_state = 477, .external_lex_state = 2},
  [81] = {.lex_state = 515, .external_lex_state = 2},
  [82] = {.lex_state = 520},
  [83] = {.lex_state = 520},
  [84] = {.lex_state = 520},
  [85] = {.lex_state = 609},
  [86] = {.lex_state = 609},
  [87] = {.lex_state = 609},
  [88] = {.lex_state = 520},
  [89] = {.lex_state = 609},
  [90] = {.lex_state = 496},
  [91] = {.lex_state = 507},
  [92] = {.lex_state = 520},
  [93] = {.lex_state = 181},
  [94] = {.lex_state = 609},
  [95] = {.lex_state = 609},
  [96] = {.lex_state = 778},
  [97] = {.lex_state = 520},
  [98] = {.lex_state = 783},
  [99] = {.lex_state = 515, .external_lex_state = 2},
  [100] = {.lex_state = 582},
  [101] = {.lex_state = 790, .external_lex_state = 3},
  [102] = {.lex_state = 349},
  [103] = {.lex_state = 181},
  [104] = {.lex_state = 561, .external_lex_state = 2},
  [105] = {.lex_state = 582},
  [106] = {.lex_state = 324},
  [107] = {.lex_state = 181},
  [108] = {.lex_state = 515, .external_lex_state = 2},
  [109] = {.lex_state = 795},
  [110] = {.lex_state = 795},
  [111] = {.lex_state = 515, .external_lex_state = 2},
  [112] = {.lex_state = 181},
  [113] = {.lex_state = 181},
  [114] = {.lex_state = 582},
  [115] = {.lex_state = 349},
  [116] = {.lex_state = 594},
  [117] = {.lex_state = 790, .external_lex_state = 3},
  [118] = {.lex_state = 181},
  [119] = {.lex_state = 515, .external_lex_state = 2},
  [120] = {.lex_state = 454},
  [121] = {.lex_state = 582},
  [122] = {.lex_state = 582},
  [123] = {.lex_state = 594},
  [124] = {.lex_state = 349},
  [125] = {.lex_state = 349},
  [126] = {.lex_state = 594},
  [127] = {.lex_state = 594},
  [128] = {.lex_state = 820},
  [129] = {.lex_state = 594},
  [130] = {.lex_state = 349},
  [131] = {.lex_state = 515, .external_lex_state = 2},
  [132] = {.lex_state = 349},
  [133] = {.lex_state = 604, .external_lex_state = 2},
  [134] = {.lex_state = 604, .external_lex_state = 2},
  [135] = {.lex_state = 604, .external_lex_state = 2},
  [136] = {.lex_state = 349},
  [137] = {.lex_state = 614, .external_lex_state = 2},
  [138] = {.lex_state = 614, .external_lex_state = 2},
  [139] = {.lex_state = 599, .external_lex_state = 2},
  [140] = {.lex_state = 599, .external_lex_state = 2},
  [141] = {.lex_state = 825, .external_lex_state = 2},
  [142] = {.lex_state = 830, .external_lex_state = 2},
  [143] = {.lex_state = 835, .external_lex_state = 2},
  [144] = {.lex_state = 840, .external_lex_state = 2},
  [145] = {.lex_state = 582},
  [146] = {.lex_state = 845, .external_lex_state = 2},
  [147] = {.lex_state = 850, .external_lex_state = 2},
  [148] = {.lex_state = 515, .external_lex_state = 2},
  [149] = {.lex_state = 855, .external_lex_state = 2},
  [150] = {.lex_state = 454},
  [151] = {.lex_state = 582},
  [152] = {.lex_state = 582},
  [153] = {.lex_state = 860, .external_lex_state = 2},
  [154] = {.lex_state = 865, .external_lex_state = 2},
  [155] = {.lex_state = 870, .external_lex_state = 2},
  [156] = {.lex_state = 860, .external_lex_state = 2},
  [157] = {.lex_state = 875, .external_lex_state = 2},
  [158] = {.lex_state = 875, .external_lex_state = 2},
  [159] = {.lex_state = 181},
  [160] = {.lex_state = 454},
  [161] = {.lex_state = 181},
  [162] = {.lex_state = 582},
  [163] = {.lex_state = 880},
  [164] = {.lex_state = 349},
  [165] = {.lex_state = 582},
  [166] = {.lex_state = 582},
  [167] = {.lex_state = 582},
  [168] = {.lex_state = 582},
  [169] = {.lex_state = 454},
  [170] = {.lex_state = 783},
  [171] = {.lex_state = 454},
  [172] = {.lex_state = 582},
  [173] = {.lex_state = 582},
  [174] = {.lex_state = 650},
  [175] = {.lex_state = 181},
  [176] = {.lex_state = 181},
  [177] = {.lex_state = 650},
  [178] = {.lex_state = 650},
  [179] = {.lex_state = 650},
  [180] = {.lex_state = 650},
  [181] = {.lex_state = 477, .external_lex_state = 2},
  [182] = {.lex_state = 181},
  [183] = {.lex_state = 181},
  [184] = {.lex_state = 885},
  [185] = {.lex_state = 889},
  [186] = {.lex_state = 896},
  [187] = {.lex_state = 181},
  [188] = {.lex_state = 507},
  [189] = {.lex_state = 507},
  [190] = {.lex_state = 885},
  [191] = {.lex_state = 889},
  [192] = {.lex_state = 896},
  [193] = {.lex_state = 507},
  [194] = {.lex_state = 507},
  [195] = {.lex_state = 477, .external_lex_state = 2},
  [196] = {.lex_state = 790, .external_lex_state = 3},
  [197] = {.lex_state = 477, .external_lex_state = 2},
  [198] = {.lex_state = 477, .external_lex_state = 2},
  [199] = {.lex_state = 515, .external_lex_state = 2},
  [200] = {.lex_state = 477, .external_lex_state = 2},
  [201] = {.lex_state = 477, .external_lex_state = 2},
  [202] = {.lex_state = 477, .external_lex_state = 2},
  [203] = {.lex_state = 477, .external_lex_state = 2},
  [204] = {.lex_state = 477, .external_lex_state = 2},
  [205] = {.lex_state = 477, .external_lex_state = 2},
  [206] = {.lex_state = 520},
  [207] = {.lex_state = 181},
  [208] = {.lex_state = 903},
  [209] = {.lex_state = 349},
  [210] = {.lex_state = 181},
  [211] = {.lex_state = 181},
  [212] = {.lex_state = 181},
  [213] = {.lex_state = 903},
  [214] = {.lex_state = 609},
  [215] = {.lex_state = 520},
  [216] = {.lex_state = 908},
  [217] = {.lex_state = 324},
  [218] = {.lex_state = 181},
  [219] = {.lex_state = 181},
  [220] = {.lex_state = 609},
  [221] = {.lex_state = 507},
  [222] = {.lex_state = 520},
  [223] = {.lex_state = 582},
  [224] = {.lex_state = 520},
  [225] = {.lex_state = 783},
  [226] = {.lex_state = 783},
  [227] = {.lex_state = 913, .external_lex_state = 2},
  [228] = {.lex_state = 918, .external_lex_state = 2},
  [229] = {.lex_state = 181},
  [230] = {.lex_state = 515, .external_lex_state = 2},
  [231] = {.lex_state = 913, .external_lex_state = 2},
  [232] = {.lex_state = 783},
  [233] = {.lex_state = 349},
  [234] = {.lex_state = 913, .external_lex_state = 2},
  [235] = {.lex_state = 582},
  [236] = {.lex_state = 913, .external_lex_state = 2},
  [237] = {.lex_state = 556},
  [238] = {.lex_state = 349},
  [239] = {.lex_state = 181},
  [240] = {.lex_state = 181},
  [241] = {.lex_state = 923, .external_lex_state = 4},
  [242] = {.lex_state = 556},
  [243] = {.lex_state = 181},
  [244] = {.lex_state = 181},
  [245] = {.lex_state = 324},
  [246] = {.lex_state = 515, .external_lex_state = 2},
  [247] = {.lex_state = 515, .external_lex_state = 2},
  [248] = {.lex_state = 181},
  [249] = {.lex_state = 928, .external_lex_state = 2},
  [250] = {.lex_state = 582},
  [251] = {.lex_state = 582},
  [252] = {.lex_state = 507},
  [253] = {.lex_state = 582},
  [254] = {.lex_state = 515, .external_lex_state = 2},
  [255] = {.lex_state = 181},
  [256] = {.lex_state = 582},
  [257] = {.lex_state = 582},
  [258] = {.lex_state = 515, .external_lex_state = 2},
  [259] = {.lex_state = 181},
  [260] = {.lex_state = 181},
  [261] = {.lex_state = 349},
  [262] = {.lex_state = 181},
  [263] = {.lex_state = 181},
  [264] = {.lex_state = 650},
  [265] = {.lex_state = 515, .external_lex_state = 2},
  [266] = {.lex_state = 933},
  [267] = {.lex_state = 933},
  [268] = {.lex_state = 933},
  [269] = {.lex_state = 933},
  [270] = {.lex_state = 923, .external_lex_state = 4},
  [271] = {.lex_state = 556},
  [272] = {.lex_state = 515, .external_lex_state = 2},
  [273] = {.lex_state = 181},
  [274] = {.lex_state = 181},
  [275] = {.lex_state = 582},
  [276] = {.lex_state = 582},
  [277] = {.lex_state = 594},
  [278] = {.lex_state = 582},
  [279] = {.lex_state = 349},
  [280] = {.lex_state = 181},
  [281] = {.lex_state = 594},
  [282] = {.lex_state = 515, .external_lex_state = 2},
  [283] = {.lex_state = 614, .external_lex_state = 2},
  [284] = {.lex_state = 604, .external_lex_state = 2},
  [285] = {.lex_state = 614, .external_lex_state = 2},
  [286] = {.lex_state = 349},
  [287] = {.lex_state = 614, .external_lex_state = 2},
  [288] = {.lex_state = 599, .external_lex_state = 2},
  [289] = {.lex_state = 840, .external_lex_state = 2},
  [290] = {.lex_state = 845, .external_lex_state = 2},
  [291] = {.lex_state = 515, .external_lex_state = 2},
  [292] = {.lex_state = 454},
  [293] = {.lex_state = 582},
  [294] = {.lex_state = 582},
  [295] = {.lex_state = 938, .external_lex_state = 2},
  [296] = {.lex_state = 830, .external_lex_state = 2},
  [297] = {.lex_state = 943, .external_lex_state = 2},
  [298] = {.lex_state = 948, .external_lex_state = 2},
  [299] = {.lex_state = 948, .external_lex_state = 2},
  [300] = {.lex_state = 938, .external_lex_state = 2},
  [301] = {.lex_state = 948, .external_lex_state = 2},
  [302] = {.lex_state = 582},
  [303] = {.lex_state = 515, .external_lex_state = 2},
  [304] = {.lex_state = 181},
  [305] = {.lex_state = 850, .external_lex_state = 2},
  [306] = {.lex_state = 938, .external_lex_state = 2},
  [307] = {.lex_state = 953, .external_lex_state = 2},
  [308] = {.lex_state = 181},
  [309] = {.lex_state = 582},
  [310] = {.lex_state = 860, .external_lex_state = 2},
  [311] = {.lex_state = 582},
  [312] = {.lex_state = 870, .external_lex_state = 2},
  [313] = {.lex_state = 181},
  [314] = {.lex_state = 860, .external_lex_state = 2},
  [315] = {.lex_state = 181},
  [316] = {.lex_state = 958},
  [317] = {.lex_state = 845, .external_lex_state = 2},
  [318] = {.lex_state = 582},
  [319] = {.lex_state = 582},
  [320] = {.lex_state = 349},
  [321] = {.lex_state = 181},
  [322] = {.lex_state = 582},
  [323] = {.lex_state = 958},
  [324] = {.lex_state = 783},
  [325] = {.lex_state = 963, .external_lex_state = 2},
  [326] = {.lex_state = 515, .external_lex_state = 2},
  [327] = {.lex_state = 181},
  [328] = {.lex_state = 582},
  [329] = {.lex_state = 650},
  [330] = {.lex_state = 582},
  [331] = {.lex_state = 181},
  [332] = {.lex_state = 181},
  [333] = {.lex_state = 650},
  [334] = {.lex_state = 181},
  [335] = {.lex_state = 181},
  [336] = {.lex_state = 889},
  [337] = {.lex_state = 889},
  [338] = {.lex_state = 896},
  [339] = {.lex_state = 896},
  [340] = {.lex_state = 507},
  [341] = {.lex_state = 507},
  [342] = {.lex_state = 507},
  [343] = {.lex_state = 507},
  [344] = {.lex_state = 968},
  [345] = {.lex_state = 968},
  [346] = {.lex_state = 975, .external_lex_state = 4},
  [347] = {.lex_state = 980},
  [348] = {.lex_state = 477, .external_lex_state = 2},
  [349] = {.lex_state = 477, .external_lex_state = 2},
  [350] = {.lex_state = 477, .external_lex_state = 2},
  [351] = {.lex_state = 477, .external_lex_state = 2},
  [352] = {.lex_state = 515, .external_lex_state = 2},
  [353] = {.lex_state = 477, .external_lex_state = 2},
  [354] = {.lex_state = 181},
  [355] = {.lex_state = 520},
  [356] = {.lex_state = 609},
  [357] = {.lex_state = 520},
  [358] = {.lex_state = 582},
  [359] = {.lex_state = 520},
  [360] = {.lex_state = 520},
  [361] = {.lex_state = 520},
  [362] = {.lex_state = 520},
  [363] = {.lex_state = 181},
  [364] = {.lex_state = 520},
  [365] = {.lex_state = 985},
  [366] = {.lex_state = 496},
  [367] = {.lex_state = 985},
  [368] = {.lex_state = 650},
  [369] = {.lex_state = 650},
  [370] = {.lex_state = 609},
  [371] = {.lex_state = 520},
  [372] = {.lex_state = 609},
  [373] = {.lex_state = 609},
  [374] = {.lex_state = 609},
  [375] = {.lex_state = 609},
  [376] = {.lex_state = 181},
  [377] = {.lex_state = 181},
  [378] = {.lex_state = 181},
  [379] = {.lex_state = 783},
  [380] = {.lex_state = 181},
  [381] = {.lex_state = 783},
  [382] = {.lex_state = 990},
  [383] = {.lex_state = 582},
  [384] = {.lex_state = 181},
  [385] = {.lex_state = 181},
  [386] = {.lex_state = 582},
  [387] = {.lex_state = 181},
  [388] = {.lex_state = 582},
  [389] = {.lex_state = 990},
  [390] = {.lex_state = 783},
  [391] = {.lex_state = 783},
  [392] = {.lex_state = 181},
  [393] = {.lex_state = 783},
  [394] = {.lex_state = 783},
  [395] = {.lex_state = 783},
  [396] = {.lex_state = 783},
  [397] = {.lex_state = 995, .external_lex_state = 2},
  [398] = {.lex_state = 963, .external_lex_state = 2},
  [399] = {.lex_state = 963, .external_lex_state = 2},
  [400] = {.lex_state = 963, .external_lex_state = 2},
  [401] = {.lex_state = 783},
  [402] = {.lex_state = 963, .external_lex_state = 2},
  [403] = {.lex_state = 181},
  [404] = {.lex_state = 783},
  [405] = {.lex_state = 515, .external_lex_state = 2},
  [406] = {.lex_state = 783},
  [407] = {.lex_state = 783},
  [408] = {.lex_state = 582},
  [409] = {.lex_state = 349},
  [410] = {.lex_state = 181},
  [411] = {.lex_state = 582},
  [412] = {.lex_state = 181},
  [413] = {.lex_state = 515, .external_lex_state = 2},
  [414] = {.lex_state = 923, .external_lex_state = 4},
  [415] = {.lex_state = 556},
  [416] = {.lex_state = 928, .external_lex_state = 2},
  [417] = {.lex_state = 582},
  [418] = {.lex_state = 582},
  [419] = {.lex_state = 515, .external_lex_state = 2},
  [420] = {.lex_state = 181},
  [421] = {.lex_state = 515, .external_lex_state = 2},
  [422] = {.lex_state = 181},
  [423] = {.lex_state = 985},
  [424] = {.lex_state = 507},
  [425] = {.lex_state = 515, .external_lex_state = 2},
  [426] = {.lex_state = 582},
  [427] = {.lex_state = 181},
  [428] = {.lex_state = 582},
  [429] = {.lex_state = 515, .external_lex_state = 2},
  [430] = {.lex_state = 181},
  [431] = {.lex_state = 181},
  [432] = {.lex_state = 181},
  [433] = {.lex_state = 349},
  [434] = {.lex_state = 582},
  [435] = {.lex_state = 181},
  [436] = {.lex_state = 181},
  [437] = {.lex_state = 515, .external_lex_state = 2},
  [438] = {.lex_state = 923, .external_lex_state = 4},
  [439] = {.lex_state = 556},
  [440] = {.lex_state = 349},
  [441] = {.lex_state = 454},
  [442] = {.lex_state = 181},
  [443] = {.lex_state = 454},
  [444] = {.lex_state = 582},
  [445] = {.lex_state = 181},
  [446] = {.lex_state = 349},
  [447] = {.lex_state = 582},
  [448] = {.lex_state = 349},
  [449] = {.lex_state = 181},
  [450] = {.lex_state = 582},
  [451] = {.lex_state = 349},
  [452] = {.lex_state = 496},
  [453] = {.lex_state = 507},
  [454] = {.lex_state = 349},
  [455] = {.lex_state = 349},
  [456] = {.lex_state = 614, .external_lex_state = 2},
  [457] = {.lex_state = 845, .external_lex_state = 2},
  [458] = {.lex_state = 515, .external_lex_state = 2},
  [459] = {.lex_state = 181},
  [460] = {.lex_state = 582},
  [461] = {.lex_state = 948, .external_lex_state = 2},
  [462] = {.lex_state = 582},
  [463] = {.lex_state = 943, .external_lex_state = 2},
  [464] = {.lex_state = 181},
  [465] = {.lex_state = 948, .external_lex_state = 2},
  [466] = {.lex_state = 181},
  [467] = {.lex_state = 850, .external_lex_state = 2},
  [468] = {.lex_state = 181},
  [469] = {.lex_state = 865, .external_lex_state = 2},
  [470] = {.lex_state = 181},
  [471] = {.lex_state = 865, .external_lex_state = 2},
  [472] = {.lex_state = 870, .external_lex_state = 2},
  [473] = {.lex_state = 181},
  [474] = {.lex_state = 582},
  [475] = {.lex_state = 870, .external_lex_state = 2},
  [476] = {.lex_state = 496},
  [477] = {.lex_state = 507},
  [478] = {.lex_state = 870, .external_lex_state = 2},
  [479] = {.lex_state = 870, .external_lex_state = 2},
  [480] = {.lex_state = 845, .external_lex_state = 2},
  [481] = {.lex_state = 515, .external_lex_state = 2},
  [482] = {.lex_state = 181},
  [483] = {.lex_state = 582},
  [484] = {.lex_state = 582},
  [485] = {.lex_state = 181},
  [486] = {.lex_state = 181},
  [487] = {.lex_state = 181},
  [488] = {.lex_state = 181},
  [489] = {.lex_state = 181},
  [490] = {.lex_state = 582},
  [491] = {.lex_state = 181},
  [492] = {.lex_state = 889},
  [493] = {.lex_state = 896},
  [494] = {.lex_state = 507},
  [495] = {.lex_state = 968},
  [496] = {.lex_state = 477, .external_lex_state = 2},
  [497] = {.lex_state = 1000, .external_lex_state = 2},
  [498] = {.lex_state = 515, .external_lex_state = 2},
  [499] = {.lex_state = 975, .external_lex_state = 4},
  [500] = {.lex_state = 1000, .external_lex_state = 2},
  [501] = {.lex_state = 975, .external_lex_state = 4},
  [502] = {.lex_state = 515, .external_lex_state = 2},
  [503] = {.lex_state = 980},
  [504] = {.lex_state = 980},
  [505] = {.lex_state = 477, .external_lex_state = 2},
  [506] = {.lex_state = 181},
  [507] = {.lex_state = 349},
  [508] = {.lex_state = 181},
  [509] = {.lex_state = 349},
  [510] = {.lex_state = 520},
  [511] = {.lex_state = 520},
  [512] = {.lex_state = 520},
  [513] = {.lex_state = 349},
  [514] = {.lex_state = 181},
  [515] = {.lex_state = 520},
  [516] = {.lex_state = 520},
  [517] = {.lex_state = 520},
  [518] = {.lex_state = 609},
  [519] = {.lex_state = 181},
  [520] = {.lex_state = 650},
  [521] = {.lex_state = 609},
  [522] = {.lex_state = 181},
  [523] = {.lex_state = 181},
  [524] = {.lex_state = 181},
  [525] = {.lex_state = 181},
  [526] = {.lex_state = 913, .external_lex_state = 2},
  [527] = {.lex_state = 181},
  [528] = {.lex_state = 783},
  [529] = {.lex_state = 582},
  [530] = {.lex_state = 783},
  [531] = {.lex_state = 582},
  [532] = {.lex_state = 181},
  [533] = {.lex_state = 783},
  [534] = {.lex_state = 913, .external_lex_state = 2},
  [535] = {.lex_state = 181},
  [536] = {.lex_state = 783},
  [537] = {.lex_state = 349},
  [538] = {.lex_state = 181},
  [539] = {.lex_state = 783},
  [540] = {.lex_state = 783},
  [541] = {.lex_state = 783},
  [542] = {.lex_state = 783},
  [543] = {.lex_state = 783},
  [544] = {.lex_state = 181},
  [545] = {.lex_state = 783},
  [546] = {.lex_state = 783},
  [547] = {.lex_state = 913, .external_lex_state = 2},
  [548] = {.lex_state = 783},
  [549] = {.lex_state = 963, .external_lex_state = 2},
  [550] = {.lex_state = 181},
  [551] = {.lex_state = 963, .external_lex_state = 2},
  [552] = {.lex_state = 963, .external_lex_state = 2},
  [553] = {.lex_state = 783},
  [554] = {.lex_state = 515, .external_lex_state = 2},
  [555] = {.lex_state = 515, .external_lex_state = 2},
  [556] = {.lex_state = 181},
  [557] = {.lex_state = 582},
  [558] = {.lex_state = 349},
  [559] = {.lex_state = 181},
  [560] = {.lex_state = 181},
  [561] = {.lex_state = 923, .external_lex_state = 4},
  [562] = {.lex_state = 181},
  [563] = {.lex_state = 515, .external_lex_state = 2},
  [564] = {.lex_state = 515, .external_lex_state = 2},
  [565] = {.lex_state = 181},
  [566] = {.lex_state = 181},
  [567] = {.lex_state = 181},
  [568] = {.lex_state = 582},
  [569] = {.lex_state = 515, .external_lex_state = 2},
  [570] = {.lex_state = 582},
  [571] = {.lex_state = 181},
  [572] = {.lex_state = 985},
  [573] = {.lex_state = 515, .external_lex_state = 2},
  [574] = {.lex_state = 181},
  [575] = {.lex_state = 181},
  [576] = {.lex_state = 181},
  [577] = {.lex_state = 582},
  [578] = {.lex_state = 515, .external_lex_state = 2},
  [579] = {.lex_state = 181},
  [580] = {.lex_state = 349},
  [581] = {.lex_state = 454},
  [582] = {.lex_state = 181},
  [583] = {.lex_state = 582},
  [584] = {.lex_state = 181},
  [585] = {.lex_state = 454},
  [586] = {.lex_state = 582},
  [587] = {.lex_state = 349},
  [588] = {.lex_state = 181},
  [589] = {.lex_state = 349},
  [590] = {.lex_state = 507},
  [591] = {.lex_state = 515, .external_lex_state = 2},
  [592] = {.lex_state = 830, .external_lex_state = 2},
  [593] = {.lex_state = 181},
  [594] = {.lex_state = 830, .external_lex_state = 2},
  [595] = {.lex_state = 943, .external_lex_state = 2},
  [596] = {.lex_state = 181},
  [597] = {.lex_state = 582},
  [598] = {.lex_state = 943, .external_lex_state = 2},
  [599] = {.lex_state = 496},
  [600] = {.lex_state = 507},
  [601] = {.lex_state = 943, .external_lex_state = 2},
  [602] = {.lex_state = 943, .external_lex_state = 2},
  [603] = {.lex_state = 515, .external_lex_state = 2},
  [604] = {.lex_state = 181},
  [605] = {.lex_state = 850, .external_lex_state = 2},
  [606] = {.lex_state = 865, .external_lex_state = 2},
  [607] = {.lex_state = 870, .external_lex_state = 2},
  [608] = {.lex_state = 181},
  [609] = {.lex_state = 870, .external_lex_state = 2},
  [610] = {.lex_state = 507},
  [611] = {.lex_state = 515, .external_lex_state = 2},
  [612] = {.lex_state = 181},
  [613] = {.lex_state = 181},
  [614] = {.lex_state = 975, .external_lex_state = 4},
  [615] = {.lex_state = 1000, .external_lex_state = 2},
  [616] = {.lex_state = 496},
  [617] = {.lex_state = 507},
  [618] = {.lex_state = 1000, .external_lex_state = 2},
  [619] = {.lex_state = 1000, .external_lex_state = 2},
  [620] = {.lex_state = 1000, .external_lex_state = 2},
  [621] = {.lex_state = 477, .external_lex_state = 2},
  [622] = {.lex_state = 975, .external_lex_state = 4},
  [623] = {.lex_state = 980},
  [624] = {.lex_state = 980},
  [625] = {.lex_state = 181},
  [626] = {.lex_state = 520},
  [627] = {.lex_state = 520},
  [628] = {.lex_state = 520},
  [629] = {.lex_state = 349},
  [630] = {.lex_state = 181},
  [631] = {.lex_state = 985},
  [632] = {.lex_state = 990},
  [633] = {.lex_state = 181},
  [634] = {.lex_state = 990},
  [635] = {.lex_state = 181},
  [636] = {.lex_state = 181},
  [637] = {.lex_state = 913, .external_lex_state = 2},
  [638] = {.lex_state = 990},
  [639] = {.lex_state = 582},
  [640] = {.lex_state = 582},
  [641] = {.lex_state = 783},
  [642] = {.lex_state = 181},
  [643] = {.lex_state = 783},
  [644] = {.lex_state = 913, .external_lex_state = 2},
  [645] = {.lex_state = 990},
  [646] = {.lex_state = 783},
  [647] = {.lex_state = 349},
  [648] = {.lex_state = 990},
  [649] = {.lex_state = 783},
  [650] = {.lex_state = 783},
  [651] = {.lex_state = 783},
  [652] = {.lex_state = 963, .external_lex_state = 2},
  [653] = {.lex_state = 181},
  [654] = {.lex_state = 963, .external_lex_state = 2},
  [655] = {.lex_state = 181},
  [656] = {.lex_state = 181},
  [657] = {.lex_state = 181},
  [658] = {.lex_state = 923, .external_lex_state = 4},
  [659] = {.lex_state = 181},
  [660] = {.lex_state = 181},
  [661] = {.lex_state = 582},
  [662] = {.lex_state = 181},
  [663] = {.lex_state = 181},
  [664] = {.lex_state = 181},
  [665] = {.lex_state = 515, .external_lex_state = 2},
  [666] = {.lex_state = 181},
  [667] = {.lex_state = 181},
  [668] = {.lex_state = 181},
  [669] = {.lex_state = 349},
  [670] = {.lex_state = 349},
  [671] = {.lex_state = 830, .external_lex_state = 2},
  [672] = {.lex_state = 943, .external_lex_state = 2},
  [673] = {.lex_state = 181},
  [674] = {.lex_state = 943, .external_lex_state = 2},
  [675] = {.lex_state = 507},
  [676] = {.lex_state = 515, .external_lex_state = 2},
  [677] = {.lex_state = 870, .external_lex_state = 2},
  [678] = {.lex_state = 870, .external_lex_state = 2},
  [679] = {.lex_state = 181},
  [680] = {.lex_state = 1000, .external_lex_state = 2},
  [681] = {.lex_state = 507},
  [682] = {.lex_state = 1000, .external_lex_state = 2},
  [683] = {.lex_state = 990},
  [684] = {.lex_state = 990},
  [685] = {.lex_state = 582},
  [686] = {.lex_state = 582},
  [687] = {.lex_state = 181},
  [688] = {.lex_state = 783},
  [689] = {.lex_state = 783},
  [690] = {.lex_state = 783},
  [691] = {.lex_state = 963, .external_lex_state = 2},
  [692] = {.lex_state = 181},
  [693] = {.lex_state = 515, .external_lex_state = 2},
  [694] = {.lex_state = 181},
  [695] = {.lex_state = 181},
  [696] = {.lex_state = 181},
  [697] = {.lex_state = 181},
  [698] = {.lex_state = 582},
  [699] = {.lex_state = 181},
  [700] = {.lex_state = 943, .external_lex_state = 2},
  [701] = {.lex_state = 943, .external_lex_state = 2},
  [702] = {.lex_state = 1000, .external_lex_state = 2},
  [703] = {.lex_state = 1000, .external_lex_state = 2},
  [704] = {.lex_state = 582},
  [705] = {.lex_state = 783},
  [706] = {.lex_state = 515, .external_lex_state = 2},
  [707] = {.lex_state = 181},
  [708] = {.lex_state = 181},
  [709] = {.lex_state = 181},
  [710] = {.lex_state = 181},
  [711] = {.lex_state = 181},
  [712] = {.lex_state = 181},
  [713] = {.lex_state = 515, .external_lex_state = 2},
  [714] = {.lex_state = 181},
  [715] = {.lex_state = 181},
  [716] = {.lex_state = 181},
  [717] = {.lex_state = 181},
  [718] = {.lex_state = 515, .external_lex_state = 2},
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
    [sym_constructor] = STATE(37),
    [sym_constructor_identifier] = STATE(38),
    [anon_sym_LPAREN] = ACTIONS(55),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [7] = {
    [sym_context] = STATE(39),
    [sym_constructor] = STATE(40),
    [sym_constructor_identifier] = STATE(38),
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
    [sym_constructor] = STATE(51),
    [sym_constructor_identifier] = STATE(52),
    [anon_sym_LPAREN] = ACTIONS(55),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [10] = {
    [sym_context] = STATE(54),
    [sym_constructor] = STATE(55),
    [sym_simple_type] = STATE(56),
    [sym_constructor_identifier] = STATE(57),
    [anon_sym_LPAREN] = ACTIONS(55),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
  },
  [11] = {
    [sym_constructor] = STATE(59),
    [sym_constructor_identifier] = STATE(60),
    [sym__constructor_pattern] = ACTIONS(71),
    [sym_comment] = ACTIONS(5),
  },
  [12] = {
    [sym__layout_semicolon] = ACTIONS(73),
    [anon_sym_SEMI] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_TILDE] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(75),
    [anon_sym__] = ACTIONS(75),
    [anon_sym_COLON_COLON] = ACTIONS(75),
    [anon_sym_DASH_GT] = ACTIONS(75),
    [sym_list_constructor] = ACTIONS(75),
    [sym__variable_pattern] = ACTIONS(77),
    [sym__constructor_pattern] = ACTIONS(77),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(75),
    [sym__integer_literal] = ACTIONS(75),
    [sym__octal_literal] = ACTIONS(75),
    [sym__hexidecimal_literal] = ACTIONS(75),
  },
  [13] = {
    [sym__layout_semicolon] = ACTIONS(79),
    [anon_sym_SEMI] = ACTIONS(81),
    [anon_sym_COLON_COLON] = ACTIONS(81),
    [sym__variable_pattern] = ACTIONS(83),
    [sym_comment] = ACTIONS(5),
  },
  [14] = {
    [sym__layout_semicolon] = ACTIONS(85),
    [anon_sym_SEMI] = ACTIONS(87),
    [anon_sym_where] = ACTIONS(87),
    [anon_sym_do] = ACTIONS(87),
    [sym__variable_pattern] = ACTIONS(89),
    [sym__constructor_pattern] = ACTIONS(89),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(87),
    [sym__integer_literal] = ACTIONS(87),
    [sym__octal_literal] = ACTIONS(87),
    [sym__hexidecimal_literal] = ACTIONS(87),
  },
  [15] = {
    [sym__graphic] = STATE(65),
    [sym__small] = STATE(66),
    [sym__large] = STATE(66),
    [sym__symbol] = STATE(66),
    [sym__special] = STATE(66),
    [sym__escape] = STATE(65),
    [anon_sym_SEMI] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(91),
    [anon_sym_RBRACE] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(91),
    [anon_sym_RPAREN] = ACTIONS(91),
    [anon_sym_EQ] = ACTIONS(93),
    [anon_sym_TILDE] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_RBRACK] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(93),
    [anon_sym_AT] = ACTIONS(93),
    [anon_sym__] = ACTIONS(95),
    [anon_sym_BQUOTE] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(93),
    [anon_sym_PIPE] = ACTIONS(93),
    [anon_sym_BANG] = ACTIONS(93),
    [anon_sym_DOT] = ACTIONS(93),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(99),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(101),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(95),
    [sym__ascii_large] = ACTIONS(103),
    [anon_sym_POUND] = ACTIONS(93),
    [anon_sym_DOLLAR] = ACTIONS(93),
    [anon_sym_PERCENT] = ACTIONS(93),
    [anon_sym_AMP] = ACTIONS(93),
    [anon_sym_1] = ACTIONS(93),
    [anon_sym_PLUS] = ACTIONS(93),
    [anon_sym_SLASH] = ACTIONS(93),
    [anon_sym_LT] = ACTIONS(93),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_QMARK] = ACTIONS(93),
    [anon_sym_CARET] = ACTIONS(93),
    [anon_sym_BSLASH] = ACTIONS(105),
    [sym__space] = ACTIONS(99),
  },
  [16] = {
    [sym__gap] = STATE(72),
    [sym__graphic] = STATE(72),
    [sym__small] = STATE(74),
    [sym__large] = STATE(74),
    [sym__symbol] = STATE(74),
    [sym__special] = STATE(74),
    [sym__escape] = STATE(72),
    [aux_sym_string_repeat1] = STATE(78),
    [anon_sym_SEMI] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(107),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_RPAREN] = ACTIONS(107),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_TILDE] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_RBRACK] = ACTIONS(107),
    [anon_sym_DASH] = ACTIONS(109),
    [anon_sym_AT] = ACTIONS(109),
    [anon_sym__] = ACTIONS(111),
    [anon_sym_BQUOTE] = ACTIONS(107),
    [anon_sym_COLON] = ACTIONS(109),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_BANG] = ACTIONS(109),
    [anon_sym_DOT] = ACTIONS(109),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(117),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(111),
    [sym__ascii_large] = ACTIONS(119),
    [anon_sym_POUND] = ACTIONS(109),
    [anon_sym_DOLLAR] = ACTIONS(109),
    [anon_sym_PERCENT] = ACTIONS(109),
    [anon_sym_AMP] = ACTIONS(109),
    [anon_sym_1] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(109),
    [anon_sym_SLASH] = ACTIONS(109),
    [anon_sym_LT] = ACTIONS(109),
    [anon_sym_GT] = ACTIONS(109),
    [anon_sym_QMARK] = ACTIONS(109),
    [anon_sym_CARET] = ACTIONS(109),
    [anon_sym_BSLASH] = ACTIONS(121),
    [sym__space] = ACTIONS(123),
    [sym__newline] = ACTIONS(123),
    [sym__tab] = ACTIONS(123),
    [sym__vertical_tab] = ACTIONS(123),
  },
  [17] = {
    [sym__layout_semicolon] = ACTIONS(125),
    [anon_sym_SEMI] = ACTIONS(127),
    [anon_sym_where] = ACTIONS(127),
    [anon_sym_do] = ACTIONS(127),
    [sym__variable_pattern] = ACTIONS(129),
    [sym__constructor_pattern] = ACTIONS(129),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(129),
    [anon_sym_SQUOTE] = ACTIONS(127),
    [anon_sym_DQUOTE] = ACTIONS(127),
    [sym__integer_literal] = ACTIONS(127),
    [sym__octal_literal] = ACTIONS(127),
    [sym__hexidecimal_literal] = ACTIONS(127),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(131),
    [sym_comment] = ACTIONS(5),
  },
  [19] = {
    [sym__layout_semicolon] = ACTIONS(133),
    [anon_sym_SEMI] = ACTIONS(135),
    [sym_comment] = ACTIONS(5),
  },
  [20] = {
    [sym__layout_semicolon] = ACTIONS(137),
    [anon_sym_SEMI] = ACTIONS(139),
    [sym_comment] = ACTIONS(5),
  },
  [21] = {
    [sym_function_body] = STATE(81),
    [anon_sym_EQ] = ACTIONS(141),
    [sym_comment] = ACTIONS(5),
  },
  [22] = {
    [sym__function_pattern] = STATE(92),
    [sym_label_pattern] = STATE(86),
    [sym_irrefutable_pattern] = STATE(86),
    [sym_list_pattern] = STATE(86),
    [sym_tuple_pattern] = STATE(86),
    [sym_parenthesized_pattern] = STATE(86),
    [sym_as_pattern] = STATE(86),
    [sym_wildcard] = STATE(86),
    [sym__variable] = STATE(93),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym__literal] = STATE(86),
    [sym__identifier] = STATE(94),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(96),
    [sym_integer] = STATE(89),
    [sym_char] = STATE(89),
    [sym_string] = STATE(89),
    [aux_sym_function_head_repeat1] = STATE(97),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_EQ] = ACTIONS(145),
    [anon_sym_TILDE] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym__] = ACTIONS(151),
    [sym_list_constructor] = ACTIONS(153),
    [sym__variable_pattern] = ACTIONS(155),
    [sym__constructor_pattern] = ACTIONS(157),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [23] = {
    [anon_sym_LPAREN] = ACTIONS(165),
    [anon_sym_EQ] = ACTIONS(165),
    [anon_sym_TILDE] = ACTIONS(165),
    [anon_sym_LBRACK] = ACTIONS(165),
    [anon_sym_AT] = ACTIONS(165),
    [anon_sym__] = ACTIONS(165),
    [sym_list_constructor] = ACTIONS(165),
    [sym__variable_pattern] = ACTIONS(167),
    [sym__constructor_pattern] = ACTIONS(167),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(167),
    [anon_sym_SQUOTE] = ACTIONS(165),
    [anon_sym_DQUOTE] = ACTIONS(165),
    [sym__integer_literal] = ACTIONS(165),
    [sym__octal_literal] = ACTIONS(165),
    [sym__hexidecimal_literal] = ACTIONS(165),
  },
  [24] = {
    [sym__layout_semicolon] = ACTIONS(133),
    [anon_sym_SEMI] = ACTIONS(135),
    [anon_sym_COLON_COLON] = ACTIONS(169),
    [sym_comment] = ACTIONS(5),
  },
  [25] = {
    [sym__layout_semicolon] = ACTIONS(171),
    [anon_sym_SEMI] = ACTIONS(173),
    [anon_sym_LPAREN] = ACTIONS(165),
    [anon_sym_EQ] = ACTIONS(165),
    [anon_sym_TILDE] = ACTIONS(165),
    [anon_sym_LBRACK] = ACTIONS(165),
    [anon_sym__] = ACTIONS(165),
    [anon_sym_COLON_COLON] = ACTIONS(173),
    [sym_list_constructor] = ACTIONS(165),
    [sym__variable_pattern] = ACTIONS(167),
    [sym__constructor_pattern] = ACTIONS(167),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(167),
    [anon_sym_SQUOTE] = ACTIONS(165),
    [anon_sym_DQUOTE] = ACTIONS(165),
    [sym__integer_literal] = ACTIONS(165),
    [sym__octal_literal] = ACTIONS(165),
    [sym__hexidecimal_literal] = ACTIONS(165),
  },
  [26] = {
    [sym__layout_semicolon] = ACTIONS(171),
    [anon_sym_SEMI] = ACTIONS(173),
    [anon_sym_EQ] = ACTIONS(173),
    [anon_sym_COLON_COLON] = ACTIONS(173),
    [anon_sym_EQ_GT] = ACTIONS(173),
    [anon_sym_PIPE] = ACTIONS(173),
    [anon_sym_deriving] = ACTIONS(173),
    [anon_sym_BANG] = ACTIONS(173),
    [sym__variable_pattern] = ACTIONS(175),
    [sym__constructor_pattern] = ACTIONS(175),
    [sym_comment] = ACTIONS(5),
  },
  [27] = {
    [sym_import] = STATE(19),
    [sym__declaration] = STATE(99),
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
    [ts_builtin_sym_end] = ACTIONS(177),
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
    [sym_module_exports] = STATE(102),
    [sym_where] = STATE(103),
    [anon_sym_LPAREN] = ACTIONS(179),
    [anon_sym_where] = ACTIONS(181),
    [sym_comment] = ACTIONS(5),
  },
  [29] = {
    [sym_module_identifier] = ACTIONS(183),
    [sym_comment] = ACTIONS(5),
  },
  [30] = {
    [sym_import_specification] = STATE(108),
    [sym__layout_semicolon] = ACTIONS(185),
    [anon_sym_SEMI] = ACTIONS(187),
    [anon_sym_LPAREN] = ACTIONS(189),
    [anon_sym_as] = ACTIONS(191),
    [anon_sym_hiding] = ACTIONS(193),
    [sym_comment] = ACTIONS(5),
  },
  [31] = {
    [anon_sym_ccall] = ACTIONS(195),
    [anon_sym_stdcall] = ACTIONS(195),
    [anon_sym_cplusplus] = ACTIONS(195),
    [anon_sym_jvm] = ACTIONS(195),
    [anon_sym_dotnet] = ACTIONS(195),
    [sym_comment] = ACTIONS(5),
  },
  [32] = {
    [sym_calling_convention] = STATE(110),
    [anon_sym_ccall] = ACTIONS(197),
    [anon_sym_stdcall] = ACTIONS(197),
    [anon_sym_cplusplus] = ACTIONS(197),
    [anon_sym_jvm] = ACTIONS(197),
    [anon_sym_dotnet] = ACTIONS(197),
    [sym_comment] = ACTIONS(5),
  },
  [33] = {
    [sym__identifier] = STATE(112),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [anon_sym_RPAREN] = ACTIONS(199),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [34] = {
    [sym_constructor] = STATE(113),
    [sym_constructor_identifier] = STATE(114),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
  },
  [35] = {
    [anon_sym_LBRACE] = ACTIONS(81),
    [anon_sym_RBRACE] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_COMMA] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(81),
    [anon_sym_EQ] = ACTIONS(81),
    [anon_sym_where] = ACTIONS(81),
    [anon_sym_BQUOTE] = ACTIONS(81),
    [anon_sym_COLON_COLON] = ACTIONS(81),
    [anon_sym_EQ_GT] = ACTIONS(81),
    [anon_sym_BANG] = ACTIONS(81),
    [sym__variable_pattern] = ACTIONS(203),
    [sym__constructor_pattern] = ACTIONS(203),
    [sym_comment] = ACTIONS(5),
  },
  [36] = {
    [sym_constructor] = STATE(115),
    [sym_constructor_identifier] = STATE(116),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [37] = {
    [sym_where] = STATE(119),
    [anon_sym_where] = ACTIONS(205),
    [anon_sym_EQ_GT] = ACTIONS(207),
    [sym_comment] = ACTIONS(5),
  },
  [38] = {
    [sym_labels] = STATE(124),
    [sym_label] = STATE(125),
    [sym_strict] = STATE(126),
    [sym__identifier] = STATE(127),
    [sym_variable_identifier] = STATE(128),
    [sym_constructor_identifier] = STATE(128),
    [sym_fields] = STATE(124),
    [aux_sym_constructor_repeat1] = STATE(129),
    [anon_sym_LBRACE] = ACTIONS(209),
    [anon_sym_LPAREN] = ACTIONS(211),
    [anon_sym_where] = ACTIONS(213),
    [anon_sym_EQ_GT] = ACTIONS(213),
    [anon_sym_BANG] = ACTIONS(215),
    [sym__variable_pattern] = ACTIONS(217),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [39] = {
    [sym_constructor] = STATE(130),
    [sym_constructor_identifier] = STATE(116),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [40] = {
    [sym_where] = STATE(131),
    [anon_sym_where] = ACTIONS(205),
    [anon_sym_EQ_GT] = ACTIONS(207),
    [sym_comment] = ACTIONS(5),
  },
  [41] = {
    [sym__layout_semicolon] = ACTIONS(219),
    [anon_sym_SEMI] = ACTIONS(221),
    [anon_sym_COMMA] = ACTIONS(221),
    [anon_sym_DASH] = ACTIONS(221),
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
  [42] = {
    [sym__identifier] = STATE(132),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [43] = {
    [sym__constructor_symbol] = STATE(134),
    [aux_sym_constructor_symbol_repeat1] = STATE(135),
    [sym__layout_semicolon] = ACTIONS(223),
    [anon_sym_SEMI] = ACTIONS(225),
    [anon_sym_COMMA] = ACTIONS(225),
    [anon_sym_DASH] = ACTIONS(227),
    [anon_sym_COLON] = ACTIONS(227),
    [anon_sym_BANG] = ACTIONS(227),
    [anon_sym_DOT] = ACTIONS(227),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(227),
    [anon_sym_DOLLAR] = ACTIONS(227),
    [anon_sym_PERCENT] = ACTIONS(227),
    [anon_sym_AMP] = ACTIONS(227),
    [anon_sym_1] = ACTIONS(227),
    [anon_sym_PLUS] = ACTIONS(227),
    [anon_sym_SLASH] = ACTIONS(227),
    [anon_sym_LT] = ACTIONS(227),
    [anon_sym_GT] = ACTIONS(227),
    [anon_sym_QMARK] = ACTIONS(227),
    [anon_sym_CARET] = ACTIONS(227),
  },
  [44] = {
    [anon_sym_RBRACE] = ACTIONS(127),
    [anon_sym_LPAREN] = ACTIONS(127),
    [anon_sym_COMMA] = ACTIONS(127),
    [anon_sym_RPAREN] = ACTIONS(127),
    [anon_sym_EQ] = ACTIONS(127),
    [anon_sym_TILDE] = ACTIONS(127),
    [anon_sym_LBRACK] = ACTIONS(127),
    [anon_sym_RBRACK] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym__] = ACTIONS(127),
    [anon_sym_BQUOTE] = ACTIONS(127),
    [anon_sym_COLON] = ACTIONS(127),
    [sym_list_constructor] = ACTIONS(127),
    [anon_sym_BANG] = ACTIONS(127),
    [sym__variable_pattern] = ACTIONS(129),
    [sym__constructor_pattern] = ACTIONS(129),
    [anon_sym_DOT] = ACTIONS(127),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(129),
    [anon_sym_SQUOTE] = ACTIONS(127),
    [anon_sym_DQUOTE] = ACTIONS(127),
    [anon_sym_POUND] = ACTIONS(127),
    [anon_sym_DOLLAR] = ACTIONS(127),
    [anon_sym_PERCENT] = ACTIONS(127),
    [anon_sym_AMP] = ACTIONS(127),
    [anon_sym_1] = ACTIONS(127),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_SLASH] = ACTIONS(127),
    [anon_sym_LT] = ACTIONS(127),
    [anon_sym_GT] = ACTIONS(127),
    [anon_sym_QMARK] = ACTIONS(127),
    [anon_sym_CARET] = ACTIONS(127),
    [sym__integer_literal] = ACTIONS(127),
    [sym__octal_literal] = ACTIONS(127),
    [sym__hexidecimal_literal] = ACTIONS(127),
  },
  [45] = {
    [aux_sym_fixity_repeat1] = STATE(137),
    [sym__layout_semicolon] = ACTIONS(229),
    [anon_sym_SEMI] = ACTIONS(231),
    [anon_sym_COMMA] = ACTIONS(233),
    [sym_comment] = ACTIONS(5),
  },
  [46] = {
    [sym__layout_semicolon] = ACTIONS(235),
    [anon_sym_SEMI] = ACTIONS(237),
    [anon_sym_COMMA] = ACTIONS(237),
    [sym_comment] = ACTIONS(5),
  },
  [47] = {
    [sym__op] = STATE(138),
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
    [sym__variable_symbol] = STATE(139),
    [aux_sym_variable_symbol_repeat1] = STATE(140),
    [sym__layout_semicolon] = ACTIONS(239),
    [anon_sym_SEMI] = ACTIONS(241),
    [anon_sym_COMMA] = ACTIONS(241),
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
    [sym__layout_semicolon] = ACTIONS(79),
    [anon_sym_SEMI] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_EQ] = ACTIONS(81),
    [anon_sym_EQ_GT] = ACTIONS(81),
    [anon_sym_PIPE] = ACTIONS(81),
    [anon_sym_deriving] = ACTIONS(81),
    [anon_sym_BANG] = ACTIONS(81),
    [sym__variable_pattern] = ACTIONS(203),
    [sym__constructor_pattern] = ACTIONS(203),
    [sym_comment] = ACTIONS(5),
  },
  [50] = {
    [sym_constructor] = STATE(142),
    [sym_constructor_identifier] = STATE(143),
    [sym__constructor_pattern] = ACTIONS(243),
    [sym_comment] = ACTIONS(5),
  },
  [51] = {
    [sym_constructors] = STATE(146),
    [sym_constructor] = STATE(147),
    [sym_deriving] = STATE(148),
    [sym_constructor_identifier] = STATE(149),
    [sym__layout_semicolon] = ACTIONS(245),
    [anon_sym_SEMI] = ACTIONS(247),
    [anon_sym_EQ] = ACTIONS(249),
    [anon_sym_EQ_GT] = ACTIONS(207),
    [anon_sym_deriving] = ACTIONS(251),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [52] = {
    [sym_labels] = STATE(154),
    [sym_label] = STATE(155),
    [sym_strict] = STATE(156),
    [sym__identifier] = STATE(157),
    [sym_variable_identifier] = STATE(26),
    [sym_constructor_identifier] = STATE(26),
    [sym_fields] = STATE(154),
    [aux_sym_constructor_repeat1] = STATE(158),
    [sym__layout_semicolon] = ACTIONS(253),
    [anon_sym_SEMI] = ACTIONS(213),
    [anon_sym_LBRACE] = ACTIONS(255),
    [anon_sym_LPAREN] = ACTIONS(257),
    [anon_sym_EQ] = ACTIONS(213),
    [anon_sym_EQ_GT] = ACTIONS(213),
    [anon_sym_deriving] = ACTIONS(213),
    [anon_sym_BANG] = ACTIONS(259),
    [sym__variable_pattern] = ACTIONS(261),
    [sym__constructor_pattern] = ACTIONS(263),
    [sym_comment] = ACTIONS(5),
  },
  [53] = {
    [anon_sym_LBRACE] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_COMMA] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(81),
    [anon_sym_EQ] = ACTIONS(81),
    [anon_sym_DASH_GT] = ACTIONS(81),
    [anon_sym_EQ_GT] = ACTIONS(81),
    [anon_sym_BANG] = ACTIONS(81),
    [sym__variable_pattern] = ACTIONS(81),
    [sym__constructor_pattern] = ACTIONS(203),
    [sym_comment] = ACTIONS(5),
  },
  [54] = {
    [sym_simple_type] = STATE(159),
    [sym_constructor_identifier] = STATE(160),
    [sym__constructor_pattern] = ACTIONS(71),
    [sym_comment] = ACTIONS(5),
  },
  [55] = {
    [anon_sym_EQ_GT] = ACTIONS(207),
    [sym_comment] = ACTIONS(5),
  },
  [56] = {
    [anon_sym_EQ] = ACTIONS(265),
    [sym_comment] = ACTIONS(5),
  },
  [57] = {
    [sym_labels] = STATE(124),
    [sym_label] = STATE(164),
    [sym_strict] = STATE(165),
    [sym__identifier] = STATE(166),
    [sym_variable_identifier] = STATE(167),
    [sym_constructor_identifier] = STATE(167),
    [sym_fields] = STATE(124),
    [aux_sym_constructor_repeat1] = STATE(168),
    [aux_sym_simple_type_repeat1] = STATE(169),
    [anon_sym_LBRACE] = ACTIONS(209),
    [anon_sym_LPAREN] = ACTIONS(211),
    [anon_sym_EQ] = ACTIONS(267),
    [anon_sym_EQ_GT] = ACTIONS(213),
    [anon_sym_BANG] = ACTIONS(269),
    [sym__variable_pattern] = ACTIONS(271),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
  },
  [58] = {
    [anon_sym_LBRACE] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_COMMA] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(81),
    [anon_sym_EQ] = ACTIONS(81),
    [anon_sym_BANG] = ACTIONS(81),
    [sym__variable_pattern] = ACTIONS(81),
    [sym__constructor_pattern] = ACTIONS(203),
    [sym_comment] = ACTIONS(5),
  },
  [59] = {
    [anon_sym_EQ] = ACTIONS(273),
    [sym_comment] = ACTIONS(5),
  },
  [60] = {
    [sym_labels] = STATE(175),
    [sym_label] = STATE(176),
    [sym_strict] = STATE(177),
    [sym__identifier] = STATE(178),
    [sym_variable_identifier] = STATE(179),
    [sym_constructor_identifier] = STATE(179),
    [sym_fields] = STATE(175),
    [aux_sym_constructor_repeat1] = STATE(180),
    [anon_sym_LBRACE] = ACTIONS(275),
    [anon_sym_LPAREN] = ACTIONS(277),
    [anon_sym_EQ] = ACTIONS(213),
    [anon_sym_BANG] = ACTIONS(279),
    [sym__variable_pattern] = ACTIONS(281),
    [sym__constructor_pattern] = ACTIONS(71),
    [sym_comment] = ACTIONS(5),
  },
  [61] = {
    [anon_sym_LPAREN] = ACTIONS(283),
    [anon_sym_EQ] = ACTIONS(283),
    [anon_sym_TILDE] = ACTIONS(283),
    [anon_sym_LBRACK] = ACTIONS(283),
    [anon_sym_AT] = ACTIONS(283),
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
  [62] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(287),
  },
  [63] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(289),
  },
  [64] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(291),
  },
  [65] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(293),
  },
  [66] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(295),
  },
  [67] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(297),
  },
  [68] = {
    [sym__char_escape] = STATE(183),
    [sym__ascii] = STATE(183),
    [sym_comment] = ACTIONS(97),
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
  [69] = {
    [anon_sym_SEMI] = ACTIONS(311),
    [anon_sym_LBRACE] = ACTIONS(311),
    [anon_sym_RBRACE] = ACTIONS(311),
    [anon_sym_LPAREN] = ACTIONS(311),
    [anon_sym_RPAREN] = ACTIONS(311),
    [anon_sym_EQ] = ACTIONS(311),
    [anon_sym_TILDE] = ACTIONS(311),
    [anon_sym_LBRACK] = ACTIONS(311),
    [anon_sym_RBRACK] = ACTIONS(311),
    [anon_sym_DASH] = ACTIONS(311),
    [anon_sym_AT] = ACTIONS(311),
    [anon_sym__] = ACTIONS(311),
    [anon_sym_BQUOTE] = ACTIONS(311),
    [anon_sym_COLON] = ACTIONS(311),
    [anon_sym_PIPE] = ACTIONS(311),
    [anon_sym_BANG] = ACTIONS(311),
    [anon_sym_DOT] = ACTIONS(311),
    [sym_comment] = ACTIONS(97),
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
    [anon_sym_BSLASH] = ACTIONS(311),
    [sym__space] = ACTIONS(311),
    [sym__newline] = ACTIONS(311),
    [sym__tab] = ACTIONS(311),
    [sym__vertical_tab] = ACTIONS(311),
  },
  [70] = {
    [anon_sym_SEMI] = ACTIONS(313),
    [anon_sym_LBRACE] = ACTIONS(313),
    [anon_sym_RBRACE] = ACTIONS(313),
    [anon_sym_LPAREN] = ACTIONS(313),
    [anon_sym_RPAREN] = ACTIONS(313),
    [anon_sym_EQ] = ACTIONS(313),
    [anon_sym_TILDE] = ACTIONS(313),
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
    [sym_comment] = ACTIONS(97),
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
    [anon_sym_BSLASH] = ACTIONS(313),
    [sym__space] = ACTIONS(313),
    [sym__newline] = ACTIONS(313),
    [sym__tab] = ACTIONS(313),
    [sym__vertical_tab] = ACTIONS(313),
  },
  [71] = {
    [anon_sym_SEMI] = ACTIONS(315),
    [anon_sym_LBRACE] = ACTIONS(315),
    [anon_sym_RBRACE] = ACTIONS(315),
    [anon_sym_LPAREN] = ACTIONS(315),
    [anon_sym_RPAREN] = ACTIONS(315),
    [anon_sym_EQ] = ACTIONS(315),
    [anon_sym_TILDE] = ACTIONS(315),
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
    [sym_comment] = ACTIONS(97),
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
    [anon_sym_BSLASH] = ACTIONS(315),
    [sym__space] = ACTIONS(315),
    [sym__newline] = ACTIONS(315),
    [sym__tab] = ACTIONS(315),
    [sym__vertical_tab] = ACTIONS(315),
  },
  [72] = {
    [anon_sym_SEMI] = ACTIONS(317),
    [anon_sym_LBRACE] = ACTIONS(317),
    [anon_sym_RBRACE] = ACTIONS(317),
    [anon_sym_LPAREN] = ACTIONS(317),
    [anon_sym_RPAREN] = ACTIONS(317),
    [anon_sym_EQ] = ACTIONS(317),
    [anon_sym_TILDE] = ACTIONS(317),
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
    [sym_comment] = ACTIONS(97),
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
    [anon_sym_BSLASH] = ACTIONS(317),
    [sym__space] = ACTIONS(317),
    [sym__newline] = ACTIONS(317),
    [sym__tab] = ACTIONS(317),
    [sym__vertical_tab] = ACTIONS(317),
  },
  [73] = {
    [sym__layout_semicolon] = ACTIONS(319),
    [anon_sym_SEMI] = ACTIONS(321),
    [anon_sym_where] = ACTIONS(321),
    [anon_sym_do] = ACTIONS(321),
    [sym__variable_pattern] = ACTIONS(323),
    [sym__constructor_pattern] = ACTIONS(323),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(323),
    [anon_sym_SQUOTE] = ACTIONS(321),
    [anon_sym_DQUOTE] = ACTIONS(321),
    [sym__integer_literal] = ACTIONS(321),
    [sym__octal_literal] = ACTIONS(321),
    [sym__hexidecimal_literal] = ACTIONS(321),
  },
  [74] = {
    [anon_sym_SEMI] = ACTIONS(325),
    [anon_sym_LBRACE] = ACTIONS(325),
    [anon_sym_RBRACE] = ACTIONS(325),
    [anon_sym_LPAREN] = ACTIONS(325),
    [anon_sym_RPAREN] = ACTIONS(325),
    [anon_sym_EQ] = ACTIONS(325),
    [anon_sym_TILDE] = ACTIONS(325),
    [anon_sym_LBRACK] = ACTIONS(325),
    [anon_sym_RBRACK] = ACTIONS(325),
    [anon_sym_DASH] = ACTIONS(325),
    [anon_sym_AT] = ACTIONS(325),
    [anon_sym__] = ACTIONS(325),
    [anon_sym_BQUOTE] = ACTIONS(325),
    [anon_sym_COLON] = ACTIONS(325),
    [anon_sym_PIPE] = ACTIONS(325),
    [anon_sym_BANG] = ACTIONS(325),
    [anon_sym_DOT] = ACTIONS(325),
    [sym_comment] = ACTIONS(97),
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
    [anon_sym_BSLASH] = ACTIONS(325),
    [sym__space] = ACTIONS(325),
    [sym__newline] = ACTIONS(325),
    [sym__tab] = ACTIONS(325),
    [sym__vertical_tab] = ACTIONS(325),
  },
  [75] = {
    [anon_sym_SEMI] = ACTIONS(327),
    [anon_sym_LBRACE] = ACTIONS(327),
    [anon_sym_RBRACE] = ACTIONS(327),
    [anon_sym_LPAREN] = ACTIONS(327),
    [anon_sym_RPAREN] = ACTIONS(327),
    [anon_sym_EQ] = ACTIONS(327),
    [anon_sym_TILDE] = ACTIONS(327),
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
    [sym_comment] = ACTIONS(97),
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
    [anon_sym_BSLASH] = ACTIONS(327),
    [sym__space] = ACTIONS(327),
    [sym__newline] = ACTIONS(327),
    [sym__tab] = ACTIONS(327),
    [sym__vertical_tab] = ACTIONS(327),
  },
  [76] = {
    [sym__char_escape] = STATE(189),
    [sym__ascii] = STATE(189),
    [anon_sym_SEMI] = ACTIONS(313),
    [anon_sym_LBRACE] = ACTIONS(313),
    [anon_sym_RBRACE] = ACTIONS(313),
    [anon_sym_LPAREN] = ACTIONS(313),
    [anon_sym_RPAREN] = ACTIONS(313),
    [anon_sym_EQ] = ACTIONS(313),
    [anon_sym_TILDE] = ACTIONS(313),
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
    [sym_comment] = ACTIONS(97),
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
  [77] = {
    [anon_sym_SEMI] = ACTIONS(341),
    [anon_sym_LBRACE] = ACTIONS(341),
    [anon_sym_RBRACE] = ACTIONS(341),
    [anon_sym_LPAREN] = ACTIONS(341),
    [anon_sym_RPAREN] = ACTIONS(341),
    [anon_sym_EQ] = ACTIONS(341),
    [anon_sym_TILDE] = ACTIONS(341),
    [anon_sym_LBRACK] = ACTIONS(341),
    [anon_sym_RBRACK] = ACTIONS(341),
    [anon_sym_DASH] = ACTIONS(341),
    [anon_sym_AT] = ACTIONS(341),
    [anon_sym__] = ACTIONS(341),
    [anon_sym_BQUOTE] = ACTIONS(341),
    [anon_sym_COLON] = ACTIONS(341),
    [anon_sym_PIPE] = ACTIONS(341),
    [anon_sym_BANG] = ACTIONS(341),
    [anon_sym_DOT] = ACTIONS(341),
    [sym_comment] = ACTIONS(97),
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
    [anon_sym_BSLASH] = ACTIONS(341),
    [sym__space] = ACTIONS(341),
    [sym__newline] = ACTIONS(341),
    [sym__tab] = ACTIONS(341),
    [sym__vertical_tab] = ACTIONS(341),
  },
  [78] = {
    [sym__gap] = STATE(194),
    [sym__graphic] = STATE(194),
    [sym__small] = STATE(74),
    [sym__large] = STATE(74),
    [sym__symbol] = STATE(74),
    [sym__special] = STATE(74),
    [sym__escape] = STATE(194),
    [anon_sym_SEMI] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(107),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_RPAREN] = ACTIONS(107),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_TILDE] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_RBRACK] = ACTIONS(107),
    [anon_sym_DASH] = ACTIONS(109),
    [anon_sym_AT] = ACTIONS(109),
    [anon_sym__] = ACTIONS(111),
    [anon_sym_BQUOTE] = ACTIONS(107),
    [anon_sym_COLON] = ACTIONS(109),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_BANG] = ACTIONS(109),
    [anon_sym_DOT] = ACTIONS(109),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(343),
    [anon_sym_DQUOTE] = ACTIONS(345),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(117),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(111),
    [sym__ascii_large] = ACTIONS(119),
    [anon_sym_POUND] = ACTIONS(109),
    [anon_sym_DOLLAR] = ACTIONS(109),
    [anon_sym_PERCENT] = ACTIONS(109),
    [anon_sym_AMP] = ACTIONS(109),
    [anon_sym_1] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(109),
    [anon_sym_SLASH] = ACTIONS(109),
    [anon_sym_LT] = ACTIONS(109),
    [anon_sym_GT] = ACTIONS(109),
    [anon_sym_QMARK] = ACTIONS(109),
    [anon_sym_CARET] = ACTIONS(109),
    [anon_sym_BSLASH] = ACTIONS(121),
    [sym__space] = ACTIONS(123),
    [sym__newline] = ACTIONS(123),
    [sym__tab] = ACTIONS(123),
    [sym__vertical_tab] = ACTIONS(123),
  },
  [79] = {
    [ts_builtin_sym_end] = ACTIONS(347),
    [anon_sym_RBRACE] = ACTIONS(349),
    [anon_sym_import] = ACTIONS(349),
    [anon_sym_foreign] = ACTIONS(349),
    [anon_sym_default] = ACTIONS(349),
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
  [80] = {
    [sym_where] = STATE(199),
    [sym_general_constructor] = STATE(200),
    [sym__variable] = STATE(200),
    [sym_qualified_variable_identifier] = STATE(201),
    [sym__expression] = STATE(202),
    [sym_do_expression] = STATE(200),
    [sym__literal] = STATE(200),
    [sym__identifier] = STATE(200),
    [sym_variable_identifier] = STATE(203),
    [sym_constructor_identifier] = STATE(204),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [aux_sym_function_body_repeat1] = STATE(205),
    [sym__layout_semicolon] = ACTIONS(353),
    [anon_sym_SEMI] = ACTIONS(355),
    [anon_sym_where] = ACTIONS(205),
    [anon_sym_do] = ACTIONS(357),
    [sym__variable_pattern] = ACTIONS(359),
    [sym__constructor_pattern] = ACTIONS(361),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym__integer_literal] = ACTIONS(41),
    [sym__octal_literal] = ACTIONS(41),
    [sym__hexidecimal_literal] = ACTIONS(41),
  },
  [81] = {
    [sym__layout_semicolon] = ACTIONS(363),
    [anon_sym_SEMI] = ACTIONS(365),
    [sym_comment] = ACTIONS(5),
  },
  [82] = {
    [sym__function_pattern] = STATE(209),
    [sym_label_pattern] = STATE(86),
    [sym_irrefutable_pattern] = STATE(86),
    [sym_list_pattern] = STATE(86),
    [sym_tuple_pattern] = STATE(86),
    [sym_parenthesized_pattern] = STATE(86),
    [sym__pattern] = STATE(210),
    [sym_negative_literal] = STATE(211),
    [sym_general_constructor] = STATE(211),
    [sym_as_pattern] = STATE(86),
    [sym_wildcard] = STATE(86),
    [sym__variable] = STATE(212),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym__literal] = STATE(86),
    [sym__identifier] = STATE(94),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(213),
    [sym_integer] = STATE(89),
    [sym_char] = STATE(89),
    [sym_string] = STATE(89),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_TILDE] = ACTIONS(367),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym_DASH] = ACTIONS(369),
    [anon_sym__] = ACTIONS(151),
    [sym_list_constructor] = ACTIONS(153),
    [sym__variable_pattern] = ACTIONS(155),
    [sym__constructor_pattern] = ACTIONS(371),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [83] = {
    [sym__function_pattern] = STATE(214),
    [sym_label_pattern] = STATE(86),
    [sym_irrefutable_pattern] = STATE(86),
    [sym_list_pattern] = STATE(86),
    [sym_tuple_pattern] = STATE(86),
    [sym_parenthesized_pattern] = STATE(86),
    [sym_as_pattern] = STATE(86),
    [sym_wildcard] = STATE(86),
    [sym__variable] = STATE(93),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym__literal] = STATE(86),
    [sym__identifier] = STATE(94),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(96),
    [sym_integer] = STATE(89),
    [sym_char] = STATE(89),
    [sym_string] = STATE(89),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_TILDE] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym__] = ACTIONS(151),
    [sym_list_constructor] = ACTIONS(153),
    [sym__variable_pattern] = ACTIONS(155),
    [sym__constructor_pattern] = ACTIONS(157),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [84] = {
    [sym__function_pattern] = STATE(217),
    [sym_label_pattern] = STATE(86),
    [sym_irrefutable_pattern] = STATE(86),
    [sym_list_pattern] = STATE(86),
    [sym_tuple_pattern] = STATE(86),
    [sym_parenthesized_pattern] = STATE(86),
    [sym_as_pattern] = STATE(86),
    [sym_wildcard] = STATE(86),
    [sym__variable] = STATE(218),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym__literal] = STATE(86),
    [sym__identifier] = STATE(94),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(96),
    [sym_integer] = STATE(89),
    [sym_char] = STATE(89),
    [sym_string] = STATE(89),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_TILDE] = ACTIONS(373),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym__] = ACTIONS(151),
    [sym_list_constructor] = ACTIONS(153),
    [sym__variable_pattern] = ACTIONS(155),
    [sym__constructor_pattern] = ACTIONS(375),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [85] = {
    [anon_sym_LPAREN] = ACTIONS(377),
    [anon_sym_COMMA] = ACTIONS(377),
    [anon_sym_RPAREN] = ACTIONS(377),
    [anon_sym_EQ] = ACTIONS(377),
    [anon_sym_TILDE] = ACTIONS(377),
    [anon_sym_LBRACK] = ACTIONS(377),
    [anon_sym_RBRACK] = ACTIONS(377),
    [anon_sym_DASH] = ACTIONS(377),
    [anon_sym__] = ACTIONS(377),
    [anon_sym_BQUOTE] = ACTIONS(377),
    [anon_sym_COLON] = ACTIONS(377),
    [sym_list_constructor] = ACTIONS(377),
    [anon_sym_BANG] = ACTIONS(377),
    [sym__variable_pattern] = ACTIONS(379),
    [sym__constructor_pattern] = ACTIONS(379),
    [anon_sym_DOT] = ACTIONS(377),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(379),
    [anon_sym_SQUOTE] = ACTIONS(377),
    [anon_sym_DQUOTE] = ACTIONS(377),
    [anon_sym_POUND] = ACTIONS(377),
    [anon_sym_DOLLAR] = ACTIONS(377),
    [anon_sym_PERCENT] = ACTIONS(377),
    [anon_sym_AMP] = ACTIONS(377),
    [anon_sym_1] = ACTIONS(377),
    [anon_sym_PLUS] = ACTIONS(377),
    [anon_sym_SLASH] = ACTIONS(377),
    [anon_sym_LT] = ACTIONS(377),
    [anon_sym_GT] = ACTIONS(377),
    [anon_sym_QMARK] = ACTIONS(377),
    [anon_sym_CARET] = ACTIONS(377),
    [sym__integer_literal] = ACTIONS(377),
    [sym__octal_literal] = ACTIONS(377),
    [sym__hexidecimal_literal] = ACTIONS(377),
  },
  [86] = {
    [anon_sym_LPAREN] = ACTIONS(381),
    [anon_sym_COMMA] = ACTIONS(381),
    [anon_sym_RPAREN] = ACTIONS(381),
    [anon_sym_EQ] = ACTIONS(381),
    [anon_sym_TILDE] = ACTIONS(381),
    [anon_sym_LBRACK] = ACTIONS(381),
    [anon_sym_RBRACK] = ACTIONS(381),
    [anon_sym_DASH] = ACTIONS(381),
    [anon_sym__] = ACTIONS(381),
    [anon_sym_BQUOTE] = ACTIONS(381),
    [anon_sym_COLON] = ACTIONS(381),
    [sym_list_constructor] = ACTIONS(381),
    [anon_sym_BANG] = ACTIONS(381),
    [sym__variable_pattern] = ACTIONS(383),
    [sym__constructor_pattern] = ACTIONS(383),
    [anon_sym_DOT] = ACTIONS(381),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(383),
    [anon_sym_SQUOTE] = ACTIONS(381),
    [anon_sym_DQUOTE] = ACTIONS(381),
    [anon_sym_POUND] = ACTIONS(381),
    [anon_sym_DOLLAR] = ACTIONS(381),
    [anon_sym_PERCENT] = ACTIONS(381),
    [anon_sym_AMP] = ACTIONS(381),
    [anon_sym_1] = ACTIONS(381),
    [anon_sym_PLUS] = ACTIONS(381),
    [anon_sym_SLASH] = ACTIONS(381),
    [anon_sym_LT] = ACTIONS(381),
    [anon_sym_GT] = ACTIONS(381),
    [anon_sym_QMARK] = ACTIONS(381),
    [anon_sym_CARET] = ACTIONS(381),
    [sym__integer_literal] = ACTIONS(381),
    [sym__octal_literal] = ACTIONS(381),
    [sym__hexidecimal_literal] = ACTIONS(381),
  },
  [87] = {
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_RBRACE] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_COMMA] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(75),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_TILDE] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(75),
    [anon_sym_RBRACK] = ACTIONS(75),
    [anon_sym_DASH] = ACTIONS(75),
    [anon_sym_AT] = ACTIONS(75),
    [anon_sym__] = ACTIONS(75),
    [anon_sym_BQUOTE] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(75),
    [sym_list_constructor] = ACTIONS(75),
    [anon_sym_BANG] = ACTIONS(75),
    [sym__variable_pattern] = ACTIONS(77),
    [sym__constructor_pattern] = ACTIONS(77),
    [anon_sym_DOT] = ACTIONS(75),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(75),
    [anon_sym_DOLLAR] = ACTIONS(75),
    [anon_sym_PERCENT] = ACTIONS(75),
    [anon_sym_AMP] = ACTIONS(75),
    [anon_sym_1] = ACTIONS(75),
    [anon_sym_PLUS] = ACTIONS(75),
    [anon_sym_SLASH] = ACTIONS(75),
    [anon_sym_LT] = ACTIONS(75),
    [anon_sym_GT] = ACTIONS(75),
    [anon_sym_QMARK] = ACTIONS(75),
    [anon_sym_CARET] = ACTIONS(75),
    [sym__integer_literal] = ACTIONS(75),
    [sym__octal_literal] = ACTIONS(75),
    [sym__hexidecimal_literal] = ACTIONS(75),
  },
  [88] = {
    [anon_sym_LBRACE] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_EQ] = ACTIONS(81),
    [anon_sym_TILDE] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym__] = ACTIONS(81),
    [sym_list_constructor] = ACTIONS(81),
    [sym__variable_pattern] = ACTIONS(203),
    [sym__constructor_pattern] = ACTIONS(203),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(203),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [sym__integer_literal] = ACTIONS(81),
    [sym__octal_literal] = ACTIONS(81),
    [sym__hexidecimal_literal] = ACTIONS(81),
  },
  [89] = {
    [anon_sym_RBRACE] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_COMMA] = ACTIONS(87),
    [anon_sym_RPAREN] = ACTIONS(87),
    [anon_sym_EQ] = ACTIONS(87),
    [anon_sym_TILDE] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_RBRACK] = ACTIONS(87),
    [anon_sym_DASH] = ACTIONS(87),
    [anon_sym__] = ACTIONS(87),
    [anon_sym_BQUOTE] = ACTIONS(87),
    [anon_sym_COLON] = ACTIONS(87),
    [sym_list_constructor] = ACTIONS(87),
    [anon_sym_BANG] = ACTIONS(87),
    [sym__variable_pattern] = ACTIONS(89),
    [sym__constructor_pattern] = ACTIONS(89),
    [anon_sym_DOT] = ACTIONS(87),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(87),
    [anon_sym_POUND] = ACTIONS(87),
    [anon_sym_DOLLAR] = ACTIONS(87),
    [anon_sym_PERCENT] = ACTIONS(87),
    [anon_sym_AMP] = ACTIONS(87),
    [anon_sym_1] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(87),
    [anon_sym_SLASH] = ACTIONS(87),
    [anon_sym_LT] = ACTIONS(87),
    [anon_sym_GT] = ACTIONS(87),
    [anon_sym_QMARK] = ACTIONS(87),
    [anon_sym_CARET] = ACTIONS(87),
    [sym__integer_literal] = ACTIONS(87),
    [sym__octal_literal] = ACTIONS(87),
    [sym__hexidecimal_literal] = ACTIONS(87),
  },
  [90] = {
    [sym__graphic] = STATE(219),
    [sym__small] = STATE(66),
    [sym__large] = STATE(66),
    [sym__symbol] = STATE(66),
    [sym__special] = STATE(66),
    [sym__escape] = STATE(219),
    [anon_sym_SEMI] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(91),
    [anon_sym_RBRACE] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(91),
    [anon_sym_RPAREN] = ACTIONS(91),
    [anon_sym_EQ] = ACTIONS(93),
    [anon_sym_TILDE] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_RBRACK] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(93),
    [anon_sym_AT] = ACTIONS(93),
    [anon_sym__] = ACTIONS(95),
    [anon_sym_BQUOTE] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(93),
    [anon_sym_PIPE] = ACTIONS(93),
    [anon_sym_BANG] = ACTIONS(93),
    [anon_sym_DOT] = ACTIONS(93),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(385),
    [anon_sym_DQUOTE] = ACTIONS(385),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(101),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(95),
    [sym__ascii_large] = ACTIONS(103),
    [anon_sym_POUND] = ACTIONS(93),
    [anon_sym_DOLLAR] = ACTIONS(93),
    [anon_sym_PERCENT] = ACTIONS(93),
    [anon_sym_AMP] = ACTIONS(93),
    [anon_sym_1] = ACTIONS(93),
    [anon_sym_PLUS] = ACTIONS(93),
    [anon_sym_SLASH] = ACTIONS(93),
    [anon_sym_LT] = ACTIONS(93),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_QMARK] = ACTIONS(93),
    [anon_sym_CARET] = ACTIONS(93),
    [anon_sym_BSLASH] = ACTIONS(105),
    [sym__space] = ACTIONS(385),
  },
  [91] = {
    [sym__gap] = STATE(72),
    [sym__graphic] = STATE(72),
    [sym__small] = STATE(74),
    [sym__large] = STATE(74),
    [sym__symbol] = STATE(74),
    [sym__special] = STATE(74),
    [sym__escape] = STATE(72),
    [aux_sym_string_repeat1] = STATE(221),
    [anon_sym_SEMI] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(107),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_RPAREN] = ACTIONS(107),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_TILDE] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_RBRACK] = ACTIONS(107),
    [anon_sym_DASH] = ACTIONS(109),
    [anon_sym_AT] = ACTIONS(109),
    [anon_sym__] = ACTIONS(111),
    [anon_sym_BQUOTE] = ACTIONS(107),
    [anon_sym_COLON] = ACTIONS(109),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_BANG] = ACTIONS(109),
    [anon_sym_DOT] = ACTIONS(109),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(387),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(117),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(111),
    [sym__ascii_large] = ACTIONS(119),
    [anon_sym_POUND] = ACTIONS(109),
    [anon_sym_DOLLAR] = ACTIONS(109),
    [anon_sym_PERCENT] = ACTIONS(109),
    [anon_sym_AMP] = ACTIONS(109),
    [anon_sym_1] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(109),
    [anon_sym_SLASH] = ACTIONS(109),
    [anon_sym_LT] = ACTIONS(109),
    [anon_sym_GT] = ACTIONS(109),
    [anon_sym_QMARK] = ACTIONS(109),
    [anon_sym_CARET] = ACTIONS(109),
    [anon_sym_BSLASH] = ACTIONS(121),
    [sym__space] = ACTIONS(123),
    [sym__newline] = ACTIONS(123),
    [sym__tab] = ACTIONS(123),
    [sym__vertical_tab] = ACTIONS(123),
  },
  [92] = {
    [anon_sym_LPAREN] = ACTIONS(389),
    [anon_sym_EQ] = ACTIONS(389),
    [anon_sym_TILDE] = ACTIONS(389),
    [anon_sym_LBRACK] = ACTIONS(389),
    [anon_sym__] = ACTIONS(389),
    [sym_list_constructor] = ACTIONS(389),
    [sym__variable_pattern] = ACTIONS(391),
    [sym__constructor_pattern] = ACTIONS(391),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(391),
    [anon_sym_SQUOTE] = ACTIONS(389),
    [anon_sym_DQUOTE] = ACTIONS(389),
    [sym__integer_literal] = ACTIONS(389),
    [sym__octal_literal] = ACTIONS(389),
    [sym__hexidecimal_literal] = ACTIONS(389),
  },
  [93] = {
    [anon_sym_AT] = ACTIONS(393),
    [sym_comment] = ACTIONS(5),
  },
  [94] = {
    [anon_sym_LBRACE] = ACTIONS(395),
    [anon_sym_LPAREN] = ACTIONS(381),
    [anon_sym_COMMA] = ACTIONS(381),
    [anon_sym_RPAREN] = ACTIONS(381),
    [anon_sym_EQ] = ACTIONS(381),
    [anon_sym_TILDE] = ACTIONS(381),
    [anon_sym_LBRACK] = ACTIONS(381),
    [anon_sym_RBRACK] = ACTIONS(381),
    [anon_sym_DASH] = ACTIONS(381),
    [anon_sym__] = ACTIONS(381),
    [anon_sym_BQUOTE] = ACTIONS(381),
    [anon_sym_COLON] = ACTIONS(381),
    [sym_list_constructor] = ACTIONS(381),
    [anon_sym_BANG] = ACTIONS(381),
    [sym__variable_pattern] = ACTIONS(383),
    [sym__constructor_pattern] = ACTIONS(383),
    [anon_sym_DOT] = ACTIONS(381),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(383),
    [anon_sym_SQUOTE] = ACTIONS(381),
    [anon_sym_DQUOTE] = ACTIONS(381),
    [anon_sym_POUND] = ACTIONS(381),
    [anon_sym_DOLLAR] = ACTIONS(381),
    [anon_sym_PERCENT] = ACTIONS(381),
    [anon_sym_AMP] = ACTIONS(381),
    [anon_sym_1] = ACTIONS(381),
    [anon_sym_PLUS] = ACTIONS(381),
    [anon_sym_SLASH] = ACTIONS(381),
    [anon_sym_LT] = ACTIONS(381),
    [anon_sym_GT] = ACTIONS(381),
    [anon_sym_QMARK] = ACTIONS(381),
    [anon_sym_CARET] = ACTIONS(381),
    [sym__integer_literal] = ACTIONS(381),
    [sym__octal_literal] = ACTIONS(381),
    [sym__hexidecimal_literal] = ACTIONS(381),
  },
  [95] = {
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_LPAREN] = ACTIONS(173),
    [anon_sym_COMMA] = ACTIONS(173),
    [anon_sym_RPAREN] = ACTIONS(173),
    [anon_sym_EQ] = ACTIONS(173),
    [anon_sym_TILDE] = ACTIONS(173),
    [anon_sym_LBRACK] = ACTIONS(173),
    [anon_sym_RBRACK] = ACTIONS(173),
    [anon_sym_DASH] = ACTIONS(173),
    [anon_sym_AT] = ACTIONS(165),
    [anon_sym__] = ACTIONS(173),
    [anon_sym_BQUOTE] = ACTIONS(173),
    [anon_sym_COLON] = ACTIONS(173),
    [sym_list_constructor] = ACTIONS(173),
    [anon_sym_BANG] = ACTIONS(173),
    [sym__variable_pattern] = ACTIONS(175),
    [sym__constructor_pattern] = ACTIONS(175),
    [anon_sym_DOT] = ACTIONS(173),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(175),
    [anon_sym_SQUOTE] = ACTIONS(173),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [anon_sym_POUND] = ACTIONS(173),
    [anon_sym_DOLLAR] = ACTIONS(173),
    [anon_sym_PERCENT] = ACTIONS(173),
    [anon_sym_AMP] = ACTIONS(173),
    [anon_sym_1] = ACTIONS(173),
    [anon_sym_PLUS] = ACTIONS(173),
    [anon_sym_SLASH] = ACTIONS(173),
    [anon_sym_LT] = ACTIONS(173),
    [anon_sym_GT] = ACTIONS(173),
    [anon_sym_QMARK] = ACTIONS(173),
    [anon_sym_CARET] = ACTIONS(173),
    [sym__integer_literal] = ACTIONS(173),
    [sym__octal_literal] = ACTIONS(173),
    [sym__hexidecimal_literal] = ACTIONS(173),
  },
  [96] = {
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_RBRACE] = ACTIONS(173),
    [anon_sym_LPAREN] = ACTIONS(173),
    [anon_sym_COMMA] = ACTIONS(173),
    [anon_sym_RPAREN] = ACTIONS(173),
    [anon_sym_EQ] = ACTIONS(173),
    [anon_sym_TILDE] = ACTIONS(173),
    [anon_sym_LBRACK] = ACTIONS(173),
    [anon_sym_RBRACK] = ACTIONS(173),
    [anon_sym__] = ACTIONS(173),
    [anon_sym_BQUOTE] = ACTIONS(173),
    [anon_sym_COLON_COLON] = ACTIONS(173),
    [sym_list_constructor] = ACTIONS(173),
    [sym__variable_pattern] = ACTIONS(175),
    [sym__constructor_pattern] = ACTIONS(175),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(175),
    [anon_sym_SQUOTE] = ACTIONS(173),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [sym__integer_literal] = ACTIONS(173),
    [sym__octal_literal] = ACTIONS(173),
    [sym__hexidecimal_literal] = ACTIONS(173),
  },
  [97] = {
    [sym__function_pattern] = STATE(224),
    [sym_label_pattern] = STATE(86),
    [sym_irrefutable_pattern] = STATE(86),
    [sym_list_pattern] = STATE(86),
    [sym_tuple_pattern] = STATE(86),
    [sym_parenthesized_pattern] = STATE(86),
    [sym_as_pattern] = STATE(86),
    [sym_wildcard] = STATE(86),
    [sym__variable] = STATE(93),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym__literal] = STATE(86),
    [sym__identifier] = STATE(94),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(96),
    [sym_integer] = STATE(89),
    [sym_char] = STATE(89),
    [sym_string] = STATE(89),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_EQ] = ACTIONS(397),
    [anon_sym_TILDE] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym__] = ACTIONS(151),
    [sym_list_constructor] = ACTIONS(153),
    [sym__variable_pattern] = ACTIONS(155),
    [sym__constructor_pattern] = ACTIONS(157),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [98] = {
    [sym_type] = STATE(230),
    [sym__generic_type_constructor] = STATE(231),
    [sym_tupling_constructor] = STATE(227),
    [sym_tuple] = STATE(231),
    [sym_list] = STATE(231),
    [sym_parenthesized_constructor] = STATE(231),
    [sym_context] = STATE(232),
    [sym_constructor] = STATE(233),
    [sym_variable_identifier] = STATE(234),
    [sym_constructor_identifier] = STATE(235),
    [sym__type_constructors] = STATE(227),
    [sym_qualified_type_constructor] = STATE(236),
    [anon_sym_LPAREN] = ACTIONS(399),
    [anon_sym_LBRACK] = ACTIONS(401),
    [sym_unit_type] = ACTIONS(403),
    [sym_list_constructor] = ACTIONS(403),
    [sym_function_constructor] = ACTIONS(403),
    [sym__variable_pattern] = ACTIONS(405),
    [sym__constructor_pattern] = ACTIONS(407),
    [sym_module_identifier] = ACTIONS(409),
    [sym_comment] = ACTIONS(5),
  },
  [99] = {
    [sym__layout_semicolon] = ACTIONS(411),
    [anon_sym_SEMI] = ACTIONS(413),
    [sym_comment] = ACTIONS(5),
  },
  [100] = {
    [sym_export] = STATE(239),
    [sym__identifier] = STATE(240),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [anon_sym_RPAREN] = ACTIONS(415),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [101] = {
    [sym__declarations] = STATE(243),
    [sym__layout_open_brace] = ACTIONS(417),
    [anon_sym_LBRACE] = ACTIONS(419),
    [sym_comment] = ACTIONS(5),
  },
  [102] = {
    [sym_where] = STATE(244),
    [anon_sym_where] = ACTIONS(181),
    [sym_comment] = ACTIONS(5),
  },
  [103] = {
    [ts_builtin_sym_end] = ACTIONS(421),
    [sym_comment] = ACTIONS(5),
  },
  [104] = {
    [sym_import_specification] = STATE(246),
    [sym__layout_semicolon] = ACTIONS(423),
    [anon_sym_SEMI] = ACTIONS(425),
    [anon_sym_LPAREN] = ACTIONS(189),
    [anon_sym_as] = ACTIONS(427),
    [anon_sym_hiding] = ACTIONS(193),
    [sym_comment] = ACTIONS(5),
  },
  [105] = {
    [sym__identifier] = STATE(248),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [anon_sym_RPAREN] = ACTIONS(429),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [106] = {
    [sym_module_identifier] = ACTIONS(431),
    [sym_comment] = ACTIONS(5),
  },
  [107] = {
    [anon_sym_LPAREN] = ACTIONS(433),
    [sym_comment] = ACTIONS(5),
  },
  [108] = {
    [sym__layout_semicolon] = ACTIONS(423),
    [anon_sym_SEMI] = ACTIONS(425),
    [sym_comment] = ACTIONS(5),
  },
  [109] = {
    [anon_sym_unsafe] = ACTIONS(435),
    [anon_sym_safe] = ACTIONS(435),
    [sym__variable_pattern] = ACTIONS(437),
    [sym__constructor_pattern] = ACTIONS(437),
    [sym_comment] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(435),
  },
  [110] = {
    [sym_safety] = STATE(253),
    [sym_type_signature] = STATE(254),
    [sym__identifier] = STATE(255),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [sym_string] = STATE(256),
    [anon_sym_unsafe] = ACTIONS(439),
    [anon_sym_safe] = ACTIONS(439),
    [sym__variable_pattern] = ACTIONS(217),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(441),
  },
  [111] = {
    [sym__layout_semicolon] = ACTIONS(443),
    [anon_sym_SEMI] = ACTIONS(445),
    [sym_comment] = ACTIONS(5),
  },
  [112] = {
    [aux_sym_export_repeat1] = STATE(259),
    [anon_sym_COMMA] = ACTIONS(447),
    [anon_sym_RPAREN] = ACTIONS(449),
    [sym_comment] = ACTIONS(5),
  },
  [113] = {
    [aux_sym_context_repeat1] = STATE(262),
    [anon_sym_COMMA] = ACTIONS(451),
    [anon_sym_RPAREN] = ACTIONS(453),
    [sym_comment] = ACTIONS(5),
  },
  [114] = {
    [sym_labels] = STATE(124),
    [sym_label] = STATE(263),
    [sym_strict] = STATE(165),
    [sym__identifier] = STATE(264),
    [sym_variable_identifier] = STATE(179),
    [sym_constructor_identifier] = STATE(179),
    [sym_fields] = STATE(124),
    [aux_sym_constructor_repeat1] = STATE(168),
    [anon_sym_LBRACE] = ACTIONS(209),
    [anon_sym_LPAREN] = ACTIONS(211),
    [anon_sym_COMMA] = ACTIONS(213),
    [anon_sym_RPAREN] = ACTIONS(213),
    [anon_sym_BANG] = ACTIONS(269),
    [sym__variable_pattern] = ACTIONS(281),
    [sym__constructor_pattern] = ACTIONS(71),
    [sym_comment] = ACTIONS(5),
  },
  [115] = {
    [sym_where] = STATE(265),
    [anon_sym_where] = ACTIONS(205),
    [sym_comment] = ACTIONS(5),
  },
  [116] = {
    [sym_labels] = STATE(124),
    [sym_label] = STATE(125),
    [sym_strict] = STATE(126),
    [sym__identifier] = STATE(268),
    [sym_variable_identifier] = STATE(269),
    [sym_constructor_identifier] = STATE(269),
    [sym_fields] = STATE(124),
    [aux_sym_constructor_repeat1] = STATE(129),
    [anon_sym_LBRACE] = ACTIONS(209),
    [anon_sym_LPAREN] = ACTIONS(211),
    [anon_sym_where] = ACTIONS(213),
    [anon_sym_BANG] = ACTIONS(215),
    [sym__variable_pattern] = ACTIONS(455),
    [sym__constructor_pattern] = ACTIONS(457),
    [sym_comment] = ACTIONS(5),
  },
  [117] = {
    [sym__declarations] = STATE(272),
    [sym__layout_open_brace] = ACTIONS(459),
    [anon_sym_LBRACE] = ACTIONS(461),
    [sym_comment] = ACTIONS(5),
  },
  [118] = {
    [sym__constructor_pattern] = ACTIONS(463),
    [sym_comment] = ACTIONS(5),
  },
  [119] = {
    [sym__layout_semicolon] = ACTIONS(465),
    [anon_sym_SEMI] = ACTIONS(467),
    [sym_comment] = ACTIONS(5),
  },
  [120] = {
    [sym_field] = STATE(273),
    [sym_variable_identifier] = STATE(274),
    [sym__variable_pattern] = ACTIONS(469),
    [sym_comment] = ACTIONS(5),
  },
  [121] = {
    [sym__identifier] = STATE(275),
    [sym_variable_identifier] = STATE(167),
    [sym_constructor_identifier] = STATE(167),
    [aux_sym_constructor_repeat2] = STATE(276),
    [sym__variable_pattern] = ACTIONS(271),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
  },
  [122] = {
    [sym__identifier] = STATE(277),
    [sym_variable_identifier] = STATE(128),
    [sym_constructor_identifier] = STATE(128),
    [sym__variable_pattern] = ACTIONS(469),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [123] = {
    [anon_sym_COMMA] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(75),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_where] = ACTIONS(75),
    [anon_sym_COLON_COLON] = ACTIONS(75),
    [anon_sym_DASH_GT] = ACTIONS(75),
    [anon_sym_EQ_GT] = ACTIONS(75),
    [anon_sym_BANG] = ACTIONS(75),
    [sym__variable_pattern] = ACTIONS(77),
    [sym__constructor_pattern] = ACTIONS(77),
    [sym_comment] = ACTIONS(5),
  },
  [124] = {
    [anon_sym_COMMA] = ACTIONS(471),
    [anon_sym_RPAREN] = ACTIONS(471),
    [anon_sym_where] = ACTIONS(471),
    [anon_sym_EQ_GT] = ACTIONS(471),
    [sym_comment] = ACTIONS(5),
  },
  [125] = {
    [aux_sym_labels_repeat1] = STATE(279),
    [anon_sym_COMMA] = ACTIONS(473),
    [anon_sym_where] = ACTIONS(475),
    [anon_sym_EQ_GT] = ACTIONS(475),
    [sym_comment] = ACTIONS(5),
  },
  [126] = {
    [anon_sym_where] = ACTIONS(477),
    [anon_sym_EQ_GT] = ACTIONS(477),
    [anon_sym_BANG] = ACTIONS(477),
    [sym__variable_pattern] = ACTIONS(479),
    [sym__constructor_pattern] = ACTIONS(479),
    [sym_comment] = ACTIONS(5),
  },
  [127] = {
    [anon_sym_EQ] = ACTIONS(481),
    [anon_sym_where] = ACTIONS(477),
    [anon_sym_EQ_GT] = ACTIONS(477),
    [anon_sym_BANG] = ACTIONS(477),
    [sym__variable_pattern] = ACTIONS(479),
    [sym__constructor_pattern] = ACTIONS(479),
    [sym_comment] = ACTIONS(5),
  },
  [128] = {
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_COMMA] = ACTIONS(173),
    [anon_sym_RPAREN] = ACTIONS(173),
    [anon_sym_EQ] = ACTIONS(173),
    [anon_sym_where] = ACTIONS(173),
    [anon_sym_DASH] = ACTIONS(173),
    [anon_sym_BQUOTE] = ACTIONS(173),
    [anon_sym_COLON] = ACTIONS(173),
    [anon_sym_EQ_GT] = ACTIONS(173),
    [anon_sym_BANG] = ACTIONS(173),
    [sym__variable_pattern] = ACTIONS(175),
    [sym__constructor_pattern] = ACTIONS(175),
    [anon_sym_DOT] = ACTIONS(173),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(173),
    [anon_sym_DOLLAR] = ACTIONS(173),
    [anon_sym_PERCENT] = ACTIONS(173),
    [anon_sym_AMP] = ACTIONS(173),
    [anon_sym_1] = ACTIONS(173),
    [anon_sym_PLUS] = ACTIONS(173),
    [anon_sym_SLASH] = ACTIONS(173),
    [anon_sym_LT] = ACTIONS(173),
    [anon_sym_GT] = ACTIONS(173),
    [anon_sym_QMARK] = ACTIONS(173),
    [anon_sym_CARET] = ACTIONS(173),
  },
  [129] = {
    [sym_strict] = STATE(281),
    [sym__identifier] = STATE(281),
    [sym_variable_identifier] = STATE(128),
    [sym_constructor_identifier] = STATE(128),
    [anon_sym_where] = ACTIONS(471),
    [anon_sym_EQ_GT] = ACTIONS(471),
    [anon_sym_BANG] = ACTIONS(215),
    [sym__variable_pattern] = ACTIONS(217),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [130] = {
    [sym_where] = STATE(282),
    [anon_sym_where] = ACTIONS(205),
    [sym_comment] = ACTIONS(5),
  },
  [131] = {
    [sym__layout_semicolon] = ACTIONS(483),
    [anon_sym_SEMI] = ACTIONS(485),
    [sym_comment] = ACTIONS(5),
  },
  [132] = {
    [anon_sym_BQUOTE] = ACTIONS(487),
    [sym_comment] = ACTIONS(5),
  },
  [133] = {
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
  [134] = {
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
  [135] = {
    [sym__constructor_symbol] = STATE(284),
    [sym__layout_semicolon] = ACTIONS(497),
    [anon_sym_SEMI] = ACTIONS(499),
    [anon_sym_COMMA] = ACTIONS(499),
    [anon_sym_DASH] = ACTIONS(227),
    [anon_sym_COLON] = ACTIONS(227),
    [anon_sym_BANG] = ACTIONS(227),
    [anon_sym_DOT] = ACTIONS(227),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(227),
    [anon_sym_DOLLAR] = ACTIONS(227),
    [anon_sym_PERCENT] = ACTIONS(227),
    [anon_sym_AMP] = ACTIONS(227),
    [anon_sym_1] = ACTIONS(227),
    [anon_sym_PLUS] = ACTIONS(227),
    [anon_sym_SLASH] = ACTIONS(227),
    [anon_sym_LT] = ACTIONS(227),
    [anon_sym_GT] = ACTIONS(227),
    [anon_sym_QMARK] = ACTIONS(227),
    [anon_sym_CARET] = ACTIONS(227),
  },
  [136] = {
    [sym__op] = STATE(285),
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
  [137] = {
    [sym__layout_semicolon] = ACTIONS(501),
    [anon_sym_SEMI] = ACTIONS(503),
    [anon_sym_COMMA] = ACTIONS(505),
    [sym_comment] = ACTIONS(5),
  },
  [138] = {
    [aux_sym_fixity_repeat1] = STATE(287),
    [sym__layout_semicolon] = ACTIONS(501),
    [anon_sym_SEMI] = ACTIONS(503),
    [anon_sym_COMMA] = ACTIONS(233),
    [sym_comment] = ACTIONS(5),
  },
  [139] = {
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
  [140] = {
    [sym__variable_symbol] = STATE(288),
    [sym__layout_semicolon] = ACTIONS(511),
    [anon_sym_SEMI] = ACTIONS(513),
    [anon_sym_COMMA] = ACTIONS(513),
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
  [141] = {
    [sym__layout_semicolon] = ACTIONS(79),
    [anon_sym_SEMI] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_EQ] = ACTIONS(81),
    [anon_sym_PIPE] = ACTIONS(81),
    [anon_sym_deriving] = ACTIONS(81),
    [anon_sym_BANG] = ACTIONS(81),
    [sym__variable_pattern] = ACTIONS(203),
    [sym__constructor_pattern] = ACTIONS(203),
    [sym_comment] = ACTIONS(5),
  },
  [142] = {
    [sym_constructors] = STATE(290),
    [sym_constructor] = STATE(147),
    [sym_deriving] = STATE(291),
    [sym_constructor_identifier] = STATE(149),
    [sym__layout_semicolon] = ACTIONS(515),
    [anon_sym_SEMI] = ACTIONS(517),
    [anon_sym_EQ] = ACTIONS(519),
    [anon_sym_deriving] = ACTIONS(251),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [143] = {
    [sym_labels] = STATE(296),
    [sym_label] = STATE(297),
    [sym_strict] = STATE(298),
    [sym__identifier] = STATE(299),
    [sym_variable_identifier] = STATE(300),
    [sym_constructor_identifier] = STATE(300),
    [sym_fields] = STATE(296),
    [aux_sym_constructor_repeat1] = STATE(301),
    [sym__layout_semicolon] = ACTIONS(253),
    [anon_sym_SEMI] = ACTIONS(213),
    [anon_sym_LBRACE] = ACTIONS(521),
    [anon_sym_LPAREN] = ACTIONS(523),
    [anon_sym_EQ] = ACTIONS(213),
    [anon_sym_deriving] = ACTIONS(213),
    [anon_sym_BANG] = ACTIONS(525),
    [sym__variable_pattern] = ACTIONS(527),
    [sym__constructor_pattern] = ACTIONS(263),
    [sym_comment] = ACTIONS(5),
  },
  [144] = {
    [sym_constructors] = STATE(290),
    [sym_constructor] = STATE(147),
    [sym_deriving] = STATE(291),
    [sym_constructor_identifier] = STATE(149),
    [sym__layout_semicolon] = ACTIONS(515),
    [anon_sym_SEMI] = ACTIONS(517),
    [anon_sym_deriving] = ACTIONS(251),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [145] = {
    [sym__identifier] = STATE(303),
    [sym_variable_identifier] = STATE(26),
    [sym_constructor_identifier] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(529),
    [sym__variable_pattern] = ACTIONS(405),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [146] = {
    [sym_deriving] = STATE(291),
    [sym__layout_semicolon] = ACTIONS(515),
    [anon_sym_SEMI] = ACTIONS(517),
    [anon_sym_deriving] = ACTIONS(251),
    [sym_comment] = ACTIONS(5),
  },
  [147] = {
    [aux_sym_constructors_repeat1] = STATE(305),
    [sym__layout_semicolon] = ACTIONS(531),
    [anon_sym_SEMI] = ACTIONS(533),
    [anon_sym_PIPE] = ACTIONS(535),
    [anon_sym_deriving] = ACTIONS(533),
    [sym_comment] = ACTIONS(5),
  },
  [148] = {
    [sym__layout_semicolon] = ACTIONS(515),
    [anon_sym_SEMI] = ACTIONS(517),
    [sym_comment] = ACTIONS(5),
  },
  [149] = {
    [sym_labels] = STATE(154),
    [sym_label] = STATE(155),
    [sym_strict] = STATE(156),
    [sym__identifier] = STATE(306),
    [sym_variable_identifier] = STATE(300),
    [sym_constructor_identifier] = STATE(300),
    [sym_fields] = STATE(154),
    [aux_sym_constructor_repeat1] = STATE(307),
    [sym__layout_semicolon] = ACTIONS(253),
    [anon_sym_SEMI] = ACTIONS(213),
    [anon_sym_LBRACE] = ACTIONS(255),
    [anon_sym_LPAREN] = ACTIONS(257),
    [anon_sym_PIPE] = ACTIONS(213),
    [anon_sym_deriving] = ACTIONS(213),
    [anon_sym_BANG] = ACTIONS(259),
    [sym__variable_pattern] = ACTIONS(527),
    [sym__constructor_pattern] = ACTIONS(243),
    [sym_comment] = ACTIONS(5),
  },
  [150] = {
    [sym_field] = STATE(308),
    [sym_variable_identifier] = STATE(274),
    [sym__variable_pattern] = ACTIONS(469),
    [sym_comment] = ACTIONS(5),
  },
  [151] = {
    [sym__identifier] = STATE(275),
    [sym_variable_identifier] = STATE(167),
    [sym_constructor_identifier] = STATE(167),
    [aux_sym_constructor_repeat2] = STATE(309),
    [sym__variable_pattern] = ACTIONS(271),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
  },
  [152] = {
    [sym__identifier] = STATE(310),
    [sym_variable_identifier] = STATE(26),
    [sym_constructor_identifier] = STATE(26),
    [sym__variable_pattern] = ACTIONS(537),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [153] = {
    [sym__layout_semicolon] = ACTIONS(73),
    [anon_sym_SEMI] = ACTIONS(75),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_EQ_GT] = ACTIONS(75),
    [anon_sym_PIPE] = ACTIONS(75),
    [anon_sym_deriving] = ACTIONS(75),
    [anon_sym_BANG] = ACTIONS(75),
    [sym__variable_pattern] = ACTIONS(77),
    [sym__constructor_pattern] = ACTIONS(77),
    [sym_comment] = ACTIONS(5),
  },
  [154] = {
    [sym__layout_semicolon] = ACTIONS(539),
    [anon_sym_SEMI] = ACTIONS(471),
    [anon_sym_EQ] = ACTIONS(471),
    [anon_sym_EQ_GT] = ACTIONS(471),
    [anon_sym_PIPE] = ACTIONS(471),
    [anon_sym_deriving] = ACTIONS(471),
    [sym__constructor_pattern] = ACTIONS(541),
    [sym_comment] = ACTIONS(5),
  },
  [155] = {
    [aux_sym_labels_repeat1] = STATE(312),
    [sym__layout_semicolon] = ACTIONS(543),
    [anon_sym_SEMI] = ACTIONS(475),
    [anon_sym_COMMA] = ACTIONS(545),
    [anon_sym_EQ] = ACTIONS(475),
    [anon_sym_EQ_GT] = ACTIONS(475),
    [anon_sym_PIPE] = ACTIONS(475),
    [anon_sym_deriving] = ACTIONS(475),
    [sym__constructor_pattern] = ACTIONS(547),
    [sym_comment] = ACTIONS(5),
  },
  [156] = {
    [sym__layout_semicolon] = ACTIONS(549),
    [anon_sym_SEMI] = ACTIONS(477),
    [anon_sym_EQ] = ACTIONS(477),
    [anon_sym_EQ_GT] = ACTIONS(477),
    [anon_sym_PIPE] = ACTIONS(477),
    [anon_sym_deriving] = ACTIONS(477),
    [anon_sym_BANG] = ACTIONS(477),
    [sym__variable_pattern] = ACTIONS(479),
    [sym__constructor_pattern] = ACTIONS(479),
    [sym_comment] = ACTIONS(5),
  },
  [157] = {
    [sym__layout_semicolon] = ACTIONS(549),
    [anon_sym_SEMI] = ACTIONS(477),
    [anon_sym_EQ] = ACTIONS(551),
    [anon_sym_EQ_GT] = ACTIONS(477),
    [anon_sym_deriving] = ACTIONS(477),
    [anon_sym_BANG] = ACTIONS(477),
    [sym__variable_pattern] = ACTIONS(479),
    [sym__constructor_pattern] = ACTIONS(479),
    [sym_comment] = ACTIONS(5),
  },
  [158] = {
    [sym_strict] = STATE(314),
    [sym__identifier] = STATE(314),
    [sym_variable_identifier] = STATE(26),
    [sym_constructor_identifier] = STATE(26),
    [sym__layout_semicolon] = ACTIONS(539),
    [anon_sym_SEMI] = ACTIONS(471),
    [anon_sym_EQ] = ACTIONS(471),
    [anon_sym_EQ_GT] = ACTIONS(471),
    [anon_sym_deriving] = ACTIONS(471),
    [anon_sym_BANG] = ACTIONS(259),
    [sym__variable_pattern] = ACTIONS(261),
    [sym__constructor_pattern] = ACTIONS(541),
    [sym_comment] = ACTIONS(5),
  },
  [159] = {
    [anon_sym_EQ] = ACTIONS(554),
    [sym_comment] = ACTIONS(5),
  },
  [160] = {
    [sym_variable_identifier] = STATE(316),
    [aux_sym_simple_type_repeat1] = STATE(169),
    [anon_sym_EQ] = ACTIONS(267),
    [sym__variable_pattern] = ACTIONS(281),
    [sym_comment] = ACTIONS(5),
  },
  [161] = {
    [sym_constructor] = STATE(317),
    [sym_constructor_identifier] = STATE(149),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [162] = {
    [sym__identifier] = STATE(318),
    [sym_variable_identifier] = STATE(167),
    [sym_constructor_identifier] = STATE(167),
    [sym__variable_pattern] = ACTIONS(271),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
  },
  [163] = {
    [anon_sym_COMMA] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(75),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_DASH_GT] = ACTIONS(75),
    [anon_sym_EQ_GT] = ACTIONS(75),
    [anon_sym_BANG] = ACTIONS(75),
    [sym__variable_pattern] = ACTIONS(75),
    [sym__constructor_pattern] = ACTIONS(77),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(75),
    [sym__integer_literal] = ACTIONS(75),
    [sym__octal_literal] = ACTIONS(75),
    [sym__hexidecimal_literal] = ACTIONS(75),
  },
  [164] = {
    [aux_sym_labels_repeat1] = STATE(320),
    [anon_sym_COMMA] = ACTIONS(556),
    [anon_sym_EQ_GT] = ACTIONS(475),
    [sym_comment] = ACTIONS(5),
  },
  [165] = {
    [anon_sym_COMMA] = ACTIONS(477),
    [anon_sym_RPAREN] = ACTIONS(477),
    [anon_sym_EQ_GT] = ACTIONS(477),
    [anon_sym_BANG] = ACTIONS(477),
    [sym__variable_pattern] = ACTIONS(477),
    [sym__constructor_pattern] = ACTIONS(479),
    [sym_comment] = ACTIONS(5),
  },
  [166] = {
    [anon_sym_EQ] = ACTIONS(558),
    [anon_sym_EQ_GT] = ACTIONS(477),
    [anon_sym_BANG] = ACTIONS(477),
    [sym__variable_pattern] = ACTIONS(477),
    [sym__constructor_pattern] = ACTIONS(479),
    [sym_comment] = ACTIONS(5),
  },
  [167] = {
    [anon_sym_COMMA] = ACTIONS(173),
    [anon_sym_RPAREN] = ACTIONS(173),
    [anon_sym_EQ] = ACTIONS(173),
    [anon_sym_EQ_GT] = ACTIONS(173),
    [anon_sym_BANG] = ACTIONS(173),
    [sym__variable_pattern] = ACTIONS(173),
    [sym__constructor_pattern] = ACTIONS(175),
    [sym_comment] = ACTIONS(5),
  },
  [168] = {
    [sym_strict] = STATE(322),
    [sym__identifier] = STATE(322),
    [sym_variable_identifier] = STATE(167),
    [sym_constructor_identifier] = STATE(167),
    [anon_sym_COMMA] = ACTIONS(471),
    [anon_sym_RPAREN] = ACTIONS(471),
    [anon_sym_EQ_GT] = ACTIONS(471),
    [anon_sym_BANG] = ACTIONS(269),
    [sym__variable_pattern] = ACTIONS(271),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
  },
  [169] = {
    [sym_variable_identifier] = STATE(323),
    [anon_sym_EQ] = ACTIONS(560),
    [sym__variable_pattern] = ACTIONS(281),
    [sym_comment] = ACTIONS(5),
  },
  [170] = {
    [sym_type] = STATE(326),
    [sym__generic_type_constructor] = STATE(231),
    [sym_tupling_constructor] = STATE(227),
    [sym_tuple] = STATE(231),
    [sym_list] = STATE(231),
    [sym_parenthesized_constructor] = STATE(231),
    [sym_variable_identifier] = STATE(234),
    [sym__type_constructors] = STATE(227),
    [sym_qualified_type_constructor] = STATE(236),
    [anon_sym_LPAREN] = ACTIONS(562),
    [anon_sym_LBRACK] = ACTIONS(401),
    [sym_unit_type] = ACTIONS(403),
    [sym_list_constructor] = ACTIONS(403),
    [sym_function_constructor] = ACTIONS(403),
    [sym__variable_pattern] = ACTIONS(405),
    [sym__constructor_pattern] = ACTIONS(564),
    [sym_module_identifier] = ACTIONS(409),
    [sym_comment] = ACTIONS(5),
  },
  [171] = {
    [sym_field] = STATE(327),
    [sym_variable_identifier] = STATE(274),
    [sym__variable_pattern] = ACTIONS(469),
    [sym_comment] = ACTIONS(5),
  },
  [172] = {
    [sym__identifier] = STATE(275),
    [sym_variable_identifier] = STATE(167),
    [sym_constructor_identifier] = STATE(167),
    [aux_sym_constructor_repeat2] = STATE(328),
    [sym__variable_pattern] = ACTIONS(271),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
  },
  [173] = {
    [sym__identifier] = STATE(329),
    [sym_variable_identifier] = STATE(179),
    [sym_constructor_identifier] = STATE(179),
    [sym__variable_pattern] = ACTIONS(281),
    [sym__constructor_pattern] = ACTIONS(71),
    [sym_comment] = ACTIONS(5),
  },
  [174] = {
    [anon_sym_COMMA] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(75),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_BANG] = ACTIONS(75),
    [sym__variable_pattern] = ACTIONS(75),
    [sym__constructor_pattern] = ACTIONS(77),
    [sym_comment] = ACTIONS(5),
  },
  [175] = {
    [anon_sym_EQ] = ACTIONS(471),
    [sym_comment] = ACTIONS(5),
  },
  [176] = {
    [aux_sym_labels_repeat1] = STATE(331),
    [anon_sym_COMMA] = ACTIONS(566),
    [anon_sym_EQ] = ACTIONS(475),
    [sym_comment] = ACTIONS(5),
  },
  [177] = {
    [anon_sym_EQ] = ACTIONS(477),
    [anon_sym_BANG] = ACTIONS(477),
    [sym__variable_pattern] = ACTIONS(477),
    [sym__constructor_pattern] = ACTIONS(479),
    [sym_comment] = ACTIONS(5),
  },
  [178] = {
    [anon_sym_EQ] = ACTIONS(568),
    [anon_sym_BANG] = ACTIONS(477),
    [sym__variable_pattern] = ACTIONS(477),
    [sym__constructor_pattern] = ACTIONS(479),
    [sym_comment] = ACTIONS(5),
  },
  [179] = {
    [anon_sym_COMMA] = ACTIONS(173),
    [anon_sym_RPAREN] = ACTIONS(173),
    [anon_sym_EQ] = ACTIONS(173),
    [anon_sym_BANG] = ACTIONS(173),
    [sym__variable_pattern] = ACTIONS(173),
    [sym__constructor_pattern] = ACTIONS(175),
    [sym_comment] = ACTIONS(5),
  },
  [180] = {
    [sym_strict] = STATE(333),
    [sym__identifier] = STATE(333),
    [sym_variable_identifier] = STATE(179),
    [sym_constructor_identifier] = STATE(179),
    [anon_sym_EQ] = ACTIONS(471),
    [anon_sym_BANG] = ACTIONS(279),
    [sym__variable_pattern] = ACTIONS(281),
    [sym__constructor_pattern] = ACTIONS(71),
    [sym_comment] = ACTIONS(5),
  },
  [181] = {
    [sym__layout_semicolon] = ACTIONS(571),
    [anon_sym_SEMI] = ACTIONS(573),
    [anon_sym_where] = ACTIONS(573),
    [anon_sym_do] = ACTIONS(573),
    [sym__variable_pattern] = ACTIONS(575),
    [sym__constructor_pattern] = ACTIONS(575),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(575),
    [anon_sym_SQUOTE] = ACTIONS(573),
    [anon_sym_DQUOTE] = ACTIONS(573),
    [sym__integer_literal] = ACTIONS(573),
    [sym__octal_literal] = ACTIONS(573),
    [sym__hexidecimal_literal] = ACTIONS(573),
  },
  [182] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(577),
  },
  [183] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(579),
  },
  [184] = {
    [sym__cntrl] = STATE(335),
    [anon_sym_LBRACK] = ACTIONS(581),
    [anon_sym_RBRACK] = ACTIONS(581),
    [anon_sym_AT] = ACTIONS(581),
    [anon_sym__] = ACTIONS(581),
    [sym_comment] = ACTIONS(97),
    [sym__ascii_large] = ACTIONS(581),
    [anon_sym_CARET] = ACTIONS(581),
    [anon_sym_BSLASH] = ACTIONS(581),
  },
  [185] = {
    [aux_sym__escape_repeat1] = STATE(337),
    [sym_comment] = ACTIONS(5),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(583),
  },
  [186] = {
    [aux_sym__escape_repeat2] = STATE(339),
    [sym_comment] = ACTIONS(5),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(585),
  },
  [187] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(587),
  },
  [188] = {
    [anon_sym_SEMI] = ACTIONS(589),
    [anon_sym_LBRACE] = ACTIONS(589),
    [anon_sym_RBRACE] = ACTIONS(589),
    [anon_sym_LPAREN] = ACTIONS(589),
    [anon_sym_RPAREN] = ACTIONS(589),
    [anon_sym_EQ] = ACTIONS(589),
    [anon_sym_TILDE] = ACTIONS(589),
    [anon_sym_LBRACK] = ACTIONS(589),
    [anon_sym_RBRACK] = ACTIONS(589),
    [anon_sym_DASH] = ACTIONS(589),
    [anon_sym_AT] = ACTIONS(589),
    [anon_sym__] = ACTIONS(589),
    [anon_sym_BQUOTE] = ACTIONS(589),
    [anon_sym_COLON] = ACTIONS(589),
    [anon_sym_PIPE] = ACTIONS(589),
    [anon_sym_BANG] = ACTIONS(589),
    [anon_sym_DOT] = ACTIONS(589),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(589),
    [anon_sym_DQUOTE] = ACTIONS(589),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(589),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(589),
    [sym__ascii_large] = ACTIONS(589),
    [anon_sym_POUND] = ACTIONS(589),
    [anon_sym_DOLLAR] = ACTIONS(589),
    [anon_sym_PERCENT] = ACTIONS(589),
    [anon_sym_AMP] = ACTIONS(589),
    [anon_sym_1] = ACTIONS(589),
    [anon_sym_PLUS] = ACTIONS(589),
    [anon_sym_SLASH] = ACTIONS(589),
    [anon_sym_LT] = ACTIONS(589),
    [anon_sym_GT] = ACTIONS(589),
    [anon_sym_QMARK] = ACTIONS(589),
    [anon_sym_CARET] = ACTIONS(589),
    [anon_sym_BSLASH] = ACTIONS(589),
    [sym__space] = ACTIONS(589),
    [sym__newline] = ACTIONS(589),
    [sym__tab] = ACTIONS(589),
    [sym__vertical_tab] = ACTIONS(589),
  },
  [189] = {
    [anon_sym_SEMI] = ACTIONS(591),
    [anon_sym_LBRACE] = ACTIONS(591),
    [anon_sym_RBRACE] = ACTIONS(591),
    [anon_sym_LPAREN] = ACTIONS(591),
    [anon_sym_RPAREN] = ACTIONS(591),
    [anon_sym_EQ] = ACTIONS(591),
    [anon_sym_TILDE] = ACTIONS(591),
    [anon_sym_LBRACK] = ACTIONS(591),
    [anon_sym_RBRACK] = ACTIONS(591),
    [anon_sym_DASH] = ACTIONS(591),
    [anon_sym_AT] = ACTIONS(591),
    [anon_sym__] = ACTIONS(591),
    [anon_sym_BQUOTE] = ACTIONS(591),
    [anon_sym_COLON] = ACTIONS(591),
    [anon_sym_PIPE] = ACTIONS(591),
    [anon_sym_BANG] = ACTIONS(591),
    [anon_sym_DOT] = ACTIONS(591),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(591),
    [anon_sym_DQUOTE] = ACTIONS(591),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(591),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(591),
    [sym__ascii_large] = ACTIONS(591),
    [anon_sym_POUND] = ACTIONS(591),
    [anon_sym_DOLLAR] = ACTIONS(591),
    [anon_sym_PERCENT] = ACTIONS(591),
    [anon_sym_AMP] = ACTIONS(591),
    [anon_sym_1] = ACTIONS(591),
    [anon_sym_PLUS] = ACTIONS(591),
    [anon_sym_SLASH] = ACTIONS(591),
    [anon_sym_LT] = ACTIONS(591),
    [anon_sym_GT] = ACTIONS(591),
    [anon_sym_QMARK] = ACTIONS(591),
    [anon_sym_CARET] = ACTIONS(591),
    [anon_sym_BSLASH] = ACTIONS(591),
    [sym__space] = ACTIONS(591),
    [sym__newline] = ACTIONS(591),
    [sym__tab] = ACTIONS(591),
    [sym__vertical_tab] = ACTIONS(591),
  },
  [190] = {
    [sym__cntrl] = STATE(341),
    [anon_sym_LBRACK] = ACTIONS(593),
    [anon_sym_RBRACK] = ACTIONS(593),
    [anon_sym_AT] = ACTIONS(593),
    [anon_sym__] = ACTIONS(593),
    [sym_comment] = ACTIONS(97),
    [sym__ascii_large] = ACTIONS(593),
    [anon_sym_CARET] = ACTIONS(593),
    [anon_sym_BSLASH] = ACTIONS(593),
  },
  [191] = {
    [aux_sym__escape_repeat1] = STATE(343),
    [sym_comment] = ACTIONS(5),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(595),
  },
  [192] = {
    [aux_sym__escape_repeat2] = STATE(345),
    [sym_comment] = ACTIONS(5),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(597),
  },
  [193] = {
    [anon_sym_SEMI] = ACTIONS(599),
    [anon_sym_LBRACE] = ACTIONS(599),
    [anon_sym_RBRACE] = ACTIONS(599),
    [anon_sym_LPAREN] = ACTIONS(599),
    [anon_sym_RPAREN] = ACTIONS(599),
    [anon_sym_EQ] = ACTIONS(599),
    [anon_sym_TILDE] = ACTIONS(599),
    [anon_sym_LBRACK] = ACTIONS(599),
    [anon_sym_RBRACK] = ACTIONS(599),
    [anon_sym_DASH] = ACTIONS(599),
    [anon_sym_AT] = ACTIONS(599),
    [anon_sym__] = ACTIONS(599),
    [anon_sym_BQUOTE] = ACTIONS(599),
    [anon_sym_COLON] = ACTIONS(599),
    [anon_sym_PIPE] = ACTIONS(599),
    [anon_sym_BANG] = ACTIONS(599),
    [anon_sym_DOT] = ACTIONS(599),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(599),
    [anon_sym_DQUOTE] = ACTIONS(599),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(599),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(599),
    [sym__ascii_large] = ACTIONS(599),
    [anon_sym_POUND] = ACTIONS(599),
    [anon_sym_DOLLAR] = ACTIONS(599),
    [anon_sym_PERCENT] = ACTIONS(599),
    [anon_sym_AMP] = ACTIONS(599),
    [anon_sym_1] = ACTIONS(599),
    [anon_sym_PLUS] = ACTIONS(599),
    [anon_sym_SLASH] = ACTIONS(599),
    [anon_sym_LT] = ACTIONS(599),
    [anon_sym_GT] = ACTIONS(599),
    [anon_sym_QMARK] = ACTIONS(599),
    [anon_sym_CARET] = ACTIONS(599),
    [anon_sym_BSLASH] = ACTIONS(599),
    [sym__space] = ACTIONS(599),
    [sym__newline] = ACTIONS(599),
    [sym__tab] = ACTIONS(599),
    [sym__vertical_tab] = ACTIONS(599),
  },
  [194] = {
    [anon_sym_SEMI] = ACTIONS(601),
    [anon_sym_LBRACE] = ACTIONS(601),
    [anon_sym_RBRACE] = ACTIONS(601),
    [anon_sym_LPAREN] = ACTIONS(601),
    [anon_sym_RPAREN] = ACTIONS(601),
    [anon_sym_EQ] = ACTIONS(601),
    [anon_sym_TILDE] = ACTIONS(601),
    [anon_sym_LBRACK] = ACTIONS(601),
    [anon_sym_RBRACK] = ACTIONS(601),
    [anon_sym_DASH] = ACTIONS(601),
    [anon_sym_AT] = ACTIONS(601),
    [anon_sym__] = ACTIONS(601),
    [anon_sym_BQUOTE] = ACTIONS(601),
    [anon_sym_COLON] = ACTIONS(601),
    [anon_sym_PIPE] = ACTIONS(601),
    [anon_sym_BANG] = ACTIONS(601),
    [anon_sym_DOT] = ACTIONS(601),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(601),
    [anon_sym_DQUOTE] = ACTIONS(601),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(601),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(601),
    [sym__ascii_large] = ACTIONS(601),
    [anon_sym_POUND] = ACTIONS(601),
    [anon_sym_DOLLAR] = ACTIONS(601),
    [anon_sym_PERCENT] = ACTIONS(601),
    [anon_sym_AMP] = ACTIONS(601),
    [anon_sym_1] = ACTIONS(601),
    [anon_sym_PLUS] = ACTIONS(601),
    [anon_sym_SLASH] = ACTIONS(601),
    [anon_sym_LT] = ACTIONS(601),
    [anon_sym_GT] = ACTIONS(601),
    [anon_sym_QMARK] = ACTIONS(601),
    [anon_sym_CARET] = ACTIONS(601),
    [anon_sym_BSLASH] = ACTIONS(601),
    [sym__space] = ACTIONS(601),
    [sym__newline] = ACTIONS(601),
    [sym__tab] = ACTIONS(601),
    [sym__vertical_tab] = ACTIONS(601),
  },
  [195] = {
    [sym__layout_semicolon] = ACTIONS(603),
    [anon_sym_SEMI] = ACTIONS(605),
    [anon_sym_where] = ACTIONS(605),
    [anon_sym_do] = ACTIONS(605),
    [sym__variable_pattern] = ACTIONS(607),
    [sym__constructor_pattern] = ACTIONS(607),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(607),
    [anon_sym_SQUOTE] = ACTIONS(605),
    [anon_sym_DQUOTE] = ACTIONS(605),
    [sym__integer_literal] = ACTIONS(605),
    [sym__octal_literal] = ACTIONS(605),
    [sym__hexidecimal_literal] = ACTIONS(605),
  },
  [196] = {
    [sym_statement_list] = STATE(348),
    [sym__layout_open_brace] = ACTIONS(609),
    [anon_sym_LBRACE] = ACTIONS(611),
    [sym_comment] = ACTIONS(5),
  },
  [197] = {
    [sym__layout_semicolon] = ACTIONS(73),
    [anon_sym_SEMI] = ACTIONS(75),
    [anon_sym_where] = ACTIONS(75),
    [anon_sym_do] = ACTIONS(75),
    [sym__variable_pattern] = ACTIONS(77),
    [sym__constructor_pattern] = ACTIONS(77),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(75),
    [sym__integer_literal] = ACTIONS(75),
    [sym__octal_literal] = ACTIONS(75),
    [sym__hexidecimal_literal] = ACTIONS(75),
  },
  [198] = {
    [sym__layout_semicolon] = ACTIONS(79),
    [anon_sym_SEMI] = ACTIONS(81),
    [anon_sym_where] = ACTIONS(81),
    [anon_sym_do] = ACTIONS(81),
    [sym__variable_pattern] = ACTIONS(203),
    [sym__constructor_pattern] = ACTIONS(203),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(203),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [sym__integer_literal] = ACTIONS(81),
    [sym__octal_literal] = ACTIONS(81),
    [sym__hexidecimal_literal] = ACTIONS(81),
  },
  [199] = {
    [sym__layout_semicolon] = ACTIONS(613),
    [anon_sym_SEMI] = ACTIONS(615),
    [sym_comment] = ACTIONS(5),
  },
  [200] = {
    [sym__layout_semicolon] = ACTIONS(617),
    [anon_sym_SEMI] = ACTIONS(619),
    [anon_sym_where] = ACTIONS(619),
    [anon_sym_do] = ACTIONS(619),
    [sym__variable_pattern] = ACTIONS(621),
    [sym__constructor_pattern] = ACTIONS(621),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(621),
    [anon_sym_SQUOTE] = ACTIONS(619),
    [anon_sym_DQUOTE] = ACTIONS(619),
    [sym__integer_literal] = ACTIONS(619),
    [sym__octal_literal] = ACTIONS(619),
    [sym__hexidecimal_literal] = ACTIONS(619),
  },
  [201] = {
    [sym__layout_semicolon] = ACTIONS(623),
    [anon_sym_SEMI] = ACTIONS(165),
    [anon_sym_where] = ACTIONS(165),
    [anon_sym_do] = ACTIONS(165),
    [sym__variable_pattern] = ACTIONS(167),
    [sym__constructor_pattern] = ACTIONS(167),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(167),
    [anon_sym_SQUOTE] = ACTIONS(165),
    [anon_sym_DQUOTE] = ACTIONS(165),
    [sym__integer_literal] = ACTIONS(165),
    [sym__octal_literal] = ACTIONS(165),
    [sym__hexidecimal_literal] = ACTIONS(165),
  },
  [202] = {
    [sym__layout_semicolon] = ACTIONS(625),
    [anon_sym_SEMI] = ACTIONS(627),
    [anon_sym_where] = ACTIONS(627),
    [anon_sym_do] = ACTIONS(627),
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
  [203] = {
    [sym__layout_semicolon] = ACTIONS(171),
    [anon_sym_SEMI] = ACTIONS(173),
    [anon_sym_where] = ACTIONS(173),
    [anon_sym_do] = ACTIONS(173),
    [sym__variable_pattern] = ACTIONS(175),
    [sym__constructor_pattern] = ACTIONS(175),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(175),
    [anon_sym_SQUOTE] = ACTIONS(173),
    [anon_sym_DQUOTE] = ACTIONS(173),
    [sym__integer_literal] = ACTIONS(173),
    [sym__octal_literal] = ACTIONS(173),
    [sym__hexidecimal_literal] = ACTIONS(173),
  },
  [204] = {
    [sym__literal] = STATE(350),
    [sym_variable_identifier] = STATE(350),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [aux_sym_general_constructor_repeat1] = STATE(351),
    [sym__layout_semicolon] = ACTIONS(171),
    [anon_sym_SEMI] = ACTIONS(173),
    [anon_sym_where] = ACTIONS(173),
    [anon_sym_do] = ACTIONS(173),
    [sym__variable_pattern] = ACTIONS(359),
    [sym__constructor_pattern] = ACTIONS(175),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym__integer_literal] = ACTIONS(41),
    [sym__octal_literal] = ACTIONS(41),
    [sym__hexidecimal_literal] = ACTIONS(41),
  },
  [205] = {
    [sym_where] = STATE(352),
    [sym_general_constructor] = STATE(200),
    [sym__variable] = STATE(200),
    [sym_qualified_variable_identifier] = STATE(201),
    [sym__expression] = STATE(353),
    [sym_do_expression] = STATE(200),
    [sym__literal] = STATE(200),
    [sym__identifier] = STATE(200),
    [sym_variable_identifier] = STATE(203),
    [sym_constructor_identifier] = STATE(204),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [sym__layout_semicolon] = ACTIONS(613),
    [anon_sym_SEMI] = ACTIONS(615),
    [anon_sym_where] = ACTIONS(205),
    [anon_sym_do] = ACTIONS(357),
    [sym__variable_pattern] = ACTIONS(359),
    [sym__constructor_pattern] = ACTIONS(361),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym__integer_literal] = ACTIONS(41),
    [sym__octal_literal] = ACTIONS(41),
    [sym__hexidecimal_literal] = ACTIONS(41),
  },
  [206] = {
    [sym__function_pattern] = STATE(214),
    [sym_label_pattern] = STATE(86),
    [sym_irrefutable_pattern] = STATE(86),
    [sym_list_pattern] = STATE(86),
    [sym_tuple_pattern] = STATE(86),
    [sym_parenthesized_pattern] = STATE(86),
    [sym_as_pattern] = STATE(86),
    [sym_wildcard] = STATE(86),
    [sym__variable] = STATE(212),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym__literal] = STATE(86),
    [sym__identifier] = STATE(94),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(128),
    [sym_integer] = STATE(89),
    [sym_char] = STATE(89),
    [sym_string] = STATE(89),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_TILDE] = ACTIONS(367),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym__] = ACTIONS(151),
    [sym_list_constructor] = ACTIONS(153),
    [sym__variable_pattern] = ACTIONS(155),
    [sym__constructor_pattern] = ACTIONS(375),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [207] = {
    [anon_sym_LPAREN] = ACTIONS(631),
    [sym_comment] = ACTIONS(5),
  },
  [208] = {
    [anon_sym_LBRACE] = ACTIONS(81),
    [anon_sym_COMMA] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(81),
    [anon_sym_DASH] = ACTIONS(81),
    [anon_sym_BQUOTE] = ACTIONS(81),
    [anon_sym_COLON] = ACTIONS(81),
    [anon_sym_BANG] = ACTIONS(81),
    [sym__variable_pattern] = ACTIONS(81),
    [anon_sym_DOT] = ACTIONS(81),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(203),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [anon_sym_POUND] = ACTIONS(81),
    [anon_sym_DOLLAR] = ACTIONS(81),
    [anon_sym_PERCENT] = ACTIONS(81),
    [anon_sym_AMP] = ACTIONS(81),
    [anon_sym_1] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(81),
    [anon_sym_SLASH] = ACTIONS(81),
    [anon_sym_LT] = ACTIONS(81),
    [anon_sym_GT] = ACTIONS(81),
    [anon_sym_QMARK] = ACTIONS(81),
    [anon_sym_CARET] = ACTIONS(81),
    [sym__integer_literal] = ACTIONS(81),
    [sym__octal_literal] = ACTIONS(81),
    [sym__hexidecimal_literal] = ACTIONS(81),
  },
  [209] = {
    [sym__op] = STATE(360),
    [sym_variable_symbol] = STATE(361),
    [sym_constructor_symbol] = STATE(361),
    [sym__variable_symbol] = STATE(362),
    [aux_sym_tuple_pattern_repeat1] = STATE(363),
    [anon_sym_COMMA] = ACTIONS(633),
    [anon_sym_RPAREN] = ACTIONS(635),
    [anon_sym_DASH] = ACTIONS(637),
    [anon_sym_BQUOTE] = ACTIONS(639),
    [anon_sym_COLON] = ACTIONS(641),
    [anon_sym_BANG] = ACTIONS(637),
    [anon_sym_DOT] = ACTIONS(637),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(637),
    [anon_sym_DOLLAR] = ACTIONS(637),
    [anon_sym_PERCENT] = ACTIONS(637),
    [anon_sym_AMP] = ACTIONS(637),
    [anon_sym_1] = ACTIONS(637),
    [anon_sym_PLUS] = ACTIONS(637),
    [anon_sym_SLASH] = ACTIONS(637),
    [anon_sym_LT] = ACTIONS(637),
    [anon_sym_GT] = ACTIONS(637),
    [anon_sym_QMARK] = ACTIONS(637),
    [anon_sym_CARET] = ACTIONS(637),
  },
  [210] = {
    [aux_sym_tuple_pattern_repeat1] = STATE(363),
    [anon_sym_COMMA] = ACTIONS(633),
    [anon_sym_RPAREN] = ACTIONS(635),
    [sym_comment] = ACTIONS(5),
  },
  [211] = {
    [anon_sym_COMMA] = ACTIONS(643),
    [anon_sym_RPAREN] = ACTIONS(643),
    [sym_comment] = ACTIONS(5),
  },
  [212] = {
    [anon_sym_AT] = ACTIONS(645),
    [sym_comment] = ACTIONS(5),
  },
  [213] = {
    [sym__literal] = STATE(368),
    [sym_variable_identifier] = STATE(368),
    [sym_integer] = STATE(365),
    [sym_char] = STATE(365),
    [sym_string] = STATE(365),
    [aux_sym_general_constructor_repeat1] = STATE(369),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_COMMA] = ACTIONS(173),
    [anon_sym_RPAREN] = ACTIONS(173),
    [anon_sym_DASH] = ACTIONS(173),
    [anon_sym_BQUOTE] = ACTIONS(173),
    [anon_sym_COLON] = ACTIONS(173),
    [anon_sym_BANG] = ACTIONS(173),
    [sym__variable_pattern] = ACTIONS(271),
    [anon_sym_DOT] = ACTIONS(173),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(647),
    [anon_sym_SQUOTE] = ACTIONS(649),
    [anon_sym_DQUOTE] = ACTIONS(441),
    [anon_sym_POUND] = ACTIONS(173),
    [anon_sym_DOLLAR] = ACTIONS(173),
    [anon_sym_PERCENT] = ACTIONS(173),
    [anon_sym_AMP] = ACTIONS(173),
    [anon_sym_1] = ACTIONS(173),
    [anon_sym_PLUS] = ACTIONS(173),
    [anon_sym_SLASH] = ACTIONS(173),
    [anon_sym_LT] = ACTIONS(173),
    [anon_sym_GT] = ACTIONS(173),
    [anon_sym_QMARK] = ACTIONS(173),
    [anon_sym_CARET] = ACTIONS(173),
    [sym__integer_literal] = ACTIONS(651),
    [sym__octal_literal] = ACTIONS(651),
    [sym__hexidecimal_literal] = ACTIONS(651),
  },
  [214] = {
    [anon_sym_LPAREN] = ACTIONS(653),
    [anon_sym_COMMA] = ACTIONS(653),
    [anon_sym_RPAREN] = ACTIONS(653),
    [anon_sym_EQ] = ACTIONS(653),
    [anon_sym_TILDE] = ACTIONS(653),
    [anon_sym_LBRACK] = ACTIONS(653),
    [anon_sym_RBRACK] = ACTIONS(653),
    [anon_sym_DASH] = ACTIONS(653),
    [anon_sym__] = ACTIONS(653),
    [anon_sym_BQUOTE] = ACTIONS(653),
    [anon_sym_COLON] = ACTIONS(653),
    [sym_list_constructor] = ACTIONS(653),
    [anon_sym_BANG] = ACTIONS(653),
    [sym__variable_pattern] = ACTIONS(655),
    [sym__constructor_pattern] = ACTIONS(655),
    [anon_sym_DOT] = ACTIONS(653),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(655),
    [anon_sym_SQUOTE] = ACTIONS(653),
    [anon_sym_DQUOTE] = ACTIONS(653),
    [anon_sym_POUND] = ACTIONS(653),
    [anon_sym_DOLLAR] = ACTIONS(653),
    [anon_sym_PERCENT] = ACTIONS(653),
    [anon_sym_AMP] = ACTIONS(653),
    [anon_sym_1] = ACTIONS(653),
    [anon_sym_PLUS] = ACTIONS(653),
    [anon_sym_SLASH] = ACTIONS(653),
    [anon_sym_LT] = ACTIONS(653),
    [anon_sym_GT] = ACTIONS(653),
    [anon_sym_QMARK] = ACTIONS(653),
    [anon_sym_CARET] = ACTIONS(653),
    [sym__integer_literal] = ACTIONS(653),
    [sym__octal_literal] = ACTIONS(653),
    [sym__hexidecimal_literal] = ACTIONS(653),
  },
  [215] = {
    [sym__function_pattern] = STATE(214),
    [sym_label_pattern] = STATE(86),
    [sym_irrefutable_pattern] = STATE(86),
    [sym_list_pattern] = STATE(86),
    [sym_tuple_pattern] = STATE(86),
    [sym_parenthesized_pattern] = STATE(86),
    [sym_as_pattern] = STATE(86),
    [sym_wildcard] = STATE(86),
    [sym__variable] = STATE(218),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym__literal] = STATE(86),
    [sym__identifier] = STATE(94),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(96),
    [sym_integer] = STATE(89),
    [sym_char] = STATE(89),
    [sym_string] = STATE(89),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_TILDE] = ACTIONS(373),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym__] = ACTIONS(151),
    [sym_list_constructor] = ACTIONS(153),
    [sym__variable_pattern] = ACTIONS(155),
    [sym__constructor_pattern] = ACTIONS(375),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [216] = {
    [anon_sym_LBRACE] = ACTIONS(81),
    [anon_sym_COMMA] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(81),
    [anon_sym_DASH] = ACTIONS(81),
    [anon_sym_BQUOTE] = ACTIONS(81),
    [anon_sym_COLON] = ACTIONS(81),
    [anon_sym_BANG] = ACTIONS(81),
    [sym__variable_pattern] = ACTIONS(83),
    [anon_sym_DOT] = ACTIONS(81),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(81),
    [anon_sym_DOLLAR] = ACTIONS(81),
    [anon_sym_PERCENT] = ACTIONS(81),
    [anon_sym_AMP] = ACTIONS(81),
    [anon_sym_1] = ACTIONS(81),
    [anon_sym_PLUS] = ACTIONS(81),
    [anon_sym_SLASH] = ACTIONS(81),
    [anon_sym_LT] = ACTIONS(81),
    [anon_sym_GT] = ACTIONS(81),
    [anon_sym_QMARK] = ACTIONS(81),
    [anon_sym_CARET] = ACTIONS(81),
  },
  [217] = {
    [anon_sym_RBRACK] = ACTIONS(657),
    [sym_comment] = ACTIONS(5),
  },
  [218] = {
    [anon_sym_AT] = ACTIONS(659),
    [sym_comment] = ACTIONS(5),
  },
  [219] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(661),
  },
  [220] = {
    [anon_sym_RBRACE] = ACTIONS(321),
    [anon_sym_LPAREN] = ACTIONS(321),
    [anon_sym_COMMA] = ACTIONS(321),
    [anon_sym_RPAREN] = ACTIONS(321),
    [anon_sym_EQ] = ACTIONS(321),
    [anon_sym_TILDE] = ACTIONS(321),
    [anon_sym_LBRACK] = ACTIONS(321),
    [anon_sym_RBRACK] = ACTIONS(321),
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
  [221] = {
    [sym__gap] = STATE(194),
    [sym__graphic] = STATE(194),
    [sym__small] = STATE(74),
    [sym__large] = STATE(74),
    [sym__symbol] = STATE(74),
    [sym__special] = STATE(74),
    [sym__escape] = STATE(194),
    [anon_sym_SEMI] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(107),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_RPAREN] = ACTIONS(107),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_TILDE] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_RBRACK] = ACTIONS(107),
    [anon_sym_DASH] = ACTIONS(109),
    [anon_sym_AT] = ACTIONS(109),
    [anon_sym__] = ACTIONS(111),
    [anon_sym_BQUOTE] = ACTIONS(107),
    [anon_sym_COLON] = ACTIONS(109),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_BANG] = ACTIONS(109),
    [anon_sym_DOT] = ACTIONS(109),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(343),
    [anon_sym_DQUOTE] = ACTIONS(663),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(117),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(111),
    [sym__ascii_large] = ACTIONS(119),
    [anon_sym_POUND] = ACTIONS(109),
    [anon_sym_DOLLAR] = ACTIONS(109),
    [anon_sym_PERCENT] = ACTIONS(109),
    [anon_sym_AMP] = ACTIONS(109),
    [anon_sym_1] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(109),
    [anon_sym_SLASH] = ACTIONS(109),
    [anon_sym_LT] = ACTIONS(109),
    [anon_sym_GT] = ACTIONS(109),
    [anon_sym_QMARK] = ACTIONS(109),
    [anon_sym_CARET] = ACTIONS(109),
    [anon_sym_BSLASH] = ACTIONS(121),
    [sym__space] = ACTIONS(123),
    [sym__newline] = ACTIONS(123),
    [sym__tab] = ACTIONS(123),
    [sym__vertical_tab] = ACTIONS(123),
  },
  [222] = {
    [sym__function_pattern] = STATE(374),
    [sym_label_pattern] = STATE(86),
    [sym_irrefutable_pattern] = STATE(86),
    [sym_list_pattern] = STATE(86),
    [sym_tuple_pattern] = STATE(86),
    [sym_parenthesized_pattern] = STATE(86),
    [sym_as_pattern] = STATE(86),
    [sym_wildcard] = STATE(86),
    [sym__variable] = STATE(93),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym__literal] = STATE(86),
    [sym__identifier] = STATE(94),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(96),
    [sym_integer] = STATE(89),
    [sym_char] = STATE(89),
    [sym_string] = STATE(89),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_TILDE] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym__] = ACTIONS(151),
    [sym_list_constructor] = ACTIONS(153),
    [sym__variable_pattern] = ACTIONS(155),
    [sym__constructor_pattern] = ACTIONS(157),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [223] = {
    [sym_labels] = STATE(376),
    [sym_label] = STATE(377),
    [sym__identifier] = STATE(378),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [anon_sym_RBRACE] = ACTIONS(665),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(71),
    [sym_comment] = ACTIONS(5),
  },
  [224] = {
    [anon_sym_LPAREN] = ACTIONS(667),
    [anon_sym_EQ] = ACTIONS(667),
    [anon_sym_TILDE] = ACTIONS(667),
    [anon_sym_LBRACK] = ACTIONS(667),
    [anon_sym__] = ACTIONS(667),
    [sym_list_constructor] = ACTIONS(667),
    [sym__variable_pattern] = ACTIONS(669),
    [sym__constructor_pattern] = ACTIONS(669),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(669),
    [anon_sym_SQUOTE] = ACTIONS(667),
    [anon_sym_DQUOTE] = ACTIONS(667),
    [sym__integer_literal] = ACTIONS(667),
    [sym__octal_literal] = ACTIONS(667),
    [sym__hexidecimal_literal] = ACTIONS(667),
  },
  [225] = {
    [sym_type] = STATE(385),
    [sym__generic_type_constructor] = STATE(386),
    [sym_tupling_constructor] = STATE(382),
    [sym_tuple] = STATE(386),
    [sym_list] = STATE(386),
    [sym_parenthesized_constructor] = STATE(386),
    [sym_constructor] = STATE(387),
    [sym_variable_identifier] = STATE(388),
    [sym_constructor_identifier] = STATE(114),
    [sym__type_constructors] = STATE(382),
    [sym_qualified_type_constructor] = STATE(389),
    [anon_sym_LPAREN] = ACTIONS(671),
    [anon_sym_COMMA] = ACTIONS(673),
    [anon_sym_LBRACK] = ACTIONS(675),
    [sym_unit_type] = ACTIONS(677),
    [sym_list_constructor] = ACTIONS(677),
    [sym_function_constructor] = ACTIONS(677),
    [sym__variable_pattern] = ACTIONS(469),
    [sym__constructor_pattern] = ACTIONS(679),
    [sym_module_identifier] = ACTIONS(681),
    [sym_comment] = ACTIONS(5),
  },
  [226] = {
    [sym_type] = STATE(393),
    [sym__generic_type_constructor] = STATE(394),
    [sym_tupling_constructor] = STATE(382),
    [sym_tuple] = STATE(394),
    [sym_list] = STATE(394),
    [sym_parenthesized_constructor] = STATE(394),
    [sym_variable_identifier] = STATE(395),
    [sym__type_constructors] = STATE(382),
    [sym_qualified_type_constructor] = STATE(389),
    [aux_sym_list_repeat1] = STATE(396),
    [anon_sym_LPAREN] = ACTIONS(671),
    [anon_sym_LBRACK] = ACTIONS(675),
    [sym_unit_type] = ACTIONS(677),
    [sym_list_constructor] = ACTIONS(677),
    [sym_function_constructor] = ACTIONS(677),
    [sym__variable_pattern] = ACTIONS(683),
    [sym__constructor_pattern] = ACTIONS(685),
    [sym_module_identifier] = ACTIONS(687),
    [sym_comment] = ACTIONS(5),
  },
  [227] = {
    [sym__layout_semicolon] = ACTIONS(689),
    [anon_sym_SEMI] = ACTIONS(691),
    [anon_sym_DASH_GT] = ACTIONS(691),
    [sym_comment] = ACTIONS(5),
  },
  [228] = {
    [sym_variable_identifier] = STATE(398),
    [aux_sym_simple_type_repeat1] = STATE(399),
    [sym__layout_semicolon] = ACTIONS(693),
    [anon_sym_SEMI] = ACTIONS(695),
    [anon_sym_LBRACE] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_DASH_GT] = ACTIONS(695),
    [anon_sym_EQ_GT] = ACTIONS(81),
    [anon_sym_BANG] = ACTIONS(81),
    [sym__variable_pattern] = ACTIONS(81),
    [sym__constructor_pattern] = ACTIONS(203),
    [sym_comment] = ACTIONS(5),
  },
  [229] = {
    [sym_constructor_identifier] = STATE(402),
    [aux_sym_qualified_type_constructor_repeat1] = STATE(403),
    [sym__constructor_pattern] = ACTIONS(697),
    [anon_sym_DOT] = ACTIONS(699),
    [sym_comment] = ACTIONS(5),
  },
  [230] = {
    [sym__layout_semicolon] = ACTIONS(701),
    [anon_sym_SEMI] = ACTIONS(703),
    [sym_comment] = ACTIONS(5),
  },
  [231] = {
    [sym__layout_semicolon] = ACTIONS(705),
    [anon_sym_SEMI] = ACTIONS(707),
    [anon_sym_DASH_GT] = ACTIONS(709),
    [sym_comment] = ACTIONS(5),
  },
  [232] = {
    [sym_type] = STATE(405),
    [sym__generic_type_constructor] = STATE(231),
    [sym_tupling_constructor] = STATE(227),
    [sym_tuple] = STATE(231),
    [sym_list] = STATE(231),
    [sym_parenthesized_constructor] = STATE(231),
    [sym_variable_identifier] = STATE(234),
    [sym__type_constructors] = STATE(227),
    [sym_qualified_type_constructor] = STATE(236),
    [anon_sym_LPAREN] = ACTIONS(562),
    [anon_sym_LBRACK] = ACTIONS(401),
    [sym_unit_type] = ACTIONS(403),
    [sym_list_constructor] = ACTIONS(403),
    [sym_function_constructor] = ACTIONS(403),
    [sym__variable_pattern] = ACTIONS(405),
    [sym__constructor_pattern] = ACTIONS(564),
    [sym_module_identifier] = ACTIONS(409),
    [sym_comment] = ACTIONS(5),
  },
  [233] = {
    [anon_sym_EQ_GT] = ACTIONS(711),
    [sym_comment] = ACTIONS(5),
  },
  [234] = {
    [sym__layout_semicolon] = ACTIONS(713),
    [anon_sym_SEMI] = ACTIONS(715),
    [anon_sym_DASH_GT] = ACTIONS(717),
    [sym_comment] = ACTIONS(5),
  },
  [235] = {
    [sym_labels] = STATE(124),
    [sym_label] = STATE(164),
    [sym_strict] = STATE(165),
    [sym__identifier] = STATE(166),
    [sym_variable_identifier] = STATE(167),
    [sym_constructor_identifier] = STATE(167),
    [sym_fields] = STATE(124),
    [aux_sym_constructor_repeat1] = STATE(168),
    [anon_sym_LBRACE] = ACTIONS(209),
    [anon_sym_LPAREN] = ACTIONS(211),
    [anon_sym_EQ_GT] = ACTIONS(213),
    [anon_sym_BANG] = ACTIONS(269),
    [sym__variable_pattern] = ACTIONS(271),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
  },
  [236] = {
    [sym__layout_semicolon] = ACTIONS(719),
    [anon_sym_SEMI] = ACTIONS(721),
    [anon_sym_DASH_GT] = ACTIONS(721),
    [sym_comment] = ACTIONS(5),
  },
  [237] = {
    [ts_builtin_sym_end] = ACTIONS(723),
    [anon_sym_RBRACE] = ACTIONS(725),
    [anon_sym_import] = ACTIONS(725),
    [anon_sym_foreign] = ACTIONS(725),
    [anon_sym_default] = ACTIONS(725),
    [anon_sym_class] = ACTIONS(725),
    [anon_sym_instance] = ACTIONS(725),
    [anon_sym_infixl] = ACTIONS(725),
    [anon_sym_infixr] = ACTIONS(725),
    [anon_sym_infix] = ACTIONS(725),
    [anon_sym_data] = ACTIONS(725),
    [anon_sym_newtype] = ACTIONS(725),
    [anon_sym_type] = ACTIONS(725),
    [sym__variable_pattern] = ACTIONS(727),
    [sym__constructor_pattern] = ACTIONS(727),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(727),
    [anon_sym_SQUOTE] = ACTIONS(725),
    [anon_sym_DQUOTE] = ACTIONS(725),
    [sym__integer_literal] = ACTIONS(725),
    [sym__octal_literal] = ACTIONS(725),
    [sym__hexidecimal_literal] = ACTIONS(725),
  },
  [238] = {
    [anon_sym_where] = ACTIONS(729),
    [sym_comment] = ACTIONS(5),
  },
  [239] = {
    [aux_sym_module_exports_repeat1] = STATE(410),
    [anon_sym_COMMA] = ACTIONS(731),
    [anon_sym_RPAREN] = ACTIONS(733),
    [sym_comment] = ACTIONS(5),
  },
  [240] = {
    [anon_sym_LPAREN] = ACTIONS(735),
    [anon_sym_COMMA] = ACTIONS(737),
    [anon_sym_RPAREN] = ACTIONS(737),
    [sym_comment] = ACTIONS(5),
  },
  [241] = {
    [sym_import] = STATE(19),
    [sym__declaration] = STATE(413),
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
    [aux_sym_module_repeat1] = STATE(414),
    [sym__layout_close_brace] = ACTIONS(739),
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
    [aux_sym_module_repeat1] = STATE(415),
    [anon_sym_RBRACE] = ACTIONS(741),
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
    [ts_builtin_sym_end] = ACTIONS(743),
    [sym_comment] = ACTIONS(5),
  },
  [244] = {
    [ts_builtin_sym_end] = ACTIONS(745),
    [sym_comment] = ACTIONS(5),
  },
  [245] = {
    [sym_module_identifier] = ACTIONS(747),
    [sym_comment] = ACTIONS(5),
  },
  [246] = {
    [sym__layout_semicolon] = ACTIONS(749),
    [anon_sym_SEMI] = ACTIONS(751),
    [sym_comment] = ACTIONS(5),
  },
  [247] = {
    [sym__layout_semicolon] = ACTIONS(753),
    [anon_sym_SEMI] = ACTIONS(755),
    [sym_comment] = ACTIONS(5),
  },
  [248] = {
    [aux_sym_import_specification_repeat1] = STATE(420),
    [anon_sym_LPAREN] = ACTIONS(757),
    [anon_sym_COMMA] = ACTIONS(759),
    [anon_sym_RPAREN] = ACTIONS(761),
    [sym_comment] = ACTIONS(5),
  },
  [249] = {
    [sym_import_specification] = STATE(421),
    [sym__layout_semicolon] = ACTIONS(749),
    [anon_sym_SEMI] = ACTIONS(751),
    [anon_sym_LPAREN] = ACTIONS(189),
    [anon_sym_hiding] = ACTIONS(193),
    [sym_comment] = ACTIONS(5),
  },
  [250] = {
    [sym__identifier] = STATE(422),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [anon_sym_RPAREN] = ACTIONS(761),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [251] = {
    [sym__variable_pattern] = ACTIONS(763),
    [sym__constructor_pattern] = ACTIONS(765),
    [sym_comment] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(763),
  },
  [252] = {
    [sym__gap] = STATE(72),
    [sym__graphic] = STATE(72),
    [sym__small] = STATE(74),
    [sym__large] = STATE(74),
    [sym__symbol] = STATE(74),
    [sym__special] = STATE(74),
    [sym__escape] = STATE(72),
    [aux_sym_string_repeat1] = STATE(424),
    [anon_sym_SEMI] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(107),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_RPAREN] = ACTIONS(107),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_TILDE] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_RBRACK] = ACTIONS(107),
    [anon_sym_DASH] = ACTIONS(109),
    [anon_sym_AT] = ACTIONS(109),
    [anon_sym__] = ACTIONS(111),
    [anon_sym_BQUOTE] = ACTIONS(107),
    [anon_sym_COLON] = ACTIONS(109),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_BANG] = ACTIONS(109),
    [anon_sym_DOT] = ACTIONS(109),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(767),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(117),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(111),
    [sym__ascii_large] = ACTIONS(119),
    [anon_sym_POUND] = ACTIONS(109),
    [anon_sym_DOLLAR] = ACTIONS(109),
    [anon_sym_PERCENT] = ACTIONS(109),
    [anon_sym_AMP] = ACTIONS(109),
    [anon_sym_1] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(109),
    [anon_sym_SLASH] = ACTIONS(109),
    [anon_sym_LT] = ACTIONS(109),
    [anon_sym_GT] = ACTIONS(109),
    [anon_sym_QMARK] = ACTIONS(109),
    [anon_sym_CARET] = ACTIONS(109),
    [anon_sym_BSLASH] = ACTIONS(121),
    [sym__space] = ACTIONS(123),
    [sym__newline] = ACTIONS(123),
    [sym__tab] = ACTIONS(123),
    [sym__vertical_tab] = ACTIONS(123),
  },
  [253] = {
    [sym_type_signature] = STATE(425),
    [sym__identifier] = STATE(255),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [sym_string] = STATE(426),
    [sym__variable_pattern] = ACTIONS(469),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(441),
  },
  [254] = {
    [sym__layout_semicolon] = ACTIONS(769),
    [anon_sym_SEMI] = ACTIONS(771),
    [sym_comment] = ACTIONS(5),
  },
  [255] = {
    [anon_sym_COLON_COLON] = ACTIONS(169),
    [sym_comment] = ACTIONS(5),
  },
  [256] = {
    [sym_type_signature] = STATE(425),
    [sym__identifier] = STATE(255),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [sym__variable_pattern] = ACTIONS(469),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [257] = {
    [sym__identifier] = STATE(427),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [258] = {
    [sym__layout_semicolon] = ACTIONS(773),
    [anon_sym_SEMI] = ACTIONS(775),
    [sym_comment] = ACTIONS(5),
  },
  [259] = {
    [anon_sym_COMMA] = ACTIONS(777),
    [anon_sym_RPAREN] = ACTIONS(779),
    [sym_comment] = ACTIONS(5),
  },
  [260] = {
    [sym_constructor] = STATE(430),
    [sym_constructor_identifier] = STATE(114),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
  },
  [261] = {
    [anon_sym_EQ_GT] = ACTIONS(781),
    [sym_comment] = ACTIONS(5),
  },
  [262] = {
    [anon_sym_COMMA] = ACTIONS(783),
    [anon_sym_RPAREN] = ACTIONS(785),
    [sym_comment] = ACTIONS(5),
  },
  [263] = {
    [aux_sym_labels_repeat1] = STATE(435),
    [anon_sym_COMMA] = ACTIONS(475),
    [anon_sym_RPAREN] = ACTIONS(475),
    [sym_comment] = ACTIONS(5),
  },
  [264] = {
    [anon_sym_COMMA] = ACTIONS(477),
    [anon_sym_RPAREN] = ACTIONS(477),
    [anon_sym_EQ] = ACTIONS(787),
    [anon_sym_BANG] = ACTIONS(477),
    [sym__variable_pattern] = ACTIONS(477),
    [sym__constructor_pattern] = ACTIONS(479),
    [sym_comment] = ACTIONS(5),
  },
  [265] = {
    [sym__layout_semicolon] = ACTIONS(789),
    [anon_sym_SEMI] = ACTIONS(791),
    [sym_comment] = ACTIONS(5),
  },
  [266] = {
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_where] = ACTIONS(75),
    [anon_sym_BANG] = ACTIONS(75),
    [sym__variable_pattern] = ACTIONS(77),
    [sym__constructor_pattern] = ACTIONS(77),
    [sym_comment] = ACTIONS(5),
  },
  [267] = {
    [anon_sym_EQ] = ACTIONS(81),
    [anon_sym_where] = ACTIONS(81),
    [anon_sym_BANG] = ACTIONS(81),
    [sym__variable_pattern] = ACTIONS(203),
    [sym__constructor_pattern] = ACTIONS(203),
    [sym_comment] = ACTIONS(5),
  },
  [268] = {
    [anon_sym_EQ] = ACTIONS(481),
    [anon_sym_where] = ACTIONS(477),
    [anon_sym_BANG] = ACTIONS(477),
    [sym__variable_pattern] = ACTIONS(479),
    [sym__constructor_pattern] = ACTIONS(479),
    [sym_comment] = ACTIONS(5),
  },
  [269] = {
    [anon_sym_EQ] = ACTIONS(173),
    [anon_sym_where] = ACTIONS(173),
    [anon_sym_BANG] = ACTIONS(173),
    [sym__variable_pattern] = ACTIONS(175),
    [sym__constructor_pattern] = ACTIONS(175),
    [sym_comment] = ACTIONS(5),
  },
  [270] = {
    [sym_import] = STATE(19),
    [sym__declaration] = STATE(413),
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
    [aux_sym_module_repeat1] = STATE(438),
    [sym__layout_close_brace] = ACTIONS(793),
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
  [271] = {
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
    [aux_sym_module_repeat1] = STATE(439),
    [anon_sym_RBRACE] = ACTIONS(795),
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
  [272] = {
    [sym__layout_semicolon] = ACTIONS(743),
    [anon_sym_SEMI] = ACTIONS(797),
    [sym_comment] = ACTIONS(5),
  },
  [273] = {
    [aux_sym_fields_repeat1] = STATE(442),
    [anon_sym_RBRACE] = ACTIONS(799),
    [anon_sym_COMMA] = ACTIONS(801),
    [sym_comment] = ACTIONS(5),
  },
  [274] = {
    [aux_sym_field_repeat1] = STATE(445),
    [anon_sym_COMMA] = ACTIONS(803),
    [anon_sym_COLON_COLON] = ACTIONS(805),
    [sym_comment] = ACTIONS(5),
  },
  [275] = {
    [anon_sym_RPAREN] = ACTIONS(807),
    [sym__variable_pattern] = ACTIONS(807),
    [sym__constructor_pattern] = ACTIONS(809),
    [sym_comment] = ACTIONS(5),
  },
  [276] = {
    [sym__identifier] = STATE(447),
    [sym_variable_identifier] = STATE(167),
    [sym_constructor_identifier] = STATE(167),
    [anon_sym_RPAREN] = ACTIONS(811),
    [sym__variable_pattern] = ACTIONS(271),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
  },
  [277] = {
    [anon_sym_RBRACE] = ACTIONS(813),
    [anon_sym_COMMA] = ACTIONS(813),
    [anon_sym_where] = ACTIONS(813),
    [anon_sym_EQ_GT] = ACTIONS(813),
    [anon_sym_BANG] = ACTIONS(813),
    [sym__variable_pattern] = ACTIONS(815),
    [sym__constructor_pattern] = ACTIONS(815),
    [sym_comment] = ACTIONS(5),
  },
  [278] = {
    [sym_label] = STATE(448),
    [sym__identifier] = STATE(449),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(71),
    [sym_comment] = ACTIONS(5),
  },
  [279] = {
    [anon_sym_COMMA] = ACTIONS(817),
    [anon_sym_where] = ACTIONS(819),
    [anon_sym_EQ_GT] = ACTIONS(819),
    [sym_comment] = ACTIONS(5),
  },
  [280] = {
    [sym__literal] = STATE(455),
    [sym_integer] = STATE(451),
    [sym_char] = STATE(451),
    [sym_string] = STATE(451),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(821),
    [anon_sym_SQUOTE] = ACTIONS(823),
    [anon_sym_DQUOTE] = ACTIONS(825),
    [sym__integer_literal] = ACTIONS(827),
    [sym__octal_literal] = ACTIONS(827),
    [sym__hexidecimal_literal] = ACTIONS(827),
  },
  [281] = {
    [anon_sym_where] = ACTIONS(829),
    [anon_sym_EQ_GT] = ACTIONS(829),
    [anon_sym_BANG] = ACTIONS(829),
    [sym__variable_pattern] = ACTIONS(831),
    [sym__constructor_pattern] = ACTIONS(831),
    [sym_comment] = ACTIONS(5),
  },
  [282] = {
    [sym__layout_semicolon] = ACTIONS(833),
    [anon_sym_SEMI] = ACTIONS(835),
    [sym_comment] = ACTIONS(5),
  },
  [283] = {
    [sym__layout_semicolon] = ACTIONS(837),
    [anon_sym_SEMI] = ACTIONS(839),
    [anon_sym_COMMA] = ACTIONS(839),
    [sym_comment] = ACTIONS(5),
  },
  [284] = {
    [sym__layout_semicolon] = ACTIONS(841),
    [anon_sym_SEMI] = ACTIONS(843),
    [anon_sym_COMMA] = ACTIONS(843),
    [anon_sym_DASH] = ACTIONS(843),
    [anon_sym_COLON] = ACTIONS(843),
    [anon_sym_BANG] = ACTIONS(843),
    [anon_sym_DOT] = ACTIONS(843),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(843),
    [anon_sym_DOLLAR] = ACTIONS(843),
    [anon_sym_PERCENT] = ACTIONS(843),
    [anon_sym_AMP] = ACTIONS(843),
    [anon_sym_1] = ACTIONS(843),
    [anon_sym_PLUS] = ACTIONS(843),
    [anon_sym_SLASH] = ACTIONS(843),
    [anon_sym_LT] = ACTIONS(843),
    [anon_sym_GT] = ACTIONS(843),
    [anon_sym_QMARK] = ACTIONS(843),
    [anon_sym_CARET] = ACTIONS(843),
  },
  [285] = {
    [sym__layout_semicolon] = ACTIONS(845),
    [anon_sym_SEMI] = ACTIONS(847),
    [anon_sym_COMMA] = ACTIONS(847),
    [sym_comment] = ACTIONS(5),
  },
  [286] = {
    [sym__op] = STATE(456),
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
  [287] = {
    [sym__layout_semicolon] = ACTIONS(849),
    [anon_sym_SEMI] = ACTIONS(851),
    [anon_sym_COMMA] = ACTIONS(505),
    [sym_comment] = ACTIONS(5),
  },
  [288] = {
    [sym__layout_semicolon] = ACTIONS(853),
    [anon_sym_SEMI] = ACTIONS(855),
    [anon_sym_COMMA] = ACTIONS(855),
    [anon_sym_DASH] = ACTIONS(855),
    [anon_sym_BANG] = ACTIONS(855),
    [anon_sym_DOT] = ACTIONS(855),
    [sym_comment] = ACTIONS(5),
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
  },
  [289] = {
    [sym_constructors] = STATE(457),
    [sym_constructor] = STATE(147),
    [sym_deriving] = STATE(458),
    [sym_constructor_identifier] = STATE(149),
    [sym__layout_semicolon] = ACTIONS(857),
    [anon_sym_SEMI] = ACTIONS(859),
    [anon_sym_deriving] = ACTIONS(251),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [290] = {
    [sym_deriving] = STATE(458),
    [sym__layout_semicolon] = ACTIONS(857),
    [anon_sym_SEMI] = ACTIONS(859),
    [anon_sym_deriving] = ACTIONS(251),
    [sym_comment] = ACTIONS(5),
  },
  [291] = {
    [sym__layout_semicolon] = ACTIONS(857),
    [anon_sym_SEMI] = ACTIONS(859),
    [sym_comment] = ACTIONS(5),
  },
  [292] = {
    [sym_field] = STATE(459),
    [sym_variable_identifier] = STATE(274),
    [sym__variable_pattern] = ACTIONS(469),
    [sym_comment] = ACTIONS(5),
  },
  [293] = {
    [sym__identifier] = STATE(275),
    [sym_variable_identifier] = STATE(167),
    [sym_constructor_identifier] = STATE(167),
    [aux_sym_constructor_repeat2] = STATE(460),
    [sym__variable_pattern] = ACTIONS(271),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
  },
  [294] = {
    [sym__identifier] = STATE(461),
    [sym_variable_identifier] = STATE(300),
    [sym_constructor_identifier] = STATE(300),
    [sym__variable_pattern] = ACTIONS(861),
    [sym__constructor_pattern] = ACTIONS(243),
    [sym_comment] = ACTIONS(5),
  },
  [295] = {
    [sym__layout_semicolon] = ACTIONS(73),
    [anon_sym_SEMI] = ACTIONS(75),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_PIPE] = ACTIONS(75),
    [anon_sym_deriving] = ACTIONS(75),
    [anon_sym_BANG] = ACTIONS(75),
    [sym__variable_pattern] = ACTIONS(77),
    [sym__constructor_pattern] = ACTIONS(77),
    [sym_comment] = ACTIONS(5),
  },
  [296] = {
    [sym__layout_semicolon] = ACTIONS(539),
    [anon_sym_SEMI] = ACTIONS(471),
    [anon_sym_EQ] = ACTIONS(471),
    [anon_sym_deriving] = ACTIONS(471),
    [sym__constructor_pattern] = ACTIONS(541),
    [sym_comment] = ACTIONS(5),
  },
  [297] = {
    [aux_sym_labels_repeat1] = STATE(463),
    [sym__layout_semicolon] = ACTIONS(543),
    [anon_sym_SEMI] = ACTIONS(475),
    [anon_sym_COMMA] = ACTIONS(863),
    [anon_sym_EQ] = ACTIONS(475),
    [anon_sym_deriving] = ACTIONS(475),
    [sym__constructor_pattern] = ACTIONS(547),
    [sym_comment] = ACTIONS(5),
  },
  [298] = {
    [sym__layout_semicolon] = ACTIONS(549),
    [anon_sym_SEMI] = ACTIONS(477),
    [anon_sym_EQ] = ACTIONS(477),
    [anon_sym_deriving] = ACTIONS(477),
    [anon_sym_BANG] = ACTIONS(477),
    [sym__variable_pattern] = ACTIONS(479),
    [sym__constructor_pattern] = ACTIONS(479),
    [sym_comment] = ACTIONS(5),
  },
  [299] = {
    [sym__layout_semicolon] = ACTIONS(549),
    [anon_sym_SEMI] = ACTIONS(477),
    [anon_sym_EQ] = ACTIONS(865),
    [anon_sym_deriving] = ACTIONS(477),
    [anon_sym_BANG] = ACTIONS(477),
    [sym__variable_pattern] = ACTIONS(479),
    [sym__constructor_pattern] = ACTIONS(479),
    [sym_comment] = ACTIONS(5),
  },
  [300] = {
    [sym__layout_semicolon] = ACTIONS(171),
    [anon_sym_SEMI] = ACTIONS(173),
    [anon_sym_EQ] = ACTIONS(173),
    [anon_sym_PIPE] = ACTIONS(173),
    [anon_sym_deriving] = ACTIONS(173),
    [anon_sym_BANG] = ACTIONS(173),
    [sym__variable_pattern] = ACTIONS(175),
    [sym__constructor_pattern] = ACTIONS(175),
    [sym_comment] = ACTIONS(5),
  },
  [301] = {
    [sym_strict] = STATE(465),
    [sym__identifier] = STATE(465),
    [sym_variable_identifier] = STATE(300),
    [sym_constructor_identifier] = STATE(300),
    [sym__layout_semicolon] = ACTIONS(539),
    [anon_sym_SEMI] = ACTIONS(471),
    [anon_sym_EQ] = ACTIONS(471),
    [anon_sym_deriving] = ACTIONS(471),
    [anon_sym_BANG] = ACTIONS(525),
    [sym__variable_pattern] = ACTIONS(527),
    [sym__constructor_pattern] = ACTIONS(541),
    [sym_comment] = ACTIONS(5),
  },
  [302] = {
    [sym__identifier] = STATE(466),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [303] = {
    [sym__layout_semicolon] = ACTIONS(868),
    [anon_sym_SEMI] = ACTIONS(870),
    [sym_comment] = ACTIONS(5),
  },
  [304] = {
    [sym_constructor] = STATE(467),
    [sym_constructor_identifier] = STATE(149),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [305] = {
    [sym__layout_semicolon] = ACTIONS(872),
    [anon_sym_SEMI] = ACTIONS(874),
    [anon_sym_PIPE] = ACTIONS(876),
    [anon_sym_deriving] = ACTIONS(874),
    [sym_comment] = ACTIONS(5),
  },
  [306] = {
    [sym__layout_semicolon] = ACTIONS(549),
    [anon_sym_SEMI] = ACTIONS(477),
    [anon_sym_EQ] = ACTIONS(878),
    [anon_sym_PIPE] = ACTIONS(477),
    [anon_sym_deriving] = ACTIONS(477),
    [anon_sym_BANG] = ACTIONS(477),
    [sym__variable_pattern] = ACTIONS(479),
    [sym__constructor_pattern] = ACTIONS(479),
    [sym_comment] = ACTIONS(5),
  },
  [307] = {
    [sym_strict] = STATE(314),
    [sym__identifier] = STATE(314),
    [sym_variable_identifier] = STATE(26),
    [sym_constructor_identifier] = STATE(26),
    [sym__layout_semicolon] = ACTIONS(539),
    [anon_sym_SEMI] = ACTIONS(471),
    [anon_sym_PIPE] = ACTIONS(471),
    [anon_sym_deriving] = ACTIONS(471),
    [anon_sym_BANG] = ACTIONS(259),
    [sym__variable_pattern] = ACTIONS(261),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [308] = {
    [aux_sym_fields_repeat1] = STATE(470),
    [anon_sym_RBRACE] = ACTIONS(880),
    [anon_sym_COMMA] = ACTIONS(801),
    [sym_comment] = ACTIONS(5),
  },
  [309] = {
    [sym__identifier] = STATE(447),
    [sym_variable_identifier] = STATE(167),
    [sym_constructor_identifier] = STATE(167),
    [anon_sym_RPAREN] = ACTIONS(882),
    [sym__variable_pattern] = ACTIONS(271),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
  },
  [310] = {
    [sym__layout_semicolon] = ACTIONS(884),
    [anon_sym_SEMI] = ACTIONS(813),
    [anon_sym_EQ] = ACTIONS(813),
    [anon_sym_EQ_GT] = ACTIONS(813),
    [anon_sym_PIPE] = ACTIONS(813),
    [anon_sym_deriving] = ACTIONS(813),
    [anon_sym_BANG] = ACTIONS(813),
    [sym__variable_pattern] = ACTIONS(815),
    [sym__constructor_pattern] = ACTIONS(815),
    [sym_comment] = ACTIONS(5),
  },
  [311] = {
    [sym_label] = STATE(472),
    [sym__identifier] = STATE(473),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(71),
    [sym_comment] = ACTIONS(5),
  },
  [312] = {
    [sym__layout_semicolon] = ACTIONS(886),
    [anon_sym_SEMI] = ACTIONS(819),
    [anon_sym_COMMA] = ACTIONS(888),
    [anon_sym_EQ] = ACTIONS(819),
    [anon_sym_EQ_GT] = ACTIONS(819),
    [anon_sym_PIPE] = ACTIONS(819),
    [anon_sym_deriving] = ACTIONS(819),
    [sym__constructor_pattern] = ACTIONS(890),
    [sym_comment] = ACTIONS(5),
  },
  [313] = {
    [sym__literal] = STATE(479),
    [sym_integer] = STATE(475),
    [sym_char] = STATE(475),
    [sym_string] = STATE(475),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(892),
    [anon_sym_SQUOTE] = ACTIONS(894),
    [anon_sym_DQUOTE] = ACTIONS(896),
    [sym__integer_literal] = ACTIONS(898),
    [sym__octal_literal] = ACTIONS(898),
    [sym__hexidecimal_literal] = ACTIONS(898),
  },
  [314] = {
    [sym__layout_semicolon] = ACTIONS(900),
    [anon_sym_SEMI] = ACTIONS(829),
    [anon_sym_EQ] = ACTIONS(829),
    [anon_sym_EQ_GT] = ACTIONS(829),
    [anon_sym_PIPE] = ACTIONS(829),
    [anon_sym_deriving] = ACTIONS(829),
    [anon_sym_BANG] = ACTIONS(829),
    [sym__variable_pattern] = ACTIONS(831),
    [sym__constructor_pattern] = ACTIONS(831),
    [sym_comment] = ACTIONS(5),
  },
  [315] = {
    [sym_constructor] = STATE(480),
    [sym_constructor_identifier] = STATE(149),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [316] = {
    [anon_sym_LPAREN] = ACTIONS(902),
    [anon_sym_COMMA] = ACTIONS(902),
    [anon_sym_RPAREN] = ACTIONS(902),
    [anon_sym_EQ] = ACTIONS(902),
    [anon_sym_LBRACK] = ACTIONS(902),
    [anon_sym_RBRACK] = ACTIONS(902),
    [anon_sym_DASH_GT] = ACTIONS(902),
    [sym_unit_type] = ACTIONS(902),
    [sym_list_constructor] = ACTIONS(902),
    [sym_function_constructor] = ACTIONS(902),
    [sym__variable_pattern] = ACTIONS(902),
    [sym__constructor_pattern] = ACTIONS(904),
    [sym_module_identifier] = ACTIONS(904),
    [sym_comment] = ACTIONS(5),
  },
  [317] = {
    [sym_deriving] = STATE(481),
    [sym__layout_semicolon] = ACTIONS(906),
    [anon_sym_SEMI] = ACTIONS(908),
    [anon_sym_deriving] = ACTIONS(251),
    [sym_comment] = ACTIONS(5),
  },
  [318] = {
    [anon_sym_COMMA] = ACTIONS(813),
    [anon_sym_RPAREN] = ACTIONS(813),
    [anon_sym_EQ_GT] = ACTIONS(813),
    [anon_sym_BANG] = ACTIONS(813),
    [sym__variable_pattern] = ACTIONS(813),
    [sym__constructor_pattern] = ACTIONS(815),
    [sym_comment] = ACTIONS(5),
  },
  [319] = {
    [sym_label] = STATE(448),
    [sym__identifier] = STATE(482),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(71),
    [sym_comment] = ACTIONS(5),
  },
  [320] = {
    [anon_sym_COMMA] = ACTIONS(910),
    [anon_sym_EQ_GT] = ACTIONS(819),
    [sym_comment] = ACTIONS(5),
  },
  [321] = {
    [sym__literal] = STATE(455),
    [sym_integer] = STATE(365),
    [sym_char] = STATE(365),
    [sym_string] = STATE(365),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(647),
    [anon_sym_SQUOTE] = ACTIONS(649),
    [anon_sym_DQUOTE] = ACTIONS(441),
    [sym__integer_literal] = ACTIONS(651),
    [sym__octal_literal] = ACTIONS(651),
    [sym__hexidecimal_literal] = ACTIONS(651),
  },
  [322] = {
    [anon_sym_COMMA] = ACTIONS(829),
    [anon_sym_RPAREN] = ACTIONS(829),
    [anon_sym_EQ_GT] = ACTIONS(829),
    [anon_sym_BANG] = ACTIONS(829),
    [sym__variable_pattern] = ACTIONS(829),
    [sym__constructor_pattern] = ACTIONS(831),
    [sym_comment] = ACTIONS(5),
  },
  [323] = {
    [anon_sym_LPAREN] = ACTIONS(912),
    [anon_sym_COMMA] = ACTIONS(912),
    [anon_sym_RPAREN] = ACTIONS(912),
    [anon_sym_EQ] = ACTIONS(912),
    [anon_sym_LBRACK] = ACTIONS(912),
    [anon_sym_RBRACK] = ACTIONS(912),
    [anon_sym_DASH_GT] = ACTIONS(912),
    [sym_unit_type] = ACTIONS(912),
    [sym_list_constructor] = ACTIONS(912),
    [sym_function_constructor] = ACTIONS(912),
    [sym__variable_pattern] = ACTIONS(912),
    [sym__constructor_pattern] = ACTIONS(914),
    [sym_module_identifier] = ACTIONS(914),
    [sym_comment] = ACTIONS(5),
  },
  [324] = {
    [sym_type] = STATE(385),
    [sym__generic_type_constructor] = STATE(386),
    [sym_tupling_constructor] = STATE(382),
    [sym_tuple] = STATE(386),
    [sym_list] = STATE(386),
    [sym_parenthesized_constructor] = STATE(386),
    [sym_variable_identifier] = STATE(388),
    [sym__type_constructors] = STATE(382),
    [sym_qualified_type_constructor] = STATE(389),
    [anon_sym_LPAREN] = ACTIONS(671),
    [anon_sym_COMMA] = ACTIONS(673),
    [anon_sym_LBRACK] = ACTIONS(675),
    [sym_unit_type] = ACTIONS(677),
    [sym_list_constructor] = ACTIONS(677),
    [sym_function_constructor] = ACTIONS(677),
    [sym__variable_pattern] = ACTIONS(469),
    [sym__constructor_pattern] = ACTIONS(916),
    [sym_module_identifier] = ACTIONS(681),
    [sym_comment] = ACTIONS(5),
  },
  [325] = {
    [sym_variable_identifier] = STATE(398),
    [aux_sym_simple_type_repeat1] = STATE(399),
    [sym__layout_semicolon] = ACTIONS(693),
    [anon_sym_SEMI] = ACTIONS(695),
    [anon_sym_DASH_GT] = ACTIONS(695),
    [sym__variable_pattern] = ACTIONS(918),
    [sym_comment] = ACTIONS(5),
  },
  [326] = {
    [sym__layout_semicolon] = ACTIONS(920),
    [anon_sym_SEMI] = ACTIONS(922),
    [sym_comment] = ACTIONS(5),
  },
  [327] = {
    [aux_sym_fields_repeat1] = STATE(486),
    [anon_sym_RBRACE] = ACTIONS(924),
    [anon_sym_COMMA] = ACTIONS(801),
    [sym_comment] = ACTIONS(5),
  },
  [328] = {
    [sym__identifier] = STATE(447),
    [sym_variable_identifier] = STATE(167),
    [sym_constructor_identifier] = STATE(167),
    [anon_sym_RPAREN] = ACTIONS(926),
    [sym__variable_pattern] = ACTIONS(271),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
  },
  [329] = {
    [anon_sym_EQ] = ACTIONS(813),
    [anon_sym_BANG] = ACTIONS(813),
    [sym__variable_pattern] = ACTIONS(813),
    [sym__constructor_pattern] = ACTIONS(815),
    [sym_comment] = ACTIONS(5),
  },
  [330] = {
    [sym_label] = STATE(488),
    [sym__identifier] = STATE(489),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(71),
    [sym_comment] = ACTIONS(5),
  },
  [331] = {
    [anon_sym_COMMA] = ACTIONS(928),
    [anon_sym_EQ] = ACTIONS(819),
    [sym_comment] = ACTIONS(5),
  },
  [332] = {
    [sym__literal] = STATE(491),
    [sym_integer] = STATE(89),
    [sym_char] = STATE(89),
    [sym_string] = STATE(89),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [333] = {
    [anon_sym_EQ] = ACTIONS(829),
    [anon_sym_BANG] = ACTIONS(829),
    [sym__variable_pattern] = ACTIONS(829),
    [sym__constructor_pattern] = ACTIONS(831),
    [sym_comment] = ACTIONS(5),
  },
  [334] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(930),
  },
  [335] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(932),
  },
  [336] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(934),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(934),
  },
  [337] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(936),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(938),
  },
  [338] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(940),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(940),
  },
  [339] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(936),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(942),
  },
  [340] = {
    [anon_sym_SEMI] = ACTIONS(944),
    [anon_sym_LBRACE] = ACTIONS(944),
    [anon_sym_RBRACE] = ACTIONS(944),
    [anon_sym_LPAREN] = ACTIONS(944),
    [anon_sym_RPAREN] = ACTIONS(944),
    [anon_sym_EQ] = ACTIONS(944),
    [anon_sym_TILDE] = ACTIONS(944),
    [anon_sym_LBRACK] = ACTIONS(944),
    [anon_sym_RBRACK] = ACTIONS(944),
    [anon_sym_DASH] = ACTIONS(944),
    [anon_sym_AT] = ACTIONS(944),
    [anon_sym__] = ACTIONS(944),
    [anon_sym_BQUOTE] = ACTIONS(944),
    [anon_sym_COLON] = ACTIONS(944),
    [anon_sym_PIPE] = ACTIONS(944),
    [anon_sym_BANG] = ACTIONS(944),
    [anon_sym_DOT] = ACTIONS(944),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(944),
    [anon_sym_DQUOTE] = ACTIONS(944),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(944),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(944),
    [sym__ascii_large] = ACTIONS(944),
    [anon_sym_POUND] = ACTIONS(944),
    [anon_sym_DOLLAR] = ACTIONS(944),
    [anon_sym_PERCENT] = ACTIONS(944),
    [anon_sym_AMP] = ACTIONS(944),
    [anon_sym_1] = ACTIONS(944),
    [anon_sym_PLUS] = ACTIONS(944),
    [anon_sym_SLASH] = ACTIONS(944),
    [anon_sym_LT] = ACTIONS(944),
    [anon_sym_GT] = ACTIONS(944),
    [anon_sym_QMARK] = ACTIONS(944),
    [anon_sym_CARET] = ACTIONS(944),
    [anon_sym_BSLASH] = ACTIONS(944),
    [sym__space] = ACTIONS(944),
    [sym__newline] = ACTIONS(944),
    [sym__tab] = ACTIONS(944),
    [sym__vertical_tab] = ACTIONS(944),
  },
  [341] = {
    [anon_sym_SEMI] = ACTIONS(946),
    [anon_sym_LBRACE] = ACTIONS(946),
    [anon_sym_RBRACE] = ACTIONS(946),
    [anon_sym_LPAREN] = ACTIONS(946),
    [anon_sym_RPAREN] = ACTIONS(946),
    [anon_sym_EQ] = ACTIONS(946),
    [anon_sym_TILDE] = ACTIONS(946),
    [anon_sym_LBRACK] = ACTIONS(946),
    [anon_sym_RBRACK] = ACTIONS(946),
    [anon_sym_DASH] = ACTIONS(946),
    [anon_sym_AT] = ACTIONS(946),
    [anon_sym__] = ACTIONS(946),
    [anon_sym_BQUOTE] = ACTIONS(946),
    [anon_sym_COLON] = ACTIONS(946),
    [anon_sym_PIPE] = ACTIONS(946),
    [anon_sym_BANG] = ACTIONS(946),
    [anon_sym_DOT] = ACTIONS(946),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(946),
    [anon_sym_DQUOTE] = ACTIONS(946),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(946),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(946),
    [sym__ascii_large] = ACTIONS(946),
    [anon_sym_POUND] = ACTIONS(946),
    [anon_sym_DOLLAR] = ACTIONS(946),
    [anon_sym_PERCENT] = ACTIONS(946),
    [anon_sym_AMP] = ACTIONS(946),
    [anon_sym_1] = ACTIONS(946),
    [anon_sym_PLUS] = ACTIONS(946),
    [anon_sym_SLASH] = ACTIONS(946),
    [anon_sym_LT] = ACTIONS(946),
    [anon_sym_GT] = ACTIONS(946),
    [anon_sym_QMARK] = ACTIONS(946),
    [anon_sym_CARET] = ACTIONS(946),
    [anon_sym_BSLASH] = ACTIONS(946),
    [sym__space] = ACTIONS(946),
    [sym__newline] = ACTIONS(946),
    [sym__tab] = ACTIONS(946),
    [sym__vertical_tab] = ACTIONS(946),
  },
  [342] = {
    [anon_sym_SEMI] = ACTIONS(948),
    [anon_sym_LBRACE] = ACTIONS(948),
    [anon_sym_RBRACE] = ACTIONS(948),
    [anon_sym_LPAREN] = ACTIONS(948),
    [anon_sym_RPAREN] = ACTIONS(948),
    [anon_sym_EQ] = ACTIONS(948),
    [anon_sym_TILDE] = ACTIONS(948),
    [anon_sym_LBRACK] = ACTIONS(948),
    [anon_sym_RBRACK] = ACTIONS(948),
    [anon_sym_DASH] = ACTIONS(948),
    [anon_sym_AT] = ACTIONS(948),
    [anon_sym__] = ACTIONS(948),
    [anon_sym_BQUOTE] = ACTIONS(948),
    [anon_sym_COLON] = ACTIONS(948),
    [anon_sym_PIPE] = ACTIONS(948),
    [anon_sym_BANG] = ACTIONS(948),
    [anon_sym_DOT] = ACTIONS(948),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(948),
    [anon_sym_DQUOTE] = ACTIONS(948),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(948),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(948),
    [sym__ascii_large] = ACTIONS(948),
    [anon_sym_POUND] = ACTIONS(948),
    [anon_sym_DOLLAR] = ACTIONS(948),
    [anon_sym_PERCENT] = ACTIONS(948),
    [anon_sym_AMP] = ACTIONS(948),
    [anon_sym_1] = ACTIONS(948),
    [anon_sym_PLUS] = ACTIONS(948),
    [anon_sym_SLASH] = ACTIONS(948),
    [anon_sym_LT] = ACTIONS(948),
    [anon_sym_GT] = ACTIONS(948),
    [anon_sym_QMARK] = ACTIONS(948),
    [anon_sym_CARET] = ACTIONS(948),
    [anon_sym_BSLASH] = ACTIONS(948),
    [sym__space] = ACTIONS(948),
    [sym__newline] = ACTIONS(948),
    [sym__tab] = ACTIONS(948),
    [sym__vertical_tab] = ACTIONS(948),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(948),
  },
  [343] = {
    [anon_sym_SEMI] = ACTIONS(950),
    [anon_sym_LBRACE] = ACTIONS(950),
    [anon_sym_RBRACE] = ACTIONS(950),
    [anon_sym_LPAREN] = ACTIONS(950),
    [anon_sym_RPAREN] = ACTIONS(950),
    [anon_sym_EQ] = ACTIONS(950),
    [anon_sym_TILDE] = ACTIONS(950),
    [anon_sym_LBRACK] = ACTIONS(950),
    [anon_sym_RBRACK] = ACTIONS(950),
    [anon_sym_DASH] = ACTIONS(950),
    [anon_sym_AT] = ACTIONS(950),
    [anon_sym__] = ACTIONS(950),
    [anon_sym_BQUOTE] = ACTIONS(950),
    [anon_sym_COLON] = ACTIONS(950),
    [anon_sym_PIPE] = ACTIONS(950),
    [anon_sym_BANG] = ACTIONS(950),
    [anon_sym_DOT] = ACTIONS(950),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(950),
    [anon_sym_DQUOTE] = ACTIONS(950),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(950),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(950),
    [sym__ascii_large] = ACTIONS(950),
    [anon_sym_POUND] = ACTIONS(950),
    [anon_sym_DOLLAR] = ACTIONS(950),
    [anon_sym_PERCENT] = ACTIONS(950),
    [anon_sym_AMP] = ACTIONS(950),
    [anon_sym_1] = ACTIONS(950),
    [anon_sym_PLUS] = ACTIONS(950),
    [anon_sym_SLASH] = ACTIONS(950),
    [anon_sym_LT] = ACTIONS(950),
    [anon_sym_GT] = ACTIONS(950),
    [anon_sym_QMARK] = ACTIONS(950),
    [anon_sym_CARET] = ACTIONS(950),
    [anon_sym_BSLASH] = ACTIONS(950),
    [sym__space] = ACTIONS(950),
    [sym__newline] = ACTIONS(950),
    [sym__tab] = ACTIONS(950),
    [sym__vertical_tab] = ACTIONS(950),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(952),
  },
  [344] = {
    [anon_sym_SEMI] = ACTIONS(954),
    [anon_sym_LBRACE] = ACTIONS(954),
    [anon_sym_RBRACE] = ACTIONS(954),
    [anon_sym_LPAREN] = ACTIONS(954),
    [anon_sym_RPAREN] = ACTIONS(954),
    [anon_sym_EQ] = ACTIONS(954),
    [anon_sym_TILDE] = ACTIONS(954),
    [anon_sym_LBRACK] = ACTIONS(954),
    [anon_sym_RBRACK] = ACTIONS(954),
    [anon_sym_DASH] = ACTIONS(954),
    [anon_sym_AT] = ACTIONS(954),
    [anon_sym__] = ACTIONS(954),
    [anon_sym_BQUOTE] = ACTIONS(954),
    [anon_sym_COLON] = ACTIONS(954),
    [anon_sym_PIPE] = ACTIONS(954),
    [anon_sym_BANG] = ACTIONS(954),
    [anon_sym_DOT] = ACTIONS(954),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(954),
    [anon_sym_DQUOTE] = ACTIONS(954),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(954),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(954),
    [sym__ascii_large] = ACTIONS(954),
    [anon_sym_POUND] = ACTIONS(954),
    [anon_sym_DOLLAR] = ACTIONS(954),
    [anon_sym_PERCENT] = ACTIONS(954),
    [anon_sym_AMP] = ACTIONS(954),
    [anon_sym_1] = ACTIONS(954),
    [anon_sym_PLUS] = ACTIONS(954),
    [anon_sym_SLASH] = ACTIONS(954),
    [anon_sym_LT] = ACTIONS(954),
    [anon_sym_GT] = ACTIONS(954),
    [anon_sym_QMARK] = ACTIONS(954),
    [anon_sym_CARET] = ACTIONS(954),
    [anon_sym_BSLASH] = ACTIONS(954),
    [sym__space] = ACTIONS(954),
    [sym__newline] = ACTIONS(954),
    [sym__tab] = ACTIONS(954),
    [sym__vertical_tab] = ACTIONS(954),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(954),
  },
  [345] = {
    [anon_sym_SEMI] = ACTIONS(950),
    [anon_sym_LBRACE] = ACTIONS(950),
    [anon_sym_RBRACE] = ACTIONS(950),
    [anon_sym_LPAREN] = ACTIONS(950),
    [anon_sym_RPAREN] = ACTIONS(950),
    [anon_sym_EQ] = ACTIONS(950),
    [anon_sym_TILDE] = ACTIONS(950),
    [anon_sym_LBRACK] = ACTIONS(950),
    [anon_sym_RBRACK] = ACTIONS(950),
    [anon_sym_DASH] = ACTIONS(950),
    [anon_sym_AT] = ACTIONS(950),
    [anon_sym__] = ACTIONS(950),
    [anon_sym_BQUOTE] = ACTIONS(950),
    [anon_sym_COLON] = ACTIONS(950),
    [anon_sym_PIPE] = ACTIONS(950),
    [anon_sym_BANG] = ACTIONS(950),
    [anon_sym_DOT] = ACTIONS(950),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(950),
    [anon_sym_DQUOTE] = ACTIONS(950),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(950),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(950),
    [sym__ascii_large] = ACTIONS(950),
    [anon_sym_POUND] = ACTIONS(950),
    [anon_sym_DOLLAR] = ACTIONS(950),
    [anon_sym_PERCENT] = ACTIONS(950),
    [anon_sym_AMP] = ACTIONS(950),
    [anon_sym_1] = ACTIONS(950),
    [anon_sym_PLUS] = ACTIONS(950),
    [anon_sym_SLASH] = ACTIONS(950),
    [anon_sym_LT] = ACTIONS(950),
    [anon_sym_GT] = ACTIONS(950),
    [anon_sym_QMARK] = ACTIONS(950),
    [anon_sym_CARET] = ACTIONS(950),
    [anon_sym_BSLASH] = ACTIONS(950),
    [sym__space] = ACTIONS(950),
    [sym__newline] = ACTIONS(950),
    [sym__tab] = ACTIONS(950),
    [sym__vertical_tab] = ACTIONS(950),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(956),
  },
  [346] = {
    [sym_general_constructor] = STATE(200),
    [sym__variable] = STATE(200),
    [sym_qualified_variable_identifier] = STATE(201),
    [sym__expression] = STATE(498),
    [sym_do_expression] = STATE(200),
    [sym__statement] = STATE(499),
    [sym__literal] = STATE(200),
    [sym__identifier] = STATE(200),
    [sym_variable_identifier] = STATE(26),
    [sym_constructor_identifier] = STATE(500),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [aux_sym_statement_list_repeat1] = STATE(501),
    [sym__layout_close_brace] = ACTIONS(958),
    [anon_sym_do] = ACTIONS(357),
    [sym__variable_pattern] = ACTIONS(31),
    [sym__constructor_pattern] = ACTIONS(960),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym__integer_literal] = ACTIONS(41),
    [sym__octal_literal] = ACTIONS(41),
    [sym__hexidecimal_literal] = ACTIONS(41),
  },
  [347] = {
    [sym_general_constructor] = STATE(200),
    [sym__variable] = STATE(200),
    [sym_qualified_variable_identifier] = STATE(201),
    [sym__expression] = STATE(502),
    [sym_do_expression] = STATE(200),
    [sym__statement] = STATE(503),
    [sym__literal] = STATE(200),
    [sym__identifier] = STATE(200),
    [sym_variable_identifier] = STATE(26),
    [sym_constructor_identifier] = STATE(500),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [aux_sym_statement_list_repeat1] = STATE(504),
    [anon_sym_RBRACE] = ACTIONS(962),
    [anon_sym_do] = ACTIONS(357),
    [sym__variable_pattern] = ACTIONS(31),
    [sym__constructor_pattern] = ACTIONS(960),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym__integer_literal] = ACTIONS(41),
    [sym__octal_literal] = ACTIONS(41),
    [sym__hexidecimal_literal] = ACTIONS(41),
  },
  [348] = {
    [sym__layout_semicolon] = ACTIONS(964),
    [anon_sym_SEMI] = ACTIONS(966),
    [anon_sym_where] = ACTIONS(966),
    [anon_sym_do] = ACTIONS(966),
    [sym__variable_pattern] = ACTIONS(968),
    [sym__constructor_pattern] = ACTIONS(968),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(968),
    [anon_sym_SQUOTE] = ACTIONS(966),
    [anon_sym_DQUOTE] = ACTIONS(966),
    [sym__integer_literal] = ACTIONS(966),
    [sym__octal_literal] = ACTIONS(966),
    [sym__hexidecimal_literal] = ACTIONS(966),
  },
  [349] = {
    [sym__layout_semicolon] = ACTIONS(970),
    [anon_sym_SEMI] = ACTIONS(283),
    [anon_sym_where] = ACTIONS(283),
    [anon_sym_do] = ACTIONS(283),
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
  [350] = {
    [sym__layout_semicolon] = ACTIONS(972),
    [anon_sym_SEMI] = ACTIONS(974),
    [anon_sym_where] = ACTIONS(974),
    [anon_sym_do] = ACTIONS(974),
    [sym__variable_pattern] = ACTIONS(976),
    [sym__constructor_pattern] = ACTIONS(976),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(976),
    [anon_sym_SQUOTE] = ACTIONS(974),
    [anon_sym_DQUOTE] = ACTIONS(974),
    [sym__integer_literal] = ACTIONS(974),
    [sym__octal_literal] = ACTIONS(974),
    [sym__hexidecimal_literal] = ACTIONS(974),
  },
  [351] = {
    [sym__literal] = STATE(505),
    [sym_variable_identifier] = STATE(505),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [sym__layout_semicolon] = ACTIONS(978),
    [anon_sym_SEMI] = ACTIONS(980),
    [anon_sym_where] = ACTIONS(980),
    [anon_sym_do] = ACTIONS(980),
    [sym__variable_pattern] = ACTIONS(982),
    [sym__constructor_pattern] = ACTIONS(982),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(982),
    [anon_sym_SQUOTE] = ACTIONS(980),
    [anon_sym_DQUOTE] = ACTIONS(980),
    [sym__integer_literal] = ACTIONS(980),
    [sym__octal_literal] = ACTIONS(980),
    [sym__hexidecimal_literal] = ACTIONS(980),
  },
  [352] = {
    [sym__layout_semicolon] = ACTIONS(984),
    [anon_sym_SEMI] = ACTIONS(986),
    [sym_comment] = ACTIONS(5),
  },
  [353] = {
    [sym__layout_semicolon] = ACTIONS(988),
    [anon_sym_SEMI] = ACTIONS(990),
    [anon_sym_where] = ACTIONS(990),
    [anon_sym_do] = ACTIONS(990),
    [sym__variable_pattern] = ACTIONS(992),
    [sym__constructor_pattern] = ACTIONS(992),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(992),
    [anon_sym_SQUOTE] = ACTIONS(990),
    [anon_sym_DQUOTE] = ACTIONS(990),
    [sym__integer_literal] = ACTIONS(990),
    [sym__octal_literal] = ACTIONS(990),
    [sym__hexidecimal_literal] = ACTIONS(990),
  },
  [354] = {
    [sym__literal] = STATE(506),
    [sym_integer] = STATE(89),
    [sym_char] = STATE(89),
    [sym_string] = STATE(89),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [355] = {
    [sym__function_pattern] = STATE(507),
    [sym_label_pattern] = STATE(86),
    [sym_irrefutable_pattern] = STATE(86),
    [sym_list_pattern] = STATE(86),
    [sym_tuple_pattern] = STATE(86),
    [sym_parenthesized_pattern] = STATE(86),
    [sym__pattern] = STATE(508),
    [sym_negative_literal] = STATE(211),
    [sym_general_constructor] = STATE(211),
    [sym_as_pattern] = STATE(86),
    [sym_wildcard] = STATE(86),
    [sym__variable] = STATE(212),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym__literal] = STATE(86),
    [sym__identifier] = STATE(94),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(213),
    [sym_integer] = STATE(89),
    [sym_char] = STATE(89),
    [sym_string] = STATE(89),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_TILDE] = ACTIONS(367),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym_DASH] = ACTIONS(369),
    [anon_sym__] = ACTIONS(151),
    [sym_list_constructor] = ACTIONS(153),
    [sym__variable_pattern] = ACTIONS(155),
    [sym__constructor_pattern] = ACTIONS(371),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [356] = {
    [anon_sym_LPAREN] = ACTIONS(994),
    [anon_sym_COMMA] = ACTIONS(994),
    [anon_sym_RPAREN] = ACTIONS(994),
    [anon_sym_EQ] = ACTIONS(994),
    [anon_sym_TILDE] = ACTIONS(994),
    [anon_sym_LBRACK] = ACTIONS(994),
    [anon_sym_RBRACK] = ACTIONS(994),
    [anon_sym_DASH] = ACTIONS(994),
    [anon_sym__] = ACTIONS(994),
    [anon_sym_BQUOTE] = ACTIONS(994),
    [anon_sym_COLON] = ACTIONS(994),
    [sym_list_constructor] = ACTIONS(994),
    [anon_sym_BANG] = ACTIONS(994),
    [sym__variable_pattern] = ACTIONS(996),
    [sym__constructor_pattern] = ACTIONS(996),
    [anon_sym_DOT] = ACTIONS(994),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(996),
    [anon_sym_SQUOTE] = ACTIONS(994),
    [anon_sym_DQUOTE] = ACTIONS(994),
    [anon_sym_POUND] = ACTIONS(994),
    [anon_sym_DOLLAR] = ACTIONS(994),
    [anon_sym_PERCENT] = ACTIONS(994),
    [anon_sym_AMP] = ACTIONS(994),
    [anon_sym_1] = ACTIONS(994),
    [anon_sym_PLUS] = ACTIONS(994),
    [anon_sym_SLASH] = ACTIONS(994),
    [anon_sym_LT] = ACTIONS(994),
    [anon_sym_GT] = ACTIONS(994),
    [anon_sym_QMARK] = ACTIONS(994),
    [anon_sym_CARET] = ACTIONS(994),
    [sym__integer_literal] = ACTIONS(994),
    [sym__octal_literal] = ACTIONS(994),
    [sym__hexidecimal_literal] = ACTIONS(994),
  },
  [357] = {
    [anon_sym_LPAREN] = ACTIONS(221),
    [anon_sym_TILDE] = ACTIONS(221),
    [anon_sym_LBRACK] = ACTIONS(221),
    [anon_sym_DASH] = ACTIONS(221),
    [anon_sym__] = ACTIONS(221),
    [sym_list_constructor] = ACTIONS(221),
    [anon_sym_BANG] = ACTIONS(221),
    [sym__variable_pattern] = ACTIONS(998),
    [sym__constructor_pattern] = ACTIONS(998),
    [anon_sym_DOT] = ACTIONS(221),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(998),
    [anon_sym_SQUOTE] = ACTIONS(221),
    [anon_sym_DQUOTE] = ACTIONS(221),
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
    [sym__integer_literal] = ACTIONS(221),
    [sym__octal_literal] = ACTIONS(221),
    [sym__hexidecimal_literal] = ACTIONS(221),
  },
  [358] = {
    [sym__identifier] = STATE(509),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [359] = {
    [sym__constructor_symbol] = STATE(511),
    [aux_sym_constructor_symbol_repeat1] = STATE(512),
    [anon_sym_LPAREN] = ACTIONS(225),
    [anon_sym_TILDE] = ACTIONS(225),
    [anon_sym_LBRACK] = ACTIONS(225),
    [anon_sym_DASH] = ACTIONS(225),
    [anon_sym__] = ACTIONS(225),
    [anon_sym_COLON] = ACTIONS(1000),
    [sym_list_constructor] = ACTIONS(225),
    [anon_sym_BANG] = ACTIONS(1000),
    [sym__variable_pattern] = ACTIONS(1002),
    [sym__constructor_pattern] = ACTIONS(1002),
    [anon_sym_DOT] = ACTIONS(1000),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1002),
    [anon_sym_SQUOTE] = ACTIONS(225),
    [anon_sym_DQUOTE] = ACTIONS(225),
    [anon_sym_POUND] = ACTIONS(1000),
    [anon_sym_DOLLAR] = ACTIONS(1000),
    [anon_sym_PERCENT] = ACTIONS(1000),
    [anon_sym_AMP] = ACTIONS(1000),
    [anon_sym_1] = ACTIONS(1000),
    [anon_sym_PLUS] = ACTIONS(1000),
    [anon_sym_SLASH] = ACTIONS(1000),
    [anon_sym_LT] = ACTIONS(1000),
    [anon_sym_GT] = ACTIONS(1000),
    [anon_sym_QMARK] = ACTIONS(1000),
    [anon_sym_CARET] = ACTIONS(1000),
    [sym__integer_literal] = ACTIONS(225),
    [sym__octal_literal] = ACTIONS(225),
    [sym__hexidecimal_literal] = ACTIONS(225),
  },
  [360] = {
    [sym__function_pattern] = STATE(513),
    [sym_label_pattern] = STATE(86),
    [sym_irrefutable_pattern] = STATE(86),
    [sym_list_pattern] = STATE(86),
    [sym_tuple_pattern] = STATE(86),
    [sym_parenthesized_pattern] = STATE(86),
    [sym__pattern] = STATE(514),
    [sym_negative_literal] = STATE(211),
    [sym_general_constructor] = STATE(211),
    [sym_as_pattern] = STATE(86),
    [sym_wildcard] = STATE(86),
    [sym__variable] = STATE(212),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym__literal] = STATE(86),
    [sym__identifier] = STATE(94),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(213),
    [sym_integer] = STATE(89),
    [sym_char] = STATE(89),
    [sym_string] = STATE(89),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_TILDE] = ACTIONS(367),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym_DASH] = ACTIONS(369),
    [anon_sym__] = ACTIONS(151),
    [sym_list_constructor] = ACTIONS(153),
    [sym__variable_pattern] = ACTIONS(155),
    [sym__constructor_pattern] = ACTIONS(371),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [361] = {
    [anon_sym_LPAREN] = ACTIONS(237),
    [anon_sym_TILDE] = ACTIONS(237),
    [anon_sym_LBRACK] = ACTIONS(237),
    [anon_sym_DASH] = ACTIONS(237),
    [anon_sym__] = ACTIONS(237),
    [sym_list_constructor] = ACTIONS(237),
    [sym__variable_pattern] = ACTIONS(1004),
    [sym__constructor_pattern] = ACTIONS(1004),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1004),
    [anon_sym_SQUOTE] = ACTIONS(237),
    [anon_sym_DQUOTE] = ACTIONS(237),
    [sym__integer_literal] = ACTIONS(237),
    [sym__octal_literal] = ACTIONS(237),
    [sym__hexidecimal_literal] = ACTIONS(237),
  },
  [362] = {
    [sym__variable_symbol] = STATE(515),
    [aux_sym_variable_symbol_repeat1] = STATE(516),
    [anon_sym_LPAREN] = ACTIONS(241),
    [anon_sym_TILDE] = ACTIONS(241),
    [anon_sym_LBRACK] = ACTIONS(241),
    [anon_sym_DASH] = ACTIONS(637),
    [anon_sym__] = ACTIONS(241),
    [sym_list_constructor] = ACTIONS(241),
    [anon_sym_BANG] = ACTIONS(637),
    [sym__variable_pattern] = ACTIONS(1006),
    [sym__constructor_pattern] = ACTIONS(1006),
    [anon_sym_DOT] = ACTIONS(637),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1006),
    [anon_sym_SQUOTE] = ACTIONS(241),
    [anon_sym_DQUOTE] = ACTIONS(241),
    [anon_sym_POUND] = ACTIONS(637),
    [anon_sym_DOLLAR] = ACTIONS(637),
    [anon_sym_PERCENT] = ACTIONS(637),
    [anon_sym_AMP] = ACTIONS(637),
    [anon_sym_1] = ACTIONS(637),
    [anon_sym_PLUS] = ACTIONS(637),
    [anon_sym_SLASH] = ACTIONS(637),
    [anon_sym_LT] = ACTIONS(637),
    [anon_sym_GT] = ACTIONS(637),
    [anon_sym_QMARK] = ACTIONS(637),
    [anon_sym_CARET] = ACTIONS(637),
    [sym__integer_literal] = ACTIONS(241),
    [sym__octal_literal] = ACTIONS(241),
    [sym__hexidecimal_literal] = ACTIONS(241),
  },
  [363] = {
    [anon_sym_COMMA] = ACTIONS(1008),
    [anon_sym_RPAREN] = ACTIONS(1010),
    [sym_comment] = ACTIONS(5),
  },
  [364] = {
    [sym__function_pattern] = STATE(374),
    [sym_label_pattern] = STATE(86),
    [sym_irrefutable_pattern] = STATE(86),
    [sym_list_pattern] = STATE(86),
    [sym_tuple_pattern] = STATE(86),
    [sym_parenthesized_pattern] = STATE(86),
    [sym_as_pattern] = STATE(86),
    [sym_wildcard] = STATE(86),
    [sym__variable] = STATE(212),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym__literal] = STATE(86),
    [sym__identifier] = STATE(94),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(128),
    [sym_integer] = STATE(89),
    [sym_char] = STATE(89),
    [sym_string] = STATE(89),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_TILDE] = ACTIONS(367),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym__] = ACTIONS(151),
    [sym_list_constructor] = ACTIONS(153),
    [sym__variable_pattern] = ACTIONS(155),
    [sym__constructor_pattern] = ACTIONS(375),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [365] = {
    [anon_sym_COMMA] = ACTIONS(87),
    [anon_sym_RPAREN] = ACTIONS(87),
    [anon_sym_EQ_GT] = ACTIONS(87),
    [sym__variable_pattern] = ACTIONS(87),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(87),
    [sym__integer_literal] = ACTIONS(87),
    [sym__octal_literal] = ACTIONS(87),
    [sym__hexidecimal_literal] = ACTIONS(87),
  },
  [366] = {
    [sym__graphic] = STATE(519),
    [sym__small] = STATE(66),
    [sym__large] = STATE(66),
    [sym__symbol] = STATE(66),
    [sym__special] = STATE(66),
    [sym__escape] = STATE(519),
    [anon_sym_SEMI] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(91),
    [anon_sym_RBRACE] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(91),
    [anon_sym_RPAREN] = ACTIONS(91),
    [anon_sym_EQ] = ACTIONS(93),
    [anon_sym_TILDE] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_RBRACK] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(93),
    [anon_sym_AT] = ACTIONS(93),
    [anon_sym__] = ACTIONS(95),
    [anon_sym_BQUOTE] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(93),
    [anon_sym_PIPE] = ACTIONS(93),
    [anon_sym_BANG] = ACTIONS(93),
    [anon_sym_DOT] = ACTIONS(93),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(1012),
    [anon_sym_DQUOTE] = ACTIONS(1012),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(101),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(95),
    [sym__ascii_large] = ACTIONS(103),
    [anon_sym_POUND] = ACTIONS(93),
    [anon_sym_DOLLAR] = ACTIONS(93),
    [anon_sym_PERCENT] = ACTIONS(93),
    [anon_sym_AMP] = ACTIONS(93),
    [anon_sym_1] = ACTIONS(93),
    [anon_sym_PLUS] = ACTIONS(93),
    [anon_sym_SLASH] = ACTIONS(93),
    [anon_sym_LT] = ACTIONS(93),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_QMARK] = ACTIONS(93),
    [anon_sym_CARET] = ACTIONS(93),
    [anon_sym_BSLASH] = ACTIONS(105),
    [sym__space] = ACTIONS(1012),
  },
  [367] = {
    [anon_sym_COMMA] = ACTIONS(127),
    [anon_sym_RPAREN] = ACTIONS(127),
    [anon_sym_EQ_GT] = ACTIONS(127),
    [sym__variable_pattern] = ACTIONS(127),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(129),
    [anon_sym_SQUOTE] = ACTIONS(127),
    [anon_sym_DQUOTE] = ACTIONS(127),
    [sym__integer_literal] = ACTIONS(127),
    [sym__octal_literal] = ACTIONS(127),
    [sym__hexidecimal_literal] = ACTIONS(127),
  },
  [368] = {
    [anon_sym_COMMA] = ACTIONS(974),
    [anon_sym_RPAREN] = ACTIONS(974),
    [sym__variable_pattern] = ACTIONS(974),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(976),
    [anon_sym_SQUOTE] = ACTIONS(974),
    [anon_sym_DQUOTE] = ACTIONS(974),
    [sym__integer_literal] = ACTIONS(974),
    [sym__octal_literal] = ACTIONS(974),
    [sym__hexidecimal_literal] = ACTIONS(974),
  },
  [369] = {
    [sym__literal] = STATE(520),
    [sym_variable_identifier] = STATE(520),
    [sym_integer] = STATE(365),
    [sym_char] = STATE(365),
    [sym_string] = STATE(365),
    [anon_sym_COMMA] = ACTIONS(980),
    [anon_sym_RPAREN] = ACTIONS(980),
    [sym__variable_pattern] = ACTIONS(271),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(647),
    [anon_sym_SQUOTE] = ACTIONS(649),
    [anon_sym_DQUOTE] = ACTIONS(441),
    [sym__integer_literal] = ACTIONS(651),
    [sym__octal_literal] = ACTIONS(651),
    [sym__hexidecimal_literal] = ACTIONS(651),
  },
  [370] = {
    [anon_sym_LPAREN] = ACTIONS(1014),
    [anon_sym_COMMA] = ACTIONS(1014),
    [anon_sym_RPAREN] = ACTIONS(1014),
    [anon_sym_EQ] = ACTIONS(1014),
    [anon_sym_TILDE] = ACTIONS(1014),
    [anon_sym_LBRACK] = ACTIONS(1014),
    [anon_sym_RBRACK] = ACTIONS(1014),
    [anon_sym_DASH] = ACTIONS(1014),
    [anon_sym__] = ACTIONS(1014),
    [anon_sym_BQUOTE] = ACTIONS(1014),
    [anon_sym_COLON] = ACTIONS(1014),
    [sym_list_constructor] = ACTIONS(1014),
    [anon_sym_BANG] = ACTIONS(1014),
    [sym__variable_pattern] = ACTIONS(1016),
    [sym__constructor_pattern] = ACTIONS(1016),
    [anon_sym_DOT] = ACTIONS(1014),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1016),
    [anon_sym_SQUOTE] = ACTIONS(1014),
    [anon_sym_DQUOTE] = ACTIONS(1014),
    [anon_sym_POUND] = ACTIONS(1014),
    [anon_sym_DOLLAR] = ACTIONS(1014),
    [anon_sym_PERCENT] = ACTIONS(1014),
    [anon_sym_AMP] = ACTIONS(1014),
    [anon_sym_1] = ACTIONS(1014),
    [anon_sym_PLUS] = ACTIONS(1014),
    [anon_sym_SLASH] = ACTIONS(1014),
    [anon_sym_LT] = ACTIONS(1014),
    [anon_sym_GT] = ACTIONS(1014),
    [anon_sym_QMARK] = ACTIONS(1014),
    [anon_sym_CARET] = ACTIONS(1014),
    [sym__integer_literal] = ACTIONS(1014),
    [sym__octal_literal] = ACTIONS(1014),
    [sym__hexidecimal_literal] = ACTIONS(1014),
  },
  [371] = {
    [sym__function_pattern] = STATE(374),
    [sym_label_pattern] = STATE(86),
    [sym_irrefutable_pattern] = STATE(86),
    [sym_list_pattern] = STATE(86),
    [sym_tuple_pattern] = STATE(86),
    [sym_parenthesized_pattern] = STATE(86),
    [sym_as_pattern] = STATE(86),
    [sym_wildcard] = STATE(86),
    [sym__variable] = STATE(218),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym__literal] = STATE(86),
    [sym__identifier] = STATE(94),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(96),
    [sym_integer] = STATE(89),
    [sym_char] = STATE(89),
    [sym_string] = STATE(89),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_TILDE] = ACTIONS(373),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym__] = ACTIONS(151),
    [sym_list_constructor] = ACTIONS(153),
    [sym__variable_pattern] = ACTIONS(155),
    [sym__constructor_pattern] = ACTIONS(375),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [372] = {
    [anon_sym_RBRACE] = ACTIONS(573),
    [anon_sym_LPAREN] = ACTIONS(573),
    [anon_sym_COMMA] = ACTIONS(573),
    [anon_sym_RPAREN] = ACTIONS(573),
    [anon_sym_EQ] = ACTIONS(573),
    [anon_sym_TILDE] = ACTIONS(573),
    [anon_sym_LBRACK] = ACTIONS(573),
    [anon_sym_RBRACK] = ACTIONS(573),
    [anon_sym_DASH] = ACTIONS(573),
    [anon_sym__] = ACTIONS(573),
    [anon_sym_BQUOTE] = ACTIONS(573),
    [anon_sym_COLON] = ACTIONS(573),
    [sym_list_constructor] = ACTIONS(573),
    [anon_sym_BANG] = ACTIONS(573),
    [sym__variable_pattern] = ACTIONS(575),
    [sym__constructor_pattern] = ACTIONS(575),
    [anon_sym_DOT] = ACTIONS(573),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(575),
    [anon_sym_SQUOTE] = ACTIONS(573),
    [anon_sym_DQUOTE] = ACTIONS(573),
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
    [sym__integer_literal] = ACTIONS(573),
    [sym__octal_literal] = ACTIONS(573),
    [sym__hexidecimal_literal] = ACTIONS(573),
  },
  [373] = {
    [anon_sym_RBRACE] = ACTIONS(605),
    [anon_sym_LPAREN] = ACTIONS(605),
    [anon_sym_COMMA] = ACTIONS(605),
    [anon_sym_RPAREN] = ACTIONS(605),
    [anon_sym_EQ] = ACTIONS(605),
    [anon_sym_TILDE] = ACTIONS(605),
    [anon_sym_LBRACK] = ACTIONS(605),
    [anon_sym_RBRACK] = ACTIONS(605),
    [anon_sym_DASH] = ACTIONS(605),
    [anon_sym__] = ACTIONS(605),
    [anon_sym_BQUOTE] = ACTIONS(605),
    [anon_sym_COLON] = ACTIONS(605),
    [sym_list_constructor] = ACTIONS(605),
    [anon_sym_BANG] = ACTIONS(605),
    [sym__variable_pattern] = ACTIONS(607),
    [sym__constructor_pattern] = ACTIONS(607),
    [anon_sym_DOT] = ACTIONS(605),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(607),
    [anon_sym_SQUOTE] = ACTIONS(605),
    [anon_sym_DQUOTE] = ACTIONS(605),
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
    [sym__integer_literal] = ACTIONS(605),
    [sym__octal_literal] = ACTIONS(605),
    [sym__hexidecimal_literal] = ACTIONS(605),
  },
  [374] = {
    [anon_sym_LPAREN] = ACTIONS(1018),
    [anon_sym_COMMA] = ACTIONS(1018),
    [anon_sym_RPAREN] = ACTIONS(1018),
    [anon_sym_EQ] = ACTIONS(1018),
    [anon_sym_TILDE] = ACTIONS(1018),
    [anon_sym_LBRACK] = ACTIONS(1018),
    [anon_sym_RBRACK] = ACTIONS(1018),
    [anon_sym_DASH] = ACTIONS(1018),
    [anon_sym__] = ACTIONS(1018),
    [anon_sym_BQUOTE] = ACTIONS(1018),
    [anon_sym_COLON] = ACTIONS(1018),
    [sym_list_constructor] = ACTIONS(1018),
    [anon_sym_BANG] = ACTIONS(1018),
    [sym__variable_pattern] = ACTIONS(1020),
    [sym__constructor_pattern] = ACTIONS(1020),
    [anon_sym_DOT] = ACTIONS(1018),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1020),
    [anon_sym_SQUOTE] = ACTIONS(1018),
    [anon_sym_DQUOTE] = ACTIONS(1018),
    [anon_sym_POUND] = ACTIONS(1018),
    [anon_sym_DOLLAR] = ACTIONS(1018),
    [anon_sym_PERCENT] = ACTIONS(1018),
    [anon_sym_AMP] = ACTIONS(1018),
    [anon_sym_1] = ACTIONS(1018),
    [anon_sym_PLUS] = ACTIONS(1018),
    [anon_sym_SLASH] = ACTIONS(1018),
    [anon_sym_LT] = ACTIONS(1018),
    [anon_sym_GT] = ACTIONS(1018),
    [anon_sym_QMARK] = ACTIONS(1018),
    [anon_sym_CARET] = ACTIONS(1018),
    [sym__integer_literal] = ACTIONS(1018),
    [sym__octal_literal] = ACTIONS(1018),
    [sym__hexidecimal_literal] = ACTIONS(1018),
  },
  [375] = {
    [anon_sym_LPAREN] = ACTIONS(1022),
    [anon_sym_COMMA] = ACTIONS(1022),
    [anon_sym_RPAREN] = ACTIONS(1022),
    [anon_sym_EQ] = ACTIONS(1022),
    [anon_sym_TILDE] = ACTIONS(1022),
    [anon_sym_LBRACK] = ACTIONS(1022),
    [anon_sym_RBRACK] = ACTIONS(1022),
    [anon_sym_DASH] = ACTIONS(1022),
    [anon_sym__] = ACTIONS(1022),
    [anon_sym_BQUOTE] = ACTIONS(1022),
    [anon_sym_COLON] = ACTIONS(1022),
    [sym_list_constructor] = ACTIONS(1022),
    [anon_sym_BANG] = ACTIONS(1022),
    [sym__variable_pattern] = ACTIONS(1024),
    [sym__constructor_pattern] = ACTIONS(1024),
    [anon_sym_DOT] = ACTIONS(1022),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1024),
    [anon_sym_SQUOTE] = ACTIONS(1022),
    [anon_sym_DQUOTE] = ACTIONS(1022),
    [anon_sym_POUND] = ACTIONS(1022),
    [anon_sym_DOLLAR] = ACTIONS(1022),
    [anon_sym_PERCENT] = ACTIONS(1022),
    [anon_sym_AMP] = ACTIONS(1022),
    [anon_sym_1] = ACTIONS(1022),
    [anon_sym_PLUS] = ACTIONS(1022),
    [anon_sym_SLASH] = ACTIONS(1022),
    [anon_sym_LT] = ACTIONS(1022),
    [anon_sym_GT] = ACTIONS(1022),
    [anon_sym_QMARK] = ACTIONS(1022),
    [anon_sym_CARET] = ACTIONS(1022),
    [sym__integer_literal] = ACTIONS(1022),
    [sym__octal_literal] = ACTIONS(1022),
    [sym__hexidecimal_literal] = ACTIONS(1022),
  },
  [376] = {
    [anon_sym_RBRACE] = ACTIONS(1026),
    [sym_comment] = ACTIONS(5),
  },
  [377] = {
    [aux_sym_labels_repeat1] = STATE(522),
    [anon_sym_RBRACE] = ACTIONS(475),
    [anon_sym_COMMA] = ACTIONS(1028),
    [sym_comment] = ACTIONS(5),
  },
  [378] = {
    [anon_sym_EQ] = ACTIONS(787),
    [sym_comment] = ACTIONS(5),
  },
  [379] = {
    [sym_type] = STATE(524),
    [sym__generic_type_constructor] = STATE(386),
    [sym_tupling_constructor] = STATE(382),
    [sym_tuple] = STATE(386),
    [sym_list] = STATE(386),
    [sym_parenthesized_constructor] = STATE(386),
    [sym_variable_identifier] = STATE(388),
    [sym__type_constructors] = STATE(382),
    [sym_qualified_type_constructor] = STATE(389),
    [anon_sym_LPAREN] = ACTIONS(671),
    [anon_sym_COMMA] = ACTIONS(1030),
    [anon_sym_LBRACK] = ACTIONS(675),
    [sym_unit_type] = ACTIONS(677),
    [sym_list_constructor] = ACTIONS(677),
    [sym_function_constructor] = ACTIONS(677),
    [sym__variable_pattern] = ACTIONS(469),
    [sym__constructor_pattern] = ACTIONS(916),
    [sym_module_identifier] = ACTIONS(681),
    [sym_comment] = ACTIONS(5),
  },
  [380] = {
    [aux_sym_tupling_constructor_repeat1] = STATE(527),
    [anon_sym_COMMA] = ACTIONS(1032),
    [anon_sym_RPAREN] = ACTIONS(1034),
    [sym_comment] = ACTIONS(5),
  },
  [381] = {
    [sym_type] = STATE(393),
    [sym__generic_type_constructor] = STATE(394),
    [sym_tupling_constructor] = STATE(382),
    [sym_tuple] = STATE(394),
    [sym_list] = STATE(394),
    [sym_parenthesized_constructor] = STATE(394),
    [sym_variable_identifier] = STATE(395),
    [sym__type_constructors] = STATE(382),
    [sym_qualified_type_constructor] = STATE(389),
    [aux_sym_list_repeat1] = STATE(528),
    [anon_sym_LPAREN] = ACTIONS(671),
    [anon_sym_LBRACK] = ACTIONS(675),
    [sym_unit_type] = ACTIONS(677),
    [sym_list_constructor] = ACTIONS(677),
    [sym_function_constructor] = ACTIONS(677),
    [sym__variable_pattern] = ACTIONS(683),
    [sym__constructor_pattern] = ACTIONS(685),
    [sym_module_identifier] = ACTIONS(687),
    [sym_comment] = ACTIONS(5),
  },
  [382] = {
    [anon_sym_LPAREN] = ACTIONS(691),
    [anon_sym_COMMA] = ACTIONS(691),
    [anon_sym_RPAREN] = ACTIONS(691),
    [anon_sym_LBRACK] = ACTIONS(691),
    [anon_sym_RBRACK] = ACTIONS(691),
    [anon_sym_DASH_GT] = ACTIONS(691),
    [sym_unit_type] = ACTIONS(691),
    [sym_list_constructor] = ACTIONS(691),
    [sym_function_constructor] = ACTIONS(691),
    [sym__variable_pattern] = ACTIONS(691),
    [sym__constructor_pattern] = ACTIONS(1036),
    [sym_module_identifier] = ACTIONS(1036),
    [sym_comment] = ACTIONS(5),
  },
  [383] = {
    [sym_variable_identifier] = STATE(316),
    [aux_sym_simple_type_repeat1] = STATE(529),
    [anon_sym_LBRACE] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_COMMA] = ACTIONS(1038),
    [anon_sym_RPAREN] = ACTIONS(1038),
    [anon_sym_DASH_GT] = ACTIONS(695),
    [anon_sym_BANG] = ACTIONS(81),
    [sym__variable_pattern] = ACTIONS(81),
    [sym__constructor_pattern] = ACTIONS(203),
    [sym_comment] = ACTIONS(5),
  },
  [384] = {
    [sym_constructor_identifier] = STATE(531),
    [aux_sym_qualified_type_constructor_repeat1] = STATE(532),
    [sym__constructor_pattern] = ACTIONS(69),
    [anon_sym_DOT] = ACTIONS(1041),
    [sym_comment] = ACTIONS(5),
  },
  [385] = {
    [aux_sym_tuple_repeat1] = STATE(535),
    [anon_sym_COMMA] = ACTIONS(1043),
    [anon_sym_RPAREN] = ACTIONS(1045),
    [sym_comment] = ACTIONS(5),
  },
  [386] = {
    [anon_sym_COMMA] = ACTIONS(707),
    [anon_sym_RPAREN] = ACTIONS(707),
    [anon_sym_DASH_GT] = ACTIONS(1047),
    [sym_comment] = ACTIONS(5),
  },
  [387] = {
    [aux_sym_context_repeat1] = STATE(538),
    [anon_sym_COMMA] = ACTIONS(451),
    [anon_sym_RPAREN] = ACTIONS(1049),
    [sym_comment] = ACTIONS(5),
  },
  [388] = {
    [anon_sym_COMMA] = ACTIONS(715),
    [anon_sym_RPAREN] = ACTIONS(715),
    [anon_sym_DASH_GT] = ACTIONS(1051),
    [sym_comment] = ACTIONS(5),
  },
  [389] = {
    [anon_sym_LPAREN] = ACTIONS(721),
    [anon_sym_COMMA] = ACTIONS(721),
    [anon_sym_RPAREN] = ACTIONS(721),
    [anon_sym_LBRACK] = ACTIONS(721),
    [anon_sym_RBRACK] = ACTIONS(721),
    [anon_sym_DASH_GT] = ACTIONS(721),
    [sym_unit_type] = ACTIONS(721),
    [sym_list_constructor] = ACTIONS(721),
    [sym_function_constructor] = ACTIONS(721),
    [sym__variable_pattern] = ACTIONS(721),
    [sym__constructor_pattern] = ACTIONS(1053),
    [sym_module_identifier] = ACTIONS(1053),
    [sym_comment] = ACTIONS(5),
  },
  [390] = {
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(75),
    [anon_sym_RBRACK] = ACTIONS(75),
    [anon_sym_DASH_GT] = ACTIONS(75),
    [sym_unit_type] = ACTIONS(75),
    [sym_list_constructor] = ACTIONS(75),
    [sym_function_constructor] = ACTIONS(75),
    [sym__variable_pattern] = ACTIONS(75),
    [sym__constructor_pattern] = ACTIONS(77),
    [sym_module_identifier] = ACTIONS(77),
    [sym_comment] = ACTIONS(5),
  },
  [391] = {
    [sym_variable_identifier] = STATE(316),
    [aux_sym_simple_type_repeat1] = STATE(540),
    [anon_sym_LPAREN] = ACTIONS(695),
    [anon_sym_LBRACK] = ACTIONS(695),
    [anon_sym_RBRACK] = ACTIONS(695),
    [anon_sym_DASH_GT] = ACTIONS(695),
    [sym_unit_type] = ACTIONS(695),
    [sym_list_constructor] = ACTIONS(695),
    [sym_function_constructor] = ACTIONS(695),
    [sym__variable_pattern] = ACTIONS(683),
    [sym__constructor_pattern] = ACTIONS(1055),
    [sym_module_identifier] = ACTIONS(1055),
    [sym_comment] = ACTIONS(5),
  },
  [392] = {
    [sym_constructor_identifier] = STATE(543),
    [aux_sym_qualified_type_constructor_repeat1] = STATE(544),
    [sym__constructor_pattern] = ACTIONS(1057),
    [anon_sym_DOT] = ACTIONS(1059),
    [sym_comment] = ACTIONS(5),
  },
  [393] = {
    [anon_sym_LPAREN] = ACTIONS(1061),
    [anon_sym_LBRACK] = ACTIONS(1061),
    [anon_sym_RBRACK] = ACTIONS(1061),
    [sym_unit_type] = ACTIONS(1061),
    [sym_list_constructor] = ACTIONS(1061),
    [sym_function_constructor] = ACTIONS(1061),
    [sym__variable_pattern] = ACTIONS(1061),
    [sym__constructor_pattern] = ACTIONS(1063),
    [sym_module_identifier] = ACTIONS(1063),
    [sym_comment] = ACTIONS(5),
  },
  [394] = {
    [anon_sym_LPAREN] = ACTIONS(707),
    [anon_sym_LBRACK] = ACTIONS(707),
    [anon_sym_RBRACK] = ACTIONS(707),
    [anon_sym_DASH_GT] = ACTIONS(1065),
    [sym_unit_type] = ACTIONS(707),
    [sym_list_constructor] = ACTIONS(707),
    [sym_function_constructor] = ACTIONS(707),
    [sym__variable_pattern] = ACTIONS(707),
    [sym__constructor_pattern] = ACTIONS(1067),
    [sym_module_identifier] = ACTIONS(1067),
    [sym_comment] = ACTIONS(5),
  },
  [395] = {
    [anon_sym_LPAREN] = ACTIONS(715),
    [anon_sym_LBRACK] = ACTIONS(715),
    [anon_sym_RBRACK] = ACTIONS(715),
    [anon_sym_DASH_GT] = ACTIONS(1069),
    [sym_unit_type] = ACTIONS(715),
    [sym_list_constructor] = ACTIONS(715),
    [sym_function_constructor] = ACTIONS(715),
    [sym__variable_pattern] = ACTIONS(715),
    [sym__constructor_pattern] = ACTIONS(1071),
    [sym_module_identifier] = ACTIONS(1071),
    [sym_comment] = ACTIONS(5),
  },
  [396] = {
    [sym_type] = STATE(548),
    [sym__generic_type_constructor] = STATE(394),
    [sym_tupling_constructor] = STATE(382),
    [sym_tuple] = STATE(394),
    [sym_list] = STATE(394),
    [sym_parenthesized_constructor] = STATE(394),
    [sym_variable_identifier] = STATE(395),
    [sym__type_constructors] = STATE(382),
    [sym_qualified_type_constructor] = STATE(389),
    [anon_sym_LPAREN] = ACTIONS(671),
    [anon_sym_LBRACK] = ACTIONS(675),
    [anon_sym_RBRACK] = ACTIONS(1073),
    [sym_unit_type] = ACTIONS(677),
    [sym_list_constructor] = ACTIONS(677),
    [sym_function_constructor] = ACTIONS(677),
    [sym__variable_pattern] = ACTIONS(683),
    [sym__constructor_pattern] = ACTIONS(685),
    [sym_module_identifier] = ACTIONS(687),
    [sym_comment] = ACTIONS(5),
  },
  [397] = {
    [sym__layout_semicolon] = ACTIONS(73),
    [anon_sym_SEMI] = ACTIONS(75),
    [anon_sym_DASH_GT] = ACTIONS(75),
    [sym__variable_pattern] = ACTIONS(75),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(77),
    [anon_sym_SQUOTE] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(75),
    [sym__integer_literal] = ACTIONS(75),
    [sym__octal_literal] = ACTIONS(75),
    [sym__hexidecimal_literal] = ACTIONS(75),
  },
  [398] = {
    [sym__layout_semicolon] = ACTIONS(1075),
    [anon_sym_SEMI] = ACTIONS(902),
    [anon_sym_DASH_GT] = ACTIONS(902),
    [sym__variable_pattern] = ACTIONS(902),
    [sym_comment] = ACTIONS(5),
  },
  [399] = {
    [sym_variable_identifier] = STATE(549),
    [sym__layout_semicolon] = ACTIONS(1077),
    [anon_sym_SEMI] = ACTIONS(1079),
    [anon_sym_DASH_GT] = ACTIONS(1079),
    [sym__variable_pattern] = ACTIONS(918),
    [sym_comment] = ACTIONS(5),
  },
  [400] = {
    [sym__layout_semicolon] = ACTIONS(79),
    [anon_sym_SEMI] = ACTIONS(81),
    [anon_sym_DASH_GT] = ACTIONS(81),
    [sym__variable_pattern] = ACTIONS(81),
    [sym_comment] = ACTIONS(5),
  },
  [401] = {
    [sym_constructor_identifier] = STATE(551),
    [sym__constructor_pattern] = ACTIONS(697),
    [sym_module_identifier] = ACTIONS(1081),
    [sym_comment] = ACTIONS(5),
  },
  [402] = {
    [sym_variable_identifier] = STATE(398),
    [aux_sym_simple_type_repeat1] = STATE(552),
    [sym__layout_semicolon] = ACTIONS(1083),
    [anon_sym_SEMI] = ACTIONS(1085),
    [anon_sym_DASH_GT] = ACTIONS(1085),
    [sym__variable_pattern] = ACTIONS(918),
    [sym_comment] = ACTIONS(5),
  },
  [403] = {
    [sym_constructor_identifier] = STATE(551),
    [sym__constructor_pattern] = ACTIONS(697),
    [anon_sym_DOT] = ACTIONS(1087),
    [sym_comment] = ACTIONS(5),
  },
  [404] = {
    [sym_type] = STATE(554),
    [sym__generic_type_constructor] = STATE(231),
    [sym_tupling_constructor] = STATE(227),
    [sym_tuple] = STATE(231),
    [sym_list] = STATE(231),
    [sym_parenthesized_constructor] = STATE(231),
    [sym_variable_identifier] = STATE(234),
    [sym__type_constructors] = STATE(227),
    [sym_qualified_type_constructor] = STATE(236),
    [anon_sym_LPAREN] = ACTIONS(562),
    [anon_sym_LBRACK] = ACTIONS(401),
    [sym_unit_type] = ACTIONS(403),
    [sym_list_constructor] = ACTIONS(403),
    [sym_function_constructor] = ACTIONS(403),
    [sym__variable_pattern] = ACTIONS(405),
    [sym__constructor_pattern] = ACTIONS(564),
    [sym_module_identifier] = ACTIONS(409),
    [sym_comment] = ACTIONS(5),
  },
  [405] = {
    [sym__layout_semicolon] = ACTIONS(1089),
    [anon_sym_SEMI] = ACTIONS(1091),
    [sym_comment] = ACTIONS(5),
  },
  [406] = {
    [anon_sym_LPAREN] = ACTIONS(1093),
    [anon_sym_LBRACK] = ACTIONS(1093),
    [sym_unit_type] = ACTIONS(1093),
    [sym_list_constructor] = ACTIONS(1093),
    [sym_function_constructor] = ACTIONS(1093),
    [sym__variable_pattern] = ACTIONS(1093),
    [sym__constructor_pattern] = ACTIONS(463),
    [sym_module_identifier] = ACTIONS(463),
    [sym_comment] = ACTIONS(5),
  },
  [407] = {
    [sym_type] = STATE(555),
    [sym__generic_type_constructor] = STATE(231),
    [sym_tupling_constructor] = STATE(227),
    [sym_tuple] = STATE(231),
    [sym_list] = STATE(231),
    [sym_parenthesized_constructor] = STATE(231),
    [sym_variable_identifier] = STATE(234),
    [sym__type_constructors] = STATE(227),
    [sym_qualified_type_constructor] = STATE(236),
    [anon_sym_LPAREN] = ACTIONS(562),
    [anon_sym_LBRACK] = ACTIONS(401),
    [sym_unit_type] = ACTIONS(403),
    [sym_list_constructor] = ACTIONS(403),
    [sym_function_constructor] = ACTIONS(403),
    [sym__variable_pattern] = ACTIONS(405),
    [sym__constructor_pattern] = ACTIONS(564),
    [sym_module_identifier] = ACTIONS(409),
    [sym_comment] = ACTIONS(5),
  },
  [408] = {
    [sym_export] = STATE(556),
    [sym__identifier] = STATE(240),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [409] = {
    [anon_sym_where] = ACTIONS(1095),
    [sym_comment] = ACTIONS(5),
  },
  [410] = {
    [anon_sym_COMMA] = ACTIONS(1097),
    [anon_sym_RPAREN] = ACTIONS(1099),
    [sym_comment] = ACTIONS(5),
  },
  [411] = {
    [sym__identifier] = STATE(560),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [anon_sym_DOT_DOT] = ACTIONS(1101),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [412] = {
    [ts_builtin_sym_end] = ACTIONS(1103),
    [sym_comment] = ACTIONS(5),
  },
  [413] = {
    [sym__layout_semicolon] = ACTIONS(1105),
    [anon_sym_SEMI] = ACTIONS(1107),
    [sym_comment] = ACTIONS(5),
  },
  [414] = {
    [sym_import] = STATE(19),
    [sym__declaration] = STATE(563),
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
    [sym__layout_close_brace] = ACTIONS(1109),
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
  [415] = {
    [sym_import] = STATE(19),
    [sym__declaration] = STATE(99),
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
    [anon_sym_RBRACE] = ACTIONS(1111),
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
  [416] = {
    [sym_import_specification] = STATE(564),
    [sym__layout_semicolon] = ACTIONS(1113),
    [anon_sym_SEMI] = ACTIONS(1115),
    [anon_sym_LPAREN] = ACTIONS(189),
    [anon_sym_hiding] = ACTIONS(193),
    [sym_comment] = ACTIONS(5),
  },
  [417] = {
    [sym__identifier] = STATE(566),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [anon_sym_DOT_DOT] = ACTIONS(1117),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [418] = {
    [sym__identifier] = STATE(567),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [419] = {
    [sym__layout_semicolon] = ACTIONS(1119),
    [anon_sym_SEMI] = ACTIONS(1121),
    [sym_comment] = ACTIONS(5),
  },
  [420] = {
    [anon_sym_COMMA] = ACTIONS(1123),
    [anon_sym_RPAREN] = ACTIONS(1125),
    [sym_comment] = ACTIONS(5),
  },
  [421] = {
    [sym__layout_semicolon] = ACTIONS(1113),
    [anon_sym_SEMI] = ACTIONS(1115),
    [sym_comment] = ACTIONS(5),
  },
  [422] = {
    [aux_sym_import_specification_repeat1] = STATE(571),
    [anon_sym_LPAREN] = ACTIONS(1127),
    [anon_sym_COMMA] = ACTIONS(759),
    [anon_sym_RPAREN] = ACTIONS(1125),
    [sym_comment] = ACTIONS(5),
  },
  [423] = {
    [anon_sym_COMMA] = ACTIONS(321),
    [anon_sym_RPAREN] = ACTIONS(321),
    [anon_sym_EQ_GT] = ACTIONS(321),
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
  [424] = {
    [sym__gap] = STATE(194),
    [sym__graphic] = STATE(194),
    [sym__small] = STATE(74),
    [sym__large] = STATE(74),
    [sym__symbol] = STATE(74),
    [sym__special] = STATE(74),
    [sym__escape] = STATE(194),
    [anon_sym_SEMI] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(107),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_RPAREN] = ACTIONS(107),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_TILDE] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_RBRACK] = ACTIONS(107),
    [anon_sym_DASH] = ACTIONS(109),
    [anon_sym_AT] = ACTIONS(109),
    [anon_sym__] = ACTIONS(111),
    [anon_sym_BQUOTE] = ACTIONS(107),
    [anon_sym_COLON] = ACTIONS(109),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_BANG] = ACTIONS(109),
    [anon_sym_DOT] = ACTIONS(109),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(343),
    [anon_sym_DQUOTE] = ACTIONS(1129),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(117),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(111),
    [sym__ascii_large] = ACTIONS(119),
    [anon_sym_POUND] = ACTIONS(109),
    [anon_sym_DOLLAR] = ACTIONS(109),
    [anon_sym_PERCENT] = ACTIONS(109),
    [anon_sym_AMP] = ACTIONS(109),
    [anon_sym_1] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(109),
    [anon_sym_SLASH] = ACTIONS(109),
    [anon_sym_LT] = ACTIONS(109),
    [anon_sym_GT] = ACTIONS(109),
    [anon_sym_QMARK] = ACTIONS(109),
    [anon_sym_CARET] = ACTIONS(109),
    [anon_sym_BSLASH] = ACTIONS(121),
    [sym__space] = ACTIONS(123),
    [sym__newline] = ACTIONS(123),
    [sym__tab] = ACTIONS(123),
    [sym__vertical_tab] = ACTIONS(123),
  },
  [425] = {
    [sym__layout_semicolon] = ACTIONS(1131),
    [anon_sym_SEMI] = ACTIONS(1133),
    [sym_comment] = ACTIONS(5),
  },
  [426] = {
    [sym_type_signature] = STATE(573),
    [sym__identifier] = STATE(255),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [sym__variable_pattern] = ACTIONS(469),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [427] = {
    [anon_sym_COMMA] = ACTIONS(1135),
    [anon_sym_RPAREN] = ACTIONS(1135),
    [sym_comment] = ACTIONS(5),
  },
  [428] = {
    [sym__identifier] = STATE(574),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [429] = {
    [sym__layout_semicolon] = ACTIONS(1137),
    [anon_sym_SEMI] = ACTIONS(1139),
    [sym_comment] = ACTIONS(5),
  },
  [430] = {
    [anon_sym_COMMA] = ACTIONS(1141),
    [anon_sym_RPAREN] = ACTIONS(1141),
    [sym_comment] = ACTIONS(5),
  },
  [431] = {
    [sym__constructor_pattern] = ACTIONS(1143),
    [sym_comment] = ACTIONS(5),
  },
  [432] = {
    [sym_constructor] = STATE(575),
    [sym_constructor_identifier] = STATE(114),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
  },
  [433] = {
    [anon_sym_EQ_GT] = ACTIONS(1145),
    [sym_comment] = ACTIONS(5),
  },
  [434] = {
    [sym_label] = STATE(448),
    [sym__identifier] = STATE(378),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(71),
    [sym_comment] = ACTIONS(5),
  },
  [435] = {
    [anon_sym_COMMA] = ACTIONS(819),
    [anon_sym_RPAREN] = ACTIONS(819),
    [sym_comment] = ACTIONS(5),
  },
  [436] = {
    [sym__literal] = STATE(455),
    [sym_integer] = STATE(89),
    [sym_char] = STATE(89),
    [sym_string] = STATE(89),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [437] = {
    [sym__layout_semicolon] = ACTIONS(1103),
    [anon_sym_SEMI] = ACTIONS(1147),
    [sym_comment] = ACTIONS(5),
  },
  [438] = {
    [sym_import] = STATE(19),
    [sym__declaration] = STATE(563),
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
    [sym__layout_close_brace] = ACTIONS(1149),
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
  [439] = {
    [sym_import] = STATE(19),
    [sym__declaration] = STATE(99),
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
    [anon_sym_RBRACE] = ACTIONS(1151),
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
  [440] = {
    [anon_sym_COMMA] = ACTIONS(1153),
    [anon_sym_RPAREN] = ACTIONS(1153),
    [anon_sym_where] = ACTIONS(1153),
    [anon_sym_EQ_GT] = ACTIONS(1153),
    [sym_comment] = ACTIONS(5),
  },
  [441] = {
    [sym_field] = STATE(579),
    [sym_variable_identifier] = STATE(274),
    [sym__variable_pattern] = ACTIONS(469),
    [sym_comment] = ACTIONS(5),
  },
  [442] = {
    [anon_sym_RBRACE] = ACTIONS(1155),
    [anon_sym_COMMA] = ACTIONS(1157),
    [sym_comment] = ACTIONS(5),
  },
  [443] = {
    [sym_variable_identifier] = STATE(582),
    [sym__variable_pattern] = ACTIONS(469),
    [sym_comment] = ACTIONS(5),
  },
  [444] = {
    [sym_strict] = STATE(584),
    [sym__identifier] = STATE(584),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [anon_sym_BANG] = ACTIONS(1159),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [445] = {
    [anon_sym_COMMA] = ACTIONS(1161),
    [anon_sym_COLON_COLON] = ACTIONS(1163),
    [sym_comment] = ACTIONS(5),
  },
  [446] = {
    [anon_sym_COMMA] = ACTIONS(1165),
    [anon_sym_RPAREN] = ACTIONS(1165),
    [anon_sym_where] = ACTIONS(1165),
    [anon_sym_EQ_GT] = ACTIONS(1165),
    [sym_comment] = ACTIONS(5),
  },
  [447] = {
    [anon_sym_RPAREN] = ACTIONS(1167),
    [sym__variable_pattern] = ACTIONS(1167),
    [sym__constructor_pattern] = ACTIONS(1169),
    [sym_comment] = ACTIONS(5),
  },
  [448] = {
    [anon_sym_RBRACE] = ACTIONS(1171),
    [anon_sym_COMMA] = ACTIONS(1171),
    [anon_sym_RPAREN] = ACTIONS(1171),
    [anon_sym_where] = ACTIONS(1171),
    [anon_sym_EQ_GT] = ACTIONS(1171),
    [sym_comment] = ACTIONS(5),
  },
  [449] = {
    [anon_sym_EQ] = ACTIONS(481),
    [sym_comment] = ACTIONS(5),
  },
  [450] = {
    [sym_label] = STATE(587),
    [sym__identifier] = STATE(449),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(71),
    [sym_comment] = ACTIONS(5),
  },
  [451] = {
    [anon_sym_COMMA] = ACTIONS(87),
    [anon_sym_where] = ACTIONS(87),
    [anon_sym_EQ_GT] = ACTIONS(87),
    [sym_comment] = ACTIONS(5),
  },
  [452] = {
    [sym__graphic] = STATE(588),
    [sym__small] = STATE(66),
    [sym__large] = STATE(66),
    [sym__symbol] = STATE(66),
    [sym__special] = STATE(66),
    [sym__escape] = STATE(588),
    [anon_sym_SEMI] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(91),
    [anon_sym_RBRACE] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(91),
    [anon_sym_RPAREN] = ACTIONS(91),
    [anon_sym_EQ] = ACTIONS(93),
    [anon_sym_TILDE] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_RBRACK] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(93),
    [anon_sym_AT] = ACTIONS(93),
    [anon_sym__] = ACTIONS(95),
    [anon_sym_BQUOTE] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(93),
    [anon_sym_PIPE] = ACTIONS(93),
    [anon_sym_BANG] = ACTIONS(93),
    [anon_sym_DOT] = ACTIONS(93),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(1173),
    [anon_sym_DQUOTE] = ACTIONS(1173),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(101),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(95),
    [sym__ascii_large] = ACTIONS(103),
    [anon_sym_POUND] = ACTIONS(93),
    [anon_sym_DOLLAR] = ACTIONS(93),
    [anon_sym_PERCENT] = ACTIONS(93),
    [anon_sym_AMP] = ACTIONS(93),
    [anon_sym_1] = ACTIONS(93),
    [anon_sym_PLUS] = ACTIONS(93),
    [anon_sym_SLASH] = ACTIONS(93),
    [anon_sym_LT] = ACTIONS(93),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_QMARK] = ACTIONS(93),
    [anon_sym_CARET] = ACTIONS(93),
    [anon_sym_BSLASH] = ACTIONS(105),
    [sym__space] = ACTIONS(1173),
  },
  [453] = {
    [sym__gap] = STATE(72),
    [sym__graphic] = STATE(72),
    [sym__small] = STATE(74),
    [sym__large] = STATE(74),
    [sym__symbol] = STATE(74),
    [sym__special] = STATE(74),
    [sym__escape] = STATE(72),
    [aux_sym_string_repeat1] = STATE(590),
    [anon_sym_SEMI] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(107),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_RPAREN] = ACTIONS(107),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_TILDE] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_RBRACK] = ACTIONS(107),
    [anon_sym_DASH] = ACTIONS(109),
    [anon_sym_AT] = ACTIONS(109),
    [anon_sym__] = ACTIONS(111),
    [anon_sym_BQUOTE] = ACTIONS(107),
    [anon_sym_COLON] = ACTIONS(109),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_BANG] = ACTIONS(109),
    [anon_sym_DOT] = ACTIONS(109),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(1175),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(117),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(111),
    [sym__ascii_large] = ACTIONS(119),
    [anon_sym_POUND] = ACTIONS(109),
    [anon_sym_DOLLAR] = ACTIONS(109),
    [anon_sym_PERCENT] = ACTIONS(109),
    [anon_sym_AMP] = ACTIONS(109),
    [anon_sym_1] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(109),
    [anon_sym_SLASH] = ACTIONS(109),
    [anon_sym_LT] = ACTIONS(109),
    [anon_sym_GT] = ACTIONS(109),
    [anon_sym_QMARK] = ACTIONS(109),
    [anon_sym_CARET] = ACTIONS(109),
    [anon_sym_BSLASH] = ACTIONS(121),
    [sym__space] = ACTIONS(123),
    [sym__newline] = ACTIONS(123),
    [sym__tab] = ACTIONS(123),
    [sym__vertical_tab] = ACTIONS(123),
  },
  [454] = {
    [anon_sym_COMMA] = ACTIONS(127),
    [anon_sym_where] = ACTIONS(127),
    [anon_sym_EQ_GT] = ACTIONS(127),
    [sym_comment] = ACTIONS(5),
  },
  [455] = {
    [anon_sym_RBRACE] = ACTIONS(1177),
    [anon_sym_COMMA] = ACTIONS(1177),
    [anon_sym_RPAREN] = ACTIONS(1177),
    [anon_sym_where] = ACTIONS(1177),
    [anon_sym_EQ_GT] = ACTIONS(1177),
    [sym_comment] = ACTIONS(5),
  },
  [456] = {
    [sym__layout_semicolon] = ACTIONS(1179),
    [anon_sym_SEMI] = ACTIONS(1181),
    [anon_sym_COMMA] = ACTIONS(1181),
    [sym_comment] = ACTIONS(5),
  },
  [457] = {
    [sym_deriving] = STATE(591),
    [sym__layout_semicolon] = ACTIONS(1183),
    [anon_sym_SEMI] = ACTIONS(1185),
    [anon_sym_deriving] = ACTIONS(251),
    [sym_comment] = ACTIONS(5),
  },
  [458] = {
    [sym__layout_semicolon] = ACTIONS(1183),
    [anon_sym_SEMI] = ACTIONS(1185),
    [sym_comment] = ACTIONS(5),
  },
  [459] = {
    [aux_sym_fields_repeat1] = STATE(593),
    [anon_sym_RBRACE] = ACTIONS(1187),
    [anon_sym_COMMA] = ACTIONS(801),
    [sym_comment] = ACTIONS(5),
  },
  [460] = {
    [sym__identifier] = STATE(447),
    [sym_variable_identifier] = STATE(167),
    [sym_constructor_identifier] = STATE(167),
    [anon_sym_RPAREN] = ACTIONS(1189),
    [sym__variable_pattern] = ACTIONS(271),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
  },
  [461] = {
    [sym__layout_semicolon] = ACTIONS(884),
    [anon_sym_SEMI] = ACTIONS(813),
    [anon_sym_EQ] = ACTIONS(813),
    [anon_sym_deriving] = ACTIONS(813),
    [anon_sym_BANG] = ACTIONS(813),
    [sym__variable_pattern] = ACTIONS(815),
    [sym__constructor_pattern] = ACTIONS(815),
    [sym_comment] = ACTIONS(5),
  },
  [462] = {
    [sym_label] = STATE(595),
    [sym__identifier] = STATE(596),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(71),
    [sym_comment] = ACTIONS(5),
  },
  [463] = {
    [sym__layout_semicolon] = ACTIONS(886),
    [anon_sym_SEMI] = ACTIONS(819),
    [anon_sym_COMMA] = ACTIONS(1191),
    [anon_sym_EQ] = ACTIONS(819),
    [anon_sym_deriving] = ACTIONS(819),
    [sym__constructor_pattern] = ACTIONS(890),
    [sym_comment] = ACTIONS(5),
  },
  [464] = {
    [sym__literal] = STATE(602),
    [sym_integer] = STATE(598),
    [sym_char] = STATE(598),
    [sym_string] = STATE(598),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1193),
    [anon_sym_SQUOTE] = ACTIONS(1195),
    [anon_sym_DQUOTE] = ACTIONS(1197),
    [sym__integer_literal] = ACTIONS(1199),
    [sym__octal_literal] = ACTIONS(1199),
    [sym__hexidecimal_literal] = ACTIONS(1199),
  },
  [465] = {
    [sym__layout_semicolon] = ACTIONS(900),
    [anon_sym_SEMI] = ACTIONS(829),
    [anon_sym_EQ] = ACTIONS(829),
    [anon_sym_deriving] = ACTIONS(829),
    [anon_sym_BANG] = ACTIONS(829),
    [sym__variable_pattern] = ACTIONS(831),
    [sym__constructor_pattern] = ACTIONS(831),
    [sym_comment] = ACTIONS(5),
  },
  [466] = {
    [aux_sym_export_repeat1] = STATE(604),
    [anon_sym_COMMA] = ACTIONS(447),
    [anon_sym_RPAREN] = ACTIONS(1201),
    [sym_comment] = ACTIONS(5),
  },
  [467] = {
    [sym__layout_semicolon] = ACTIONS(1203),
    [anon_sym_SEMI] = ACTIONS(1205),
    [anon_sym_PIPE] = ACTIONS(1205),
    [anon_sym_deriving] = ACTIONS(1205),
    [sym_comment] = ACTIONS(5),
  },
  [468] = {
    [sym_constructor] = STATE(605),
    [sym_constructor_identifier] = STATE(149),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [469] = {
    [sym__layout_semicolon] = ACTIONS(1207),
    [anon_sym_SEMI] = ACTIONS(1153),
    [anon_sym_EQ] = ACTIONS(1153),
    [anon_sym_EQ_GT] = ACTIONS(1153),
    [anon_sym_PIPE] = ACTIONS(1153),
    [anon_sym_deriving] = ACTIONS(1153),
    [sym__constructor_pattern] = ACTIONS(1209),
    [sym_comment] = ACTIONS(5),
  },
  [470] = {
    [anon_sym_RBRACE] = ACTIONS(1211),
    [anon_sym_COMMA] = ACTIONS(1157),
    [sym_comment] = ACTIONS(5),
  },
  [471] = {
    [sym__layout_semicolon] = ACTIONS(1213),
    [anon_sym_SEMI] = ACTIONS(1165),
    [anon_sym_EQ] = ACTIONS(1165),
    [anon_sym_EQ_GT] = ACTIONS(1165),
    [anon_sym_PIPE] = ACTIONS(1165),
    [anon_sym_deriving] = ACTIONS(1165),
    [sym__constructor_pattern] = ACTIONS(1215),
    [sym_comment] = ACTIONS(5),
  },
  [472] = {
    [sym__layout_semicolon] = ACTIONS(1217),
    [anon_sym_SEMI] = ACTIONS(1171),
    [anon_sym_COMMA] = ACTIONS(1171),
    [anon_sym_EQ] = ACTIONS(1171),
    [anon_sym_EQ_GT] = ACTIONS(1171),
    [anon_sym_PIPE] = ACTIONS(1171),
    [anon_sym_deriving] = ACTIONS(1171),
    [sym__constructor_pattern] = ACTIONS(1219),
    [sym_comment] = ACTIONS(5),
  },
  [473] = {
    [anon_sym_EQ] = ACTIONS(878),
    [sym_comment] = ACTIONS(5),
  },
  [474] = {
    [sym_label] = STATE(607),
    [sym__identifier] = STATE(473),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(71),
    [sym_comment] = ACTIONS(5),
  },
  [475] = {
    [sym__layout_semicolon] = ACTIONS(85),
    [anon_sym_SEMI] = ACTIONS(87),
    [anon_sym_COMMA] = ACTIONS(87),
    [anon_sym_EQ] = ACTIONS(87),
    [anon_sym_EQ_GT] = ACTIONS(87),
    [anon_sym_PIPE] = ACTIONS(87),
    [anon_sym_deriving] = ACTIONS(87),
    [sym__constructor_pattern] = ACTIONS(89),
    [sym_comment] = ACTIONS(5),
  },
  [476] = {
    [sym__graphic] = STATE(608),
    [sym__small] = STATE(66),
    [sym__large] = STATE(66),
    [sym__symbol] = STATE(66),
    [sym__special] = STATE(66),
    [sym__escape] = STATE(608),
    [anon_sym_SEMI] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(91),
    [anon_sym_RBRACE] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(91),
    [anon_sym_RPAREN] = ACTIONS(91),
    [anon_sym_EQ] = ACTIONS(93),
    [anon_sym_TILDE] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_RBRACK] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(93),
    [anon_sym_AT] = ACTIONS(93),
    [anon_sym__] = ACTIONS(95),
    [anon_sym_BQUOTE] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(93),
    [anon_sym_PIPE] = ACTIONS(93),
    [anon_sym_BANG] = ACTIONS(93),
    [anon_sym_DOT] = ACTIONS(93),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(1221),
    [anon_sym_DQUOTE] = ACTIONS(1221),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(101),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(95),
    [sym__ascii_large] = ACTIONS(103),
    [anon_sym_POUND] = ACTIONS(93),
    [anon_sym_DOLLAR] = ACTIONS(93),
    [anon_sym_PERCENT] = ACTIONS(93),
    [anon_sym_AMP] = ACTIONS(93),
    [anon_sym_1] = ACTIONS(93),
    [anon_sym_PLUS] = ACTIONS(93),
    [anon_sym_SLASH] = ACTIONS(93),
    [anon_sym_LT] = ACTIONS(93),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_QMARK] = ACTIONS(93),
    [anon_sym_CARET] = ACTIONS(93),
    [anon_sym_BSLASH] = ACTIONS(105),
    [sym__space] = ACTIONS(1221),
  },
  [477] = {
    [sym__gap] = STATE(72),
    [sym__graphic] = STATE(72),
    [sym__small] = STATE(74),
    [sym__large] = STATE(74),
    [sym__symbol] = STATE(74),
    [sym__special] = STATE(74),
    [sym__escape] = STATE(72),
    [aux_sym_string_repeat1] = STATE(610),
    [anon_sym_SEMI] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(107),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_RPAREN] = ACTIONS(107),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_TILDE] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_RBRACK] = ACTIONS(107),
    [anon_sym_DASH] = ACTIONS(109),
    [anon_sym_AT] = ACTIONS(109),
    [anon_sym__] = ACTIONS(111),
    [anon_sym_BQUOTE] = ACTIONS(107),
    [anon_sym_COLON] = ACTIONS(109),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_BANG] = ACTIONS(109),
    [anon_sym_DOT] = ACTIONS(109),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(1223),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(117),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(111),
    [sym__ascii_large] = ACTIONS(119),
    [anon_sym_POUND] = ACTIONS(109),
    [anon_sym_DOLLAR] = ACTIONS(109),
    [anon_sym_PERCENT] = ACTIONS(109),
    [anon_sym_AMP] = ACTIONS(109),
    [anon_sym_1] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(109),
    [anon_sym_SLASH] = ACTIONS(109),
    [anon_sym_LT] = ACTIONS(109),
    [anon_sym_GT] = ACTIONS(109),
    [anon_sym_QMARK] = ACTIONS(109),
    [anon_sym_CARET] = ACTIONS(109),
    [anon_sym_BSLASH] = ACTIONS(121),
    [sym__space] = ACTIONS(123),
    [sym__newline] = ACTIONS(123),
    [sym__tab] = ACTIONS(123),
    [sym__vertical_tab] = ACTIONS(123),
  },
  [478] = {
    [sym__layout_semicolon] = ACTIONS(125),
    [anon_sym_SEMI] = ACTIONS(127),
    [anon_sym_COMMA] = ACTIONS(127),
    [anon_sym_EQ] = ACTIONS(127),
    [anon_sym_EQ_GT] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_deriving] = ACTIONS(127),
    [sym__constructor_pattern] = ACTIONS(129),
    [sym_comment] = ACTIONS(5),
  },
  [479] = {
    [sym__layout_semicolon] = ACTIONS(1225),
    [anon_sym_SEMI] = ACTIONS(1177),
    [anon_sym_COMMA] = ACTIONS(1177),
    [anon_sym_EQ] = ACTIONS(1177),
    [anon_sym_EQ_GT] = ACTIONS(1177),
    [anon_sym_PIPE] = ACTIONS(1177),
    [anon_sym_deriving] = ACTIONS(1177),
    [sym__constructor_pattern] = ACTIONS(1227),
    [sym_comment] = ACTIONS(5),
  },
  [480] = {
    [sym_deriving] = STATE(611),
    [sym__layout_semicolon] = ACTIONS(1229),
    [anon_sym_SEMI] = ACTIONS(1231),
    [anon_sym_deriving] = ACTIONS(251),
    [sym_comment] = ACTIONS(5),
  },
  [481] = {
    [sym__layout_semicolon] = ACTIONS(1229),
    [anon_sym_SEMI] = ACTIONS(1231),
    [sym_comment] = ACTIONS(5),
  },
  [482] = {
    [anon_sym_EQ] = ACTIONS(558),
    [sym_comment] = ACTIONS(5),
  },
  [483] = {
    [sym_label] = STATE(587),
    [sym__identifier] = STATE(482),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(71),
    [sym_comment] = ACTIONS(5),
  },
  [484] = {
    [sym_variable_identifier] = STATE(316),
    [aux_sym_simple_type_repeat1] = STATE(529),
    [anon_sym_COMMA] = ACTIONS(695),
    [anon_sym_RPAREN] = ACTIONS(695),
    [anon_sym_DASH_GT] = ACTIONS(695),
    [sym__variable_pattern] = ACTIONS(271),
    [sym_comment] = ACTIONS(5),
  },
  [485] = {
    [anon_sym_EQ] = ACTIONS(1153),
    [sym_comment] = ACTIONS(5),
  },
  [486] = {
    [anon_sym_RBRACE] = ACTIONS(1233),
    [anon_sym_COMMA] = ACTIONS(1157),
    [sym_comment] = ACTIONS(5),
  },
  [487] = {
    [anon_sym_EQ] = ACTIONS(1165),
    [sym_comment] = ACTIONS(5),
  },
  [488] = {
    [anon_sym_COMMA] = ACTIONS(1171),
    [anon_sym_EQ] = ACTIONS(1171),
    [sym_comment] = ACTIONS(5),
  },
  [489] = {
    [anon_sym_EQ] = ACTIONS(1235),
    [sym_comment] = ACTIONS(5),
  },
  [490] = {
    [sym_label] = STATE(613),
    [sym__identifier] = STATE(489),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(71),
    [sym_comment] = ACTIONS(5),
  },
  [491] = {
    [anon_sym_COMMA] = ACTIONS(1177),
    [anon_sym_EQ] = ACTIONS(1177),
    [sym_comment] = ACTIONS(5),
  },
  [492] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(1237),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1237),
  },
  [493] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(1239),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(1239),
  },
  [494] = {
    [anon_sym_SEMI] = ACTIONS(1241),
    [anon_sym_LBRACE] = ACTIONS(1241),
    [anon_sym_RBRACE] = ACTIONS(1241),
    [anon_sym_LPAREN] = ACTIONS(1241),
    [anon_sym_RPAREN] = ACTIONS(1241),
    [anon_sym_EQ] = ACTIONS(1241),
    [anon_sym_TILDE] = ACTIONS(1241),
    [anon_sym_LBRACK] = ACTIONS(1241),
    [anon_sym_RBRACK] = ACTIONS(1241),
    [anon_sym_DASH] = ACTIONS(1241),
    [anon_sym_AT] = ACTIONS(1241),
    [anon_sym__] = ACTIONS(1241),
    [anon_sym_BQUOTE] = ACTIONS(1241),
    [anon_sym_COLON] = ACTIONS(1241),
    [anon_sym_PIPE] = ACTIONS(1241),
    [anon_sym_BANG] = ACTIONS(1241),
    [anon_sym_DOT] = ACTIONS(1241),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(1241),
    [anon_sym_DQUOTE] = ACTIONS(1241),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(1241),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(1241),
    [sym__ascii_large] = ACTIONS(1241),
    [anon_sym_POUND] = ACTIONS(1241),
    [anon_sym_DOLLAR] = ACTIONS(1241),
    [anon_sym_PERCENT] = ACTIONS(1241),
    [anon_sym_AMP] = ACTIONS(1241),
    [anon_sym_1] = ACTIONS(1241),
    [anon_sym_PLUS] = ACTIONS(1241),
    [anon_sym_SLASH] = ACTIONS(1241),
    [anon_sym_LT] = ACTIONS(1241),
    [anon_sym_GT] = ACTIONS(1241),
    [anon_sym_QMARK] = ACTIONS(1241),
    [anon_sym_CARET] = ACTIONS(1241),
    [anon_sym_BSLASH] = ACTIONS(1241),
    [sym__space] = ACTIONS(1241),
    [sym__newline] = ACTIONS(1241),
    [sym__tab] = ACTIONS(1241),
    [sym__vertical_tab] = ACTIONS(1241),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1241),
  },
  [495] = {
    [anon_sym_SEMI] = ACTIONS(1243),
    [anon_sym_LBRACE] = ACTIONS(1243),
    [anon_sym_RBRACE] = ACTIONS(1243),
    [anon_sym_LPAREN] = ACTIONS(1243),
    [anon_sym_RPAREN] = ACTIONS(1243),
    [anon_sym_EQ] = ACTIONS(1243),
    [anon_sym_TILDE] = ACTIONS(1243),
    [anon_sym_LBRACK] = ACTIONS(1243),
    [anon_sym_RBRACK] = ACTIONS(1243),
    [anon_sym_DASH] = ACTIONS(1243),
    [anon_sym_AT] = ACTIONS(1243),
    [anon_sym__] = ACTIONS(1243),
    [anon_sym_BQUOTE] = ACTIONS(1243),
    [anon_sym_COLON] = ACTIONS(1243),
    [anon_sym_PIPE] = ACTIONS(1243),
    [anon_sym_BANG] = ACTIONS(1243),
    [anon_sym_DOT] = ACTIONS(1243),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(1243),
    [anon_sym_DQUOTE] = ACTIONS(1243),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(1243),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(1243),
    [sym__ascii_large] = ACTIONS(1243),
    [anon_sym_POUND] = ACTIONS(1243),
    [anon_sym_DOLLAR] = ACTIONS(1243),
    [anon_sym_PERCENT] = ACTIONS(1243),
    [anon_sym_AMP] = ACTIONS(1243),
    [anon_sym_1] = ACTIONS(1243),
    [anon_sym_PLUS] = ACTIONS(1243),
    [anon_sym_SLASH] = ACTIONS(1243),
    [anon_sym_LT] = ACTIONS(1243),
    [anon_sym_GT] = ACTIONS(1243),
    [anon_sym_QMARK] = ACTIONS(1243),
    [anon_sym_CARET] = ACTIONS(1243),
    [anon_sym_BSLASH] = ACTIONS(1243),
    [sym__space] = ACTIONS(1243),
    [sym__newline] = ACTIONS(1243),
    [sym__tab] = ACTIONS(1243),
    [sym__vertical_tab] = ACTIONS(1243),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(1243),
  },
  [496] = {
    [sym__layout_semicolon] = ACTIONS(1245),
    [anon_sym_SEMI] = ACTIONS(1247),
    [anon_sym_where] = ACTIONS(1247),
    [anon_sym_do] = ACTIONS(1247),
    [sym__variable_pattern] = ACTIONS(1249),
    [sym__constructor_pattern] = ACTIONS(1249),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1249),
    [anon_sym_SQUOTE] = ACTIONS(1247),
    [anon_sym_DQUOTE] = ACTIONS(1247),
    [sym__integer_literal] = ACTIONS(1247),
    [sym__octal_literal] = ACTIONS(1247),
    [sym__hexidecimal_literal] = ACTIONS(1247),
  },
  [497] = {
    [sym__layout_semicolon] = ACTIONS(79),
    [anon_sym_SEMI] = ACTIONS(81),
    [sym__variable_pattern] = ACTIONS(81),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(203),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [sym__integer_literal] = ACTIONS(81),
    [sym__octal_literal] = ACTIONS(81),
    [sym__hexidecimal_literal] = ACTIONS(81),
  },
  [498] = {
    [sym__layout_semicolon] = ACTIONS(1251),
    [anon_sym_SEMI] = ACTIONS(1253),
    [sym_comment] = ACTIONS(5),
  },
  [499] = {
    [sym__layout_close_brace] = ACTIONS(1255),
    [anon_sym_do] = ACTIONS(1257),
    [sym__variable_pattern] = ACTIONS(1259),
    [sym__constructor_pattern] = ACTIONS(1259),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1259),
    [anon_sym_SQUOTE] = ACTIONS(1257),
    [anon_sym_DQUOTE] = ACTIONS(1257),
    [sym__integer_literal] = ACTIONS(1257),
    [sym__octal_literal] = ACTIONS(1257),
    [sym__hexidecimal_literal] = ACTIONS(1257),
  },
  [500] = {
    [sym__literal] = STATE(619),
    [sym_variable_identifier] = STATE(619),
    [sym_integer] = STATE(615),
    [sym_char] = STATE(615),
    [sym_string] = STATE(615),
    [aux_sym_general_constructor_repeat1] = STATE(620),
    [sym__layout_semicolon] = ACTIONS(171),
    [anon_sym_SEMI] = ACTIONS(173),
    [sym__variable_pattern] = ACTIONS(918),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1261),
    [anon_sym_SQUOTE] = ACTIONS(1263),
    [anon_sym_DQUOTE] = ACTIONS(1265),
    [sym__integer_literal] = ACTIONS(1267),
    [sym__octal_literal] = ACTIONS(1267),
    [sym__hexidecimal_literal] = ACTIONS(1267),
  },
  [501] = {
    [sym_general_constructor] = STATE(200),
    [sym__variable] = STATE(200),
    [sym_qualified_variable_identifier] = STATE(201),
    [sym__expression] = STATE(498),
    [sym_do_expression] = STATE(200),
    [sym__statement] = STATE(622),
    [sym__literal] = STATE(200),
    [sym__identifier] = STATE(200),
    [sym_variable_identifier] = STATE(26),
    [sym_constructor_identifier] = STATE(500),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [sym__layout_close_brace] = ACTIONS(1269),
    [anon_sym_do] = ACTIONS(357),
    [sym__variable_pattern] = ACTIONS(31),
    [sym__constructor_pattern] = ACTIONS(960),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym__integer_literal] = ACTIONS(41),
    [sym__octal_literal] = ACTIONS(41),
    [sym__hexidecimal_literal] = ACTIONS(41),
  },
  [502] = {
    [sym__layout_semicolon] = ACTIONS(1271),
    [anon_sym_SEMI] = ACTIONS(1273),
    [sym_comment] = ACTIONS(5),
  },
  [503] = {
    [anon_sym_RBRACE] = ACTIONS(1257),
    [anon_sym_do] = ACTIONS(1257),
    [sym__variable_pattern] = ACTIONS(1259),
    [sym__constructor_pattern] = ACTIONS(1259),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1259),
    [anon_sym_SQUOTE] = ACTIONS(1257),
    [anon_sym_DQUOTE] = ACTIONS(1257),
    [sym__integer_literal] = ACTIONS(1257),
    [sym__octal_literal] = ACTIONS(1257),
    [sym__hexidecimal_literal] = ACTIONS(1257),
  },
  [504] = {
    [sym_general_constructor] = STATE(200),
    [sym__variable] = STATE(200),
    [sym_qualified_variable_identifier] = STATE(201),
    [sym__expression] = STATE(502),
    [sym_do_expression] = STATE(200),
    [sym__statement] = STATE(624),
    [sym__literal] = STATE(200),
    [sym__identifier] = STATE(200),
    [sym_variable_identifier] = STATE(26),
    [sym_constructor_identifier] = STATE(500),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [anon_sym_RBRACE] = ACTIONS(1275),
    [anon_sym_do] = ACTIONS(357),
    [sym__variable_pattern] = ACTIONS(31),
    [sym__constructor_pattern] = ACTIONS(960),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym__integer_literal] = ACTIONS(41),
    [sym__octal_literal] = ACTIONS(41),
    [sym__hexidecimal_literal] = ACTIONS(41),
  },
  [505] = {
    [sym__layout_semicolon] = ACTIONS(1277),
    [anon_sym_SEMI] = ACTIONS(1279),
    [anon_sym_where] = ACTIONS(1279),
    [anon_sym_do] = ACTIONS(1279),
    [sym__variable_pattern] = ACTIONS(1281),
    [sym__constructor_pattern] = ACTIONS(1281),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1281),
    [anon_sym_SQUOTE] = ACTIONS(1279),
    [anon_sym_DQUOTE] = ACTIONS(1279),
    [sym__integer_literal] = ACTIONS(1279),
    [sym__octal_literal] = ACTIONS(1279),
    [sym__hexidecimal_literal] = ACTIONS(1279),
  },
  [506] = {
    [anon_sym_RPAREN] = ACTIONS(1283),
    [sym_comment] = ACTIONS(5),
  },
  [507] = {
    [sym__op] = STATE(360),
    [sym_variable_symbol] = STATE(361),
    [sym_constructor_symbol] = STATE(361),
    [sym__variable_symbol] = STATE(362),
    [anon_sym_COMMA] = ACTIONS(1285),
    [anon_sym_RPAREN] = ACTIONS(1285),
    [anon_sym_DASH] = ACTIONS(637),
    [anon_sym_BQUOTE] = ACTIONS(639),
    [anon_sym_COLON] = ACTIONS(641),
    [anon_sym_BANG] = ACTIONS(637),
    [anon_sym_DOT] = ACTIONS(637),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(637),
    [anon_sym_DOLLAR] = ACTIONS(637),
    [anon_sym_PERCENT] = ACTIONS(637),
    [anon_sym_AMP] = ACTIONS(637),
    [anon_sym_1] = ACTIONS(637),
    [anon_sym_PLUS] = ACTIONS(637),
    [anon_sym_SLASH] = ACTIONS(637),
    [anon_sym_LT] = ACTIONS(637),
    [anon_sym_GT] = ACTIONS(637),
    [anon_sym_QMARK] = ACTIONS(637),
    [anon_sym_CARET] = ACTIONS(637),
  },
  [508] = {
    [anon_sym_COMMA] = ACTIONS(1285),
    [anon_sym_RPAREN] = ACTIONS(1285),
    [sym_comment] = ACTIONS(5),
  },
  [509] = {
    [anon_sym_BQUOTE] = ACTIONS(1287),
    [sym_comment] = ACTIONS(5),
  },
  [510] = {
    [anon_sym_LPAREN] = ACTIONS(491),
    [anon_sym_TILDE] = ACTIONS(491),
    [anon_sym_LBRACK] = ACTIONS(491),
    [anon_sym_DASH] = ACTIONS(491),
    [anon_sym__] = ACTIONS(491),
    [anon_sym_COLON] = ACTIONS(491),
    [sym_list_constructor] = ACTIONS(491),
    [anon_sym_BANG] = ACTIONS(491),
    [sym__variable_pattern] = ACTIONS(1289),
    [sym__constructor_pattern] = ACTIONS(1289),
    [anon_sym_DOT] = ACTIONS(491),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1289),
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
  [511] = {
    [anon_sym_LPAREN] = ACTIONS(495),
    [anon_sym_TILDE] = ACTIONS(495),
    [anon_sym_LBRACK] = ACTIONS(495),
    [anon_sym_DASH] = ACTIONS(495),
    [anon_sym__] = ACTIONS(495),
    [anon_sym_COLON] = ACTIONS(495),
    [sym_list_constructor] = ACTIONS(495),
    [anon_sym_BANG] = ACTIONS(495),
    [sym__variable_pattern] = ACTIONS(1291),
    [sym__constructor_pattern] = ACTIONS(1291),
    [anon_sym_DOT] = ACTIONS(495),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1291),
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
  [512] = {
    [sym__constructor_symbol] = STATE(627),
    [anon_sym_LPAREN] = ACTIONS(499),
    [anon_sym_TILDE] = ACTIONS(499),
    [anon_sym_LBRACK] = ACTIONS(499),
    [anon_sym_DASH] = ACTIONS(499),
    [anon_sym__] = ACTIONS(499),
    [anon_sym_COLON] = ACTIONS(1000),
    [sym_list_constructor] = ACTIONS(499),
    [anon_sym_BANG] = ACTIONS(1000),
    [sym__variable_pattern] = ACTIONS(1293),
    [sym__constructor_pattern] = ACTIONS(1293),
    [anon_sym_DOT] = ACTIONS(1000),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1293),
    [anon_sym_SQUOTE] = ACTIONS(499),
    [anon_sym_DQUOTE] = ACTIONS(499),
    [anon_sym_POUND] = ACTIONS(1000),
    [anon_sym_DOLLAR] = ACTIONS(1000),
    [anon_sym_PERCENT] = ACTIONS(1000),
    [anon_sym_AMP] = ACTIONS(1000),
    [anon_sym_1] = ACTIONS(1000),
    [anon_sym_PLUS] = ACTIONS(1000),
    [anon_sym_SLASH] = ACTIONS(1000),
    [anon_sym_LT] = ACTIONS(1000),
    [anon_sym_GT] = ACTIONS(1000),
    [anon_sym_QMARK] = ACTIONS(1000),
    [anon_sym_CARET] = ACTIONS(1000),
    [sym__integer_literal] = ACTIONS(499),
    [sym__octal_literal] = ACTIONS(499),
    [sym__hexidecimal_literal] = ACTIONS(499),
  },
  [513] = {
    [sym__op] = STATE(360),
    [sym_variable_symbol] = STATE(361),
    [sym_constructor_symbol] = STATE(361),
    [sym__variable_symbol] = STATE(362),
    [anon_sym_COMMA] = ACTIONS(1295),
    [anon_sym_RPAREN] = ACTIONS(1295),
    [anon_sym_DASH] = ACTIONS(637),
    [anon_sym_BQUOTE] = ACTIONS(639),
    [anon_sym_COLON] = ACTIONS(641),
    [anon_sym_BANG] = ACTIONS(637),
    [anon_sym_DOT] = ACTIONS(637),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(637),
    [anon_sym_DOLLAR] = ACTIONS(637),
    [anon_sym_PERCENT] = ACTIONS(637),
    [anon_sym_AMP] = ACTIONS(637),
    [anon_sym_1] = ACTIONS(637),
    [anon_sym_PLUS] = ACTIONS(637),
    [anon_sym_SLASH] = ACTIONS(637),
    [anon_sym_LT] = ACTIONS(637),
    [anon_sym_GT] = ACTIONS(637),
    [anon_sym_QMARK] = ACTIONS(637),
    [anon_sym_CARET] = ACTIONS(637),
  },
  [514] = {
    [anon_sym_COMMA] = ACTIONS(1295),
    [anon_sym_RPAREN] = ACTIONS(1295),
    [sym_comment] = ACTIONS(5),
  },
  [515] = {
    [anon_sym_LPAREN] = ACTIONS(509),
    [anon_sym_TILDE] = ACTIONS(509),
    [anon_sym_LBRACK] = ACTIONS(509),
    [anon_sym_DASH] = ACTIONS(509),
    [anon_sym__] = ACTIONS(509),
    [sym_list_constructor] = ACTIONS(509),
    [anon_sym_BANG] = ACTIONS(509),
    [sym__variable_pattern] = ACTIONS(1297),
    [sym__constructor_pattern] = ACTIONS(1297),
    [anon_sym_DOT] = ACTIONS(509),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1297),
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
  [516] = {
    [sym__variable_symbol] = STATE(628),
    [anon_sym_LPAREN] = ACTIONS(513),
    [anon_sym_TILDE] = ACTIONS(513),
    [anon_sym_LBRACK] = ACTIONS(513),
    [anon_sym_DASH] = ACTIONS(637),
    [anon_sym__] = ACTIONS(513),
    [sym_list_constructor] = ACTIONS(513),
    [anon_sym_BANG] = ACTIONS(637),
    [sym__variable_pattern] = ACTIONS(1299),
    [sym__constructor_pattern] = ACTIONS(1299),
    [anon_sym_DOT] = ACTIONS(637),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1299),
    [anon_sym_SQUOTE] = ACTIONS(513),
    [anon_sym_DQUOTE] = ACTIONS(513),
    [anon_sym_POUND] = ACTIONS(637),
    [anon_sym_DOLLAR] = ACTIONS(637),
    [anon_sym_PERCENT] = ACTIONS(637),
    [anon_sym_AMP] = ACTIONS(637),
    [anon_sym_1] = ACTIONS(637),
    [anon_sym_PLUS] = ACTIONS(637),
    [anon_sym_SLASH] = ACTIONS(637),
    [anon_sym_LT] = ACTIONS(637),
    [anon_sym_GT] = ACTIONS(637),
    [anon_sym_QMARK] = ACTIONS(637),
    [anon_sym_CARET] = ACTIONS(637),
    [sym__integer_literal] = ACTIONS(513),
    [sym__octal_literal] = ACTIONS(513),
    [sym__hexidecimal_literal] = ACTIONS(513),
  },
  [517] = {
    [sym__function_pattern] = STATE(629),
    [sym_label_pattern] = STATE(86),
    [sym_irrefutable_pattern] = STATE(86),
    [sym_list_pattern] = STATE(86),
    [sym_tuple_pattern] = STATE(86),
    [sym_parenthesized_pattern] = STATE(86),
    [sym__pattern] = STATE(630),
    [sym_negative_literal] = STATE(211),
    [sym_general_constructor] = STATE(211),
    [sym_as_pattern] = STATE(86),
    [sym_wildcard] = STATE(86),
    [sym__variable] = STATE(212),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym__literal] = STATE(86),
    [sym__identifier] = STATE(94),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(213),
    [sym_integer] = STATE(89),
    [sym_char] = STATE(89),
    [sym_string] = STATE(89),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_TILDE] = ACTIONS(367),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym_DASH] = ACTIONS(369),
    [anon_sym__] = ACTIONS(151),
    [sym_list_constructor] = ACTIONS(153),
    [sym__variable_pattern] = ACTIONS(155),
    [sym__constructor_pattern] = ACTIONS(371),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [518] = {
    [anon_sym_LPAREN] = ACTIONS(1301),
    [anon_sym_COMMA] = ACTIONS(1301),
    [anon_sym_RPAREN] = ACTIONS(1301),
    [anon_sym_EQ] = ACTIONS(1301),
    [anon_sym_TILDE] = ACTIONS(1301),
    [anon_sym_LBRACK] = ACTIONS(1301),
    [anon_sym_RBRACK] = ACTIONS(1301),
    [anon_sym_DASH] = ACTIONS(1301),
    [anon_sym__] = ACTIONS(1301),
    [anon_sym_BQUOTE] = ACTIONS(1301),
    [anon_sym_COLON] = ACTIONS(1301),
    [sym_list_constructor] = ACTIONS(1301),
    [anon_sym_BANG] = ACTIONS(1301),
    [sym__variable_pattern] = ACTIONS(1303),
    [sym__constructor_pattern] = ACTIONS(1303),
    [anon_sym_DOT] = ACTIONS(1301),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1303),
    [anon_sym_SQUOTE] = ACTIONS(1301),
    [anon_sym_DQUOTE] = ACTIONS(1301),
    [anon_sym_POUND] = ACTIONS(1301),
    [anon_sym_DOLLAR] = ACTIONS(1301),
    [anon_sym_PERCENT] = ACTIONS(1301),
    [anon_sym_AMP] = ACTIONS(1301),
    [anon_sym_1] = ACTIONS(1301),
    [anon_sym_PLUS] = ACTIONS(1301),
    [anon_sym_SLASH] = ACTIONS(1301),
    [anon_sym_LT] = ACTIONS(1301),
    [anon_sym_GT] = ACTIONS(1301),
    [anon_sym_QMARK] = ACTIONS(1301),
    [anon_sym_CARET] = ACTIONS(1301),
    [sym__integer_literal] = ACTIONS(1301),
    [sym__octal_literal] = ACTIONS(1301),
    [sym__hexidecimal_literal] = ACTIONS(1301),
  },
  [519] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(1305),
  },
  [520] = {
    [anon_sym_COMMA] = ACTIONS(1279),
    [anon_sym_RPAREN] = ACTIONS(1279),
    [sym__variable_pattern] = ACTIONS(1279),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1281),
    [anon_sym_SQUOTE] = ACTIONS(1279),
    [anon_sym_DQUOTE] = ACTIONS(1279),
    [sym__integer_literal] = ACTIONS(1279),
    [sym__octal_literal] = ACTIONS(1279),
    [sym__hexidecimal_literal] = ACTIONS(1279),
  },
  [521] = {
    [anon_sym_LPAREN] = ACTIONS(1307),
    [anon_sym_COMMA] = ACTIONS(1307),
    [anon_sym_RPAREN] = ACTIONS(1307),
    [anon_sym_EQ] = ACTIONS(1307),
    [anon_sym_TILDE] = ACTIONS(1307),
    [anon_sym_LBRACK] = ACTIONS(1307),
    [anon_sym_RBRACK] = ACTIONS(1307),
    [anon_sym_DASH] = ACTIONS(1307),
    [anon_sym__] = ACTIONS(1307),
    [anon_sym_BQUOTE] = ACTIONS(1307),
    [anon_sym_COLON] = ACTIONS(1307),
    [sym_list_constructor] = ACTIONS(1307),
    [anon_sym_BANG] = ACTIONS(1307),
    [sym__variable_pattern] = ACTIONS(1309),
    [sym__constructor_pattern] = ACTIONS(1309),
    [anon_sym_DOT] = ACTIONS(1307),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1309),
    [anon_sym_SQUOTE] = ACTIONS(1307),
    [anon_sym_DQUOTE] = ACTIONS(1307),
    [anon_sym_POUND] = ACTIONS(1307),
    [anon_sym_DOLLAR] = ACTIONS(1307),
    [anon_sym_PERCENT] = ACTIONS(1307),
    [anon_sym_AMP] = ACTIONS(1307),
    [anon_sym_1] = ACTIONS(1307),
    [anon_sym_PLUS] = ACTIONS(1307),
    [anon_sym_SLASH] = ACTIONS(1307),
    [anon_sym_LT] = ACTIONS(1307),
    [anon_sym_GT] = ACTIONS(1307),
    [anon_sym_QMARK] = ACTIONS(1307),
    [anon_sym_CARET] = ACTIONS(1307),
    [sym__integer_literal] = ACTIONS(1307),
    [sym__octal_literal] = ACTIONS(1307),
    [sym__hexidecimal_literal] = ACTIONS(1307),
  },
  [522] = {
    [anon_sym_RBRACE] = ACTIONS(819),
    [anon_sym_COMMA] = ACTIONS(1311),
    [sym_comment] = ACTIONS(5),
  },
  [523] = {
    [aux_sym_tupling_constructor_repeat1] = STATE(633),
    [anon_sym_COMMA] = ACTIONS(1032),
    [anon_sym_RPAREN] = ACTIONS(1313),
    [sym_comment] = ACTIONS(5),
  },
  [524] = {
    [aux_sym_tuple_repeat1] = STATE(635),
    [anon_sym_COMMA] = ACTIONS(1043),
    [anon_sym_RPAREN] = ACTIONS(1315),
    [sym_comment] = ACTIONS(5),
  },
  [525] = {
    [anon_sym_COMMA] = ACTIONS(1317),
    [anon_sym_RPAREN] = ACTIONS(1317),
    [sym_comment] = ACTIONS(5),
  },
  [526] = {
    [sym__layout_semicolon] = ACTIONS(1319),
    [anon_sym_SEMI] = ACTIONS(1321),
    [anon_sym_DASH_GT] = ACTIONS(1321),
    [sym_comment] = ACTIONS(5),
  },
  [527] = {
    [anon_sym_COMMA] = ACTIONS(1323),
    [anon_sym_RPAREN] = ACTIONS(1325),
    [sym_comment] = ACTIONS(5),
  },
  [528] = {
    [sym_type] = STATE(548),
    [sym__generic_type_constructor] = STATE(394),
    [sym_tupling_constructor] = STATE(382),
    [sym_tuple] = STATE(394),
    [sym_list] = STATE(394),
    [sym_parenthesized_constructor] = STATE(394),
    [sym_variable_identifier] = STATE(395),
    [sym__type_constructors] = STATE(382),
    [sym_qualified_type_constructor] = STATE(389),
    [anon_sym_LPAREN] = ACTIONS(671),
    [anon_sym_LBRACK] = ACTIONS(675),
    [anon_sym_RBRACK] = ACTIONS(1327),
    [sym_unit_type] = ACTIONS(677),
    [sym_list_constructor] = ACTIONS(677),
    [sym_function_constructor] = ACTIONS(677),
    [sym__variable_pattern] = ACTIONS(683),
    [sym__constructor_pattern] = ACTIONS(685),
    [sym_module_identifier] = ACTIONS(687),
    [sym_comment] = ACTIONS(5),
  },
  [529] = {
    [sym_variable_identifier] = STATE(323),
    [anon_sym_COMMA] = ACTIONS(1079),
    [anon_sym_RPAREN] = ACTIONS(1079),
    [anon_sym_DASH_GT] = ACTIONS(1079),
    [sym__variable_pattern] = ACTIONS(271),
    [sym_comment] = ACTIONS(5),
  },
  [530] = {
    [sym_constructor_identifier] = STATE(639),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_module_identifier] = ACTIONS(1081),
    [sym_comment] = ACTIONS(5),
  },
  [531] = {
    [sym_variable_identifier] = STATE(316),
    [aux_sym_simple_type_repeat1] = STATE(640),
    [anon_sym_COMMA] = ACTIONS(1085),
    [anon_sym_RPAREN] = ACTIONS(1085),
    [anon_sym_DASH_GT] = ACTIONS(1085),
    [sym__variable_pattern] = ACTIONS(271),
    [sym_comment] = ACTIONS(5),
  },
  [532] = {
    [sym_constructor_identifier] = STATE(639),
    [sym__constructor_pattern] = ACTIONS(69),
    [anon_sym_DOT] = ACTIONS(1329),
    [sym_comment] = ACTIONS(5),
  },
  [533] = {
    [sym_type] = STATE(642),
    [sym__generic_type_constructor] = STATE(386),
    [sym_tupling_constructor] = STATE(382),
    [sym_tuple] = STATE(386),
    [sym_list] = STATE(386),
    [sym_parenthesized_constructor] = STATE(386),
    [sym_variable_identifier] = STATE(388),
    [sym__type_constructors] = STATE(382),
    [sym_qualified_type_constructor] = STATE(389),
    [anon_sym_LPAREN] = ACTIONS(671),
    [anon_sym_LBRACK] = ACTIONS(675),
    [sym_unit_type] = ACTIONS(677),
    [sym_list_constructor] = ACTIONS(677),
    [sym_function_constructor] = ACTIONS(677),
    [sym__variable_pattern] = ACTIONS(469),
    [sym__constructor_pattern] = ACTIONS(916),
    [sym_module_identifier] = ACTIONS(681),
    [sym_comment] = ACTIONS(5),
  },
  [534] = {
    [sym__layout_semicolon] = ACTIONS(1331),
    [anon_sym_SEMI] = ACTIONS(1334),
    [anon_sym_DASH_GT] = ACTIONS(1334),
    [sym_comment] = ACTIONS(5),
  },
  [535] = {
    [anon_sym_COMMA] = ACTIONS(1337),
    [anon_sym_RPAREN] = ACTIONS(1339),
    [sym_comment] = ACTIONS(5),
  },
  [536] = {
    [sym_type] = STATE(645),
    [sym__generic_type_constructor] = STATE(386),
    [sym_tupling_constructor] = STATE(382),
    [sym_tuple] = STATE(386),
    [sym_list] = STATE(386),
    [sym_parenthesized_constructor] = STATE(386),
    [sym_variable_identifier] = STATE(388),
    [sym__type_constructors] = STATE(382),
    [sym_qualified_type_constructor] = STATE(389),
    [anon_sym_LPAREN] = ACTIONS(671),
    [anon_sym_LBRACK] = ACTIONS(675),
    [sym_unit_type] = ACTIONS(677),
    [sym_list_constructor] = ACTIONS(677),
    [sym_function_constructor] = ACTIONS(677),
    [sym__variable_pattern] = ACTIONS(469),
    [sym__constructor_pattern] = ACTIONS(916),
    [sym_module_identifier] = ACTIONS(681),
    [sym_comment] = ACTIONS(5),
  },
  [537] = {
    [anon_sym_EQ_GT] = ACTIONS(1341),
    [sym_comment] = ACTIONS(5),
  },
  [538] = {
    [anon_sym_COMMA] = ACTIONS(783),
    [anon_sym_RPAREN] = ACTIONS(1343),
    [sym_comment] = ACTIONS(5),
  },
  [539] = {
    [sym_type] = STATE(648),
    [sym__generic_type_constructor] = STATE(386),
    [sym_tupling_constructor] = STATE(382),
    [sym_tuple] = STATE(386),
    [sym_list] = STATE(386),
    [sym_parenthesized_constructor] = STATE(386),
    [sym_variable_identifier] = STATE(388),
    [sym__type_constructors] = STATE(382),
    [sym_qualified_type_constructor] = STATE(389),
    [anon_sym_LPAREN] = ACTIONS(671),
    [anon_sym_LBRACK] = ACTIONS(675),
    [sym_unit_type] = ACTIONS(677),
    [sym_list_constructor] = ACTIONS(677),
    [sym_function_constructor] = ACTIONS(677),
    [sym__variable_pattern] = ACTIONS(469),
    [sym__constructor_pattern] = ACTIONS(916),
    [sym_module_identifier] = ACTIONS(681),
    [sym_comment] = ACTIONS(5),
  },
  [540] = {
    [sym_variable_identifier] = STATE(323),
    [anon_sym_LPAREN] = ACTIONS(1079),
    [anon_sym_LBRACK] = ACTIONS(1079),
    [anon_sym_RBRACK] = ACTIONS(1079),
    [anon_sym_DASH_GT] = ACTIONS(1079),
    [sym_unit_type] = ACTIONS(1079),
    [sym_list_constructor] = ACTIONS(1079),
    [sym_function_constructor] = ACTIONS(1079),
    [sym__variable_pattern] = ACTIONS(683),
    [sym__constructor_pattern] = ACTIONS(1345),
    [sym_module_identifier] = ACTIONS(1345),
    [sym_comment] = ACTIONS(5),
  },
  [541] = {
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(81),
    [anon_sym_DASH_GT] = ACTIONS(81),
    [sym_unit_type] = ACTIONS(81),
    [sym_list_constructor] = ACTIONS(81),
    [sym_function_constructor] = ACTIONS(81),
    [sym__variable_pattern] = ACTIONS(81),
    [sym__constructor_pattern] = ACTIONS(203),
    [sym_module_identifier] = ACTIONS(203),
    [sym_comment] = ACTIONS(5),
  },
  [542] = {
    [sym_constructor_identifier] = STATE(649),
    [sym__constructor_pattern] = ACTIONS(1057),
    [sym_module_identifier] = ACTIONS(1081),
    [sym_comment] = ACTIONS(5),
  },
  [543] = {
    [sym_variable_identifier] = STATE(316),
    [aux_sym_simple_type_repeat1] = STATE(650),
    [anon_sym_LPAREN] = ACTIONS(1085),
    [anon_sym_LBRACK] = ACTIONS(1085),
    [anon_sym_RBRACK] = ACTIONS(1085),
    [anon_sym_DASH_GT] = ACTIONS(1085),
    [sym_unit_type] = ACTIONS(1085),
    [sym_list_constructor] = ACTIONS(1085),
    [sym_function_constructor] = ACTIONS(1085),
    [sym__variable_pattern] = ACTIONS(683),
    [sym__constructor_pattern] = ACTIONS(1347),
    [sym_module_identifier] = ACTIONS(1347),
    [sym_comment] = ACTIONS(5),
  },
  [544] = {
    [sym_constructor_identifier] = STATE(649),
    [sym__constructor_pattern] = ACTIONS(1057),
    [anon_sym_DOT] = ACTIONS(1349),
    [sym_comment] = ACTIONS(5),
  },
  [545] = {
    [sym_type] = STATE(645),
    [sym__generic_type_constructor] = STATE(394),
    [sym_tupling_constructor] = STATE(382),
    [sym_tuple] = STATE(394),
    [sym_list] = STATE(394),
    [sym_parenthesized_constructor] = STATE(394),
    [sym_variable_identifier] = STATE(395),
    [sym__type_constructors] = STATE(382),
    [sym_qualified_type_constructor] = STATE(389),
    [anon_sym_LPAREN] = ACTIONS(671),
    [anon_sym_LBRACK] = ACTIONS(675),
    [sym_unit_type] = ACTIONS(677),
    [sym_list_constructor] = ACTIONS(677),
    [sym_function_constructor] = ACTIONS(677),
    [sym__variable_pattern] = ACTIONS(683),
    [sym__constructor_pattern] = ACTIONS(685),
    [sym_module_identifier] = ACTIONS(687),
    [sym_comment] = ACTIONS(5),
  },
  [546] = {
    [sym_type] = STATE(648),
    [sym__generic_type_constructor] = STATE(394),
    [sym_tupling_constructor] = STATE(382),
    [sym_tuple] = STATE(394),
    [sym_list] = STATE(394),
    [sym_parenthesized_constructor] = STATE(394),
    [sym_variable_identifier] = STATE(395),
    [sym__type_constructors] = STATE(382),
    [sym_qualified_type_constructor] = STATE(389),
    [anon_sym_LPAREN] = ACTIONS(671),
    [anon_sym_LBRACK] = ACTIONS(675),
    [sym_unit_type] = ACTIONS(677),
    [sym_list_constructor] = ACTIONS(677),
    [sym_function_constructor] = ACTIONS(677),
    [sym__variable_pattern] = ACTIONS(683),
    [sym__constructor_pattern] = ACTIONS(685),
    [sym_module_identifier] = ACTIONS(687),
    [sym_comment] = ACTIONS(5),
  },
  [547] = {
    [sym__layout_semicolon] = ACTIONS(1351),
    [anon_sym_SEMI] = ACTIONS(1353),
    [anon_sym_DASH_GT] = ACTIONS(1353),
    [sym_comment] = ACTIONS(5),
  },
  [548] = {
    [anon_sym_LPAREN] = ACTIONS(1355),
    [anon_sym_LBRACK] = ACTIONS(1355),
    [anon_sym_RBRACK] = ACTIONS(1355),
    [sym_unit_type] = ACTIONS(1355),
    [sym_list_constructor] = ACTIONS(1355),
    [sym_function_constructor] = ACTIONS(1355),
    [sym__variable_pattern] = ACTIONS(1355),
    [sym__constructor_pattern] = ACTIONS(1357),
    [sym_module_identifier] = ACTIONS(1357),
    [sym_comment] = ACTIONS(5),
  },
  [549] = {
    [sym__layout_semicolon] = ACTIONS(1359),
    [anon_sym_SEMI] = ACTIONS(912),
    [anon_sym_DASH_GT] = ACTIONS(912),
    [sym__variable_pattern] = ACTIONS(912),
    [sym_comment] = ACTIONS(5),
  },
  [550] = {
    [sym__constructor_pattern] = ACTIONS(1361),
    [anon_sym_DOT] = ACTIONS(1363),
    [sym_comment] = ACTIONS(5),
  },
  [551] = {
    [sym_variable_identifier] = STATE(398),
    [aux_sym_simple_type_repeat1] = STATE(652),
    [sym__layout_semicolon] = ACTIONS(1365),
    [anon_sym_SEMI] = ACTIONS(1367),
    [anon_sym_DASH_GT] = ACTIONS(1367),
    [sym__variable_pattern] = ACTIONS(918),
    [sym_comment] = ACTIONS(5),
  },
  [552] = {
    [sym_variable_identifier] = STATE(549),
    [sym__layout_semicolon] = ACTIONS(1365),
    [anon_sym_SEMI] = ACTIONS(1367),
    [anon_sym_DASH_GT] = ACTIONS(1367),
    [sym__variable_pattern] = ACTIONS(918),
    [sym_comment] = ACTIONS(5),
  },
  [553] = {
    [sym_constructor_identifier] = STATE(654),
    [sym__constructor_pattern] = ACTIONS(697),
    [sym_module_identifier] = ACTIONS(1369),
    [sym_comment] = ACTIONS(5),
  },
  [554] = {
    [sym__layout_semicolon] = ACTIONS(1371),
    [anon_sym_SEMI] = ACTIONS(1373),
    [sym_comment] = ACTIONS(5),
  },
  [555] = {
    [sym__layout_semicolon] = ACTIONS(1375),
    [anon_sym_SEMI] = ACTIONS(1377),
    [sym_comment] = ACTIONS(5),
  },
  [556] = {
    [anon_sym_COMMA] = ACTIONS(1379),
    [anon_sym_RPAREN] = ACTIONS(1379),
    [sym_comment] = ACTIONS(5),
  },
  [557] = {
    [sym_export] = STATE(655),
    [sym__identifier] = STATE(240),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [558] = {
    [anon_sym_where] = ACTIONS(1381),
    [sym_comment] = ACTIONS(5),
  },
  [559] = {
    [anon_sym_RPAREN] = ACTIONS(1383),
    [sym_comment] = ACTIONS(5),
  },
  [560] = {
    [aux_sym_export_repeat1] = STATE(657),
    [anon_sym_COMMA] = ACTIONS(447),
    [anon_sym_RPAREN] = ACTIONS(1383),
    [sym_comment] = ACTIONS(5),
  },
  [561] = {
    [sym__layout_close_brace] = ACTIONS(347),
    [anon_sym_import] = ACTIONS(349),
    [anon_sym_foreign] = ACTIONS(349),
    [anon_sym_default] = ACTIONS(349),
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
  [562] = {
    [ts_builtin_sym_end] = ACTIONS(1385),
    [sym_comment] = ACTIONS(5),
  },
  [563] = {
    [sym__layout_semicolon] = ACTIONS(1387),
    [anon_sym_SEMI] = ACTIONS(1389),
    [sym_comment] = ACTIONS(5),
  },
  [564] = {
    [sym__layout_semicolon] = ACTIONS(1391),
    [anon_sym_SEMI] = ACTIONS(1393),
    [sym_comment] = ACTIONS(5),
  },
  [565] = {
    [anon_sym_RPAREN] = ACTIONS(1395),
    [sym_comment] = ACTIONS(5),
  },
  [566] = {
    [aux_sym_export_repeat1] = STATE(660),
    [anon_sym_COMMA] = ACTIONS(447),
    [anon_sym_RPAREN] = ACTIONS(1395),
    [sym_comment] = ACTIONS(5),
  },
  [567] = {
    [anon_sym_LPAREN] = ACTIONS(1397),
    [anon_sym_COMMA] = ACTIONS(1399),
    [anon_sym_RPAREN] = ACTIONS(1399),
    [sym_comment] = ACTIONS(5),
  },
  [568] = {
    [sym__identifier] = STATE(662),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [569] = {
    [sym__layout_semicolon] = ACTIONS(1401),
    [anon_sym_SEMI] = ACTIONS(1403),
    [sym_comment] = ACTIONS(5),
  },
  [570] = {
    [sym__identifier] = STATE(664),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [anon_sym_DOT_DOT] = ACTIONS(1405),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [571] = {
    [anon_sym_COMMA] = ACTIONS(1123),
    [anon_sym_RPAREN] = ACTIONS(1407),
    [sym_comment] = ACTIONS(5),
  },
  [572] = {
    [anon_sym_COMMA] = ACTIONS(605),
    [anon_sym_RPAREN] = ACTIONS(605),
    [anon_sym_EQ_GT] = ACTIONS(605),
    [sym__variable_pattern] = ACTIONS(605),
    [sym__constructor_pattern] = ACTIONS(607),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(607),
    [anon_sym_SQUOTE] = ACTIONS(605),
    [anon_sym_DQUOTE] = ACTIONS(605),
    [sym__integer_literal] = ACTIONS(605),
    [sym__octal_literal] = ACTIONS(605),
    [sym__hexidecimal_literal] = ACTIONS(605),
  },
  [573] = {
    [sym__layout_semicolon] = ACTIONS(1409),
    [anon_sym_SEMI] = ACTIONS(1411),
    [sym_comment] = ACTIONS(5),
  },
  [574] = {
    [anon_sym_COMMA] = ACTIONS(1413),
    [anon_sym_RPAREN] = ACTIONS(1413),
    [sym_comment] = ACTIONS(5),
  },
  [575] = {
    [anon_sym_COMMA] = ACTIONS(1415),
    [anon_sym_RPAREN] = ACTIONS(1415),
    [sym_comment] = ACTIONS(5),
  },
  [576] = {
    [sym__constructor_pattern] = ACTIONS(1417),
    [sym_comment] = ACTIONS(5),
  },
  [577] = {
    [sym_label] = STATE(587),
    [sym__identifier] = STATE(378),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(71),
    [sym_comment] = ACTIONS(5),
  },
  [578] = {
    [sym__layout_semicolon] = ACTIONS(1385),
    [anon_sym_SEMI] = ACTIONS(1419),
    [sym_comment] = ACTIONS(5),
  },
  [579] = {
    [anon_sym_RBRACE] = ACTIONS(1421),
    [anon_sym_COMMA] = ACTIONS(1421),
    [sym_comment] = ACTIONS(5),
  },
  [580] = {
    [anon_sym_COMMA] = ACTIONS(1423),
    [anon_sym_RPAREN] = ACTIONS(1423),
    [anon_sym_where] = ACTIONS(1423),
    [anon_sym_EQ_GT] = ACTIONS(1423),
    [sym_comment] = ACTIONS(5),
  },
  [581] = {
    [sym_field] = STATE(666),
    [sym_variable_identifier] = STATE(274),
    [sym__variable_pattern] = ACTIONS(469),
    [sym_comment] = ACTIONS(5),
  },
  [582] = {
    [anon_sym_COMMA] = ACTIONS(1425),
    [anon_sym_COLON_COLON] = ACTIONS(1425),
    [sym_comment] = ACTIONS(5),
  },
  [583] = {
    [sym__identifier] = STATE(277),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [584] = {
    [anon_sym_RBRACE] = ACTIONS(1427),
    [anon_sym_COMMA] = ACTIONS(1427),
    [sym_comment] = ACTIONS(5),
  },
  [585] = {
    [sym_variable_identifier] = STATE(667),
    [sym__variable_pattern] = ACTIONS(469),
    [sym_comment] = ACTIONS(5),
  },
  [586] = {
    [sym_strict] = STATE(668),
    [sym__identifier] = STATE(668),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [anon_sym_BANG] = ACTIONS(1159),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [587] = {
    [anon_sym_RBRACE] = ACTIONS(1429),
    [anon_sym_COMMA] = ACTIONS(1429),
    [anon_sym_RPAREN] = ACTIONS(1429),
    [anon_sym_where] = ACTIONS(1429),
    [anon_sym_EQ_GT] = ACTIONS(1429),
    [sym_comment] = ACTIONS(5),
  },
  [588] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(1431),
  },
  [589] = {
    [anon_sym_COMMA] = ACTIONS(321),
    [anon_sym_where] = ACTIONS(321),
    [anon_sym_EQ_GT] = ACTIONS(321),
    [sym_comment] = ACTIONS(5),
  },
  [590] = {
    [sym__gap] = STATE(194),
    [sym__graphic] = STATE(194),
    [sym__small] = STATE(74),
    [sym__large] = STATE(74),
    [sym__symbol] = STATE(74),
    [sym__special] = STATE(74),
    [sym__escape] = STATE(194),
    [anon_sym_SEMI] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(107),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_RPAREN] = ACTIONS(107),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_TILDE] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_RBRACK] = ACTIONS(107),
    [anon_sym_DASH] = ACTIONS(109),
    [anon_sym_AT] = ACTIONS(109),
    [anon_sym__] = ACTIONS(111),
    [anon_sym_BQUOTE] = ACTIONS(107),
    [anon_sym_COLON] = ACTIONS(109),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_BANG] = ACTIONS(109),
    [anon_sym_DOT] = ACTIONS(109),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(343),
    [anon_sym_DQUOTE] = ACTIONS(1433),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(117),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(111),
    [sym__ascii_large] = ACTIONS(119),
    [anon_sym_POUND] = ACTIONS(109),
    [anon_sym_DOLLAR] = ACTIONS(109),
    [anon_sym_PERCENT] = ACTIONS(109),
    [anon_sym_AMP] = ACTIONS(109),
    [anon_sym_1] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(109),
    [anon_sym_SLASH] = ACTIONS(109),
    [anon_sym_LT] = ACTIONS(109),
    [anon_sym_GT] = ACTIONS(109),
    [anon_sym_QMARK] = ACTIONS(109),
    [anon_sym_CARET] = ACTIONS(109),
    [anon_sym_BSLASH] = ACTIONS(121),
    [sym__space] = ACTIONS(123),
    [sym__newline] = ACTIONS(123),
    [sym__tab] = ACTIONS(123),
    [sym__vertical_tab] = ACTIONS(123),
  },
  [591] = {
    [sym__layout_semicolon] = ACTIONS(1435),
    [anon_sym_SEMI] = ACTIONS(1437),
    [sym_comment] = ACTIONS(5),
  },
  [592] = {
    [sym__layout_semicolon] = ACTIONS(1207),
    [anon_sym_SEMI] = ACTIONS(1153),
    [anon_sym_EQ] = ACTIONS(1153),
    [anon_sym_deriving] = ACTIONS(1153),
    [sym__constructor_pattern] = ACTIONS(1209),
    [sym_comment] = ACTIONS(5),
  },
  [593] = {
    [anon_sym_RBRACE] = ACTIONS(1439),
    [anon_sym_COMMA] = ACTIONS(1157),
    [sym_comment] = ACTIONS(5),
  },
  [594] = {
    [sym__layout_semicolon] = ACTIONS(1213),
    [anon_sym_SEMI] = ACTIONS(1165),
    [anon_sym_EQ] = ACTIONS(1165),
    [anon_sym_deriving] = ACTIONS(1165),
    [sym__constructor_pattern] = ACTIONS(1215),
    [sym_comment] = ACTIONS(5),
  },
  [595] = {
    [sym__layout_semicolon] = ACTIONS(1217),
    [anon_sym_SEMI] = ACTIONS(1171),
    [anon_sym_COMMA] = ACTIONS(1171),
    [anon_sym_EQ] = ACTIONS(1171),
    [anon_sym_deriving] = ACTIONS(1171),
    [sym__constructor_pattern] = ACTIONS(1219),
    [sym_comment] = ACTIONS(5),
  },
  [596] = {
    [anon_sym_EQ] = ACTIONS(1441),
    [sym_comment] = ACTIONS(5),
  },
  [597] = {
    [sym_label] = STATE(672),
    [sym__identifier] = STATE(596),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(71),
    [sym_comment] = ACTIONS(5),
  },
  [598] = {
    [sym__layout_semicolon] = ACTIONS(85),
    [anon_sym_SEMI] = ACTIONS(87),
    [anon_sym_COMMA] = ACTIONS(87),
    [anon_sym_EQ] = ACTIONS(87),
    [anon_sym_deriving] = ACTIONS(87),
    [sym__constructor_pattern] = ACTIONS(89),
    [sym_comment] = ACTIONS(5),
  },
  [599] = {
    [sym__graphic] = STATE(673),
    [sym__small] = STATE(66),
    [sym__large] = STATE(66),
    [sym__symbol] = STATE(66),
    [sym__special] = STATE(66),
    [sym__escape] = STATE(673),
    [anon_sym_SEMI] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(91),
    [anon_sym_RBRACE] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(91),
    [anon_sym_RPAREN] = ACTIONS(91),
    [anon_sym_EQ] = ACTIONS(93),
    [anon_sym_TILDE] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_RBRACK] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(93),
    [anon_sym_AT] = ACTIONS(93),
    [anon_sym__] = ACTIONS(95),
    [anon_sym_BQUOTE] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(93),
    [anon_sym_PIPE] = ACTIONS(93),
    [anon_sym_BANG] = ACTIONS(93),
    [anon_sym_DOT] = ACTIONS(93),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(1443),
    [anon_sym_DQUOTE] = ACTIONS(1443),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(101),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(95),
    [sym__ascii_large] = ACTIONS(103),
    [anon_sym_POUND] = ACTIONS(93),
    [anon_sym_DOLLAR] = ACTIONS(93),
    [anon_sym_PERCENT] = ACTIONS(93),
    [anon_sym_AMP] = ACTIONS(93),
    [anon_sym_1] = ACTIONS(93),
    [anon_sym_PLUS] = ACTIONS(93),
    [anon_sym_SLASH] = ACTIONS(93),
    [anon_sym_LT] = ACTIONS(93),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_QMARK] = ACTIONS(93),
    [anon_sym_CARET] = ACTIONS(93),
    [anon_sym_BSLASH] = ACTIONS(105),
    [sym__space] = ACTIONS(1443),
  },
  [600] = {
    [sym__gap] = STATE(72),
    [sym__graphic] = STATE(72),
    [sym__small] = STATE(74),
    [sym__large] = STATE(74),
    [sym__symbol] = STATE(74),
    [sym__special] = STATE(74),
    [sym__escape] = STATE(72),
    [aux_sym_string_repeat1] = STATE(675),
    [anon_sym_SEMI] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(107),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_RPAREN] = ACTIONS(107),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_TILDE] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_RBRACK] = ACTIONS(107),
    [anon_sym_DASH] = ACTIONS(109),
    [anon_sym_AT] = ACTIONS(109),
    [anon_sym__] = ACTIONS(111),
    [anon_sym_BQUOTE] = ACTIONS(107),
    [anon_sym_COLON] = ACTIONS(109),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_BANG] = ACTIONS(109),
    [anon_sym_DOT] = ACTIONS(109),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(1445),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(117),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(111),
    [sym__ascii_large] = ACTIONS(119),
    [anon_sym_POUND] = ACTIONS(109),
    [anon_sym_DOLLAR] = ACTIONS(109),
    [anon_sym_PERCENT] = ACTIONS(109),
    [anon_sym_AMP] = ACTIONS(109),
    [anon_sym_1] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(109),
    [anon_sym_SLASH] = ACTIONS(109),
    [anon_sym_LT] = ACTIONS(109),
    [anon_sym_GT] = ACTIONS(109),
    [anon_sym_QMARK] = ACTIONS(109),
    [anon_sym_CARET] = ACTIONS(109),
    [anon_sym_BSLASH] = ACTIONS(121),
    [sym__space] = ACTIONS(123),
    [sym__newline] = ACTIONS(123),
    [sym__tab] = ACTIONS(123),
    [sym__vertical_tab] = ACTIONS(123),
  },
  [601] = {
    [sym__layout_semicolon] = ACTIONS(125),
    [anon_sym_SEMI] = ACTIONS(127),
    [anon_sym_COMMA] = ACTIONS(127),
    [anon_sym_EQ] = ACTIONS(127),
    [anon_sym_deriving] = ACTIONS(127),
    [sym__constructor_pattern] = ACTIONS(129),
    [sym_comment] = ACTIONS(5),
  },
  [602] = {
    [sym__layout_semicolon] = ACTIONS(1225),
    [anon_sym_SEMI] = ACTIONS(1177),
    [anon_sym_COMMA] = ACTIONS(1177),
    [anon_sym_EQ] = ACTIONS(1177),
    [anon_sym_deriving] = ACTIONS(1177),
    [sym__constructor_pattern] = ACTIONS(1227),
    [sym_comment] = ACTIONS(5),
  },
  [603] = {
    [sym__layout_semicolon] = ACTIONS(1447),
    [anon_sym_SEMI] = ACTIONS(1449),
    [sym_comment] = ACTIONS(5),
  },
  [604] = {
    [anon_sym_COMMA] = ACTIONS(777),
    [anon_sym_RPAREN] = ACTIONS(1451),
    [sym_comment] = ACTIONS(5),
  },
  [605] = {
    [sym__layout_semicolon] = ACTIONS(1453),
    [anon_sym_SEMI] = ACTIONS(1455),
    [anon_sym_PIPE] = ACTIONS(1455),
    [anon_sym_deriving] = ACTIONS(1455),
    [sym_comment] = ACTIONS(5),
  },
  [606] = {
    [sym__layout_semicolon] = ACTIONS(1457),
    [anon_sym_SEMI] = ACTIONS(1423),
    [anon_sym_EQ] = ACTIONS(1423),
    [anon_sym_EQ_GT] = ACTIONS(1423),
    [anon_sym_PIPE] = ACTIONS(1423),
    [anon_sym_deriving] = ACTIONS(1423),
    [sym__constructor_pattern] = ACTIONS(1459),
    [sym_comment] = ACTIONS(5),
  },
  [607] = {
    [sym__layout_semicolon] = ACTIONS(1461),
    [anon_sym_SEMI] = ACTIONS(1429),
    [anon_sym_COMMA] = ACTIONS(1429),
    [anon_sym_EQ] = ACTIONS(1429),
    [anon_sym_EQ_GT] = ACTIONS(1429),
    [anon_sym_PIPE] = ACTIONS(1429),
    [anon_sym_deriving] = ACTIONS(1429),
    [sym__constructor_pattern] = ACTIONS(1463),
    [sym_comment] = ACTIONS(5),
  },
  [608] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(1465),
  },
  [609] = {
    [sym__layout_semicolon] = ACTIONS(319),
    [anon_sym_SEMI] = ACTIONS(321),
    [anon_sym_COMMA] = ACTIONS(321),
    [anon_sym_EQ] = ACTIONS(321),
    [anon_sym_EQ_GT] = ACTIONS(321),
    [anon_sym_PIPE] = ACTIONS(321),
    [anon_sym_deriving] = ACTIONS(321),
    [sym__constructor_pattern] = ACTIONS(323),
    [sym_comment] = ACTIONS(5),
  },
  [610] = {
    [sym__gap] = STATE(194),
    [sym__graphic] = STATE(194),
    [sym__small] = STATE(74),
    [sym__large] = STATE(74),
    [sym__symbol] = STATE(74),
    [sym__special] = STATE(74),
    [sym__escape] = STATE(194),
    [anon_sym_SEMI] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(107),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_RPAREN] = ACTIONS(107),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_TILDE] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_RBRACK] = ACTIONS(107),
    [anon_sym_DASH] = ACTIONS(109),
    [anon_sym_AT] = ACTIONS(109),
    [anon_sym__] = ACTIONS(111),
    [anon_sym_BQUOTE] = ACTIONS(107),
    [anon_sym_COLON] = ACTIONS(109),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_BANG] = ACTIONS(109),
    [anon_sym_DOT] = ACTIONS(109),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(343),
    [anon_sym_DQUOTE] = ACTIONS(1467),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(117),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(111),
    [sym__ascii_large] = ACTIONS(119),
    [anon_sym_POUND] = ACTIONS(109),
    [anon_sym_DOLLAR] = ACTIONS(109),
    [anon_sym_PERCENT] = ACTIONS(109),
    [anon_sym_AMP] = ACTIONS(109),
    [anon_sym_1] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(109),
    [anon_sym_SLASH] = ACTIONS(109),
    [anon_sym_LT] = ACTIONS(109),
    [anon_sym_GT] = ACTIONS(109),
    [anon_sym_QMARK] = ACTIONS(109),
    [anon_sym_CARET] = ACTIONS(109),
    [anon_sym_BSLASH] = ACTIONS(121),
    [sym__space] = ACTIONS(123),
    [sym__newline] = ACTIONS(123),
    [sym__tab] = ACTIONS(123),
    [sym__vertical_tab] = ACTIONS(123),
  },
  [611] = {
    [sym__layout_semicolon] = ACTIONS(1469),
    [anon_sym_SEMI] = ACTIONS(1471),
    [sym_comment] = ACTIONS(5),
  },
  [612] = {
    [anon_sym_EQ] = ACTIONS(1423),
    [sym_comment] = ACTIONS(5),
  },
  [613] = {
    [anon_sym_COMMA] = ACTIONS(1429),
    [anon_sym_EQ] = ACTIONS(1429),
    [sym_comment] = ACTIONS(5),
  },
  [614] = {
    [sym__layout_close_brace] = ACTIONS(1473),
    [anon_sym_do] = ACTIONS(1475),
    [sym__variable_pattern] = ACTIONS(1477),
    [sym__constructor_pattern] = ACTIONS(1477),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1477),
    [anon_sym_SQUOTE] = ACTIONS(1475),
    [anon_sym_DQUOTE] = ACTIONS(1475),
    [sym__integer_literal] = ACTIONS(1475),
    [sym__octal_literal] = ACTIONS(1475),
    [sym__hexidecimal_literal] = ACTIONS(1475),
  },
  [615] = {
    [sym__layout_semicolon] = ACTIONS(85),
    [anon_sym_SEMI] = ACTIONS(87),
    [sym__variable_pattern] = ACTIONS(87),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(87),
    [sym__integer_literal] = ACTIONS(87),
    [sym__octal_literal] = ACTIONS(87),
    [sym__hexidecimal_literal] = ACTIONS(87),
  },
  [616] = {
    [sym__graphic] = STATE(679),
    [sym__small] = STATE(66),
    [sym__large] = STATE(66),
    [sym__symbol] = STATE(66),
    [sym__special] = STATE(66),
    [sym__escape] = STATE(679),
    [anon_sym_SEMI] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(91),
    [anon_sym_RBRACE] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(91),
    [anon_sym_RPAREN] = ACTIONS(91),
    [anon_sym_EQ] = ACTIONS(93),
    [anon_sym_TILDE] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_RBRACK] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(93),
    [anon_sym_AT] = ACTIONS(93),
    [anon_sym__] = ACTIONS(95),
    [anon_sym_BQUOTE] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(93),
    [anon_sym_PIPE] = ACTIONS(93),
    [anon_sym_BANG] = ACTIONS(93),
    [anon_sym_DOT] = ACTIONS(93),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(1479),
    [anon_sym_DQUOTE] = ACTIONS(1479),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(101),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(95),
    [sym__ascii_large] = ACTIONS(103),
    [anon_sym_POUND] = ACTIONS(93),
    [anon_sym_DOLLAR] = ACTIONS(93),
    [anon_sym_PERCENT] = ACTIONS(93),
    [anon_sym_AMP] = ACTIONS(93),
    [anon_sym_1] = ACTIONS(93),
    [anon_sym_PLUS] = ACTIONS(93),
    [anon_sym_SLASH] = ACTIONS(93),
    [anon_sym_LT] = ACTIONS(93),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_QMARK] = ACTIONS(93),
    [anon_sym_CARET] = ACTIONS(93),
    [anon_sym_BSLASH] = ACTIONS(105),
    [sym__space] = ACTIONS(1479),
  },
  [617] = {
    [sym__gap] = STATE(72),
    [sym__graphic] = STATE(72),
    [sym__small] = STATE(74),
    [sym__large] = STATE(74),
    [sym__symbol] = STATE(74),
    [sym__special] = STATE(74),
    [sym__escape] = STATE(72),
    [aux_sym_string_repeat1] = STATE(681),
    [anon_sym_SEMI] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(107),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_RPAREN] = ACTIONS(107),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_TILDE] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_RBRACK] = ACTIONS(107),
    [anon_sym_DASH] = ACTIONS(109),
    [anon_sym_AT] = ACTIONS(109),
    [anon_sym__] = ACTIONS(111),
    [anon_sym_BQUOTE] = ACTIONS(107),
    [anon_sym_COLON] = ACTIONS(109),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_BANG] = ACTIONS(109),
    [anon_sym_DOT] = ACTIONS(109),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(1481),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(117),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(111),
    [sym__ascii_large] = ACTIONS(119),
    [anon_sym_POUND] = ACTIONS(109),
    [anon_sym_DOLLAR] = ACTIONS(109),
    [anon_sym_PERCENT] = ACTIONS(109),
    [anon_sym_AMP] = ACTIONS(109),
    [anon_sym_1] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(109),
    [anon_sym_SLASH] = ACTIONS(109),
    [anon_sym_LT] = ACTIONS(109),
    [anon_sym_GT] = ACTIONS(109),
    [anon_sym_QMARK] = ACTIONS(109),
    [anon_sym_CARET] = ACTIONS(109),
    [anon_sym_BSLASH] = ACTIONS(121),
    [sym__space] = ACTIONS(123),
    [sym__newline] = ACTIONS(123),
    [sym__tab] = ACTIONS(123),
    [sym__vertical_tab] = ACTIONS(123),
  },
  [618] = {
    [sym__layout_semicolon] = ACTIONS(125),
    [anon_sym_SEMI] = ACTIONS(127),
    [sym__variable_pattern] = ACTIONS(127),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(129),
    [anon_sym_SQUOTE] = ACTIONS(127),
    [anon_sym_DQUOTE] = ACTIONS(127),
    [sym__integer_literal] = ACTIONS(127),
    [sym__octal_literal] = ACTIONS(127),
    [sym__hexidecimal_literal] = ACTIONS(127),
  },
  [619] = {
    [sym__layout_semicolon] = ACTIONS(972),
    [anon_sym_SEMI] = ACTIONS(974),
    [sym__variable_pattern] = ACTIONS(974),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(976),
    [anon_sym_SQUOTE] = ACTIONS(974),
    [anon_sym_DQUOTE] = ACTIONS(974),
    [sym__integer_literal] = ACTIONS(974),
    [sym__octal_literal] = ACTIONS(974),
    [sym__hexidecimal_literal] = ACTIONS(974),
  },
  [620] = {
    [sym__literal] = STATE(682),
    [sym_variable_identifier] = STATE(682),
    [sym_integer] = STATE(615),
    [sym_char] = STATE(615),
    [sym_string] = STATE(615),
    [sym__layout_semicolon] = ACTIONS(978),
    [anon_sym_SEMI] = ACTIONS(980),
    [sym__variable_pattern] = ACTIONS(918),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1261),
    [anon_sym_SQUOTE] = ACTIONS(1263),
    [anon_sym_DQUOTE] = ACTIONS(1265),
    [sym__integer_literal] = ACTIONS(1267),
    [sym__octal_literal] = ACTIONS(1267),
    [sym__hexidecimal_literal] = ACTIONS(1267),
  },
  [621] = {
    [sym__layout_semicolon] = ACTIONS(1483),
    [anon_sym_SEMI] = ACTIONS(1485),
    [anon_sym_where] = ACTIONS(1485),
    [anon_sym_do] = ACTIONS(1485),
    [sym__variable_pattern] = ACTIONS(1487),
    [sym__constructor_pattern] = ACTIONS(1487),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1487),
    [anon_sym_SQUOTE] = ACTIONS(1485),
    [anon_sym_DQUOTE] = ACTIONS(1485),
    [sym__integer_literal] = ACTIONS(1485),
    [sym__octal_literal] = ACTIONS(1485),
    [sym__hexidecimal_literal] = ACTIONS(1485),
  },
  [622] = {
    [sym__layout_close_brace] = ACTIONS(1489),
    [anon_sym_do] = ACTIONS(1491),
    [sym__variable_pattern] = ACTIONS(1493),
    [sym__constructor_pattern] = ACTIONS(1493),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1493),
    [anon_sym_SQUOTE] = ACTIONS(1491),
    [anon_sym_DQUOTE] = ACTIONS(1491),
    [sym__integer_literal] = ACTIONS(1491),
    [sym__octal_literal] = ACTIONS(1491),
    [sym__hexidecimal_literal] = ACTIONS(1491),
  },
  [623] = {
    [anon_sym_RBRACE] = ACTIONS(1475),
    [anon_sym_do] = ACTIONS(1475),
    [sym__variable_pattern] = ACTIONS(1477),
    [sym__constructor_pattern] = ACTIONS(1477),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1477),
    [anon_sym_SQUOTE] = ACTIONS(1475),
    [anon_sym_DQUOTE] = ACTIONS(1475),
    [sym__integer_literal] = ACTIONS(1475),
    [sym__octal_literal] = ACTIONS(1475),
    [sym__hexidecimal_literal] = ACTIONS(1475),
  },
  [624] = {
    [anon_sym_RBRACE] = ACTIONS(1491),
    [anon_sym_do] = ACTIONS(1491),
    [sym__variable_pattern] = ACTIONS(1493),
    [sym__constructor_pattern] = ACTIONS(1493),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1493),
    [anon_sym_SQUOTE] = ACTIONS(1491),
    [anon_sym_DQUOTE] = ACTIONS(1491),
    [sym__integer_literal] = ACTIONS(1491),
    [sym__octal_literal] = ACTIONS(1491),
    [sym__hexidecimal_literal] = ACTIONS(1491),
  },
  [625] = {
    [anon_sym_COMMA] = ACTIONS(1495),
    [anon_sym_RPAREN] = ACTIONS(1495),
    [sym_comment] = ACTIONS(5),
  },
  [626] = {
    [anon_sym_LPAREN] = ACTIONS(839),
    [anon_sym_TILDE] = ACTIONS(839),
    [anon_sym_LBRACK] = ACTIONS(839),
    [anon_sym_DASH] = ACTIONS(839),
    [anon_sym__] = ACTIONS(839),
    [sym_list_constructor] = ACTIONS(839),
    [sym__variable_pattern] = ACTIONS(1497),
    [sym__constructor_pattern] = ACTIONS(1497),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1497),
    [anon_sym_SQUOTE] = ACTIONS(839),
    [anon_sym_DQUOTE] = ACTIONS(839),
    [sym__integer_literal] = ACTIONS(839),
    [sym__octal_literal] = ACTIONS(839),
    [sym__hexidecimal_literal] = ACTIONS(839),
  },
  [627] = {
    [anon_sym_LPAREN] = ACTIONS(843),
    [anon_sym_TILDE] = ACTIONS(843),
    [anon_sym_LBRACK] = ACTIONS(843),
    [anon_sym_DASH] = ACTIONS(843),
    [anon_sym__] = ACTIONS(843),
    [anon_sym_COLON] = ACTIONS(843),
    [sym_list_constructor] = ACTIONS(843),
    [anon_sym_BANG] = ACTIONS(843),
    [sym__variable_pattern] = ACTIONS(1499),
    [sym__constructor_pattern] = ACTIONS(1499),
    [anon_sym_DOT] = ACTIONS(843),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1499),
    [anon_sym_SQUOTE] = ACTIONS(843),
    [anon_sym_DQUOTE] = ACTIONS(843),
    [anon_sym_POUND] = ACTIONS(843),
    [anon_sym_DOLLAR] = ACTIONS(843),
    [anon_sym_PERCENT] = ACTIONS(843),
    [anon_sym_AMP] = ACTIONS(843),
    [anon_sym_1] = ACTIONS(843),
    [anon_sym_PLUS] = ACTIONS(843),
    [anon_sym_SLASH] = ACTIONS(843),
    [anon_sym_LT] = ACTIONS(843),
    [anon_sym_GT] = ACTIONS(843),
    [anon_sym_QMARK] = ACTIONS(843),
    [anon_sym_CARET] = ACTIONS(843),
    [sym__integer_literal] = ACTIONS(843),
    [sym__octal_literal] = ACTIONS(843),
    [sym__hexidecimal_literal] = ACTIONS(843),
  },
  [628] = {
    [anon_sym_LPAREN] = ACTIONS(855),
    [anon_sym_TILDE] = ACTIONS(855),
    [anon_sym_LBRACK] = ACTIONS(855),
    [anon_sym_DASH] = ACTIONS(855),
    [anon_sym__] = ACTIONS(855),
    [sym_list_constructor] = ACTIONS(855),
    [anon_sym_BANG] = ACTIONS(855),
    [sym__variable_pattern] = ACTIONS(1501),
    [sym__constructor_pattern] = ACTIONS(1501),
    [anon_sym_DOT] = ACTIONS(855),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1501),
    [anon_sym_SQUOTE] = ACTIONS(855),
    [anon_sym_DQUOTE] = ACTIONS(855),
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
    [sym__integer_literal] = ACTIONS(855),
    [sym__octal_literal] = ACTIONS(855),
    [sym__hexidecimal_literal] = ACTIONS(855),
  },
  [629] = {
    [sym__op] = STATE(360),
    [sym_variable_symbol] = STATE(361),
    [sym_constructor_symbol] = STATE(361),
    [sym__variable_symbol] = STATE(362),
    [anon_sym_COMMA] = ACTIONS(1503),
    [anon_sym_RPAREN] = ACTIONS(1503),
    [anon_sym_DASH] = ACTIONS(637),
    [anon_sym_BQUOTE] = ACTIONS(639),
    [anon_sym_COLON] = ACTIONS(641),
    [anon_sym_BANG] = ACTIONS(637),
    [anon_sym_DOT] = ACTIONS(637),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(637),
    [anon_sym_DOLLAR] = ACTIONS(637),
    [anon_sym_PERCENT] = ACTIONS(637),
    [anon_sym_AMP] = ACTIONS(637),
    [anon_sym_1] = ACTIONS(637),
    [anon_sym_PLUS] = ACTIONS(637),
    [anon_sym_SLASH] = ACTIONS(637),
    [anon_sym_LT] = ACTIONS(637),
    [anon_sym_GT] = ACTIONS(637),
    [anon_sym_QMARK] = ACTIONS(637),
    [anon_sym_CARET] = ACTIONS(637),
  },
  [630] = {
    [anon_sym_COMMA] = ACTIONS(1503),
    [anon_sym_RPAREN] = ACTIONS(1503),
    [sym_comment] = ACTIONS(5),
  },
  [631] = {
    [anon_sym_COMMA] = ACTIONS(573),
    [anon_sym_RPAREN] = ACTIONS(573),
    [anon_sym_EQ_GT] = ACTIONS(573),
    [sym__variable_pattern] = ACTIONS(573),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(575),
    [anon_sym_SQUOTE] = ACTIONS(573),
    [anon_sym_DQUOTE] = ACTIONS(573),
    [sym__integer_literal] = ACTIONS(573),
    [sym__octal_literal] = ACTIONS(573),
    [sym__hexidecimal_literal] = ACTIONS(573),
  },
  [632] = {
    [anon_sym_LPAREN] = ACTIONS(1321),
    [anon_sym_COMMA] = ACTIONS(1321),
    [anon_sym_RPAREN] = ACTIONS(1321),
    [anon_sym_LBRACK] = ACTIONS(1321),
    [anon_sym_RBRACK] = ACTIONS(1321),
    [anon_sym_DASH_GT] = ACTIONS(1321),
    [sym_unit_type] = ACTIONS(1321),
    [sym_list_constructor] = ACTIONS(1321),
    [sym_function_constructor] = ACTIONS(1321),
    [sym__variable_pattern] = ACTIONS(1321),
    [sym__constructor_pattern] = ACTIONS(1505),
    [sym_module_identifier] = ACTIONS(1505),
    [sym_comment] = ACTIONS(5),
  },
  [633] = {
    [anon_sym_COMMA] = ACTIONS(1323),
    [anon_sym_RPAREN] = ACTIONS(1507),
    [sym_comment] = ACTIONS(5),
  },
  [634] = {
    [anon_sym_LPAREN] = ACTIONS(1334),
    [anon_sym_COMMA] = ACTIONS(1334),
    [anon_sym_RPAREN] = ACTIONS(1334),
    [anon_sym_LBRACK] = ACTIONS(1334),
    [anon_sym_RBRACK] = ACTIONS(1334),
    [anon_sym_DASH_GT] = ACTIONS(1334),
    [sym_unit_type] = ACTIONS(1334),
    [sym_list_constructor] = ACTIONS(1334),
    [sym_function_constructor] = ACTIONS(1334),
    [sym__variable_pattern] = ACTIONS(1334),
    [sym__constructor_pattern] = ACTIONS(1509),
    [sym_module_identifier] = ACTIONS(1509),
    [sym_comment] = ACTIONS(5),
  },
  [635] = {
    [anon_sym_COMMA] = ACTIONS(1337),
    [anon_sym_RPAREN] = ACTIONS(1512),
    [sym_comment] = ACTIONS(5),
  },
  [636] = {
    [anon_sym_COMMA] = ACTIONS(1514),
    [anon_sym_RPAREN] = ACTIONS(1514),
    [sym_comment] = ACTIONS(5),
  },
  [637] = {
    [sym__layout_semicolon] = ACTIONS(1516),
    [anon_sym_SEMI] = ACTIONS(1518),
    [anon_sym_DASH_GT] = ACTIONS(1518),
    [sym_comment] = ACTIONS(5),
  },
  [638] = {
    [anon_sym_LPAREN] = ACTIONS(1353),
    [anon_sym_COMMA] = ACTIONS(1353),
    [anon_sym_RPAREN] = ACTIONS(1353),
    [anon_sym_LBRACK] = ACTIONS(1353),
    [anon_sym_RBRACK] = ACTIONS(1353),
    [anon_sym_DASH_GT] = ACTIONS(1353),
    [sym_unit_type] = ACTIONS(1353),
    [sym_list_constructor] = ACTIONS(1353),
    [sym_function_constructor] = ACTIONS(1353),
    [sym__variable_pattern] = ACTIONS(1353),
    [sym__constructor_pattern] = ACTIONS(1520),
    [sym_module_identifier] = ACTIONS(1520),
    [sym_comment] = ACTIONS(5),
  },
  [639] = {
    [sym_variable_identifier] = STATE(316),
    [aux_sym_simple_type_repeat1] = STATE(685),
    [anon_sym_COMMA] = ACTIONS(1367),
    [anon_sym_RPAREN] = ACTIONS(1367),
    [anon_sym_DASH_GT] = ACTIONS(1367),
    [sym__variable_pattern] = ACTIONS(271),
    [sym_comment] = ACTIONS(5),
  },
  [640] = {
    [sym_variable_identifier] = STATE(323),
    [anon_sym_COMMA] = ACTIONS(1367),
    [anon_sym_RPAREN] = ACTIONS(1367),
    [anon_sym_DASH_GT] = ACTIONS(1367),
    [sym__variable_pattern] = ACTIONS(271),
    [sym_comment] = ACTIONS(5),
  },
  [641] = {
    [sym_constructor_identifier] = STATE(686),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_module_identifier] = ACTIONS(1369),
    [sym_comment] = ACTIONS(5),
  },
  [642] = {
    [anon_sym_COMMA] = ACTIONS(1522),
    [anon_sym_RPAREN] = ACTIONS(1522),
    [sym_comment] = ACTIONS(5),
  },
  [643] = {
    [sym_type] = STATE(687),
    [sym__generic_type_constructor] = STATE(386),
    [sym_tupling_constructor] = STATE(382),
    [sym_tuple] = STATE(386),
    [sym_list] = STATE(386),
    [sym_parenthesized_constructor] = STATE(386),
    [sym_variable_identifier] = STATE(388),
    [sym__type_constructors] = STATE(382),
    [sym_qualified_type_constructor] = STATE(389),
    [anon_sym_LPAREN] = ACTIONS(671),
    [anon_sym_LBRACK] = ACTIONS(675),
    [sym_unit_type] = ACTIONS(677),
    [sym_list_constructor] = ACTIONS(677),
    [sym_function_constructor] = ACTIONS(677),
    [sym__variable_pattern] = ACTIONS(469),
    [sym__constructor_pattern] = ACTIONS(916),
    [sym_module_identifier] = ACTIONS(681),
    [sym_comment] = ACTIONS(5),
  },
  [644] = {
    [sym__layout_semicolon] = ACTIONS(1524),
    [anon_sym_SEMI] = ACTIONS(1526),
    [anon_sym_DASH_GT] = ACTIONS(1526),
    [sym_comment] = ACTIONS(5),
  },
  [645] = {
    [anon_sym_LPAREN] = ACTIONS(1373),
    [anon_sym_COMMA] = ACTIONS(1373),
    [anon_sym_RPAREN] = ACTIONS(1373),
    [anon_sym_LBRACK] = ACTIONS(1373),
    [anon_sym_RBRACK] = ACTIONS(1373),
    [sym_unit_type] = ACTIONS(1373),
    [sym_list_constructor] = ACTIONS(1373),
    [sym_function_constructor] = ACTIONS(1373),
    [sym__variable_pattern] = ACTIONS(1373),
    [sym__constructor_pattern] = ACTIONS(1528),
    [sym_module_identifier] = ACTIONS(1528),
    [sym_comment] = ACTIONS(5),
  },
  [646] = {
    [anon_sym_LPAREN] = ACTIONS(1530),
    [anon_sym_LBRACK] = ACTIONS(1530),
    [sym_unit_type] = ACTIONS(1530),
    [sym_list_constructor] = ACTIONS(1530),
    [sym_function_constructor] = ACTIONS(1530),
    [sym__variable_pattern] = ACTIONS(1530),
    [sym__constructor_pattern] = ACTIONS(1143),
    [sym_module_identifier] = ACTIONS(1143),
    [sym_comment] = ACTIONS(5),
  },
  [647] = {
    [anon_sym_EQ_GT] = ACTIONS(1532),
    [sym_comment] = ACTIONS(5),
  },
  [648] = {
    [anon_sym_LPAREN] = ACTIONS(1377),
    [anon_sym_COMMA] = ACTIONS(1377),
    [anon_sym_RPAREN] = ACTIONS(1377),
    [anon_sym_LBRACK] = ACTIONS(1377),
    [anon_sym_RBRACK] = ACTIONS(1377),
    [sym_unit_type] = ACTIONS(1377),
    [sym_list_constructor] = ACTIONS(1377),
    [sym_function_constructor] = ACTIONS(1377),
    [sym__variable_pattern] = ACTIONS(1377),
    [sym__constructor_pattern] = ACTIONS(1534),
    [sym_module_identifier] = ACTIONS(1534),
    [sym_comment] = ACTIONS(5),
  },
  [649] = {
    [sym_variable_identifier] = STATE(316),
    [aux_sym_simple_type_repeat1] = STATE(689),
    [anon_sym_LPAREN] = ACTIONS(1367),
    [anon_sym_LBRACK] = ACTIONS(1367),
    [anon_sym_RBRACK] = ACTIONS(1367),
    [anon_sym_DASH_GT] = ACTIONS(1367),
    [sym_unit_type] = ACTIONS(1367),
    [sym_list_constructor] = ACTIONS(1367),
    [sym_function_constructor] = ACTIONS(1367),
    [sym__variable_pattern] = ACTIONS(683),
    [sym__constructor_pattern] = ACTIONS(1536),
    [sym_module_identifier] = ACTIONS(1536),
    [sym_comment] = ACTIONS(5),
  },
  [650] = {
    [sym_variable_identifier] = STATE(323),
    [anon_sym_LPAREN] = ACTIONS(1367),
    [anon_sym_LBRACK] = ACTIONS(1367),
    [anon_sym_RBRACK] = ACTIONS(1367),
    [anon_sym_DASH_GT] = ACTIONS(1367),
    [sym_unit_type] = ACTIONS(1367),
    [sym_list_constructor] = ACTIONS(1367),
    [sym_function_constructor] = ACTIONS(1367),
    [sym__variable_pattern] = ACTIONS(683),
    [sym__constructor_pattern] = ACTIONS(1536),
    [sym_module_identifier] = ACTIONS(1536),
    [sym_comment] = ACTIONS(5),
  },
  [651] = {
    [sym_constructor_identifier] = STATE(690),
    [sym__constructor_pattern] = ACTIONS(1057),
    [sym_module_identifier] = ACTIONS(1369),
    [sym_comment] = ACTIONS(5),
  },
  [652] = {
    [sym_variable_identifier] = STATE(549),
    [sym__layout_semicolon] = ACTIONS(1538),
    [anon_sym_SEMI] = ACTIONS(1540),
    [anon_sym_DASH_GT] = ACTIONS(1540),
    [sym__variable_pattern] = ACTIONS(918),
    [sym_comment] = ACTIONS(5),
  },
  [653] = {
    [sym__constructor_pattern] = ACTIONS(1542),
    [anon_sym_DOT] = ACTIONS(1544),
    [sym_comment] = ACTIONS(5),
  },
  [654] = {
    [sym_variable_identifier] = STATE(398),
    [aux_sym_simple_type_repeat1] = STATE(691),
    [sym__layout_semicolon] = ACTIONS(1538),
    [anon_sym_SEMI] = ACTIONS(1540),
    [anon_sym_DASH_GT] = ACTIONS(1540),
    [sym__variable_pattern] = ACTIONS(918),
    [sym_comment] = ACTIONS(5),
  },
  [655] = {
    [anon_sym_COMMA] = ACTIONS(1546),
    [anon_sym_RPAREN] = ACTIONS(1546),
    [sym_comment] = ACTIONS(5),
  },
  [656] = {
    [anon_sym_COMMA] = ACTIONS(1548),
    [anon_sym_RPAREN] = ACTIONS(1548),
    [sym_comment] = ACTIONS(5),
  },
  [657] = {
    [anon_sym_COMMA] = ACTIONS(777),
    [anon_sym_RPAREN] = ACTIONS(1550),
    [sym_comment] = ACTIONS(5),
  },
  [658] = {
    [sym__layout_close_brace] = ACTIONS(723),
    [anon_sym_import] = ACTIONS(725),
    [anon_sym_foreign] = ACTIONS(725),
    [anon_sym_default] = ACTIONS(725),
    [anon_sym_class] = ACTIONS(725),
    [anon_sym_instance] = ACTIONS(725),
    [anon_sym_infixl] = ACTIONS(725),
    [anon_sym_infixr] = ACTIONS(725),
    [anon_sym_infix] = ACTIONS(725),
    [anon_sym_data] = ACTIONS(725),
    [anon_sym_newtype] = ACTIONS(725),
    [anon_sym_type] = ACTIONS(725),
    [sym__variable_pattern] = ACTIONS(727),
    [sym__constructor_pattern] = ACTIONS(727),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(727),
    [anon_sym_SQUOTE] = ACTIONS(725),
    [anon_sym_DQUOTE] = ACTIONS(725),
    [sym__integer_literal] = ACTIONS(725),
    [sym__octal_literal] = ACTIONS(725),
    [sym__hexidecimal_literal] = ACTIONS(725),
  },
  [659] = {
    [aux_sym_import_specification_repeat1] = STATE(694),
    [anon_sym_COMMA] = ACTIONS(759),
    [anon_sym_RPAREN] = ACTIONS(1552),
    [sym_comment] = ACTIONS(5),
  },
  [660] = {
    [anon_sym_COMMA] = ACTIONS(777),
    [anon_sym_RPAREN] = ACTIONS(1554),
    [sym_comment] = ACTIONS(5),
  },
  [661] = {
    [sym__identifier] = STATE(697),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [anon_sym_DOT_DOT] = ACTIONS(1556),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [662] = {
    [anon_sym_LPAREN] = ACTIONS(1558),
    [anon_sym_COMMA] = ACTIONS(1560),
    [anon_sym_RPAREN] = ACTIONS(1560),
    [sym_comment] = ACTIONS(5),
  },
  [663] = {
    [anon_sym_RPAREN] = ACTIONS(1554),
    [sym_comment] = ACTIONS(5),
  },
  [664] = {
    [aux_sym_export_repeat1] = STATE(699),
    [anon_sym_COMMA] = ACTIONS(447),
    [anon_sym_RPAREN] = ACTIONS(1554),
    [sym_comment] = ACTIONS(5),
  },
  [665] = {
    [sym__layout_semicolon] = ACTIONS(1562),
    [anon_sym_SEMI] = ACTIONS(1564),
    [sym_comment] = ACTIONS(5),
  },
  [666] = {
    [anon_sym_RBRACE] = ACTIONS(1566),
    [anon_sym_COMMA] = ACTIONS(1566),
    [sym_comment] = ACTIONS(5),
  },
  [667] = {
    [anon_sym_COMMA] = ACTIONS(1568),
    [anon_sym_COLON_COLON] = ACTIONS(1568),
    [sym_comment] = ACTIONS(5),
  },
  [668] = {
    [anon_sym_RBRACE] = ACTIONS(1570),
    [anon_sym_COMMA] = ACTIONS(1570),
    [sym_comment] = ACTIONS(5),
  },
  [669] = {
    [anon_sym_COMMA] = ACTIONS(573),
    [anon_sym_where] = ACTIONS(573),
    [anon_sym_EQ_GT] = ACTIONS(573),
    [sym_comment] = ACTIONS(5),
  },
  [670] = {
    [anon_sym_COMMA] = ACTIONS(605),
    [anon_sym_where] = ACTIONS(605),
    [anon_sym_EQ_GT] = ACTIONS(605),
    [sym_comment] = ACTIONS(5),
  },
  [671] = {
    [sym__layout_semicolon] = ACTIONS(1457),
    [anon_sym_SEMI] = ACTIONS(1423),
    [anon_sym_EQ] = ACTIONS(1423),
    [anon_sym_deriving] = ACTIONS(1423),
    [sym__constructor_pattern] = ACTIONS(1459),
    [sym_comment] = ACTIONS(5),
  },
  [672] = {
    [sym__layout_semicolon] = ACTIONS(1461),
    [anon_sym_SEMI] = ACTIONS(1429),
    [anon_sym_COMMA] = ACTIONS(1429),
    [anon_sym_EQ] = ACTIONS(1429),
    [anon_sym_deriving] = ACTIONS(1429),
    [sym__constructor_pattern] = ACTIONS(1463),
    [sym_comment] = ACTIONS(5),
  },
  [673] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(1572),
  },
  [674] = {
    [sym__layout_semicolon] = ACTIONS(319),
    [anon_sym_SEMI] = ACTIONS(321),
    [anon_sym_COMMA] = ACTIONS(321),
    [anon_sym_EQ] = ACTIONS(321),
    [anon_sym_deriving] = ACTIONS(321),
    [sym__constructor_pattern] = ACTIONS(323),
    [sym_comment] = ACTIONS(5),
  },
  [675] = {
    [sym__gap] = STATE(194),
    [sym__graphic] = STATE(194),
    [sym__small] = STATE(74),
    [sym__large] = STATE(74),
    [sym__symbol] = STATE(74),
    [sym__special] = STATE(74),
    [sym__escape] = STATE(194),
    [anon_sym_SEMI] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(107),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_RPAREN] = ACTIONS(107),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_TILDE] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_RBRACK] = ACTIONS(107),
    [anon_sym_DASH] = ACTIONS(109),
    [anon_sym_AT] = ACTIONS(109),
    [anon_sym__] = ACTIONS(111),
    [anon_sym_BQUOTE] = ACTIONS(107),
    [anon_sym_COLON] = ACTIONS(109),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_BANG] = ACTIONS(109),
    [anon_sym_DOT] = ACTIONS(109),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(343),
    [anon_sym_DQUOTE] = ACTIONS(1574),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(117),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(111),
    [sym__ascii_large] = ACTIONS(119),
    [anon_sym_POUND] = ACTIONS(109),
    [anon_sym_DOLLAR] = ACTIONS(109),
    [anon_sym_PERCENT] = ACTIONS(109),
    [anon_sym_AMP] = ACTIONS(109),
    [anon_sym_1] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(109),
    [anon_sym_SLASH] = ACTIONS(109),
    [anon_sym_LT] = ACTIONS(109),
    [anon_sym_GT] = ACTIONS(109),
    [anon_sym_QMARK] = ACTIONS(109),
    [anon_sym_CARET] = ACTIONS(109),
    [anon_sym_BSLASH] = ACTIONS(121),
    [sym__space] = ACTIONS(123),
    [sym__newline] = ACTIONS(123),
    [sym__tab] = ACTIONS(123),
    [sym__vertical_tab] = ACTIONS(123),
  },
  [676] = {
    [sym__layout_semicolon] = ACTIONS(1576),
    [anon_sym_SEMI] = ACTIONS(1578),
    [sym_comment] = ACTIONS(5),
  },
  [677] = {
    [sym__layout_semicolon] = ACTIONS(571),
    [anon_sym_SEMI] = ACTIONS(573),
    [anon_sym_COMMA] = ACTIONS(573),
    [anon_sym_EQ] = ACTIONS(573),
    [anon_sym_EQ_GT] = ACTIONS(573),
    [anon_sym_PIPE] = ACTIONS(573),
    [anon_sym_deriving] = ACTIONS(573),
    [sym__constructor_pattern] = ACTIONS(575),
    [sym_comment] = ACTIONS(5),
  },
  [678] = {
    [sym__layout_semicolon] = ACTIONS(603),
    [anon_sym_SEMI] = ACTIONS(605),
    [anon_sym_COMMA] = ACTIONS(605),
    [anon_sym_EQ] = ACTIONS(605),
    [anon_sym_EQ_GT] = ACTIONS(605),
    [anon_sym_PIPE] = ACTIONS(605),
    [anon_sym_deriving] = ACTIONS(605),
    [sym__constructor_pattern] = ACTIONS(607),
    [sym_comment] = ACTIONS(5),
  },
  [679] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(1580),
  },
  [680] = {
    [sym__layout_semicolon] = ACTIONS(319),
    [anon_sym_SEMI] = ACTIONS(321),
    [sym__variable_pattern] = ACTIONS(321),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(323),
    [anon_sym_SQUOTE] = ACTIONS(321),
    [anon_sym_DQUOTE] = ACTIONS(321),
    [sym__integer_literal] = ACTIONS(321),
    [sym__octal_literal] = ACTIONS(321),
    [sym__hexidecimal_literal] = ACTIONS(321),
  },
  [681] = {
    [sym__gap] = STATE(194),
    [sym__graphic] = STATE(194),
    [sym__small] = STATE(74),
    [sym__large] = STATE(74),
    [sym__symbol] = STATE(74),
    [sym__special] = STATE(74),
    [sym__escape] = STATE(194),
    [anon_sym_SEMI] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(107),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_RPAREN] = ACTIONS(107),
    [anon_sym_EQ] = ACTIONS(109),
    [anon_sym_TILDE] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_RBRACK] = ACTIONS(107),
    [anon_sym_DASH] = ACTIONS(109),
    [anon_sym_AT] = ACTIONS(109),
    [anon_sym__] = ACTIONS(111),
    [anon_sym_BQUOTE] = ACTIONS(107),
    [anon_sym_COLON] = ACTIONS(109),
    [anon_sym_PIPE] = ACTIONS(109),
    [anon_sym_BANG] = ACTIONS(109),
    [anon_sym_DOT] = ACTIONS(109),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(343),
    [anon_sym_DQUOTE] = ACTIONS(1582),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(117),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(111),
    [sym__ascii_large] = ACTIONS(119),
    [anon_sym_POUND] = ACTIONS(109),
    [anon_sym_DOLLAR] = ACTIONS(109),
    [anon_sym_PERCENT] = ACTIONS(109),
    [anon_sym_AMP] = ACTIONS(109),
    [anon_sym_1] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(109),
    [anon_sym_SLASH] = ACTIONS(109),
    [anon_sym_LT] = ACTIONS(109),
    [anon_sym_GT] = ACTIONS(109),
    [anon_sym_QMARK] = ACTIONS(109),
    [anon_sym_CARET] = ACTIONS(109),
    [anon_sym_BSLASH] = ACTIONS(121),
    [sym__space] = ACTIONS(123),
    [sym__newline] = ACTIONS(123),
    [sym__tab] = ACTIONS(123),
    [sym__vertical_tab] = ACTIONS(123),
  },
  [682] = {
    [sym__layout_semicolon] = ACTIONS(1277),
    [anon_sym_SEMI] = ACTIONS(1279),
    [sym__variable_pattern] = ACTIONS(1279),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1281),
    [anon_sym_SQUOTE] = ACTIONS(1279),
    [anon_sym_DQUOTE] = ACTIONS(1279),
    [sym__integer_literal] = ACTIONS(1279),
    [sym__octal_literal] = ACTIONS(1279),
    [sym__hexidecimal_literal] = ACTIONS(1279),
  },
  [683] = {
    [anon_sym_LPAREN] = ACTIONS(1518),
    [anon_sym_COMMA] = ACTIONS(1518),
    [anon_sym_RPAREN] = ACTIONS(1518),
    [anon_sym_LBRACK] = ACTIONS(1518),
    [anon_sym_RBRACK] = ACTIONS(1518),
    [anon_sym_DASH_GT] = ACTIONS(1518),
    [sym_unit_type] = ACTIONS(1518),
    [sym_list_constructor] = ACTIONS(1518),
    [sym_function_constructor] = ACTIONS(1518),
    [sym__variable_pattern] = ACTIONS(1518),
    [sym__constructor_pattern] = ACTIONS(1584),
    [sym_module_identifier] = ACTIONS(1584),
    [sym_comment] = ACTIONS(5),
  },
  [684] = {
    [anon_sym_LPAREN] = ACTIONS(1526),
    [anon_sym_COMMA] = ACTIONS(1526),
    [anon_sym_RPAREN] = ACTIONS(1526),
    [anon_sym_LBRACK] = ACTIONS(1526),
    [anon_sym_RBRACK] = ACTIONS(1526),
    [anon_sym_DASH_GT] = ACTIONS(1526),
    [sym_unit_type] = ACTIONS(1526),
    [sym_list_constructor] = ACTIONS(1526),
    [sym_function_constructor] = ACTIONS(1526),
    [sym__variable_pattern] = ACTIONS(1526),
    [sym__constructor_pattern] = ACTIONS(1586),
    [sym_module_identifier] = ACTIONS(1586),
    [sym_comment] = ACTIONS(5),
  },
  [685] = {
    [sym_variable_identifier] = STATE(323),
    [anon_sym_COMMA] = ACTIONS(1540),
    [anon_sym_RPAREN] = ACTIONS(1540),
    [anon_sym_DASH_GT] = ACTIONS(1540),
    [sym__variable_pattern] = ACTIONS(271),
    [sym_comment] = ACTIONS(5),
  },
  [686] = {
    [sym_variable_identifier] = STATE(316),
    [aux_sym_simple_type_repeat1] = STATE(704),
    [anon_sym_COMMA] = ACTIONS(1540),
    [anon_sym_RPAREN] = ACTIONS(1540),
    [anon_sym_DASH_GT] = ACTIONS(1540),
    [sym__variable_pattern] = ACTIONS(271),
    [sym_comment] = ACTIONS(5),
  },
  [687] = {
    [anon_sym_COMMA] = ACTIONS(1588),
    [anon_sym_RPAREN] = ACTIONS(1588),
    [sym_comment] = ACTIONS(5),
  },
  [688] = {
    [anon_sym_LPAREN] = ACTIONS(1590),
    [anon_sym_LBRACK] = ACTIONS(1590),
    [sym_unit_type] = ACTIONS(1590),
    [sym_list_constructor] = ACTIONS(1590),
    [sym_function_constructor] = ACTIONS(1590),
    [sym__variable_pattern] = ACTIONS(1590),
    [sym__constructor_pattern] = ACTIONS(1417),
    [sym_module_identifier] = ACTIONS(1417),
    [sym_comment] = ACTIONS(5),
  },
  [689] = {
    [sym_variable_identifier] = STATE(323),
    [anon_sym_LPAREN] = ACTIONS(1540),
    [anon_sym_LBRACK] = ACTIONS(1540),
    [anon_sym_RBRACK] = ACTIONS(1540),
    [anon_sym_DASH_GT] = ACTIONS(1540),
    [sym_unit_type] = ACTIONS(1540),
    [sym_list_constructor] = ACTIONS(1540),
    [sym_function_constructor] = ACTIONS(1540),
    [sym__variable_pattern] = ACTIONS(683),
    [sym__constructor_pattern] = ACTIONS(1592),
    [sym_module_identifier] = ACTIONS(1592),
    [sym_comment] = ACTIONS(5),
  },
  [690] = {
    [sym_variable_identifier] = STATE(316),
    [aux_sym_simple_type_repeat1] = STATE(705),
    [anon_sym_LPAREN] = ACTIONS(1540),
    [anon_sym_LBRACK] = ACTIONS(1540),
    [anon_sym_RBRACK] = ACTIONS(1540),
    [anon_sym_DASH_GT] = ACTIONS(1540),
    [sym_unit_type] = ACTIONS(1540),
    [sym_list_constructor] = ACTIONS(1540),
    [sym_function_constructor] = ACTIONS(1540),
    [sym__variable_pattern] = ACTIONS(683),
    [sym__constructor_pattern] = ACTIONS(1592),
    [sym_module_identifier] = ACTIONS(1592),
    [sym_comment] = ACTIONS(5),
  },
  [691] = {
    [sym_variable_identifier] = STATE(549),
    [sym__layout_semicolon] = ACTIONS(1594),
    [anon_sym_SEMI] = ACTIONS(1596),
    [anon_sym_DASH_GT] = ACTIONS(1596),
    [sym__variable_pattern] = ACTIONS(918),
    [sym_comment] = ACTIONS(5),
  },
  [692] = {
    [anon_sym_COMMA] = ACTIONS(1598),
    [anon_sym_RPAREN] = ACTIONS(1598),
    [sym_comment] = ACTIONS(5),
  },
  [693] = {
    [sym__layout_semicolon] = ACTIONS(1600),
    [anon_sym_SEMI] = ACTIONS(1602),
    [sym_comment] = ACTIONS(5),
  },
  [694] = {
    [anon_sym_COMMA] = ACTIONS(1123),
    [anon_sym_RPAREN] = ACTIONS(1604),
    [sym_comment] = ACTIONS(5),
  },
  [695] = {
    [aux_sym_import_specification_repeat1] = STATE(707),
    [anon_sym_COMMA] = ACTIONS(759),
    [anon_sym_RPAREN] = ACTIONS(1604),
    [sym_comment] = ACTIONS(5),
  },
  [696] = {
    [anon_sym_RPAREN] = ACTIONS(1606),
    [sym_comment] = ACTIONS(5),
  },
  [697] = {
    [aux_sym_export_repeat1] = STATE(709),
    [anon_sym_COMMA] = ACTIONS(447),
    [anon_sym_RPAREN] = ACTIONS(1606),
    [sym_comment] = ACTIONS(5),
  },
  [698] = {
    [sym__identifier] = STATE(711),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [anon_sym_DOT_DOT] = ACTIONS(1608),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [699] = {
    [anon_sym_COMMA] = ACTIONS(777),
    [anon_sym_RPAREN] = ACTIONS(1610),
    [sym_comment] = ACTIONS(5),
  },
  [700] = {
    [sym__layout_semicolon] = ACTIONS(571),
    [anon_sym_SEMI] = ACTIONS(573),
    [anon_sym_COMMA] = ACTIONS(573),
    [anon_sym_EQ] = ACTIONS(573),
    [anon_sym_deriving] = ACTIONS(573),
    [sym__constructor_pattern] = ACTIONS(575),
    [sym_comment] = ACTIONS(5),
  },
  [701] = {
    [sym__layout_semicolon] = ACTIONS(603),
    [anon_sym_SEMI] = ACTIONS(605),
    [anon_sym_COMMA] = ACTIONS(605),
    [anon_sym_EQ] = ACTIONS(605),
    [anon_sym_deriving] = ACTIONS(605),
    [sym__constructor_pattern] = ACTIONS(607),
    [sym_comment] = ACTIONS(5),
  },
  [702] = {
    [sym__layout_semicolon] = ACTIONS(571),
    [anon_sym_SEMI] = ACTIONS(573),
    [sym__variable_pattern] = ACTIONS(573),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(575),
    [anon_sym_SQUOTE] = ACTIONS(573),
    [anon_sym_DQUOTE] = ACTIONS(573),
    [sym__integer_literal] = ACTIONS(573),
    [sym__octal_literal] = ACTIONS(573),
    [sym__hexidecimal_literal] = ACTIONS(573),
  },
  [703] = {
    [sym__layout_semicolon] = ACTIONS(603),
    [anon_sym_SEMI] = ACTIONS(605),
    [sym__variable_pattern] = ACTIONS(605),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(607),
    [anon_sym_SQUOTE] = ACTIONS(605),
    [anon_sym_DQUOTE] = ACTIONS(605),
    [sym__integer_literal] = ACTIONS(605),
    [sym__octal_literal] = ACTIONS(605),
    [sym__hexidecimal_literal] = ACTIONS(605),
  },
  [704] = {
    [sym_variable_identifier] = STATE(323),
    [anon_sym_COMMA] = ACTIONS(1596),
    [anon_sym_RPAREN] = ACTIONS(1596),
    [anon_sym_DASH_GT] = ACTIONS(1596),
    [sym__variable_pattern] = ACTIONS(271),
    [sym_comment] = ACTIONS(5),
  },
  [705] = {
    [sym_variable_identifier] = STATE(323),
    [anon_sym_LPAREN] = ACTIONS(1596),
    [anon_sym_LBRACK] = ACTIONS(1596),
    [anon_sym_RBRACK] = ACTIONS(1596),
    [anon_sym_DASH_GT] = ACTIONS(1596),
    [sym_unit_type] = ACTIONS(1596),
    [sym_list_constructor] = ACTIONS(1596),
    [sym_function_constructor] = ACTIONS(1596),
    [sym__variable_pattern] = ACTIONS(683),
    [sym__constructor_pattern] = ACTIONS(1612),
    [sym_module_identifier] = ACTIONS(1612),
    [sym_comment] = ACTIONS(5),
  },
  [706] = {
    [sym__layout_semicolon] = ACTIONS(1614),
    [anon_sym_SEMI] = ACTIONS(1616),
    [sym_comment] = ACTIONS(5),
  },
  [707] = {
    [anon_sym_COMMA] = ACTIONS(1123),
    [anon_sym_RPAREN] = ACTIONS(1618),
    [sym_comment] = ACTIONS(5),
  },
  [708] = {
    [anon_sym_COMMA] = ACTIONS(1620),
    [anon_sym_RPAREN] = ACTIONS(1620),
    [sym_comment] = ACTIONS(5),
  },
  [709] = {
    [anon_sym_COMMA] = ACTIONS(777),
    [anon_sym_RPAREN] = ACTIONS(1622),
    [sym_comment] = ACTIONS(5),
  },
  [710] = {
    [anon_sym_RPAREN] = ACTIONS(1622),
    [sym_comment] = ACTIONS(5),
  },
  [711] = {
    [aux_sym_export_repeat1] = STATE(715),
    [anon_sym_COMMA] = ACTIONS(447),
    [anon_sym_RPAREN] = ACTIONS(1622),
    [sym_comment] = ACTIONS(5),
  },
  [712] = {
    [aux_sym_import_specification_repeat1] = STATE(716),
    [anon_sym_COMMA] = ACTIONS(759),
    [anon_sym_RPAREN] = ACTIONS(1618),
    [sym_comment] = ACTIONS(5),
  },
  [713] = {
    [sym__layout_semicolon] = ACTIONS(1624),
    [anon_sym_SEMI] = ACTIONS(1626),
    [sym_comment] = ACTIONS(5),
  },
  [714] = {
    [anon_sym_COMMA] = ACTIONS(1628),
    [anon_sym_RPAREN] = ACTIONS(1628),
    [sym_comment] = ACTIONS(5),
  },
  [715] = {
    [anon_sym_COMMA] = ACTIONS(777),
    [anon_sym_RPAREN] = ACTIONS(1630),
    [sym_comment] = ACTIONS(5),
  },
  [716] = {
    [anon_sym_COMMA] = ACTIONS(1123),
    [anon_sym_RPAREN] = ACTIONS(1632),
    [sym_comment] = ACTIONS(5),
  },
  [717] = {
    [anon_sym_COMMA] = ACTIONS(1634),
    [anon_sym_RPAREN] = ACTIONS(1634),
    [sym_comment] = ACTIONS(5),
  },
  [718] = {
    [sym__layout_semicolon] = ACTIONS(1636),
    [anon_sym_SEMI] = ACTIONS(1638),
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
  [71] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(58),
  [73] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_identifier, 1),
  [75] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_identifier, 1),
  [77] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_identifier, 1),
  [79] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_identifier, 1, .fragile = true),
  [81] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_identifier, 1, .fragile = true),
  [83] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(61),
  [85] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [87] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__literal, 1),
  [89] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [91] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(62),
  [93] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(63),
  [95] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(64),
  [97] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [99] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(65),
  [101] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(66),
  [103] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(67),
  [105] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(68),
  [107] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(69),
  [109] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(70),
  [111] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(71),
  [113] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(72),
  [115] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(73),
  [117] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(74),
  [119] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(75),
  [121] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(76),
  [123] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(77),
  [125] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer, 1),
  [127] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_integer, 1),
  [129] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_integer, 1),
  [131] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [133] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__declaration, 1),
  [135] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__declaration, 1),
  [137] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(79),
  [139] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(79),
  [141] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(80),
  [143] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(82),
  [145] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_head, 1),
  [147] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(83),
  [149] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(84),
  [151] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(85),
  [153] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(86),
  [155] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(87),
  [157] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(88),
  [159] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(89),
  [161] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(90),
  [163] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(91),
  [165] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__variable, 1, .fragile = true),
  [167] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__variable, 1, .fragile = true),
  [169] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(98),
  [171] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [173] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__identifier, 1),
  [175] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [177] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 1),
  [179] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(100),
  [181] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(101),
  [183] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(104),
  [185] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 2),
  [187] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 2),
  [189] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(105),
  [191] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(106),
  [193] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(107),
  [195] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreign_import, 1),
  [197] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(109),
  [199] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(111),
  [201] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(87),
  [203] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_identifier, 1, .fragile = true),
  [205] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(117),
  [207] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(118),
  [209] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(120),
  [211] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(121),
  [213] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor, 1),
  [215] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(122),
  [217] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(123),
  [219] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__variable_symbol, 1),
  [221] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__variable_symbol, 1),
  [223] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 1),
  [225] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_symbol, 1),
  [227] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(133),
  [229] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fixity, 2),
  [231] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 2),
  [233] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(136),
  [235] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__op, 1),
  [237] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__op, 1),
  [239] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 1, .fragile = true),
  [241] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_symbol, 1, .fragile = true),
  [243] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(141),
  [245] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 2),
  [247] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 2),
  [249] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(144),
  [251] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(145),
  [253] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor, 1),
  [255] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(150),
  [257] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(151),
  [259] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(152),
  [261] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(153),
  [263] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor, 1),
  [265] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(161),
  [267] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_simple_type, 1, .alias_sequence_id = 1),
  [269] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(162),
  [271] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(163),
  [273] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(170),
  [275] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(171),
  [277] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(172),
  [279] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(173),
  [281] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(174),
  [283] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_qualified_variable_identifier, 2),
  [285] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_qualified_variable_identifier, 2),
  [287] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__special, 1),
  [289] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__symbol, 1),
  [291] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__small, 1),
  [293] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(181),
  [295] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__graphic, 1),
  [297] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__large, 1),
  [299] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(182),
  [301] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(183),
  [303] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(184),
  [305] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(185),
  [307] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(186),
  [309] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(187),
  [311] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__special, 1),
  [313] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__symbol, 1),
  [315] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__small, 1),
  [317] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 1),
  [319] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [321] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 2),
  [323] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [325] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__graphic, 1),
  [327] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__large, 1),
  [329] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(188),
  [331] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(189),
  [333] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(190),
  [335] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(191),
  [337] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(192),
  [339] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(193),
  [341] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__gap, 1),
  [343] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(194),
  [345] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(195),
  [347] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
  [349] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 2),
  [351] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
  [353] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_body, 1),
  [355] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_body, 1),
  [357] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(196),
  [359] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(197),
  [361] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(198),
  [363] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_declaration, 2),
  [365] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_declaration, 2),
  [367] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(206),
  [369] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(207),
  [371] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(208),
  [373] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(215),
  [375] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(216),
  [377] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_wildcard, 1),
  [379] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_wildcard, 1),
  [381] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__function_pattern, 1),
  [383] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__function_pattern, 1),
  [385] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(219),
  [387] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(220),
  [389] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_function_head_repeat1, 1),
  [391] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_function_head_repeat1, 1),
  [393] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(222),
  [395] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(223),
  [397] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_head, 2),
  [399] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(225),
  [401] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(226),
  [403] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(227),
  [405] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(12),
  [407] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(228),
  [409] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(229),
  [411] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(237),
  [413] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(237),
  [415] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(238),
  [417] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(241),
  [419] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(242),
  [421] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 3),
  [423] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 3),
  [425] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 3),
  [427] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(245),
  [429] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(247),
  [431] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(249),
  [433] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(250),
  [435] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_calling_convention, 1),
  [437] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_calling_convention, 1),
  [439] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(251),
  [441] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(252),
  [443] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default, 3),
  [445] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_default, 3),
  [447] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(257),
  [449] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(258),
  [451] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(260),
  [453] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(261),
  [455] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(266),
  [457] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(267),
  [459] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(270),
  [461] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(271),
  [463] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 2),
  [465] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 3),
  [467] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 3),
  [469] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(123),
  [471] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor, 2),
  [473] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(278),
  [475] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_labels, 1),
  [477] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat1, 1, .fragile = true),
  [479] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 1, .fragile = true),
  [481] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(280),
  [483] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class_instance, 3),
  [485] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class_instance, 3),
  [487] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(283),
  [489] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__constructor_symbol, 1),
  [491] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__constructor_symbol, 1),
  [493] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_symbol_repeat1, 1),
  [495] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_symbol_repeat1, 1),
  [497] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 2),
  [499] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_symbol, 2),
  [501] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fixity, 3),
  [503] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 3),
  [505] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(286),
  [507] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 1),
  [509] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_variable_symbol_repeat1, 1),
  [511] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 2, .fragile = true),
  [513] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_symbol, 2, .fragile = true),
  [515] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 3),
  [517] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 3),
  [519] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(289),
  [521] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(292),
  [523] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(293),
  [525] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(294),
  [527] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(295),
  [529] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(302),
  [531] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructors, 1),
  [533] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructors, 1),
  [535] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(304),
  [537] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(153),
  [539] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor, 2),
  [541] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor, 2),
  [543] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_labels, 1),
  [545] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(311),
  [547] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_labels, 1),
  [549] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 1, .fragile = true),
  [551] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat1, 1, .fragile = true), SHIFT(313),
  [554] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(315),
  [556] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(319),
  [558] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(321),
  [560] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_simple_type, 2, .alias_sequence_id = 2),
  [562] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(324),
  [564] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(325),
  [566] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(330),
  [568] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat1, 1, .fragile = true), SHIFT(332),
  [571] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [573] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_char, 3),
  [575] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [577] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__char_escape, 1),
  [579] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__escape, 2),
  [581] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(334),
  [583] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(336),
  [585] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(338),
  [587] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__ascii, 1),
  [589] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__char_escape, 1),
  [591] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 2),
  [593] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(340),
  [595] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(342),
  [597] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(344),
  [599] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 1),
  [601] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 2),
  [603] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [605] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 3),
  [607] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [609] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(346),
  [611] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(347),
  [613] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_body, 2),
  [615] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_body, 2),
  [617] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [619] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
  [621] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [623] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__variable, 1, .fragile = true),
  [625] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_function_body_repeat1, 1),
  [627] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_function_body_repeat1, 1),
  [629] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_function_body_repeat1, 1),
  [631] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(354),
  [633] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(355),
  [635] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(356),
  [637] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(357),
  [639] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(358),
  [641] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(359),
  [643] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__pattern, 1),
  [645] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(364),
  [647] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(365),
  [649] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(366),
  [651] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(367),
  [653] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_irrefutable_pattern, 2),
  [655] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_irrefutable_pattern, 2),
  [657] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(370),
  [659] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(371),
  [661] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(372),
  [663] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(373),
  [665] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(375),
  [667] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_function_head_repeat1, 2),
  [669] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_function_head_repeat1, 2),
  [671] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(379),
  [673] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(380),
  [675] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(381),
  [677] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(382),
  [679] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(383),
  [681] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(384),
  [683] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(390),
  [685] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(391),
  [687] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(392),
  [689] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__generic_type_constructor, 1),
  [691] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__generic_type_constructor, 1),
  [693] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 1, .fragile = true, .alias_sequence_id = 1),
  [695] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type_constructors, 1, .fragile = true, .alias_sequence_id = 1),
  [697] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(400),
  [699] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(401),
  [701] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_signature, 3),
  [703] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_signature, 3),
  [705] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type, 1),
  [707] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type, 1),
  [709] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(404),
  [711] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(406),
  [713] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type, 1, .alias_sequence_id = 3),
  [715] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type, 1, .alias_sequence_id = 3),
  [717] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(407),
  [719] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 1, .fragile = true),
  [721] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type_constructors, 1, .fragile = true),
  [723] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 3),
  [725] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 3),
  [727] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 3),
  [729] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 2),
  [731] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(408),
  [733] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(409),
  [735] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(411),
  [737] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 1),
  [739] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(412),
  [741] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(412),
  [743] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_where, 2),
  [745] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 4),
  [747] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(416),
  [749] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 4),
  [751] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 4),
  [753] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 2),
  [755] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 2),
  [757] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(417),
  [759] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(418),
  [761] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(419),
  [763] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_safety, 1),
  [765] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_safety, 1),
  [767] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(423),
  [769] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreign, 4),
  [771] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreign, 4),
  [773] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default, 4),
  [775] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_default, 4),
  [777] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(428),
  [779] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(429),
  [781] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(431),
  [783] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(432),
  [785] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(433),
  [787] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(436),
  [789] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 4),
  [791] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 4),
  [793] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(437),
  [795] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(437),
  [797] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_where, 2),
  [799] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(440),
  [801] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(441),
  [803] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(443),
  [805] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(444),
  [807] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat2, 1),
  [809] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat2, 1),
  [811] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(446),
  [813] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_strict, 2),
  [815] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_strict, 2),
  [817] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(450),
  [819] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_labels, 2),
  [821] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(451),
  [823] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(452),
  [825] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(453),
  [827] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(454),
  [829] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat1, 2),
  [831] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 2),
  [833] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class_instance, 4),
  [835] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class_instance, 4),
  [837] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__op, 3),
  [839] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__op, 3),
  [841] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_symbol_repeat1, 2),
  [843] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_symbol_repeat1, 2),
  [845] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_fixity_repeat1, 2),
  [847] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fixity_repeat1, 2),
  [849] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fixity, 4),
  [851] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 4),
  [853] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 2),
  [855] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_variable_symbol_repeat1, 2),
  [857] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 4),
  [859] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 4),
  [861] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(295),
  [863] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(462),
  [865] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat1, 1, .fragile = true), SHIFT(464),
  [868] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 2),
  [870] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 2),
  [872] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructors, 2),
  [874] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructors, 2),
  [876] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(468),
  [878] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(313),
  [880] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(469),
  [882] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(471),
  [884] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_strict, 2),
  [886] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_labels, 2),
  [888] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(474),
  [890] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_labels, 2),
  [892] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(475),
  [894] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(476),
  [896] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(477),
  [898] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(478),
  [900] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 2),
  [902] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_simple_type_repeat1, 1, .fragile = true),
  [904] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_type_repeat1, 1, .fragile = true),
  [906] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 4),
  [908] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 4),
  [910] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(483),
  [912] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_simple_type_repeat1, 2),
  [914] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_type_repeat1, 2),
  [916] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(484),
  [918] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(397),
  [920] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_synonym, 4),
  [922] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_synonym, 4),
  [924] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(485),
  [926] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(487),
  [928] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(490),
  [930] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__cntrl, 1),
  [932] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__ascii, 2),
  [934] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat1, 1),
  [936] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__escape, 3),
  [938] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(492),
  [940] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat2, 1),
  [942] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(493),
  [944] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__cntrl, 1),
  [946] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 2),
  [948] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 1),
  [950] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 3),
  [952] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(494),
  [954] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 1),
  [956] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(495),
  [958] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(496),
  [960] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(497),
  [962] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(496),
  [964] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_do_expression, 2),
  [966] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_do_expression, 2),
  [968] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_expression, 2),
  [970] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_variable_identifier, 2),
  [972] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_general_constructor_repeat1, 1),
  [974] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_general_constructor_repeat1, 1),
  [976] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_general_constructor_repeat1, 1),
  [978] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_general_constructor, 2),
  [980] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_general_constructor, 2),
  [982] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_general_constructor, 2),
  [984] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_body, 3),
  [986] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_body, 3),
  [988] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_function_body_repeat1, 2),
  [990] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_function_body_repeat1, 2),
  [992] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_function_body_repeat1, 2),
  [994] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parenthesized_pattern, 3),
  [996] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parenthesized_pattern, 3),
  [998] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__variable_symbol, 1),
  [1000] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(510),
  [1002] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 1),
  [1004] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__op, 1),
  [1006] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 1, .fragile = true),
  [1008] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(517),
  [1010] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(518),
  [1012] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(519),
  [1014] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list_pattern, 3),
  [1016] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_list_pattern, 3),
  [1018] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_as_pattern, 3),
  [1020] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_as_pattern, 3),
  [1022] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_label_pattern, 3),
  [1024] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_label_pattern, 3),
  [1026] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(521),
  [1028] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(434),
  [1030] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(523),
  [1032] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(525),
  [1034] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(526),
  [1036] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__generic_type_constructor, 1),
  [1038] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_identifier, 1, .fragile = true), REDUCE(sym__type_constructors, 1, .fragile = true, .alias_sequence_id = 1),
  [1041] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(530),
  [1043] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(533),
  [1045] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(534),
  [1047] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(536),
  [1049] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(537),
  [1051] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(539),
  [1053] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 1, .fragile = true),
  [1055] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 1, .fragile = true, .alias_sequence_id = 1),
  [1057] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(541),
  [1059] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(542),
  [1061] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_list_repeat1, 1),
  [1063] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_list_repeat1, 1),
  [1065] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(545),
  [1067] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type, 1),
  [1069] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(546),
  [1071] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type, 1, .alias_sequence_id = 3),
  [1073] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(547),
  [1075] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_type_repeat1, 1, .fragile = true),
  [1077] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 2, .fragile = true, .alias_sequence_id = 1),
  [1079] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type_constructors, 2, .fragile = true, .alias_sequence_id = 1),
  [1081] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(550),
  [1083] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 2, .fragile = true),
  [1085] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_qualified_type_constructor, 2, .fragile = true),
  [1087] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(553),
  [1089] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_signature, 4),
  [1091] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_signature, 4),
  [1093] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 2),
  [1095] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 3),
  [1097] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(557),
  [1099] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(558),
  [1101] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(559),
  [1103] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__declarations, 2),
  [1105] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(561),
  [1107] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(561),
  [1109] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(562),
  [1111] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(562),
  [1113] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 5),
  [1115] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 5),
  [1117] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(565),
  [1119] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 3),
  [1121] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 3),
  [1123] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(568),
  [1125] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(569),
  [1127] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(570),
  [1129] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(572),
  [1131] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreign, 5),
  [1133] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreign, 5),
  [1135] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_export_repeat1, 2),
  [1137] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default, 5),
  [1139] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_default, 5),
  [1141] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_context_repeat1, 2),
  [1143] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 4),
  [1145] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(576),
  [1147] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__declarations, 2),
  [1149] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(578),
  [1151] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(578),
  [1153] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fields, 3),
  [1155] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(580),
  [1157] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(581),
  [1159] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(583),
  [1161] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(585),
  [1163] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(586),
  [1165] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor, 4),
  [1167] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat2, 2),
  [1169] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat2, 2),
  [1171] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_labels_repeat1, 2),
  [1173] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(588),
  [1175] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(589),
  [1177] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_label, 3),
  [1179] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_fixity_repeat1, 3),
  [1181] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fixity_repeat1, 3),
  [1183] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 5),
  [1185] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 5),
  [1187] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(592),
  [1189] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(594),
  [1191] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(597),
  [1193] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(598),
  [1195] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(599),
  [1197] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(600),
  [1199] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(601),
  [1201] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(603),
  [1203] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 2),
  [1205] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructors_repeat1, 2),
  [1207] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fields, 3),
  [1209] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_fields, 3),
  [1211] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(606),
  [1213] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor, 4),
  [1215] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor, 4),
  [1217] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_labels_repeat1, 2),
  [1219] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_labels_repeat1, 2),
  [1221] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(608),
  [1223] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(609),
  [1225] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_label, 3),
  [1227] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_label, 3),
  [1229] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 5),
  [1231] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 5),
  [1233] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(612),
  [1235] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(332),
  [1237] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat1, 2),
  [1239] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat2, 2),
  [1241] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 2),
  [1243] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 2),
  [1245] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_list, 2),
  [1247] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_list, 2),
  [1249] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_statement_list, 2),
  [1251] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(614),
  [1253] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(614),
  [1255] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [1257] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [1259] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [1261] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(615),
  [1263] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(616),
  [1265] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(617),
  [1267] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(618),
  [1269] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(621),
  [1271] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(623),
  [1273] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(623),
  [1275] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(621),
  [1277] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_general_constructor_repeat1, 2),
  [1279] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_general_constructor_repeat1, 2),
  [1281] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_general_constructor_repeat1, 2),
  [1283] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(625),
  [1285] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tuple_pattern_repeat1, 2),
  [1287] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(626),
  [1289] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__constructor_symbol, 1),
  [1291] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_symbol_repeat1, 1),
  [1293] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 2),
  [1295] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__pattern, 3),
  [1297] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 1),
  [1299] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 2, .fragile = true),
  [1301] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_tuple_pattern, 4),
  [1303] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_tuple_pattern, 4),
  [1305] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(631),
  [1307] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_label_pattern, 4),
  [1309] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_label_pattern, 4),
  [1311] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(577),
  [1313] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(632),
  [1315] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(634),
  [1317] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tupling_constructor_repeat1, 1),
  [1319] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tupling_constructor, 3),
  [1321] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_tupling_constructor, 3),
  [1323] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(636),
  [1325] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(637),
  [1327] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(638),
  [1329] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(641),
  [1331] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tuple, 3, .fragile = true), REDUCE(sym_parenthesized_constructor, 3, .fragile = true),
  [1334] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_tuple, 3, .fragile = true), REDUCE(sym_parenthesized_constructor, 3, .fragile = true),
  [1337] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(643),
  [1339] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(644),
  [1341] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(646),
  [1343] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(647),
  [1345] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 2, .fragile = true, .alias_sequence_id = 1),
  [1347] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 2, .fragile = true),
  [1349] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(651),
  [1351] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 3),
  [1353] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 3),
  [1355] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_list_repeat1, 2),
  [1357] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_list_repeat1, 2),
  [1359] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_type_repeat1, 2),
  [1361] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_qualified_type_constructor_repeat1, 2),
  [1363] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_qualified_type_constructor_repeat1, 2),
  [1365] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 3, .fragile = true),
  [1367] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_qualified_type_constructor, 3, .fragile = true),
  [1369] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(653),
  [1371] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type, 3),
  [1373] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type, 3),
  [1375] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type, 3, .alias_sequence_id = 3),
  [1377] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type, 3, .alias_sequence_id = 3),
  [1379] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_exports_repeat1, 2),
  [1381] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 4),
  [1383] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(656),
  [1385] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__declarations, 3),
  [1387] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(658),
  [1389] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(658),
  [1391] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 6),
  [1393] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 6),
  [1395] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(659),
  [1397] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(661),
  [1399] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 2),
  [1401] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 4),
  [1403] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 4),
  [1405] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(663),
  [1407] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(665),
  [1409] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreign, 6),
  [1411] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreign, 6),
  [1413] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_export_repeat1, 3),
  [1415] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_context_repeat1, 3),
  [1417] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 5),
  [1419] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__declarations, 3),
  [1421] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fields_repeat1, 2),
  [1423] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fields, 4),
  [1425] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_field_repeat1, 2),
  [1427] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field, 3),
  [1429] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_labels_repeat1, 3),
  [1431] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(669),
  [1433] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(670),
  [1435] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 6),
  [1437] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 6),
  [1439] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(671),
  [1441] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(464),
  [1443] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(673),
  [1445] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(674),
  [1447] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 4),
  [1449] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 4),
  [1451] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(676),
  [1453] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 3),
  [1455] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructors_repeat1, 3),
  [1457] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fields, 4),
  [1459] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_fields, 4),
  [1461] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_labels_repeat1, 3),
  [1463] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_labels_repeat1, 3),
  [1465] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(677),
  [1467] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(678),
  [1469] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 6),
  [1471] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 6),
  [1473] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
  [1475] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2),
  [1477] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
  [1479] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(679),
  [1481] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(680),
  [1483] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_list, 3),
  [1485] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_list, 3),
  [1487] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_statement_list, 3),
  [1489] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [1491] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [1493] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [1495] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_negative_literal, 4),
  [1497] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__op, 3),
  [1499] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_symbol_repeat1, 2),
  [1501] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 2),
  [1503] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tuple_pattern_repeat1, 3),
  [1505] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_tupling_constructor, 3),
  [1507] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(683),
  [1509] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_tuple, 3, .fragile = true), REDUCE(sym_parenthesized_constructor, 3, .fragile = true),
  [1512] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(684),
  [1514] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tupling_constructor_repeat1, 2),
  [1516] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tupling_constructor, 4),
  [1518] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_tupling_constructor, 4),
  [1520] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_list, 3),
  [1522] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tuple_repeat1, 2),
  [1524] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tuple, 4),
  [1526] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_tuple, 4),
  [1528] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type, 3),
  [1530] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 4),
  [1532] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(688),
  [1534] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type, 3, .alias_sequence_id = 3),
  [1536] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 3, .fragile = true),
  [1538] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 4, .fragile = true),
  [1540] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_qualified_type_constructor, 4, .fragile = true),
  [1542] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_qualified_type_constructor_repeat1, 3),
  [1544] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_qualified_type_constructor_repeat1, 3),
  [1546] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_exports_repeat1, 3),
  [1548] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 4),
  [1550] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(692),
  [1552] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(693),
  [1554] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(695),
  [1556] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(696),
  [1558] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(698),
  [1560] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 3),
  [1562] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 5),
  [1564] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 5),
  [1566] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fields_repeat1, 3),
  [1568] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_field_repeat1, 3),
  [1570] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field, 4),
  [1572] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(700),
  [1574] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(701),
  [1576] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 5),
  [1578] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 5),
  [1580] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(702),
  [1582] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(703),
  [1584] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_tupling_constructor, 4),
  [1586] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_tuple, 4),
  [1588] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tuple_repeat1, 3),
  [1590] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 5),
  [1592] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 4, .fragile = true),
  [1594] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 5, .fragile = true),
  [1596] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_qualified_type_constructor, 5, .fragile = true),
  [1598] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 5),
  [1600] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 6),
  [1602] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 6),
  [1604] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(706),
  [1606] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(708),
  [1608] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(710),
  [1610] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(712),
  [1612] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 5, .fragile = true),
  [1614] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 7),
  [1616] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 7),
  [1618] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(713),
  [1620] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 5),
  [1622] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(714),
  [1624] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 8),
  [1626] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 8),
  [1628] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 6),
  [1630] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(717),
  [1632] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(718),
  [1634] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 7),
  [1636] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 9),
  [1638] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 9),
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
