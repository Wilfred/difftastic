#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 737
#define SYMBOL_COUNT 238
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
  sym_constructors = 181,
  sym_constructor = 182,
  sym_deriving = 183,
  sym_newtype = 184,
  sym_field = 185,
  sym_strict = 186,
  sym_type_synonym = 187,
  sym__literal = 188,
  sym__identifier = 189,
  sym_simple_type = 190,
  sym_variable_identifier = 191,
  sym_constructor_identifier = 192,
  sym__type_constructors = 193,
  sym_qualified_type_constructor = 194,
  sym_integer = 195,
  sym_char = 196,
  sym_string = 197,
  sym__gap = 198,
  sym__graphic = 199,
  sym__small = 200,
  sym__large = 201,
  sym__symbol = 202,
  sym__variable_symbol = 203,
  sym__constructor_symbol = 204,
  sym__special = 205,
  sym__escape = 206,
  sym__char_escape = 207,
  sym__ascii = 208,
  sym__cntrl = 209,
  sym_fields = 210,
  aux_sym_module_repeat1 = 211,
  aux_sym_module_exports_repeat1 = 212,
  aux_sym_export_repeat1 = 213,
  aux_sym_import_specification_repeat1 = 214,
  aux_sym_function_head_repeat1 = 215,
  aux_sym_function_body_repeat1 = 216,
  aux_sym_tuple_pattern_repeat1 = 217,
  aux_sym_labels_repeat1 = 218,
  aux_sym_statement_list_repeat1 = 219,
  aux_sym_fixity_repeat1 = 220,
  aux_sym_variable_symbol_repeat1 = 221,
  aux_sym_constructor_symbol_repeat1 = 222,
  aux_sym_tupling_constructor_repeat1 = 223,
  aux_sym_tuple_repeat1 = 224,
  aux_sym_list_repeat1 = 225,
  aux_sym_context_repeat1 = 226,
  aux_sym_constructors_repeat1 = 227,
  aux_sym_constructor_repeat1 = 228,
  aux_sym_constructor_repeat2 = 229,
  aux_sym_constructor_repeat3 = 230,
  aux_sym_field_repeat1 = 231,
  aux_sym_simple_type_repeat1 = 232,
  aux_sym_qualified_type_constructor_repeat1 = 233,
  aux_sym_string_repeat1 = 234,
  aux_sym__escape_repeat1 = 235,
  aux_sym__escape_repeat2 = 236,
  aux_sym_fields_repeat1 = 237,
  alias_sym_type_constructor = 238,
  alias_sym_type_variable = 239,
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
  [aux_sym_constructor_repeat3] = "constructor_repeat3",
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
  [aux_sym_constructor_repeat3] = {
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
        ADVANCE(254);
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
        ADVANCE(256);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == '<')
        ADVANCE(264);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == '\\')
        SKIP(266);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == 'c')
        ADVANCE(267);
      if (lookahead == 'd')
        ADVANCE(273);
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
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(181);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
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
        ADVANCE(184);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == '<')
        ADVANCE(192);
      if (lookahead == '=')
        ADVANCE(193);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '\\')
        ADVANCE(194);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == 'c')
        ADVANCE(195);
      if (lookahead == 'd')
        ADVANCE(201);
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
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == 8902)
        ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(182);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
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
      ACCEPT_TOKEN(anon_sym_DASH);
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
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 194:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(202);
      if (lookahead == 'e')
        ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_data);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_foreign);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
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
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
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
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'x')
        ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == '\'')
        ADVANCE(196);
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
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_infixl);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_infixr);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'c')
        ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_instance);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'w')
        ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'y')
        ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_newtype);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'y')
        ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
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
        ADVANCE(256);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == '<')
        ADVANCE(264);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == '\\')
        SKIP(266);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == 'c')
        ADVANCE(267);
      if (lookahead == 'd')
        ADVANCE(273);
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
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(181);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_DASH);
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
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 266:
      if (lookahead == 'n')
        SKIP(181);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'l')
        ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'a')
        ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 's')
        ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 's')
        ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '\'')
        ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'a')
        ADVANCE(274);
      if (lookahead == 'e')
        ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 't')
        ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'a')
        ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_data);
      if (lookahead == '\'')
        ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'f')
        ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'a')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'u')
        ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'l')
        ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 't')
        ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '\'')
        ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'o')
        ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'r')
        ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'e')
        ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'i')
        ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'g')
        ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'n')
        ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_foreign);
      if (lookahead == '\'')
        ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'm')
        ADVANCE(291);
      if (lookahead == 'n')
        ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'p')
        ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'o')
        ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'r')
        ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 't')
        ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '\'')
        ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'f')
        ADVANCE(297);
      if (lookahead == 's')
        ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'i')
        ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'x')
        ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'l')
        ADVANCE(300);
      if (lookahead == 'r')
        ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_infixl);
      if (lookahead == '\'')
        ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_infixr);
      if (lookahead == '\'')
        ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 't')
        ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'a')
        ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'n')
        ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'c')
        ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'e')
        ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_instance);
      if (lookahead == '\'')
        ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'o')
        ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'd')
        ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'u')
        ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'l')
        ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'e')
        ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == '\'')
        ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'e')
        ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'w')
        ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 't')
        ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'y')
        ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'p')
        ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'e')
        ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_newtype);
      if (lookahead == '\'')
        ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'y')
        ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'p')
        ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'e')
        ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '\'')
        ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
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
        ADVANCE(340);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '\\')
        SKIP(342);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == 'q')
        ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(326);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(352);
      END_STATE();
    case 327:
      if (lookahead == '\n')
        ADVANCE(327);
      if (lookahead == '\r')
        ADVANCE(327);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == '\\')
        ADVANCE(329);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == 'q')
        ADVANCE(330);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(327);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(339);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 328:
      if (lookahead == '-')
        ADVANCE(25);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 329:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(327);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 330:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(331);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 331:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(332);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 332:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(333);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 333:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(334);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 334:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(335);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 335:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(336);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 336:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(337);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 337:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(338);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_qualified);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_module_identifier);
      if (lookahead == '\'')
        ADVANCE(339);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(339);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 340:
      if (lookahead == '\n')
        ADVANCE(327);
      if (lookahead == '\r')
        ADVANCE(340);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '\\')
        SKIP(342);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == 'q')
        ADVANCE(343);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(326);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(352);
      END_STATE();
    case 341:
      if (lookahead == '-')
        ADVANCE(29);
      END_STATE();
    case 342:
      if (lookahead == 'n')
        SKIP(326);
      END_STATE();
    case 343:
      if (lookahead == 'u')
        ADVANCE(344);
      END_STATE();
    case 344:
      if (lookahead == 'a')
        ADVANCE(345);
      END_STATE();
    case 345:
      if (lookahead == 'l')
        ADVANCE(346);
      END_STATE();
    case 346:
      if (lookahead == 'i')
        ADVANCE(347);
      END_STATE();
    case 347:
      if (lookahead == 'f')
        ADVANCE(348);
      END_STATE();
    case 348:
      if (lookahead == 'i')
        ADVANCE(349);
      END_STATE();
    case 349:
      if (lookahead == 'e')
        ADVANCE(350);
      END_STATE();
    case 350:
      if (lookahead == 'd')
        ADVANCE(351);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_qualified);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_module_identifier);
      if (lookahead == '\'')
        ADVANCE(352);
      if (lookahead == '.')
        ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(352);
      END_STATE();
    case 353:
      if (lookahead == '\n')
        ADVANCE(354);
      if (lookahead == '\r')
        ADVANCE(405);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(406);
      if (lookahead == ':')
        ADVANCE(407);
      if (lookahead == '=')
        ADVANCE(408);
      if (lookahead == '\\')
        SKIP(409);
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
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(353);
      END_STATE();
    case 354:
      if (lookahead == '\n')
        ADVANCE(354);
      if (lookahead == '\r')
        ADVANCE(354);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(355);
      if (lookahead == ':')
        ADVANCE(356);
      if (lookahead == '=')
        ADVANCE(357);
      if (lookahead == '\\')
        ADVANCE(358);
      if (lookahead == 'c')
        ADVANCE(359);
      if (lookahead == 'd')
        ADVANCE(372);
      if (lookahead == 'e')
        ADVANCE(378);
      if (lookahead == 'i')
        ADVANCE(384);
      if (lookahead == 'j')
        ADVANCE(390);
      if (lookahead == 's')
        ADVANCE(393);
      if (lookahead == 'w')
        ADVANCE(400);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(354);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 355:
      if (lookahead == '-')
        ADVANCE(25);
      if (lookahead == '>')
        ADVANCE(30);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 356:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == ':')
        ADVANCE(35);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 357:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '>')
        ADVANCE(40);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 358:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(354);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 359:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'c')
        ADVANCE(360);
      if (lookahead == 'p')
        ADVANCE(364);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 360:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
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
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(363);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_ccall);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 364:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(365);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 365:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(366);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 366:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(367);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 367:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(368);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 368:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(369);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 369:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(370);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 370:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(371);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_cplusplus);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 372:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
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
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(375);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 375:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(376);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 376:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(377);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_dotnet);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 378:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'x')
        ADVANCE(379);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 379:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(380);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 380:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(381);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 381:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(382);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 382:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(383);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_foreign_export);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 384:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'm')
        ADVANCE(385);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 385:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(386);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 386:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(387);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 387:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(388);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 388:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(389);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 390:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'v')
        ADVANCE(391);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 391:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'm')
        ADVANCE(392);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_jvm);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 393:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(394);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 394:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(395);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 395:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'c')
        ADVANCE(396);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 396:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
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
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(399);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_stdcall);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 400:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'h')
        ADVANCE(401);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 401:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(402);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 402:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(403);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 403:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(404);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 405:
      if (lookahead == '\n')
        ADVANCE(354);
      if (lookahead == '\r')
        ADVANCE(405);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(406);
      if (lookahead == ':')
        ADVANCE(407);
      if (lookahead == '=')
        ADVANCE(408);
      if (lookahead == '\\')
        SKIP(409);
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
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(353);
      END_STATE();
    case 406:
      if (lookahead == '-')
        ADVANCE(29);
      if (lookahead == '>')
        ADVANCE(115);
      END_STATE();
    case 407:
      if (lookahead == ':')
        ADVANCE(120);
      END_STATE();
    case 408:
      if (lookahead == '>')
        ADVANCE(125);
      END_STATE();
    case 409:
      if (lookahead == 'n')
        SKIP(353);
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
        ADVANCE(461);
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
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == '0')
        ADVANCE(462);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == '<')
        ADVANCE(264);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(464);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(456);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(463);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 457:
      if (lookahead == '\n')
        ADVANCE(457);
      if (lookahead == '\r')
        ADVANCE(457);
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
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == '+')
        ADVANCE(22);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == '0')
        ADVANCE(458);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == '<')
        ADVANCE(192);
      if (lookahead == '=')
        ADVANCE(193);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(460);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == 8902)
        ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(457);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(459);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 458:
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
        ADVANCE(459);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(459);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 460:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(457);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 461:
      if (lookahead == '\n')
        ADVANCE(457);
      if (lookahead == '\r')
        ADVANCE(461);
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
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == '0')
        ADVANCE(462);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == '<')
        ADVANCE(264);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(464);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(456);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(463);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 462:
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
        ADVANCE(463);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym__integer_literal);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(463);
      END_STATE();
    case 464:
      if (lookahead == 'n')
        SKIP(456);
      END_STATE();
    case 465:
      if (lookahead == '\n')
        ADVANCE(466);
      if (lookahead == '\r')
        ADVANCE(469);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(406);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ':')
        ADVANCE(407);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(265);
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
        SKIP(465);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 466:
      if (lookahead == '\n')
        ADVANCE(466);
      if (lookahead == '\r')
        ADVANCE(466);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == '-')
        ADVANCE(355);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ':')
        ADVANCE(356);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(193);
      if (lookahead == '[')
        ADVANCE(72);
      if (lookahead == '\\')
        ADVANCE(467);
      if (lookahead == '_')
        ADVANCE(468);
      if (lookahead == '~')
        ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(466);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 467:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(466);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 469:
      if (lookahead == '\n')
        ADVANCE(466);
      if (lookahead == '\r')
        ADVANCE(469);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(406);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ':')
        ADVANCE(407);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(265);
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
        SKIP(465);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 470:
      if (lookahead == 'n')
        SKIP(465);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '\'')
        ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 472:
      if (lookahead == '\n')
        ADVANCE(473);
      if (lookahead == '\r')
        ADVANCE(475);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ':')
        ADVANCE(407);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(476);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(472);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 473:
      if (lookahead == '\n')
        ADVANCE(473);
      if (lookahead == '\r')
        ADVANCE(473);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == ':')
        ADVANCE(356);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(474);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(473);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
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
        ADVANCE(341);
      if (lookahead == ':')
        ADVANCE(407);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(476);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(472);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 476:
      if (lookahead == 'n')
        SKIP(472);
      END_STATE();
    case 477:
      if (lookahead == '\n')
        ADVANCE(478);
      if (lookahead == '\r')
        ADVANCE(488);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(489);
      if (lookahead == 'd')
        ADVANCE(490);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(477);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
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
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(39);
      if (lookahead == '\\')
        ADVANCE(479);
      if (lookahead == 'd')
        ADVANCE(480);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(478);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
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
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(481);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 481:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(482);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 482:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(483);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 483:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'v')
        ADVANCE(484);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 484:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(485);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 485:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(486);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 486:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(487);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 488:
      if (lookahead == '\n')
        ADVANCE(478);
      if (lookahead == '\r')
        ADVANCE(488);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(489);
      if (lookahead == 'd')
        ADVANCE(490);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(477);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 489:
      if (lookahead == 'n')
        SKIP(477);
      END_STATE();
    case 490:
      if (lookahead == 'e')
        ADVANCE(491);
      END_STATE();
    case 491:
      if (lookahead == 'r')
        ADVANCE(492);
      END_STATE();
    case 492:
      if (lookahead == 'i')
        ADVANCE(493);
      END_STATE();
    case 493:
      if (lookahead == 'v')
        ADVANCE(494);
      END_STATE();
    case 494:
      if (lookahead == 'i')
        ADVANCE(495);
      END_STATE();
    case 495:
      if (lookahead == 'n')
        ADVANCE(496);
      END_STATE();
    case 496:
      if (lookahead == 'g')
        ADVANCE(497);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_deriving);
      END_STATE();
    case 498:
      if (lookahead == '\t')
        SKIP(498);
      if (lookahead == '\n')
        ADVANCE(499);
      if (lookahead == '\r')
        ADVANCE(504);
      if (lookahead == ' ')
        ADVANCE(505);
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
        ADVANCE(256);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(264);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == '[')
        ADVANCE(506);
      if (lookahead == '\\')
        ADVANCE(507);
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
        ADVANCE(508);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 499:
      if (lookahead == '\t')
        ADVANCE(499);
      if (lookahead == '\n')
        ADVANCE(499);
      if (lookahead == '\r')
        ADVANCE(499);
      if (lookahead == ' ')
        ADVANCE(500);
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
        ADVANCE(184);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(192);
      if (lookahead == '=')
        ADVANCE(193);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(501);
      if (lookahead == '\\')
        ADVANCE(502);
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
        ADVANCE(503);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(499);
      if (lookahead == '\n')
        ADVANCE(499);
      if (lookahead == '\r')
        ADVANCE(499);
      if (lookahead == ' ')
        ADVANCE(500);
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
        ADVANCE(184);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(192);
      if (lookahead == '=')
        ADVANCE(193);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(501);
      if (lookahead == '\\')
        ADVANCE(502);
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
        ADVANCE(503);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(499);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 504:
      if (lookahead == '\t')
        SKIP(498);
      if (lookahead == '\n')
        ADVANCE(499);
      if (lookahead == '\r')
        ADVANCE(504);
      if (lookahead == ' ')
        ADVANCE(505);
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
        ADVANCE(256);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(264);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == '[')
        ADVANCE(506);
      if (lookahead == '\\')
        ADVANCE(507);
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
        ADVANCE(508);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      END_STATE();
    case 509:
      if (lookahead == '\t')
        ADVANCE(510);
      if (lookahead == '\n')
        ADVANCE(511);
      if (lookahead == 11)
        ADVANCE(97);
      if (lookahead == '\r')
        ADVANCE(516);
      if (lookahead == ' ')
        ADVANCE(505);
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
        ADVANCE(256);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(264);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == '[')
        ADVANCE(506);
      if (lookahead == '\\')
        ADVANCE(507);
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
        ADVANCE(508);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym__tab);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(512);
      if (lookahead == '\n')
        ADVANCE(511);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(513);
      if (lookahead == ' ')
        ADVANCE(514);
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
        ADVANCE(184);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(192);
      if (lookahead == '=')
        ADVANCE(193);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(501);
      if (lookahead == '\\')
        ADVANCE(515);
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
        ADVANCE(503);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(512);
      if (lookahead == '\n')
        ADVANCE(511);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(513);
      if (lookahead == ' ')
        ADVANCE(514);
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
        ADVANCE(184);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(192);
      if (lookahead == '=')
        ADVANCE(193);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(501);
      if (lookahead == '\\')
        ADVANCE(515);
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
        ADVANCE(503);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 513:
      if (lookahead == '\t')
        ADVANCE(512);
      if (lookahead == '\n')
        ADVANCE(511);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(513);
      if (lookahead == ' ')
        ADVANCE(514);
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
        ADVANCE(184);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(192);
      if (lookahead == '=')
        ADVANCE(193);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(501);
      if (lookahead == '\\')
        ADVANCE(515);
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
        ADVANCE(503);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(512);
      if (lookahead == '\n')
        ADVANCE(511);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(513);
      if (lookahead == ' ')
        ADVANCE(514);
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
        ADVANCE(184);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(192);
      if (lookahead == '=')
        ADVANCE(193);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(501);
      if (lookahead == '\\')
        ADVANCE(515);
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
        ADVANCE(503);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(513);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 516:
      if (lookahead == '\t')
        ADVANCE(510);
      if (lookahead == '\n')
        ADVANCE(511);
      if (lookahead == 11)
        ADVANCE(97);
      if (lookahead == '\r')
        ADVANCE(516);
      if (lookahead == ' ')
        ADVANCE(505);
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
        ADVANCE(256);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(264);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == '[')
        ADVANCE(506);
      if (lookahead == '\\')
        ADVANCE(507);
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
        ADVANCE(508);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 517:
      if (lookahead == '\n')
        ADVANCE(518);
      if (lookahead == '\r')
        ADVANCE(520);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(521);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(517);
      END_STATE();
    case 518:
      if (lookahead == '\n')
        ADVANCE(518);
      if (lookahead == '\r')
        ADVANCE(518);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(519);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(518);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 519:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(518);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 520:
      if (lookahead == '\n')
        ADVANCE(518);
      if (lookahead == '\r')
        ADVANCE(520);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(521);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(517);
      END_STATE();
    case 521:
      if (lookahead == 'n')
        SKIP(517);
      END_STATE();
    case 522:
      if (lookahead == '\n')
        ADVANCE(523);
      if (lookahead == '\r')
        ADVANCE(525);
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
        ADVANCE(256);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == '<')
        ADVANCE(264);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(526);
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
        SKIP(522);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 523:
      if (lookahead == '\n')
        ADVANCE(523);
      if (lookahead == '\r')
        ADVANCE(523);
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
        ADVANCE(184);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == '<')
        ADVANCE(192);
      if (lookahead == '=')
        ADVANCE(193);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(72);
      if (lookahead == '\\')
        ADVANCE(524);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(468);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '~')
        ADVANCE(86);
      if (lookahead == 8902)
        ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(523);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 524:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(523);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 525:
      if (lookahead == '\n')
        ADVANCE(523);
      if (lookahead == '\r')
        ADVANCE(525);
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
        ADVANCE(256);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == '<')
        ADVANCE(264);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(526);
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
        SKIP(522);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 526:
      if (lookahead == 'n')
        SKIP(522);
      END_STATE();
    case 527:
      if (lookahead == '\n')
        ADVANCE(528);
      if (lookahead == '\r')
        ADVANCE(530);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ':')
        ADVANCE(407);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(531);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(527);
      END_STATE();
    case 528:
      if (lookahead == '\n')
        ADVANCE(528);
      if (lookahead == '\r')
        ADVANCE(528);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == ':')
        ADVANCE(356);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(529);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(528);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 529:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(528);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 530:
      if (lookahead == '\n')
        ADVANCE(528);
      if (lookahead == '\r')
        ADVANCE(530);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ':')
        ADVANCE(407);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(531);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(527);
      END_STATE();
    case 531:
      if (lookahead == 'n')
        SKIP(527);
      END_STATE();
    case 532:
      if (lookahead == '\n')
        ADVANCE(533);
      if (lookahead == '\r')
        ADVANCE(535);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ':')
        ADVANCE(407);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(536);
      if (lookahead == '_')
        ADVANCE(471);
      if (lookahead == '~')
        ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(532);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 533:
      if (lookahead == '\n')
        ADVANCE(533);
      if (lookahead == '\r')
        ADVANCE(533);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ':')
        ADVANCE(356);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(193);
      if (lookahead == '[')
        ADVANCE(72);
      if (lookahead == '\\')
        ADVANCE(534);
      if (lookahead == '_')
        ADVANCE(468);
      if (lookahead == '~')
        ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(533);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 534:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(533);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 535:
      if (lookahead == '\n')
        ADVANCE(533);
      if (lookahead == '\r')
        ADVANCE(535);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ':')
        ADVANCE(407);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(536);
      if (lookahead == '_')
        ADVANCE(471);
      if (lookahead == '~')
        ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(532);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 536:
      if (lookahead == 'n')
        SKIP(532);
      END_STATE();
    case 537:
      if (lookahead == '\n')
        ADVANCE(538);
      if (lookahead == '\r')
        ADVANCE(548);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ':')
        ADVANCE(407);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(549);
      if (lookahead == 'd')
        ADVANCE(550);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(537);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 538:
      if (lookahead == '\n')
        ADVANCE(538);
      if (lookahead == '\r')
        ADVANCE(538);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == ':')
        ADVANCE(356);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(39);
      if (lookahead == '\\')
        ADVANCE(539);
      if (lookahead == 'd')
        ADVANCE(540);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(538);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 539:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(538);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(541);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(542);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(543);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'v')
        ADVANCE(544);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(545);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(546);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(547);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 548:
      if (lookahead == '\n')
        ADVANCE(538);
      if (lookahead == '\r')
        ADVANCE(548);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ':')
        ADVANCE(407);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(549);
      if (lookahead == 'd')
        ADVANCE(550);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(537);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 549:
      if (lookahead == 'n')
        SKIP(537);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'e')
        ADVANCE(551);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'r')
        ADVANCE(552);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'i')
        ADVANCE(553);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'v')
        ADVANCE(554);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'i')
        ADVANCE(555);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'n')
        ADVANCE(556);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'g')
        ADVANCE(557);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '\'')
        ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 558:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(559);
      if (lookahead == '\r')
        ADVANCE(561);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(562);
      if (lookahead == 'c')
        ADVANCE(267);
      if (lookahead == 'd')
        ADVANCE(273);
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
        SKIP(558);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 559:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(559);
      if (lookahead == '\r')
        ADVANCE(559);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == '\\')
        ADVANCE(560);
      if (lookahead == 'c')
        ADVANCE(195);
      if (lookahead == 'd')
        ADVANCE(201);
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
        ADVANCE(559);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      ADVANCE(8);
      END_STATE();
    case 560:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(559);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 561:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(559);
      if (lookahead == '\r')
        ADVANCE(561);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(562);
      if (lookahead == 'c')
        ADVANCE(267);
      if (lookahead == 'd')
        ADVANCE(273);
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
        SKIP(558);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 562:
      if (lookahead == 'n')
        SKIP(558);
      END_STATE();
    case 563:
      if (lookahead == '\n')
        ADVANCE(564);
      if (lookahead == '\r')
        ADVANCE(574);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(575);
      if (lookahead == 'a')
        ADVANCE(576);
      if (lookahead == 'h')
        ADVANCE(578);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(563);
      END_STATE();
    case 564:
      if (lookahead == '\n')
        ADVANCE(564);
      if (lookahead == '\r')
        ADVANCE(564);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(565);
      if (lookahead == 'a')
        ADVANCE(566);
      if (lookahead == 'h')
        ADVANCE(568);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(564);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 565:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(564);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 566:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(567);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '-')
        ADVANCE(4);
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
      if (lookahead == 'd')
        ADVANCE(570);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 570:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(571);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 571:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(572);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 572:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(573);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_hiding);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 574:
      if (lookahead == '\n')
        ADVANCE(564);
      if (lookahead == '\r')
        ADVANCE(574);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(575);
      if (lookahead == 'a')
        ADVANCE(576);
      if (lookahead == 'h')
        ADVANCE(578);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(563);
      END_STATE();
    case 575:
      if (lookahead == 'n')
        SKIP(563);
      END_STATE();
    case 576:
      if (lookahead == 's')
        ADVANCE(577);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 578:
      if (lookahead == 'i')
        ADVANCE(579);
      END_STATE();
    case 579:
      if (lookahead == 'd')
        ADVANCE(580);
      END_STATE();
    case 580:
      if (lookahead == 'i')
        ADVANCE(581);
      END_STATE();
    case 581:
      if (lookahead == 'n')
        ADVANCE(582);
      END_STATE();
    case 582:
      if (lookahead == 'g')
        ADVANCE(583);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_hiding);
      END_STATE();
    case 584:
      if (lookahead == '\n')
        ADVANCE(585);
      if (lookahead == '\r')
        ADVANCE(592);
      if (lookahead == '!')
        ADVANCE(99);
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
        ADVANCE(406);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ':')
        ADVANCE(407);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(593);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == 'w')
        ADVANCE(594);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(584);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 585:
      if (lookahead == '\n')
        ADVANCE(585);
      if (lookahead == '\r')
        ADVANCE(585);
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
        ADVANCE(355);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ':')
        ADVANCE(356);
      if (lookahead == '=')
        ADVANCE(39);
      if (lookahead == '\\')
        ADVANCE(586);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == 'w')
        ADVANCE(587);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(585);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 586:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(585);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'h')
        ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(591);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 592:
      if (lookahead == '\n')
        ADVANCE(585);
      if (lookahead == '\r')
        ADVANCE(592);
      if (lookahead == '!')
        ADVANCE(99);
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
        ADVANCE(406);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ':')
        ADVANCE(407);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(593);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == 'w')
        ADVANCE(594);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(584);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 593:
      if (lookahead == 'n')
        SKIP(584);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'h')
        ADVANCE(595);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'e')
        ADVANCE(596);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'r')
        ADVANCE(597);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'e')
        ADVANCE(598);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '\'')
        ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
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
        ADVANCE(256);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(264);
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
        ADVANCE(184);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(192);
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
        ADVANCE(256);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(264);
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
        ADVANCE(256);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(264);
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
        ADVANCE(184);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(192);
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
        ADVANCE(256);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(264);
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
        ADVANCE(255);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == '<')
        ADVANCE(264);
      if (lookahead == '=')
        ADVANCE(265);
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
        ADVANCE(325);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
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
        ADVANCE(184);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == '<')
        ADVANCE(192);
      if (lookahead == '=')
        ADVANCE(193);
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
        ADVANCE(468);
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
        ADVANCE(253);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
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
        ADVANCE(255);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(256);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == '<')
        ADVANCE(264);
      if (lookahead == '=')
        ADVANCE(265);
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
        ADVANCE(325);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
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
        ADVANCE(341);
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
        ADVANCE(328);
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
        ADVANCE(341);
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
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(623);
      if (lookahead == 'd')
        ADVANCE(550);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(619);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 620:
      if (lookahead == '\n')
        ADVANCE(620);
      if (lookahead == '\r')
        ADVANCE(620);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(39);
      if (lookahead == '\\')
        ADVANCE(621);
      if (lookahead == 'd')
        ADVANCE(540);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(620);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
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
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(623);
      if (lookahead == 'd')
        ADVANCE(550);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(619);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 623:
      if (lookahead == 'n')
        SKIP(619);
      END_STATE();
    case 624:
      if (lookahead == '\n')
        ADVANCE(625);
      if (lookahead == '\r')
        ADVANCE(627);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(628);
      if (lookahead == 'd')
        ADVANCE(490);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(624);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 625:
      if (lookahead == '\n')
        ADVANCE(625);
      if (lookahead == '\r')
        ADVANCE(625);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(39);
      if (lookahead == '\\')
        ADVANCE(626);
      if (lookahead == 'd')
        ADVANCE(480);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(625);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
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
      if (lookahead == '\n')
        ADVANCE(625);
      if (lookahead == '\r')
        ADVANCE(627);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(628);
      if (lookahead == 'd')
        ADVANCE(490);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(624);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 628:
      if (lookahead == 'n')
        SKIP(624);
      END_STATE();
    case 629:
      if (lookahead == '\n')
        ADVANCE(630);
      if (lookahead == '\r')
        ADVANCE(632);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(633);
      if (lookahead == 'd')
        ADVANCE(550);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(629);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 630:
      if (lookahead == '\n')
        ADVANCE(630);
      if (lookahead == '\r')
        ADVANCE(630);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(39);
      if (lookahead == '\\')
        ADVANCE(631);
      if (lookahead == 'd')
        ADVANCE(540);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(630);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 631:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(630);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 632:
      if (lookahead == '\n')
        ADVANCE(630);
      if (lookahead == '\r')
        ADVANCE(632);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(633);
      if (lookahead == 'd')
        ADVANCE(550);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(629);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 633:
      if (lookahead == 'n')
        SKIP(629);
      END_STATE();
    case 634:
      if (lookahead == '\n')
        ADVANCE(635);
      if (lookahead == '\r')
        ADVANCE(637);
      if (lookahead == '!')
        ADVANCE(99);
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
        ADVANCE(406);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(638);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(634);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 635:
      if (lookahead == '\n')
        ADVANCE(635);
      if (lookahead == '\r')
        ADVANCE(635);
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
        ADVANCE(355);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == '=')
        ADVANCE(39);
      if (lookahead == '\\')
        ADVANCE(636);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(635);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
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
      if (lookahead == '\n')
        ADVANCE(635);
      if (lookahead == '\r')
        ADVANCE(637);
      if (lookahead == '!')
        ADVANCE(99);
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
        ADVANCE(406);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(638);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(634);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 638:
      if (lookahead == 'n')
        SKIP(634);
      END_STATE();
    case 639:
      if (lookahead == '\n')
        ADVANCE(640);
      if (lookahead == '\r')
        ADVANCE(642);
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
        ADVANCE(256);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == '<')
        ADVANCE(264);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(643);
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
        SKIP(639);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 640:
      if (lookahead == '\n')
        ADVANCE(640);
      if (lookahead == '\r')
        ADVANCE(640);
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
        ADVANCE(184);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == '<')
        ADVANCE(192);
      if (lookahead == '=')
        ADVANCE(193);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(641);
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
        ADVANCE(640);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 641:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(640);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 642:
      if (lookahead == '\n')
        ADVANCE(640);
      if (lookahead == '\r')
        ADVANCE(642);
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
        ADVANCE(256);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == '<')
        ADVANCE(264);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(643);
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
        SKIP(639);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 643:
      if (lookahead == 'n')
        SKIP(639);
      END_STATE();
    case 644:
      if (lookahead == '\n')
        ADVANCE(645);
      if (lookahead == '\r')
        ADVANCE(697);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '&')
        ADVANCE(104);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == 'A')
        ADVANCE(698);
      if (lookahead == 'B')
        ADVANCE(701);
      if (lookahead == 'C')
        ADVANCE(705);
      if (lookahead == 'D')
        ADVANCE(709);
      if (lookahead == 'E')
        ADVANCE(719);
      if (lookahead == 'F')
        ADVANCE(730);
      if (lookahead == 'G')
        ADVANCE(733);
      if (lookahead == 'H')
        ADVANCE(734);
      if (lookahead == 'L')
        ADVANCE(735);
      if (lookahead == 'N')
        ADVANCE(736);
      if (lookahead == 'O')
        ADVANCE(737);
      if (lookahead == 'R')
        ADVANCE(738);
      if (lookahead == 'S')
        ADVANCE(739);
      if (lookahead == 'U')
        ADVANCE(740);
      if (lookahead == 'V')
        ADVANCE(741);
      if (lookahead == 'X')
        ADVANCE(742);
      if (lookahead == '\\')
        ADVANCE(507);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == 'a')
        ADVANCE(743);
      if (lookahead == 'b')
        ADVANCE(744);
      if (lookahead == 'f')
        ADVANCE(745);
      if (lookahead == 'n')
        ADVANCE(164);
      if (lookahead == 'o')
        ADVANCE(746);
      if (lookahead == 'r')
        ADVANCE(165);
      if (lookahead == 't')
        ADVANCE(166);
      if (lookahead == 'v')
        ADVANCE(167);
      if (lookahead == 'x')
        ADVANCE(747);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(644);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(508);
      END_STATE();
    case 645:
      if (lookahead == '\n')
        ADVANCE(645);
      if (lookahead == '\r')
        ADVANCE(645);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '&')
        ADVANCE(14);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == 'A')
        ADVANCE(646);
      if (lookahead == 'B')
        ADVANCE(649);
      if (lookahead == 'C')
        ADVANCE(653);
      if (lookahead == 'D')
        ADVANCE(657);
      if (lookahead == 'E')
        ADVANCE(667);
      if (lookahead == 'F')
        ADVANCE(678);
      if (lookahead == 'G')
        ADVANCE(681);
      if (lookahead == 'H')
        ADVANCE(682);
      if (lookahead == 'L')
        ADVANCE(683);
      if (lookahead == 'N')
        ADVANCE(684);
      if (lookahead == 'O')
        ADVANCE(685);
      if (lookahead == 'R')
        ADVANCE(686);
      if (lookahead == 'S')
        ADVANCE(687);
      if (lookahead == 'U')
        ADVANCE(688);
      if (lookahead == 'V')
        ADVANCE(689);
      if (lookahead == 'X')
        ADVANCE(690);
      if (lookahead == '\\')
        ADVANCE(691);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == 'a')
        ADVANCE(692);
      if (lookahead == 'b')
        ADVANCE(693);
      if (lookahead == 'f')
        ADVANCE(694);
      if (lookahead == 'n')
        ADVANCE(79);
      if (lookahead == 'o')
        ADVANCE(695);
      if (lookahead == 'r')
        ADVANCE(80);
      if (lookahead == 't')
        ADVANCE(81);
      if (lookahead == 'v')
        ADVANCE(82);
      if (lookahead == 'x')
        ADVANCE(696);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(503);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 646:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(647);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 647:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'K')
        ADVANCE(648);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_ACK);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 649:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(650);
      if (lookahead == 'S')
        ADVANCE(652);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 650:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'L')
        ADVANCE(651);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_BEL);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_BS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 653:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(654);
      if (lookahead == 'R')
        ADVANCE(656);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 654:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'N')
        ADVANCE(655);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_CAN);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 657:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(658);
      if (lookahead == 'E')
        ADVANCE(663);
      if (lookahead == 'L')
        ADVANCE(665);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 658:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '1')
        ADVANCE(659);
      if (lookahead == '2')
        ADVANCE(660);
      if (lookahead == '3')
        ADVANCE(661);
      if (lookahead == '4')
        ADVANCE(662);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_DC1);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_DC2);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_DC3);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_DC4);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 663:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'L')
        ADVANCE(664);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_DEL);
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
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_DLE);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 667:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'M')
        ADVANCE(668);
      if (lookahead == 'N')
        ADVANCE(669);
      if (lookahead == 'O')
        ADVANCE(671);
      if (lookahead == 'S')
        ADVANCE(673);
      if (lookahead == 'T')
        ADVANCE(675);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_EM);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 669:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'Q')
        ADVANCE(670);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_ENQ);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 671:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(672);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_EOT);
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
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_ESC);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 675:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'B')
        ADVANCE(676);
      if (lookahead == 'X')
        ADVANCE(677);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_ETB);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_ETX);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 678:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(679);
      if (lookahead == 'S')
        ADVANCE(680);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_FS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 681:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(45);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 682:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(47);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 683:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(49);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 684:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(51);
      if (lookahead == 'U')
        ADVANCE(53);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 686:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(56);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 687:
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
    case 688:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(69);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 689:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(71);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_X);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(645);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_a);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 697:
      if (lookahead == '\n')
        ADVANCE(645);
      if (lookahead == '\r')
        ADVANCE(697);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '&')
        ADVANCE(104);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == 'A')
        ADVANCE(698);
      if (lookahead == 'B')
        ADVANCE(701);
      if (lookahead == 'C')
        ADVANCE(705);
      if (lookahead == 'D')
        ADVANCE(709);
      if (lookahead == 'E')
        ADVANCE(719);
      if (lookahead == 'F')
        ADVANCE(730);
      if (lookahead == 'G')
        ADVANCE(733);
      if (lookahead == 'H')
        ADVANCE(734);
      if (lookahead == 'L')
        ADVANCE(735);
      if (lookahead == 'N')
        ADVANCE(736);
      if (lookahead == 'O')
        ADVANCE(737);
      if (lookahead == 'R')
        ADVANCE(738);
      if (lookahead == 'S')
        ADVANCE(739);
      if (lookahead == 'U')
        ADVANCE(740);
      if (lookahead == 'V')
        ADVANCE(741);
      if (lookahead == 'X')
        ADVANCE(742);
      if (lookahead == '\\')
        ADVANCE(507);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == 'a')
        ADVANCE(743);
      if (lookahead == 'b')
        ADVANCE(744);
      if (lookahead == 'f')
        ADVANCE(745);
      if (lookahead == 'n')
        ADVANCE(164);
      if (lookahead == 'o')
        ADVANCE(746);
      if (lookahead == 'r')
        ADVANCE(165);
      if (lookahead == 't')
        ADVANCE(166);
      if (lookahead == 'v')
        ADVANCE(167);
      if (lookahead == 'x')
        ADVANCE(747);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(644);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(508);
      END_STATE();
    case 698:
      if (lookahead == 'C')
        ADVANCE(699);
      END_STATE();
    case 699:
      if (lookahead == 'K')
        ADVANCE(700);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_ACK);
      END_STATE();
    case 701:
      if (lookahead == 'E')
        ADVANCE(702);
      if (lookahead == 'S')
        ADVANCE(704);
      END_STATE();
    case 702:
      if (lookahead == 'L')
        ADVANCE(703);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_BEL);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_BS);
      END_STATE();
    case 705:
      if (lookahead == 'A')
        ADVANCE(706);
      if (lookahead == 'R')
        ADVANCE(708);
      END_STATE();
    case 706:
      if (lookahead == 'N')
        ADVANCE(707);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_CAN);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    case 709:
      if (lookahead == 'C')
        ADVANCE(710);
      if (lookahead == 'E')
        ADVANCE(715);
      if (lookahead == 'L')
        ADVANCE(717);
      END_STATE();
    case 710:
      if (lookahead == '1')
        ADVANCE(711);
      if (lookahead == '2')
        ADVANCE(712);
      if (lookahead == '3')
        ADVANCE(713);
      if (lookahead == '4')
        ADVANCE(714);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_DC1);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_DC2);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_DC3);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_DC4);
      END_STATE();
    case 715:
      if (lookahead == 'L')
        ADVANCE(716);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_DEL);
      END_STATE();
    case 717:
      if (lookahead == 'E')
        ADVANCE(718);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_DLE);
      END_STATE();
    case 719:
      if (lookahead == 'M')
        ADVANCE(720);
      if (lookahead == 'N')
        ADVANCE(721);
      if (lookahead == 'O')
        ADVANCE(723);
      if (lookahead == 'S')
        ADVANCE(725);
      if (lookahead == 'T')
        ADVANCE(727);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_EM);
      END_STATE();
    case 721:
      if (lookahead == 'Q')
        ADVANCE(722);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_ENQ);
      END_STATE();
    case 723:
      if (lookahead == 'T')
        ADVANCE(724);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_EOT);
      END_STATE();
    case 725:
      if (lookahead == 'C')
        ADVANCE(726);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_ESC);
      END_STATE();
    case 727:
      if (lookahead == 'B')
        ADVANCE(728);
      if (lookahead == 'X')
        ADVANCE(729);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_ETB);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_ETX);
      END_STATE();
    case 730:
      if (lookahead == 'F')
        ADVANCE(731);
      if (lookahead == 'S')
        ADVANCE(732);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_FF);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_FS);
      END_STATE();
    case 733:
      if (lookahead == 'S')
        ADVANCE(130);
      END_STATE();
    case 734:
      if (lookahead == 'T')
        ADVANCE(132);
      END_STATE();
    case 735:
      if (lookahead == 'F')
        ADVANCE(134);
      END_STATE();
    case 736:
      if (lookahead == 'A')
        ADVANCE(136);
      if (lookahead == 'U')
        ADVANCE(138);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 738:
      if (lookahead == 'S')
        ADVANCE(141);
      END_STATE();
    case 739:
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
    case 740:
      if (lookahead == 'S')
        ADVANCE(154);
      END_STATE();
    case 741:
      if (lookahead == 'T')
        ADVANCE(156);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 748:
      if (lookahead == '\t')
        ADVANCE(510);
      if (lookahead == '\n')
        ADVANCE(749);
      if (lookahead == 11)
        ADVANCE(97);
      if (lookahead == '\r')
        ADVANCE(760);
      if (lookahead == ' ')
        ADVANCE(505);
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
        ADVANCE(256);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(264);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == 'A')
        ADVANCE(761);
      if (lookahead == 'B')
        ADVANCE(762);
      if (lookahead == 'C')
        ADVANCE(763);
      if (lookahead == 'D')
        ADVANCE(764);
      if (lookahead == 'E')
        ADVANCE(765);
      if (lookahead == 'F')
        ADVANCE(766);
      if (lookahead == 'G')
        ADVANCE(129);
      if (lookahead == 'H')
        ADVANCE(131);
      if (lookahead == 'L')
        ADVANCE(133);
      if (lookahead == 'N')
        ADVANCE(135);
      if (lookahead == 'O')
        ADVANCE(737);
      if (lookahead == 'R')
        ADVANCE(140);
      if (lookahead == 'S')
        ADVANCE(142);
      if (lookahead == 'U')
        ADVANCE(153);
      if (lookahead == 'V')
        ADVANCE(155);
      if (lookahead == 'X')
        ADVANCE(742);
      if (lookahead == '[')
        ADVANCE(506);
      if (lookahead == '\\')
        ADVANCE(507);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '_')
        ADVANCE(162);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == 'a')
        ADVANCE(743);
      if (lookahead == 'b')
        ADVANCE(744);
      if (lookahead == 'f')
        ADVANCE(745);
      if (lookahead == 'n')
        ADVANCE(164);
      if (lookahead == 'o')
        ADVANCE(746);
      if (lookahead == 'r')
        ADVANCE(165);
      if (lookahead == 't')
        ADVANCE(166);
      if (lookahead == 'v')
        ADVANCE(167);
      if (lookahead == 'x')
        ADVANCE(747);
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
        ADVANCE(508);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(750);
      if (lookahead == '\n')
        ADVANCE(749);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(751);
      if (lookahead == ' ')
        ADVANCE(752);
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
        ADVANCE(184);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(192);
      if (lookahead == '=')
        ADVANCE(193);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == 'A')
        ADVANCE(753);
      if (lookahead == 'B')
        ADVANCE(754);
      if (lookahead == 'C')
        ADVANCE(755);
      if (lookahead == 'D')
        ADVANCE(756);
      if (lookahead == 'E')
        ADVANCE(757);
      if (lookahead == 'F')
        ADVANCE(758);
      if (lookahead == 'G')
        ADVANCE(44);
      if (lookahead == 'H')
        ADVANCE(46);
      if (lookahead == 'L')
        ADVANCE(48);
      if (lookahead == 'N')
        ADVANCE(50);
      if (lookahead == 'O')
        ADVANCE(685);
      if (lookahead == 'R')
        ADVANCE(55);
      if (lookahead == 'S')
        ADVANCE(57);
      if (lookahead == 'U')
        ADVANCE(68);
      if (lookahead == 'V')
        ADVANCE(70);
      if (lookahead == 'X')
        ADVANCE(690);
      if (lookahead == '[')
        ADVANCE(501);
      if (lookahead == '\\')
        ADVANCE(759);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(77);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == 'a')
        ADVANCE(692);
      if (lookahead == 'b')
        ADVANCE(693);
      if (lookahead == 'f')
        ADVANCE(694);
      if (lookahead == 'n')
        ADVANCE(79);
      if (lookahead == 'o')
        ADVANCE(695);
      if (lookahead == 'r')
        ADVANCE(80);
      if (lookahead == 't')
        ADVANCE(81);
      if (lookahead == 'v')
        ADVANCE(82);
      if (lookahead == 'x')
        ADVANCE(696);
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
        ADVANCE(503);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(750);
      if (lookahead == '\n')
        ADVANCE(749);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(751);
      if (lookahead == ' ')
        ADVANCE(752);
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
        ADVANCE(184);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(192);
      if (lookahead == '=')
        ADVANCE(193);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == 'A')
        ADVANCE(753);
      if (lookahead == 'B')
        ADVANCE(754);
      if (lookahead == 'C')
        ADVANCE(755);
      if (lookahead == 'D')
        ADVANCE(756);
      if (lookahead == 'E')
        ADVANCE(757);
      if (lookahead == 'F')
        ADVANCE(758);
      if (lookahead == 'G')
        ADVANCE(44);
      if (lookahead == 'H')
        ADVANCE(46);
      if (lookahead == 'L')
        ADVANCE(48);
      if (lookahead == 'N')
        ADVANCE(50);
      if (lookahead == 'O')
        ADVANCE(685);
      if (lookahead == 'R')
        ADVANCE(55);
      if (lookahead == 'S')
        ADVANCE(57);
      if (lookahead == 'U')
        ADVANCE(68);
      if (lookahead == 'V')
        ADVANCE(70);
      if (lookahead == 'X')
        ADVANCE(690);
      if (lookahead == '[')
        ADVANCE(501);
      if (lookahead == '\\')
        ADVANCE(759);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(77);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == 'a')
        ADVANCE(692);
      if (lookahead == 'b')
        ADVANCE(693);
      if (lookahead == 'f')
        ADVANCE(694);
      if (lookahead == 'n')
        ADVANCE(79);
      if (lookahead == 'o')
        ADVANCE(695);
      if (lookahead == 'r')
        ADVANCE(80);
      if (lookahead == 't')
        ADVANCE(81);
      if (lookahead == 'v')
        ADVANCE(82);
      if (lookahead == 'x')
        ADVANCE(696);
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
        ADVANCE(503);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 751:
      if (lookahead == '\t')
        ADVANCE(750);
      if (lookahead == '\n')
        ADVANCE(749);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(751);
      if (lookahead == ' ')
        ADVANCE(752);
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
        ADVANCE(184);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(192);
      if (lookahead == '=')
        ADVANCE(193);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == 'A')
        ADVANCE(753);
      if (lookahead == 'B')
        ADVANCE(754);
      if (lookahead == 'C')
        ADVANCE(755);
      if (lookahead == 'D')
        ADVANCE(756);
      if (lookahead == 'E')
        ADVANCE(757);
      if (lookahead == 'F')
        ADVANCE(758);
      if (lookahead == 'G')
        ADVANCE(44);
      if (lookahead == 'H')
        ADVANCE(46);
      if (lookahead == 'L')
        ADVANCE(48);
      if (lookahead == 'N')
        ADVANCE(50);
      if (lookahead == 'O')
        ADVANCE(685);
      if (lookahead == 'R')
        ADVANCE(55);
      if (lookahead == 'S')
        ADVANCE(57);
      if (lookahead == 'U')
        ADVANCE(68);
      if (lookahead == 'V')
        ADVANCE(70);
      if (lookahead == 'X')
        ADVANCE(690);
      if (lookahead == '[')
        ADVANCE(501);
      if (lookahead == '\\')
        ADVANCE(759);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(77);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == 'a')
        ADVANCE(692);
      if (lookahead == 'b')
        ADVANCE(693);
      if (lookahead == 'f')
        ADVANCE(694);
      if (lookahead == 'n')
        ADVANCE(79);
      if (lookahead == 'o')
        ADVANCE(695);
      if (lookahead == 'r')
        ADVANCE(80);
      if (lookahead == 't')
        ADVANCE(81);
      if (lookahead == 'v')
        ADVANCE(82);
      if (lookahead == 'x')
        ADVANCE(696);
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
        ADVANCE(503);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(750);
      if (lookahead == '\n')
        ADVANCE(749);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(751);
      if (lookahead == ' ')
        ADVANCE(752);
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
        ADVANCE(184);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(192);
      if (lookahead == '=')
        ADVANCE(193);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == 'A')
        ADVANCE(753);
      if (lookahead == 'B')
        ADVANCE(754);
      if (lookahead == 'C')
        ADVANCE(755);
      if (lookahead == 'D')
        ADVANCE(756);
      if (lookahead == 'E')
        ADVANCE(757);
      if (lookahead == 'F')
        ADVANCE(758);
      if (lookahead == 'G')
        ADVANCE(44);
      if (lookahead == 'H')
        ADVANCE(46);
      if (lookahead == 'L')
        ADVANCE(48);
      if (lookahead == 'N')
        ADVANCE(50);
      if (lookahead == 'O')
        ADVANCE(685);
      if (lookahead == 'R')
        ADVANCE(55);
      if (lookahead == 'S')
        ADVANCE(57);
      if (lookahead == 'U')
        ADVANCE(68);
      if (lookahead == 'V')
        ADVANCE(70);
      if (lookahead == 'X')
        ADVANCE(690);
      if (lookahead == '[')
        ADVANCE(501);
      if (lookahead == '\\')
        ADVANCE(759);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(77);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == 'a')
        ADVANCE(692);
      if (lookahead == 'b')
        ADVANCE(693);
      if (lookahead == 'f')
        ADVANCE(694);
      if (lookahead == 'n')
        ADVANCE(79);
      if (lookahead == 'o')
        ADVANCE(695);
      if (lookahead == 'r')
        ADVANCE(80);
      if (lookahead == 't')
        ADVANCE(81);
      if (lookahead == 'v')
        ADVANCE(82);
      if (lookahead == 'x')
        ADVANCE(696);
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
        ADVANCE(503);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(647);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(650);
      if (lookahead == 'S')
        ADVANCE(652);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(654);
      if (lookahead == 'R')
        ADVANCE(656);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(658);
      if (lookahead == 'E')
        ADVANCE(663);
      if (lookahead == 'L')
        ADVANCE(665);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'M')
        ADVANCE(668);
      if (lookahead == 'N')
        ADVANCE(669);
      if (lookahead == 'O')
        ADVANCE(671);
      if (lookahead == 'S')
        ADVANCE(673);
      if (lookahead == 'T')
        ADVANCE(675);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(679);
      if (lookahead == 'S')
        ADVANCE(680);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(751);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 760:
      if (lookahead == '\t')
        ADVANCE(510);
      if (lookahead == '\n')
        ADVANCE(749);
      if (lookahead == 11)
        ADVANCE(97);
      if (lookahead == '\r')
        ADVANCE(760);
      if (lookahead == ' ')
        ADVANCE(505);
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
        ADVANCE(256);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(264);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == 'A')
        ADVANCE(761);
      if (lookahead == 'B')
        ADVANCE(762);
      if (lookahead == 'C')
        ADVANCE(763);
      if (lookahead == 'D')
        ADVANCE(764);
      if (lookahead == 'E')
        ADVANCE(765);
      if (lookahead == 'F')
        ADVANCE(766);
      if (lookahead == 'G')
        ADVANCE(129);
      if (lookahead == 'H')
        ADVANCE(131);
      if (lookahead == 'L')
        ADVANCE(133);
      if (lookahead == 'N')
        ADVANCE(135);
      if (lookahead == 'O')
        ADVANCE(737);
      if (lookahead == 'R')
        ADVANCE(140);
      if (lookahead == 'S')
        ADVANCE(142);
      if (lookahead == 'U')
        ADVANCE(153);
      if (lookahead == 'V')
        ADVANCE(155);
      if (lookahead == 'X')
        ADVANCE(742);
      if (lookahead == '[')
        ADVANCE(506);
      if (lookahead == '\\')
        ADVANCE(507);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '_')
        ADVANCE(162);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == 'a')
        ADVANCE(743);
      if (lookahead == 'b')
        ADVANCE(744);
      if (lookahead == 'f')
        ADVANCE(745);
      if (lookahead == 'n')
        ADVANCE(164);
      if (lookahead == 'o')
        ADVANCE(746);
      if (lookahead == 'r')
        ADVANCE(165);
      if (lookahead == 't')
        ADVANCE(166);
      if (lookahead == 'v')
        ADVANCE(167);
      if (lookahead == 'x')
        ADVANCE(747);
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
        ADVANCE(508);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(699);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'E')
        ADVANCE(702);
      if (lookahead == 'S')
        ADVANCE(704);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'A')
        ADVANCE(706);
      if (lookahead == 'R')
        ADVANCE(708);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(710);
      if (lookahead == 'E')
        ADVANCE(715);
      if (lookahead == 'L')
        ADVANCE(717);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'M')
        ADVANCE(720);
      if (lookahead == 'N')
        ADVANCE(721);
      if (lookahead == 'O')
        ADVANCE(723);
      if (lookahead == 'S')
        ADVANCE(725);
      if (lookahead == 'T')
        ADVANCE(727);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'F')
        ADVANCE(731);
      if (lookahead == 'S')
        ADVANCE(732);
      END_STATE();
    case 767:
      if (lookahead == '\n')
        ADVANCE(768);
      if (lookahead == '\r')
        ADVANCE(772);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(773);
      if (lookahead == 'd')
        ADVANCE(774);
      if (lookahead == 'w')
        ADVANCE(594);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(767);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 768:
      if (lookahead == '\n')
        ADVANCE(768);
      if (lookahead == '\r')
        ADVANCE(768);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(769);
      if (lookahead == 'd')
        ADVANCE(770);
      if (lookahead == 'w')
        ADVANCE(587);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(768);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 769:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(768);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(771);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 772:
      if (lookahead == '\n')
        ADVANCE(768);
      if (lookahead == '\r')
        ADVANCE(772);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(773);
      if (lookahead == 'd')
        ADVANCE(774);
      if (lookahead == 'w')
        ADVANCE(594);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(767);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 773:
      if (lookahead == 'n')
        SKIP(767);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'o')
        ADVANCE(775);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '\'')
        ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 776:
      if (lookahead == '\n')
        ADVANCE(777);
      if (lookahead == '\r')
        ADVANCE(779);
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
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ':')
        ADVANCE(407);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(780);
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
        SKIP(776);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 777:
      if (lookahead == '\n')
        ADVANCE(777);
      if (lookahead == '\r')
        ADVANCE(777);
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
        ADVANCE(328);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ':')
        ADVANCE(356);
      if (lookahead == '=')
        ADVANCE(193);
      if (lookahead == '[')
        ADVANCE(72);
      if (lookahead == '\\')
        ADVANCE(778);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '_')
        ADVANCE(468);
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
        ADVANCE(777);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 778:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(777);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 779:
      if (lookahead == '\n')
        ADVANCE(777);
      if (lookahead == '\r')
        ADVANCE(779);
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
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ':')
        ADVANCE(407);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(780);
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
        SKIP(776);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 780:
      if (lookahead == 'n')
        SKIP(776);
      END_STATE();
    case 781:
      if (lookahead == '\n')
        ADVANCE(782);
      if (lookahead == '\r')
        ADVANCE(785);
      if (lookahead == '(')
        ADVANCE(106);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(406);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(786);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(781);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(787);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 782:
      if (lookahead == '\n')
        ADVANCE(782);
      if (lookahead == '\r')
        ADVANCE(782);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(355);
      if (lookahead == '[')
        ADVANCE(72);
      if (lookahead == '\\')
        ADVANCE(783);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(782);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(784);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 783:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(782);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym__constructor_pattern);
      if (lookahead == '\'')
        ADVANCE(784);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(784);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 785:
      if (lookahead == '\n')
        ADVANCE(782);
      if (lookahead == '\r')
        ADVANCE(785);
      if (lookahead == '(')
        ADVANCE(106);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(406);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(786);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(781);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(787);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 786:
      if (lookahead == 'n')
        SKIP(781);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym__constructor_pattern);
      if (lookahead == '\'')
        ADVANCE(787);
      if (lookahead == '.')
        ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(787);
      END_STATE();
    case 788:
      if (lookahead == '\n')
        ADVANCE(789);
      if (lookahead == '\r')
        ADVANCE(791);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '\\')
        SKIP(792);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(788);
      END_STATE();
    case 789:
      if (lookahead == '\n')
        ADVANCE(789);
      if (lookahead == '\r')
        ADVANCE(789);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == '\\')
        ADVANCE(790);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(789);
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
      if (lookahead == '\n')
        ADVANCE(789);
      if (lookahead == '\r')
        ADVANCE(791);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '\\')
        SKIP(792);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(788);
      END_STATE();
    case 792:
      if (lookahead == 'n')
        SKIP(788);
      END_STATE();
    case 793:
      if (lookahead == '\n')
        ADVANCE(794);
      if (lookahead == '\r')
        ADVANCE(806);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '\\')
        SKIP(807);
      if (lookahead == 's')
        ADVANCE(808);
      if (lookahead == 'u')
        ADVANCE(812);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(793);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 794:
      if (lookahead == '\n')
        ADVANCE(794);
      if (lookahead == '\r')
        ADVANCE(794);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == '\\')
        ADVANCE(795);
      if (lookahead == 's')
        ADVANCE(796);
      if (lookahead == 'u')
        ADVANCE(800);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(794);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 795:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(794);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(797);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(798);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(799);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(anon_sym_safe);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(801);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(802);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(803);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(804);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(805);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(anon_sym_unsafe);
      if (lookahead == '\'')
        ADVANCE(196);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 806:
      if (lookahead == '\n')
        ADVANCE(794);
      if (lookahead == '\r')
        ADVANCE(806);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '\\')
        SKIP(807);
      if (lookahead == 's')
        ADVANCE(808);
      if (lookahead == 'u')
        ADVANCE(812);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(793);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 807:
      if (lookahead == 'n')
        SKIP(793);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'a')
        ADVANCE(809);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'f')
        ADVANCE(810);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'e')
        ADVANCE(811);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(anon_sym_safe);
      if (lookahead == '\'')
        ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'n')
        ADVANCE(813);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 's')
        ADVANCE(814);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'a')
        ADVANCE(815);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'f')
        ADVANCE(816);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == 'e')
        ADVANCE(817);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(anon_sym_unsafe);
      if (lookahead == '\'')
        ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 818:
      if (lookahead == '\n')
        ADVANCE(819);
      if (lookahead == '\r')
        ADVANCE(821);
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
        ADVANCE(256);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == '<')
        ADVANCE(264);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(822);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == 'w')
        ADVANCE(594);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(818);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 819:
      if (lookahead == '\n')
        ADVANCE(819);
      if (lookahead == '\r')
        ADVANCE(819);
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
        ADVANCE(184);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == '<')
        ADVANCE(192);
      if (lookahead == '=')
        ADVANCE(39);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(820);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == 'w')
        ADVANCE(587);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == 8902)
        ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(819);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 820:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(819);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 821:
      if (lookahead == '\n')
        ADVANCE(819);
      if (lookahead == '\r')
        ADVANCE(821);
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
        ADVANCE(256);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == '<')
        ADVANCE(264);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(822);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == 'w')
        ADVANCE(594);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == 8902)
        ADVANCE(172);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(818);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 822:
      if (lookahead == 'n')
        SKIP(818);
      END_STATE();
    case 823:
      if (lookahead == '\n')
        ADVANCE(824);
      if (lookahead == '\r')
        ADVANCE(826);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '\\')
        SKIP(827);
      if (lookahead == 'd')
        ADVANCE(550);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(823);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 824:
      if (lookahead == '\n')
        ADVANCE(824);
      if (lookahead == '\r')
        ADVANCE(824);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(193);
      if (lookahead == '\\')
        ADVANCE(825);
      if (lookahead == 'd')
        ADVANCE(540);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(824);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 825:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(824);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 826:
      if (lookahead == '\n')
        ADVANCE(824);
      if (lookahead == '\r')
        ADVANCE(826);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '\\')
        SKIP(827);
      if (lookahead == 'd')
        ADVANCE(550);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(823);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 827:
      if (lookahead == 'n')
        SKIP(823);
      END_STATE();
    case 828:
      if (lookahead == '\n')
        ADVANCE(829);
      if (lookahead == '\r')
        ADVANCE(831);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '\\')
        SKIP(832);
      if (lookahead == 'd')
        ADVANCE(490);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(828);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 829:
      if (lookahead == '\n')
        ADVANCE(829);
      if (lookahead == '\r')
        ADVANCE(829);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(193);
      if (lookahead == '\\')
        ADVANCE(830);
      if (lookahead == 'd')
        ADVANCE(480);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(829);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 830:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(829);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 831:
      if (lookahead == '\n')
        ADVANCE(829);
      if (lookahead == '\r')
        ADVANCE(831);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '\\')
        SKIP(832);
      if (lookahead == 'd')
        ADVANCE(490);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(828);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 832:
      if (lookahead == 'n')
        SKIP(828);
      END_STATE();
    case 833:
      if (lookahead == '\n')
        ADVANCE(834);
      if (lookahead == '\r')
        ADVANCE(836);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '\\')
        SKIP(837);
      if (lookahead == 'd')
        ADVANCE(550);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(833);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 834:
      if (lookahead == '\n')
        ADVANCE(834);
      if (lookahead == '\r')
        ADVANCE(834);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(193);
      if (lookahead == '\\')
        ADVANCE(835);
      if (lookahead == 'd')
        ADVANCE(540);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(834);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 835:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(834);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 836:
      if (lookahead == '\n')
        ADVANCE(834);
      if (lookahead == '\r')
        ADVANCE(836);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '\\')
        SKIP(837);
      if (lookahead == 'd')
        ADVANCE(550);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(833);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 837:
      if (lookahead == 'n')
        SKIP(833);
      END_STATE();
    case 838:
      if (lookahead == '\n')
        ADVANCE(839);
      if (lookahead == '\r')
        ADVANCE(841);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(842);
      if (lookahead == 'd')
        ADVANCE(490);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(838);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 839:
      if (lookahead == '\n')
        ADVANCE(839);
      if (lookahead == '\r')
        ADVANCE(839);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(840);
      if (lookahead == 'd')
        ADVANCE(480);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(839);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 840:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(839);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 841:
      if (lookahead == '\n')
        ADVANCE(839);
      if (lookahead == '\r')
        ADVANCE(841);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(842);
      if (lookahead == 'd')
        ADVANCE(490);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(838);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 842:
      if (lookahead == 'n')
        SKIP(838);
      END_STATE();
    case 843:
      if (lookahead == '\n')
        ADVANCE(844);
      if (lookahead == '\r')
        ADVANCE(846);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(847);
      if (lookahead == 'd')
        ADVANCE(490);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(843);
      END_STATE();
    case 844:
      if (lookahead == '\n')
        ADVANCE(844);
      if (lookahead == '\r')
        ADVANCE(844);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(845);
      if (lookahead == 'd')
        ADVANCE(480);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(844);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 845:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(844);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 846:
      if (lookahead == '\n')
        ADVANCE(844);
      if (lookahead == '\r')
        ADVANCE(846);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(847);
      if (lookahead == 'd')
        ADVANCE(490);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(843);
      END_STATE();
    case 847:
      if (lookahead == 'n')
        SKIP(843);
      END_STATE();
    case 848:
      if (lookahead == '\n')
        ADVANCE(849);
      if (lookahead == '\r')
        ADVANCE(851);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(852);
      if (lookahead == 'd')
        ADVANCE(490);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(848);
      END_STATE();
    case 849:
      if (lookahead == '\n')
        ADVANCE(849);
      if (lookahead == '\r')
        ADVANCE(849);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(850);
      if (lookahead == 'd')
        ADVANCE(480);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(849);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 850:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(849);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 851:
      if (lookahead == '\n')
        ADVANCE(849);
      if (lookahead == '\r')
        ADVANCE(851);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(852);
      if (lookahead == 'd')
        ADVANCE(490);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(848);
      END_STATE();
    case 852:
      if (lookahead == 'n')
        SKIP(848);
      END_STATE();
    case 853:
      if (lookahead == '\n')
        ADVANCE(854);
      if (lookahead == '\r')
        ADVANCE(856);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(857);
      if (lookahead == 'd')
        ADVANCE(550);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(853);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 854:
      if (lookahead == '\n')
        ADVANCE(854);
      if (lookahead == '\r')
        ADVANCE(854);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(855);
      if (lookahead == 'd')
        ADVANCE(540);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(854);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 855:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(854);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 856:
      if (lookahead == '\n')
        ADVANCE(854);
      if (lookahead == '\r')
        ADVANCE(856);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(857);
      if (lookahead == 'd')
        ADVANCE(550);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(853);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 857:
      if (lookahead == 'n')
        SKIP(853);
      END_STATE();
    case 858:
      if (lookahead == '\n')
        ADVANCE(859);
      if (lookahead == '\r')
        ADVANCE(861);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(862);
      if (lookahead == 'd')
        ADVANCE(550);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(858);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 859:
      if (lookahead == '\n')
        ADVANCE(859);
      if (lookahead == '\r')
        ADVANCE(859);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(39);
      if (lookahead == '\\')
        ADVANCE(860);
      if (lookahead == 'd')
        ADVANCE(540);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(859);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 860:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(859);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 861:
      if (lookahead == '\n')
        ADVANCE(859);
      if (lookahead == '\r')
        ADVANCE(861);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(862);
      if (lookahead == 'd')
        ADVANCE(550);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(858);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 862:
      if (lookahead == 'n')
        SKIP(858);
      END_STATE();
    case 863:
      if (lookahead == '\n')
        ADVANCE(864);
      if (lookahead == '\r')
        ADVANCE(866);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(867);
      if (lookahead == 'd')
        ADVANCE(490);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(863);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 864:
      if (lookahead == '\n')
        ADVANCE(864);
      if (lookahead == '\r')
        ADVANCE(864);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(39);
      if (lookahead == '\\')
        ADVANCE(865);
      if (lookahead == 'd')
        ADVANCE(480);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(864);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 865:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(864);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 866:
      if (lookahead == '\n')
        ADVANCE(864);
      if (lookahead == '\r')
        ADVANCE(866);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(867);
      if (lookahead == 'd')
        ADVANCE(490);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(863);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 867:
      if (lookahead == 'n')
        SKIP(863);
      END_STATE();
    case 868:
      if (lookahead == '\n')
        ADVANCE(869);
      if (lookahead == '\r')
        ADVANCE(871);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(872);
      if (lookahead == 'd')
        ADVANCE(490);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(868);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 869:
      if (lookahead == '\n')
        ADVANCE(869);
      if (lookahead == '\r')
        ADVANCE(869);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(39);
      if (lookahead == '\\')
        ADVANCE(870);
      if (lookahead == 'd')
        ADVANCE(480);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(869);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 870:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(869);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 871:
      if (lookahead == '\n')
        ADVANCE(869);
      if (lookahead == '\r')
        ADVANCE(871);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(872);
      if (lookahead == 'd')
        ADVANCE(490);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(868);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 872:
      if (lookahead == 'n')
        SKIP(868);
      END_STATE();
    case 873:
      if (lookahead == '\n')
        ADVANCE(874);
      if (lookahead == '\r')
        ADVANCE(876);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(877);
      if (lookahead == 'd')
        ADVANCE(490);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(873);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 874:
      if (lookahead == '\n')
        ADVANCE(874);
      if (lookahead == '\r')
        ADVANCE(874);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(39);
      if (lookahead == '\\')
        ADVANCE(875);
      if (lookahead == 'd')
        ADVANCE(480);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(874);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 875:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(874);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 876:
      if (lookahead == '\n')
        ADVANCE(874);
      if (lookahead == '\r')
        ADVANCE(876);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(877);
      if (lookahead == 'd')
        ADVANCE(490);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(873);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 877:
      if (lookahead == 'n')
        SKIP(873);
      END_STATE();
    case 878:
      if (lookahead == '\n')
        ADVANCE(879);
      if (lookahead == '\r')
        ADVANCE(881);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(882);
      if (lookahead == 'd')
        ADVANCE(550);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(878);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 879:
      if (lookahead == '\n')
        ADVANCE(879);
      if (lookahead == '\r')
        ADVANCE(879);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(39);
      if (lookahead == '\\')
        ADVANCE(880);
      if (lookahead == 'd')
        ADVANCE(540);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(879);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
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
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(124);
      if (lookahead == '\\')
        SKIP(882);
      if (lookahead == 'd')
        ADVANCE(550);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(878);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
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
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == '[')
        ADVANCE(506);
      if (lookahead == '\\')
        ADVANCE(507);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '_')
        ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(883);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      END_STATE();
    case 884:
      if (lookahead == '\n')
        ADVANCE(884);
      if (lookahead == '\r')
        ADVANCE(884);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(501);
      if (lookahead == '\\')
        ADVANCE(885);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '^')
        ADVANCE(76);
      if (lookahead == '_')
        ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(884);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(anon_sym_BSLASH);
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
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == '[')
        ADVANCE(506);
      if (lookahead == '\\')
        ADVANCE(507);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '^')
        ADVANCE(161);
      if (lookahead == '_')
        ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(883);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      END_STATE();
    case 887:
      if (lookahead == '\n')
        ADVANCE(888);
      if (lookahead == '\r')
        ADVANCE(891);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '\\')
        SKIP(892);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(887);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(893);
      END_STATE();
    case 888:
      if (lookahead == '\n')
        ADVANCE(888);
      if (lookahead == '\r')
        ADVANCE(888);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == '\\')
        ADVANCE(889);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(888);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(890);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 889:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(888);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 891:
      if (lookahead == '\n')
        ADVANCE(888);
      if (lookahead == '\r')
        ADVANCE(891);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '\\')
        SKIP(892);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(887);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(893);
      END_STATE();
    case 892:
      if (lookahead == 'n')
        SKIP(887);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      END_STATE();
    case 894:
      if (lookahead == '\n')
        ADVANCE(895);
      if (lookahead == '\r')
        ADVANCE(898);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '\\')
        SKIP(899);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(894);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(900);
      END_STATE();
    case 895:
      if (lookahead == '\n')
        ADVANCE(895);
      if (lookahead == '\r')
        ADVANCE(895);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == '\\')
        ADVANCE(896);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(895);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(897);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 896:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(895);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 898:
      if (lookahead == '\n')
        ADVANCE(895);
      if (lookahead == '\r')
        ADVANCE(898);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '\\')
        SKIP(899);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(894);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(900);
      END_STATE();
    case 899:
      if (lookahead == 'n')
        SKIP(894);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    case 901:
      if (lookahead == '\n')
        ADVANCE(902);
      if (lookahead == '\r')
        ADVANCE(904);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '\\')
        SKIP(905);
      if (lookahead == 'd')
        ADVANCE(774);
      if (lookahead == 'w')
        ADVANCE(594);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(901);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 902:
      if (lookahead == '\n')
        ADVANCE(902);
      if (lookahead == '\r')
        ADVANCE(902);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(193);
      if (lookahead == '\\')
        ADVANCE(903);
      if (lookahead == 'd')
        ADVANCE(770);
      if (lookahead == 'w')
        ADVANCE(587);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(902);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 903:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(902);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 904:
      if (lookahead == '\n')
        ADVANCE(902);
      if (lookahead == '\r')
        ADVANCE(904);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '\\')
        SKIP(905);
      if (lookahead == 'd')
        ADVANCE(774);
      if (lookahead == 'w')
        ADVANCE(594);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(901);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 905:
      if (lookahead == 'n')
        SKIP(901);
      END_STATE();
    case 906:
      if (lookahead == '\n')
        ADVANCE(907);
      if (lookahead == '\r')
        ADVANCE(909);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(910);
      if (lookahead == 'd')
        ADVANCE(774);
      if (lookahead == 'w')
        ADVANCE(594);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(906);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 907:
      if (lookahead == '\n')
        ADVANCE(907);
      if (lookahead == '\r')
        ADVANCE(907);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(908);
      if (lookahead == 'd')
        ADVANCE(770);
      if (lookahead == 'w')
        ADVANCE(587);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(907);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 908:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(907);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 909:
      if (lookahead == '\n')
        ADVANCE(907);
      if (lookahead == '\r')
        ADVANCE(909);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(910);
      if (lookahead == 'd')
        ADVANCE(774);
      if (lookahead == 'w')
        ADVANCE(594);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(906);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 910:
      if (lookahead == 'n')
        SKIP(906);
      END_STATE();
    case 911:
      if (lookahead == '\n')
        ADVANCE(912);
      if (lookahead == '\r')
        ADVANCE(914);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(915);
      if (lookahead == 'd')
        ADVANCE(774);
      if (lookahead == 'w')
        ADVANCE(594);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(911);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 912:
      if (lookahead == '\n')
        ADVANCE(912);
      if (lookahead == '\r')
        ADVANCE(912);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(913);
      if (lookahead == 'd')
        ADVANCE(770);
      if (lookahead == 'w')
        ADVANCE(587);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(912);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 913:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(912);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 914:
      if (lookahead == '\n')
        ADVANCE(912);
      if (lookahead == '\r')
        ADVANCE(914);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(915);
      if (lookahead == 'd')
        ADVANCE(774);
      if (lookahead == 'w')
        ADVANCE(594);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(911);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 915:
      if (lookahead == 'n')
        SKIP(911);
      END_STATE();
    case 916:
      if (lookahead == '\n')
        ADVANCE(917);
      if (lookahead == '\r')
        ADVANCE(919);
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
        ADVANCE(256);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == '<')
        ADVANCE(264);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(920);
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
        SKIP(916);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 917:
      if (lookahead == '\n')
        ADVANCE(917);
      if (lookahead == '\r')
        ADVANCE(917);
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
        ADVANCE(184);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == '<')
        ADVANCE(192);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '\\')
        ADVANCE(918);
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
        ADVANCE(917);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 918:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(917);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 919:
      if (lookahead == '\n')
        ADVANCE(917);
      if (lookahead == '\r')
        ADVANCE(919);
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
        ADVANCE(256);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == '<')
        ADVANCE(264);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '\\')
        SKIP(920);
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
        SKIP(916);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 920:
      if (lookahead == 'n')
        SKIP(916);
      END_STATE();
    case 921:
      if (lookahead == '\n')
        ADVANCE(922);
      if (lookahead == '\r')
        ADVANCE(924);
      if (lookahead == '-')
        ADVANCE(406);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(925);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(921);
      END_STATE();
    case 922:
      if (lookahead == '\n')
        ADVANCE(922);
      if (lookahead == '\r')
        ADVANCE(922);
      if (lookahead == '-')
        ADVANCE(355);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(923);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(922);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 923:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(922);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 924:
      if (lookahead == '\n')
        ADVANCE(922);
      if (lookahead == '\r')
        ADVANCE(924);
      if (lookahead == '-')
        ADVANCE(406);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(925);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(921);
      END_STATE();
    case 925:
      if (lookahead == 'n')
        SKIP(921);
      END_STATE();
    case 926:
      if (lookahead == '\n')
        ADVANCE(927);
      if (lookahead == '\r')
        ADVANCE(929);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(406);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(408);
      if (lookahead == '\\')
        SKIP(930);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(926);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 927:
      if (lookahead == '\n')
        ADVANCE(927);
      if (lookahead == '\r')
        ADVANCE(927);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == '-')
        ADVANCE(355);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(357);
      if (lookahead == '\\')
        ADVANCE(928);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(927);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 928:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(927);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 929:
      if (lookahead == '\n')
        ADVANCE(927);
      if (lookahead == '\r')
        ADVANCE(929);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(406);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(408);
      if (lookahead == '\\')
        SKIP(930);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(926);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 930:
      if (lookahead == 'n')
        SKIP(926);
      END_STATE();
    case 931:
      if (lookahead == '\n')
        ADVANCE(932);
      if (lookahead == '\r')
        ADVANCE(934);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(935);
      if (lookahead == 'c')
        ADVANCE(267);
      if (lookahead == 'd')
        ADVANCE(273);
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
        SKIP(931);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 932:
      if (lookahead == '\n')
        ADVANCE(932);
      if (lookahead == '\r')
        ADVANCE(932);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == '\\')
        ADVANCE(933);
      if (lookahead == 'c')
        ADVANCE(195);
      if (lookahead == 'd')
        ADVANCE(201);
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
        ADVANCE(932);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 933:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(932);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 934:
      if (lookahead == '\n')
        ADVANCE(932);
      if (lookahead == '\r')
        ADVANCE(934);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(935);
      if (lookahead == 'c')
        ADVANCE(267);
      if (lookahead == 'd')
        ADVANCE(273);
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
        SKIP(931);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 935:
      if (lookahead == 'n')
        SKIP(931);
      END_STATE();
    case 936:
      if (lookahead == '\n')
        ADVANCE(937);
      if (lookahead == '\r')
        ADVANCE(939);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(940);
      if (lookahead == 'h')
        ADVANCE(578);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(936);
      END_STATE();
    case 937:
      if (lookahead == '\n')
        ADVANCE(937);
      if (lookahead == '\r')
        ADVANCE(937);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(938);
      if (lookahead == 'h')
        ADVANCE(568);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(937);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 938:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(937);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 939:
      if (lookahead == '\n')
        ADVANCE(937);
      if (lookahead == '\r')
        ADVANCE(939);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(940);
      if (lookahead == 'h')
        ADVANCE(578);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(936);
      END_STATE();
    case 940:
      if (lookahead == 'n')
        SKIP(936);
      END_STATE();
    case 941:
      if (lookahead == '\n')
        ADVANCE(942);
      if (lookahead == '\r')
        ADVANCE(944);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '\\')
        SKIP(945);
      if (lookahead == 'w')
        ADVANCE(594);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(941);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 942:
      if (lookahead == '\n')
        ADVANCE(942);
      if (lookahead == '\r')
        ADVANCE(942);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == '=')
        ADVANCE(193);
      if (lookahead == '\\')
        ADVANCE(943);
      if (lookahead == 'w')
        ADVANCE(587);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(942);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 943:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(942);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 944:
      if (lookahead == '\n')
        ADVANCE(942);
      if (lookahead == '\r')
        ADVANCE(944);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '\\')
        SKIP(945);
      if (lookahead == 'w')
        ADVANCE(594);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(941);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 945:
      if (lookahead == 'n')
        SKIP(941);
      END_STATE();
    case 946:
      if (lookahead == '\n')
        ADVANCE(947);
      if (lookahead == '\r')
        ADVANCE(949);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '\\')
        SKIP(950);
      if (lookahead == 'd')
        ADVANCE(550);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(946);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 947:
      if (lookahead == '\n')
        ADVANCE(947);
      if (lookahead == '\r')
        ADVANCE(947);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(193);
      if (lookahead == '\\')
        ADVANCE(948);
      if (lookahead == 'd')
        ADVANCE(540);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(947);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 948:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(947);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 949:
      if (lookahead == '\n')
        ADVANCE(947);
      if (lookahead == '\r')
        ADVANCE(949);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '\\')
        SKIP(950);
      if (lookahead == 'd')
        ADVANCE(550);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(946);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 950:
      if (lookahead == 'n')
        SKIP(946);
      END_STATE();
    case 951:
      if (lookahead == '\n')
        ADVANCE(952);
      if (lookahead == '\r')
        ADVANCE(954);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '\\')
        SKIP(955);
      if (lookahead == 'd')
        ADVANCE(490);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(951);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 952:
      if (lookahead == '\n')
        ADVANCE(952);
      if (lookahead == '\r')
        ADVANCE(952);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(193);
      if (lookahead == '\\')
        ADVANCE(953);
      if (lookahead == 'd')
        ADVANCE(480);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(952);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 953:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(952);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 954:
      if (lookahead == '\n')
        ADVANCE(952);
      if (lookahead == '\r')
        ADVANCE(954);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '\\')
        SKIP(955);
      if (lookahead == 'd')
        ADVANCE(490);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(951);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 955:
      if (lookahead == 'n')
        SKIP(951);
      END_STATE();
    case 956:
      if (lookahead == '\n')
        ADVANCE(957);
      if (lookahead == '\r')
        ADVANCE(959);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '\\')
        SKIP(960);
      if (lookahead == 'd')
        ADVANCE(490);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(956);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 957:
      if (lookahead == '\n')
        ADVANCE(957);
      if (lookahead == '\r')
        ADVANCE(957);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(193);
      if (lookahead == '\\')
        ADVANCE(958);
      if (lookahead == 'd')
        ADVANCE(480);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(957);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
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
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '\\')
        SKIP(960);
      if (lookahead == 'd')
        ADVANCE(490);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(956);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
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
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '\\')
        SKIP(965);
      if (lookahead == 'd')
        ADVANCE(550);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(961);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 962:
      if (lookahead == '\n')
        ADVANCE(962);
      if (lookahead == '\r')
        ADVANCE(962);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(193);
      if (lookahead == '\\')
        ADVANCE(963);
      if (lookahead == 'd')
        ADVANCE(540);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(962);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
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
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '\\')
        SKIP(965);
      if (lookahead == 'd')
        ADVANCE(550);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(961);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 965:
      if (lookahead == 'n')
        SKIP(961);
      END_STATE();
    case 966:
      if (lookahead == '\n')
        ADVANCE(967);
      if (lookahead == '\r')
        ADVANCE(969);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '\\')
        SKIP(970);
      if (lookahead == 'd')
        ADVANCE(490);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(966);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 967:
      if (lookahead == '\n')
        ADVANCE(967);
      if (lookahead == '\r')
        ADVANCE(967);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(193);
      if (lookahead == '\\')
        ADVANCE(968);
      if (lookahead == 'd')
        ADVANCE(480);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(967);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 968:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(967);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 969:
      if (lookahead == '\n')
        ADVANCE(967);
      if (lookahead == '\r')
        ADVANCE(969);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '\\')
        SKIP(970);
      if (lookahead == 'd')
        ADVANCE(490);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(966);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 970:
      if (lookahead == 'n')
        SKIP(966);
      END_STATE();
    case 971:
      if (lookahead == '\n')
        ADVANCE(972);
      if (lookahead == '\r')
        ADVANCE(974);
      if (lookahead == '(')
        ADVANCE(106);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(406);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(975);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(971);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(787);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 972:
      if (lookahead == '\n')
        ADVANCE(972);
      if (lookahead == '\r')
        ADVANCE(972);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(355);
      if (lookahead == '=')
        ADVANCE(193);
      if (lookahead == '[')
        ADVANCE(72);
      if (lookahead == '\\')
        ADVANCE(973);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(972);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(784);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 973:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(972);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 974:
      if (lookahead == '\n')
        ADVANCE(972);
      if (lookahead == '\r')
        ADVANCE(974);
      if (lookahead == '(')
        ADVANCE(106);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(406);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(975);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(971);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(787);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 975:
      if (lookahead == 'n')
        SKIP(971);
      END_STATE();
    case 976:
      if (lookahead == '\n')
        ADVANCE(977);
      if (lookahead == '\r')
        ADVANCE(979);
      if (lookahead == '-')
        ADVANCE(406);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(980);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(976);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 977:
      if (lookahead == '\n')
        ADVANCE(977);
      if (lookahead == '\r')
        ADVANCE(977);
      if (lookahead == '-')
        ADVANCE(355);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(978);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(977);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 978:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(977);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 979:
      if (lookahead == '\n')
        ADVANCE(977);
      if (lookahead == '\r')
        ADVANCE(979);
      if (lookahead == '-')
        ADVANCE(406);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(980);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(976);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 980:
      if (lookahead == 'n')
        SKIP(976);
      END_STATE();
    case 981:
      if (lookahead == '\t')
        ADVANCE(510);
      if (lookahead == '\n')
        ADVANCE(982);
      if (lookahead == 11)
        ADVANCE(97);
      if (lookahead == '\r')
        ADVANCE(987);
      if (lookahead == ' ')
        ADVANCE(505);
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
        ADVANCE(256);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(264);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == '[')
        ADVANCE(506);
      if (lookahead == '\\')
        ADVANCE(507);
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
        ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(508);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(983);
      if (lookahead == '\n')
        ADVANCE(982);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(984);
      if (lookahead == ' ')
        ADVANCE(985);
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
        ADVANCE(184);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(192);
      if (lookahead == '=')
        ADVANCE(193);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(501);
      if (lookahead == '\\')
        ADVANCE(986);
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
        ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(503);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(983);
      if (lookahead == '\n')
        ADVANCE(982);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(984);
      if (lookahead == ' ')
        ADVANCE(985);
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
        ADVANCE(184);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(192);
      if (lookahead == '=')
        ADVANCE(193);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(501);
      if (lookahead == '\\')
        ADVANCE(986);
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
        ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(503);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 984:
      if (lookahead == '\t')
        ADVANCE(983);
      if (lookahead == '\n')
        ADVANCE(982);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(984);
      if (lookahead == ' ')
        ADVANCE(985);
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
        ADVANCE(184);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(192);
      if (lookahead == '=')
        ADVANCE(193);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(501);
      if (lookahead == '\\')
        ADVANCE(986);
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
        ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(503);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(983);
      if (lookahead == '\n')
        ADVANCE(982);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(984);
      if (lookahead == ' ')
        ADVANCE(985);
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
        ADVANCE(184);
      if (lookahead == '.')
        ADVANCE(185);
      if (lookahead == '/')
        ADVANCE(33);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '<')
        ADVANCE(192);
      if (lookahead == '=')
        ADVANCE(193);
      if (lookahead == '>')
        ADVANCE(41);
      if (lookahead == '?')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(43);
      if (lookahead == '[')
        ADVANCE(501);
      if (lookahead == '\\')
        ADVANCE(986);
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
        ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(503);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(984);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 987:
      if (lookahead == '\t')
        ADVANCE(510);
      if (lookahead == '\n')
        ADVANCE(982);
      if (lookahead == 11)
        ADVANCE(97);
      if (lookahead == '\r')
        ADVANCE(987);
      if (lookahead == ' ')
        ADVANCE(505);
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
        ADVANCE(256);
      if (lookahead == '.')
        ADVANCE(257);
      if (lookahead == '/')
        ADVANCE(118);
      if (lookahead == ':')
        ADVANCE(263);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '<')
        ADVANCE(264);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '>')
        ADVANCE(126);
      if (lookahead == '?')
        ADVANCE(127);
      if (lookahead == '@')
        ADVANCE(128);
      if (lookahead == '[')
        ADVANCE(506);
      if (lookahead == '\\')
        ADVANCE(507);
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
        ADVANCE(508);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(508);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 988:
      if (lookahead == '\n')
        ADVANCE(989);
      if (lookahead == '\r')
        ADVANCE(991);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(992);
      if (lookahead == 'd')
        ADVANCE(774);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(988);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 989:
      if (lookahead == '\n')
        ADVANCE(989);
      if (lookahead == '\r')
        ADVANCE(989);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == '\\')
        ADVANCE(990);
      if (lookahead == 'd')
        ADVANCE(770);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(989);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 990:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(989);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 991:
      if (lookahead == '\n')
        ADVANCE(989);
      if (lookahead == '\r')
        ADVANCE(991);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(992);
      if (lookahead == 'd')
        ADVANCE(774);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(988);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 992:
      if (lookahead == 'n')
        SKIP(988);
      END_STATE();
    case 993:
      if (lookahead == '\n')
        ADVANCE(994);
      if (lookahead == '\r')
        ADVANCE(996);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(997);
      if (lookahead == 'd')
        ADVANCE(774);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(993);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 994:
      if (lookahead == '\n')
        ADVANCE(994);
      if (lookahead == '\r')
        ADVANCE(994);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == '\\')
        ADVANCE(995);
      if (lookahead == 'd')
        ADVANCE(770);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(994);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 995:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(994);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 996:
      if (lookahead == '\n')
        ADVANCE(994);
      if (lookahead == '\r')
        ADVANCE(996);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == '\\')
        SKIP(997);
      if (lookahead == 'd')
        ADVANCE(774);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(993);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 997:
      if (lookahead == 'n')
        SKIP(993);
      END_STATE();
    case 998:
      if (lookahead == '\n')
        ADVANCE(999);
      if (lookahead == '\r')
        ADVANCE(1001);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(1002);
      if (lookahead == 'd')
        ADVANCE(774);
      if (lookahead == 'w')
        ADVANCE(594);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(998);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 999:
      if (lookahead == '\n')
        ADVANCE(999);
      if (lookahead == '\r')
        ADVANCE(999);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(1000);
      if (lookahead == 'd')
        ADVANCE(770);
      if (lookahead == 'w')
        ADVANCE(587);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(999);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 1000:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(999);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 1001:
      if (lookahead == '\n')
        ADVANCE(999);
      if (lookahead == '\r')
        ADVANCE(1001);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(1002);
      if (lookahead == 'd')
        ADVANCE(774);
      if (lookahead == 'w')
        ADVANCE(594);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(998);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      END_STATE();
    case 1002:
      if (lookahead == 'n')
        SKIP(998);
      END_STATE();
    case 1003:
      if (lookahead == '\n')
        ADVANCE(1004);
      if (lookahead == '\r')
        ADVANCE(1006);
      if (lookahead == '(')
        ADVANCE(106);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(406);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(1007);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(1003);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(787);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 1004:
      if (lookahead == '\n')
        ADVANCE(1004);
      if (lookahead == '\r')
        ADVANCE(1004);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(21);
      if (lookahead == ',')
        ADVANCE(23);
      if (lookahead == '-')
        ADVANCE(355);
      if (lookahead == '[')
        ADVANCE(72);
      if (lookahead == '\\')
        ADVANCE(1005);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(1004);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(784);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 1005:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(1004);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 1006:
      if (lookahead == '\n')
        ADVANCE(1004);
      if (lookahead == '\r')
        ADVANCE(1006);
      if (lookahead == '(')
        ADVANCE(106);
      if (lookahead == ')')
        ADVANCE(111);
      if (lookahead == ',')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(406);
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(1007);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(1003);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(787);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 1007:
      if (lookahead == 'n')
        SKIP(1003);
      END_STATE();
    case 1008:
      if (lookahead == '\n')
        ADVANCE(1009);
      if (lookahead == '\r')
        ADVANCE(1011);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(406);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '\\')
        SKIP(1012);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(1008);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 1009:
      if (lookahead == '\n')
        ADVANCE(1009);
      if (lookahead == '\r')
        ADVANCE(1009);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(355);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(193);
      if (lookahead == '\\')
        ADVANCE(1010);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(1009);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 1010:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(1009);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 1011:
      if (lookahead == '\n')
        ADVANCE(1009);
      if (lookahead == '\r')
        ADVANCE(1011);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(406);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '\\')
        SKIP(1012);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(1008);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 1012:
      if (lookahead == 'n')
        SKIP(1008);
      END_STATE();
    case 1013:
      if (lookahead == '\n')
        ADVANCE(1014);
      if (lookahead == '\r')
        ADVANCE(1017);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '.')
        ADVANCE(1018);
      if (lookahead == '\\')
        SKIP(1019);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(1013);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 1014:
      if (lookahead == '\n')
        ADVANCE(1014);
      if (lookahead == '\r')
        ADVANCE(1014);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == '.')
        ADVANCE(1015);
      if (lookahead == '\\')
        ADVANCE(1016);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(1014);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 1015:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(32);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 1016:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(1014);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 1017:
      if (lookahead == '\n')
        ADVANCE(1014);
      if (lookahead == '\r')
        ADVANCE(1017);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '.')
        ADVANCE(1018);
      if (lookahead == '\\')
        SKIP(1019);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(1013);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 1018:
      if (lookahead == '.')
        ADVANCE(117);
      END_STATE();
    case 1019:
      if (lookahead == 'n')
        SKIP(1013);
      END_STATE();
    case 1020:
      if (lookahead == '\n')
        ADVANCE(1021);
      if (lookahead == '\r')
        ADVANCE(1023);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(1024);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(1020);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 1021:
      if (lookahead == '\n')
        ADVANCE(1021);
      if (lookahead == '\r')
        ADVANCE(1021);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(1022);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(1021);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 1022:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(1021);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 1023:
      if (lookahead == '\n')
        ADVANCE(1021);
      if (lookahead == '\r')
        ADVANCE(1023);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '(')
        ADVANCE(255);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == '0')
        ADVANCE(258);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(1024);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(1020);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 1024:
      if (lookahead == 'n')
        SKIP(1020);
      END_STATE();
    case 1025:
      if (lookahead == '\n')
        ADVANCE(1026);
      if (lookahead == '\r')
        ADVANCE(1028);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(1029);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(1025);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 1026:
      if (lookahead == '\n')
        ADVANCE(1026);
      if (lookahead == '\r')
        ADVANCE(1026);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(1027);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(1026);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 1027:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(1026);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 1028:
      if (lookahead == '\n')
        ADVANCE(1026);
      if (lookahead == '\r')
        ADVANCE(1028);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(1029);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(1025);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 1029:
      if (lookahead == 'n')
        SKIP(1025);
      END_STATE();
    case 1030:
      if (lookahead == '\n')
        ADVANCE(1031);
      if (lookahead == '\r')
        ADVANCE(1033);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '\\')
        SKIP(1034);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(1030);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 1031:
      if (lookahead == '\n')
        ADVANCE(1031);
      if (lookahead == '\r')
        ADVANCE(1031);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(328);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '=')
        ADVANCE(193);
      if (lookahead == '\\')
        ADVANCE(1032);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(1031);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(253);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(196);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 1032:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(1031);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 1033:
      if (lookahead == '\n')
        ADVANCE(1031);
      if (lookahead == '\r')
        ADVANCE(1033);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(341);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '=')
        ADVANCE(265);
      if (lookahead == '\\')
        SKIP(1034);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(1030);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(325);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      END_STATE();
    case 1034:
      if (lookahead == 'n')
        SKIP(1030);
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
  [4] = {.lex_state = 353},
  [5] = {.lex_state = 181},
  [6] = {.lex_state = 181},
  [7] = {.lex_state = 181},
  [8] = {.lex_state = 456},
  [9] = {.lex_state = 181},
  [10] = {.lex_state = 181},
  [11] = {.lex_state = 181},
  [12] = {.lex_state = 465, .external_lex_state = 2},
  [13] = {.lex_state = 472, .external_lex_state = 2},
  [14] = {.lex_state = 477, .external_lex_state = 2},
  [15] = {.lex_state = 498},
  [16] = {.lex_state = 509},
  [17] = {.lex_state = 477, .external_lex_state = 2},
  [18] = {.lex_state = 181},
  [19] = {.lex_state = 517, .external_lex_state = 2},
  [20] = {.lex_state = 517, .external_lex_state = 2},
  [21] = {.lex_state = 181},
  [22] = {.lex_state = 465},
  [23] = {.lex_state = 522},
  [24] = {.lex_state = 527, .external_lex_state = 2},
  [25] = {.lex_state = 532, .external_lex_state = 2},
  [26] = {.lex_state = 537, .external_lex_state = 2},
  [27] = {.lex_state = 558},
  [28] = {.lex_state = 353},
  [29] = {.lex_state = 326},
  [30] = {.lex_state = 563, .external_lex_state = 2},
  [31] = {.lex_state = 353},
  [32] = {.lex_state = 353},
  [33] = {.lex_state = 456},
  [34] = {.lex_state = 181},
  [35] = {.lex_state = 584},
  [36] = {.lex_state = 181},
  [37] = {.lex_state = 353},
  [38] = {.lex_state = 584},
  [39] = {.lex_state = 181},
  [40] = {.lex_state = 353},
  [41] = {.lex_state = 599, .external_lex_state = 2},
  [42] = {.lex_state = 456},
  [43] = {.lex_state = 604, .external_lex_state = 2},
  [44] = {.lex_state = 609},
  [45] = {.lex_state = 614, .external_lex_state = 2},
  [46] = {.lex_state = 614, .external_lex_state = 2},
  [47] = {.lex_state = 181},
  [48] = {.lex_state = 599, .external_lex_state = 2},
  [49] = {.lex_state = 619, .external_lex_state = 2},
  [50] = {.lex_state = 181},
  [51] = {.lex_state = 624, .external_lex_state = 2},
  [52] = {.lex_state = 629, .external_lex_state = 2},
  [53] = {.lex_state = 634},
  [54] = {.lex_state = 181},
  [55] = {.lex_state = 353},
  [56] = {.lex_state = 181},
  [57] = {.lex_state = 634},
  [58] = {.lex_state = 639},
  [59] = {.lex_state = 181},
  [60] = {.lex_state = 639},
  [61] = {.lex_state = 522},
  [62] = {.lex_state = 181},
  [63] = {.lex_state = 181},
  [64] = {.lex_state = 181},
  [65] = {.lex_state = 181},
  [66] = {.lex_state = 181},
  [67] = {.lex_state = 181},
  [68] = {.lex_state = 644},
  [69] = {.lex_state = 509},
  [70] = {.lex_state = 509},
  [71] = {.lex_state = 509},
  [72] = {.lex_state = 509},
  [73] = {.lex_state = 477, .external_lex_state = 2},
  [74] = {.lex_state = 509},
  [75] = {.lex_state = 509},
  [76] = {.lex_state = 748},
  [77] = {.lex_state = 509},
  [78] = {.lex_state = 509},
  [79] = {.lex_state = 558},
  [80] = {.lex_state = 767, .external_lex_state = 2},
  [81] = {.lex_state = 517, .external_lex_state = 2},
  [82] = {.lex_state = 522},
  [83] = {.lex_state = 465},
  [84] = {.lex_state = 465},
  [85] = {.lex_state = 609},
  [86] = {.lex_state = 609},
  [87] = {.lex_state = 609},
  [88] = {.lex_state = 522},
  [89] = {.lex_state = 609},
  [90] = {.lex_state = 498},
  [91] = {.lex_state = 509},
  [92] = {.lex_state = 465},
  [93] = {.lex_state = 181},
  [94] = {.lex_state = 609},
  [95] = {.lex_state = 609},
  [96] = {.lex_state = 776},
  [97] = {.lex_state = 465},
  [98] = {.lex_state = 781},
  [99] = {.lex_state = 517, .external_lex_state = 2},
  [100] = {.lex_state = 456},
  [101] = {.lex_state = 788, .external_lex_state = 3},
  [102] = {.lex_state = 353},
  [103] = {.lex_state = 181},
  [104] = {.lex_state = 563, .external_lex_state = 2},
  [105] = {.lex_state = 456},
  [106] = {.lex_state = 326},
  [107] = {.lex_state = 181},
  [108] = {.lex_state = 517, .external_lex_state = 2},
  [109] = {.lex_state = 793},
  [110] = {.lex_state = 793},
  [111] = {.lex_state = 517, .external_lex_state = 2},
  [112] = {.lex_state = 181},
  [113] = {.lex_state = 181},
  [114] = {.lex_state = 634},
  [115] = {.lex_state = 353},
  [116] = {.lex_state = 584},
  [117] = {.lex_state = 788, .external_lex_state = 3},
  [118] = {.lex_state = 181},
  [119] = {.lex_state = 517, .external_lex_state = 2},
  [120] = {.lex_state = 456},
  [121] = {.lex_state = 456},
  [122] = {.lex_state = 456},
  [123] = {.lex_state = 584},
  [124] = {.lex_state = 584},
  [125] = {.lex_state = 498},
  [126] = {.lex_state = 509},
  [127] = {.lex_state = 584},
  [128] = {.lex_state = 353},
  [129] = {.lex_state = 353},
  [130] = {.lex_state = 584},
  [131] = {.lex_state = 584},
  [132] = {.lex_state = 584},
  [133] = {.lex_state = 818},
  [134] = {.lex_state = 584},
  [135] = {.lex_state = 584},
  [136] = {.lex_state = 353},
  [137] = {.lex_state = 517, .external_lex_state = 2},
  [138] = {.lex_state = 181},
  [139] = {.lex_state = 604, .external_lex_state = 2},
  [140] = {.lex_state = 604, .external_lex_state = 2},
  [141] = {.lex_state = 604, .external_lex_state = 2},
  [142] = {.lex_state = 181},
  [143] = {.lex_state = 614, .external_lex_state = 2},
  [144] = {.lex_state = 614, .external_lex_state = 2},
  [145] = {.lex_state = 599, .external_lex_state = 2},
  [146] = {.lex_state = 599, .external_lex_state = 2},
  [147] = {.lex_state = 823, .external_lex_state = 2},
  [148] = {.lex_state = 828, .external_lex_state = 2},
  [149] = {.lex_state = 833, .external_lex_state = 2},
  [150] = {.lex_state = 838, .external_lex_state = 2},
  [151] = {.lex_state = 456},
  [152] = {.lex_state = 843, .external_lex_state = 2},
  [153] = {.lex_state = 848, .external_lex_state = 2},
  [154] = {.lex_state = 517, .external_lex_state = 2},
  [155] = {.lex_state = 853, .external_lex_state = 2},
  [156] = {.lex_state = 456},
  [157] = {.lex_state = 456},
  [158] = {.lex_state = 456},
  [159] = {.lex_state = 858, .external_lex_state = 2},
  [160] = {.lex_state = 863, .external_lex_state = 2},
  [161] = {.lex_state = 868, .external_lex_state = 2},
  [162] = {.lex_state = 858, .external_lex_state = 2},
  [163] = {.lex_state = 873, .external_lex_state = 2},
  [164] = {.lex_state = 878, .external_lex_state = 2},
  [165] = {.lex_state = 858, .external_lex_state = 2},
  [166] = {.lex_state = 873, .external_lex_state = 2},
  [167] = {.lex_state = 181},
  [168] = {.lex_state = 456},
  [169] = {.lex_state = 181},
  [170] = {.lex_state = 456},
  [171] = {.lex_state = 634},
  [172] = {.lex_state = 634},
  [173] = {.lex_state = 634},
  [174] = {.lex_state = 634},
  [175] = {.lex_state = 634},
  [176] = {.lex_state = 456},
  [177] = {.lex_state = 781},
  [178] = {.lex_state = 456},
  [179] = {.lex_state = 456},
  [180] = {.lex_state = 456},
  [181] = {.lex_state = 456},
  [182] = {.lex_state = 181},
  [183] = {.lex_state = 181},
  [184] = {.lex_state = 456},
  [185] = {.lex_state = 181},
  [186] = {.lex_state = 456},
  [187] = {.lex_state = 456},
  [188] = {.lex_state = 456},
  [189] = {.lex_state = 181},
  [190] = {.lex_state = 477, .external_lex_state = 2},
  [191] = {.lex_state = 181},
  [192] = {.lex_state = 181},
  [193] = {.lex_state = 883},
  [194] = {.lex_state = 887},
  [195] = {.lex_state = 894},
  [196] = {.lex_state = 181},
  [197] = {.lex_state = 509},
  [198] = {.lex_state = 509},
  [199] = {.lex_state = 883},
  [200] = {.lex_state = 887},
  [201] = {.lex_state = 894},
  [202] = {.lex_state = 509},
  [203] = {.lex_state = 509},
  [204] = {.lex_state = 477, .external_lex_state = 2},
  [205] = {.lex_state = 788, .external_lex_state = 3},
  [206] = {.lex_state = 901, .external_lex_state = 2},
  [207] = {.lex_state = 906, .external_lex_state = 2},
  [208] = {.lex_state = 911, .external_lex_state = 2},
  [209] = {.lex_state = 498},
  [210] = {.lex_state = 509},
  [211] = {.lex_state = 911, .external_lex_state = 2},
  [212] = {.lex_state = 517, .external_lex_state = 2},
  [213] = {.lex_state = 767, .external_lex_state = 2},
  [214] = {.lex_state = 767, .external_lex_state = 2},
  [215] = {.lex_state = 767, .external_lex_state = 2},
  [216] = {.lex_state = 906, .external_lex_state = 2},
  [217] = {.lex_state = 767, .external_lex_state = 2},
  [218] = {.lex_state = 465},
  [219] = {.lex_state = 181},
  [220] = {.lex_state = 639},
  [221] = {.lex_state = 181},
  [222] = {.lex_state = 181},
  [223] = {.lex_state = 181},
  [224] = {.lex_state = 181},
  [225] = {.lex_state = 639},
  [226] = {.lex_state = 609},
  [227] = {.lex_state = 465},
  [228] = {.lex_state = 916},
  [229] = {.lex_state = 326},
  [230] = {.lex_state = 181},
  [231] = {.lex_state = 181},
  [232] = {.lex_state = 609},
  [233] = {.lex_state = 509},
  [234] = {.lex_state = 465},
  [235] = {.lex_state = 456},
  [236] = {.lex_state = 465},
  [237] = {.lex_state = 781},
  [238] = {.lex_state = 781},
  [239] = {.lex_state = 921, .external_lex_state = 2},
  [240] = {.lex_state = 926, .external_lex_state = 2},
  [241] = {.lex_state = 181},
  [242] = {.lex_state = 517, .external_lex_state = 2},
  [243] = {.lex_state = 921, .external_lex_state = 2},
  [244] = {.lex_state = 781},
  [245] = {.lex_state = 353},
  [246] = {.lex_state = 921, .external_lex_state = 2},
  [247] = {.lex_state = 634},
  [248] = {.lex_state = 921, .external_lex_state = 2},
  [249] = {.lex_state = 558},
  [250] = {.lex_state = 353},
  [251] = {.lex_state = 181},
  [252] = {.lex_state = 181},
  [253] = {.lex_state = 931, .external_lex_state = 4},
  [254] = {.lex_state = 558},
  [255] = {.lex_state = 181},
  [256] = {.lex_state = 181},
  [257] = {.lex_state = 326},
  [258] = {.lex_state = 517, .external_lex_state = 2},
  [259] = {.lex_state = 517, .external_lex_state = 2},
  [260] = {.lex_state = 181},
  [261] = {.lex_state = 936, .external_lex_state = 2},
  [262] = {.lex_state = 456},
  [263] = {.lex_state = 456},
  [264] = {.lex_state = 509},
  [265] = {.lex_state = 456},
  [266] = {.lex_state = 517, .external_lex_state = 2},
  [267] = {.lex_state = 353},
  [268] = {.lex_state = 456},
  [269] = {.lex_state = 456},
  [270] = {.lex_state = 517, .external_lex_state = 2},
  [271] = {.lex_state = 181},
  [272] = {.lex_state = 181},
  [273] = {.lex_state = 353},
  [274] = {.lex_state = 181},
  [275] = {.lex_state = 181},
  [276] = {.lex_state = 456},
  [277] = {.lex_state = 181},
  [278] = {.lex_state = 517, .external_lex_state = 2},
  [279] = {.lex_state = 941},
  [280] = {.lex_state = 941},
  [281] = {.lex_state = 941},
  [282] = {.lex_state = 941},
  [283] = {.lex_state = 931, .external_lex_state = 4},
  [284] = {.lex_state = 558},
  [285] = {.lex_state = 517, .external_lex_state = 2},
  [286] = {.lex_state = 181},
  [287] = {.lex_state = 353},
  [288] = {.lex_state = 456},
  [289] = {.lex_state = 456},
  [290] = {.lex_state = 584},
  [291] = {.lex_state = 181},
  [292] = {.lex_state = 584},
  [293] = {.lex_state = 509},
  [294] = {.lex_state = 456},
  [295] = {.lex_state = 353},
  [296] = {.lex_state = 181},
  [297] = {.lex_state = 584},
  [298] = {.lex_state = 584},
  [299] = {.lex_state = 517, .external_lex_state = 2},
  [300] = {.lex_state = 614, .external_lex_state = 2},
  [301] = {.lex_state = 604, .external_lex_state = 2},
  [302] = {.lex_state = 614, .external_lex_state = 2},
  [303] = {.lex_state = 181},
  [304] = {.lex_state = 614, .external_lex_state = 2},
  [305] = {.lex_state = 599, .external_lex_state = 2},
  [306] = {.lex_state = 838, .external_lex_state = 2},
  [307] = {.lex_state = 843, .external_lex_state = 2},
  [308] = {.lex_state = 517, .external_lex_state = 2},
  [309] = {.lex_state = 456},
  [310] = {.lex_state = 456},
  [311] = {.lex_state = 456},
  [312] = {.lex_state = 946, .external_lex_state = 2},
  [313] = {.lex_state = 951, .external_lex_state = 2},
  [314] = {.lex_state = 498},
  [315] = {.lex_state = 509},
  [316] = {.lex_state = 951, .external_lex_state = 2},
  [317] = {.lex_state = 828, .external_lex_state = 2},
  [318] = {.lex_state = 956, .external_lex_state = 2},
  [319] = {.lex_state = 961, .external_lex_state = 2},
  [320] = {.lex_state = 966, .external_lex_state = 2},
  [321] = {.lex_state = 961, .external_lex_state = 2},
  [322] = {.lex_state = 946, .external_lex_state = 2},
  [323] = {.lex_state = 961, .external_lex_state = 2},
  [324] = {.lex_state = 966, .external_lex_state = 2},
  [325] = {.lex_state = 456},
  [326] = {.lex_state = 517, .external_lex_state = 2},
  [327] = {.lex_state = 181},
  [328] = {.lex_state = 848, .external_lex_state = 2},
  [329] = {.lex_state = 946, .external_lex_state = 2},
  [330] = {.lex_state = 181},
  [331] = {.lex_state = 456},
  [332] = {.lex_state = 858, .external_lex_state = 2},
  [333] = {.lex_state = 456},
  [334] = {.lex_state = 868, .external_lex_state = 2},
  [335] = {.lex_state = 181},
  [336] = {.lex_state = 858, .external_lex_state = 2},
  [337] = {.lex_state = 873, .external_lex_state = 2},
  [338] = {.lex_state = 181},
  [339] = {.lex_state = 971},
  [340] = {.lex_state = 843, .external_lex_state = 2},
  [341] = {.lex_state = 634},
  [342] = {.lex_state = 634},
  [343] = {.lex_state = 971},
  [344] = {.lex_state = 781},
  [345] = {.lex_state = 976, .external_lex_state = 2},
  [346] = {.lex_state = 517, .external_lex_state = 2},
  [347] = {.lex_state = 181},
  [348] = {.lex_state = 456},
  [349] = {.lex_state = 456},
  [350] = {.lex_state = 456},
  [351] = {.lex_state = 181},
  [352] = {.lex_state = 181},
  [353] = {.lex_state = 456},
  [354] = {.lex_state = 181},
  [355] = {.lex_state = 181},
  [356] = {.lex_state = 181},
  [357] = {.lex_state = 887},
  [358] = {.lex_state = 887},
  [359] = {.lex_state = 894},
  [360] = {.lex_state = 894},
  [361] = {.lex_state = 509},
  [362] = {.lex_state = 509},
  [363] = {.lex_state = 509},
  [364] = {.lex_state = 509},
  [365] = {.lex_state = 981},
  [366] = {.lex_state = 981},
  [367] = {.lex_state = 988, .external_lex_state = 4},
  [368] = {.lex_state = 993},
  [369] = {.lex_state = 767, .external_lex_state = 2},
  [370] = {.lex_state = 767, .external_lex_state = 2},
  [371] = {.lex_state = 181},
  [372] = {.lex_state = 911, .external_lex_state = 2},
  [373] = {.lex_state = 509},
  [374] = {.lex_state = 456},
  [375] = {.lex_state = 456},
  [376] = {.lex_state = 456},
  [377] = {.lex_state = 901, .external_lex_state = 2},
  [378] = {.lex_state = 767, .external_lex_state = 2},
  [379] = {.lex_state = 911, .external_lex_state = 2},
  [380] = {.lex_state = 998, .external_lex_state = 2},
  [381] = {.lex_state = 767, .external_lex_state = 2},
  [382] = {.lex_state = 901, .external_lex_state = 2},
  [383] = {.lex_state = 901, .external_lex_state = 2},
  [384] = {.lex_state = 998, .external_lex_state = 2},
  [385] = {.lex_state = 767, .external_lex_state = 2},
  [386] = {.lex_state = 517, .external_lex_state = 2},
  [387] = {.lex_state = 767, .external_lex_state = 2},
  [388] = {.lex_state = 181},
  [389] = {.lex_state = 522},
  [390] = {.lex_state = 609},
  [391] = {.lex_state = 522},
  [392] = {.lex_state = 456},
  [393] = {.lex_state = 522},
  [394] = {.lex_state = 522},
  [395] = {.lex_state = 522},
  [396] = {.lex_state = 522},
  [397] = {.lex_state = 181},
  [398] = {.lex_state = 465},
  [399] = {.lex_state = 609},
  [400] = {.lex_state = 465},
  [401] = {.lex_state = 609},
  [402] = {.lex_state = 609},
  [403] = {.lex_state = 609},
  [404] = {.lex_state = 609},
  [405] = {.lex_state = 181},
  [406] = {.lex_state = 181},
  [407] = {.lex_state = 181},
  [408] = {.lex_state = 781},
  [409] = {.lex_state = 181},
  [410] = {.lex_state = 781},
  [411] = {.lex_state = 1003},
  [412] = {.lex_state = 634},
  [413] = {.lex_state = 181},
  [414] = {.lex_state = 181},
  [415] = {.lex_state = 353},
  [416] = {.lex_state = 181},
  [417] = {.lex_state = 353},
  [418] = {.lex_state = 1003},
  [419] = {.lex_state = 781},
  [420] = {.lex_state = 781},
  [421] = {.lex_state = 181},
  [422] = {.lex_state = 781},
  [423] = {.lex_state = 781},
  [424] = {.lex_state = 781},
  [425] = {.lex_state = 781},
  [426] = {.lex_state = 1008, .external_lex_state = 2},
  [427] = {.lex_state = 976, .external_lex_state = 2},
  [428] = {.lex_state = 976, .external_lex_state = 2},
  [429] = {.lex_state = 1008, .external_lex_state = 2},
  [430] = {.lex_state = 781},
  [431] = {.lex_state = 976, .external_lex_state = 2},
  [432] = {.lex_state = 181},
  [433] = {.lex_state = 781},
  [434] = {.lex_state = 517, .external_lex_state = 2},
  [435] = {.lex_state = 781},
  [436] = {.lex_state = 781},
  [437] = {.lex_state = 456},
  [438] = {.lex_state = 353},
  [439] = {.lex_state = 181},
  [440] = {.lex_state = 1013},
  [441] = {.lex_state = 181},
  [442] = {.lex_state = 517, .external_lex_state = 2},
  [443] = {.lex_state = 931, .external_lex_state = 4},
  [444] = {.lex_state = 558},
  [445] = {.lex_state = 936, .external_lex_state = 2},
  [446] = {.lex_state = 1013},
  [447] = {.lex_state = 456},
  [448] = {.lex_state = 517, .external_lex_state = 2},
  [449] = {.lex_state = 181},
  [450] = {.lex_state = 517, .external_lex_state = 2},
  [451] = {.lex_state = 181},
  [452] = {.lex_state = 456},
  [453] = {.lex_state = 509},
  [454] = {.lex_state = 517, .external_lex_state = 2},
  [455] = {.lex_state = 456},
  [456] = {.lex_state = 181},
  [457] = {.lex_state = 456},
  [458] = {.lex_state = 517, .external_lex_state = 2},
  [459] = {.lex_state = 181},
  [460] = {.lex_state = 181},
  [461] = {.lex_state = 181},
  [462] = {.lex_state = 353},
  [463] = {.lex_state = 456},
  [464] = {.lex_state = 181},
  [465] = {.lex_state = 181},
  [466] = {.lex_state = 517, .external_lex_state = 2},
  [467] = {.lex_state = 931, .external_lex_state = 4},
  [468] = {.lex_state = 558},
  [469] = {.lex_state = 353},
  [470] = {.lex_state = 456},
  [471] = {.lex_state = 181},
  [472] = {.lex_state = 456},
  [473] = {.lex_state = 456},
  [474] = {.lex_state = 353},
  [475] = {.lex_state = 353},
  [476] = {.lex_state = 456},
  [477] = {.lex_state = 584},
  [478] = {.lex_state = 584},
  [479] = {.lex_state = 353},
  [480] = {.lex_state = 181},
  [481] = {.lex_state = 456},
  [482] = {.lex_state = 353},
  [483] = {.lex_state = 614, .external_lex_state = 2},
  [484] = {.lex_state = 843, .external_lex_state = 2},
  [485] = {.lex_state = 517, .external_lex_state = 2},
  [486] = {.lex_state = 181},
  [487] = {.lex_state = 456},
  [488] = {.lex_state = 961, .external_lex_state = 2},
  [489] = {.lex_state = 181},
  [490] = {.lex_state = 951, .external_lex_state = 2},
  [491] = {.lex_state = 509},
  [492] = {.lex_state = 456},
  [493] = {.lex_state = 956, .external_lex_state = 2},
  [494] = {.lex_state = 181},
  [495] = {.lex_state = 961, .external_lex_state = 2},
  [496] = {.lex_state = 966, .external_lex_state = 2},
  [497] = {.lex_state = 181},
  [498] = {.lex_state = 848, .external_lex_state = 2},
  [499] = {.lex_state = 181},
  [500] = {.lex_state = 863, .external_lex_state = 2},
  [501] = {.lex_state = 181},
  [502] = {.lex_state = 863, .external_lex_state = 2},
  [503] = {.lex_state = 868, .external_lex_state = 2},
  [504] = {.lex_state = 181},
  [505] = {.lex_state = 456},
  [506] = {.lex_state = 868, .external_lex_state = 2},
  [507] = {.lex_state = 843, .external_lex_state = 2},
  [508] = {.lex_state = 517, .external_lex_state = 2},
  [509] = {.lex_state = 634},
  [510] = {.lex_state = 181},
  [511] = {.lex_state = 181},
  [512] = {.lex_state = 181},
  [513] = {.lex_state = 181},
  [514] = {.lex_state = 181},
  [515] = {.lex_state = 456},
  [516] = {.lex_state = 181},
  [517] = {.lex_state = 887},
  [518] = {.lex_state = 894},
  [519] = {.lex_state = 509},
  [520] = {.lex_state = 981},
  [521] = {.lex_state = 767, .external_lex_state = 2},
  [522] = {.lex_state = 1020, .external_lex_state = 2},
  [523] = {.lex_state = 517, .external_lex_state = 2},
  [524] = {.lex_state = 988, .external_lex_state = 4},
  [525] = {.lex_state = 1020, .external_lex_state = 2},
  [526] = {.lex_state = 988, .external_lex_state = 4},
  [527] = {.lex_state = 517, .external_lex_state = 2},
  [528] = {.lex_state = 993},
  [529] = {.lex_state = 993},
  [530] = {.lex_state = 911, .external_lex_state = 2},
  [531] = {.lex_state = 911, .external_lex_state = 2},
  [532] = {.lex_state = 181},
  [533] = {.lex_state = 456},
  [534] = {.lex_state = 998, .external_lex_state = 2},
  [535] = {.lex_state = 456},
  [536] = {.lex_state = 911, .external_lex_state = 2},
  [537] = {.lex_state = 181},
  [538] = {.lex_state = 998, .external_lex_state = 2},
  [539] = {.lex_state = 767, .external_lex_state = 2},
  [540] = {.lex_state = 181},
  [541] = {.lex_state = 181},
  [542] = {.lex_state = 181},
  [543] = {.lex_state = 181},
  [544] = {.lex_state = 522},
  [545] = {.lex_state = 522},
  [546] = {.lex_state = 522},
  [547] = {.lex_state = 181},
  [548] = {.lex_state = 181},
  [549] = {.lex_state = 522},
  [550] = {.lex_state = 522},
  [551] = {.lex_state = 522},
  [552] = {.lex_state = 609},
  [553] = {.lex_state = 609},
  [554] = {.lex_state = 181},
  [555] = {.lex_state = 181},
  [556] = {.lex_state = 181},
  [557] = {.lex_state = 181},
  [558] = {.lex_state = 921, .external_lex_state = 2},
  [559] = {.lex_state = 181},
  [560] = {.lex_state = 781},
  [561] = {.lex_state = 634},
  [562] = {.lex_state = 781},
  [563] = {.lex_state = 634},
  [564] = {.lex_state = 181},
  [565] = {.lex_state = 781},
  [566] = {.lex_state = 921, .external_lex_state = 2},
  [567] = {.lex_state = 181},
  [568] = {.lex_state = 781},
  [569] = {.lex_state = 353},
  [570] = {.lex_state = 181},
  [571] = {.lex_state = 781},
  [572] = {.lex_state = 781},
  [573] = {.lex_state = 781},
  [574] = {.lex_state = 781},
  [575] = {.lex_state = 781},
  [576] = {.lex_state = 181},
  [577] = {.lex_state = 781},
  [578] = {.lex_state = 781},
  [579] = {.lex_state = 921, .external_lex_state = 2},
  [580] = {.lex_state = 781},
  [581] = {.lex_state = 976, .external_lex_state = 2},
  [582] = {.lex_state = 181},
  [583] = {.lex_state = 976, .external_lex_state = 2},
  [584] = {.lex_state = 976, .external_lex_state = 2},
  [585] = {.lex_state = 781},
  [586] = {.lex_state = 517, .external_lex_state = 2},
  [587] = {.lex_state = 517, .external_lex_state = 2},
  [588] = {.lex_state = 181},
  [589] = {.lex_state = 456},
  [590] = {.lex_state = 353},
  [591] = {.lex_state = 181},
  [592] = {.lex_state = 181},
  [593] = {.lex_state = 931, .external_lex_state = 4},
  [594] = {.lex_state = 181},
  [595] = {.lex_state = 517, .external_lex_state = 2},
  [596] = {.lex_state = 517, .external_lex_state = 2},
  [597] = {.lex_state = 181},
  [598] = {.lex_state = 181},
  [599] = {.lex_state = 181},
  [600] = {.lex_state = 456},
  [601] = {.lex_state = 517, .external_lex_state = 2},
  [602] = {.lex_state = 1013},
  [603] = {.lex_state = 181},
  [604] = {.lex_state = 456},
  [605] = {.lex_state = 517, .external_lex_state = 2},
  [606] = {.lex_state = 181},
  [607] = {.lex_state = 181},
  [608] = {.lex_state = 181},
  [609] = {.lex_state = 456},
  [610] = {.lex_state = 517, .external_lex_state = 2},
  [611] = {.lex_state = 181},
  [612] = {.lex_state = 353},
  [613] = {.lex_state = 456},
  [614] = {.lex_state = 353},
  [615] = {.lex_state = 456},
  [616] = {.lex_state = 181},
  [617] = {.lex_state = 456},
  [618] = {.lex_state = 456},
  [619] = {.lex_state = 353},
  [620] = {.lex_state = 517, .external_lex_state = 2},
  [621] = {.lex_state = 828, .external_lex_state = 2},
  [622] = {.lex_state = 181},
  [623] = {.lex_state = 828, .external_lex_state = 2},
  [624] = {.lex_state = 951, .external_lex_state = 2},
  [625] = {.lex_state = 951, .external_lex_state = 2},
  [626] = {.lex_state = 956, .external_lex_state = 2},
  [627] = {.lex_state = 181},
  [628] = {.lex_state = 456},
  [629] = {.lex_state = 956, .external_lex_state = 2},
  [630] = {.lex_state = 517, .external_lex_state = 2},
  [631] = {.lex_state = 181},
  [632] = {.lex_state = 848, .external_lex_state = 2},
  [633] = {.lex_state = 863, .external_lex_state = 2},
  [634] = {.lex_state = 868, .external_lex_state = 2},
  [635] = {.lex_state = 517, .external_lex_state = 2},
  [636] = {.lex_state = 181},
  [637] = {.lex_state = 181},
  [638] = {.lex_state = 988, .external_lex_state = 4},
  [639] = {.lex_state = 456},
  [640] = {.lex_state = 1025, .external_lex_state = 2},
  [641] = {.lex_state = 1030, .external_lex_state = 2},
  [642] = {.lex_state = 1030, .external_lex_state = 2},
  [643] = {.lex_state = 1025, .external_lex_state = 2},
  [644] = {.lex_state = 767, .external_lex_state = 2},
  [645] = {.lex_state = 988, .external_lex_state = 4},
  [646] = {.lex_state = 993},
  [647] = {.lex_state = 993},
  [648] = {.lex_state = 767, .external_lex_state = 2},
  [649] = {.lex_state = 181},
  [650] = {.lex_state = 767, .external_lex_state = 2},
  [651] = {.lex_state = 911, .external_lex_state = 2},
  [652] = {.lex_state = 181},
  [653] = {.lex_state = 456},
  [654] = {.lex_state = 911, .external_lex_state = 2},
  [655] = {.lex_state = 181},
  [656] = {.lex_state = 522},
  [657] = {.lex_state = 522},
  [658] = {.lex_state = 522},
  [659] = {.lex_state = 181},
  [660] = {.lex_state = 181},
  [661] = {.lex_state = 1003},
  [662] = {.lex_state = 181},
  [663] = {.lex_state = 1003},
  [664] = {.lex_state = 181},
  [665] = {.lex_state = 181},
  [666] = {.lex_state = 921, .external_lex_state = 2},
  [667] = {.lex_state = 1003},
  [668] = {.lex_state = 634},
  [669] = {.lex_state = 634},
  [670] = {.lex_state = 781},
  [671] = {.lex_state = 181},
  [672] = {.lex_state = 781},
  [673] = {.lex_state = 921, .external_lex_state = 2},
  [674] = {.lex_state = 1003},
  [675] = {.lex_state = 781},
  [676] = {.lex_state = 353},
  [677] = {.lex_state = 1003},
  [678] = {.lex_state = 781},
  [679] = {.lex_state = 781},
  [680] = {.lex_state = 781},
  [681] = {.lex_state = 976, .external_lex_state = 2},
  [682] = {.lex_state = 181},
  [683] = {.lex_state = 976, .external_lex_state = 2},
  [684] = {.lex_state = 181},
  [685] = {.lex_state = 181},
  [686] = {.lex_state = 181},
  [687] = {.lex_state = 931, .external_lex_state = 4},
  [688] = {.lex_state = 181},
  [689] = {.lex_state = 181},
  [690] = {.lex_state = 1013},
  [691] = {.lex_state = 181},
  [692] = {.lex_state = 181},
  [693] = {.lex_state = 181},
  [694] = {.lex_state = 517, .external_lex_state = 2},
  [695] = {.lex_state = 181},
  [696] = {.lex_state = 353},
  [697] = {.lex_state = 181},
  [698] = {.lex_state = 828, .external_lex_state = 2},
  [699] = {.lex_state = 956, .external_lex_state = 2},
  [700] = {.lex_state = 517, .external_lex_state = 2},
  [701] = {.lex_state = 1025, .external_lex_state = 2},
  [702] = {.lex_state = 1025, .external_lex_state = 2},
  [703] = {.lex_state = 767, .external_lex_state = 2},
  [704] = {.lex_state = 911, .external_lex_state = 2},
  [705] = {.lex_state = 1003},
  [706] = {.lex_state = 1003},
  [707] = {.lex_state = 634},
  [708] = {.lex_state = 634},
  [709] = {.lex_state = 181},
  [710] = {.lex_state = 781},
  [711] = {.lex_state = 781},
  [712] = {.lex_state = 781},
  [713] = {.lex_state = 976, .external_lex_state = 2},
  [714] = {.lex_state = 181},
  [715] = {.lex_state = 517, .external_lex_state = 2},
  [716] = {.lex_state = 181},
  [717] = {.lex_state = 181},
  [718] = {.lex_state = 181},
  [719] = {.lex_state = 181},
  [720] = {.lex_state = 1013},
  [721] = {.lex_state = 181},
  [722] = {.lex_state = 634},
  [723] = {.lex_state = 781},
  [724] = {.lex_state = 517, .external_lex_state = 2},
  [725] = {.lex_state = 181},
  [726] = {.lex_state = 181},
  [727] = {.lex_state = 181},
  [728] = {.lex_state = 181},
  [729] = {.lex_state = 181},
  [730] = {.lex_state = 181},
  [731] = {.lex_state = 517, .external_lex_state = 2},
  [732] = {.lex_state = 181},
  [733] = {.lex_state = 181},
  [734] = {.lex_state = 181},
  [735] = {.lex_state = 181},
  [736] = {.lex_state = 517, .external_lex_state = 2},
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
    [anon_sym_COMMA] = ACTIONS(87),
    [anon_sym_EQ] = ACTIONS(87),
    [anon_sym_EQ_GT] = ACTIONS(87),
    [anon_sym_PIPE] = ACTIONS(87),
    [anon_sym_deriving] = ACTIONS(87),
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
    [anon_sym_COMMA] = ACTIONS(127),
    [anon_sym_EQ] = ACTIONS(127),
    [anon_sym_EQ_GT] = ACTIONS(127),
    [anon_sym_PIPE] = ACTIONS(127),
    [anon_sym_deriving] = ACTIONS(127),
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
    [sym_float] = ACTIONS(203),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [sym__integer_literal] = ACTIONS(81),
    [sym__octal_literal] = ACTIONS(81),
    [sym__hexidecimal_literal] = ACTIONS(81),
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
    [sym_labels] = STATE(128),
    [sym_label] = STATE(129),
    [sym_strict] = STATE(130),
    [sym__literal] = STATE(131),
    [sym__identifier] = STATE(132),
    [sym_variable_identifier] = STATE(133),
    [sym_constructor_identifier] = STATE(133),
    [sym_integer] = STATE(124),
    [sym_char] = STATE(124),
    [sym_string] = STATE(124),
    [sym_fields] = STATE(128),
    [aux_sym_constructor_repeat1] = STATE(134),
    [aux_sym_constructor_repeat3] = STATE(135),
    [anon_sym_LBRACE] = ACTIONS(209),
    [anon_sym_LPAREN] = ACTIONS(211),
    [anon_sym_where] = ACTIONS(213),
    [anon_sym_EQ_GT] = ACTIONS(213),
    [anon_sym_BANG] = ACTIONS(215),
    [sym__variable_pattern] = ACTIONS(217),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(219),
    [anon_sym_SQUOTE] = ACTIONS(221),
    [anon_sym_DQUOTE] = ACTIONS(223),
    [sym__integer_literal] = ACTIONS(225),
    [sym__octal_literal] = ACTIONS(225),
    [sym__hexidecimal_literal] = ACTIONS(225),
  },
  [39] = {
    [sym_constructor] = STATE(136),
    [sym_constructor_identifier] = STATE(116),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [40] = {
    [sym_where] = STATE(137),
    [anon_sym_where] = ACTIONS(205),
    [anon_sym_EQ_GT] = ACTIONS(207),
    [sym_comment] = ACTIONS(5),
  },
  [41] = {
    [sym__layout_semicolon] = ACTIONS(227),
    [anon_sym_SEMI] = ACTIONS(229),
    [anon_sym_COMMA] = ACTIONS(229),
    [anon_sym_DASH] = ACTIONS(229),
    [anon_sym_BANG] = ACTIONS(229),
    [anon_sym_DOT] = ACTIONS(229),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(229),
    [anon_sym_DOLLAR] = ACTIONS(229),
    [anon_sym_PERCENT] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(229),
    [anon_sym_1] = ACTIONS(229),
    [anon_sym_PLUS] = ACTIONS(229),
    [anon_sym_SLASH] = ACTIONS(229),
    [anon_sym_LT] = ACTIONS(229),
    [anon_sym_GT] = ACTIONS(229),
    [anon_sym_QMARK] = ACTIONS(229),
    [anon_sym_CARET] = ACTIONS(229),
  },
  [42] = {
    [sym__identifier] = STATE(138),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [43] = {
    [sym__constructor_symbol] = STATE(140),
    [aux_sym_constructor_symbol_repeat1] = STATE(141),
    [sym__layout_semicolon] = ACTIONS(231),
    [anon_sym_SEMI] = ACTIONS(233),
    [anon_sym_COMMA] = ACTIONS(233),
    [anon_sym_DASH] = ACTIONS(235),
    [anon_sym_COLON] = ACTIONS(235),
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
    [aux_sym_fixity_repeat1] = STATE(143),
    [sym__layout_semicolon] = ACTIONS(237),
    [anon_sym_SEMI] = ACTIONS(239),
    [anon_sym_COMMA] = ACTIONS(241),
    [sym_comment] = ACTIONS(5),
  },
  [46] = {
    [sym__layout_semicolon] = ACTIONS(243),
    [anon_sym_SEMI] = ACTIONS(245),
    [anon_sym_COMMA] = ACTIONS(245),
    [sym_comment] = ACTIONS(5),
  },
  [47] = {
    [sym__op] = STATE(144),
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
    [sym__variable_symbol] = STATE(145),
    [aux_sym_variable_symbol_repeat1] = STATE(146),
    [sym__layout_semicolon] = ACTIONS(247),
    [anon_sym_SEMI] = ACTIONS(249),
    [anon_sym_COMMA] = ACTIONS(249),
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
    [sym_float] = ACTIONS(203),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [sym__integer_literal] = ACTIONS(81),
    [sym__octal_literal] = ACTIONS(81),
    [sym__hexidecimal_literal] = ACTIONS(81),
  },
  [50] = {
    [sym_constructor] = STATE(148),
    [sym_constructor_identifier] = STATE(149),
    [sym__constructor_pattern] = ACTIONS(251),
    [sym_comment] = ACTIONS(5),
  },
  [51] = {
    [sym_constructors] = STATE(152),
    [sym_constructor] = STATE(153),
    [sym_deriving] = STATE(154),
    [sym_constructor_identifier] = STATE(155),
    [sym__layout_semicolon] = ACTIONS(253),
    [anon_sym_SEMI] = ACTIONS(255),
    [anon_sym_EQ] = ACTIONS(257),
    [anon_sym_EQ_GT] = ACTIONS(207),
    [anon_sym_deriving] = ACTIONS(259),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [52] = {
    [sym_labels] = STATE(160),
    [sym_label] = STATE(161),
    [sym_strict] = STATE(162),
    [sym__literal] = STATE(163),
    [sym__identifier] = STATE(164),
    [sym_variable_identifier] = STATE(26),
    [sym_constructor_identifier] = STATE(26),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [sym_fields] = STATE(160),
    [aux_sym_constructor_repeat1] = STATE(165),
    [aux_sym_constructor_repeat3] = STATE(166),
    [sym__layout_semicolon] = ACTIONS(261),
    [anon_sym_SEMI] = ACTIONS(213),
    [anon_sym_LBRACE] = ACTIONS(263),
    [anon_sym_LPAREN] = ACTIONS(265),
    [anon_sym_EQ] = ACTIONS(213),
    [anon_sym_EQ_GT] = ACTIONS(213),
    [anon_sym_deriving] = ACTIONS(213),
    [anon_sym_BANG] = ACTIONS(267),
    [sym__variable_pattern] = ACTIONS(269),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym__integer_literal] = ACTIONS(41),
    [sym__octal_literal] = ACTIONS(41),
    [sym__hexidecimal_literal] = ACTIONS(41),
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
    [sym_float] = ACTIONS(203),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [sym__integer_literal] = ACTIONS(81),
    [sym__octal_literal] = ACTIONS(81),
    [sym__hexidecimal_literal] = ACTIONS(81),
  },
  [54] = {
    [sym_simple_type] = STATE(167),
    [sym_constructor_identifier] = STATE(168),
    [sym__constructor_pattern] = ACTIONS(71),
    [sym_comment] = ACTIONS(5),
  },
  [55] = {
    [anon_sym_EQ_GT] = ACTIONS(207),
    [sym_comment] = ACTIONS(5),
  },
  [56] = {
    [anon_sym_EQ] = ACTIONS(271),
    [sym_comment] = ACTIONS(5),
  },
  [57] = {
    [sym_labels] = STATE(128),
    [sym_label] = STATE(129),
    [sym_strict] = STATE(172),
    [sym__literal] = STATE(131),
    [sym__identifier] = STATE(173),
    [sym_variable_identifier] = STATE(174),
    [sym_constructor_identifier] = STATE(174),
    [sym_integer] = STATE(124),
    [sym_char] = STATE(124),
    [sym_string] = STATE(124),
    [sym_fields] = STATE(128),
    [aux_sym_constructor_repeat1] = STATE(175),
    [aux_sym_constructor_repeat3] = STATE(135),
    [aux_sym_simple_type_repeat1] = STATE(176),
    [anon_sym_LBRACE] = ACTIONS(209),
    [anon_sym_LPAREN] = ACTIONS(211),
    [anon_sym_EQ] = ACTIONS(273),
    [anon_sym_EQ_GT] = ACTIONS(213),
    [anon_sym_BANG] = ACTIONS(275),
    [sym__variable_pattern] = ACTIONS(277),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(219),
    [anon_sym_SQUOTE] = ACTIONS(221),
    [anon_sym_DQUOTE] = ACTIONS(223),
    [sym__integer_literal] = ACTIONS(225),
    [sym__octal_literal] = ACTIONS(225),
    [sym__hexidecimal_literal] = ACTIONS(225),
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
    [sym_float] = ACTIONS(203),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [sym__integer_literal] = ACTIONS(81),
    [sym__octal_literal] = ACTIONS(81),
    [sym__hexidecimal_literal] = ACTIONS(81),
  },
  [59] = {
    [anon_sym_EQ] = ACTIONS(279),
    [sym_comment] = ACTIONS(5),
  },
  [60] = {
    [sym_labels] = STATE(182),
    [sym_label] = STATE(183),
    [sym_strict] = STATE(184),
    [sym__literal] = STATE(185),
    [sym__identifier] = STATE(186),
    [sym_variable_identifier] = STATE(187),
    [sym_constructor_identifier] = STATE(187),
    [sym_integer] = STATE(89),
    [sym_char] = STATE(89),
    [sym_string] = STATE(89),
    [sym_fields] = STATE(182),
    [aux_sym_constructor_repeat1] = STATE(188),
    [aux_sym_constructor_repeat3] = STATE(189),
    [anon_sym_LBRACE] = ACTIONS(281),
    [anon_sym_LPAREN] = ACTIONS(283),
    [anon_sym_EQ] = ACTIONS(213),
    [anon_sym_BANG] = ACTIONS(285),
    [sym__variable_pattern] = ACTIONS(287),
    [sym__constructor_pattern] = ACTIONS(71),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [61] = {
    [anon_sym_LPAREN] = ACTIONS(289),
    [anon_sym_EQ] = ACTIONS(289),
    [anon_sym_TILDE] = ACTIONS(289),
    [anon_sym_LBRACK] = ACTIONS(289),
    [anon_sym_AT] = ACTIONS(289),
    [anon_sym__] = ACTIONS(289),
    [sym_list_constructor] = ACTIONS(289),
    [sym__variable_pattern] = ACTIONS(291),
    [sym__constructor_pattern] = ACTIONS(291),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(291),
    [anon_sym_SQUOTE] = ACTIONS(289),
    [anon_sym_DQUOTE] = ACTIONS(289),
    [sym__integer_literal] = ACTIONS(289),
    [sym__octal_literal] = ACTIONS(289),
    [sym__hexidecimal_literal] = ACTIONS(289),
  },
  [62] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(293),
  },
  [63] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(295),
  },
  [64] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(297),
  },
  [65] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(299),
  },
  [66] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(301),
  },
  [67] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(303),
  },
  [68] = {
    [sym__char_escape] = STATE(192),
    [sym__ascii] = STATE(192),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(305),
    [anon_sym_DQUOTE] = ACTIONS(305),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(307),
    [anon_sym_AMP] = ACTIONS(305),
    [anon_sym_CARET] = ACTIONS(309),
    [anon_sym_BSLASH] = ACTIONS(305),
    [anon_sym_x] = ACTIONS(311),
    [anon_sym_X] = ACTIONS(311),
    [anon_sym_o] = ACTIONS(313),
    [anon_sym_O] = ACTIONS(313),
    [anon_sym_a] = ACTIONS(305),
    [anon_sym_b] = ACTIONS(305),
    [anon_sym_f] = ACTIONS(305),
    [anon_sym_n] = ACTIONS(305),
    [anon_sym_r] = ACTIONS(305),
    [anon_sym_t] = ACTIONS(305),
    [anon_sym_v] = ACTIONS(305),
    [anon_sym_NUL] = ACTIONS(315),
    [anon_sym_SOH] = ACTIONS(315),
    [anon_sym_STX] = ACTIONS(315),
    [anon_sym_ETX] = ACTIONS(315),
    [anon_sym_EOT] = ACTIONS(315),
    [anon_sym_ENQ] = ACTIONS(315),
    [anon_sym_ACK] = ACTIONS(315),
    [anon_sym_BEL] = ACTIONS(315),
    [anon_sym_BS] = ACTIONS(315),
    [anon_sym_HT] = ACTIONS(315),
    [anon_sym_LF] = ACTIONS(315),
    [anon_sym_VT] = ACTIONS(315),
    [anon_sym_FF] = ACTIONS(315),
    [anon_sym_CR] = ACTIONS(315),
    [anon_sym_SO] = ACTIONS(315),
    [anon_sym_SI] = ACTIONS(315),
    [anon_sym_DLE] = ACTIONS(315),
    [anon_sym_DC1] = ACTIONS(315),
    [anon_sym_DC2] = ACTIONS(315),
    [anon_sym_DC3] = ACTIONS(315),
    [anon_sym_DC4] = ACTIONS(315),
    [anon_sym_NAK] = ACTIONS(315),
    [anon_sym_SYN] = ACTIONS(315),
    [anon_sym_ETB] = ACTIONS(315),
    [anon_sym_CAN] = ACTIONS(315),
    [anon_sym_EM] = ACTIONS(315),
    [anon_sym_SUB] = ACTIONS(315),
    [anon_sym_ESC] = ACTIONS(315),
    [anon_sym_FS] = ACTIONS(315),
    [anon_sym_GS] = ACTIONS(315),
    [anon_sym_RS] = ACTIONS(315),
    [anon_sym_US] = ACTIONS(315),
    [anon_sym_SP] = ACTIONS(315),
    [anon_sym_DEL] = ACTIONS(315),
  },
  [69] = {
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
  [70] = {
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
    [sym_comment] = ACTIONS(97),
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
  [71] = {
    [anon_sym_SEMI] = ACTIONS(321),
    [anon_sym_LBRACE] = ACTIONS(321),
    [anon_sym_RBRACE] = ACTIONS(321),
    [anon_sym_LPAREN] = ACTIONS(321),
    [anon_sym_RPAREN] = ACTIONS(321),
    [anon_sym_EQ] = ACTIONS(321),
    [anon_sym_TILDE] = ACTIONS(321),
    [anon_sym_LBRACK] = ACTIONS(321),
    [anon_sym_RBRACK] = ACTIONS(321),
    [anon_sym_DASH] = ACTIONS(321),
    [anon_sym_AT] = ACTIONS(321),
    [anon_sym__] = ACTIONS(321),
    [anon_sym_BQUOTE] = ACTIONS(321),
    [anon_sym_COLON] = ACTIONS(321),
    [anon_sym_PIPE] = ACTIONS(321),
    [anon_sym_BANG] = ACTIONS(321),
    [anon_sym_DOT] = ACTIONS(321),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(321),
    [anon_sym_DQUOTE] = ACTIONS(321),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(321),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(321),
    [sym__ascii_large] = ACTIONS(321),
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
    [anon_sym_BSLASH] = ACTIONS(321),
    [sym__space] = ACTIONS(321),
    [sym__newline] = ACTIONS(321),
    [sym__tab] = ACTIONS(321),
    [sym__vertical_tab] = ACTIONS(321),
  },
  [72] = {
    [anon_sym_SEMI] = ACTIONS(323),
    [anon_sym_LBRACE] = ACTIONS(323),
    [anon_sym_RBRACE] = ACTIONS(323),
    [anon_sym_LPAREN] = ACTIONS(323),
    [anon_sym_RPAREN] = ACTIONS(323),
    [anon_sym_EQ] = ACTIONS(323),
    [anon_sym_TILDE] = ACTIONS(323),
    [anon_sym_LBRACK] = ACTIONS(323),
    [anon_sym_RBRACK] = ACTIONS(323),
    [anon_sym_DASH] = ACTIONS(323),
    [anon_sym_AT] = ACTIONS(323),
    [anon_sym__] = ACTIONS(323),
    [anon_sym_BQUOTE] = ACTIONS(323),
    [anon_sym_COLON] = ACTIONS(323),
    [anon_sym_PIPE] = ACTIONS(323),
    [anon_sym_BANG] = ACTIONS(323),
    [anon_sym_DOT] = ACTIONS(323),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(323),
    [anon_sym_DQUOTE] = ACTIONS(323),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(323),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(323),
    [sym__ascii_large] = ACTIONS(323),
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
    [anon_sym_BSLASH] = ACTIONS(323),
    [sym__space] = ACTIONS(323),
    [sym__newline] = ACTIONS(323),
    [sym__tab] = ACTIONS(323),
    [sym__vertical_tab] = ACTIONS(323),
  },
  [73] = {
    [sym__layout_semicolon] = ACTIONS(325),
    [anon_sym_SEMI] = ACTIONS(327),
    [anon_sym_COMMA] = ACTIONS(327),
    [anon_sym_EQ] = ACTIONS(327),
    [anon_sym_EQ_GT] = ACTIONS(327),
    [anon_sym_PIPE] = ACTIONS(327),
    [anon_sym_deriving] = ACTIONS(327),
    [sym__constructor_pattern] = ACTIONS(329),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(329),
    [anon_sym_SQUOTE] = ACTIONS(327),
    [anon_sym_DQUOTE] = ACTIONS(327),
    [sym__integer_literal] = ACTIONS(327),
    [sym__octal_literal] = ACTIONS(327),
    [sym__hexidecimal_literal] = ACTIONS(327),
  },
  [74] = {
    [anon_sym_SEMI] = ACTIONS(331),
    [anon_sym_LBRACE] = ACTIONS(331),
    [anon_sym_RBRACE] = ACTIONS(331),
    [anon_sym_LPAREN] = ACTIONS(331),
    [anon_sym_RPAREN] = ACTIONS(331),
    [anon_sym_EQ] = ACTIONS(331),
    [anon_sym_TILDE] = ACTIONS(331),
    [anon_sym_LBRACK] = ACTIONS(331),
    [anon_sym_RBRACK] = ACTIONS(331),
    [anon_sym_DASH] = ACTIONS(331),
    [anon_sym_AT] = ACTIONS(331),
    [anon_sym__] = ACTIONS(331),
    [anon_sym_BQUOTE] = ACTIONS(331),
    [anon_sym_COLON] = ACTIONS(331),
    [anon_sym_PIPE] = ACTIONS(331),
    [anon_sym_BANG] = ACTIONS(331),
    [anon_sym_DOT] = ACTIONS(331),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(331),
    [anon_sym_DQUOTE] = ACTIONS(331),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(331),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(331),
    [sym__ascii_large] = ACTIONS(331),
    [anon_sym_POUND] = ACTIONS(331),
    [anon_sym_DOLLAR] = ACTIONS(331),
    [anon_sym_PERCENT] = ACTIONS(331),
    [anon_sym_AMP] = ACTIONS(331),
    [anon_sym_1] = ACTIONS(331),
    [anon_sym_PLUS] = ACTIONS(331),
    [anon_sym_SLASH] = ACTIONS(331),
    [anon_sym_LT] = ACTIONS(331),
    [anon_sym_GT] = ACTIONS(331),
    [anon_sym_QMARK] = ACTIONS(331),
    [anon_sym_CARET] = ACTIONS(331),
    [anon_sym_BSLASH] = ACTIONS(331),
    [sym__space] = ACTIONS(331),
    [sym__newline] = ACTIONS(331),
    [sym__tab] = ACTIONS(331),
    [sym__vertical_tab] = ACTIONS(331),
  },
  [75] = {
    [anon_sym_SEMI] = ACTIONS(333),
    [anon_sym_LBRACE] = ACTIONS(333),
    [anon_sym_RBRACE] = ACTIONS(333),
    [anon_sym_LPAREN] = ACTIONS(333),
    [anon_sym_RPAREN] = ACTIONS(333),
    [anon_sym_EQ] = ACTIONS(333),
    [anon_sym_TILDE] = ACTIONS(333),
    [anon_sym_LBRACK] = ACTIONS(333),
    [anon_sym_RBRACK] = ACTIONS(333),
    [anon_sym_DASH] = ACTIONS(333),
    [anon_sym_AT] = ACTIONS(333),
    [anon_sym__] = ACTIONS(333),
    [anon_sym_BQUOTE] = ACTIONS(333),
    [anon_sym_COLON] = ACTIONS(333),
    [anon_sym_PIPE] = ACTIONS(333),
    [anon_sym_BANG] = ACTIONS(333),
    [anon_sym_DOT] = ACTIONS(333),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(333),
    [anon_sym_DQUOTE] = ACTIONS(333),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(333),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(333),
    [sym__ascii_large] = ACTIONS(333),
    [anon_sym_POUND] = ACTIONS(333),
    [anon_sym_DOLLAR] = ACTIONS(333),
    [anon_sym_PERCENT] = ACTIONS(333),
    [anon_sym_AMP] = ACTIONS(333),
    [anon_sym_1] = ACTIONS(333),
    [anon_sym_PLUS] = ACTIONS(333),
    [anon_sym_SLASH] = ACTIONS(333),
    [anon_sym_LT] = ACTIONS(333),
    [anon_sym_GT] = ACTIONS(333),
    [anon_sym_QMARK] = ACTIONS(333),
    [anon_sym_CARET] = ACTIONS(333),
    [anon_sym_BSLASH] = ACTIONS(333),
    [sym__space] = ACTIONS(333),
    [sym__newline] = ACTIONS(333),
    [sym__tab] = ACTIONS(333),
    [sym__vertical_tab] = ACTIONS(333),
  },
  [76] = {
    [sym__char_escape] = STATE(198),
    [sym__ascii] = STATE(198),
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
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(335),
    [anon_sym_DQUOTE] = ACTIONS(335),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(337),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(319),
    [sym__ascii_large] = ACTIONS(319),
    [anon_sym_POUND] = ACTIONS(319),
    [anon_sym_DOLLAR] = ACTIONS(319),
    [anon_sym_PERCENT] = ACTIONS(319),
    [anon_sym_AMP] = ACTIONS(335),
    [anon_sym_1] = ACTIONS(319),
    [anon_sym_PLUS] = ACTIONS(319),
    [anon_sym_SLASH] = ACTIONS(319),
    [anon_sym_LT] = ACTIONS(319),
    [anon_sym_GT] = ACTIONS(319),
    [anon_sym_QMARK] = ACTIONS(319),
    [anon_sym_CARET] = ACTIONS(339),
    [anon_sym_BSLASH] = ACTIONS(335),
    [sym__space] = ACTIONS(319),
    [sym__newline] = ACTIONS(319),
    [sym__tab] = ACTIONS(319),
    [sym__vertical_tab] = ACTIONS(319),
    [anon_sym_x] = ACTIONS(341),
    [anon_sym_X] = ACTIONS(341),
    [anon_sym_o] = ACTIONS(343),
    [anon_sym_O] = ACTIONS(343),
    [anon_sym_a] = ACTIONS(335),
    [anon_sym_b] = ACTIONS(335),
    [anon_sym_f] = ACTIONS(335),
    [anon_sym_n] = ACTIONS(335),
    [anon_sym_r] = ACTIONS(335),
    [anon_sym_t] = ACTIONS(335),
    [anon_sym_v] = ACTIONS(335),
    [anon_sym_NUL] = ACTIONS(345),
    [anon_sym_SOH] = ACTIONS(345),
    [anon_sym_STX] = ACTIONS(345),
    [anon_sym_ETX] = ACTIONS(345),
    [anon_sym_EOT] = ACTIONS(345),
    [anon_sym_ENQ] = ACTIONS(345),
    [anon_sym_ACK] = ACTIONS(345),
    [anon_sym_BEL] = ACTIONS(345),
    [anon_sym_BS] = ACTIONS(345),
    [anon_sym_HT] = ACTIONS(345),
    [anon_sym_LF] = ACTIONS(345),
    [anon_sym_VT] = ACTIONS(345),
    [anon_sym_FF] = ACTIONS(345),
    [anon_sym_CR] = ACTIONS(345),
    [anon_sym_SO] = ACTIONS(345),
    [anon_sym_SI] = ACTIONS(345),
    [anon_sym_DLE] = ACTIONS(345),
    [anon_sym_DC1] = ACTIONS(345),
    [anon_sym_DC2] = ACTIONS(345),
    [anon_sym_DC3] = ACTIONS(345),
    [anon_sym_DC4] = ACTIONS(345),
    [anon_sym_NAK] = ACTIONS(345),
    [anon_sym_SYN] = ACTIONS(345),
    [anon_sym_ETB] = ACTIONS(345),
    [anon_sym_CAN] = ACTIONS(345),
    [anon_sym_EM] = ACTIONS(345),
    [anon_sym_SUB] = ACTIONS(345),
    [anon_sym_ESC] = ACTIONS(345),
    [anon_sym_FS] = ACTIONS(345),
    [anon_sym_GS] = ACTIONS(345),
    [anon_sym_RS] = ACTIONS(345),
    [anon_sym_US] = ACTIONS(345),
    [anon_sym_SP] = ACTIONS(345),
    [anon_sym_DEL] = ACTIONS(345),
  },
  [77] = {
    [anon_sym_SEMI] = ACTIONS(347),
    [anon_sym_LBRACE] = ACTIONS(347),
    [anon_sym_RBRACE] = ACTIONS(347),
    [anon_sym_LPAREN] = ACTIONS(347),
    [anon_sym_RPAREN] = ACTIONS(347),
    [anon_sym_EQ] = ACTIONS(347),
    [anon_sym_TILDE] = ACTIONS(347),
    [anon_sym_LBRACK] = ACTIONS(347),
    [anon_sym_RBRACK] = ACTIONS(347),
    [anon_sym_DASH] = ACTIONS(347),
    [anon_sym_AT] = ACTIONS(347),
    [anon_sym__] = ACTIONS(347),
    [anon_sym_BQUOTE] = ACTIONS(347),
    [anon_sym_COLON] = ACTIONS(347),
    [anon_sym_PIPE] = ACTIONS(347),
    [anon_sym_BANG] = ACTIONS(347),
    [anon_sym_DOT] = ACTIONS(347),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(347),
    [anon_sym_DQUOTE] = ACTIONS(347),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(347),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(347),
    [sym__ascii_large] = ACTIONS(347),
    [anon_sym_POUND] = ACTIONS(347),
    [anon_sym_DOLLAR] = ACTIONS(347),
    [anon_sym_PERCENT] = ACTIONS(347),
    [anon_sym_AMP] = ACTIONS(347),
    [anon_sym_1] = ACTIONS(347),
    [anon_sym_PLUS] = ACTIONS(347),
    [anon_sym_SLASH] = ACTIONS(347),
    [anon_sym_LT] = ACTIONS(347),
    [anon_sym_GT] = ACTIONS(347),
    [anon_sym_QMARK] = ACTIONS(347),
    [anon_sym_CARET] = ACTIONS(347),
    [anon_sym_BSLASH] = ACTIONS(347),
    [sym__space] = ACTIONS(347),
    [sym__newline] = ACTIONS(347),
    [sym__tab] = ACTIONS(347),
    [sym__vertical_tab] = ACTIONS(347),
  },
  [78] = {
    [sym__gap] = STATE(203),
    [sym__graphic] = STATE(203),
    [sym__small] = STATE(74),
    [sym__large] = STATE(74),
    [sym__symbol] = STATE(74),
    [sym__special] = STATE(74),
    [sym__escape] = STATE(203),
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
    [anon_sym_SQUOTE] = ACTIONS(349),
    [anon_sym_DQUOTE] = ACTIONS(351),
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
    [ts_builtin_sym_end] = ACTIONS(353),
    [anon_sym_RBRACE] = ACTIONS(355),
    [anon_sym_import] = ACTIONS(355),
    [anon_sym_foreign] = ACTIONS(355),
    [anon_sym_default] = ACTIONS(355),
    [anon_sym_class] = ACTIONS(355),
    [anon_sym_instance] = ACTIONS(355),
    [anon_sym_infixl] = ACTIONS(355),
    [anon_sym_infixr] = ACTIONS(355),
    [anon_sym_infix] = ACTIONS(355),
    [anon_sym_data] = ACTIONS(355),
    [anon_sym_newtype] = ACTIONS(355),
    [anon_sym_type] = ACTIONS(355),
    [sym__variable_pattern] = ACTIONS(357),
    [sym__constructor_pattern] = ACTIONS(357),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(357),
    [anon_sym_SQUOTE] = ACTIONS(355),
    [anon_sym_DQUOTE] = ACTIONS(355),
    [sym__integer_literal] = ACTIONS(355),
    [sym__octal_literal] = ACTIONS(355),
    [sym__hexidecimal_literal] = ACTIONS(355),
  },
  [80] = {
    [sym_where] = STATE(212),
    [sym__variable] = STATE(213),
    [sym_qualified_variable_identifier] = STATE(214),
    [sym__expression] = STATE(215),
    [sym_do_expression] = STATE(213),
    [sym_constructor] = STATE(213),
    [sym__literal] = STATE(213),
    [sym_variable_identifier] = STATE(214),
    [sym_constructor_identifier] = STATE(216),
    [sym_integer] = STATE(208),
    [sym_char] = STATE(208),
    [sym_string] = STATE(208),
    [aux_sym_function_body_repeat1] = STATE(217),
    [sym__layout_semicolon] = ACTIONS(359),
    [anon_sym_SEMI] = ACTIONS(361),
    [anon_sym_where] = ACTIONS(205),
    [anon_sym_do] = ACTIONS(363),
    [sym__variable_pattern] = ACTIONS(365),
    [sym__constructor_pattern] = ACTIONS(367),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(369),
    [anon_sym_SQUOTE] = ACTIONS(371),
    [anon_sym_DQUOTE] = ACTIONS(373),
    [sym__integer_literal] = ACTIONS(375),
    [sym__octal_literal] = ACTIONS(375),
    [sym__hexidecimal_literal] = ACTIONS(375),
  },
  [81] = {
    [sym__layout_semicolon] = ACTIONS(377),
    [anon_sym_SEMI] = ACTIONS(379),
    [sym_comment] = ACTIONS(5),
  },
  [82] = {
    [sym__function_pattern] = STATE(221),
    [sym_label_pattern] = STATE(86),
    [sym_irrefutable_pattern] = STATE(86),
    [sym_list_pattern] = STATE(86),
    [sym_tuple_pattern] = STATE(86),
    [sym_parenthesized_pattern] = STATE(86),
    [sym__pattern] = STATE(222),
    [sym_negative_literal] = STATE(223),
    [sym_as_pattern] = STATE(86),
    [sym_wildcard] = STATE(86),
    [sym__variable] = STATE(224),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym_constructor] = STATE(223),
    [sym__literal] = STATE(86),
    [sym__identifier] = STATE(94),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(225),
    [sym_integer] = STATE(89),
    [sym_char] = STATE(89),
    [sym_string] = STATE(89),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_TILDE] = ACTIONS(381),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym_DASH] = ACTIONS(383),
    [anon_sym__] = ACTIONS(151),
    [sym_list_constructor] = ACTIONS(153),
    [sym__variable_pattern] = ACTIONS(155),
    [sym__constructor_pattern] = ACTIONS(385),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [83] = {
    [sym__function_pattern] = STATE(226),
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
    [sym__function_pattern] = STATE(229),
    [sym_label_pattern] = STATE(86),
    [sym_irrefutable_pattern] = STATE(86),
    [sym_list_pattern] = STATE(86),
    [sym_tuple_pattern] = STATE(86),
    [sym_parenthesized_pattern] = STATE(86),
    [sym_as_pattern] = STATE(86),
    [sym_wildcard] = STATE(86),
    [sym__variable] = STATE(230),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym__literal] = STATE(86),
    [sym__identifier] = STATE(94),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(96),
    [sym_integer] = STATE(89),
    [sym_char] = STATE(89),
    [sym_string] = STATE(89),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_TILDE] = ACTIONS(387),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym__] = ACTIONS(151),
    [sym_list_constructor] = ACTIONS(153),
    [sym__variable_pattern] = ACTIONS(155),
    [sym__constructor_pattern] = ACTIONS(389),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [85] = {
    [anon_sym_LPAREN] = ACTIONS(391),
    [anon_sym_COMMA] = ACTIONS(391),
    [anon_sym_RPAREN] = ACTIONS(391),
    [anon_sym_EQ] = ACTIONS(391),
    [anon_sym_TILDE] = ACTIONS(391),
    [anon_sym_LBRACK] = ACTIONS(391),
    [anon_sym_RBRACK] = ACTIONS(391),
    [anon_sym_DASH] = ACTIONS(391),
    [anon_sym__] = ACTIONS(391),
    [anon_sym_BQUOTE] = ACTIONS(391),
    [anon_sym_COLON] = ACTIONS(391),
    [sym_list_constructor] = ACTIONS(391),
    [anon_sym_BANG] = ACTIONS(391),
    [sym__variable_pattern] = ACTIONS(393),
    [sym__constructor_pattern] = ACTIONS(393),
    [anon_sym_DOT] = ACTIONS(391),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(393),
    [anon_sym_SQUOTE] = ACTIONS(391),
    [anon_sym_DQUOTE] = ACTIONS(391),
    [anon_sym_POUND] = ACTIONS(391),
    [anon_sym_DOLLAR] = ACTIONS(391),
    [anon_sym_PERCENT] = ACTIONS(391),
    [anon_sym_AMP] = ACTIONS(391),
    [anon_sym_1] = ACTIONS(391),
    [anon_sym_PLUS] = ACTIONS(391),
    [anon_sym_SLASH] = ACTIONS(391),
    [anon_sym_LT] = ACTIONS(391),
    [anon_sym_GT] = ACTIONS(391),
    [anon_sym_QMARK] = ACTIONS(391),
    [anon_sym_CARET] = ACTIONS(391),
    [sym__integer_literal] = ACTIONS(391),
    [sym__octal_literal] = ACTIONS(391),
    [sym__hexidecimal_literal] = ACTIONS(391),
  },
  [86] = {
    [anon_sym_LPAREN] = ACTIONS(395),
    [anon_sym_COMMA] = ACTIONS(395),
    [anon_sym_RPAREN] = ACTIONS(395),
    [anon_sym_EQ] = ACTIONS(395),
    [anon_sym_TILDE] = ACTIONS(395),
    [anon_sym_LBRACK] = ACTIONS(395),
    [anon_sym_RBRACK] = ACTIONS(395),
    [anon_sym_DASH] = ACTIONS(395),
    [anon_sym__] = ACTIONS(395),
    [anon_sym_BQUOTE] = ACTIONS(395),
    [anon_sym_COLON] = ACTIONS(395),
    [sym_list_constructor] = ACTIONS(395),
    [anon_sym_BANG] = ACTIONS(395),
    [sym__variable_pattern] = ACTIONS(397),
    [sym__constructor_pattern] = ACTIONS(397),
    [anon_sym_DOT] = ACTIONS(395),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(397),
    [anon_sym_SQUOTE] = ACTIONS(395),
    [anon_sym_DQUOTE] = ACTIONS(395),
    [anon_sym_POUND] = ACTIONS(395),
    [anon_sym_DOLLAR] = ACTIONS(395),
    [anon_sym_PERCENT] = ACTIONS(395),
    [anon_sym_AMP] = ACTIONS(395),
    [anon_sym_1] = ACTIONS(395),
    [anon_sym_PLUS] = ACTIONS(395),
    [anon_sym_SLASH] = ACTIONS(395),
    [anon_sym_LT] = ACTIONS(395),
    [anon_sym_GT] = ACTIONS(395),
    [anon_sym_QMARK] = ACTIONS(395),
    [anon_sym_CARET] = ACTIONS(395),
    [sym__integer_literal] = ACTIONS(395),
    [sym__octal_literal] = ACTIONS(395),
    [sym__hexidecimal_literal] = ACTIONS(395),
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
    [sym__graphic] = STATE(231),
    [sym__small] = STATE(66),
    [sym__large] = STATE(66),
    [sym__symbol] = STATE(66),
    [sym__special] = STATE(66),
    [sym__escape] = STATE(231),
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
    [anon_sym_SQUOTE] = ACTIONS(399),
    [anon_sym_DQUOTE] = ACTIONS(399),
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
    [sym__space] = ACTIONS(399),
  },
  [91] = {
    [sym__gap] = STATE(72),
    [sym__graphic] = STATE(72),
    [sym__small] = STATE(74),
    [sym__large] = STATE(74),
    [sym__symbol] = STATE(74),
    [sym__special] = STATE(74),
    [sym__escape] = STATE(72),
    [aux_sym_string_repeat1] = STATE(233),
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
    [anon_sym_DQUOTE] = ACTIONS(401),
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
    [anon_sym_LPAREN] = ACTIONS(403),
    [anon_sym_EQ] = ACTIONS(403),
    [anon_sym_TILDE] = ACTIONS(403),
    [anon_sym_LBRACK] = ACTIONS(403),
    [anon_sym__] = ACTIONS(403),
    [sym_list_constructor] = ACTIONS(403),
    [sym__variable_pattern] = ACTIONS(405),
    [sym__constructor_pattern] = ACTIONS(405),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(405),
    [anon_sym_SQUOTE] = ACTIONS(403),
    [anon_sym_DQUOTE] = ACTIONS(403),
    [sym__integer_literal] = ACTIONS(403),
    [sym__octal_literal] = ACTIONS(403),
    [sym__hexidecimal_literal] = ACTIONS(403),
  },
  [93] = {
    [anon_sym_AT] = ACTIONS(407),
    [sym_comment] = ACTIONS(5),
  },
  [94] = {
    [anon_sym_LBRACE] = ACTIONS(409),
    [anon_sym_LPAREN] = ACTIONS(395),
    [anon_sym_COMMA] = ACTIONS(395),
    [anon_sym_RPAREN] = ACTIONS(395),
    [anon_sym_EQ] = ACTIONS(395),
    [anon_sym_TILDE] = ACTIONS(395),
    [anon_sym_LBRACK] = ACTIONS(395),
    [anon_sym_RBRACK] = ACTIONS(395),
    [anon_sym_DASH] = ACTIONS(395),
    [anon_sym__] = ACTIONS(395),
    [anon_sym_BQUOTE] = ACTIONS(395),
    [anon_sym_COLON] = ACTIONS(395),
    [sym_list_constructor] = ACTIONS(395),
    [anon_sym_BANG] = ACTIONS(395),
    [sym__variable_pattern] = ACTIONS(397),
    [sym__constructor_pattern] = ACTIONS(397),
    [anon_sym_DOT] = ACTIONS(395),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(397),
    [anon_sym_SQUOTE] = ACTIONS(395),
    [anon_sym_DQUOTE] = ACTIONS(395),
    [anon_sym_POUND] = ACTIONS(395),
    [anon_sym_DOLLAR] = ACTIONS(395),
    [anon_sym_PERCENT] = ACTIONS(395),
    [anon_sym_AMP] = ACTIONS(395),
    [anon_sym_1] = ACTIONS(395),
    [anon_sym_PLUS] = ACTIONS(395),
    [anon_sym_SLASH] = ACTIONS(395),
    [anon_sym_LT] = ACTIONS(395),
    [anon_sym_GT] = ACTIONS(395),
    [anon_sym_QMARK] = ACTIONS(395),
    [anon_sym_CARET] = ACTIONS(395),
    [sym__integer_literal] = ACTIONS(395),
    [sym__octal_literal] = ACTIONS(395),
    [sym__hexidecimal_literal] = ACTIONS(395),
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
    [sym__function_pattern] = STATE(236),
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
    [anon_sym_EQ] = ACTIONS(411),
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
    [sym_type] = STATE(242),
    [sym__generic_type_constructor] = STATE(243),
    [sym_tupling_constructor] = STATE(239),
    [sym_tuple] = STATE(243),
    [sym_list] = STATE(243),
    [sym_parenthesized_constructor] = STATE(243),
    [sym_context] = STATE(244),
    [sym_constructor] = STATE(245),
    [sym_variable_identifier] = STATE(246),
    [sym_constructor_identifier] = STATE(247),
    [sym__type_constructors] = STATE(239),
    [sym_qualified_type_constructor] = STATE(248),
    [anon_sym_LPAREN] = ACTIONS(413),
    [anon_sym_LBRACK] = ACTIONS(415),
    [sym_unit_type] = ACTIONS(417),
    [sym_list_constructor] = ACTIONS(417),
    [sym_function_constructor] = ACTIONS(417),
    [sym__variable_pattern] = ACTIONS(419),
    [sym__constructor_pattern] = ACTIONS(421),
    [sym_module_identifier] = ACTIONS(423),
    [sym_comment] = ACTIONS(5),
  },
  [99] = {
    [sym__layout_semicolon] = ACTIONS(425),
    [anon_sym_SEMI] = ACTIONS(427),
    [sym_comment] = ACTIONS(5),
  },
  [100] = {
    [sym_export] = STATE(251),
    [sym__identifier] = STATE(252),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [anon_sym_RPAREN] = ACTIONS(429),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [101] = {
    [sym__declarations] = STATE(255),
    [sym__layout_open_brace] = ACTIONS(431),
    [anon_sym_LBRACE] = ACTIONS(433),
    [sym_comment] = ACTIONS(5),
  },
  [102] = {
    [sym_where] = STATE(256),
    [anon_sym_where] = ACTIONS(181),
    [sym_comment] = ACTIONS(5),
  },
  [103] = {
    [ts_builtin_sym_end] = ACTIONS(435),
    [sym_comment] = ACTIONS(5),
  },
  [104] = {
    [sym_import_specification] = STATE(258),
    [sym__layout_semicolon] = ACTIONS(437),
    [anon_sym_SEMI] = ACTIONS(439),
    [anon_sym_LPAREN] = ACTIONS(189),
    [anon_sym_as] = ACTIONS(441),
    [anon_sym_hiding] = ACTIONS(193),
    [sym_comment] = ACTIONS(5),
  },
  [105] = {
    [sym__identifier] = STATE(260),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [anon_sym_RPAREN] = ACTIONS(443),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [106] = {
    [sym_module_identifier] = ACTIONS(445),
    [sym_comment] = ACTIONS(5),
  },
  [107] = {
    [anon_sym_LPAREN] = ACTIONS(447),
    [sym_comment] = ACTIONS(5),
  },
  [108] = {
    [sym__layout_semicolon] = ACTIONS(437),
    [anon_sym_SEMI] = ACTIONS(439),
    [sym_comment] = ACTIONS(5),
  },
  [109] = {
    [anon_sym_unsafe] = ACTIONS(449),
    [anon_sym_safe] = ACTIONS(449),
    [sym__variable_pattern] = ACTIONS(451),
    [sym__constructor_pattern] = ACTIONS(451),
    [sym_comment] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(449),
  },
  [110] = {
    [sym_safety] = STATE(265),
    [sym_type_signature] = STATE(266),
    [sym__identifier] = STATE(267),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [sym_string] = STATE(268),
    [anon_sym_unsafe] = ACTIONS(453),
    [anon_sym_safe] = ACTIONS(453),
    [sym__variable_pattern] = ACTIONS(217),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(455),
  },
  [111] = {
    [sym__layout_semicolon] = ACTIONS(457),
    [anon_sym_SEMI] = ACTIONS(459),
    [sym_comment] = ACTIONS(5),
  },
  [112] = {
    [aux_sym_export_repeat1] = STATE(271),
    [anon_sym_COMMA] = ACTIONS(461),
    [anon_sym_RPAREN] = ACTIONS(463),
    [sym_comment] = ACTIONS(5),
  },
  [113] = {
    [aux_sym_context_repeat1] = STATE(274),
    [anon_sym_COMMA] = ACTIONS(465),
    [anon_sym_RPAREN] = ACTIONS(467),
    [sym_comment] = ACTIONS(5),
  },
  [114] = {
    [sym_labels] = STATE(128),
    [sym_label] = STATE(275),
    [sym_strict] = STATE(172),
    [sym__literal] = STATE(131),
    [sym__identifier] = STATE(276),
    [sym_variable_identifier] = STATE(187),
    [sym_constructor_identifier] = STATE(187),
    [sym_integer] = STATE(89),
    [sym_char] = STATE(89),
    [sym_string] = STATE(89),
    [sym_fields] = STATE(128),
    [aux_sym_constructor_repeat1] = STATE(175),
    [aux_sym_constructor_repeat3] = STATE(277),
    [anon_sym_LBRACE] = ACTIONS(209),
    [anon_sym_LPAREN] = ACTIONS(211),
    [anon_sym_COMMA] = ACTIONS(213),
    [anon_sym_RPAREN] = ACTIONS(213),
    [anon_sym_BANG] = ACTIONS(275),
    [sym__variable_pattern] = ACTIONS(287),
    [sym__constructor_pattern] = ACTIONS(71),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [115] = {
    [sym_where] = STATE(278),
    [anon_sym_where] = ACTIONS(205),
    [sym_comment] = ACTIONS(5),
  },
  [116] = {
    [sym_labels] = STATE(128),
    [sym_label] = STATE(129),
    [sym_strict] = STATE(130),
    [sym__literal] = STATE(131),
    [sym__identifier] = STATE(281),
    [sym_variable_identifier] = STATE(282),
    [sym_constructor_identifier] = STATE(282),
    [sym_integer] = STATE(124),
    [sym_char] = STATE(124),
    [sym_string] = STATE(124),
    [sym_fields] = STATE(128),
    [aux_sym_constructor_repeat1] = STATE(134),
    [aux_sym_constructor_repeat3] = STATE(135),
    [anon_sym_LBRACE] = ACTIONS(209),
    [anon_sym_LPAREN] = ACTIONS(211),
    [anon_sym_where] = ACTIONS(213),
    [anon_sym_BANG] = ACTIONS(215),
    [sym__variable_pattern] = ACTIONS(469),
    [sym__constructor_pattern] = ACTIONS(471),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(219),
    [anon_sym_SQUOTE] = ACTIONS(221),
    [anon_sym_DQUOTE] = ACTIONS(223),
    [sym__integer_literal] = ACTIONS(225),
    [sym__octal_literal] = ACTIONS(225),
    [sym__hexidecimal_literal] = ACTIONS(225),
  },
  [117] = {
    [sym__declarations] = STATE(285),
    [sym__layout_open_brace] = ACTIONS(473),
    [anon_sym_LBRACE] = ACTIONS(475),
    [sym_comment] = ACTIONS(5),
  },
  [118] = {
    [sym__constructor_pattern] = ACTIONS(477),
    [sym_comment] = ACTIONS(5),
  },
  [119] = {
    [sym__layout_semicolon] = ACTIONS(479),
    [anon_sym_SEMI] = ACTIONS(481),
    [sym_comment] = ACTIONS(5),
  },
  [120] = {
    [sym_field] = STATE(286),
    [sym_variable_identifier] = STATE(287),
    [sym__variable_pattern] = ACTIONS(483),
    [sym_comment] = ACTIONS(5),
  },
  [121] = {
    [sym__identifier] = STATE(288),
    [sym_variable_identifier] = STATE(174),
    [sym_constructor_identifier] = STATE(174),
    [aux_sym_constructor_repeat2] = STATE(289),
    [sym__variable_pattern] = ACTIONS(277),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
  },
  [122] = {
    [sym__identifier] = STATE(290),
    [sym_variable_identifier] = STATE(133),
    [sym_constructor_identifier] = STATE(133),
    [sym__variable_pattern] = ACTIONS(483),
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
    [anon_sym_COMMA] = ACTIONS(87),
    [anon_sym_where] = ACTIONS(87),
    [anon_sym_EQ_GT] = ACTIONS(87),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(87),
    [sym__integer_literal] = ACTIONS(87),
    [sym__octal_literal] = ACTIONS(87),
    [sym__hexidecimal_literal] = ACTIONS(87),
  },
  [125] = {
    [sym__graphic] = STATE(291),
    [sym__small] = STATE(66),
    [sym__large] = STATE(66),
    [sym__symbol] = STATE(66),
    [sym__special] = STATE(66),
    [sym__escape] = STATE(291),
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
    [anon_sym_SQUOTE] = ACTIONS(485),
    [anon_sym_DQUOTE] = ACTIONS(485),
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
    [sym__space] = ACTIONS(485),
  },
  [126] = {
    [sym__gap] = STATE(72),
    [sym__graphic] = STATE(72),
    [sym__small] = STATE(74),
    [sym__large] = STATE(74),
    [sym__symbol] = STATE(74),
    [sym__special] = STATE(74),
    [sym__escape] = STATE(72),
    [aux_sym_string_repeat1] = STATE(293),
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
    [anon_sym_DQUOTE] = ACTIONS(487),
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
  [127] = {
    [anon_sym_COMMA] = ACTIONS(127),
    [anon_sym_where] = ACTIONS(127),
    [anon_sym_EQ_GT] = ACTIONS(127),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(129),
    [anon_sym_SQUOTE] = ACTIONS(127),
    [anon_sym_DQUOTE] = ACTIONS(127),
    [sym__integer_literal] = ACTIONS(127),
    [sym__octal_literal] = ACTIONS(127),
    [sym__hexidecimal_literal] = ACTIONS(127),
  },
  [128] = {
    [anon_sym_COMMA] = ACTIONS(489),
    [anon_sym_RPAREN] = ACTIONS(489),
    [anon_sym_where] = ACTIONS(489),
    [anon_sym_EQ_GT] = ACTIONS(489),
    [sym_comment] = ACTIONS(5),
  },
  [129] = {
    [aux_sym_labels_repeat1] = STATE(295),
    [anon_sym_COMMA] = ACTIONS(491),
    [anon_sym_where] = ACTIONS(493),
    [anon_sym_EQ_GT] = ACTIONS(493),
    [sym_comment] = ACTIONS(5),
  },
  [130] = {
    [anon_sym_where] = ACTIONS(495),
    [anon_sym_EQ_GT] = ACTIONS(495),
    [anon_sym_BANG] = ACTIONS(495),
    [sym__variable_pattern] = ACTIONS(497),
    [sym__constructor_pattern] = ACTIONS(497),
    [sym_comment] = ACTIONS(5),
  },
  [131] = {
    [anon_sym_COMMA] = ACTIONS(499),
    [anon_sym_RPAREN] = ACTIONS(499),
    [anon_sym_where] = ACTIONS(499),
    [anon_sym_EQ_GT] = ACTIONS(499),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(501),
    [anon_sym_SQUOTE] = ACTIONS(499),
    [anon_sym_DQUOTE] = ACTIONS(499),
    [sym__integer_literal] = ACTIONS(499),
    [sym__octal_literal] = ACTIONS(499),
    [sym__hexidecimal_literal] = ACTIONS(499),
  },
  [132] = {
    [anon_sym_EQ] = ACTIONS(503),
    [anon_sym_where] = ACTIONS(495),
    [anon_sym_EQ_GT] = ACTIONS(495),
    [anon_sym_BANG] = ACTIONS(495),
    [sym__variable_pattern] = ACTIONS(497),
    [sym__constructor_pattern] = ACTIONS(497),
    [sym_comment] = ACTIONS(5),
  },
  [133] = {
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
  [134] = {
    [sym_strict] = STATE(297),
    [sym__identifier] = STATE(297),
    [sym_variable_identifier] = STATE(133),
    [sym_constructor_identifier] = STATE(133),
    [anon_sym_where] = ACTIONS(489),
    [anon_sym_EQ_GT] = ACTIONS(489),
    [anon_sym_BANG] = ACTIONS(215),
    [sym__variable_pattern] = ACTIONS(217),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [135] = {
    [sym__literal] = STATE(298),
    [sym_integer] = STATE(124),
    [sym_char] = STATE(124),
    [sym_string] = STATE(124),
    [anon_sym_where] = ACTIONS(489),
    [anon_sym_EQ_GT] = ACTIONS(489),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(219),
    [anon_sym_SQUOTE] = ACTIONS(221),
    [anon_sym_DQUOTE] = ACTIONS(223),
    [sym__integer_literal] = ACTIONS(225),
    [sym__octal_literal] = ACTIONS(225),
    [sym__hexidecimal_literal] = ACTIONS(225),
  },
  [136] = {
    [sym_where] = STATE(299),
    [anon_sym_where] = ACTIONS(205),
    [sym_comment] = ACTIONS(5),
  },
  [137] = {
    [sym__layout_semicolon] = ACTIONS(505),
    [anon_sym_SEMI] = ACTIONS(507),
    [sym_comment] = ACTIONS(5),
  },
  [138] = {
    [anon_sym_BQUOTE] = ACTIONS(509),
    [sym_comment] = ACTIONS(5),
  },
  [139] = {
    [sym__layout_semicolon] = ACTIONS(511),
    [anon_sym_SEMI] = ACTIONS(513),
    [anon_sym_COMMA] = ACTIONS(513),
    [anon_sym_DASH] = ACTIONS(513),
    [anon_sym_COLON] = ACTIONS(513),
    [anon_sym_BANG] = ACTIONS(513),
    [anon_sym_DOT] = ACTIONS(513),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(513),
    [anon_sym_DOLLAR] = ACTIONS(513),
    [anon_sym_PERCENT] = ACTIONS(513),
    [anon_sym_AMP] = ACTIONS(513),
    [anon_sym_1] = ACTIONS(513),
    [anon_sym_PLUS] = ACTIONS(513),
    [anon_sym_SLASH] = ACTIONS(513),
    [anon_sym_LT] = ACTIONS(513),
    [anon_sym_GT] = ACTIONS(513),
    [anon_sym_QMARK] = ACTIONS(513),
    [anon_sym_CARET] = ACTIONS(513),
  },
  [140] = {
    [sym__layout_semicolon] = ACTIONS(515),
    [anon_sym_SEMI] = ACTIONS(517),
    [anon_sym_COMMA] = ACTIONS(517),
    [anon_sym_DASH] = ACTIONS(517),
    [anon_sym_COLON] = ACTIONS(517),
    [anon_sym_BANG] = ACTIONS(517),
    [anon_sym_DOT] = ACTIONS(517),
    [sym_comment] = ACTIONS(5),
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
  },
  [141] = {
    [sym__constructor_symbol] = STATE(301),
    [sym__layout_semicolon] = ACTIONS(519),
    [anon_sym_SEMI] = ACTIONS(521),
    [anon_sym_COMMA] = ACTIONS(521),
    [anon_sym_DASH] = ACTIONS(235),
    [anon_sym_COLON] = ACTIONS(235),
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
  [142] = {
    [sym__op] = STATE(302),
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
  [143] = {
    [sym__layout_semicolon] = ACTIONS(523),
    [anon_sym_SEMI] = ACTIONS(525),
    [anon_sym_COMMA] = ACTIONS(527),
    [sym_comment] = ACTIONS(5),
  },
  [144] = {
    [aux_sym_fixity_repeat1] = STATE(304),
    [sym__layout_semicolon] = ACTIONS(523),
    [anon_sym_SEMI] = ACTIONS(525),
    [anon_sym_COMMA] = ACTIONS(241),
    [sym_comment] = ACTIONS(5),
  },
  [145] = {
    [sym__layout_semicolon] = ACTIONS(529),
    [anon_sym_SEMI] = ACTIONS(531),
    [anon_sym_COMMA] = ACTIONS(531),
    [anon_sym_DASH] = ACTIONS(531),
    [anon_sym_BANG] = ACTIONS(531),
    [anon_sym_DOT] = ACTIONS(531),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(531),
    [anon_sym_DOLLAR] = ACTIONS(531),
    [anon_sym_PERCENT] = ACTIONS(531),
    [anon_sym_AMP] = ACTIONS(531),
    [anon_sym_1] = ACTIONS(531),
    [anon_sym_PLUS] = ACTIONS(531),
    [anon_sym_SLASH] = ACTIONS(531),
    [anon_sym_LT] = ACTIONS(531),
    [anon_sym_GT] = ACTIONS(531),
    [anon_sym_QMARK] = ACTIONS(531),
    [anon_sym_CARET] = ACTIONS(531),
  },
  [146] = {
    [sym__variable_symbol] = STATE(305),
    [sym__layout_semicolon] = ACTIONS(533),
    [anon_sym_SEMI] = ACTIONS(535),
    [anon_sym_COMMA] = ACTIONS(535),
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
  [147] = {
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
    [sym_float] = ACTIONS(203),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [sym__integer_literal] = ACTIONS(81),
    [sym__octal_literal] = ACTIONS(81),
    [sym__hexidecimal_literal] = ACTIONS(81),
  },
  [148] = {
    [sym_constructors] = STATE(307),
    [sym_constructor] = STATE(153),
    [sym_deriving] = STATE(308),
    [sym_constructor_identifier] = STATE(155),
    [sym__layout_semicolon] = ACTIONS(537),
    [anon_sym_SEMI] = ACTIONS(539),
    [anon_sym_EQ] = ACTIONS(541),
    [anon_sym_deriving] = ACTIONS(259),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [149] = {
    [sym_labels] = STATE(317),
    [sym_label] = STATE(318),
    [sym_strict] = STATE(319),
    [sym__literal] = STATE(320),
    [sym__identifier] = STATE(321),
    [sym_variable_identifier] = STATE(322),
    [sym_constructor_identifier] = STATE(322),
    [sym_integer] = STATE(313),
    [sym_char] = STATE(313),
    [sym_string] = STATE(313),
    [sym_fields] = STATE(317),
    [aux_sym_constructor_repeat1] = STATE(323),
    [aux_sym_constructor_repeat3] = STATE(324),
    [sym__layout_semicolon] = ACTIONS(261),
    [anon_sym_SEMI] = ACTIONS(213),
    [anon_sym_LBRACE] = ACTIONS(543),
    [anon_sym_LPAREN] = ACTIONS(545),
    [anon_sym_EQ] = ACTIONS(213),
    [anon_sym_deriving] = ACTIONS(213),
    [anon_sym_BANG] = ACTIONS(547),
    [sym__variable_pattern] = ACTIONS(549),
    [sym__constructor_pattern] = ACTIONS(251),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(551),
    [anon_sym_SQUOTE] = ACTIONS(553),
    [anon_sym_DQUOTE] = ACTIONS(555),
    [sym__integer_literal] = ACTIONS(557),
    [sym__octal_literal] = ACTIONS(557),
    [sym__hexidecimal_literal] = ACTIONS(557),
  },
  [150] = {
    [sym_constructors] = STATE(307),
    [sym_constructor] = STATE(153),
    [sym_deriving] = STATE(308),
    [sym_constructor_identifier] = STATE(155),
    [sym__layout_semicolon] = ACTIONS(537),
    [anon_sym_SEMI] = ACTIONS(539),
    [anon_sym_deriving] = ACTIONS(259),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [151] = {
    [sym__identifier] = STATE(326),
    [sym_variable_identifier] = STATE(26),
    [sym_constructor_identifier] = STATE(26),
    [anon_sym_LPAREN] = ACTIONS(559),
    [sym__variable_pattern] = ACTIONS(419),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [152] = {
    [sym_deriving] = STATE(308),
    [sym__layout_semicolon] = ACTIONS(537),
    [anon_sym_SEMI] = ACTIONS(539),
    [anon_sym_deriving] = ACTIONS(259),
    [sym_comment] = ACTIONS(5),
  },
  [153] = {
    [aux_sym_constructors_repeat1] = STATE(328),
    [sym__layout_semicolon] = ACTIONS(561),
    [anon_sym_SEMI] = ACTIONS(563),
    [anon_sym_PIPE] = ACTIONS(565),
    [anon_sym_deriving] = ACTIONS(563),
    [sym_comment] = ACTIONS(5),
  },
  [154] = {
    [sym__layout_semicolon] = ACTIONS(537),
    [anon_sym_SEMI] = ACTIONS(539),
    [sym_comment] = ACTIONS(5),
  },
  [155] = {
    [sym_labels] = STATE(160),
    [sym_label] = STATE(161),
    [sym_strict] = STATE(162),
    [sym__literal] = STATE(163),
    [sym__identifier] = STATE(329),
    [sym_variable_identifier] = STATE(322),
    [sym_constructor_identifier] = STATE(322),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [sym_fields] = STATE(160),
    [aux_sym_constructor_repeat1] = STATE(165),
    [aux_sym_constructor_repeat3] = STATE(166),
    [sym__layout_semicolon] = ACTIONS(261),
    [anon_sym_SEMI] = ACTIONS(213),
    [anon_sym_LBRACE] = ACTIONS(263),
    [anon_sym_LPAREN] = ACTIONS(265),
    [anon_sym_PIPE] = ACTIONS(213),
    [anon_sym_deriving] = ACTIONS(213),
    [anon_sym_BANG] = ACTIONS(267),
    [sym__variable_pattern] = ACTIONS(549),
    [sym__constructor_pattern] = ACTIONS(251),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym__integer_literal] = ACTIONS(41),
    [sym__octal_literal] = ACTIONS(41),
    [sym__hexidecimal_literal] = ACTIONS(41),
  },
  [156] = {
    [sym_field] = STATE(330),
    [sym_variable_identifier] = STATE(287),
    [sym__variable_pattern] = ACTIONS(483),
    [sym_comment] = ACTIONS(5),
  },
  [157] = {
    [sym__identifier] = STATE(288),
    [sym_variable_identifier] = STATE(174),
    [sym_constructor_identifier] = STATE(174),
    [aux_sym_constructor_repeat2] = STATE(331),
    [sym__variable_pattern] = ACTIONS(277),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
  },
  [158] = {
    [sym__identifier] = STATE(332),
    [sym_variable_identifier] = STATE(26),
    [sym_constructor_identifier] = STATE(26),
    [sym__variable_pattern] = ACTIONS(567),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [159] = {
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
  [160] = {
    [sym__layout_semicolon] = ACTIONS(569),
    [anon_sym_SEMI] = ACTIONS(489),
    [anon_sym_EQ] = ACTIONS(489),
    [anon_sym_EQ_GT] = ACTIONS(489),
    [anon_sym_PIPE] = ACTIONS(489),
    [anon_sym_deriving] = ACTIONS(489),
    [sym__constructor_pattern] = ACTIONS(571),
    [sym_comment] = ACTIONS(5),
  },
  [161] = {
    [aux_sym_labels_repeat1] = STATE(334),
    [sym__layout_semicolon] = ACTIONS(573),
    [anon_sym_SEMI] = ACTIONS(493),
    [anon_sym_COMMA] = ACTIONS(575),
    [anon_sym_EQ] = ACTIONS(493),
    [anon_sym_EQ_GT] = ACTIONS(493),
    [anon_sym_PIPE] = ACTIONS(493),
    [anon_sym_deriving] = ACTIONS(493),
    [sym__constructor_pattern] = ACTIONS(577),
    [sym_comment] = ACTIONS(5),
  },
  [162] = {
    [sym__layout_semicolon] = ACTIONS(579),
    [anon_sym_SEMI] = ACTIONS(495),
    [anon_sym_EQ] = ACTIONS(495),
    [anon_sym_EQ_GT] = ACTIONS(495),
    [anon_sym_PIPE] = ACTIONS(495),
    [anon_sym_deriving] = ACTIONS(495),
    [anon_sym_BANG] = ACTIONS(495),
    [sym__variable_pattern] = ACTIONS(497),
    [sym__constructor_pattern] = ACTIONS(497),
    [sym_comment] = ACTIONS(5),
  },
  [163] = {
    [sym__layout_semicolon] = ACTIONS(581),
    [anon_sym_SEMI] = ACTIONS(499),
    [anon_sym_EQ] = ACTIONS(499),
    [anon_sym_EQ_GT] = ACTIONS(499),
    [anon_sym_PIPE] = ACTIONS(499),
    [anon_sym_deriving] = ACTIONS(499),
    [sym__constructor_pattern] = ACTIONS(501),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(501),
    [anon_sym_SQUOTE] = ACTIONS(499),
    [anon_sym_DQUOTE] = ACTIONS(499),
    [sym__integer_literal] = ACTIONS(499),
    [sym__octal_literal] = ACTIONS(499),
    [sym__hexidecimal_literal] = ACTIONS(499),
  },
  [164] = {
    [sym__layout_semicolon] = ACTIONS(579),
    [anon_sym_SEMI] = ACTIONS(495),
    [anon_sym_EQ] = ACTIONS(583),
    [anon_sym_EQ_GT] = ACTIONS(495),
    [anon_sym_deriving] = ACTIONS(495),
    [anon_sym_BANG] = ACTIONS(495),
    [sym__variable_pattern] = ACTIONS(497),
    [sym__constructor_pattern] = ACTIONS(497),
    [sym_comment] = ACTIONS(5),
  },
  [165] = {
    [sym_strict] = STATE(336),
    [sym__identifier] = STATE(336),
    [sym_variable_identifier] = STATE(26),
    [sym_constructor_identifier] = STATE(26),
    [sym__layout_semicolon] = ACTIONS(569),
    [anon_sym_SEMI] = ACTIONS(489),
    [anon_sym_EQ] = ACTIONS(489),
    [anon_sym_EQ_GT] = ACTIONS(489),
    [anon_sym_PIPE] = ACTIONS(489),
    [anon_sym_deriving] = ACTIONS(489),
    [anon_sym_BANG] = ACTIONS(267),
    [sym__variable_pattern] = ACTIONS(269),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [166] = {
    [sym__literal] = STATE(337),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [sym__layout_semicolon] = ACTIONS(569),
    [anon_sym_SEMI] = ACTIONS(489),
    [anon_sym_EQ] = ACTIONS(489),
    [anon_sym_EQ_GT] = ACTIONS(489),
    [anon_sym_PIPE] = ACTIONS(489),
    [anon_sym_deriving] = ACTIONS(489),
    [sym__constructor_pattern] = ACTIONS(571),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym__integer_literal] = ACTIONS(41),
    [sym__octal_literal] = ACTIONS(41),
    [sym__hexidecimal_literal] = ACTIONS(41),
  },
  [167] = {
    [anon_sym_EQ] = ACTIONS(586),
    [sym_comment] = ACTIONS(5),
  },
  [168] = {
    [sym_variable_identifier] = STATE(339),
    [aux_sym_simple_type_repeat1] = STATE(176),
    [anon_sym_EQ] = ACTIONS(273),
    [sym__variable_pattern] = ACTIONS(287),
    [sym_comment] = ACTIONS(5),
  },
  [169] = {
    [sym_constructor] = STATE(340),
    [sym_constructor_identifier] = STATE(155),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [170] = {
    [sym__identifier] = STATE(341),
    [sym_variable_identifier] = STATE(174),
    [sym_constructor_identifier] = STATE(174),
    [sym__variable_pattern] = ACTIONS(277),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
  },
  [171] = {
    [anon_sym_COMMA] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(75),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_DASH_GT] = ACTIONS(75),
    [anon_sym_EQ_GT] = ACTIONS(75),
    [anon_sym_BANG] = ACTIONS(75),
    [sym__variable_pattern] = ACTIONS(75),
    [sym__constructor_pattern] = ACTIONS(77),
    [sym_comment] = ACTIONS(5),
  },
  [172] = {
    [anon_sym_COMMA] = ACTIONS(495),
    [anon_sym_RPAREN] = ACTIONS(495),
    [anon_sym_EQ_GT] = ACTIONS(495),
    [anon_sym_BANG] = ACTIONS(495),
    [sym__variable_pattern] = ACTIONS(495),
    [sym__constructor_pattern] = ACTIONS(497),
    [sym_comment] = ACTIONS(5),
  },
  [173] = {
    [anon_sym_EQ] = ACTIONS(503),
    [anon_sym_EQ_GT] = ACTIONS(495),
    [anon_sym_BANG] = ACTIONS(495),
    [sym__variable_pattern] = ACTIONS(495),
    [sym__constructor_pattern] = ACTIONS(497),
    [sym_comment] = ACTIONS(5),
  },
  [174] = {
    [anon_sym_COMMA] = ACTIONS(173),
    [anon_sym_RPAREN] = ACTIONS(173),
    [anon_sym_EQ] = ACTIONS(173),
    [anon_sym_EQ_GT] = ACTIONS(173),
    [anon_sym_BANG] = ACTIONS(173),
    [sym__variable_pattern] = ACTIONS(173),
    [sym__constructor_pattern] = ACTIONS(175),
    [sym_comment] = ACTIONS(5),
  },
  [175] = {
    [sym_strict] = STATE(342),
    [sym__identifier] = STATE(342),
    [sym_variable_identifier] = STATE(174),
    [sym_constructor_identifier] = STATE(174),
    [anon_sym_COMMA] = ACTIONS(489),
    [anon_sym_RPAREN] = ACTIONS(489),
    [anon_sym_EQ_GT] = ACTIONS(489),
    [anon_sym_BANG] = ACTIONS(275),
    [sym__variable_pattern] = ACTIONS(277),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
  },
  [176] = {
    [sym_variable_identifier] = STATE(343),
    [anon_sym_EQ] = ACTIONS(588),
    [sym__variable_pattern] = ACTIONS(287),
    [sym_comment] = ACTIONS(5),
  },
  [177] = {
    [sym_type] = STATE(346),
    [sym__generic_type_constructor] = STATE(243),
    [sym_tupling_constructor] = STATE(239),
    [sym_tuple] = STATE(243),
    [sym_list] = STATE(243),
    [sym_parenthesized_constructor] = STATE(243),
    [sym_variable_identifier] = STATE(246),
    [sym__type_constructors] = STATE(239),
    [sym_qualified_type_constructor] = STATE(248),
    [anon_sym_LPAREN] = ACTIONS(590),
    [anon_sym_LBRACK] = ACTIONS(415),
    [sym_unit_type] = ACTIONS(417),
    [sym_list_constructor] = ACTIONS(417),
    [sym_function_constructor] = ACTIONS(417),
    [sym__variable_pattern] = ACTIONS(419),
    [sym__constructor_pattern] = ACTIONS(592),
    [sym_module_identifier] = ACTIONS(423),
    [sym_comment] = ACTIONS(5),
  },
  [178] = {
    [sym_field] = STATE(347),
    [sym_variable_identifier] = STATE(287),
    [sym__variable_pattern] = ACTIONS(483),
    [sym_comment] = ACTIONS(5),
  },
  [179] = {
    [sym__identifier] = STATE(288),
    [sym_variable_identifier] = STATE(174),
    [sym_constructor_identifier] = STATE(174),
    [aux_sym_constructor_repeat2] = STATE(348),
    [sym__variable_pattern] = ACTIONS(277),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
  },
  [180] = {
    [sym__identifier] = STATE(349),
    [sym_variable_identifier] = STATE(187),
    [sym_constructor_identifier] = STATE(187),
    [sym__variable_pattern] = ACTIONS(287),
    [sym__constructor_pattern] = ACTIONS(71),
    [sym_comment] = ACTIONS(5),
  },
  [181] = {
    [anon_sym_COMMA] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(75),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_BANG] = ACTIONS(75),
    [sym__variable_pattern] = ACTIONS(75),
    [sym__constructor_pattern] = ACTIONS(77),
    [sym_comment] = ACTIONS(5),
  },
  [182] = {
    [anon_sym_EQ] = ACTIONS(489),
    [sym_comment] = ACTIONS(5),
  },
  [183] = {
    [aux_sym_labels_repeat1] = STATE(351),
    [anon_sym_COMMA] = ACTIONS(594),
    [anon_sym_EQ] = ACTIONS(493),
    [sym_comment] = ACTIONS(5),
  },
  [184] = {
    [anon_sym_EQ] = ACTIONS(495),
    [anon_sym_BANG] = ACTIONS(495),
    [sym__variable_pattern] = ACTIONS(495),
    [sym__constructor_pattern] = ACTIONS(497),
    [sym_comment] = ACTIONS(5),
  },
  [185] = {
    [anon_sym_EQ] = ACTIONS(499),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(501),
    [anon_sym_SQUOTE] = ACTIONS(499),
    [anon_sym_DQUOTE] = ACTIONS(499),
    [sym__integer_literal] = ACTIONS(499),
    [sym__octal_literal] = ACTIONS(499),
    [sym__hexidecimal_literal] = ACTIONS(499),
  },
  [186] = {
    [anon_sym_EQ] = ACTIONS(596),
    [anon_sym_BANG] = ACTIONS(495),
    [sym__variable_pattern] = ACTIONS(495),
    [sym__constructor_pattern] = ACTIONS(497),
    [sym_comment] = ACTIONS(5),
  },
  [187] = {
    [anon_sym_COMMA] = ACTIONS(173),
    [anon_sym_RPAREN] = ACTIONS(173),
    [anon_sym_EQ] = ACTIONS(173),
    [anon_sym_BANG] = ACTIONS(173),
    [sym__variable_pattern] = ACTIONS(173),
    [sym__constructor_pattern] = ACTIONS(175),
    [sym_comment] = ACTIONS(5),
  },
  [188] = {
    [sym_strict] = STATE(353),
    [sym__identifier] = STATE(353),
    [sym_variable_identifier] = STATE(187),
    [sym_constructor_identifier] = STATE(187),
    [anon_sym_EQ] = ACTIONS(489),
    [anon_sym_BANG] = ACTIONS(285),
    [sym__variable_pattern] = ACTIONS(287),
    [sym__constructor_pattern] = ACTIONS(71),
    [sym_comment] = ACTIONS(5),
  },
  [189] = {
    [sym__literal] = STATE(354),
    [sym_integer] = STATE(89),
    [sym_char] = STATE(89),
    [sym_string] = STATE(89),
    [anon_sym_EQ] = ACTIONS(489),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [190] = {
    [sym__layout_semicolon] = ACTIONS(599),
    [anon_sym_SEMI] = ACTIONS(601),
    [anon_sym_COMMA] = ACTIONS(601),
    [anon_sym_EQ] = ACTIONS(601),
    [anon_sym_EQ_GT] = ACTIONS(601),
    [anon_sym_PIPE] = ACTIONS(601),
    [anon_sym_deriving] = ACTIONS(601),
    [sym__constructor_pattern] = ACTIONS(603),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(603),
    [anon_sym_SQUOTE] = ACTIONS(601),
    [anon_sym_DQUOTE] = ACTIONS(601),
    [sym__integer_literal] = ACTIONS(601),
    [sym__octal_literal] = ACTIONS(601),
    [sym__hexidecimal_literal] = ACTIONS(601),
  },
  [191] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(605),
  },
  [192] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(607),
  },
  [193] = {
    [sym__cntrl] = STATE(356),
    [anon_sym_LBRACK] = ACTIONS(609),
    [anon_sym_RBRACK] = ACTIONS(609),
    [anon_sym_AT] = ACTIONS(609),
    [anon_sym__] = ACTIONS(609),
    [sym_comment] = ACTIONS(97),
    [sym__ascii_large] = ACTIONS(609),
    [anon_sym_CARET] = ACTIONS(609),
    [anon_sym_BSLASH] = ACTIONS(609),
  },
  [194] = {
    [aux_sym__escape_repeat1] = STATE(358),
    [sym_comment] = ACTIONS(5),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(611),
  },
  [195] = {
    [aux_sym__escape_repeat2] = STATE(360),
    [sym_comment] = ACTIONS(5),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(613),
  },
  [196] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(615),
  },
  [197] = {
    [anon_sym_SEMI] = ACTIONS(617),
    [anon_sym_LBRACE] = ACTIONS(617),
    [anon_sym_RBRACE] = ACTIONS(617),
    [anon_sym_LPAREN] = ACTIONS(617),
    [anon_sym_RPAREN] = ACTIONS(617),
    [anon_sym_EQ] = ACTIONS(617),
    [anon_sym_TILDE] = ACTIONS(617),
    [anon_sym_LBRACK] = ACTIONS(617),
    [anon_sym_RBRACK] = ACTIONS(617),
    [anon_sym_DASH] = ACTIONS(617),
    [anon_sym_AT] = ACTIONS(617),
    [anon_sym__] = ACTIONS(617),
    [anon_sym_BQUOTE] = ACTIONS(617),
    [anon_sym_COLON] = ACTIONS(617),
    [anon_sym_PIPE] = ACTIONS(617),
    [anon_sym_BANG] = ACTIONS(617),
    [anon_sym_DOT] = ACTIONS(617),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(617),
    [anon_sym_DQUOTE] = ACTIONS(617),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(617),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(617),
    [sym__ascii_large] = ACTIONS(617),
    [anon_sym_POUND] = ACTIONS(617),
    [anon_sym_DOLLAR] = ACTIONS(617),
    [anon_sym_PERCENT] = ACTIONS(617),
    [anon_sym_AMP] = ACTIONS(617),
    [anon_sym_1] = ACTIONS(617),
    [anon_sym_PLUS] = ACTIONS(617),
    [anon_sym_SLASH] = ACTIONS(617),
    [anon_sym_LT] = ACTIONS(617),
    [anon_sym_GT] = ACTIONS(617),
    [anon_sym_QMARK] = ACTIONS(617),
    [anon_sym_CARET] = ACTIONS(617),
    [anon_sym_BSLASH] = ACTIONS(617),
    [sym__space] = ACTIONS(617),
    [sym__newline] = ACTIONS(617),
    [sym__tab] = ACTIONS(617),
    [sym__vertical_tab] = ACTIONS(617),
  },
  [198] = {
    [anon_sym_SEMI] = ACTIONS(619),
    [anon_sym_LBRACE] = ACTIONS(619),
    [anon_sym_RBRACE] = ACTIONS(619),
    [anon_sym_LPAREN] = ACTIONS(619),
    [anon_sym_RPAREN] = ACTIONS(619),
    [anon_sym_EQ] = ACTIONS(619),
    [anon_sym_TILDE] = ACTIONS(619),
    [anon_sym_LBRACK] = ACTIONS(619),
    [anon_sym_RBRACK] = ACTIONS(619),
    [anon_sym_DASH] = ACTIONS(619),
    [anon_sym_AT] = ACTIONS(619),
    [anon_sym__] = ACTIONS(619),
    [anon_sym_BQUOTE] = ACTIONS(619),
    [anon_sym_COLON] = ACTIONS(619),
    [anon_sym_PIPE] = ACTIONS(619),
    [anon_sym_BANG] = ACTIONS(619),
    [anon_sym_DOT] = ACTIONS(619),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(619),
    [anon_sym_DQUOTE] = ACTIONS(619),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(619),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(619),
    [sym__ascii_large] = ACTIONS(619),
    [anon_sym_POUND] = ACTIONS(619),
    [anon_sym_DOLLAR] = ACTIONS(619),
    [anon_sym_PERCENT] = ACTIONS(619),
    [anon_sym_AMP] = ACTIONS(619),
    [anon_sym_1] = ACTIONS(619),
    [anon_sym_PLUS] = ACTIONS(619),
    [anon_sym_SLASH] = ACTIONS(619),
    [anon_sym_LT] = ACTIONS(619),
    [anon_sym_GT] = ACTIONS(619),
    [anon_sym_QMARK] = ACTIONS(619),
    [anon_sym_CARET] = ACTIONS(619),
    [anon_sym_BSLASH] = ACTIONS(619),
    [sym__space] = ACTIONS(619),
    [sym__newline] = ACTIONS(619),
    [sym__tab] = ACTIONS(619),
    [sym__vertical_tab] = ACTIONS(619),
  },
  [199] = {
    [sym__cntrl] = STATE(362),
    [anon_sym_LBRACK] = ACTIONS(621),
    [anon_sym_RBRACK] = ACTIONS(621),
    [anon_sym_AT] = ACTIONS(621),
    [anon_sym__] = ACTIONS(621),
    [sym_comment] = ACTIONS(97),
    [sym__ascii_large] = ACTIONS(621),
    [anon_sym_CARET] = ACTIONS(621),
    [anon_sym_BSLASH] = ACTIONS(621),
  },
  [200] = {
    [aux_sym__escape_repeat1] = STATE(364),
    [sym_comment] = ACTIONS(5),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(623),
  },
  [201] = {
    [aux_sym__escape_repeat2] = STATE(366),
    [sym_comment] = ACTIONS(5),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(625),
  },
  [202] = {
    [anon_sym_SEMI] = ACTIONS(627),
    [anon_sym_LBRACE] = ACTIONS(627),
    [anon_sym_RBRACE] = ACTIONS(627),
    [anon_sym_LPAREN] = ACTIONS(627),
    [anon_sym_RPAREN] = ACTIONS(627),
    [anon_sym_EQ] = ACTIONS(627),
    [anon_sym_TILDE] = ACTIONS(627),
    [anon_sym_LBRACK] = ACTIONS(627),
    [anon_sym_RBRACK] = ACTIONS(627),
    [anon_sym_DASH] = ACTIONS(627),
    [anon_sym_AT] = ACTIONS(627),
    [anon_sym__] = ACTIONS(627),
    [anon_sym_BQUOTE] = ACTIONS(627),
    [anon_sym_COLON] = ACTIONS(627),
    [anon_sym_PIPE] = ACTIONS(627),
    [anon_sym_BANG] = ACTIONS(627),
    [anon_sym_DOT] = ACTIONS(627),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(627),
    [anon_sym_DQUOTE] = ACTIONS(627),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(627),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(627),
    [sym__ascii_large] = ACTIONS(627),
    [anon_sym_POUND] = ACTIONS(627),
    [anon_sym_DOLLAR] = ACTIONS(627),
    [anon_sym_PERCENT] = ACTIONS(627),
    [anon_sym_AMP] = ACTIONS(627),
    [anon_sym_1] = ACTIONS(627),
    [anon_sym_PLUS] = ACTIONS(627),
    [anon_sym_SLASH] = ACTIONS(627),
    [anon_sym_LT] = ACTIONS(627),
    [anon_sym_GT] = ACTIONS(627),
    [anon_sym_QMARK] = ACTIONS(627),
    [anon_sym_CARET] = ACTIONS(627),
    [anon_sym_BSLASH] = ACTIONS(627),
    [sym__space] = ACTIONS(627),
    [sym__newline] = ACTIONS(627),
    [sym__tab] = ACTIONS(627),
    [sym__vertical_tab] = ACTIONS(627),
  },
  [203] = {
    [anon_sym_SEMI] = ACTIONS(629),
    [anon_sym_LBRACE] = ACTIONS(629),
    [anon_sym_RBRACE] = ACTIONS(629),
    [anon_sym_LPAREN] = ACTIONS(629),
    [anon_sym_RPAREN] = ACTIONS(629),
    [anon_sym_EQ] = ACTIONS(629),
    [anon_sym_TILDE] = ACTIONS(629),
    [anon_sym_LBRACK] = ACTIONS(629),
    [anon_sym_RBRACK] = ACTIONS(629),
    [anon_sym_DASH] = ACTIONS(629),
    [anon_sym_AT] = ACTIONS(629),
    [anon_sym__] = ACTIONS(629),
    [anon_sym_BQUOTE] = ACTIONS(629),
    [anon_sym_COLON] = ACTIONS(629),
    [anon_sym_PIPE] = ACTIONS(629),
    [anon_sym_BANG] = ACTIONS(629),
    [anon_sym_DOT] = ACTIONS(629),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(629),
    [anon_sym_DQUOTE] = ACTIONS(629),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(629),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(629),
    [sym__ascii_large] = ACTIONS(629),
    [anon_sym_POUND] = ACTIONS(629),
    [anon_sym_DOLLAR] = ACTIONS(629),
    [anon_sym_PERCENT] = ACTIONS(629),
    [anon_sym_AMP] = ACTIONS(629),
    [anon_sym_1] = ACTIONS(629),
    [anon_sym_PLUS] = ACTIONS(629),
    [anon_sym_SLASH] = ACTIONS(629),
    [anon_sym_LT] = ACTIONS(629),
    [anon_sym_GT] = ACTIONS(629),
    [anon_sym_QMARK] = ACTIONS(629),
    [anon_sym_CARET] = ACTIONS(629),
    [anon_sym_BSLASH] = ACTIONS(629),
    [sym__space] = ACTIONS(629),
    [sym__newline] = ACTIONS(629),
    [sym__tab] = ACTIONS(629),
    [sym__vertical_tab] = ACTIONS(629),
  },
  [204] = {
    [sym__layout_semicolon] = ACTIONS(631),
    [anon_sym_SEMI] = ACTIONS(633),
    [anon_sym_COMMA] = ACTIONS(633),
    [anon_sym_EQ] = ACTIONS(633),
    [anon_sym_EQ_GT] = ACTIONS(633),
    [anon_sym_PIPE] = ACTIONS(633),
    [anon_sym_deriving] = ACTIONS(633),
    [sym__constructor_pattern] = ACTIONS(635),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(635),
    [anon_sym_SQUOTE] = ACTIONS(633),
    [anon_sym_DQUOTE] = ACTIONS(633),
    [sym__integer_literal] = ACTIONS(633),
    [sym__octal_literal] = ACTIONS(633),
    [sym__hexidecimal_literal] = ACTIONS(633),
  },
  [205] = {
    [sym_statement_list] = STATE(369),
    [sym__layout_open_brace] = ACTIONS(637),
    [anon_sym_LBRACE] = ACTIONS(639),
    [sym_comment] = ACTIONS(5),
  },
  [206] = {
    [sym__layout_semicolon] = ACTIONS(73),
    [anon_sym_SEMI] = ACTIONS(75),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_where] = ACTIONS(75),
    [anon_sym_do] = ACTIONS(75),
    [anon_sym_BANG] = ACTIONS(75),
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
  [207] = {
    [sym__layout_semicolon] = ACTIONS(79),
    [anon_sym_SEMI] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_where] = ACTIONS(81),
    [anon_sym_do] = ACTIONS(81),
    [anon_sym_BANG] = ACTIONS(81),
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
  [208] = {
    [sym__layout_semicolon] = ACTIONS(85),
    [anon_sym_SEMI] = ACTIONS(87),
    [anon_sym_COMMA] = ACTIONS(87),
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
  [209] = {
    [sym__graphic] = STATE(371),
    [sym__small] = STATE(66),
    [sym__large] = STATE(66),
    [sym__symbol] = STATE(66),
    [sym__special] = STATE(66),
    [sym__escape] = STATE(371),
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
    [anon_sym_SQUOTE] = ACTIONS(641),
    [anon_sym_DQUOTE] = ACTIONS(641),
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
    [sym__space] = ACTIONS(641),
  },
  [210] = {
    [sym__gap] = STATE(72),
    [sym__graphic] = STATE(72),
    [sym__small] = STATE(74),
    [sym__large] = STATE(74),
    [sym__symbol] = STATE(74),
    [sym__special] = STATE(74),
    [sym__escape] = STATE(72),
    [aux_sym_string_repeat1] = STATE(373),
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
    [anon_sym_DQUOTE] = ACTIONS(643),
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
  [211] = {
    [sym__layout_semicolon] = ACTIONS(125),
    [anon_sym_SEMI] = ACTIONS(127),
    [anon_sym_COMMA] = ACTIONS(127),
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
  [212] = {
    [sym__layout_semicolon] = ACTIONS(645),
    [anon_sym_SEMI] = ACTIONS(647),
    [sym_comment] = ACTIONS(5),
  },
  [213] = {
    [sym__layout_semicolon] = ACTIONS(649),
    [anon_sym_SEMI] = ACTIONS(651),
    [anon_sym_where] = ACTIONS(651),
    [anon_sym_do] = ACTIONS(651),
    [sym__variable_pattern] = ACTIONS(653),
    [sym__constructor_pattern] = ACTIONS(653),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(653),
    [anon_sym_SQUOTE] = ACTIONS(651),
    [anon_sym_DQUOTE] = ACTIONS(651),
    [sym__integer_literal] = ACTIONS(651),
    [sym__octal_literal] = ACTIONS(651),
    [sym__hexidecimal_literal] = ACTIONS(651),
  },
  [214] = {
    [sym__layout_semicolon] = ACTIONS(655),
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
  [215] = {
    [sym__layout_semicolon] = ACTIONS(657),
    [anon_sym_SEMI] = ACTIONS(659),
    [anon_sym_where] = ACTIONS(659),
    [anon_sym_do] = ACTIONS(659),
    [sym__variable_pattern] = ACTIONS(661),
    [sym__constructor_pattern] = ACTIONS(661),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(661),
    [anon_sym_SQUOTE] = ACTIONS(659),
    [anon_sym_DQUOTE] = ACTIONS(659),
    [sym__integer_literal] = ACTIONS(659),
    [sym__octal_literal] = ACTIONS(659),
    [sym__hexidecimal_literal] = ACTIONS(659),
  },
  [216] = {
    [sym_labels] = STATE(378),
    [sym_label] = STATE(379),
    [sym_strict] = STATE(380),
    [sym__literal] = STATE(381),
    [sym__identifier] = STATE(382),
    [sym_variable_identifier] = STATE(383),
    [sym_constructor_identifier] = STATE(383),
    [sym_integer] = STATE(208),
    [sym_char] = STATE(208),
    [sym_string] = STATE(208),
    [sym_fields] = STATE(378),
    [aux_sym_constructor_repeat1] = STATE(384),
    [aux_sym_constructor_repeat3] = STATE(385),
    [sym__layout_semicolon] = ACTIONS(261),
    [anon_sym_SEMI] = ACTIONS(213),
    [anon_sym_LBRACE] = ACTIONS(663),
    [anon_sym_LPAREN] = ACTIONS(665),
    [anon_sym_where] = ACTIONS(213),
    [anon_sym_do] = ACTIONS(213),
    [anon_sym_BANG] = ACTIONS(667),
    [sym__variable_pattern] = ACTIONS(365),
    [sym__constructor_pattern] = ACTIONS(669),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(369),
    [anon_sym_SQUOTE] = ACTIONS(371),
    [anon_sym_DQUOTE] = ACTIONS(373),
    [sym__integer_literal] = ACTIONS(375),
    [sym__octal_literal] = ACTIONS(375),
    [sym__hexidecimal_literal] = ACTIONS(375),
  },
  [217] = {
    [sym_where] = STATE(386),
    [sym__variable] = STATE(213),
    [sym_qualified_variable_identifier] = STATE(214),
    [sym__expression] = STATE(387),
    [sym_do_expression] = STATE(213),
    [sym_constructor] = STATE(213),
    [sym__literal] = STATE(213),
    [sym_variable_identifier] = STATE(214),
    [sym_constructor_identifier] = STATE(216),
    [sym_integer] = STATE(208),
    [sym_char] = STATE(208),
    [sym_string] = STATE(208),
    [sym__layout_semicolon] = ACTIONS(645),
    [anon_sym_SEMI] = ACTIONS(647),
    [anon_sym_where] = ACTIONS(205),
    [anon_sym_do] = ACTIONS(363),
    [sym__variable_pattern] = ACTIONS(365),
    [sym__constructor_pattern] = ACTIONS(367),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(369),
    [anon_sym_SQUOTE] = ACTIONS(371),
    [anon_sym_DQUOTE] = ACTIONS(373),
    [sym__integer_literal] = ACTIONS(375),
    [sym__octal_literal] = ACTIONS(375),
    [sym__hexidecimal_literal] = ACTIONS(375),
  },
  [218] = {
    [sym__function_pattern] = STATE(226),
    [sym_label_pattern] = STATE(86),
    [sym_irrefutable_pattern] = STATE(86),
    [sym_list_pattern] = STATE(86),
    [sym_tuple_pattern] = STATE(86),
    [sym_parenthesized_pattern] = STATE(86),
    [sym_as_pattern] = STATE(86),
    [sym_wildcard] = STATE(86),
    [sym__variable] = STATE(224),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym__literal] = STATE(86),
    [sym__identifier] = STATE(94),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(133),
    [sym_integer] = STATE(89),
    [sym_char] = STATE(89),
    [sym_string] = STATE(89),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_TILDE] = ACTIONS(381),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym__] = ACTIONS(151),
    [sym_list_constructor] = ACTIONS(153),
    [sym__variable_pattern] = ACTIONS(155),
    [sym__constructor_pattern] = ACTIONS(389),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [219] = {
    [anon_sym_LPAREN] = ACTIONS(671),
    [sym_comment] = ACTIONS(5),
  },
  [220] = {
    [anon_sym_LBRACE] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_COMMA] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(81),
    [anon_sym_DASH] = ACTIONS(81),
    [anon_sym_BQUOTE] = ACTIONS(81),
    [anon_sym_COLON] = ACTIONS(81),
    [anon_sym_BANG] = ACTIONS(81),
    [sym__variable_pattern] = ACTIONS(81),
    [sym__constructor_pattern] = ACTIONS(203),
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
  [221] = {
    [sym__op] = STATE(394),
    [sym_variable_symbol] = STATE(395),
    [sym_constructor_symbol] = STATE(395),
    [sym__variable_symbol] = STATE(396),
    [aux_sym_tuple_pattern_repeat1] = STATE(397),
    [anon_sym_COMMA] = ACTIONS(673),
    [anon_sym_RPAREN] = ACTIONS(675),
    [anon_sym_DASH] = ACTIONS(677),
    [anon_sym_BQUOTE] = ACTIONS(679),
    [anon_sym_COLON] = ACTIONS(681),
    [anon_sym_BANG] = ACTIONS(677),
    [anon_sym_DOT] = ACTIONS(677),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(677),
    [anon_sym_DOLLAR] = ACTIONS(677),
    [anon_sym_PERCENT] = ACTIONS(677),
    [anon_sym_AMP] = ACTIONS(677),
    [anon_sym_1] = ACTIONS(677),
    [anon_sym_PLUS] = ACTIONS(677),
    [anon_sym_SLASH] = ACTIONS(677),
    [anon_sym_LT] = ACTIONS(677),
    [anon_sym_GT] = ACTIONS(677),
    [anon_sym_QMARK] = ACTIONS(677),
    [anon_sym_CARET] = ACTIONS(677),
  },
  [222] = {
    [aux_sym_tuple_pattern_repeat1] = STATE(397),
    [anon_sym_COMMA] = ACTIONS(673),
    [anon_sym_RPAREN] = ACTIONS(675),
    [sym_comment] = ACTIONS(5),
  },
  [223] = {
    [anon_sym_COMMA] = ACTIONS(683),
    [anon_sym_RPAREN] = ACTIONS(683),
    [sym_comment] = ACTIONS(5),
  },
  [224] = {
    [anon_sym_AT] = ACTIONS(685),
    [sym_comment] = ACTIONS(5),
  },
  [225] = {
    [sym_labels] = STATE(128),
    [sym_label] = STATE(275),
    [sym_strict] = STATE(172),
    [sym__literal] = STATE(131),
    [sym__identifier] = STATE(276),
    [sym_variable_identifier] = STATE(187),
    [sym_constructor_identifier] = STATE(187),
    [sym_integer] = STATE(89),
    [sym_char] = STATE(89),
    [sym_string] = STATE(89),
    [sym_fields] = STATE(128),
    [aux_sym_constructor_repeat1] = STATE(175),
    [aux_sym_constructor_repeat3] = STATE(277),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_LPAREN] = ACTIONS(211),
    [anon_sym_COMMA] = ACTIONS(173),
    [anon_sym_RPAREN] = ACTIONS(173),
    [anon_sym_DASH] = ACTIONS(173),
    [anon_sym_BQUOTE] = ACTIONS(173),
    [anon_sym_COLON] = ACTIONS(173),
    [anon_sym_BANG] = ACTIONS(173),
    [sym__variable_pattern] = ACTIONS(287),
    [sym__constructor_pattern] = ACTIONS(71),
    [anon_sym_DOT] = ACTIONS(173),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
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
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [226] = {
    [anon_sym_LPAREN] = ACTIONS(687),
    [anon_sym_COMMA] = ACTIONS(687),
    [anon_sym_RPAREN] = ACTIONS(687),
    [anon_sym_EQ] = ACTIONS(687),
    [anon_sym_TILDE] = ACTIONS(687),
    [anon_sym_LBRACK] = ACTIONS(687),
    [anon_sym_RBRACK] = ACTIONS(687),
    [anon_sym_DASH] = ACTIONS(687),
    [anon_sym__] = ACTIONS(687),
    [anon_sym_BQUOTE] = ACTIONS(687),
    [anon_sym_COLON] = ACTIONS(687),
    [sym_list_constructor] = ACTIONS(687),
    [anon_sym_BANG] = ACTIONS(687),
    [sym__variable_pattern] = ACTIONS(689),
    [sym__constructor_pattern] = ACTIONS(689),
    [anon_sym_DOT] = ACTIONS(687),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(689),
    [anon_sym_SQUOTE] = ACTIONS(687),
    [anon_sym_DQUOTE] = ACTIONS(687),
    [anon_sym_POUND] = ACTIONS(687),
    [anon_sym_DOLLAR] = ACTIONS(687),
    [anon_sym_PERCENT] = ACTIONS(687),
    [anon_sym_AMP] = ACTIONS(687),
    [anon_sym_1] = ACTIONS(687),
    [anon_sym_PLUS] = ACTIONS(687),
    [anon_sym_SLASH] = ACTIONS(687),
    [anon_sym_LT] = ACTIONS(687),
    [anon_sym_GT] = ACTIONS(687),
    [anon_sym_QMARK] = ACTIONS(687),
    [anon_sym_CARET] = ACTIONS(687),
    [sym__integer_literal] = ACTIONS(687),
    [sym__octal_literal] = ACTIONS(687),
    [sym__hexidecimal_literal] = ACTIONS(687),
  },
  [227] = {
    [sym__function_pattern] = STATE(226),
    [sym_label_pattern] = STATE(86),
    [sym_irrefutable_pattern] = STATE(86),
    [sym_list_pattern] = STATE(86),
    [sym_tuple_pattern] = STATE(86),
    [sym_parenthesized_pattern] = STATE(86),
    [sym_as_pattern] = STATE(86),
    [sym_wildcard] = STATE(86),
    [sym__variable] = STATE(230),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym__literal] = STATE(86),
    [sym__identifier] = STATE(94),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(96),
    [sym_integer] = STATE(89),
    [sym_char] = STATE(89),
    [sym_string] = STATE(89),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_TILDE] = ACTIONS(387),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym__] = ACTIONS(151),
    [sym_list_constructor] = ACTIONS(153),
    [sym__variable_pattern] = ACTIONS(155),
    [sym__constructor_pattern] = ACTIONS(389),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [228] = {
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
  [229] = {
    [anon_sym_RBRACK] = ACTIONS(691),
    [sym_comment] = ACTIONS(5),
  },
  [230] = {
    [anon_sym_AT] = ACTIONS(693),
    [sym_comment] = ACTIONS(5),
  },
  [231] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(695),
  },
  [232] = {
    [anon_sym_RBRACE] = ACTIONS(327),
    [anon_sym_LPAREN] = ACTIONS(327),
    [anon_sym_COMMA] = ACTIONS(327),
    [anon_sym_RPAREN] = ACTIONS(327),
    [anon_sym_EQ] = ACTIONS(327),
    [anon_sym_TILDE] = ACTIONS(327),
    [anon_sym_LBRACK] = ACTIONS(327),
    [anon_sym_RBRACK] = ACTIONS(327),
    [anon_sym_DASH] = ACTIONS(327),
    [anon_sym__] = ACTIONS(327),
    [anon_sym_BQUOTE] = ACTIONS(327),
    [anon_sym_COLON] = ACTIONS(327),
    [sym_list_constructor] = ACTIONS(327),
    [anon_sym_BANG] = ACTIONS(327),
    [sym__variable_pattern] = ACTIONS(329),
    [sym__constructor_pattern] = ACTIONS(329),
    [anon_sym_DOT] = ACTIONS(327),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(329),
    [anon_sym_SQUOTE] = ACTIONS(327),
    [anon_sym_DQUOTE] = ACTIONS(327),
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
    [sym__integer_literal] = ACTIONS(327),
    [sym__octal_literal] = ACTIONS(327),
    [sym__hexidecimal_literal] = ACTIONS(327),
  },
  [233] = {
    [sym__gap] = STATE(203),
    [sym__graphic] = STATE(203),
    [sym__small] = STATE(74),
    [sym__large] = STATE(74),
    [sym__symbol] = STATE(74),
    [sym__special] = STATE(74),
    [sym__escape] = STATE(203),
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
    [anon_sym_SQUOTE] = ACTIONS(349),
    [anon_sym_DQUOTE] = ACTIONS(697),
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
  [234] = {
    [sym__function_pattern] = STATE(403),
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
  [235] = {
    [sym_labels] = STATE(405),
    [sym_label] = STATE(406),
    [sym__identifier] = STATE(407),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [anon_sym_RBRACE] = ACTIONS(699),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(71),
    [sym_comment] = ACTIONS(5),
  },
  [236] = {
    [anon_sym_LPAREN] = ACTIONS(701),
    [anon_sym_EQ] = ACTIONS(701),
    [anon_sym_TILDE] = ACTIONS(701),
    [anon_sym_LBRACK] = ACTIONS(701),
    [anon_sym__] = ACTIONS(701),
    [sym_list_constructor] = ACTIONS(701),
    [sym__variable_pattern] = ACTIONS(703),
    [sym__constructor_pattern] = ACTIONS(703),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(703),
    [anon_sym_SQUOTE] = ACTIONS(701),
    [anon_sym_DQUOTE] = ACTIONS(701),
    [sym__integer_literal] = ACTIONS(701),
    [sym__octal_literal] = ACTIONS(701),
    [sym__hexidecimal_literal] = ACTIONS(701),
  },
  [237] = {
    [sym_type] = STATE(414),
    [sym__generic_type_constructor] = STATE(415),
    [sym_tupling_constructor] = STATE(411),
    [sym_tuple] = STATE(415),
    [sym_list] = STATE(415),
    [sym_parenthesized_constructor] = STATE(415),
    [sym_constructor] = STATE(416),
    [sym_variable_identifier] = STATE(417),
    [sym_constructor_identifier] = STATE(114),
    [sym__type_constructors] = STATE(411),
    [sym_qualified_type_constructor] = STATE(418),
    [anon_sym_LPAREN] = ACTIONS(705),
    [anon_sym_COMMA] = ACTIONS(707),
    [anon_sym_LBRACK] = ACTIONS(709),
    [sym_unit_type] = ACTIONS(711),
    [sym_list_constructor] = ACTIONS(711),
    [sym_function_constructor] = ACTIONS(711),
    [sym__variable_pattern] = ACTIONS(483),
    [sym__constructor_pattern] = ACTIONS(713),
    [sym_module_identifier] = ACTIONS(715),
    [sym_comment] = ACTIONS(5),
  },
  [238] = {
    [sym_type] = STATE(422),
    [sym__generic_type_constructor] = STATE(423),
    [sym_tupling_constructor] = STATE(411),
    [sym_tuple] = STATE(423),
    [sym_list] = STATE(423),
    [sym_parenthesized_constructor] = STATE(423),
    [sym_variable_identifier] = STATE(424),
    [sym__type_constructors] = STATE(411),
    [sym_qualified_type_constructor] = STATE(418),
    [aux_sym_list_repeat1] = STATE(425),
    [anon_sym_LPAREN] = ACTIONS(705),
    [anon_sym_LBRACK] = ACTIONS(709),
    [sym_unit_type] = ACTIONS(711),
    [sym_list_constructor] = ACTIONS(711),
    [sym_function_constructor] = ACTIONS(711),
    [sym__variable_pattern] = ACTIONS(717),
    [sym__constructor_pattern] = ACTIONS(719),
    [sym_module_identifier] = ACTIONS(721),
    [sym_comment] = ACTIONS(5),
  },
  [239] = {
    [sym__layout_semicolon] = ACTIONS(723),
    [anon_sym_SEMI] = ACTIONS(725),
    [anon_sym_DASH_GT] = ACTIONS(725),
    [sym_comment] = ACTIONS(5),
  },
  [240] = {
    [sym_variable_identifier] = STATE(427),
    [aux_sym_simple_type_repeat1] = STATE(428),
    [sym__layout_semicolon] = ACTIONS(727),
    [anon_sym_SEMI] = ACTIONS(729),
    [anon_sym_LBRACE] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_DASH_GT] = ACTIONS(729),
    [anon_sym_EQ_GT] = ACTIONS(81),
    [anon_sym_BANG] = ACTIONS(81),
    [sym__variable_pattern] = ACTIONS(81),
    [sym__constructor_pattern] = ACTIONS(203),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(203),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [sym__integer_literal] = ACTIONS(81),
    [sym__octal_literal] = ACTIONS(81),
    [sym__hexidecimal_literal] = ACTIONS(81),
  },
  [241] = {
    [sym_constructor_identifier] = STATE(431),
    [aux_sym_qualified_type_constructor_repeat1] = STATE(432),
    [sym__constructor_pattern] = ACTIONS(731),
    [anon_sym_DOT] = ACTIONS(733),
    [sym_comment] = ACTIONS(5),
  },
  [242] = {
    [sym__layout_semicolon] = ACTIONS(735),
    [anon_sym_SEMI] = ACTIONS(737),
    [sym_comment] = ACTIONS(5),
  },
  [243] = {
    [sym__layout_semicolon] = ACTIONS(739),
    [anon_sym_SEMI] = ACTIONS(741),
    [anon_sym_DASH_GT] = ACTIONS(743),
    [sym_comment] = ACTIONS(5),
  },
  [244] = {
    [sym_type] = STATE(434),
    [sym__generic_type_constructor] = STATE(243),
    [sym_tupling_constructor] = STATE(239),
    [sym_tuple] = STATE(243),
    [sym_list] = STATE(243),
    [sym_parenthesized_constructor] = STATE(243),
    [sym_variable_identifier] = STATE(246),
    [sym__type_constructors] = STATE(239),
    [sym_qualified_type_constructor] = STATE(248),
    [anon_sym_LPAREN] = ACTIONS(590),
    [anon_sym_LBRACK] = ACTIONS(415),
    [sym_unit_type] = ACTIONS(417),
    [sym_list_constructor] = ACTIONS(417),
    [sym_function_constructor] = ACTIONS(417),
    [sym__variable_pattern] = ACTIONS(419),
    [sym__constructor_pattern] = ACTIONS(592),
    [sym_module_identifier] = ACTIONS(423),
    [sym_comment] = ACTIONS(5),
  },
  [245] = {
    [anon_sym_EQ_GT] = ACTIONS(745),
    [sym_comment] = ACTIONS(5),
  },
  [246] = {
    [sym__layout_semicolon] = ACTIONS(747),
    [anon_sym_SEMI] = ACTIONS(749),
    [anon_sym_DASH_GT] = ACTIONS(751),
    [sym_comment] = ACTIONS(5),
  },
  [247] = {
    [sym_labels] = STATE(128),
    [sym_label] = STATE(129),
    [sym_strict] = STATE(172),
    [sym__literal] = STATE(131),
    [sym__identifier] = STATE(173),
    [sym_variable_identifier] = STATE(174),
    [sym_constructor_identifier] = STATE(174),
    [sym_integer] = STATE(124),
    [sym_char] = STATE(124),
    [sym_string] = STATE(124),
    [sym_fields] = STATE(128),
    [aux_sym_constructor_repeat1] = STATE(175),
    [aux_sym_constructor_repeat3] = STATE(135),
    [anon_sym_LBRACE] = ACTIONS(209),
    [anon_sym_LPAREN] = ACTIONS(211),
    [anon_sym_EQ_GT] = ACTIONS(213),
    [anon_sym_BANG] = ACTIONS(275),
    [sym__variable_pattern] = ACTIONS(277),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(219),
    [anon_sym_SQUOTE] = ACTIONS(221),
    [anon_sym_DQUOTE] = ACTIONS(223),
    [sym__integer_literal] = ACTIONS(225),
    [sym__octal_literal] = ACTIONS(225),
    [sym__hexidecimal_literal] = ACTIONS(225),
  },
  [248] = {
    [sym__layout_semicolon] = ACTIONS(753),
    [anon_sym_SEMI] = ACTIONS(755),
    [anon_sym_DASH_GT] = ACTIONS(755),
    [sym_comment] = ACTIONS(5),
  },
  [249] = {
    [ts_builtin_sym_end] = ACTIONS(757),
    [anon_sym_RBRACE] = ACTIONS(759),
    [anon_sym_import] = ACTIONS(759),
    [anon_sym_foreign] = ACTIONS(759),
    [anon_sym_default] = ACTIONS(759),
    [anon_sym_class] = ACTIONS(759),
    [anon_sym_instance] = ACTIONS(759),
    [anon_sym_infixl] = ACTIONS(759),
    [anon_sym_infixr] = ACTIONS(759),
    [anon_sym_infix] = ACTIONS(759),
    [anon_sym_data] = ACTIONS(759),
    [anon_sym_newtype] = ACTIONS(759),
    [anon_sym_type] = ACTIONS(759),
    [sym__variable_pattern] = ACTIONS(761),
    [sym__constructor_pattern] = ACTIONS(761),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(761),
    [anon_sym_SQUOTE] = ACTIONS(759),
    [anon_sym_DQUOTE] = ACTIONS(759),
    [sym__integer_literal] = ACTIONS(759),
    [sym__octal_literal] = ACTIONS(759),
    [sym__hexidecimal_literal] = ACTIONS(759),
  },
  [250] = {
    [anon_sym_where] = ACTIONS(763),
    [sym_comment] = ACTIONS(5),
  },
  [251] = {
    [aux_sym_module_exports_repeat1] = STATE(439),
    [anon_sym_COMMA] = ACTIONS(765),
    [anon_sym_RPAREN] = ACTIONS(767),
    [sym_comment] = ACTIONS(5),
  },
  [252] = {
    [anon_sym_LPAREN] = ACTIONS(769),
    [anon_sym_COMMA] = ACTIONS(771),
    [anon_sym_RPAREN] = ACTIONS(771),
    [sym_comment] = ACTIONS(5),
  },
  [253] = {
    [sym_import] = STATE(19),
    [sym__declaration] = STATE(442),
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
    [aux_sym_module_repeat1] = STATE(443),
    [sym__layout_close_brace] = ACTIONS(773),
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
  [254] = {
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
    [aux_sym_module_repeat1] = STATE(444),
    [anon_sym_RBRACE] = ACTIONS(775),
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
  [255] = {
    [ts_builtin_sym_end] = ACTIONS(777),
    [sym_comment] = ACTIONS(5),
  },
  [256] = {
    [ts_builtin_sym_end] = ACTIONS(779),
    [sym_comment] = ACTIONS(5),
  },
  [257] = {
    [sym_module_identifier] = ACTIONS(781),
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
    [sym_comment] = ACTIONS(5),
  },
  [260] = {
    [aux_sym_import_specification_repeat1] = STATE(449),
    [anon_sym_LPAREN] = ACTIONS(791),
    [anon_sym_COMMA] = ACTIONS(793),
    [anon_sym_RPAREN] = ACTIONS(795),
    [sym_comment] = ACTIONS(5),
  },
  [261] = {
    [sym_import_specification] = STATE(450),
    [sym__layout_semicolon] = ACTIONS(783),
    [anon_sym_SEMI] = ACTIONS(785),
    [anon_sym_LPAREN] = ACTIONS(189),
    [anon_sym_hiding] = ACTIONS(193),
    [sym_comment] = ACTIONS(5),
  },
  [262] = {
    [sym__identifier] = STATE(451),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [anon_sym_RPAREN] = ACTIONS(795),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [263] = {
    [sym__variable_pattern] = ACTIONS(797),
    [sym__constructor_pattern] = ACTIONS(799),
    [sym_comment] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(797),
  },
  [264] = {
    [sym__gap] = STATE(72),
    [sym__graphic] = STATE(72),
    [sym__small] = STATE(74),
    [sym__large] = STATE(74),
    [sym__symbol] = STATE(74),
    [sym__special] = STATE(74),
    [sym__escape] = STATE(72),
    [aux_sym_string_repeat1] = STATE(453),
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
    [anon_sym_DQUOTE] = ACTIONS(801),
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
  [265] = {
    [sym_type_signature] = STATE(454),
    [sym__identifier] = STATE(267),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [sym_string] = STATE(455),
    [sym__variable_pattern] = ACTIONS(483),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(455),
  },
  [266] = {
    [sym__layout_semicolon] = ACTIONS(803),
    [anon_sym_SEMI] = ACTIONS(805),
    [sym_comment] = ACTIONS(5),
  },
  [267] = {
    [anon_sym_COLON_COLON] = ACTIONS(169),
    [sym_comment] = ACTIONS(5),
  },
  [268] = {
    [sym_type_signature] = STATE(454),
    [sym__identifier] = STATE(267),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [sym__variable_pattern] = ACTIONS(483),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [269] = {
    [sym__identifier] = STATE(456),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [270] = {
    [sym__layout_semicolon] = ACTIONS(807),
    [anon_sym_SEMI] = ACTIONS(809),
    [sym_comment] = ACTIONS(5),
  },
  [271] = {
    [anon_sym_COMMA] = ACTIONS(811),
    [anon_sym_RPAREN] = ACTIONS(813),
    [sym_comment] = ACTIONS(5),
  },
  [272] = {
    [sym_constructor] = STATE(459),
    [sym_constructor_identifier] = STATE(114),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
  },
  [273] = {
    [anon_sym_EQ_GT] = ACTIONS(815),
    [sym_comment] = ACTIONS(5),
  },
  [274] = {
    [anon_sym_COMMA] = ACTIONS(817),
    [anon_sym_RPAREN] = ACTIONS(819),
    [sym_comment] = ACTIONS(5),
  },
  [275] = {
    [aux_sym_labels_repeat1] = STATE(464),
    [anon_sym_COMMA] = ACTIONS(493),
    [anon_sym_RPAREN] = ACTIONS(493),
    [sym_comment] = ACTIONS(5),
  },
  [276] = {
    [anon_sym_COMMA] = ACTIONS(495),
    [anon_sym_RPAREN] = ACTIONS(495),
    [anon_sym_EQ] = ACTIONS(821),
    [anon_sym_BANG] = ACTIONS(495),
    [sym__variable_pattern] = ACTIONS(495),
    [sym__constructor_pattern] = ACTIONS(497),
    [sym_comment] = ACTIONS(5),
  },
  [277] = {
    [sym__literal] = STATE(298),
    [sym_integer] = STATE(89),
    [sym_char] = STATE(89),
    [sym_string] = STATE(89),
    [anon_sym_COMMA] = ACTIONS(489),
    [anon_sym_RPAREN] = ACTIONS(489),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [278] = {
    [sym__layout_semicolon] = ACTIONS(823),
    [anon_sym_SEMI] = ACTIONS(825),
    [sym_comment] = ACTIONS(5),
  },
  [279] = {
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_where] = ACTIONS(75),
    [anon_sym_BANG] = ACTIONS(75),
    [sym__variable_pattern] = ACTIONS(77),
    [sym__constructor_pattern] = ACTIONS(77),
    [sym_comment] = ACTIONS(5),
  },
  [280] = {
    [anon_sym_EQ] = ACTIONS(81),
    [anon_sym_where] = ACTIONS(81),
    [anon_sym_BANG] = ACTIONS(81),
    [sym__variable_pattern] = ACTIONS(203),
    [sym__constructor_pattern] = ACTIONS(203),
    [sym_comment] = ACTIONS(5),
  },
  [281] = {
    [anon_sym_EQ] = ACTIONS(503),
    [anon_sym_where] = ACTIONS(495),
    [anon_sym_BANG] = ACTIONS(495),
    [sym__variable_pattern] = ACTIONS(497),
    [sym__constructor_pattern] = ACTIONS(497),
    [sym_comment] = ACTIONS(5),
  },
  [282] = {
    [anon_sym_EQ] = ACTIONS(173),
    [anon_sym_where] = ACTIONS(173),
    [anon_sym_BANG] = ACTIONS(173),
    [sym__variable_pattern] = ACTIONS(175),
    [sym__constructor_pattern] = ACTIONS(175),
    [sym_comment] = ACTIONS(5),
  },
  [283] = {
    [sym_import] = STATE(19),
    [sym__declaration] = STATE(442),
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
    [aux_sym_module_repeat1] = STATE(467),
    [sym__layout_close_brace] = ACTIONS(827),
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
  [284] = {
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
    [aux_sym_module_repeat1] = STATE(468),
    [anon_sym_RBRACE] = ACTIONS(829),
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
  [285] = {
    [sym__layout_semicolon] = ACTIONS(777),
    [anon_sym_SEMI] = ACTIONS(831),
    [sym_comment] = ACTIONS(5),
  },
  [286] = {
    [aux_sym_fields_repeat1] = STATE(471),
    [anon_sym_RBRACE] = ACTIONS(833),
    [anon_sym_COMMA] = ACTIONS(835),
    [sym_comment] = ACTIONS(5),
  },
  [287] = {
    [aux_sym_field_repeat1] = STATE(474),
    [anon_sym_COMMA] = ACTIONS(837),
    [anon_sym_COLON_COLON] = ACTIONS(839),
    [sym_comment] = ACTIONS(5),
  },
  [288] = {
    [anon_sym_RPAREN] = ACTIONS(841),
    [sym__variable_pattern] = ACTIONS(841),
    [sym__constructor_pattern] = ACTIONS(843),
    [sym_comment] = ACTIONS(5),
  },
  [289] = {
    [sym__identifier] = STATE(476),
    [sym_variable_identifier] = STATE(174),
    [sym_constructor_identifier] = STATE(174),
    [anon_sym_RPAREN] = ACTIONS(845),
    [sym__variable_pattern] = ACTIONS(277),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
  },
  [290] = {
    [anon_sym_RBRACE] = ACTIONS(847),
    [anon_sym_COMMA] = ACTIONS(847),
    [anon_sym_where] = ACTIONS(847),
    [anon_sym_EQ_GT] = ACTIONS(847),
    [anon_sym_BANG] = ACTIONS(847),
    [sym__variable_pattern] = ACTIONS(849),
    [sym__constructor_pattern] = ACTIONS(849),
    [sym_comment] = ACTIONS(5),
  },
  [291] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(851),
  },
  [292] = {
    [anon_sym_COMMA] = ACTIONS(327),
    [anon_sym_where] = ACTIONS(327),
    [anon_sym_EQ_GT] = ACTIONS(327),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(329),
    [anon_sym_SQUOTE] = ACTIONS(327),
    [anon_sym_DQUOTE] = ACTIONS(327),
    [sym__integer_literal] = ACTIONS(327),
    [sym__octal_literal] = ACTIONS(327),
    [sym__hexidecimal_literal] = ACTIONS(327),
  },
  [293] = {
    [sym__gap] = STATE(203),
    [sym__graphic] = STATE(203),
    [sym__small] = STATE(74),
    [sym__large] = STATE(74),
    [sym__symbol] = STATE(74),
    [sym__special] = STATE(74),
    [sym__escape] = STATE(203),
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
    [anon_sym_SQUOTE] = ACTIONS(349),
    [anon_sym_DQUOTE] = ACTIONS(853),
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
  [294] = {
    [sym_label] = STATE(479),
    [sym__identifier] = STATE(480),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(71),
    [sym_comment] = ACTIONS(5),
  },
  [295] = {
    [anon_sym_COMMA] = ACTIONS(855),
    [anon_sym_where] = ACTIONS(857),
    [anon_sym_EQ_GT] = ACTIONS(857),
    [sym_comment] = ACTIONS(5),
  },
  [296] = {
    [sym__literal] = STATE(482),
    [sym_integer] = STATE(124),
    [sym_char] = STATE(124),
    [sym_string] = STATE(124),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(219),
    [anon_sym_SQUOTE] = ACTIONS(221),
    [anon_sym_DQUOTE] = ACTIONS(223),
    [sym__integer_literal] = ACTIONS(225),
    [sym__octal_literal] = ACTIONS(225),
    [sym__hexidecimal_literal] = ACTIONS(225),
  },
  [297] = {
    [anon_sym_where] = ACTIONS(859),
    [anon_sym_EQ_GT] = ACTIONS(859),
    [anon_sym_BANG] = ACTIONS(859),
    [sym__variable_pattern] = ACTIONS(861),
    [sym__constructor_pattern] = ACTIONS(861),
    [sym_comment] = ACTIONS(5),
  },
  [298] = {
    [anon_sym_COMMA] = ACTIONS(863),
    [anon_sym_RPAREN] = ACTIONS(863),
    [anon_sym_where] = ACTIONS(863),
    [anon_sym_EQ_GT] = ACTIONS(863),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(865),
    [anon_sym_SQUOTE] = ACTIONS(863),
    [anon_sym_DQUOTE] = ACTIONS(863),
    [sym__integer_literal] = ACTIONS(863),
    [sym__octal_literal] = ACTIONS(863),
    [sym__hexidecimal_literal] = ACTIONS(863),
  },
  [299] = {
    [sym__layout_semicolon] = ACTIONS(867),
    [anon_sym_SEMI] = ACTIONS(869),
    [sym_comment] = ACTIONS(5),
  },
  [300] = {
    [sym__layout_semicolon] = ACTIONS(871),
    [anon_sym_SEMI] = ACTIONS(873),
    [anon_sym_COMMA] = ACTIONS(873),
    [sym_comment] = ACTIONS(5),
  },
  [301] = {
    [sym__layout_semicolon] = ACTIONS(875),
    [anon_sym_SEMI] = ACTIONS(877),
    [anon_sym_COMMA] = ACTIONS(877),
    [anon_sym_DASH] = ACTIONS(877),
    [anon_sym_COLON] = ACTIONS(877),
    [anon_sym_BANG] = ACTIONS(877),
    [anon_sym_DOT] = ACTIONS(877),
    [sym_comment] = ACTIONS(5),
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
  },
  [302] = {
    [sym__layout_semicolon] = ACTIONS(879),
    [anon_sym_SEMI] = ACTIONS(881),
    [anon_sym_COMMA] = ACTIONS(881),
    [sym_comment] = ACTIONS(5),
  },
  [303] = {
    [sym__op] = STATE(483),
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
  [304] = {
    [sym__layout_semicolon] = ACTIONS(883),
    [anon_sym_SEMI] = ACTIONS(885),
    [anon_sym_COMMA] = ACTIONS(527),
    [sym_comment] = ACTIONS(5),
  },
  [305] = {
    [sym__layout_semicolon] = ACTIONS(887),
    [anon_sym_SEMI] = ACTIONS(889),
    [anon_sym_COMMA] = ACTIONS(889),
    [anon_sym_DASH] = ACTIONS(889),
    [anon_sym_BANG] = ACTIONS(889),
    [anon_sym_DOT] = ACTIONS(889),
    [sym_comment] = ACTIONS(5),
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
  },
  [306] = {
    [sym_constructors] = STATE(484),
    [sym_constructor] = STATE(153),
    [sym_deriving] = STATE(485),
    [sym_constructor_identifier] = STATE(155),
    [sym__layout_semicolon] = ACTIONS(891),
    [anon_sym_SEMI] = ACTIONS(893),
    [anon_sym_deriving] = ACTIONS(259),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [307] = {
    [sym_deriving] = STATE(485),
    [sym__layout_semicolon] = ACTIONS(891),
    [anon_sym_SEMI] = ACTIONS(893),
    [anon_sym_deriving] = ACTIONS(259),
    [sym_comment] = ACTIONS(5),
  },
  [308] = {
    [sym__layout_semicolon] = ACTIONS(891),
    [anon_sym_SEMI] = ACTIONS(893),
    [sym_comment] = ACTIONS(5),
  },
  [309] = {
    [sym_field] = STATE(486),
    [sym_variable_identifier] = STATE(287),
    [sym__variable_pattern] = ACTIONS(483),
    [sym_comment] = ACTIONS(5),
  },
  [310] = {
    [sym__identifier] = STATE(288),
    [sym_variable_identifier] = STATE(174),
    [sym_constructor_identifier] = STATE(174),
    [aux_sym_constructor_repeat2] = STATE(487),
    [sym__variable_pattern] = ACTIONS(277),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
  },
  [311] = {
    [sym__identifier] = STATE(488),
    [sym_variable_identifier] = STATE(322),
    [sym_constructor_identifier] = STATE(322),
    [sym__variable_pattern] = ACTIONS(895),
    [sym__constructor_pattern] = ACTIONS(251),
    [sym_comment] = ACTIONS(5),
  },
  [312] = {
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
  [313] = {
    [sym__layout_semicolon] = ACTIONS(85),
    [anon_sym_SEMI] = ACTIONS(87),
    [anon_sym_COMMA] = ACTIONS(87),
    [anon_sym_EQ] = ACTIONS(87),
    [anon_sym_deriving] = ACTIONS(87),
    [sym__constructor_pattern] = ACTIONS(89),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(89),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(87),
    [sym__integer_literal] = ACTIONS(87),
    [sym__octal_literal] = ACTIONS(87),
    [sym__hexidecimal_literal] = ACTIONS(87),
  },
  [314] = {
    [sym__graphic] = STATE(489),
    [sym__small] = STATE(66),
    [sym__large] = STATE(66),
    [sym__symbol] = STATE(66),
    [sym__special] = STATE(66),
    [sym__escape] = STATE(489),
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
    [anon_sym_SQUOTE] = ACTIONS(897),
    [anon_sym_DQUOTE] = ACTIONS(897),
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
    [sym__space] = ACTIONS(897),
  },
  [315] = {
    [sym__gap] = STATE(72),
    [sym__graphic] = STATE(72),
    [sym__small] = STATE(74),
    [sym__large] = STATE(74),
    [sym__symbol] = STATE(74),
    [sym__special] = STATE(74),
    [sym__escape] = STATE(72),
    [aux_sym_string_repeat1] = STATE(491),
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
    [anon_sym_DQUOTE] = ACTIONS(899),
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
  [316] = {
    [sym__layout_semicolon] = ACTIONS(125),
    [anon_sym_SEMI] = ACTIONS(127),
    [anon_sym_COMMA] = ACTIONS(127),
    [anon_sym_EQ] = ACTIONS(127),
    [anon_sym_deriving] = ACTIONS(127),
    [sym__constructor_pattern] = ACTIONS(129),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(129),
    [anon_sym_SQUOTE] = ACTIONS(127),
    [anon_sym_DQUOTE] = ACTIONS(127),
    [sym__integer_literal] = ACTIONS(127),
    [sym__octal_literal] = ACTIONS(127),
    [sym__hexidecimal_literal] = ACTIONS(127),
  },
  [317] = {
    [sym__layout_semicolon] = ACTIONS(569),
    [anon_sym_SEMI] = ACTIONS(489),
    [anon_sym_EQ] = ACTIONS(489),
    [anon_sym_deriving] = ACTIONS(489),
    [sym__constructor_pattern] = ACTIONS(571),
    [sym_comment] = ACTIONS(5),
  },
  [318] = {
    [aux_sym_labels_repeat1] = STATE(493),
    [sym__layout_semicolon] = ACTIONS(573),
    [anon_sym_SEMI] = ACTIONS(493),
    [anon_sym_COMMA] = ACTIONS(901),
    [anon_sym_EQ] = ACTIONS(493),
    [anon_sym_deriving] = ACTIONS(493),
    [sym__constructor_pattern] = ACTIONS(577),
    [sym_comment] = ACTIONS(5),
  },
  [319] = {
    [sym__layout_semicolon] = ACTIONS(579),
    [anon_sym_SEMI] = ACTIONS(495),
    [anon_sym_EQ] = ACTIONS(495),
    [anon_sym_deriving] = ACTIONS(495),
    [anon_sym_BANG] = ACTIONS(495),
    [sym__variable_pattern] = ACTIONS(497),
    [sym__constructor_pattern] = ACTIONS(497),
    [sym_comment] = ACTIONS(5),
  },
  [320] = {
    [sym__layout_semicolon] = ACTIONS(581),
    [anon_sym_SEMI] = ACTIONS(499),
    [anon_sym_EQ] = ACTIONS(499),
    [anon_sym_deriving] = ACTIONS(499),
    [sym__constructor_pattern] = ACTIONS(501),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(501),
    [anon_sym_SQUOTE] = ACTIONS(499),
    [anon_sym_DQUOTE] = ACTIONS(499),
    [sym__integer_literal] = ACTIONS(499),
    [sym__octal_literal] = ACTIONS(499),
    [sym__hexidecimal_literal] = ACTIONS(499),
  },
  [321] = {
    [sym__layout_semicolon] = ACTIONS(579),
    [anon_sym_SEMI] = ACTIONS(495),
    [anon_sym_EQ] = ACTIONS(903),
    [anon_sym_deriving] = ACTIONS(495),
    [anon_sym_BANG] = ACTIONS(495),
    [sym__variable_pattern] = ACTIONS(497),
    [sym__constructor_pattern] = ACTIONS(497),
    [sym_comment] = ACTIONS(5),
  },
  [322] = {
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
  [323] = {
    [sym_strict] = STATE(495),
    [sym__identifier] = STATE(495),
    [sym_variable_identifier] = STATE(322),
    [sym_constructor_identifier] = STATE(322),
    [sym__layout_semicolon] = ACTIONS(569),
    [anon_sym_SEMI] = ACTIONS(489),
    [anon_sym_EQ] = ACTIONS(489),
    [anon_sym_deriving] = ACTIONS(489),
    [anon_sym_BANG] = ACTIONS(547),
    [sym__variable_pattern] = ACTIONS(549),
    [sym__constructor_pattern] = ACTIONS(251),
    [sym_comment] = ACTIONS(5),
  },
  [324] = {
    [sym__literal] = STATE(496),
    [sym_integer] = STATE(313),
    [sym_char] = STATE(313),
    [sym_string] = STATE(313),
    [sym__layout_semicolon] = ACTIONS(569),
    [anon_sym_SEMI] = ACTIONS(489),
    [anon_sym_EQ] = ACTIONS(489),
    [anon_sym_deriving] = ACTIONS(489),
    [sym__constructor_pattern] = ACTIONS(571),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(551),
    [anon_sym_SQUOTE] = ACTIONS(553),
    [anon_sym_DQUOTE] = ACTIONS(555),
    [sym__integer_literal] = ACTIONS(557),
    [sym__octal_literal] = ACTIONS(557),
    [sym__hexidecimal_literal] = ACTIONS(557),
  },
  [325] = {
    [sym__identifier] = STATE(497),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [326] = {
    [sym__layout_semicolon] = ACTIONS(906),
    [anon_sym_SEMI] = ACTIONS(908),
    [sym_comment] = ACTIONS(5),
  },
  [327] = {
    [sym_constructor] = STATE(498),
    [sym_constructor_identifier] = STATE(155),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [328] = {
    [sym__layout_semicolon] = ACTIONS(910),
    [anon_sym_SEMI] = ACTIONS(912),
    [anon_sym_PIPE] = ACTIONS(914),
    [anon_sym_deriving] = ACTIONS(912),
    [sym_comment] = ACTIONS(5),
  },
  [329] = {
    [sym__layout_semicolon] = ACTIONS(579),
    [anon_sym_SEMI] = ACTIONS(495),
    [anon_sym_EQ] = ACTIONS(916),
    [anon_sym_PIPE] = ACTIONS(495),
    [anon_sym_deriving] = ACTIONS(495),
    [anon_sym_BANG] = ACTIONS(495),
    [sym__variable_pattern] = ACTIONS(497),
    [sym__constructor_pattern] = ACTIONS(497),
    [sym_comment] = ACTIONS(5),
  },
  [330] = {
    [aux_sym_fields_repeat1] = STATE(501),
    [anon_sym_RBRACE] = ACTIONS(918),
    [anon_sym_COMMA] = ACTIONS(835),
    [sym_comment] = ACTIONS(5),
  },
  [331] = {
    [sym__identifier] = STATE(476),
    [sym_variable_identifier] = STATE(174),
    [sym_constructor_identifier] = STATE(174),
    [anon_sym_RPAREN] = ACTIONS(920),
    [sym__variable_pattern] = ACTIONS(277),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
  },
  [332] = {
    [sym__layout_semicolon] = ACTIONS(922),
    [anon_sym_SEMI] = ACTIONS(847),
    [anon_sym_EQ] = ACTIONS(847),
    [anon_sym_EQ_GT] = ACTIONS(847),
    [anon_sym_PIPE] = ACTIONS(847),
    [anon_sym_deriving] = ACTIONS(847),
    [anon_sym_BANG] = ACTIONS(847),
    [sym__variable_pattern] = ACTIONS(849),
    [sym__constructor_pattern] = ACTIONS(849),
    [sym_comment] = ACTIONS(5),
  },
  [333] = {
    [sym_label] = STATE(503),
    [sym__identifier] = STATE(504),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(71),
    [sym_comment] = ACTIONS(5),
  },
  [334] = {
    [sym__layout_semicolon] = ACTIONS(924),
    [anon_sym_SEMI] = ACTIONS(857),
    [anon_sym_COMMA] = ACTIONS(926),
    [anon_sym_EQ] = ACTIONS(857),
    [anon_sym_EQ_GT] = ACTIONS(857),
    [anon_sym_PIPE] = ACTIONS(857),
    [anon_sym_deriving] = ACTIONS(857),
    [sym__constructor_pattern] = ACTIONS(928),
    [sym_comment] = ACTIONS(5),
  },
  [335] = {
    [sym__literal] = STATE(506),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym__integer_literal] = ACTIONS(41),
    [sym__octal_literal] = ACTIONS(41),
    [sym__hexidecimal_literal] = ACTIONS(41),
  },
  [336] = {
    [sym__layout_semicolon] = ACTIONS(930),
    [anon_sym_SEMI] = ACTIONS(859),
    [anon_sym_EQ] = ACTIONS(859),
    [anon_sym_EQ_GT] = ACTIONS(859),
    [anon_sym_PIPE] = ACTIONS(859),
    [anon_sym_deriving] = ACTIONS(859),
    [anon_sym_BANG] = ACTIONS(859),
    [sym__variable_pattern] = ACTIONS(861),
    [sym__constructor_pattern] = ACTIONS(861),
    [sym_comment] = ACTIONS(5),
  },
  [337] = {
    [sym__layout_semicolon] = ACTIONS(932),
    [anon_sym_SEMI] = ACTIONS(863),
    [anon_sym_EQ] = ACTIONS(863),
    [anon_sym_EQ_GT] = ACTIONS(863),
    [anon_sym_PIPE] = ACTIONS(863),
    [anon_sym_deriving] = ACTIONS(863),
    [sym__constructor_pattern] = ACTIONS(865),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(865),
    [anon_sym_SQUOTE] = ACTIONS(863),
    [anon_sym_DQUOTE] = ACTIONS(863),
    [sym__integer_literal] = ACTIONS(863),
    [sym__octal_literal] = ACTIONS(863),
    [sym__hexidecimal_literal] = ACTIONS(863),
  },
  [338] = {
    [sym_constructor] = STATE(507),
    [sym_constructor_identifier] = STATE(155),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [339] = {
    [anon_sym_LPAREN] = ACTIONS(934),
    [anon_sym_COMMA] = ACTIONS(934),
    [anon_sym_RPAREN] = ACTIONS(934),
    [anon_sym_EQ] = ACTIONS(934),
    [anon_sym_LBRACK] = ACTIONS(934),
    [anon_sym_RBRACK] = ACTIONS(934),
    [anon_sym_DASH_GT] = ACTIONS(934),
    [sym_unit_type] = ACTIONS(934),
    [sym_list_constructor] = ACTIONS(934),
    [sym_function_constructor] = ACTIONS(934),
    [sym__variable_pattern] = ACTIONS(934),
    [sym__constructor_pattern] = ACTIONS(936),
    [sym_module_identifier] = ACTIONS(936),
    [sym_comment] = ACTIONS(5),
  },
  [340] = {
    [sym_deriving] = STATE(508),
    [sym__layout_semicolon] = ACTIONS(938),
    [anon_sym_SEMI] = ACTIONS(940),
    [anon_sym_deriving] = ACTIONS(259),
    [sym_comment] = ACTIONS(5),
  },
  [341] = {
    [anon_sym_COMMA] = ACTIONS(847),
    [anon_sym_RPAREN] = ACTIONS(847),
    [anon_sym_EQ_GT] = ACTIONS(847),
    [anon_sym_BANG] = ACTIONS(847),
    [sym__variable_pattern] = ACTIONS(847),
    [sym__constructor_pattern] = ACTIONS(849),
    [sym_comment] = ACTIONS(5),
  },
  [342] = {
    [anon_sym_COMMA] = ACTIONS(859),
    [anon_sym_RPAREN] = ACTIONS(859),
    [anon_sym_EQ_GT] = ACTIONS(859),
    [anon_sym_BANG] = ACTIONS(859),
    [sym__variable_pattern] = ACTIONS(859),
    [sym__constructor_pattern] = ACTIONS(861),
    [sym_comment] = ACTIONS(5),
  },
  [343] = {
    [anon_sym_LPAREN] = ACTIONS(942),
    [anon_sym_COMMA] = ACTIONS(942),
    [anon_sym_RPAREN] = ACTIONS(942),
    [anon_sym_EQ] = ACTIONS(942),
    [anon_sym_LBRACK] = ACTIONS(942),
    [anon_sym_RBRACK] = ACTIONS(942),
    [anon_sym_DASH_GT] = ACTIONS(942),
    [sym_unit_type] = ACTIONS(942),
    [sym_list_constructor] = ACTIONS(942),
    [sym_function_constructor] = ACTIONS(942),
    [sym__variable_pattern] = ACTIONS(942),
    [sym__constructor_pattern] = ACTIONS(944),
    [sym_module_identifier] = ACTIONS(944),
    [sym_comment] = ACTIONS(5),
  },
  [344] = {
    [sym_type] = STATE(414),
    [sym__generic_type_constructor] = STATE(415),
    [sym_tupling_constructor] = STATE(411),
    [sym_tuple] = STATE(415),
    [sym_list] = STATE(415),
    [sym_parenthesized_constructor] = STATE(415),
    [sym_variable_identifier] = STATE(417),
    [sym__type_constructors] = STATE(411),
    [sym_qualified_type_constructor] = STATE(418),
    [anon_sym_LPAREN] = ACTIONS(705),
    [anon_sym_COMMA] = ACTIONS(707),
    [anon_sym_LBRACK] = ACTIONS(709),
    [sym_unit_type] = ACTIONS(711),
    [sym_list_constructor] = ACTIONS(711),
    [sym_function_constructor] = ACTIONS(711),
    [sym__variable_pattern] = ACTIONS(483),
    [sym__constructor_pattern] = ACTIONS(946),
    [sym_module_identifier] = ACTIONS(715),
    [sym_comment] = ACTIONS(5),
  },
  [345] = {
    [sym_variable_identifier] = STATE(427),
    [aux_sym_simple_type_repeat1] = STATE(428),
    [sym__layout_semicolon] = ACTIONS(727),
    [anon_sym_SEMI] = ACTIONS(729),
    [anon_sym_DASH_GT] = ACTIONS(729),
    [sym__variable_pattern] = ACTIONS(948),
    [sym_comment] = ACTIONS(5),
  },
  [346] = {
    [sym__layout_semicolon] = ACTIONS(950),
    [anon_sym_SEMI] = ACTIONS(952),
    [sym_comment] = ACTIONS(5),
  },
  [347] = {
    [aux_sym_fields_repeat1] = STATE(511),
    [anon_sym_RBRACE] = ACTIONS(954),
    [anon_sym_COMMA] = ACTIONS(835),
    [sym_comment] = ACTIONS(5),
  },
  [348] = {
    [sym__identifier] = STATE(476),
    [sym_variable_identifier] = STATE(174),
    [sym_constructor_identifier] = STATE(174),
    [anon_sym_RPAREN] = ACTIONS(956),
    [sym__variable_pattern] = ACTIONS(277),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
  },
  [349] = {
    [anon_sym_EQ] = ACTIONS(847),
    [anon_sym_BANG] = ACTIONS(847),
    [sym__variable_pattern] = ACTIONS(847),
    [sym__constructor_pattern] = ACTIONS(849),
    [sym_comment] = ACTIONS(5),
  },
  [350] = {
    [sym_label] = STATE(513),
    [sym__identifier] = STATE(514),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(71),
    [sym_comment] = ACTIONS(5),
  },
  [351] = {
    [anon_sym_COMMA] = ACTIONS(958),
    [anon_sym_EQ] = ACTIONS(857),
    [sym_comment] = ACTIONS(5),
  },
  [352] = {
    [sym__literal] = STATE(516),
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
  [353] = {
    [anon_sym_EQ] = ACTIONS(859),
    [anon_sym_BANG] = ACTIONS(859),
    [sym__variable_pattern] = ACTIONS(859),
    [sym__constructor_pattern] = ACTIONS(861),
    [sym_comment] = ACTIONS(5),
  },
  [354] = {
    [anon_sym_EQ] = ACTIONS(863),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(865),
    [anon_sym_SQUOTE] = ACTIONS(863),
    [anon_sym_DQUOTE] = ACTIONS(863),
    [sym__integer_literal] = ACTIONS(863),
    [sym__octal_literal] = ACTIONS(863),
    [sym__hexidecimal_literal] = ACTIONS(863),
  },
  [355] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(960),
  },
  [356] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(962),
  },
  [357] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(964),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(964),
  },
  [358] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(966),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(968),
  },
  [359] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(970),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(970),
  },
  [360] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(966),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(972),
  },
  [361] = {
    [anon_sym_SEMI] = ACTIONS(974),
    [anon_sym_LBRACE] = ACTIONS(974),
    [anon_sym_RBRACE] = ACTIONS(974),
    [anon_sym_LPAREN] = ACTIONS(974),
    [anon_sym_RPAREN] = ACTIONS(974),
    [anon_sym_EQ] = ACTIONS(974),
    [anon_sym_TILDE] = ACTIONS(974),
    [anon_sym_LBRACK] = ACTIONS(974),
    [anon_sym_RBRACK] = ACTIONS(974),
    [anon_sym_DASH] = ACTIONS(974),
    [anon_sym_AT] = ACTIONS(974),
    [anon_sym__] = ACTIONS(974),
    [anon_sym_BQUOTE] = ACTIONS(974),
    [anon_sym_COLON] = ACTIONS(974),
    [anon_sym_PIPE] = ACTIONS(974),
    [anon_sym_BANG] = ACTIONS(974),
    [anon_sym_DOT] = ACTIONS(974),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(974),
    [anon_sym_DQUOTE] = ACTIONS(974),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(974),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(974),
    [sym__ascii_large] = ACTIONS(974),
    [anon_sym_POUND] = ACTIONS(974),
    [anon_sym_DOLLAR] = ACTIONS(974),
    [anon_sym_PERCENT] = ACTIONS(974),
    [anon_sym_AMP] = ACTIONS(974),
    [anon_sym_1] = ACTIONS(974),
    [anon_sym_PLUS] = ACTIONS(974),
    [anon_sym_SLASH] = ACTIONS(974),
    [anon_sym_LT] = ACTIONS(974),
    [anon_sym_GT] = ACTIONS(974),
    [anon_sym_QMARK] = ACTIONS(974),
    [anon_sym_CARET] = ACTIONS(974),
    [anon_sym_BSLASH] = ACTIONS(974),
    [sym__space] = ACTIONS(974),
    [sym__newline] = ACTIONS(974),
    [sym__tab] = ACTIONS(974),
    [sym__vertical_tab] = ACTIONS(974),
  },
  [362] = {
    [anon_sym_SEMI] = ACTIONS(976),
    [anon_sym_LBRACE] = ACTIONS(976),
    [anon_sym_RBRACE] = ACTIONS(976),
    [anon_sym_LPAREN] = ACTIONS(976),
    [anon_sym_RPAREN] = ACTIONS(976),
    [anon_sym_EQ] = ACTIONS(976),
    [anon_sym_TILDE] = ACTIONS(976),
    [anon_sym_LBRACK] = ACTIONS(976),
    [anon_sym_RBRACK] = ACTIONS(976),
    [anon_sym_DASH] = ACTIONS(976),
    [anon_sym_AT] = ACTIONS(976),
    [anon_sym__] = ACTIONS(976),
    [anon_sym_BQUOTE] = ACTIONS(976),
    [anon_sym_COLON] = ACTIONS(976),
    [anon_sym_PIPE] = ACTIONS(976),
    [anon_sym_BANG] = ACTIONS(976),
    [anon_sym_DOT] = ACTIONS(976),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(976),
    [anon_sym_DQUOTE] = ACTIONS(976),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(976),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(976),
    [sym__ascii_large] = ACTIONS(976),
    [anon_sym_POUND] = ACTIONS(976),
    [anon_sym_DOLLAR] = ACTIONS(976),
    [anon_sym_PERCENT] = ACTIONS(976),
    [anon_sym_AMP] = ACTIONS(976),
    [anon_sym_1] = ACTIONS(976),
    [anon_sym_PLUS] = ACTIONS(976),
    [anon_sym_SLASH] = ACTIONS(976),
    [anon_sym_LT] = ACTIONS(976),
    [anon_sym_GT] = ACTIONS(976),
    [anon_sym_QMARK] = ACTIONS(976),
    [anon_sym_CARET] = ACTIONS(976),
    [anon_sym_BSLASH] = ACTIONS(976),
    [sym__space] = ACTIONS(976),
    [sym__newline] = ACTIONS(976),
    [sym__tab] = ACTIONS(976),
    [sym__vertical_tab] = ACTIONS(976),
  },
  [363] = {
    [anon_sym_SEMI] = ACTIONS(978),
    [anon_sym_LBRACE] = ACTIONS(978),
    [anon_sym_RBRACE] = ACTIONS(978),
    [anon_sym_LPAREN] = ACTIONS(978),
    [anon_sym_RPAREN] = ACTIONS(978),
    [anon_sym_EQ] = ACTIONS(978),
    [anon_sym_TILDE] = ACTIONS(978),
    [anon_sym_LBRACK] = ACTIONS(978),
    [anon_sym_RBRACK] = ACTIONS(978),
    [anon_sym_DASH] = ACTIONS(978),
    [anon_sym_AT] = ACTIONS(978),
    [anon_sym__] = ACTIONS(978),
    [anon_sym_BQUOTE] = ACTIONS(978),
    [anon_sym_COLON] = ACTIONS(978),
    [anon_sym_PIPE] = ACTIONS(978),
    [anon_sym_BANG] = ACTIONS(978),
    [anon_sym_DOT] = ACTIONS(978),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(978),
    [anon_sym_DQUOTE] = ACTIONS(978),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(978),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(978),
    [sym__ascii_large] = ACTIONS(978),
    [anon_sym_POUND] = ACTIONS(978),
    [anon_sym_DOLLAR] = ACTIONS(978),
    [anon_sym_PERCENT] = ACTIONS(978),
    [anon_sym_AMP] = ACTIONS(978),
    [anon_sym_1] = ACTIONS(978),
    [anon_sym_PLUS] = ACTIONS(978),
    [anon_sym_SLASH] = ACTIONS(978),
    [anon_sym_LT] = ACTIONS(978),
    [anon_sym_GT] = ACTIONS(978),
    [anon_sym_QMARK] = ACTIONS(978),
    [anon_sym_CARET] = ACTIONS(978),
    [anon_sym_BSLASH] = ACTIONS(978),
    [sym__space] = ACTIONS(978),
    [sym__newline] = ACTIONS(978),
    [sym__tab] = ACTIONS(978),
    [sym__vertical_tab] = ACTIONS(978),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(978),
  },
  [364] = {
    [anon_sym_SEMI] = ACTIONS(980),
    [anon_sym_LBRACE] = ACTIONS(980),
    [anon_sym_RBRACE] = ACTIONS(980),
    [anon_sym_LPAREN] = ACTIONS(980),
    [anon_sym_RPAREN] = ACTIONS(980),
    [anon_sym_EQ] = ACTIONS(980),
    [anon_sym_TILDE] = ACTIONS(980),
    [anon_sym_LBRACK] = ACTIONS(980),
    [anon_sym_RBRACK] = ACTIONS(980),
    [anon_sym_DASH] = ACTIONS(980),
    [anon_sym_AT] = ACTIONS(980),
    [anon_sym__] = ACTIONS(980),
    [anon_sym_BQUOTE] = ACTIONS(980),
    [anon_sym_COLON] = ACTIONS(980),
    [anon_sym_PIPE] = ACTIONS(980),
    [anon_sym_BANG] = ACTIONS(980),
    [anon_sym_DOT] = ACTIONS(980),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(980),
    [anon_sym_DQUOTE] = ACTIONS(980),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(980),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(980),
    [sym__ascii_large] = ACTIONS(980),
    [anon_sym_POUND] = ACTIONS(980),
    [anon_sym_DOLLAR] = ACTIONS(980),
    [anon_sym_PERCENT] = ACTIONS(980),
    [anon_sym_AMP] = ACTIONS(980),
    [anon_sym_1] = ACTIONS(980),
    [anon_sym_PLUS] = ACTIONS(980),
    [anon_sym_SLASH] = ACTIONS(980),
    [anon_sym_LT] = ACTIONS(980),
    [anon_sym_GT] = ACTIONS(980),
    [anon_sym_QMARK] = ACTIONS(980),
    [anon_sym_CARET] = ACTIONS(980),
    [anon_sym_BSLASH] = ACTIONS(980),
    [sym__space] = ACTIONS(980),
    [sym__newline] = ACTIONS(980),
    [sym__tab] = ACTIONS(980),
    [sym__vertical_tab] = ACTIONS(980),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(982),
  },
  [365] = {
    [anon_sym_SEMI] = ACTIONS(984),
    [anon_sym_LBRACE] = ACTIONS(984),
    [anon_sym_RBRACE] = ACTIONS(984),
    [anon_sym_LPAREN] = ACTIONS(984),
    [anon_sym_RPAREN] = ACTIONS(984),
    [anon_sym_EQ] = ACTIONS(984),
    [anon_sym_TILDE] = ACTIONS(984),
    [anon_sym_LBRACK] = ACTIONS(984),
    [anon_sym_RBRACK] = ACTIONS(984),
    [anon_sym_DASH] = ACTIONS(984),
    [anon_sym_AT] = ACTIONS(984),
    [anon_sym__] = ACTIONS(984),
    [anon_sym_BQUOTE] = ACTIONS(984),
    [anon_sym_COLON] = ACTIONS(984),
    [anon_sym_PIPE] = ACTIONS(984),
    [anon_sym_BANG] = ACTIONS(984),
    [anon_sym_DOT] = ACTIONS(984),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(984),
    [anon_sym_DQUOTE] = ACTIONS(984),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(984),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(984),
    [sym__ascii_large] = ACTIONS(984),
    [anon_sym_POUND] = ACTIONS(984),
    [anon_sym_DOLLAR] = ACTIONS(984),
    [anon_sym_PERCENT] = ACTIONS(984),
    [anon_sym_AMP] = ACTIONS(984),
    [anon_sym_1] = ACTIONS(984),
    [anon_sym_PLUS] = ACTIONS(984),
    [anon_sym_SLASH] = ACTIONS(984),
    [anon_sym_LT] = ACTIONS(984),
    [anon_sym_GT] = ACTIONS(984),
    [anon_sym_QMARK] = ACTIONS(984),
    [anon_sym_CARET] = ACTIONS(984),
    [anon_sym_BSLASH] = ACTIONS(984),
    [sym__space] = ACTIONS(984),
    [sym__newline] = ACTIONS(984),
    [sym__tab] = ACTIONS(984),
    [sym__vertical_tab] = ACTIONS(984),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(984),
  },
  [366] = {
    [anon_sym_SEMI] = ACTIONS(980),
    [anon_sym_LBRACE] = ACTIONS(980),
    [anon_sym_RBRACE] = ACTIONS(980),
    [anon_sym_LPAREN] = ACTIONS(980),
    [anon_sym_RPAREN] = ACTIONS(980),
    [anon_sym_EQ] = ACTIONS(980),
    [anon_sym_TILDE] = ACTIONS(980),
    [anon_sym_LBRACK] = ACTIONS(980),
    [anon_sym_RBRACK] = ACTIONS(980),
    [anon_sym_DASH] = ACTIONS(980),
    [anon_sym_AT] = ACTIONS(980),
    [anon_sym__] = ACTIONS(980),
    [anon_sym_BQUOTE] = ACTIONS(980),
    [anon_sym_COLON] = ACTIONS(980),
    [anon_sym_PIPE] = ACTIONS(980),
    [anon_sym_BANG] = ACTIONS(980),
    [anon_sym_DOT] = ACTIONS(980),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(980),
    [anon_sym_DQUOTE] = ACTIONS(980),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(980),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(980),
    [sym__ascii_large] = ACTIONS(980),
    [anon_sym_POUND] = ACTIONS(980),
    [anon_sym_DOLLAR] = ACTIONS(980),
    [anon_sym_PERCENT] = ACTIONS(980),
    [anon_sym_AMP] = ACTIONS(980),
    [anon_sym_1] = ACTIONS(980),
    [anon_sym_PLUS] = ACTIONS(980),
    [anon_sym_SLASH] = ACTIONS(980),
    [anon_sym_LT] = ACTIONS(980),
    [anon_sym_GT] = ACTIONS(980),
    [anon_sym_QMARK] = ACTIONS(980),
    [anon_sym_CARET] = ACTIONS(980),
    [anon_sym_BSLASH] = ACTIONS(980),
    [sym__space] = ACTIONS(980),
    [sym__newline] = ACTIONS(980),
    [sym__tab] = ACTIONS(980),
    [sym__vertical_tab] = ACTIONS(980),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(986),
  },
  [367] = {
    [sym__variable] = STATE(213),
    [sym_qualified_variable_identifier] = STATE(214),
    [sym__expression] = STATE(523),
    [sym_do_expression] = STATE(213),
    [sym__statement] = STATE(524),
    [sym_constructor] = STATE(213),
    [sym__literal] = STATE(213),
    [sym_variable_identifier] = STATE(214),
    [sym_constructor_identifier] = STATE(525),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [aux_sym_statement_list_repeat1] = STATE(526),
    [sym__layout_close_brace] = ACTIONS(988),
    [anon_sym_do] = ACTIONS(363),
    [sym__variable_pattern] = ACTIONS(31),
    [sym__constructor_pattern] = ACTIONS(990),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym__integer_literal] = ACTIONS(41),
    [sym__octal_literal] = ACTIONS(41),
    [sym__hexidecimal_literal] = ACTIONS(41),
  },
  [368] = {
    [sym__variable] = STATE(213),
    [sym_qualified_variable_identifier] = STATE(214),
    [sym__expression] = STATE(527),
    [sym_do_expression] = STATE(213),
    [sym__statement] = STATE(528),
    [sym_constructor] = STATE(213),
    [sym__literal] = STATE(213),
    [sym_variable_identifier] = STATE(214),
    [sym_constructor_identifier] = STATE(525),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [aux_sym_statement_list_repeat1] = STATE(529),
    [anon_sym_RBRACE] = ACTIONS(992),
    [anon_sym_do] = ACTIONS(363),
    [sym__variable_pattern] = ACTIONS(31),
    [sym__constructor_pattern] = ACTIONS(990),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym__integer_literal] = ACTIONS(41),
    [sym__octal_literal] = ACTIONS(41),
    [sym__hexidecimal_literal] = ACTIONS(41),
  },
  [369] = {
    [sym__layout_semicolon] = ACTIONS(994),
    [anon_sym_SEMI] = ACTIONS(996),
    [anon_sym_where] = ACTIONS(996),
    [anon_sym_do] = ACTIONS(996),
    [sym__variable_pattern] = ACTIONS(998),
    [sym__constructor_pattern] = ACTIONS(998),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(998),
    [anon_sym_SQUOTE] = ACTIONS(996),
    [anon_sym_DQUOTE] = ACTIONS(996),
    [sym__integer_literal] = ACTIONS(996),
    [sym__octal_literal] = ACTIONS(996),
    [sym__hexidecimal_literal] = ACTIONS(996),
  },
  [370] = {
    [sym__layout_semicolon] = ACTIONS(1000),
    [anon_sym_SEMI] = ACTIONS(289),
    [anon_sym_where] = ACTIONS(289),
    [anon_sym_do] = ACTIONS(289),
    [sym__variable_pattern] = ACTIONS(291),
    [sym__constructor_pattern] = ACTIONS(291),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(291),
    [anon_sym_SQUOTE] = ACTIONS(289),
    [anon_sym_DQUOTE] = ACTIONS(289),
    [sym__integer_literal] = ACTIONS(289),
    [sym__octal_literal] = ACTIONS(289),
    [sym__hexidecimal_literal] = ACTIONS(289),
  },
  [371] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(1002),
  },
  [372] = {
    [sym__layout_semicolon] = ACTIONS(325),
    [anon_sym_SEMI] = ACTIONS(327),
    [anon_sym_COMMA] = ACTIONS(327),
    [anon_sym_where] = ACTIONS(327),
    [anon_sym_do] = ACTIONS(327),
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
  [373] = {
    [sym__gap] = STATE(203),
    [sym__graphic] = STATE(203),
    [sym__small] = STATE(74),
    [sym__large] = STATE(74),
    [sym__symbol] = STATE(74),
    [sym__special] = STATE(74),
    [sym__escape] = STATE(203),
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
    [anon_sym_SQUOTE] = ACTIONS(349),
    [anon_sym_DQUOTE] = ACTIONS(1004),
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
  [374] = {
    [sym_field] = STATE(532),
    [sym_variable_identifier] = STATE(287),
    [sym__variable_pattern] = ACTIONS(483),
    [sym_comment] = ACTIONS(5),
  },
  [375] = {
    [sym__identifier] = STATE(288),
    [sym_variable_identifier] = STATE(174),
    [sym_constructor_identifier] = STATE(174),
    [aux_sym_constructor_repeat2] = STATE(533),
    [sym__variable_pattern] = ACTIONS(277),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
  },
  [376] = {
    [sym__identifier] = STATE(534),
    [sym_variable_identifier] = STATE(383),
    [sym_constructor_identifier] = STATE(383),
    [sym__variable_pattern] = ACTIONS(1006),
    [sym__constructor_pattern] = ACTIONS(669),
    [sym_comment] = ACTIONS(5),
  },
  [377] = {
    [sym__layout_semicolon] = ACTIONS(79),
    [anon_sym_SEMI] = ACTIONS(81),
    [anon_sym_EQ] = ACTIONS(81),
    [anon_sym_where] = ACTIONS(81),
    [anon_sym_do] = ACTIONS(81),
    [anon_sym_BANG] = ACTIONS(81),
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
  [378] = {
    [sym__layout_semicolon] = ACTIONS(569),
    [anon_sym_SEMI] = ACTIONS(489),
    [anon_sym_where] = ACTIONS(489),
    [anon_sym_do] = ACTIONS(489),
    [sym__variable_pattern] = ACTIONS(571),
    [sym__constructor_pattern] = ACTIONS(571),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(571),
    [anon_sym_SQUOTE] = ACTIONS(489),
    [anon_sym_DQUOTE] = ACTIONS(489),
    [sym__integer_literal] = ACTIONS(489),
    [sym__octal_literal] = ACTIONS(489),
    [sym__hexidecimal_literal] = ACTIONS(489),
  },
  [379] = {
    [aux_sym_labels_repeat1] = STATE(536),
    [sym__layout_semicolon] = ACTIONS(573),
    [anon_sym_SEMI] = ACTIONS(493),
    [anon_sym_COMMA] = ACTIONS(1008),
    [anon_sym_where] = ACTIONS(493),
    [anon_sym_do] = ACTIONS(493),
    [sym__variable_pattern] = ACTIONS(577),
    [sym__constructor_pattern] = ACTIONS(577),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(577),
    [anon_sym_SQUOTE] = ACTIONS(493),
    [anon_sym_DQUOTE] = ACTIONS(493),
    [sym__integer_literal] = ACTIONS(493),
    [sym__octal_literal] = ACTIONS(493),
    [sym__hexidecimal_literal] = ACTIONS(493),
  },
  [380] = {
    [sym__layout_semicolon] = ACTIONS(579),
    [anon_sym_SEMI] = ACTIONS(495),
    [anon_sym_where] = ACTIONS(495),
    [anon_sym_do] = ACTIONS(495),
    [anon_sym_BANG] = ACTIONS(495),
    [sym__variable_pattern] = ACTIONS(497),
    [sym__constructor_pattern] = ACTIONS(497),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(497),
    [anon_sym_SQUOTE] = ACTIONS(495),
    [anon_sym_DQUOTE] = ACTIONS(495),
    [sym__integer_literal] = ACTIONS(495),
    [sym__octal_literal] = ACTIONS(495),
    [sym__hexidecimal_literal] = ACTIONS(495),
  },
  [381] = {
    [sym__layout_semicolon] = ACTIONS(581),
    [anon_sym_SEMI] = ACTIONS(499),
    [anon_sym_where] = ACTIONS(499),
    [anon_sym_do] = ACTIONS(499),
    [sym__variable_pattern] = ACTIONS(501),
    [sym__constructor_pattern] = ACTIONS(501),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(501),
    [anon_sym_SQUOTE] = ACTIONS(499),
    [anon_sym_DQUOTE] = ACTIONS(499),
    [sym__integer_literal] = ACTIONS(499),
    [sym__octal_literal] = ACTIONS(499),
    [sym__hexidecimal_literal] = ACTIONS(499),
  },
  [382] = {
    [sym__layout_semicolon] = ACTIONS(579),
    [anon_sym_SEMI] = ACTIONS(495),
    [anon_sym_EQ] = ACTIONS(1010),
    [anon_sym_where] = ACTIONS(495),
    [anon_sym_do] = ACTIONS(495),
    [anon_sym_BANG] = ACTIONS(495),
    [sym__variable_pattern] = ACTIONS(497),
    [sym__constructor_pattern] = ACTIONS(497),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(497),
    [anon_sym_SQUOTE] = ACTIONS(495),
    [anon_sym_DQUOTE] = ACTIONS(495),
    [sym__integer_literal] = ACTIONS(495),
    [sym__octal_literal] = ACTIONS(495),
    [sym__hexidecimal_literal] = ACTIONS(495),
  },
  [383] = {
    [sym__layout_semicolon] = ACTIONS(171),
    [anon_sym_SEMI] = ACTIONS(173),
    [anon_sym_EQ] = ACTIONS(173),
    [anon_sym_where] = ACTIONS(173),
    [anon_sym_do] = ACTIONS(173),
    [anon_sym_BANG] = ACTIONS(173),
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
  [384] = {
    [sym_strict] = STATE(538),
    [sym__identifier] = STATE(538),
    [sym_variable_identifier] = STATE(383),
    [sym_constructor_identifier] = STATE(383),
    [sym__layout_semicolon] = ACTIONS(569),
    [anon_sym_SEMI] = ACTIONS(489),
    [anon_sym_where] = ACTIONS(489),
    [anon_sym_do] = ACTIONS(489),
    [anon_sym_BANG] = ACTIONS(667),
    [sym__variable_pattern] = ACTIONS(365),
    [sym__constructor_pattern] = ACTIONS(669),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(571),
    [anon_sym_SQUOTE] = ACTIONS(489),
    [anon_sym_DQUOTE] = ACTIONS(489),
    [sym__integer_literal] = ACTIONS(489),
    [sym__octal_literal] = ACTIONS(489),
    [sym__hexidecimal_literal] = ACTIONS(489),
  },
  [385] = {
    [sym__literal] = STATE(539),
    [sym_integer] = STATE(208),
    [sym_char] = STATE(208),
    [sym_string] = STATE(208),
    [sym__layout_semicolon] = ACTIONS(569),
    [anon_sym_SEMI] = ACTIONS(489),
    [anon_sym_where] = ACTIONS(489),
    [anon_sym_do] = ACTIONS(489),
    [sym__variable_pattern] = ACTIONS(571),
    [sym__constructor_pattern] = ACTIONS(571),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(369),
    [anon_sym_SQUOTE] = ACTIONS(371),
    [anon_sym_DQUOTE] = ACTIONS(373),
    [sym__integer_literal] = ACTIONS(375),
    [sym__octal_literal] = ACTIONS(375),
    [sym__hexidecimal_literal] = ACTIONS(375),
  },
  [386] = {
    [sym__layout_semicolon] = ACTIONS(1012),
    [anon_sym_SEMI] = ACTIONS(1014),
    [sym_comment] = ACTIONS(5),
  },
  [387] = {
    [sym__layout_semicolon] = ACTIONS(1016),
    [anon_sym_SEMI] = ACTIONS(1018),
    [anon_sym_where] = ACTIONS(1018),
    [anon_sym_do] = ACTIONS(1018),
    [sym__variable_pattern] = ACTIONS(1020),
    [sym__constructor_pattern] = ACTIONS(1020),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1020),
    [anon_sym_SQUOTE] = ACTIONS(1018),
    [anon_sym_DQUOTE] = ACTIONS(1018),
    [sym__integer_literal] = ACTIONS(1018),
    [sym__octal_literal] = ACTIONS(1018),
    [sym__hexidecimal_literal] = ACTIONS(1018),
  },
  [388] = {
    [sym__literal] = STATE(540),
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
  [389] = {
    [sym__function_pattern] = STATE(541),
    [sym_label_pattern] = STATE(86),
    [sym_irrefutable_pattern] = STATE(86),
    [sym_list_pattern] = STATE(86),
    [sym_tuple_pattern] = STATE(86),
    [sym_parenthesized_pattern] = STATE(86),
    [sym__pattern] = STATE(542),
    [sym_negative_literal] = STATE(223),
    [sym_as_pattern] = STATE(86),
    [sym_wildcard] = STATE(86),
    [sym__variable] = STATE(224),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym_constructor] = STATE(223),
    [sym__literal] = STATE(86),
    [sym__identifier] = STATE(94),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(225),
    [sym_integer] = STATE(89),
    [sym_char] = STATE(89),
    [sym_string] = STATE(89),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_TILDE] = ACTIONS(381),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym_DASH] = ACTIONS(383),
    [anon_sym__] = ACTIONS(151),
    [sym_list_constructor] = ACTIONS(153),
    [sym__variable_pattern] = ACTIONS(155),
    [sym__constructor_pattern] = ACTIONS(385),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [390] = {
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
  [391] = {
    [anon_sym_LPAREN] = ACTIONS(229),
    [anon_sym_TILDE] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(229),
    [anon_sym_DASH] = ACTIONS(229),
    [anon_sym__] = ACTIONS(229),
    [sym_list_constructor] = ACTIONS(229),
    [anon_sym_BANG] = ACTIONS(229),
    [sym__variable_pattern] = ACTIONS(1026),
    [sym__constructor_pattern] = ACTIONS(1026),
    [anon_sym_DOT] = ACTIONS(229),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1026),
    [anon_sym_SQUOTE] = ACTIONS(229),
    [anon_sym_DQUOTE] = ACTIONS(229),
    [anon_sym_POUND] = ACTIONS(229),
    [anon_sym_DOLLAR] = ACTIONS(229),
    [anon_sym_PERCENT] = ACTIONS(229),
    [anon_sym_AMP] = ACTIONS(229),
    [anon_sym_1] = ACTIONS(229),
    [anon_sym_PLUS] = ACTIONS(229),
    [anon_sym_SLASH] = ACTIONS(229),
    [anon_sym_LT] = ACTIONS(229),
    [anon_sym_GT] = ACTIONS(229),
    [anon_sym_QMARK] = ACTIONS(229),
    [anon_sym_CARET] = ACTIONS(229),
    [sym__integer_literal] = ACTIONS(229),
    [sym__octal_literal] = ACTIONS(229),
    [sym__hexidecimal_literal] = ACTIONS(229),
  },
  [392] = {
    [sym__identifier] = STATE(543),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [393] = {
    [sym__constructor_symbol] = STATE(545),
    [aux_sym_constructor_symbol_repeat1] = STATE(546),
    [anon_sym_LPAREN] = ACTIONS(233),
    [anon_sym_TILDE] = ACTIONS(233),
    [anon_sym_LBRACK] = ACTIONS(233),
    [anon_sym_DASH] = ACTIONS(233),
    [anon_sym__] = ACTIONS(233),
    [anon_sym_COLON] = ACTIONS(1028),
    [sym_list_constructor] = ACTIONS(233),
    [anon_sym_BANG] = ACTIONS(1028),
    [sym__variable_pattern] = ACTIONS(1030),
    [sym__constructor_pattern] = ACTIONS(1030),
    [anon_sym_DOT] = ACTIONS(1028),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1030),
    [anon_sym_SQUOTE] = ACTIONS(233),
    [anon_sym_DQUOTE] = ACTIONS(233),
    [anon_sym_POUND] = ACTIONS(1028),
    [anon_sym_DOLLAR] = ACTIONS(1028),
    [anon_sym_PERCENT] = ACTIONS(1028),
    [anon_sym_AMP] = ACTIONS(1028),
    [anon_sym_1] = ACTIONS(1028),
    [anon_sym_PLUS] = ACTIONS(1028),
    [anon_sym_SLASH] = ACTIONS(1028),
    [anon_sym_LT] = ACTIONS(1028),
    [anon_sym_GT] = ACTIONS(1028),
    [anon_sym_QMARK] = ACTIONS(1028),
    [anon_sym_CARET] = ACTIONS(1028),
    [sym__integer_literal] = ACTIONS(233),
    [sym__octal_literal] = ACTIONS(233),
    [sym__hexidecimal_literal] = ACTIONS(233),
  },
  [394] = {
    [sym__function_pattern] = STATE(547),
    [sym_label_pattern] = STATE(86),
    [sym_irrefutable_pattern] = STATE(86),
    [sym_list_pattern] = STATE(86),
    [sym_tuple_pattern] = STATE(86),
    [sym_parenthesized_pattern] = STATE(86),
    [sym__pattern] = STATE(548),
    [sym_negative_literal] = STATE(223),
    [sym_as_pattern] = STATE(86),
    [sym_wildcard] = STATE(86),
    [sym__variable] = STATE(224),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym_constructor] = STATE(223),
    [sym__literal] = STATE(86),
    [sym__identifier] = STATE(94),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(225),
    [sym_integer] = STATE(89),
    [sym_char] = STATE(89),
    [sym_string] = STATE(89),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_TILDE] = ACTIONS(381),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym_DASH] = ACTIONS(383),
    [anon_sym__] = ACTIONS(151),
    [sym_list_constructor] = ACTIONS(153),
    [sym__variable_pattern] = ACTIONS(155),
    [sym__constructor_pattern] = ACTIONS(385),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [395] = {
    [anon_sym_LPAREN] = ACTIONS(245),
    [anon_sym_TILDE] = ACTIONS(245),
    [anon_sym_LBRACK] = ACTIONS(245),
    [anon_sym_DASH] = ACTIONS(245),
    [anon_sym__] = ACTIONS(245),
    [sym_list_constructor] = ACTIONS(245),
    [sym__variable_pattern] = ACTIONS(1032),
    [sym__constructor_pattern] = ACTIONS(1032),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1032),
    [anon_sym_SQUOTE] = ACTIONS(245),
    [anon_sym_DQUOTE] = ACTIONS(245),
    [sym__integer_literal] = ACTIONS(245),
    [sym__octal_literal] = ACTIONS(245),
    [sym__hexidecimal_literal] = ACTIONS(245),
  },
  [396] = {
    [sym__variable_symbol] = STATE(549),
    [aux_sym_variable_symbol_repeat1] = STATE(550),
    [anon_sym_LPAREN] = ACTIONS(249),
    [anon_sym_TILDE] = ACTIONS(249),
    [anon_sym_LBRACK] = ACTIONS(249),
    [anon_sym_DASH] = ACTIONS(677),
    [anon_sym__] = ACTIONS(249),
    [sym_list_constructor] = ACTIONS(249),
    [anon_sym_BANG] = ACTIONS(677),
    [sym__variable_pattern] = ACTIONS(1034),
    [sym__constructor_pattern] = ACTIONS(1034),
    [anon_sym_DOT] = ACTIONS(677),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1034),
    [anon_sym_SQUOTE] = ACTIONS(249),
    [anon_sym_DQUOTE] = ACTIONS(249),
    [anon_sym_POUND] = ACTIONS(677),
    [anon_sym_DOLLAR] = ACTIONS(677),
    [anon_sym_PERCENT] = ACTIONS(677),
    [anon_sym_AMP] = ACTIONS(677),
    [anon_sym_1] = ACTIONS(677),
    [anon_sym_PLUS] = ACTIONS(677),
    [anon_sym_SLASH] = ACTIONS(677),
    [anon_sym_LT] = ACTIONS(677),
    [anon_sym_GT] = ACTIONS(677),
    [anon_sym_QMARK] = ACTIONS(677),
    [anon_sym_CARET] = ACTIONS(677),
    [sym__integer_literal] = ACTIONS(249),
    [sym__octal_literal] = ACTIONS(249),
    [sym__hexidecimal_literal] = ACTIONS(249),
  },
  [397] = {
    [anon_sym_COMMA] = ACTIONS(1036),
    [anon_sym_RPAREN] = ACTIONS(1038),
    [sym_comment] = ACTIONS(5),
  },
  [398] = {
    [sym__function_pattern] = STATE(403),
    [sym_label_pattern] = STATE(86),
    [sym_irrefutable_pattern] = STATE(86),
    [sym_list_pattern] = STATE(86),
    [sym_tuple_pattern] = STATE(86),
    [sym_parenthesized_pattern] = STATE(86),
    [sym_as_pattern] = STATE(86),
    [sym_wildcard] = STATE(86),
    [sym__variable] = STATE(224),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym__literal] = STATE(86),
    [sym__identifier] = STATE(94),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(133),
    [sym_integer] = STATE(89),
    [sym_char] = STATE(89),
    [sym_string] = STATE(89),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_TILDE] = ACTIONS(381),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym__] = ACTIONS(151),
    [sym_list_constructor] = ACTIONS(153),
    [sym__variable_pattern] = ACTIONS(155),
    [sym__constructor_pattern] = ACTIONS(389),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [399] = {
    [anon_sym_LPAREN] = ACTIONS(1040),
    [anon_sym_COMMA] = ACTIONS(1040),
    [anon_sym_RPAREN] = ACTIONS(1040),
    [anon_sym_EQ] = ACTIONS(1040),
    [anon_sym_TILDE] = ACTIONS(1040),
    [anon_sym_LBRACK] = ACTIONS(1040),
    [anon_sym_RBRACK] = ACTIONS(1040),
    [anon_sym_DASH] = ACTIONS(1040),
    [anon_sym__] = ACTIONS(1040),
    [anon_sym_BQUOTE] = ACTIONS(1040),
    [anon_sym_COLON] = ACTIONS(1040),
    [sym_list_constructor] = ACTIONS(1040),
    [anon_sym_BANG] = ACTIONS(1040),
    [sym__variable_pattern] = ACTIONS(1042),
    [sym__constructor_pattern] = ACTIONS(1042),
    [anon_sym_DOT] = ACTIONS(1040),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1042),
    [anon_sym_SQUOTE] = ACTIONS(1040),
    [anon_sym_DQUOTE] = ACTIONS(1040),
    [anon_sym_POUND] = ACTIONS(1040),
    [anon_sym_DOLLAR] = ACTIONS(1040),
    [anon_sym_PERCENT] = ACTIONS(1040),
    [anon_sym_AMP] = ACTIONS(1040),
    [anon_sym_1] = ACTIONS(1040),
    [anon_sym_PLUS] = ACTIONS(1040),
    [anon_sym_SLASH] = ACTIONS(1040),
    [anon_sym_LT] = ACTIONS(1040),
    [anon_sym_GT] = ACTIONS(1040),
    [anon_sym_QMARK] = ACTIONS(1040),
    [anon_sym_CARET] = ACTIONS(1040),
    [sym__integer_literal] = ACTIONS(1040),
    [sym__octal_literal] = ACTIONS(1040),
    [sym__hexidecimal_literal] = ACTIONS(1040),
  },
  [400] = {
    [sym__function_pattern] = STATE(403),
    [sym_label_pattern] = STATE(86),
    [sym_irrefutable_pattern] = STATE(86),
    [sym_list_pattern] = STATE(86),
    [sym_tuple_pattern] = STATE(86),
    [sym_parenthesized_pattern] = STATE(86),
    [sym_as_pattern] = STATE(86),
    [sym_wildcard] = STATE(86),
    [sym__variable] = STATE(230),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym__literal] = STATE(86),
    [sym__identifier] = STATE(94),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(96),
    [sym_integer] = STATE(89),
    [sym_char] = STATE(89),
    [sym_string] = STATE(89),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_TILDE] = ACTIONS(387),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym__] = ACTIONS(151),
    [sym_list_constructor] = ACTIONS(153),
    [sym__variable_pattern] = ACTIONS(155),
    [sym__constructor_pattern] = ACTIONS(389),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [401] = {
    [anon_sym_RBRACE] = ACTIONS(601),
    [anon_sym_LPAREN] = ACTIONS(601),
    [anon_sym_COMMA] = ACTIONS(601),
    [anon_sym_RPAREN] = ACTIONS(601),
    [anon_sym_EQ] = ACTIONS(601),
    [anon_sym_TILDE] = ACTIONS(601),
    [anon_sym_LBRACK] = ACTIONS(601),
    [anon_sym_RBRACK] = ACTIONS(601),
    [anon_sym_DASH] = ACTIONS(601),
    [anon_sym__] = ACTIONS(601),
    [anon_sym_BQUOTE] = ACTIONS(601),
    [anon_sym_COLON] = ACTIONS(601),
    [sym_list_constructor] = ACTIONS(601),
    [anon_sym_BANG] = ACTIONS(601),
    [sym__variable_pattern] = ACTIONS(603),
    [sym__constructor_pattern] = ACTIONS(603),
    [anon_sym_DOT] = ACTIONS(601),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(603),
    [anon_sym_SQUOTE] = ACTIONS(601),
    [anon_sym_DQUOTE] = ACTIONS(601),
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
    [sym__integer_literal] = ACTIONS(601),
    [sym__octal_literal] = ACTIONS(601),
    [sym__hexidecimal_literal] = ACTIONS(601),
  },
  [402] = {
    [anon_sym_RBRACE] = ACTIONS(633),
    [anon_sym_LPAREN] = ACTIONS(633),
    [anon_sym_COMMA] = ACTIONS(633),
    [anon_sym_RPAREN] = ACTIONS(633),
    [anon_sym_EQ] = ACTIONS(633),
    [anon_sym_TILDE] = ACTIONS(633),
    [anon_sym_LBRACK] = ACTIONS(633),
    [anon_sym_RBRACK] = ACTIONS(633),
    [anon_sym_DASH] = ACTIONS(633),
    [anon_sym__] = ACTIONS(633),
    [anon_sym_BQUOTE] = ACTIONS(633),
    [anon_sym_COLON] = ACTIONS(633),
    [sym_list_constructor] = ACTIONS(633),
    [anon_sym_BANG] = ACTIONS(633),
    [sym__variable_pattern] = ACTIONS(635),
    [sym__constructor_pattern] = ACTIONS(635),
    [anon_sym_DOT] = ACTIONS(633),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(635),
    [anon_sym_SQUOTE] = ACTIONS(633),
    [anon_sym_DQUOTE] = ACTIONS(633),
    [anon_sym_POUND] = ACTIONS(633),
    [anon_sym_DOLLAR] = ACTIONS(633),
    [anon_sym_PERCENT] = ACTIONS(633),
    [anon_sym_AMP] = ACTIONS(633),
    [anon_sym_1] = ACTIONS(633),
    [anon_sym_PLUS] = ACTIONS(633),
    [anon_sym_SLASH] = ACTIONS(633),
    [anon_sym_LT] = ACTIONS(633),
    [anon_sym_GT] = ACTIONS(633),
    [anon_sym_QMARK] = ACTIONS(633),
    [anon_sym_CARET] = ACTIONS(633),
    [sym__integer_literal] = ACTIONS(633),
    [sym__octal_literal] = ACTIONS(633),
    [sym__hexidecimal_literal] = ACTIONS(633),
  },
  [403] = {
    [anon_sym_LPAREN] = ACTIONS(1044),
    [anon_sym_COMMA] = ACTIONS(1044),
    [anon_sym_RPAREN] = ACTIONS(1044),
    [anon_sym_EQ] = ACTIONS(1044),
    [anon_sym_TILDE] = ACTIONS(1044),
    [anon_sym_LBRACK] = ACTIONS(1044),
    [anon_sym_RBRACK] = ACTIONS(1044),
    [anon_sym_DASH] = ACTIONS(1044),
    [anon_sym__] = ACTIONS(1044),
    [anon_sym_BQUOTE] = ACTIONS(1044),
    [anon_sym_COLON] = ACTIONS(1044),
    [sym_list_constructor] = ACTIONS(1044),
    [anon_sym_BANG] = ACTIONS(1044),
    [sym__variable_pattern] = ACTIONS(1046),
    [sym__constructor_pattern] = ACTIONS(1046),
    [anon_sym_DOT] = ACTIONS(1044),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1046),
    [anon_sym_SQUOTE] = ACTIONS(1044),
    [anon_sym_DQUOTE] = ACTIONS(1044),
    [anon_sym_POUND] = ACTIONS(1044),
    [anon_sym_DOLLAR] = ACTIONS(1044),
    [anon_sym_PERCENT] = ACTIONS(1044),
    [anon_sym_AMP] = ACTIONS(1044),
    [anon_sym_1] = ACTIONS(1044),
    [anon_sym_PLUS] = ACTIONS(1044),
    [anon_sym_SLASH] = ACTIONS(1044),
    [anon_sym_LT] = ACTIONS(1044),
    [anon_sym_GT] = ACTIONS(1044),
    [anon_sym_QMARK] = ACTIONS(1044),
    [anon_sym_CARET] = ACTIONS(1044),
    [sym__integer_literal] = ACTIONS(1044),
    [sym__octal_literal] = ACTIONS(1044),
    [sym__hexidecimal_literal] = ACTIONS(1044),
  },
  [404] = {
    [anon_sym_LPAREN] = ACTIONS(1048),
    [anon_sym_COMMA] = ACTIONS(1048),
    [anon_sym_RPAREN] = ACTIONS(1048),
    [anon_sym_EQ] = ACTIONS(1048),
    [anon_sym_TILDE] = ACTIONS(1048),
    [anon_sym_LBRACK] = ACTIONS(1048),
    [anon_sym_RBRACK] = ACTIONS(1048),
    [anon_sym_DASH] = ACTIONS(1048),
    [anon_sym__] = ACTIONS(1048),
    [anon_sym_BQUOTE] = ACTIONS(1048),
    [anon_sym_COLON] = ACTIONS(1048),
    [sym_list_constructor] = ACTIONS(1048),
    [anon_sym_BANG] = ACTIONS(1048),
    [sym__variable_pattern] = ACTIONS(1050),
    [sym__constructor_pattern] = ACTIONS(1050),
    [anon_sym_DOT] = ACTIONS(1048),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1050),
    [anon_sym_SQUOTE] = ACTIONS(1048),
    [anon_sym_DQUOTE] = ACTIONS(1048),
    [anon_sym_POUND] = ACTIONS(1048),
    [anon_sym_DOLLAR] = ACTIONS(1048),
    [anon_sym_PERCENT] = ACTIONS(1048),
    [anon_sym_AMP] = ACTIONS(1048),
    [anon_sym_1] = ACTIONS(1048),
    [anon_sym_PLUS] = ACTIONS(1048),
    [anon_sym_SLASH] = ACTIONS(1048),
    [anon_sym_LT] = ACTIONS(1048),
    [anon_sym_GT] = ACTIONS(1048),
    [anon_sym_QMARK] = ACTIONS(1048),
    [anon_sym_CARET] = ACTIONS(1048),
    [sym__integer_literal] = ACTIONS(1048),
    [sym__octal_literal] = ACTIONS(1048),
    [sym__hexidecimal_literal] = ACTIONS(1048),
  },
  [405] = {
    [anon_sym_RBRACE] = ACTIONS(1052),
    [sym_comment] = ACTIONS(5),
  },
  [406] = {
    [aux_sym_labels_repeat1] = STATE(554),
    [anon_sym_RBRACE] = ACTIONS(493),
    [anon_sym_COMMA] = ACTIONS(1054),
    [sym_comment] = ACTIONS(5),
  },
  [407] = {
    [anon_sym_EQ] = ACTIONS(821),
    [sym_comment] = ACTIONS(5),
  },
  [408] = {
    [sym_type] = STATE(556),
    [sym__generic_type_constructor] = STATE(415),
    [sym_tupling_constructor] = STATE(411),
    [sym_tuple] = STATE(415),
    [sym_list] = STATE(415),
    [sym_parenthesized_constructor] = STATE(415),
    [sym_variable_identifier] = STATE(417),
    [sym__type_constructors] = STATE(411),
    [sym_qualified_type_constructor] = STATE(418),
    [anon_sym_LPAREN] = ACTIONS(705),
    [anon_sym_COMMA] = ACTIONS(1056),
    [anon_sym_LBRACK] = ACTIONS(709),
    [sym_unit_type] = ACTIONS(711),
    [sym_list_constructor] = ACTIONS(711),
    [sym_function_constructor] = ACTIONS(711),
    [sym__variable_pattern] = ACTIONS(483),
    [sym__constructor_pattern] = ACTIONS(946),
    [sym_module_identifier] = ACTIONS(715),
    [sym_comment] = ACTIONS(5),
  },
  [409] = {
    [aux_sym_tupling_constructor_repeat1] = STATE(559),
    [anon_sym_COMMA] = ACTIONS(1058),
    [anon_sym_RPAREN] = ACTIONS(1060),
    [sym_comment] = ACTIONS(5),
  },
  [410] = {
    [sym_type] = STATE(422),
    [sym__generic_type_constructor] = STATE(423),
    [sym_tupling_constructor] = STATE(411),
    [sym_tuple] = STATE(423),
    [sym_list] = STATE(423),
    [sym_parenthesized_constructor] = STATE(423),
    [sym_variable_identifier] = STATE(424),
    [sym__type_constructors] = STATE(411),
    [sym_qualified_type_constructor] = STATE(418),
    [aux_sym_list_repeat1] = STATE(560),
    [anon_sym_LPAREN] = ACTIONS(705),
    [anon_sym_LBRACK] = ACTIONS(709),
    [sym_unit_type] = ACTIONS(711),
    [sym_list_constructor] = ACTIONS(711),
    [sym_function_constructor] = ACTIONS(711),
    [sym__variable_pattern] = ACTIONS(717),
    [sym__constructor_pattern] = ACTIONS(719),
    [sym_module_identifier] = ACTIONS(721),
    [sym_comment] = ACTIONS(5),
  },
  [411] = {
    [anon_sym_LPAREN] = ACTIONS(725),
    [anon_sym_COMMA] = ACTIONS(725),
    [anon_sym_RPAREN] = ACTIONS(725),
    [anon_sym_LBRACK] = ACTIONS(725),
    [anon_sym_RBRACK] = ACTIONS(725),
    [anon_sym_DASH_GT] = ACTIONS(725),
    [sym_unit_type] = ACTIONS(725),
    [sym_list_constructor] = ACTIONS(725),
    [sym_function_constructor] = ACTIONS(725),
    [sym__variable_pattern] = ACTIONS(725),
    [sym__constructor_pattern] = ACTIONS(1062),
    [sym_module_identifier] = ACTIONS(1062),
    [sym_comment] = ACTIONS(5),
  },
  [412] = {
    [sym_variable_identifier] = STATE(339),
    [aux_sym_simple_type_repeat1] = STATE(561),
    [anon_sym_LBRACE] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_COMMA] = ACTIONS(1064),
    [anon_sym_RPAREN] = ACTIONS(1064),
    [anon_sym_DASH_GT] = ACTIONS(729),
    [anon_sym_BANG] = ACTIONS(81),
    [sym__variable_pattern] = ACTIONS(81),
    [sym__constructor_pattern] = ACTIONS(203),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(203),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [sym__integer_literal] = ACTIONS(81),
    [sym__octal_literal] = ACTIONS(81),
    [sym__hexidecimal_literal] = ACTIONS(81),
  },
  [413] = {
    [sym_constructor_identifier] = STATE(563),
    [aux_sym_qualified_type_constructor_repeat1] = STATE(564),
    [sym__constructor_pattern] = ACTIONS(69),
    [anon_sym_DOT] = ACTIONS(1067),
    [sym_comment] = ACTIONS(5),
  },
  [414] = {
    [aux_sym_tuple_repeat1] = STATE(567),
    [anon_sym_COMMA] = ACTIONS(1069),
    [anon_sym_RPAREN] = ACTIONS(1071),
    [sym_comment] = ACTIONS(5),
  },
  [415] = {
    [anon_sym_COMMA] = ACTIONS(741),
    [anon_sym_RPAREN] = ACTIONS(741),
    [anon_sym_DASH_GT] = ACTIONS(1073),
    [sym_comment] = ACTIONS(5),
  },
  [416] = {
    [aux_sym_context_repeat1] = STATE(570),
    [anon_sym_COMMA] = ACTIONS(465),
    [anon_sym_RPAREN] = ACTIONS(1075),
    [sym_comment] = ACTIONS(5),
  },
  [417] = {
    [anon_sym_COMMA] = ACTIONS(749),
    [anon_sym_RPAREN] = ACTIONS(749),
    [anon_sym_DASH_GT] = ACTIONS(1077),
    [sym_comment] = ACTIONS(5),
  },
  [418] = {
    [anon_sym_LPAREN] = ACTIONS(755),
    [anon_sym_COMMA] = ACTIONS(755),
    [anon_sym_RPAREN] = ACTIONS(755),
    [anon_sym_LBRACK] = ACTIONS(755),
    [anon_sym_RBRACK] = ACTIONS(755),
    [anon_sym_DASH_GT] = ACTIONS(755),
    [sym_unit_type] = ACTIONS(755),
    [sym_list_constructor] = ACTIONS(755),
    [sym_function_constructor] = ACTIONS(755),
    [sym__variable_pattern] = ACTIONS(755),
    [sym__constructor_pattern] = ACTIONS(1079),
    [sym_module_identifier] = ACTIONS(1079),
    [sym_comment] = ACTIONS(5),
  },
  [419] = {
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
  [420] = {
    [sym_variable_identifier] = STATE(339),
    [aux_sym_simple_type_repeat1] = STATE(572),
    [anon_sym_LPAREN] = ACTIONS(729),
    [anon_sym_LBRACK] = ACTIONS(729),
    [anon_sym_RBRACK] = ACTIONS(729),
    [anon_sym_DASH_GT] = ACTIONS(729),
    [sym_unit_type] = ACTIONS(729),
    [sym_list_constructor] = ACTIONS(729),
    [sym_function_constructor] = ACTIONS(729),
    [sym__variable_pattern] = ACTIONS(717),
    [sym__constructor_pattern] = ACTIONS(1081),
    [sym_module_identifier] = ACTIONS(1081),
    [sym_comment] = ACTIONS(5),
  },
  [421] = {
    [sym_constructor_identifier] = STATE(575),
    [aux_sym_qualified_type_constructor_repeat1] = STATE(576),
    [sym__constructor_pattern] = ACTIONS(1083),
    [anon_sym_DOT] = ACTIONS(1085),
    [sym_comment] = ACTIONS(5),
  },
  [422] = {
    [anon_sym_LPAREN] = ACTIONS(1087),
    [anon_sym_LBRACK] = ACTIONS(1087),
    [anon_sym_RBRACK] = ACTIONS(1087),
    [sym_unit_type] = ACTIONS(1087),
    [sym_list_constructor] = ACTIONS(1087),
    [sym_function_constructor] = ACTIONS(1087),
    [sym__variable_pattern] = ACTIONS(1087),
    [sym__constructor_pattern] = ACTIONS(1089),
    [sym_module_identifier] = ACTIONS(1089),
    [sym_comment] = ACTIONS(5),
  },
  [423] = {
    [anon_sym_LPAREN] = ACTIONS(741),
    [anon_sym_LBRACK] = ACTIONS(741),
    [anon_sym_RBRACK] = ACTIONS(741),
    [anon_sym_DASH_GT] = ACTIONS(1091),
    [sym_unit_type] = ACTIONS(741),
    [sym_list_constructor] = ACTIONS(741),
    [sym_function_constructor] = ACTIONS(741),
    [sym__variable_pattern] = ACTIONS(741),
    [sym__constructor_pattern] = ACTIONS(1093),
    [sym_module_identifier] = ACTIONS(1093),
    [sym_comment] = ACTIONS(5),
  },
  [424] = {
    [anon_sym_LPAREN] = ACTIONS(749),
    [anon_sym_LBRACK] = ACTIONS(749),
    [anon_sym_RBRACK] = ACTIONS(749),
    [anon_sym_DASH_GT] = ACTIONS(1095),
    [sym_unit_type] = ACTIONS(749),
    [sym_list_constructor] = ACTIONS(749),
    [sym_function_constructor] = ACTIONS(749),
    [sym__variable_pattern] = ACTIONS(749),
    [sym__constructor_pattern] = ACTIONS(1097),
    [sym_module_identifier] = ACTIONS(1097),
    [sym_comment] = ACTIONS(5),
  },
  [425] = {
    [sym_type] = STATE(580),
    [sym__generic_type_constructor] = STATE(423),
    [sym_tupling_constructor] = STATE(411),
    [sym_tuple] = STATE(423),
    [sym_list] = STATE(423),
    [sym_parenthesized_constructor] = STATE(423),
    [sym_variable_identifier] = STATE(424),
    [sym__type_constructors] = STATE(411),
    [sym_qualified_type_constructor] = STATE(418),
    [anon_sym_LPAREN] = ACTIONS(705),
    [anon_sym_LBRACK] = ACTIONS(709),
    [anon_sym_RBRACK] = ACTIONS(1099),
    [sym_unit_type] = ACTIONS(711),
    [sym_list_constructor] = ACTIONS(711),
    [sym_function_constructor] = ACTIONS(711),
    [sym__variable_pattern] = ACTIONS(717),
    [sym__constructor_pattern] = ACTIONS(719),
    [sym_module_identifier] = ACTIONS(721),
    [sym_comment] = ACTIONS(5),
  },
  [426] = {
    [sym__layout_semicolon] = ACTIONS(73),
    [anon_sym_SEMI] = ACTIONS(75),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_DASH_GT] = ACTIONS(75),
    [anon_sym_BANG] = ACTIONS(75),
    [sym__variable_pattern] = ACTIONS(75),
    [sym__constructor_pattern] = ACTIONS(77),
    [sym_comment] = ACTIONS(5),
  },
  [427] = {
    [sym__layout_semicolon] = ACTIONS(1101),
    [anon_sym_SEMI] = ACTIONS(934),
    [anon_sym_DASH_GT] = ACTIONS(934),
    [sym__variable_pattern] = ACTIONS(934),
    [sym_comment] = ACTIONS(5),
  },
  [428] = {
    [sym_variable_identifier] = STATE(581),
    [sym__layout_semicolon] = ACTIONS(1103),
    [anon_sym_SEMI] = ACTIONS(1105),
    [anon_sym_DASH_GT] = ACTIONS(1105),
    [sym__variable_pattern] = ACTIONS(948),
    [sym_comment] = ACTIONS(5),
  },
  [429] = {
    [sym__layout_semicolon] = ACTIONS(79),
    [anon_sym_SEMI] = ACTIONS(81),
    [anon_sym_EQ] = ACTIONS(81),
    [anon_sym_DASH_GT] = ACTIONS(81),
    [anon_sym_BANG] = ACTIONS(81),
    [sym__variable_pattern] = ACTIONS(81),
    [sym__constructor_pattern] = ACTIONS(203),
    [sym_comment] = ACTIONS(5),
  },
  [430] = {
    [sym_constructor_identifier] = STATE(583),
    [sym__constructor_pattern] = ACTIONS(731),
    [sym_module_identifier] = ACTIONS(1107),
    [sym_comment] = ACTIONS(5),
  },
  [431] = {
    [sym_variable_identifier] = STATE(427),
    [aux_sym_simple_type_repeat1] = STATE(584),
    [sym__layout_semicolon] = ACTIONS(1109),
    [anon_sym_SEMI] = ACTIONS(1111),
    [anon_sym_DASH_GT] = ACTIONS(1111),
    [sym__variable_pattern] = ACTIONS(948),
    [sym_comment] = ACTIONS(5),
  },
  [432] = {
    [sym_constructor_identifier] = STATE(583),
    [sym__constructor_pattern] = ACTIONS(731),
    [anon_sym_DOT] = ACTIONS(1113),
    [sym_comment] = ACTIONS(5),
  },
  [433] = {
    [sym_type] = STATE(586),
    [sym__generic_type_constructor] = STATE(243),
    [sym_tupling_constructor] = STATE(239),
    [sym_tuple] = STATE(243),
    [sym_list] = STATE(243),
    [sym_parenthesized_constructor] = STATE(243),
    [sym_variable_identifier] = STATE(246),
    [sym__type_constructors] = STATE(239),
    [sym_qualified_type_constructor] = STATE(248),
    [anon_sym_LPAREN] = ACTIONS(590),
    [anon_sym_LBRACK] = ACTIONS(415),
    [sym_unit_type] = ACTIONS(417),
    [sym_list_constructor] = ACTIONS(417),
    [sym_function_constructor] = ACTIONS(417),
    [sym__variable_pattern] = ACTIONS(419),
    [sym__constructor_pattern] = ACTIONS(592),
    [sym_module_identifier] = ACTIONS(423),
    [sym_comment] = ACTIONS(5),
  },
  [434] = {
    [sym__layout_semicolon] = ACTIONS(1115),
    [anon_sym_SEMI] = ACTIONS(1117),
    [sym_comment] = ACTIONS(5),
  },
  [435] = {
    [anon_sym_LPAREN] = ACTIONS(1119),
    [anon_sym_LBRACK] = ACTIONS(1119),
    [sym_unit_type] = ACTIONS(1119),
    [sym_list_constructor] = ACTIONS(1119),
    [sym_function_constructor] = ACTIONS(1119),
    [sym__variable_pattern] = ACTIONS(1119),
    [sym__constructor_pattern] = ACTIONS(477),
    [sym_module_identifier] = ACTIONS(477),
    [sym_comment] = ACTIONS(5),
  },
  [436] = {
    [sym_type] = STATE(587),
    [sym__generic_type_constructor] = STATE(243),
    [sym_tupling_constructor] = STATE(239),
    [sym_tuple] = STATE(243),
    [sym_list] = STATE(243),
    [sym_parenthesized_constructor] = STATE(243),
    [sym_variable_identifier] = STATE(246),
    [sym__type_constructors] = STATE(239),
    [sym_qualified_type_constructor] = STATE(248),
    [anon_sym_LPAREN] = ACTIONS(590),
    [anon_sym_LBRACK] = ACTIONS(415),
    [sym_unit_type] = ACTIONS(417),
    [sym_list_constructor] = ACTIONS(417),
    [sym_function_constructor] = ACTIONS(417),
    [sym__variable_pattern] = ACTIONS(419),
    [sym__constructor_pattern] = ACTIONS(592),
    [sym_module_identifier] = ACTIONS(423),
    [sym_comment] = ACTIONS(5),
  },
  [437] = {
    [sym_export] = STATE(588),
    [sym__identifier] = STATE(252),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [438] = {
    [anon_sym_where] = ACTIONS(1121),
    [sym_comment] = ACTIONS(5),
  },
  [439] = {
    [anon_sym_COMMA] = ACTIONS(1123),
    [anon_sym_RPAREN] = ACTIONS(1125),
    [sym_comment] = ACTIONS(5),
  },
  [440] = {
    [sym__identifier] = STATE(592),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [anon_sym_DOT_DOT] = ACTIONS(1127),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [441] = {
    [ts_builtin_sym_end] = ACTIONS(1129),
    [sym_comment] = ACTIONS(5),
  },
  [442] = {
    [sym__layout_semicolon] = ACTIONS(1131),
    [anon_sym_SEMI] = ACTIONS(1133),
    [sym_comment] = ACTIONS(5),
  },
  [443] = {
    [sym_import] = STATE(19),
    [sym__declaration] = STATE(595),
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
    [sym__layout_close_brace] = ACTIONS(1135),
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
  [444] = {
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
    [anon_sym_RBRACE] = ACTIONS(1137),
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
  [445] = {
    [sym_import_specification] = STATE(596),
    [sym__layout_semicolon] = ACTIONS(1139),
    [anon_sym_SEMI] = ACTIONS(1141),
    [anon_sym_LPAREN] = ACTIONS(189),
    [anon_sym_hiding] = ACTIONS(193),
    [sym_comment] = ACTIONS(5),
  },
  [446] = {
    [sym__identifier] = STATE(598),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [anon_sym_DOT_DOT] = ACTIONS(1143),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [447] = {
    [sym__identifier] = STATE(599),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [448] = {
    [sym__layout_semicolon] = ACTIONS(1145),
    [anon_sym_SEMI] = ACTIONS(1147),
    [sym_comment] = ACTIONS(5),
  },
  [449] = {
    [anon_sym_COMMA] = ACTIONS(1149),
    [anon_sym_RPAREN] = ACTIONS(1151),
    [sym_comment] = ACTIONS(5),
  },
  [450] = {
    [sym__layout_semicolon] = ACTIONS(1139),
    [anon_sym_SEMI] = ACTIONS(1141),
    [sym_comment] = ACTIONS(5),
  },
  [451] = {
    [aux_sym_import_specification_repeat1] = STATE(603),
    [anon_sym_LPAREN] = ACTIONS(1153),
    [anon_sym_COMMA] = ACTIONS(793),
    [anon_sym_RPAREN] = ACTIONS(1151),
    [sym_comment] = ACTIONS(5),
  },
  [452] = {
    [sym__variable_pattern] = ACTIONS(327),
    [sym__constructor_pattern] = ACTIONS(329),
    [sym_comment] = ACTIONS(5),
  },
  [453] = {
    [sym__gap] = STATE(203),
    [sym__graphic] = STATE(203),
    [sym__small] = STATE(74),
    [sym__large] = STATE(74),
    [sym__symbol] = STATE(74),
    [sym__special] = STATE(74),
    [sym__escape] = STATE(203),
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
    [anon_sym_SQUOTE] = ACTIONS(349),
    [anon_sym_DQUOTE] = ACTIONS(1155),
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
    [sym__layout_semicolon] = ACTIONS(1157),
    [anon_sym_SEMI] = ACTIONS(1159),
    [sym_comment] = ACTIONS(5),
  },
  [455] = {
    [sym_type_signature] = STATE(605),
    [sym__identifier] = STATE(267),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [sym__variable_pattern] = ACTIONS(483),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [456] = {
    [anon_sym_COMMA] = ACTIONS(1161),
    [anon_sym_RPAREN] = ACTIONS(1161),
    [sym_comment] = ACTIONS(5),
  },
  [457] = {
    [sym__identifier] = STATE(606),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [458] = {
    [sym__layout_semicolon] = ACTIONS(1163),
    [anon_sym_SEMI] = ACTIONS(1165),
    [sym_comment] = ACTIONS(5),
  },
  [459] = {
    [anon_sym_COMMA] = ACTIONS(1167),
    [anon_sym_RPAREN] = ACTIONS(1167),
    [sym_comment] = ACTIONS(5),
  },
  [460] = {
    [sym__constructor_pattern] = ACTIONS(1169),
    [sym_comment] = ACTIONS(5),
  },
  [461] = {
    [sym_constructor] = STATE(607),
    [sym_constructor_identifier] = STATE(114),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
  },
  [462] = {
    [anon_sym_EQ_GT] = ACTIONS(1171),
    [sym_comment] = ACTIONS(5),
  },
  [463] = {
    [sym_label] = STATE(479),
    [sym__identifier] = STATE(407),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(71),
    [sym_comment] = ACTIONS(5),
  },
  [464] = {
    [anon_sym_COMMA] = ACTIONS(857),
    [anon_sym_RPAREN] = ACTIONS(857),
    [sym_comment] = ACTIONS(5),
  },
  [465] = {
    [sym__literal] = STATE(482),
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
  [466] = {
    [sym__layout_semicolon] = ACTIONS(1129),
    [anon_sym_SEMI] = ACTIONS(1173),
    [sym_comment] = ACTIONS(5),
  },
  [467] = {
    [sym_import] = STATE(19),
    [sym__declaration] = STATE(595),
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
    [sym__layout_close_brace] = ACTIONS(1175),
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
  [468] = {
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
    [anon_sym_RBRACE] = ACTIONS(1177),
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
  [469] = {
    [anon_sym_COMMA] = ACTIONS(1179),
    [anon_sym_RPAREN] = ACTIONS(1179),
    [anon_sym_where] = ACTIONS(1179),
    [anon_sym_EQ_GT] = ACTIONS(1179),
    [sym_comment] = ACTIONS(5),
  },
  [470] = {
    [sym_field] = STATE(611),
    [sym_variable_identifier] = STATE(287),
    [sym__variable_pattern] = ACTIONS(483),
    [sym_comment] = ACTIONS(5),
  },
  [471] = {
    [anon_sym_RBRACE] = ACTIONS(1181),
    [anon_sym_COMMA] = ACTIONS(1183),
    [sym_comment] = ACTIONS(5),
  },
  [472] = {
    [sym_variable_identifier] = STATE(614),
    [sym__variable_pattern] = ACTIONS(483),
    [sym_comment] = ACTIONS(5),
  },
  [473] = {
    [sym_strict] = STATE(616),
    [sym__identifier] = STATE(616),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [anon_sym_BANG] = ACTIONS(1185),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [474] = {
    [anon_sym_COMMA] = ACTIONS(1187),
    [anon_sym_COLON_COLON] = ACTIONS(1189),
    [sym_comment] = ACTIONS(5),
  },
  [475] = {
    [anon_sym_COMMA] = ACTIONS(1191),
    [anon_sym_RPAREN] = ACTIONS(1191),
    [anon_sym_where] = ACTIONS(1191),
    [anon_sym_EQ_GT] = ACTIONS(1191),
    [sym_comment] = ACTIONS(5),
  },
  [476] = {
    [anon_sym_RPAREN] = ACTIONS(1193),
    [sym__variable_pattern] = ACTIONS(1193),
    [sym__constructor_pattern] = ACTIONS(1195),
    [sym_comment] = ACTIONS(5),
  },
  [477] = {
    [anon_sym_COMMA] = ACTIONS(601),
    [anon_sym_where] = ACTIONS(601),
    [anon_sym_EQ_GT] = ACTIONS(601),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(603),
    [anon_sym_SQUOTE] = ACTIONS(601),
    [anon_sym_DQUOTE] = ACTIONS(601),
    [sym__integer_literal] = ACTIONS(601),
    [sym__octal_literal] = ACTIONS(601),
    [sym__hexidecimal_literal] = ACTIONS(601),
  },
  [478] = {
    [anon_sym_COMMA] = ACTIONS(633),
    [anon_sym_where] = ACTIONS(633),
    [anon_sym_EQ_GT] = ACTIONS(633),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(635),
    [anon_sym_SQUOTE] = ACTIONS(633),
    [anon_sym_DQUOTE] = ACTIONS(633),
    [sym__integer_literal] = ACTIONS(633),
    [sym__octal_literal] = ACTIONS(633),
    [sym__hexidecimal_literal] = ACTIONS(633),
  },
  [479] = {
    [anon_sym_RBRACE] = ACTIONS(1197),
    [anon_sym_COMMA] = ACTIONS(1197),
    [anon_sym_RPAREN] = ACTIONS(1197),
    [anon_sym_where] = ACTIONS(1197),
    [anon_sym_EQ_GT] = ACTIONS(1197),
    [sym_comment] = ACTIONS(5),
  },
  [480] = {
    [anon_sym_EQ] = ACTIONS(503),
    [sym_comment] = ACTIONS(5),
  },
  [481] = {
    [sym_label] = STATE(619),
    [sym__identifier] = STATE(480),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(71),
    [sym_comment] = ACTIONS(5),
  },
  [482] = {
    [anon_sym_RBRACE] = ACTIONS(1199),
    [anon_sym_COMMA] = ACTIONS(1199),
    [anon_sym_RPAREN] = ACTIONS(1199),
    [anon_sym_where] = ACTIONS(1199),
    [anon_sym_EQ_GT] = ACTIONS(1199),
    [sym_comment] = ACTIONS(5),
  },
  [483] = {
    [sym__layout_semicolon] = ACTIONS(1201),
    [anon_sym_SEMI] = ACTIONS(1203),
    [anon_sym_COMMA] = ACTIONS(1203),
    [sym_comment] = ACTIONS(5),
  },
  [484] = {
    [sym_deriving] = STATE(620),
    [sym__layout_semicolon] = ACTIONS(1205),
    [anon_sym_SEMI] = ACTIONS(1207),
    [anon_sym_deriving] = ACTIONS(259),
    [sym_comment] = ACTIONS(5),
  },
  [485] = {
    [sym__layout_semicolon] = ACTIONS(1205),
    [anon_sym_SEMI] = ACTIONS(1207),
    [sym_comment] = ACTIONS(5),
  },
  [486] = {
    [aux_sym_fields_repeat1] = STATE(622),
    [anon_sym_RBRACE] = ACTIONS(1209),
    [anon_sym_COMMA] = ACTIONS(835),
    [sym_comment] = ACTIONS(5),
  },
  [487] = {
    [sym__identifier] = STATE(476),
    [sym_variable_identifier] = STATE(174),
    [sym_constructor_identifier] = STATE(174),
    [anon_sym_RPAREN] = ACTIONS(1211),
    [sym__variable_pattern] = ACTIONS(277),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
  },
  [488] = {
    [sym__layout_semicolon] = ACTIONS(922),
    [anon_sym_SEMI] = ACTIONS(847),
    [anon_sym_EQ] = ACTIONS(847),
    [anon_sym_deriving] = ACTIONS(847),
    [anon_sym_BANG] = ACTIONS(847),
    [sym__variable_pattern] = ACTIONS(849),
    [sym__constructor_pattern] = ACTIONS(849),
    [sym_comment] = ACTIONS(5),
  },
  [489] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(1213),
  },
  [490] = {
    [sym__layout_semicolon] = ACTIONS(325),
    [anon_sym_SEMI] = ACTIONS(327),
    [anon_sym_COMMA] = ACTIONS(327),
    [anon_sym_EQ] = ACTIONS(327),
    [anon_sym_deriving] = ACTIONS(327),
    [sym__constructor_pattern] = ACTIONS(329),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(329),
    [anon_sym_SQUOTE] = ACTIONS(327),
    [anon_sym_DQUOTE] = ACTIONS(327),
    [sym__integer_literal] = ACTIONS(327),
    [sym__octal_literal] = ACTIONS(327),
    [sym__hexidecimal_literal] = ACTIONS(327),
  },
  [491] = {
    [sym__gap] = STATE(203),
    [sym__graphic] = STATE(203),
    [sym__small] = STATE(74),
    [sym__large] = STATE(74),
    [sym__symbol] = STATE(74),
    [sym__special] = STATE(74),
    [sym__escape] = STATE(203),
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
    [anon_sym_SQUOTE] = ACTIONS(349),
    [anon_sym_DQUOTE] = ACTIONS(1215),
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
  [492] = {
    [sym_label] = STATE(626),
    [sym__identifier] = STATE(627),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(71),
    [sym_comment] = ACTIONS(5),
  },
  [493] = {
    [sym__layout_semicolon] = ACTIONS(924),
    [anon_sym_SEMI] = ACTIONS(857),
    [anon_sym_COMMA] = ACTIONS(1217),
    [anon_sym_EQ] = ACTIONS(857),
    [anon_sym_deriving] = ACTIONS(857),
    [sym__constructor_pattern] = ACTIONS(928),
    [sym_comment] = ACTIONS(5),
  },
  [494] = {
    [sym__literal] = STATE(629),
    [sym_integer] = STATE(313),
    [sym_char] = STATE(313),
    [sym_string] = STATE(313),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(551),
    [anon_sym_SQUOTE] = ACTIONS(553),
    [anon_sym_DQUOTE] = ACTIONS(555),
    [sym__integer_literal] = ACTIONS(557),
    [sym__octal_literal] = ACTIONS(557),
    [sym__hexidecimal_literal] = ACTIONS(557),
  },
  [495] = {
    [sym__layout_semicolon] = ACTIONS(930),
    [anon_sym_SEMI] = ACTIONS(859),
    [anon_sym_EQ] = ACTIONS(859),
    [anon_sym_deriving] = ACTIONS(859),
    [anon_sym_BANG] = ACTIONS(859),
    [sym__variable_pattern] = ACTIONS(861),
    [sym__constructor_pattern] = ACTIONS(861),
    [sym_comment] = ACTIONS(5),
  },
  [496] = {
    [sym__layout_semicolon] = ACTIONS(932),
    [anon_sym_SEMI] = ACTIONS(863),
    [anon_sym_EQ] = ACTIONS(863),
    [anon_sym_deriving] = ACTIONS(863),
    [sym__constructor_pattern] = ACTIONS(865),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(865),
    [anon_sym_SQUOTE] = ACTIONS(863),
    [anon_sym_DQUOTE] = ACTIONS(863),
    [sym__integer_literal] = ACTIONS(863),
    [sym__octal_literal] = ACTIONS(863),
    [sym__hexidecimal_literal] = ACTIONS(863),
  },
  [497] = {
    [aux_sym_export_repeat1] = STATE(631),
    [anon_sym_COMMA] = ACTIONS(461),
    [anon_sym_RPAREN] = ACTIONS(1219),
    [sym_comment] = ACTIONS(5),
  },
  [498] = {
    [sym__layout_semicolon] = ACTIONS(1221),
    [anon_sym_SEMI] = ACTIONS(1223),
    [anon_sym_PIPE] = ACTIONS(1223),
    [anon_sym_deriving] = ACTIONS(1223),
    [sym_comment] = ACTIONS(5),
  },
  [499] = {
    [sym_constructor] = STATE(632),
    [sym_constructor_identifier] = STATE(155),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [500] = {
    [sym__layout_semicolon] = ACTIONS(1225),
    [anon_sym_SEMI] = ACTIONS(1179),
    [anon_sym_EQ] = ACTIONS(1179),
    [anon_sym_EQ_GT] = ACTIONS(1179),
    [anon_sym_PIPE] = ACTIONS(1179),
    [anon_sym_deriving] = ACTIONS(1179),
    [sym__constructor_pattern] = ACTIONS(1227),
    [sym_comment] = ACTIONS(5),
  },
  [501] = {
    [anon_sym_RBRACE] = ACTIONS(1229),
    [anon_sym_COMMA] = ACTIONS(1183),
    [sym_comment] = ACTIONS(5),
  },
  [502] = {
    [sym__layout_semicolon] = ACTIONS(1231),
    [anon_sym_SEMI] = ACTIONS(1191),
    [anon_sym_EQ] = ACTIONS(1191),
    [anon_sym_EQ_GT] = ACTIONS(1191),
    [anon_sym_PIPE] = ACTIONS(1191),
    [anon_sym_deriving] = ACTIONS(1191),
    [sym__constructor_pattern] = ACTIONS(1233),
    [sym_comment] = ACTIONS(5),
  },
  [503] = {
    [sym__layout_semicolon] = ACTIONS(1235),
    [anon_sym_SEMI] = ACTIONS(1197),
    [anon_sym_COMMA] = ACTIONS(1197),
    [anon_sym_EQ] = ACTIONS(1197),
    [anon_sym_EQ_GT] = ACTIONS(1197),
    [anon_sym_PIPE] = ACTIONS(1197),
    [anon_sym_deriving] = ACTIONS(1197),
    [sym__constructor_pattern] = ACTIONS(1237),
    [sym_comment] = ACTIONS(5),
  },
  [504] = {
    [anon_sym_EQ] = ACTIONS(916),
    [sym_comment] = ACTIONS(5),
  },
  [505] = {
    [sym_label] = STATE(634),
    [sym__identifier] = STATE(504),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(71),
    [sym_comment] = ACTIONS(5),
  },
  [506] = {
    [sym__layout_semicolon] = ACTIONS(1239),
    [anon_sym_SEMI] = ACTIONS(1199),
    [anon_sym_COMMA] = ACTIONS(1199),
    [anon_sym_EQ] = ACTIONS(1199),
    [anon_sym_EQ_GT] = ACTIONS(1199),
    [anon_sym_PIPE] = ACTIONS(1199),
    [anon_sym_deriving] = ACTIONS(1199),
    [sym__constructor_pattern] = ACTIONS(1241),
    [sym_comment] = ACTIONS(5),
  },
  [507] = {
    [sym_deriving] = STATE(635),
    [sym__layout_semicolon] = ACTIONS(1243),
    [anon_sym_SEMI] = ACTIONS(1245),
    [anon_sym_deriving] = ACTIONS(259),
    [sym_comment] = ACTIONS(5),
  },
  [508] = {
    [sym__layout_semicolon] = ACTIONS(1243),
    [anon_sym_SEMI] = ACTIONS(1245),
    [sym_comment] = ACTIONS(5),
  },
  [509] = {
    [sym_variable_identifier] = STATE(339),
    [aux_sym_simple_type_repeat1] = STATE(561),
    [anon_sym_COMMA] = ACTIONS(729),
    [anon_sym_RPAREN] = ACTIONS(729),
    [anon_sym_DASH_GT] = ACTIONS(729),
    [sym__variable_pattern] = ACTIONS(277),
    [sym_comment] = ACTIONS(5),
  },
  [510] = {
    [anon_sym_EQ] = ACTIONS(1179),
    [sym_comment] = ACTIONS(5),
  },
  [511] = {
    [anon_sym_RBRACE] = ACTIONS(1247),
    [anon_sym_COMMA] = ACTIONS(1183),
    [sym_comment] = ACTIONS(5),
  },
  [512] = {
    [anon_sym_EQ] = ACTIONS(1191),
    [sym_comment] = ACTIONS(5),
  },
  [513] = {
    [anon_sym_COMMA] = ACTIONS(1197),
    [anon_sym_EQ] = ACTIONS(1197),
    [sym_comment] = ACTIONS(5),
  },
  [514] = {
    [anon_sym_EQ] = ACTIONS(1249),
    [sym_comment] = ACTIONS(5),
  },
  [515] = {
    [sym_label] = STATE(637),
    [sym__identifier] = STATE(514),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(71),
    [sym_comment] = ACTIONS(5),
  },
  [516] = {
    [anon_sym_COMMA] = ACTIONS(1199),
    [anon_sym_EQ] = ACTIONS(1199),
    [sym_comment] = ACTIONS(5),
  },
  [517] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(1251),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1251),
  },
  [518] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(1253),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(1253),
  },
  [519] = {
    [anon_sym_SEMI] = ACTIONS(1255),
    [anon_sym_LBRACE] = ACTIONS(1255),
    [anon_sym_RBRACE] = ACTIONS(1255),
    [anon_sym_LPAREN] = ACTIONS(1255),
    [anon_sym_RPAREN] = ACTIONS(1255),
    [anon_sym_EQ] = ACTIONS(1255),
    [anon_sym_TILDE] = ACTIONS(1255),
    [anon_sym_LBRACK] = ACTIONS(1255),
    [anon_sym_RBRACK] = ACTIONS(1255),
    [anon_sym_DASH] = ACTIONS(1255),
    [anon_sym_AT] = ACTIONS(1255),
    [anon_sym__] = ACTIONS(1255),
    [anon_sym_BQUOTE] = ACTIONS(1255),
    [anon_sym_COLON] = ACTIONS(1255),
    [anon_sym_PIPE] = ACTIONS(1255),
    [anon_sym_BANG] = ACTIONS(1255),
    [anon_sym_DOT] = ACTIONS(1255),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(1255),
    [anon_sym_DQUOTE] = ACTIONS(1255),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(1255),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(1255),
    [sym__ascii_large] = ACTIONS(1255),
    [anon_sym_POUND] = ACTIONS(1255),
    [anon_sym_DOLLAR] = ACTIONS(1255),
    [anon_sym_PERCENT] = ACTIONS(1255),
    [anon_sym_AMP] = ACTIONS(1255),
    [anon_sym_1] = ACTIONS(1255),
    [anon_sym_PLUS] = ACTIONS(1255),
    [anon_sym_SLASH] = ACTIONS(1255),
    [anon_sym_LT] = ACTIONS(1255),
    [anon_sym_GT] = ACTIONS(1255),
    [anon_sym_QMARK] = ACTIONS(1255),
    [anon_sym_CARET] = ACTIONS(1255),
    [anon_sym_BSLASH] = ACTIONS(1255),
    [sym__space] = ACTIONS(1255),
    [sym__newline] = ACTIONS(1255),
    [sym__tab] = ACTIONS(1255),
    [sym__vertical_tab] = ACTIONS(1255),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1255),
  },
  [520] = {
    [anon_sym_SEMI] = ACTIONS(1257),
    [anon_sym_LBRACE] = ACTIONS(1257),
    [anon_sym_RBRACE] = ACTIONS(1257),
    [anon_sym_LPAREN] = ACTIONS(1257),
    [anon_sym_RPAREN] = ACTIONS(1257),
    [anon_sym_EQ] = ACTIONS(1257),
    [anon_sym_TILDE] = ACTIONS(1257),
    [anon_sym_LBRACK] = ACTIONS(1257),
    [anon_sym_RBRACK] = ACTIONS(1257),
    [anon_sym_DASH] = ACTIONS(1257),
    [anon_sym_AT] = ACTIONS(1257),
    [anon_sym__] = ACTIONS(1257),
    [anon_sym_BQUOTE] = ACTIONS(1257),
    [anon_sym_COLON] = ACTIONS(1257),
    [anon_sym_PIPE] = ACTIONS(1257),
    [anon_sym_BANG] = ACTIONS(1257),
    [anon_sym_DOT] = ACTIONS(1257),
    [sym_comment] = ACTIONS(97),
    [anon_sym_SQUOTE] = ACTIONS(1257),
    [anon_sym_DQUOTE] = ACTIONS(1257),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(1257),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(1257),
    [sym__ascii_large] = ACTIONS(1257),
    [anon_sym_POUND] = ACTIONS(1257),
    [anon_sym_DOLLAR] = ACTIONS(1257),
    [anon_sym_PERCENT] = ACTIONS(1257),
    [anon_sym_AMP] = ACTIONS(1257),
    [anon_sym_1] = ACTIONS(1257),
    [anon_sym_PLUS] = ACTIONS(1257),
    [anon_sym_SLASH] = ACTIONS(1257),
    [anon_sym_LT] = ACTIONS(1257),
    [anon_sym_GT] = ACTIONS(1257),
    [anon_sym_QMARK] = ACTIONS(1257),
    [anon_sym_CARET] = ACTIONS(1257),
    [anon_sym_BSLASH] = ACTIONS(1257),
    [sym__space] = ACTIONS(1257),
    [sym__newline] = ACTIONS(1257),
    [sym__tab] = ACTIONS(1257),
    [sym__vertical_tab] = ACTIONS(1257),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(1257),
  },
  [521] = {
    [sym__layout_semicolon] = ACTIONS(1259),
    [anon_sym_SEMI] = ACTIONS(1261),
    [anon_sym_where] = ACTIONS(1261),
    [anon_sym_do] = ACTIONS(1261),
    [sym__variable_pattern] = ACTIONS(1263),
    [sym__constructor_pattern] = ACTIONS(1263),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1263),
    [anon_sym_SQUOTE] = ACTIONS(1261),
    [anon_sym_DQUOTE] = ACTIONS(1261),
    [sym__integer_literal] = ACTIONS(1261),
    [sym__octal_literal] = ACTIONS(1261),
    [sym__hexidecimal_literal] = ACTIONS(1261),
  },
  [522] = {
    [sym__layout_semicolon] = ACTIONS(79),
    [anon_sym_SEMI] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_BANG] = ACTIONS(81),
    [sym__variable_pattern] = ACTIONS(81),
    [sym__constructor_pattern] = ACTIONS(203),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(203),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [sym__integer_literal] = ACTIONS(81),
    [sym__octal_literal] = ACTIONS(81),
    [sym__hexidecimal_literal] = ACTIONS(81),
  },
  [523] = {
    [sym__layout_semicolon] = ACTIONS(1265),
    [anon_sym_SEMI] = ACTIONS(1267),
    [sym_comment] = ACTIONS(5),
  },
  [524] = {
    [sym__layout_close_brace] = ACTIONS(1269),
    [anon_sym_do] = ACTIONS(1271),
    [sym__variable_pattern] = ACTIONS(1273),
    [sym__constructor_pattern] = ACTIONS(1273),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1273),
    [anon_sym_SQUOTE] = ACTIONS(1271),
    [anon_sym_DQUOTE] = ACTIONS(1271),
    [sym__integer_literal] = ACTIONS(1271),
    [sym__octal_literal] = ACTIONS(1271),
    [sym__hexidecimal_literal] = ACTIONS(1271),
  },
  [525] = {
    [sym_labels] = STATE(160),
    [sym_label] = STATE(161),
    [sym_strict] = STATE(640),
    [sym__literal] = STATE(163),
    [sym__identifier] = STATE(641),
    [sym_variable_identifier] = STATE(642),
    [sym_constructor_identifier] = STATE(642),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [sym_fields] = STATE(160),
    [aux_sym_constructor_repeat1] = STATE(643),
    [aux_sym_constructor_repeat3] = STATE(166),
    [sym__layout_semicolon] = ACTIONS(261),
    [anon_sym_SEMI] = ACTIONS(213),
    [anon_sym_LBRACE] = ACTIONS(263),
    [anon_sym_LPAREN] = ACTIONS(265),
    [anon_sym_BANG] = ACTIONS(1275),
    [sym__variable_pattern] = ACTIONS(948),
    [sym__constructor_pattern] = ACTIONS(731),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym__integer_literal] = ACTIONS(41),
    [sym__octal_literal] = ACTIONS(41),
    [sym__hexidecimal_literal] = ACTIONS(41),
  },
  [526] = {
    [sym__variable] = STATE(213),
    [sym_qualified_variable_identifier] = STATE(214),
    [sym__expression] = STATE(523),
    [sym_do_expression] = STATE(213),
    [sym__statement] = STATE(645),
    [sym_constructor] = STATE(213),
    [sym__literal] = STATE(213),
    [sym_variable_identifier] = STATE(214),
    [sym_constructor_identifier] = STATE(525),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [sym__layout_close_brace] = ACTIONS(1277),
    [anon_sym_do] = ACTIONS(363),
    [sym__variable_pattern] = ACTIONS(31),
    [sym__constructor_pattern] = ACTIONS(990),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym__integer_literal] = ACTIONS(41),
    [sym__octal_literal] = ACTIONS(41),
    [sym__hexidecimal_literal] = ACTIONS(41),
  },
  [527] = {
    [sym__layout_semicolon] = ACTIONS(1279),
    [anon_sym_SEMI] = ACTIONS(1281),
    [sym_comment] = ACTIONS(5),
  },
  [528] = {
    [anon_sym_RBRACE] = ACTIONS(1271),
    [anon_sym_do] = ACTIONS(1271),
    [sym__variable_pattern] = ACTIONS(1273),
    [sym__constructor_pattern] = ACTIONS(1273),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1273),
    [anon_sym_SQUOTE] = ACTIONS(1271),
    [anon_sym_DQUOTE] = ACTIONS(1271),
    [sym__integer_literal] = ACTIONS(1271),
    [sym__octal_literal] = ACTIONS(1271),
    [sym__hexidecimal_literal] = ACTIONS(1271),
  },
  [529] = {
    [sym__variable] = STATE(213),
    [sym_qualified_variable_identifier] = STATE(214),
    [sym__expression] = STATE(527),
    [sym_do_expression] = STATE(213),
    [sym__statement] = STATE(647),
    [sym_constructor] = STATE(213),
    [sym__literal] = STATE(213),
    [sym_variable_identifier] = STATE(214),
    [sym_constructor_identifier] = STATE(525),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [anon_sym_RBRACE] = ACTIONS(1283),
    [anon_sym_do] = ACTIONS(363),
    [sym__variable_pattern] = ACTIONS(31),
    [sym__constructor_pattern] = ACTIONS(990),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym__integer_literal] = ACTIONS(41),
    [sym__octal_literal] = ACTIONS(41),
    [sym__hexidecimal_literal] = ACTIONS(41),
  },
  [530] = {
    [sym__layout_semicolon] = ACTIONS(599),
    [anon_sym_SEMI] = ACTIONS(601),
    [anon_sym_COMMA] = ACTIONS(601),
    [anon_sym_where] = ACTIONS(601),
    [anon_sym_do] = ACTIONS(601),
    [sym__variable_pattern] = ACTIONS(603),
    [sym__constructor_pattern] = ACTIONS(603),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(603),
    [anon_sym_SQUOTE] = ACTIONS(601),
    [anon_sym_DQUOTE] = ACTIONS(601),
    [sym__integer_literal] = ACTIONS(601),
    [sym__octal_literal] = ACTIONS(601),
    [sym__hexidecimal_literal] = ACTIONS(601),
  },
  [531] = {
    [sym__layout_semicolon] = ACTIONS(631),
    [anon_sym_SEMI] = ACTIONS(633),
    [anon_sym_COMMA] = ACTIONS(633),
    [anon_sym_where] = ACTIONS(633),
    [anon_sym_do] = ACTIONS(633),
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
  [532] = {
    [aux_sym_fields_repeat1] = STATE(649),
    [anon_sym_RBRACE] = ACTIONS(1285),
    [anon_sym_COMMA] = ACTIONS(835),
    [sym_comment] = ACTIONS(5),
  },
  [533] = {
    [sym__identifier] = STATE(476),
    [sym_variable_identifier] = STATE(174),
    [sym_constructor_identifier] = STATE(174),
    [anon_sym_RPAREN] = ACTIONS(1287),
    [sym__variable_pattern] = ACTIONS(277),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
  },
  [534] = {
    [sym__layout_semicolon] = ACTIONS(922),
    [anon_sym_SEMI] = ACTIONS(847),
    [anon_sym_where] = ACTIONS(847),
    [anon_sym_do] = ACTIONS(847),
    [anon_sym_BANG] = ACTIONS(847),
    [sym__variable_pattern] = ACTIONS(849),
    [sym__constructor_pattern] = ACTIONS(849),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(849),
    [anon_sym_SQUOTE] = ACTIONS(847),
    [anon_sym_DQUOTE] = ACTIONS(847),
    [sym__integer_literal] = ACTIONS(847),
    [sym__octal_literal] = ACTIONS(847),
    [sym__hexidecimal_literal] = ACTIONS(847),
  },
  [535] = {
    [sym_label] = STATE(651),
    [sym__identifier] = STATE(652),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(71),
    [sym_comment] = ACTIONS(5),
  },
  [536] = {
    [sym__layout_semicolon] = ACTIONS(924),
    [anon_sym_SEMI] = ACTIONS(857),
    [anon_sym_COMMA] = ACTIONS(1289),
    [anon_sym_where] = ACTIONS(857),
    [anon_sym_do] = ACTIONS(857),
    [sym__variable_pattern] = ACTIONS(928),
    [sym__constructor_pattern] = ACTIONS(928),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(928),
    [anon_sym_SQUOTE] = ACTIONS(857),
    [anon_sym_DQUOTE] = ACTIONS(857),
    [sym__integer_literal] = ACTIONS(857),
    [sym__octal_literal] = ACTIONS(857),
    [sym__hexidecimal_literal] = ACTIONS(857),
  },
  [537] = {
    [sym__literal] = STATE(654),
    [sym_integer] = STATE(208),
    [sym_char] = STATE(208),
    [sym_string] = STATE(208),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(369),
    [anon_sym_SQUOTE] = ACTIONS(371),
    [anon_sym_DQUOTE] = ACTIONS(373),
    [sym__integer_literal] = ACTIONS(375),
    [sym__octal_literal] = ACTIONS(375),
    [sym__hexidecimal_literal] = ACTIONS(375),
  },
  [538] = {
    [sym__layout_semicolon] = ACTIONS(930),
    [anon_sym_SEMI] = ACTIONS(859),
    [anon_sym_where] = ACTIONS(859),
    [anon_sym_do] = ACTIONS(859),
    [anon_sym_BANG] = ACTIONS(859),
    [sym__variable_pattern] = ACTIONS(861),
    [sym__constructor_pattern] = ACTIONS(861),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(861),
    [anon_sym_SQUOTE] = ACTIONS(859),
    [anon_sym_DQUOTE] = ACTIONS(859),
    [sym__integer_literal] = ACTIONS(859),
    [sym__octal_literal] = ACTIONS(859),
    [sym__hexidecimal_literal] = ACTIONS(859),
  },
  [539] = {
    [sym__layout_semicolon] = ACTIONS(932),
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
  [540] = {
    [anon_sym_RPAREN] = ACTIONS(1291),
    [sym_comment] = ACTIONS(5),
  },
  [541] = {
    [sym__op] = STATE(394),
    [sym_variable_symbol] = STATE(395),
    [sym_constructor_symbol] = STATE(395),
    [sym__variable_symbol] = STATE(396),
    [anon_sym_COMMA] = ACTIONS(1293),
    [anon_sym_RPAREN] = ACTIONS(1293),
    [anon_sym_DASH] = ACTIONS(677),
    [anon_sym_BQUOTE] = ACTIONS(679),
    [anon_sym_COLON] = ACTIONS(681),
    [anon_sym_BANG] = ACTIONS(677),
    [anon_sym_DOT] = ACTIONS(677),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(677),
    [anon_sym_DOLLAR] = ACTIONS(677),
    [anon_sym_PERCENT] = ACTIONS(677),
    [anon_sym_AMP] = ACTIONS(677),
    [anon_sym_1] = ACTIONS(677),
    [anon_sym_PLUS] = ACTIONS(677),
    [anon_sym_SLASH] = ACTIONS(677),
    [anon_sym_LT] = ACTIONS(677),
    [anon_sym_GT] = ACTIONS(677),
    [anon_sym_QMARK] = ACTIONS(677),
    [anon_sym_CARET] = ACTIONS(677),
  },
  [542] = {
    [anon_sym_COMMA] = ACTIONS(1293),
    [anon_sym_RPAREN] = ACTIONS(1293),
    [sym_comment] = ACTIONS(5),
  },
  [543] = {
    [anon_sym_BQUOTE] = ACTIONS(1295),
    [sym_comment] = ACTIONS(5),
  },
  [544] = {
    [anon_sym_LPAREN] = ACTIONS(513),
    [anon_sym_TILDE] = ACTIONS(513),
    [anon_sym_LBRACK] = ACTIONS(513),
    [anon_sym_DASH] = ACTIONS(513),
    [anon_sym__] = ACTIONS(513),
    [anon_sym_COLON] = ACTIONS(513),
    [sym_list_constructor] = ACTIONS(513),
    [anon_sym_BANG] = ACTIONS(513),
    [sym__variable_pattern] = ACTIONS(1297),
    [sym__constructor_pattern] = ACTIONS(1297),
    [anon_sym_DOT] = ACTIONS(513),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1297),
    [anon_sym_SQUOTE] = ACTIONS(513),
    [anon_sym_DQUOTE] = ACTIONS(513),
    [anon_sym_POUND] = ACTIONS(513),
    [anon_sym_DOLLAR] = ACTIONS(513),
    [anon_sym_PERCENT] = ACTIONS(513),
    [anon_sym_AMP] = ACTIONS(513),
    [anon_sym_1] = ACTIONS(513),
    [anon_sym_PLUS] = ACTIONS(513),
    [anon_sym_SLASH] = ACTIONS(513),
    [anon_sym_LT] = ACTIONS(513),
    [anon_sym_GT] = ACTIONS(513),
    [anon_sym_QMARK] = ACTIONS(513),
    [anon_sym_CARET] = ACTIONS(513),
    [sym__integer_literal] = ACTIONS(513),
    [sym__octal_literal] = ACTIONS(513),
    [sym__hexidecimal_literal] = ACTIONS(513),
  },
  [545] = {
    [anon_sym_LPAREN] = ACTIONS(517),
    [anon_sym_TILDE] = ACTIONS(517),
    [anon_sym_LBRACK] = ACTIONS(517),
    [anon_sym_DASH] = ACTIONS(517),
    [anon_sym__] = ACTIONS(517),
    [anon_sym_COLON] = ACTIONS(517),
    [sym_list_constructor] = ACTIONS(517),
    [anon_sym_BANG] = ACTIONS(517),
    [sym__variable_pattern] = ACTIONS(1299),
    [sym__constructor_pattern] = ACTIONS(1299),
    [anon_sym_DOT] = ACTIONS(517),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1299),
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
  [546] = {
    [sym__constructor_symbol] = STATE(657),
    [anon_sym_LPAREN] = ACTIONS(521),
    [anon_sym_TILDE] = ACTIONS(521),
    [anon_sym_LBRACK] = ACTIONS(521),
    [anon_sym_DASH] = ACTIONS(521),
    [anon_sym__] = ACTIONS(521),
    [anon_sym_COLON] = ACTIONS(1028),
    [sym_list_constructor] = ACTIONS(521),
    [anon_sym_BANG] = ACTIONS(1028),
    [sym__variable_pattern] = ACTIONS(1301),
    [sym__constructor_pattern] = ACTIONS(1301),
    [anon_sym_DOT] = ACTIONS(1028),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1301),
    [anon_sym_SQUOTE] = ACTIONS(521),
    [anon_sym_DQUOTE] = ACTIONS(521),
    [anon_sym_POUND] = ACTIONS(1028),
    [anon_sym_DOLLAR] = ACTIONS(1028),
    [anon_sym_PERCENT] = ACTIONS(1028),
    [anon_sym_AMP] = ACTIONS(1028),
    [anon_sym_1] = ACTIONS(1028),
    [anon_sym_PLUS] = ACTIONS(1028),
    [anon_sym_SLASH] = ACTIONS(1028),
    [anon_sym_LT] = ACTIONS(1028),
    [anon_sym_GT] = ACTIONS(1028),
    [anon_sym_QMARK] = ACTIONS(1028),
    [anon_sym_CARET] = ACTIONS(1028),
    [sym__integer_literal] = ACTIONS(521),
    [sym__octal_literal] = ACTIONS(521),
    [sym__hexidecimal_literal] = ACTIONS(521),
  },
  [547] = {
    [sym__op] = STATE(394),
    [sym_variable_symbol] = STATE(395),
    [sym_constructor_symbol] = STATE(395),
    [sym__variable_symbol] = STATE(396),
    [anon_sym_COMMA] = ACTIONS(1303),
    [anon_sym_RPAREN] = ACTIONS(1303),
    [anon_sym_DASH] = ACTIONS(677),
    [anon_sym_BQUOTE] = ACTIONS(679),
    [anon_sym_COLON] = ACTIONS(681),
    [anon_sym_BANG] = ACTIONS(677),
    [anon_sym_DOT] = ACTIONS(677),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(677),
    [anon_sym_DOLLAR] = ACTIONS(677),
    [anon_sym_PERCENT] = ACTIONS(677),
    [anon_sym_AMP] = ACTIONS(677),
    [anon_sym_1] = ACTIONS(677),
    [anon_sym_PLUS] = ACTIONS(677),
    [anon_sym_SLASH] = ACTIONS(677),
    [anon_sym_LT] = ACTIONS(677),
    [anon_sym_GT] = ACTIONS(677),
    [anon_sym_QMARK] = ACTIONS(677),
    [anon_sym_CARET] = ACTIONS(677),
  },
  [548] = {
    [anon_sym_COMMA] = ACTIONS(1303),
    [anon_sym_RPAREN] = ACTIONS(1303),
    [sym_comment] = ACTIONS(5),
  },
  [549] = {
    [anon_sym_LPAREN] = ACTIONS(531),
    [anon_sym_TILDE] = ACTIONS(531),
    [anon_sym_LBRACK] = ACTIONS(531),
    [anon_sym_DASH] = ACTIONS(531),
    [anon_sym__] = ACTIONS(531),
    [sym_list_constructor] = ACTIONS(531),
    [anon_sym_BANG] = ACTIONS(531),
    [sym__variable_pattern] = ACTIONS(1305),
    [sym__constructor_pattern] = ACTIONS(1305),
    [anon_sym_DOT] = ACTIONS(531),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1305),
    [anon_sym_SQUOTE] = ACTIONS(531),
    [anon_sym_DQUOTE] = ACTIONS(531),
    [anon_sym_POUND] = ACTIONS(531),
    [anon_sym_DOLLAR] = ACTIONS(531),
    [anon_sym_PERCENT] = ACTIONS(531),
    [anon_sym_AMP] = ACTIONS(531),
    [anon_sym_1] = ACTIONS(531),
    [anon_sym_PLUS] = ACTIONS(531),
    [anon_sym_SLASH] = ACTIONS(531),
    [anon_sym_LT] = ACTIONS(531),
    [anon_sym_GT] = ACTIONS(531),
    [anon_sym_QMARK] = ACTIONS(531),
    [anon_sym_CARET] = ACTIONS(531),
    [sym__integer_literal] = ACTIONS(531),
    [sym__octal_literal] = ACTIONS(531),
    [sym__hexidecimal_literal] = ACTIONS(531),
  },
  [550] = {
    [sym__variable_symbol] = STATE(658),
    [anon_sym_LPAREN] = ACTIONS(535),
    [anon_sym_TILDE] = ACTIONS(535),
    [anon_sym_LBRACK] = ACTIONS(535),
    [anon_sym_DASH] = ACTIONS(677),
    [anon_sym__] = ACTIONS(535),
    [sym_list_constructor] = ACTIONS(535),
    [anon_sym_BANG] = ACTIONS(677),
    [sym__variable_pattern] = ACTIONS(1307),
    [sym__constructor_pattern] = ACTIONS(1307),
    [anon_sym_DOT] = ACTIONS(677),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1307),
    [anon_sym_SQUOTE] = ACTIONS(535),
    [anon_sym_DQUOTE] = ACTIONS(535),
    [anon_sym_POUND] = ACTIONS(677),
    [anon_sym_DOLLAR] = ACTIONS(677),
    [anon_sym_PERCENT] = ACTIONS(677),
    [anon_sym_AMP] = ACTIONS(677),
    [anon_sym_1] = ACTIONS(677),
    [anon_sym_PLUS] = ACTIONS(677),
    [anon_sym_SLASH] = ACTIONS(677),
    [anon_sym_LT] = ACTIONS(677),
    [anon_sym_GT] = ACTIONS(677),
    [anon_sym_QMARK] = ACTIONS(677),
    [anon_sym_CARET] = ACTIONS(677),
    [sym__integer_literal] = ACTIONS(535),
    [sym__octal_literal] = ACTIONS(535),
    [sym__hexidecimal_literal] = ACTIONS(535),
  },
  [551] = {
    [sym__function_pattern] = STATE(659),
    [sym_label_pattern] = STATE(86),
    [sym_irrefutable_pattern] = STATE(86),
    [sym_list_pattern] = STATE(86),
    [sym_tuple_pattern] = STATE(86),
    [sym_parenthesized_pattern] = STATE(86),
    [sym__pattern] = STATE(660),
    [sym_negative_literal] = STATE(223),
    [sym_as_pattern] = STATE(86),
    [sym_wildcard] = STATE(86),
    [sym__variable] = STATE(224),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym_constructor] = STATE(223),
    [sym__literal] = STATE(86),
    [sym__identifier] = STATE(94),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(225),
    [sym_integer] = STATE(89),
    [sym_char] = STATE(89),
    [sym_string] = STATE(89),
    [anon_sym_LPAREN] = ACTIONS(143),
    [anon_sym_TILDE] = ACTIONS(381),
    [anon_sym_LBRACK] = ACTIONS(149),
    [anon_sym_DASH] = ACTIONS(383),
    [anon_sym__] = ACTIONS(151),
    [sym_list_constructor] = ACTIONS(153),
    [sym__variable_pattern] = ACTIONS(155),
    [sym__constructor_pattern] = ACTIONS(385),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(159),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(163),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [552] = {
    [anon_sym_LPAREN] = ACTIONS(1309),
    [anon_sym_COMMA] = ACTIONS(1309),
    [anon_sym_RPAREN] = ACTIONS(1309),
    [anon_sym_EQ] = ACTIONS(1309),
    [anon_sym_TILDE] = ACTIONS(1309),
    [anon_sym_LBRACK] = ACTIONS(1309),
    [anon_sym_RBRACK] = ACTIONS(1309),
    [anon_sym_DASH] = ACTIONS(1309),
    [anon_sym__] = ACTIONS(1309),
    [anon_sym_BQUOTE] = ACTIONS(1309),
    [anon_sym_COLON] = ACTIONS(1309),
    [sym_list_constructor] = ACTIONS(1309),
    [anon_sym_BANG] = ACTIONS(1309),
    [sym__variable_pattern] = ACTIONS(1311),
    [sym__constructor_pattern] = ACTIONS(1311),
    [anon_sym_DOT] = ACTIONS(1309),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1311),
    [anon_sym_SQUOTE] = ACTIONS(1309),
    [anon_sym_DQUOTE] = ACTIONS(1309),
    [anon_sym_POUND] = ACTIONS(1309),
    [anon_sym_DOLLAR] = ACTIONS(1309),
    [anon_sym_PERCENT] = ACTIONS(1309),
    [anon_sym_AMP] = ACTIONS(1309),
    [anon_sym_1] = ACTIONS(1309),
    [anon_sym_PLUS] = ACTIONS(1309),
    [anon_sym_SLASH] = ACTIONS(1309),
    [anon_sym_LT] = ACTIONS(1309),
    [anon_sym_GT] = ACTIONS(1309),
    [anon_sym_QMARK] = ACTIONS(1309),
    [anon_sym_CARET] = ACTIONS(1309),
    [sym__integer_literal] = ACTIONS(1309),
    [sym__octal_literal] = ACTIONS(1309),
    [sym__hexidecimal_literal] = ACTIONS(1309),
  },
  [553] = {
    [anon_sym_LPAREN] = ACTIONS(1313),
    [anon_sym_COMMA] = ACTIONS(1313),
    [anon_sym_RPAREN] = ACTIONS(1313),
    [anon_sym_EQ] = ACTIONS(1313),
    [anon_sym_TILDE] = ACTIONS(1313),
    [anon_sym_LBRACK] = ACTIONS(1313),
    [anon_sym_RBRACK] = ACTIONS(1313),
    [anon_sym_DASH] = ACTIONS(1313),
    [anon_sym__] = ACTIONS(1313),
    [anon_sym_BQUOTE] = ACTIONS(1313),
    [anon_sym_COLON] = ACTIONS(1313),
    [sym_list_constructor] = ACTIONS(1313),
    [anon_sym_BANG] = ACTIONS(1313),
    [sym__variable_pattern] = ACTIONS(1315),
    [sym__constructor_pattern] = ACTIONS(1315),
    [anon_sym_DOT] = ACTIONS(1313),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1315),
    [anon_sym_SQUOTE] = ACTIONS(1313),
    [anon_sym_DQUOTE] = ACTIONS(1313),
    [anon_sym_POUND] = ACTIONS(1313),
    [anon_sym_DOLLAR] = ACTIONS(1313),
    [anon_sym_PERCENT] = ACTIONS(1313),
    [anon_sym_AMP] = ACTIONS(1313),
    [anon_sym_1] = ACTIONS(1313),
    [anon_sym_PLUS] = ACTIONS(1313),
    [anon_sym_SLASH] = ACTIONS(1313),
    [anon_sym_LT] = ACTIONS(1313),
    [anon_sym_GT] = ACTIONS(1313),
    [anon_sym_QMARK] = ACTIONS(1313),
    [anon_sym_CARET] = ACTIONS(1313),
    [sym__integer_literal] = ACTIONS(1313),
    [sym__octal_literal] = ACTIONS(1313),
    [sym__hexidecimal_literal] = ACTIONS(1313),
  },
  [554] = {
    [anon_sym_RBRACE] = ACTIONS(857),
    [anon_sym_COMMA] = ACTIONS(1317),
    [sym_comment] = ACTIONS(5),
  },
  [555] = {
    [aux_sym_tupling_constructor_repeat1] = STATE(662),
    [anon_sym_COMMA] = ACTIONS(1058),
    [anon_sym_RPAREN] = ACTIONS(1319),
    [sym_comment] = ACTIONS(5),
  },
  [556] = {
    [aux_sym_tuple_repeat1] = STATE(664),
    [anon_sym_COMMA] = ACTIONS(1069),
    [anon_sym_RPAREN] = ACTIONS(1321),
    [sym_comment] = ACTIONS(5),
  },
  [557] = {
    [anon_sym_COMMA] = ACTIONS(1323),
    [anon_sym_RPAREN] = ACTIONS(1323),
    [sym_comment] = ACTIONS(5),
  },
  [558] = {
    [sym__layout_semicolon] = ACTIONS(1325),
    [anon_sym_SEMI] = ACTIONS(1327),
    [anon_sym_DASH_GT] = ACTIONS(1327),
    [sym_comment] = ACTIONS(5),
  },
  [559] = {
    [anon_sym_COMMA] = ACTIONS(1329),
    [anon_sym_RPAREN] = ACTIONS(1331),
    [sym_comment] = ACTIONS(5),
  },
  [560] = {
    [sym_type] = STATE(580),
    [sym__generic_type_constructor] = STATE(423),
    [sym_tupling_constructor] = STATE(411),
    [sym_tuple] = STATE(423),
    [sym_list] = STATE(423),
    [sym_parenthesized_constructor] = STATE(423),
    [sym_variable_identifier] = STATE(424),
    [sym__type_constructors] = STATE(411),
    [sym_qualified_type_constructor] = STATE(418),
    [anon_sym_LPAREN] = ACTIONS(705),
    [anon_sym_LBRACK] = ACTIONS(709),
    [anon_sym_RBRACK] = ACTIONS(1333),
    [sym_unit_type] = ACTIONS(711),
    [sym_list_constructor] = ACTIONS(711),
    [sym_function_constructor] = ACTIONS(711),
    [sym__variable_pattern] = ACTIONS(717),
    [sym__constructor_pattern] = ACTIONS(719),
    [sym_module_identifier] = ACTIONS(721),
    [sym_comment] = ACTIONS(5),
  },
  [561] = {
    [sym_variable_identifier] = STATE(343),
    [anon_sym_COMMA] = ACTIONS(1105),
    [anon_sym_RPAREN] = ACTIONS(1105),
    [anon_sym_DASH_GT] = ACTIONS(1105),
    [sym__variable_pattern] = ACTIONS(277),
    [sym_comment] = ACTIONS(5),
  },
  [562] = {
    [sym_constructor_identifier] = STATE(668),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_module_identifier] = ACTIONS(1107),
    [sym_comment] = ACTIONS(5),
  },
  [563] = {
    [sym_variable_identifier] = STATE(339),
    [aux_sym_simple_type_repeat1] = STATE(669),
    [anon_sym_COMMA] = ACTIONS(1111),
    [anon_sym_RPAREN] = ACTIONS(1111),
    [anon_sym_DASH_GT] = ACTIONS(1111),
    [sym__variable_pattern] = ACTIONS(277),
    [sym_comment] = ACTIONS(5),
  },
  [564] = {
    [sym_constructor_identifier] = STATE(668),
    [sym__constructor_pattern] = ACTIONS(69),
    [anon_sym_DOT] = ACTIONS(1335),
    [sym_comment] = ACTIONS(5),
  },
  [565] = {
    [sym_type] = STATE(671),
    [sym__generic_type_constructor] = STATE(415),
    [sym_tupling_constructor] = STATE(411),
    [sym_tuple] = STATE(415),
    [sym_list] = STATE(415),
    [sym_parenthesized_constructor] = STATE(415),
    [sym_variable_identifier] = STATE(417),
    [sym__type_constructors] = STATE(411),
    [sym_qualified_type_constructor] = STATE(418),
    [anon_sym_LPAREN] = ACTIONS(705),
    [anon_sym_LBRACK] = ACTIONS(709),
    [sym_unit_type] = ACTIONS(711),
    [sym_list_constructor] = ACTIONS(711),
    [sym_function_constructor] = ACTIONS(711),
    [sym__variable_pattern] = ACTIONS(483),
    [sym__constructor_pattern] = ACTIONS(946),
    [sym_module_identifier] = ACTIONS(715),
    [sym_comment] = ACTIONS(5),
  },
  [566] = {
    [sym__layout_semicolon] = ACTIONS(1337),
    [anon_sym_SEMI] = ACTIONS(1340),
    [anon_sym_DASH_GT] = ACTIONS(1340),
    [sym_comment] = ACTIONS(5),
  },
  [567] = {
    [anon_sym_COMMA] = ACTIONS(1343),
    [anon_sym_RPAREN] = ACTIONS(1345),
    [sym_comment] = ACTIONS(5),
  },
  [568] = {
    [sym_type] = STATE(674),
    [sym__generic_type_constructor] = STATE(415),
    [sym_tupling_constructor] = STATE(411),
    [sym_tuple] = STATE(415),
    [sym_list] = STATE(415),
    [sym_parenthesized_constructor] = STATE(415),
    [sym_variable_identifier] = STATE(417),
    [sym__type_constructors] = STATE(411),
    [sym_qualified_type_constructor] = STATE(418),
    [anon_sym_LPAREN] = ACTIONS(705),
    [anon_sym_LBRACK] = ACTIONS(709),
    [sym_unit_type] = ACTIONS(711),
    [sym_list_constructor] = ACTIONS(711),
    [sym_function_constructor] = ACTIONS(711),
    [sym__variable_pattern] = ACTIONS(483),
    [sym__constructor_pattern] = ACTIONS(946),
    [sym_module_identifier] = ACTIONS(715),
    [sym_comment] = ACTIONS(5),
  },
  [569] = {
    [anon_sym_EQ_GT] = ACTIONS(1347),
    [sym_comment] = ACTIONS(5),
  },
  [570] = {
    [anon_sym_COMMA] = ACTIONS(817),
    [anon_sym_RPAREN] = ACTIONS(1349),
    [sym_comment] = ACTIONS(5),
  },
  [571] = {
    [sym_type] = STATE(677),
    [sym__generic_type_constructor] = STATE(415),
    [sym_tupling_constructor] = STATE(411),
    [sym_tuple] = STATE(415),
    [sym_list] = STATE(415),
    [sym_parenthesized_constructor] = STATE(415),
    [sym_variable_identifier] = STATE(417),
    [sym__type_constructors] = STATE(411),
    [sym_qualified_type_constructor] = STATE(418),
    [anon_sym_LPAREN] = ACTIONS(705),
    [anon_sym_LBRACK] = ACTIONS(709),
    [sym_unit_type] = ACTIONS(711),
    [sym_list_constructor] = ACTIONS(711),
    [sym_function_constructor] = ACTIONS(711),
    [sym__variable_pattern] = ACTIONS(483),
    [sym__constructor_pattern] = ACTIONS(946),
    [sym_module_identifier] = ACTIONS(715),
    [sym_comment] = ACTIONS(5),
  },
  [572] = {
    [sym_variable_identifier] = STATE(343),
    [anon_sym_LPAREN] = ACTIONS(1105),
    [anon_sym_LBRACK] = ACTIONS(1105),
    [anon_sym_RBRACK] = ACTIONS(1105),
    [anon_sym_DASH_GT] = ACTIONS(1105),
    [sym_unit_type] = ACTIONS(1105),
    [sym_list_constructor] = ACTIONS(1105),
    [sym_function_constructor] = ACTIONS(1105),
    [sym__variable_pattern] = ACTIONS(717),
    [sym__constructor_pattern] = ACTIONS(1351),
    [sym_module_identifier] = ACTIONS(1351),
    [sym_comment] = ACTIONS(5),
  },
  [573] = {
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
  [574] = {
    [sym_constructor_identifier] = STATE(678),
    [sym__constructor_pattern] = ACTIONS(1083),
    [sym_module_identifier] = ACTIONS(1107),
    [sym_comment] = ACTIONS(5),
  },
  [575] = {
    [sym_variable_identifier] = STATE(339),
    [aux_sym_simple_type_repeat1] = STATE(679),
    [anon_sym_LPAREN] = ACTIONS(1111),
    [anon_sym_LBRACK] = ACTIONS(1111),
    [anon_sym_RBRACK] = ACTIONS(1111),
    [anon_sym_DASH_GT] = ACTIONS(1111),
    [sym_unit_type] = ACTIONS(1111),
    [sym_list_constructor] = ACTIONS(1111),
    [sym_function_constructor] = ACTIONS(1111),
    [sym__variable_pattern] = ACTIONS(717),
    [sym__constructor_pattern] = ACTIONS(1353),
    [sym_module_identifier] = ACTIONS(1353),
    [sym_comment] = ACTIONS(5),
  },
  [576] = {
    [sym_constructor_identifier] = STATE(678),
    [sym__constructor_pattern] = ACTIONS(1083),
    [anon_sym_DOT] = ACTIONS(1355),
    [sym_comment] = ACTIONS(5),
  },
  [577] = {
    [sym_type] = STATE(674),
    [sym__generic_type_constructor] = STATE(423),
    [sym_tupling_constructor] = STATE(411),
    [sym_tuple] = STATE(423),
    [sym_list] = STATE(423),
    [sym_parenthesized_constructor] = STATE(423),
    [sym_variable_identifier] = STATE(424),
    [sym__type_constructors] = STATE(411),
    [sym_qualified_type_constructor] = STATE(418),
    [anon_sym_LPAREN] = ACTIONS(705),
    [anon_sym_LBRACK] = ACTIONS(709),
    [sym_unit_type] = ACTIONS(711),
    [sym_list_constructor] = ACTIONS(711),
    [sym_function_constructor] = ACTIONS(711),
    [sym__variable_pattern] = ACTIONS(717),
    [sym__constructor_pattern] = ACTIONS(719),
    [sym_module_identifier] = ACTIONS(721),
    [sym_comment] = ACTIONS(5),
  },
  [578] = {
    [sym_type] = STATE(677),
    [sym__generic_type_constructor] = STATE(423),
    [sym_tupling_constructor] = STATE(411),
    [sym_tuple] = STATE(423),
    [sym_list] = STATE(423),
    [sym_parenthesized_constructor] = STATE(423),
    [sym_variable_identifier] = STATE(424),
    [sym__type_constructors] = STATE(411),
    [sym_qualified_type_constructor] = STATE(418),
    [anon_sym_LPAREN] = ACTIONS(705),
    [anon_sym_LBRACK] = ACTIONS(709),
    [sym_unit_type] = ACTIONS(711),
    [sym_list_constructor] = ACTIONS(711),
    [sym_function_constructor] = ACTIONS(711),
    [sym__variable_pattern] = ACTIONS(717),
    [sym__constructor_pattern] = ACTIONS(719),
    [sym_module_identifier] = ACTIONS(721),
    [sym_comment] = ACTIONS(5),
  },
  [579] = {
    [sym__layout_semicolon] = ACTIONS(1357),
    [anon_sym_SEMI] = ACTIONS(1359),
    [anon_sym_DASH_GT] = ACTIONS(1359),
    [sym_comment] = ACTIONS(5),
  },
  [580] = {
    [anon_sym_LPAREN] = ACTIONS(1361),
    [anon_sym_LBRACK] = ACTIONS(1361),
    [anon_sym_RBRACK] = ACTIONS(1361),
    [sym_unit_type] = ACTIONS(1361),
    [sym_list_constructor] = ACTIONS(1361),
    [sym_function_constructor] = ACTIONS(1361),
    [sym__variable_pattern] = ACTIONS(1361),
    [sym__constructor_pattern] = ACTIONS(1363),
    [sym_module_identifier] = ACTIONS(1363),
    [sym_comment] = ACTIONS(5),
  },
  [581] = {
    [sym__layout_semicolon] = ACTIONS(1365),
    [anon_sym_SEMI] = ACTIONS(942),
    [anon_sym_DASH_GT] = ACTIONS(942),
    [sym__variable_pattern] = ACTIONS(942),
    [sym_comment] = ACTIONS(5),
  },
  [582] = {
    [sym__constructor_pattern] = ACTIONS(1367),
    [anon_sym_DOT] = ACTIONS(1369),
    [sym_comment] = ACTIONS(5),
  },
  [583] = {
    [sym_variable_identifier] = STATE(427),
    [aux_sym_simple_type_repeat1] = STATE(681),
    [sym__layout_semicolon] = ACTIONS(1371),
    [anon_sym_SEMI] = ACTIONS(1373),
    [anon_sym_DASH_GT] = ACTIONS(1373),
    [sym__variable_pattern] = ACTIONS(948),
    [sym_comment] = ACTIONS(5),
  },
  [584] = {
    [sym_variable_identifier] = STATE(581),
    [sym__layout_semicolon] = ACTIONS(1371),
    [anon_sym_SEMI] = ACTIONS(1373),
    [anon_sym_DASH_GT] = ACTIONS(1373),
    [sym__variable_pattern] = ACTIONS(948),
    [sym_comment] = ACTIONS(5),
  },
  [585] = {
    [sym_constructor_identifier] = STATE(683),
    [sym__constructor_pattern] = ACTIONS(731),
    [sym_module_identifier] = ACTIONS(1375),
    [sym_comment] = ACTIONS(5),
  },
  [586] = {
    [sym__layout_semicolon] = ACTIONS(1377),
    [anon_sym_SEMI] = ACTIONS(1379),
    [sym_comment] = ACTIONS(5),
  },
  [587] = {
    [sym__layout_semicolon] = ACTIONS(1381),
    [anon_sym_SEMI] = ACTIONS(1383),
    [sym_comment] = ACTIONS(5),
  },
  [588] = {
    [anon_sym_COMMA] = ACTIONS(1385),
    [anon_sym_RPAREN] = ACTIONS(1385),
    [sym_comment] = ACTIONS(5),
  },
  [589] = {
    [sym_export] = STATE(684),
    [sym__identifier] = STATE(252),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [590] = {
    [anon_sym_where] = ACTIONS(1387),
    [sym_comment] = ACTIONS(5),
  },
  [591] = {
    [anon_sym_RPAREN] = ACTIONS(1389),
    [sym_comment] = ACTIONS(5),
  },
  [592] = {
    [aux_sym_export_repeat1] = STATE(686),
    [anon_sym_COMMA] = ACTIONS(461),
    [anon_sym_RPAREN] = ACTIONS(1389),
    [sym_comment] = ACTIONS(5),
  },
  [593] = {
    [sym__layout_close_brace] = ACTIONS(353),
    [anon_sym_import] = ACTIONS(355),
    [anon_sym_foreign] = ACTIONS(355),
    [anon_sym_default] = ACTIONS(355),
    [anon_sym_class] = ACTIONS(355),
    [anon_sym_instance] = ACTIONS(355),
    [anon_sym_infixl] = ACTIONS(355),
    [anon_sym_infixr] = ACTIONS(355),
    [anon_sym_infix] = ACTIONS(355),
    [anon_sym_data] = ACTIONS(355),
    [anon_sym_newtype] = ACTIONS(355),
    [anon_sym_type] = ACTIONS(355),
    [sym__variable_pattern] = ACTIONS(357),
    [sym__constructor_pattern] = ACTIONS(357),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(357),
    [anon_sym_SQUOTE] = ACTIONS(355),
    [anon_sym_DQUOTE] = ACTIONS(355),
    [sym__integer_literal] = ACTIONS(355),
    [sym__octal_literal] = ACTIONS(355),
    [sym__hexidecimal_literal] = ACTIONS(355),
  },
  [594] = {
    [ts_builtin_sym_end] = ACTIONS(1391),
    [sym_comment] = ACTIONS(5),
  },
  [595] = {
    [sym__layout_semicolon] = ACTIONS(1393),
    [anon_sym_SEMI] = ACTIONS(1395),
    [sym_comment] = ACTIONS(5),
  },
  [596] = {
    [sym__layout_semicolon] = ACTIONS(1397),
    [anon_sym_SEMI] = ACTIONS(1399),
    [sym_comment] = ACTIONS(5),
  },
  [597] = {
    [anon_sym_RPAREN] = ACTIONS(1401),
    [sym_comment] = ACTIONS(5),
  },
  [598] = {
    [aux_sym_export_repeat1] = STATE(689),
    [anon_sym_COMMA] = ACTIONS(461),
    [anon_sym_RPAREN] = ACTIONS(1401),
    [sym_comment] = ACTIONS(5),
  },
  [599] = {
    [anon_sym_LPAREN] = ACTIONS(1403),
    [anon_sym_COMMA] = ACTIONS(1405),
    [anon_sym_RPAREN] = ACTIONS(1405),
    [sym_comment] = ACTIONS(5),
  },
  [600] = {
    [sym__identifier] = STATE(691),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [601] = {
    [sym__layout_semicolon] = ACTIONS(1407),
    [anon_sym_SEMI] = ACTIONS(1409),
    [sym_comment] = ACTIONS(5),
  },
  [602] = {
    [sym__identifier] = STATE(693),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [anon_sym_DOT_DOT] = ACTIONS(1411),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [603] = {
    [anon_sym_COMMA] = ACTIONS(1149),
    [anon_sym_RPAREN] = ACTIONS(1413),
    [sym_comment] = ACTIONS(5),
  },
  [604] = {
    [sym__variable_pattern] = ACTIONS(633),
    [sym__constructor_pattern] = ACTIONS(635),
    [sym_comment] = ACTIONS(5),
  },
  [605] = {
    [sym__layout_semicolon] = ACTIONS(1415),
    [anon_sym_SEMI] = ACTIONS(1417),
    [sym_comment] = ACTIONS(5),
  },
  [606] = {
    [anon_sym_COMMA] = ACTIONS(1419),
    [anon_sym_RPAREN] = ACTIONS(1419),
    [sym_comment] = ACTIONS(5),
  },
  [607] = {
    [anon_sym_COMMA] = ACTIONS(1421),
    [anon_sym_RPAREN] = ACTIONS(1421),
    [sym_comment] = ACTIONS(5),
  },
  [608] = {
    [sym__constructor_pattern] = ACTIONS(1423),
    [sym_comment] = ACTIONS(5),
  },
  [609] = {
    [sym_label] = STATE(619),
    [sym__identifier] = STATE(407),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(71),
    [sym_comment] = ACTIONS(5),
  },
  [610] = {
    [sym__layout_semicolon] = ACTIONS(1391),
    [anon_sym_SEMI] = ACTIONS(1425),
    [sym_comment] = ACTIONS(5),
  },
  [611] = {
    [anon_sym_RBRACE] = ACTIONS(1427),
    [anon_sym_COMMA] = ACTIONS(1427),
    [sym_comment] = ACTIONS(5),
  },
  [612] = {
    [anon_sym_COMMA] = ACTIONS(1429),
    [anon_sym_RPAREN] = ACTIONS(1429),
    [anon_sym_where] = ACTIONS(1429),
    [anon_sym_EQ_GT] = ACTIONS(1429),
    [sym_comment] = ACTIONS(5),
  },
  [613] = {
    [sym_field] = STATE(695),
    [sym_variable_identifier] = STATE(287),
    [sym__variable_pattern] = ACTIONS(483),
    [sym_comment] = ACTIONS(5),
  },
  [614] = {
    [anon_sym_COMMA] = ACTIONS(1431),
    [anon_sym_COLON_COLON] = ACTIONS(1431),
    [sym_comment] = ACTIONS(5),
  },
  [615] = {
    [sym__identifier] = STATE(290),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [616] = {
    [anon_sym_RBRACE] = ACTIONS(1433),
    [anon_sym_COMMA] = ACTIONS(1433),
    [sym_comment] = ACTIONS(5),
  },
  [617] = {
    [sym_variable_identifier] = STATE(696),
    [sym__variable_pattern] = ACTIONS(483),
    [sym_comment] = ACTIONS(5),
  },
  [618] = {
    [sym_strict] = STATE(697),
    [sym__identifier] = STATE(697),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [anon_sym_BANG] = ACTIONS(1185),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [619] = {
    [anon_sym_RBRACE] = ACTIONS(1435),
    [anon_sym_COMMA] = ACTIONS(1435),
    [anon_sym_RPAREN] = ACTIONS(1435),
    [anon_sym_where] = ACTIONS(1435),
    [anon_sym_EQ_GT] = ACTIONS(1435),
    [sym_comment] = ACTIONS(5),
  },
  [620] = {
    [sym__layout_semicolon] = ACTIONS(1437),
    [anon_sym_SEMI] = ACTIONS(1439),
    [sym_comment] = ACTIONS(5),
  },
  [621] = {
    [sym__layout_semicolon] = ACTIONS(1225),
    [anon_sym_SEMI] = ACTIONS(1179),
    [anon_sym_EQ] = ACTIONS(1179),
    [anon_sym_deriving] = ACTIONS(1179),
    [sym__constructor_pattern] = ACTIONS(1227),
    [sym_comment] = ACTIONS(5),
  },
  [622] = {
    [anon_sym_RBRACE] = ACTIONS(1441),
    [anon_sym_COMMA] = ACTIONS(1183),
    [sym_comment] = ACTIONS(5),
  },
  [623] = {
    [sym__layout_semicolon] = ACTIONS(1231),
    [anon_sym_SEMI] = ACTIONS(1191),
    [anon_sym_EQ] = ACTIONS(1191),
    [anon_sym_deriving] = ACTIONS(1191),
    [sym__constructor_pattern] = ACTIONS(1233),
    [sym_comment] = ACTIONS(5),
  },
  [624] = {
    [sym__layout_semicolon] = ACTIONS(599),
    [anon_sym_SEMI] = ACTIONS(601),
    [anon_sym_COMMA] = ACTIONS(601),
    [anon_sym_EQ] = ACTIONS(601),
    [anon_sym_deriving] = ACTIONS(601),
    [sym__constructor_pattern] = ACTIONS(603),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(603),
    [anon_sym_SQUOTE] = ACTIONS(601),
    [anon_sym_DQUOTE] = ACTIONS(601),
    [sym__integer_literal] = ACTIONS(601),
    [sym__octal_literal] = ACTIONS(601),
    [sym__hexidecimal_literal] = ACTIONS(601),
  },
  [625] = {
    [sym__layout_semicolon] = ACTIONS(631),
    [anon_sym_SEMI] = ACTIONS(633),
    [anon_sym_COMMA] = ACTIONS(633),
    [anon_sym_EQ] = ACTIONS(633),
    [anon_sym_deriving] = ACTIONS(633),
    [sym__constructor_pattern] = ACTIONS(635),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(635),
    [anon_sym_SQUOTE] = ACTIONS(633),
    [anon_sym_DQUOTE] = ACTIONS(633),
    [sym__integer_literal] = ACTIONS(633),
    [sym__octal_literal] = ACTIONS(633),
    [sym__hexidecimal_literal] = ACTIONS(633),
  },
  [626] = {
    [sym__layout_semicolon] = ACTIONS(1235),
    [anon_sym_SEMI] = ACTIONS(1197),
    [anon_sym_COMMA] = ACTIONS(1197),
    [anon_sym_EQ] = ACTIONS(1197),
    [anon_sym_deriving] = ACTIONS(1197),
    [sym__constructor_pattern] = ACTIONS(1237),
    [sym_comment] = ACTIONS(5),
  },
  [627] = {
    [anon_sym_EQ] = ACTIONS(1443),
    [sym_comment] = ACTIONS(5),
  },
  [628] = {
    [sym_label] = STATE(699),
    [sym__identifier] = STATE(627),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(71),
    [sym_comment] = ACTIONS(5),
  },
  [629] = {
    [sym__layout_semicolon] = ACTIONS(1239),
    [anon_sym_SEMI] = ACTIONS(1199),
    [anon_sym_COMMA] = ACTIONS(1199),
    [anon_sym_EQ] = ACTIONS(1199),
    [anon_sym_deriving] = ACTIONS(1199),
    [sym__constructor_pattern] = ACTIONS(1241),
    [sym_comment] = ACTIONS(5),
  },
  [630] = {
    [sym__layout_semicolon] = ACTIONS(1445),
    [anon_sym_SEMI] = ACTIONS(1447),
    [sym_comment] = ACTIONS(5),
  },
  [631] = {
    [anon_sym_COMMA] = ACTIONS(811),
    [anon_sym_RPAREN] = ACTIONS(1449),
    [sym_comment] = ACTIONS(5),
  },
  [632] = {
    [sym__layout_semicolon] = ACTIONS(1451),
    [anon_sym_SEMI] = ACTIONS(1453),
    [anon_sym_PIPE] = ACTIONS(1453),
    [anon_sym_deriving] = ACTIONS(1453),
    [sym_comment] = ACTIONS(5),
  },
  [633] = {
    [sym__layout_semicolon] = ACTIONS(1455),
    [anon_sym_SEMI] = ACTIONS(1429),
    [anon_sym_EQ] = ACTIONS(1429),
    [anon_sym_EQ_GT] = ACTIONS(1429),
    [anon_sym_PIPE] = ACTIONS(1429),
    [anon_sym_deriving] = ACTIONS(1429),
    [sym__constructor_pattern] = ACTIONS(1457),
    [sym_comment] = ACTIONS(5),
  },
  [634] = {
    [sym__layout_semicolon] = ACTIONS(1459),
    [anon_sym_SEMI] = ACTIONS(1435),
    [anon_sym_COMMA] = ACTIONS(1435),
    [anon_sym_EQ] = ACTIONS(1435),
    [anon_sym_EQ_GT] = ACTIONS(1435),
    [anon_sym_PIPE] = ACTIONS(1435),
    [anon_sym_deriving] = ACTIONS(1435),
    [sym__constructor_pattern] = ACTIONS(1461),
    [sym_comment] = ACTIONS(5),
  },
  [635] = {
    [sym__layout_semicolon] = ACTIONS(1463),
    [anon_sym_SEMI] = ACTIONS(1465),
    [sym_comment] = ACTIONS(5),
  },
  [636] = {
    [anon_sym_EQ] = ACTIONS(1429),
    [sym_comment] = ACTIONS(5),
  },
  [637] = {
    [anon_sym_COMMA] = ACTIONS(1435),
    [anon_sym_EQ] = ACTIONS(1435),
    [sym_comment] = ACTIONS(5),
  },
  [638] = {
    [sym__layout_close_brace] = ACTIONS(1467),
    [anon_sym_do] = ACTIONS(1469),
    [sym__variable_pattern] = ACTIONS(1471),
    [sym__constructor_pattern] = ACTIONS(1471),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1471),
    [anon_sym_SQUOTE] = ACTIONS(1469),
    [anon_sym_DQUOTE] = ACTIONS(1469),
    [sym__integer_literal] = ACTIONS(1469),
    [sym__octal_literal] = ACTIONS(1469),
    [sym__hexidecimal_literal] = ACTIONS(1469),
  },
  [639] = {
    [sym__identifier] = STATE(701),
    [sym_variable_identifier] = STATE(642),
    [sym_constructor_identifier] = STATE(642),
    [sym__variable_pattern] = ACTIONS(948),
    [sym__constructor_pattern] = ACTIONS(731),
    [sym_comment] = ACTIONS(5),
  },
  [640] = {
    [sym__layout_semicolon] = ACTIONS(579),
    [anon_sym_SEMI] = ACTIONS(495),
    [anon_sym_BANG] = ACTIONS(495),
    [sym__variable_pattern] = ACTIONS(495),
    [sym__constructor_pattern] = ACTIONS(497),
    [sym_comment] = ACTIONS(5),
  },
  [641] = {
    [sym__layout_semicolon] = ACTIONS(579),
    [anon_sym_SEMI] = ACTIONS(495),
    [anon_sym_EQ] = ACTIONS(916),
    [anon_sym_BANG] = ACTIONS(495),
    [sym__variable_pattern] = ACTIONS(495),
    [sym__constructor_pattern] = ACTIONS(497),
    [sym_comment] = ACTIONS(5),
  },
  [642] = {
    [sym__layout_semicolon] = ACTIONS(171),
    [anon_sym_SEMI] = ACTIONS(173),
    [anon_sym_EQ] = ACTIONS(173),
    [anon_sym_BANG] = ACTIONS(173),
    [sym__variable_pattern] = ACTIONS(173),
    [sym__constructor_pattern] = ACTIONS(175),
    [sym_comment] = ACTIONS(5),
  },
  [643] = {
    [sym_strict] = STATE(702),
    [sym__identifier] = STATE(702),
    [sym_variable_identifier] = STATE(642),
    [sym_constructor_identifier] = STATE(642),
    [sym__layout_semicolon] = ACTIONS(569),
    [anon_sym_SEMI] = ACTIONS(489),
    [anon_sym_BANG] = ACTIONS(1275),
    [sym__variable_pattern] = ACTIONS(948),
    [sym__constructor_pattern] = ACTIONS(731),
    [sym_comment] = ACTIONS(5),
  },
  [644] = {
    [sym__layout_semicolon] = ACTIONS(1473),
    [anon_sym_SEMI] = ACTIONS(1475),
    [anon_sym_where] = ACTIONS(1475),
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
  [645] = {
    [sym__layout_close_brace] = ACTIONS(1479),
    [anon_sym_do] = ACTIONS(1481),
    [sym__variable_pattern] = ACTIONS(1483),
    [sym__constructor_pattern] = ACTIONS(1483),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1483),
    [anon_sym_SQUOTE] = ACTIONS(1481),
    [anon_sym_DQUOTE] = ACTIONS(1481),
    [sym__integer_literal] = ACTIONS(1481),
    [sym__octal_literal] = ACTIONS(1481),
    [sym__hexidecimal_literal] = ACTIONS(1481),
  },
  [646] = {
    [anon_sym_RBRACE] = ACTIONS(1469),
    [anon_sym_do] = ACTIONS(1469),
    [sym__variable_pattern] = ACTIONS(1471),
    [sym__constructor_pattern] = ACTIONS(1471),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1471),
    [anon_sym_SQUOTE] = ACTIONS(1469),
    [anon_sym_DQUOTE] = ACTIONS(1469),
    [sym__integer_literal] = ACTIONS(1469),
    [sym__octal_literal] = ACTIONS(1469),
    [sym__hexidecimal_literal] = ACTIONS(1469),
  },
  [647] = {
    [anon_sym_RBRACE] = ACTIONS(1481),
    [anon_sym_do] = ACTIONS(1481),
    [sym__variable_pattern] = ACTIONS(1483),
    [sym__constructor_pattern] = ACTIONS(1483),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1483),
    [anon_sym_SQUOTE] = ACTIONS(1481),
    [anon_sym_DQUOTE] = ACTIONS(1481),
    [sym__integer_literal] = ACTIONS(1481),
    [sym__octal_literal] = ACTIONS(1481),
    [sym__hexidecimal_literal] = ACTIONS(1481),
  },
  [648] = {
    [sym__layout_semicolon] = ACTIONS(1225),
    [anon_sym_SEMI] = ACTIONS(1179),
    [anon_sym_where] = ACTIONS(1179),
    [anon_sym_do] = ACTIONS(1179),
    [sym__variable_pattern] = ACTIONS(1227),
    [sym__constructor_pattern] = ACTIONS(1227),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1227),
    [anon_sym_SQUOTE] = ACTIONS(1179),
    [anon_sym_DQUOTE] = ACTIONS(1179),
    [sym__integer_literal] = ACTIONS(1179),
    [sym__octal_literal] = ACTIONS(1179),
    [sym__hexidecimal_literal] = ACTIONS(1179),
  },
  [649] = {
    [anon_sym_RBRACE] = ACTIONS(1485),
    [anon_sym_COMMA] = ACTIONS(1183),
    [sym_comment] = ACTIONS(5),
  },
  [650] = {
    [sym__layout_semicolon] = ACTIONS(1231),
    [anon_sym_SEMI] = ACTIONS(1191),
    [anon_sym_where] = ACTIONS(1191),
    [anon_sym_do] = ACTIONS(1191),
    [sym__variable_pattern] = ACTIONS(1233),
    [sym__constructor_pattern] = ACTIONS(1233),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1233),
    [anon_sym_SQUOTE] = ACTIONS(1191),
    [anon_sym_DQUOTE] = ACTIONS(1191),
    [sym__integer_literal] = ACTIONS(1191),
    [sym__octal_literal] = ACTIONS(1191),
    [sym__hexidecimal_literal] = ACTIONS(1191),
  },
  [651] = {
    [sym__layout_semicolon] = ACTIONS(1235),
    [anon_sym_SEMI] = ACTIONS(1197),
    [anon_sym_COMMA] = ACTIONS(1197),
    [anon_sym_where] = ACTIONS(1197),
    [anon_sym_do] = ACTIONS(1197),
    [sym__variable_pattern] = ACTIONS(1237),
    [sym__constructor_pattern] = ACTIONS(1237),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1237),
    [anon_sym_SQUOTE] = ACTIONS(1197),
    [anon_sym_DQUOTE] = ACTIONS(1197),
    [sym__integer_literal] = ACTIONS(1197),
    [sym__octal_literal] = ACTIONS(1197),
    [sym__hexidecimal_literal] = ACTIONS(1197),
  },
  [652] = {
    [anon_sym_EQ] = ACTIONS(1010),
    [sym_comment] = ACTIONS(5),
  },
  [653] = {
    [sym_label] = STATE(704),
    [sym__identifier] = STATE(652),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(71),
    [sym_comment] = ACTIONS(5),
  },
  [654] = {
    [sym__layout_semicolon] = ACTIONS(1239),
    [anon_sym_SEMI] = ACTIONS(1199),
    [anon_sym_COMMA] = ACTIONS(1199),
    [anon_sym_where] = ACTIONS(1199),
    [anon_sym_do] = ACTIONS(1199),
    [sym__variable_pattern] = ACTIONS(1241),
    [sym__constructor_pattern] = ACTIONS(1241),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1241),
    [anon_sym_SQUOTE] = ACTIONS(1199),
    [anon_sym_DQUOTE] = ACTIONS(1199),
    [sym__integer_literal] = ACTIONS(1199),
    [sym__octal_literal] = ACTIONS(1199),
    [sym__hexidecimal_literal] = ACTIONS(1199),
  },
  [655] = {
    [anon_sym_COMMA] = ACTIONS(1487),
    [anon_sym_RPAREN] = ACTIONS(1487),
    [sym_comment] = ACTIONS(5),
  },
  [656] = {
    [anon_sym_LPAREN] = ACTIONS(873),
    [anon_sym_TILDE] = ACTIONS(873),
    [anon_sym_LBRACK] = ACTIONS(873),
    [anon_sym_DASH] = ACTIONS(873),
    [anon_sym__] = ACTIONS(873),
    [sym_list_constructor] = ACTIONS(873),
    [sym__variable_pattern] = ACTIONS(1489),
    [sym__constructor_pattern] = ACTIONS(1489),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1489),
    [anon_sym_SQUOTE] = ACTIONS(873),
    [anon_sym_DQUOTE] = ACTIONS(873),
    [sym__integer_literal] = ACTIONS(873),
    [sym__octal_literal] = ACTIONS(873),
    [sym__hexidecimal_literal] = ACTIONS(873),
  },
  [657] = {
    [anon_sym_LPAREN] = ACTIONS(877),
    [anon_sym_TILDE] = ACTIONS(877),
    [anon_sym_LBRACK] = ACTIONS(877),
    [anon_sym_DASH] = ACTIONS(877),
    [anon_sym__] = ACTIONS(877),
    [anon_sym_COLON] = ACTIONS(877),
    [sym_list_constructor] = ACTIONS(877),
    [anon_sym_BANG] = ACTIONS(877),
    [sym__variable_pattern] = ACTIONS(1491),
    [sym__constructor_pattern] = ACTIONS(1491),
    [anon_sym_DOT] = ACTIONS(877),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1491),
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
  [658] = {
    [anon_sym_LPAREN] = ACTIONS(889),
    [anon_sym_TILDE] = ACTIONS(889),
    [anon_sym_LBRACK] = ACTIONS(889),
    [anon_sym_DASH] = ACTIONS(889),
    [anon_sym__] = ACTIONS(889),
    [sym_list_constructor] = ACTIONS(889),
    [anon_sym_BANG] = ACTIONS(889),
    [sym__variable_pattern] = ACTIONS(1493),
    [sym__constructor_pattern] = ACTIONS(1493),
    [anon_sym_DOT] = ACTIONS(889),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1493),
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
  [659] = {
    [sym__op] = STATE(394),
    [sym_variable_symbol] = STATE(395),
    [sym_constructor_symbol] = STATE(395),
    [sym__variable_symbol] = STATE(396),
    [anon_sym_COMMA] = ACTIONS(1495),
    [anon_sym_RPAREN] = ACTIONS(1495),
    [anon_sym_DASH] = ACTIONS(677),
    [anon_sym_BQUOTE] = ACTIONS(679),
    [anon_sym_COLON] = ACTIONS(681),
    [anon_sym_BANG] = ACTIONS(677),
    [anon_sym_DOT] = ACTIONS(677),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(677),
    [anon_sym_DOLLAR] = ACTIONS(677),
    [anon_sym_PERCENT] = ACTIONS(677),
    [anon_sym_AMP] = ACTIONS(677),
    [anon_sym_1] = ACTIONS(677),
    [anon_sym_PLUS] = ACTIONS(677),
    [anon_sym_SLASH] = ACTIONS(677),
    [anon_sym_LT] = ACTIONS(677),
    [anon_sym_GT] = ACTIONS(677),
    [anon_sym_QMARK] = ACTIONS(677),
    [anon_sym_CARET] = ACTIONS(677),
  },
  [660] = {
    [anon_sym_COMMA] = ACTIONS(1495),
    [anon_sym_RPAREN] = ACTIONS(1495),
    [sym_comment] = ACTIONS(5),
  },
  [661] = {
    [anon_sym_LPAREN] = ACTIONS(1327),
    [anon_sym_COMMA] = ACTIONS(1327),
    [anon_sym_RPAREN] = ACTIONS(1327),
    [anon_sym_LBRACK] = ACTIONS(1327),
    [anon_sym_RBRACK] = ACTIONS(1327),
    [anon_sym_DASH_GT] = ACTIONS(1327),
    [sym_unit_type] = ACTIONS(1327),
    [sym_list_constructor] = ACTIONS(1327),
    [sym_function_constructor] = ACTIONS(1327),
    [sym__variable_pattern] = ACTIONS(1327),
    [sym__constructor_pattern] = ACTIONS(1497),
    [sym_module_identifier] = ACTIONS(1497),
    [sym_comment] = ACTIONS(5),
  },
  [662] = {
    [anon_sym_COMMA] = ACTIONS(1329),
    [anon_sym_RPAREN] = ACTIONS(1499),
    [sym_comment] = ACTIONS(5),
  },
  [663] = {
    [anon_sym_LPAREN] = ACTIONS(1340),
    [anon_sym_COMMA] = ACTIONS(1340),
    [anon_sym_RPAREN] = ACTIONS(1340),
    [anon_sym_LBRACK] = ACTIONS(1340),
    [anon_sym_RBRACK] = ACTIONS(1340),
    [anon_sym_DASH_GT] = ACTIONS(1340),
    [sym_unit_type] = ACTIONS(1340),
    [sym_list_constructor] = ACTIONS(1340),
    [sym_function_constructor] = ACTIONS(1340),
    [sym__variable_pattern] = ACTIONS(1340),
    [sym__constructor_pattern] = ACTIONS(1501),
    [sym_module_identifier] = ACTIONS(1501),
    [sym_comment] = ACTIONS(5),
  },
  [664] = {
    [anon_sym_COMMA] = ACTIONS(1343),
    [anon_sym_RPAREN] = ACTIONS(1504),
    [sym_comment] = ACTIONS(5),
  },
  [665] = {
    [anon_sym_COMMA] = ACTIONS(1506),
    [anon_sym_RPAREN] = ACTIONS(1506),
    [sym_comment] = ACTIONS(5),
  },
  [666] = {
    [sym__layout_semicolon] = ACTIONS(1508),
    [anon_sym_SEMI] = ACTIONS(1510),
    [anon_sym_DASH_GT] = ACTIONS(1510),
    [sym_comment] = ACTIONS(5),
  },
  [667] = {
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
    [sym__constructor_pattern] = ACTIONS(1512),
    [sym_module_identifier] = ACTIONS(1512),
    [sym_comment] = ACTIONS(5),
  },
  [668] = {
    [sym_variable_identifier] = STATE(339),
    [aux_sym_simple_type_repeat1] = STATE(707),
    [anon_sym_COMMA] = ACTIONS(1373),
    [anon_sym_RPAREN] = ACTIONS(1373),
    [anon_sym_DASH_GT] = ACTIONS(1373),
    [sym__variable_pattern] = ACTIONS(277),
    [sym_comment] = ACTIONS(5),
  },
  [669] = {
    [sym_variable_identifier] = STATE(343),
    [anon_sym_COMMA] = ACTIONS(1373),
    [anon_sym_RPAREN] = ACTIONS(1373),
    [anon_sym_DASH_GT] = ACTIONS(1373),
    [sym__variable_pattern] = ACTIONS(277),
    [sym_comment] = ACTIONS(5),
  },
  [670] = {
    [sym_constructor_identifier] = STATE(708),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_module_identifier] = ACTIONS(1375),
    [sym_comment] = ACTIONS(5),
  },
  [671] = {
    [anon_sym_COMMA] = ACTIONS(1514),
    [anon_sym_RPAREN] = ACTIONS(1514),
    [sym_comment] = ACTIONS(5),
  },
  [672] = {
    [sym_type] = STATE(709),
    [sym__generic_type_constructor] = STATE(415),
    [sym_tupling_constructor] = STATE(411),
    [sym_tuple] = STATE(415),
    [sym_list] = STATE(415),
    [sym_parenthesized_constructor] = STATE(415),
    [sym_variable_identifier] = STATE(417),
    [sym__type_constructors] = STATE(411),
    [sym_qualified_type_constructor] = STATE(418),
    [anon_sym_LPAREN] = ACTIONS(705),
    [anon_sym_LBRACK] = ACTIONS(709),
    [sym_unit_type] = ACTIONS(711),
    [sym_list_constructor] = ACTIONS(711),
    [sym_function_constructor] = ACTIONS(711),
    [sym__variable_pattern] = ACTIONS(483),
    [sym__constructor_pattern] = ACTIONS(946),
    [sym_module_identifier] = ACTIONS(715),
    [sym_comment] = ACTIONS(5),
  },
  [673] = {
    [sym__layout_semicolon] = ACTIONS(1516),
    [anon_sym_SEMI] = ACTIONS(1518),
    [anon_sym_DASH_GT] = ACTIONS(1518),
    [sym_comment] = ACTIONS(5),
  },
  [674] = {
    [anon_sym_LPAREN] = ACTIONS(1379),
    [anon_sym_COMMA] = ACTIONS(1379),
    [anon_sym_RPAREN] = ACTIONS(1379),
    [anon_sym_LBRACK] = ACTIONS(1379),
    [anon_sym_RBRACK] = ACTIONS(1379),
    [sym_unit_type] = ACTIONS(1379),
    [sym_list_constructor] = ACTIONS(1379),
    [sym_function_constructor] = ACTIONS(1379),
    [sym__variable_pattern] = ACTIONS(1379),
    [sym__constructor_pattern] = ACTIONS(1520),
    [sym_module_identifier] = ACTIONS(1520),
    [sym_comment] = ACTIONS(5),
  },
  [675] = {
    [anon_sym_LPAREN] = ACTIONS(1522),
    [anon_sym_LBRACK] = ACTIONS(1522),
    [sym_unit_type] = ACTIONS(1522),
    [sym_list_constructor] = ACTIONS(1522),
    [sym_function_constructor] = ACTIONS(1522),
    [sym__variable_pattern] = ACTIONS(1522),
    [sym__constructor_pattern] = ACTIONS(1169),
    [sym_module_identifier] = ACTIONS(1169),
    [sym_comment] = ACTIONS(5),
  },
  [676] = {
    [anon_sym_EQ_GT] = ACTIONS(1524),
    [sym_comment] = ACTIONS(5),
  },
  [677] = {
    [anon_sym_LPAREN] = ACTIONS(1383),
    [anon_sym_COMMA] = ACTIONS(1383),
    [anon_sym_RPAREN] = ACTIONS(1383),
    [anon_sym_LBRACK] = ACTIONS(1383),
    [anon_sym_RBRACK] = ACTIONS(1383),
    [sym_unit_type] = ACTIONS(1383),
    [sym_list_constructor] = ACTIONS(1383),
    [sym_function_constructor] = ACTIONS(1383),
    [sym__variable_pattern] = ACTIONS(1383),
    [sym__constructor_pattern] = ACTIONS(1526),
    [sym_module_identifier] = ACTIONS(1526),
    [sym_comment] = ACTIONS(5),
  },
  [678] = {
    [sym_variable_identifier] = STATE(339),
    [aux_sym_simple_type_repeat1] = STATE(711),
    [anon_sym_LPAREN] = ACTIONS(1373),
    [anon_sym_LBRACK] = ACTIONS(1373),
    [anon_sym_RBRACK] = ACTIONS(1373),
    [anon_sym_DASH_GT] = ACTIONS(1373),
    [sym_unit_type] = ACTIONS(1373),
    [sym_list_constructor] = ACTIONS(1373),
    [sym_function_constructor] = ACTIONS(1373),
    [sym__variable_pattern] = ACTIONS(717),
    [sym__constructor_pattern] = ACTIONS(1528),
    [sym_module_identifier] = ACTIONS(1528),
    [sym_comment] = ACTIONS(5),
  },
  [679] = {
    [sym_variable_identifier] = STATE(343),
    [anon_sym_LPAREN] = ACTIONS(1373),
    [anon_sym_LBRACK] = ACTIONS(1373),
    [anon_sym_RBRACK] = ACTIONS(1373),
    [anon_sym_DASH_GT] = ACTIONS(1373),
    [sym_unit_type] = ACTIONS(1373),
    [sym_list_constructor] = ACTIONS(1373),
    [sym_function_constructor] = ACTIONS(1373),
    [sym__variable_pattern] = ACTIONS(717),
    [sym__constructor_pattern] = ACTIONS(1528),
    [sym_module_identifier] = ACTIONS(1528),
    [sym_comment] = ACTIONS(5),
  },
  [680] = {
    [sym_constructor_identifier] = STATE(712),
    [sym__constructor_pattern] = ACTIONS(1083),
    [sym_module_identifier] = ACTIONS(1375),
    [sym_comment] = ACTIONS(5),
  },
  [681] = {
    [sym_variable_identifier] = STATE(581),
    [sym__layout_semicolon] = ACTIONS(1530),
    [anon_sym_SEMI] = ACTIONS(1532),
    [anon_sym_DASH_GT] = ACTIONS(1532),
    [sym__variable_pattern] = ACTIONS(948),
    [sym_comment] = ACTIONS(5),
  },
  [682] = {
    [sym__constructor_pattern] = ACTIONS(1534),
    [anon_sym_DOT] = ACTIONS(1536),
    [sym_comment] = ACTIONS(5),
  },
  [683] = {
    [sym_variable_identifier] = STATE(427),
    [aux_sym_simple_type_repeat1] = STATE(713),
    [sym__layout_semicolon] = ACTIONS(1530),
    [anon_sym_SEMI] = ACTIONS(1532),
    [anon_sym_DASH_GT] = ACTIONS(1532),
    [sym__variable_pattern] = ACTIONS(948),
    [sym_comment] = ACTIONS(5),
  },
  [684] = {
    [anon_sym_COMMA] = ACTIONS(1538),
    [anon_sym_RPAREN] = ACTIONS(1538),
    [sym_comment] = ACTIONS(5),
  },
  [685] = {
    [anon_sym_COMMA] = ACTIONS(1540),
    [anon_sym_RPAREN] = ACTIONS(1540),
    [sym_comment] = ACTIONS(5),
  },
  [686] = {
    [anon_sym_COMMA] = ACTIONS(811),
    [anon_sym_RPAREN] = ACTIONS(1542),
    [sym_comment] = ACTIONS(5),
  },
  [687] = {
    [sym__layout_close_brace] = ACTIONS(757),
    [anon_sym_import] = ACTIONS(759),
    [anon_sym_foreign] = ACTIONS(759),
    [anon_sym_default] = ACTIONS(759),
    [anon_sym_class] = ACTIONS(759),
    [anon_sym_instance] = ACTIONS(759),
    [anon_sym_infixl] = ACTIONS(759),
    [anon_sym_infixr] = ACTIONS(759),
    [anon_sym_infix] = ACTIONS(759),
    [anon_sym_data] = ACTIONS(759),
    [anon_sym_newtype] = ACTIONS(759),
    [anon_sym_type] = ACTIONS(759),
    [sym__variable_pattern] = ACTIONS(761),
    [sym__constructor_pattern] = ACTIONS(761),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(761),
    [anon_sym_SQUOTE] = ACTIONS(759),
    [anon_sym_DQUOTE] = ACTIONS(759),
    [sym__integer_literal] = ACTIONS(759),
    [sym__octal_literal] = ACTIONS(759),
    [sym__hexidecimal_literal] = ACTIONS(759),
  },
  [688] = {
    [aux_sym_import_specification_repeat1] = STATE(716),
    [anon_sym_COMMA] = ACTIONS(793),
    [anon_sym_RPAREN] = ACTIONS(1544),
    [sym_comment] = ACTIONS(5),
  },
  [689] = {
    [anon_sym_COMMA] = ACTIONS(811),
    [anon_sym_RPAREN] = ACTIONS(1546),
    [sym_comment] = ACTIONS(5),
  },
  [690] = {
    [sym__identifier] = STATE(719),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [anon_sym_DOT_DOT] = ACTIONS(1548),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [691] = {
    [anon_sym_LPAREN] = ACTIONS(1550),
    [anon_sym_COMMA] = ACTIONS(1552),
    [anon_sym_RPAREN] = ACTIONS(1552),
    [sym_comment] = ACTIONS(5),
  },
  [692] = {
    [anon_sym_RPAREN] = ACTIONS(1546),
    [sym_comment] = ACTIONS(5),
  },
  [693] = {
    [aux_sym_export_repeat1] = STATE(721),
    [anon_sym_COMMA] = ACTIONS(461),
    [anon_sym_RPAREN] = ACTIONS(1546),
    [sym_comment] = ACTIONS(5),
  },
  [694] = {
    [sym__layout_semicolon] = ACTIONS(1554),
    [anon_sym_SEMI] = ACTIONS(1556),
    [sym_comment] = ACTIONS(5),
  },
  [695] = {
    [anon_sym_RBRACE] = ACTIONS(1558),
    [anon_sym_COMMA] = ACTIONS(1558),
    [sym_comment] = ACTIONS(5),
  },
  [696] = {
    [anon_sym_COMMA] = ACTIONS(1560),
    [anon_sym_COLON_COLON] = ACTIONS(1560),
    [sym_comment] = ACTIONS(5),
  },
  [697] = {
    [anon_sym_RBRACE] = ACTIONS(1562),
    [anon_sym_COMMA] = ACTIONS(1562),
    [sym_comment] = ACTIONS(5),
  },
  [698] = {
    [sym__layout_semicolon] = ACTIONS(1455),
    [anon_sym_SEMI] = ACTIONS(1429),
    [anon_sym_EQ] = ACTIONS(1429),
    [anon_sym_deriving] = ACTIONS(1429),
    [sym__constructor_pattern] = ACTIONS(1457),
    [sym_comment] = ACTIONS(5),
  },
  [699] = {
    [sym__layout_semicolon] = ACTIONS(1459),
    [anon_sym_SEMI] = ACTIONS(1435),
    [anon_sym_COMMA] = ACTIONS(1435),
    [anon_sym_EQ] = ACTIONS(1435),
    [anon_sym_deriving] = ACTIONS(1435),
    [sym__constructor_pattern] = ACTIONS(1461),
    [sym_comment] = ACTIONS(5),
  },
  [700] = {
    [sym__layout_semicolon] = ACTIONS(1564),
    [anon_sym_SEMI] = ACTIONS(1566),
    [sym_comment] = ACTIONS(5),
  },
  [701] = {
    [sym__layout_semicolon] = ACTIONS(922),
    [anon_sym_SEMI] = ACTIONS(847),
    [anon_sym_BANG] = ACTIONS(847),
    [sym__variable_pattern] = ACTIONS(847),
    [sym__constructor_pattern] = ACTIONS(849),
    [sym_comment] = ACTIONS(5),
  },
  [702] = {
    [sym__layout_semicolon] = ACTIONS(930),
    [anon_sym_SEMI] = ACTIONS(859),
    [anon_sym_BANG] = ACTIONS(859),
    [sym__variable_pattern] = ACTIONS(859),
    [sym__constructor_pattern] = ACTIONS(861),
    [sym_comment] = ACTIONS(5),
  },
  [703] = {
    [sym__layout_semicolon] = ACTIONS(1455),
    [anon_sym_SEMI] = ACTIONS(1429),
    [anon_sym_where] = ACTIONS(1429),
    [anon_sym_do] = ACTIONS(1429),
    [sym__variable_pattern] = ACTIONS(1457),
    [sym__constructor_pattern] = ACTIONS(1457),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1457),
    [anon_sym_SQUOTE] = ACTIONS(1429),
    [anon_sym_DQUOTE] = ACTIONS(1429),
    [sym__integer_literal] = ACTIONS(1429),
    [sym__octal_literal] = ACTIONS(1429),
    [sym__hexidecimal_literal] = ACTIONS(1429),
  },
  [704] = {
    [sym__layout_semicolon] = ACTIONS(1459),
    [anon_sym_SEMI] = ACTIONS(1435),
    [anon_sym_COMMA] = ACTIONS(1435),
    [anon_sym_where] = ACTIONS(1435),
    [anon_sym_do] = ACTIONS(1435),
    [sym__variable_pattern] = ACTIONS(1461),
    [sym__constructor_pattern] = ACTIONS(1461),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1461),
    [anon_sym_SQUOTE] = ACTIONS(1435),
    [anon_sym_DQUOTE] = ACTIONS(1435),
    [sym__integer_literal] = ACTIONS(1435),
    [sym__octal_literal] = ACTIONS(1435),
    [sym__hexidecimal_literal] = ACTIONS(1435),
  },
  [705] = {
    [anon_sym_LPAREN] = ACTIONS(1510),
    [anon_sym_COMMA] = ACTIONS(1510),
    [anon_sym_RPAREN] = ACTIONS(1510),
    [anon_sym_LBRACK] = ACTIONS(1510),
    [anon_sym_RBRACK] = ACTIONS(1510),
    [anon_sym_DASH_GT] = ACTIONS(1510),
    [sym_unit_type] = ACTIONS(1510),
    [sym_list_constructor] = ACTIONS(1510),
    [sym_function_constructor] = ACTIONS(1510),
    [sym__variable_pattern] = ACTIONS(1510),
    [sym__constructor_pattern] = ACTIONS(1568),
    [sym_module_identifier] = ACTIONS(1568),
    [sym_comment] = ACTIONS(5),
  },
  [706] = {
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
    [sym__constructor_pattern] = ACTIONS(1570),
    [sym_module_identifier] = ACTIONS(1570),
    [sym_comment] = ACTIONS(5),
  },
  [707] = {
    [sym_variable_identifier] = STATE(343),
    [anon_sym_COMMA] = ACTIONS(1532),
    [anon_sym_RPAREN] = ACTIONS(1532),
    [anon_sym_DASH_GT] = ACTIONS(1532),
    [sym__variable_pattern] = ACTIONS(277),
    [sym_comment] = ACTIONS(5),
  },
  [708] = {
    [sym_variable_identifier] = STATE(339),
    [aux_sym_simple_type_repeat1] = STATE(722),
    [anon_sym_COMMA] = ACTIONS(1532),
    [anon_sym_RPAREN] = ACTIONS(1532),
    [anon_sym_DASH_GT] = ACTIONS(1532),
    [sym__variable_pattern] = ACTIONS(277),
    [sym_comment] = ACTIONS(5),
  },
  [709] = {
    [anon_sym_COMMA] = ACTIONS(1572),
    [anon_sym_RPAREN] = ACTIONS(1572),
    [sym_comment] = ACTIONS(5),
  },
  [710] = {
    [anon_sym_LPAREN] = ACTIONS(1574),
    [anon_sym_LBRACK] = ACTIONS(1574),
    [sym_unit_type] = ACTIONS(1574),
    [sym_list_constructor] = ACTIONS(1574),
    [sym_function_constructor] = ACTIONS(1574),
    [sym__variable_pattern] = ACTIONS(1574),
    [sym__constructor_pattern] = ACTIONS(1423),
    [sym_module_identifier] = ACTIONS(1423),
    [sym_comment] = ACTIONS(5),
  },
  [711] = {
    [sym_variable_identifier] = STATE(343),
    [anon_sym_LPAREN] = ACTIONS(1532),
    [anon_sym_LBRACK] = ACTIONS(1532),
    [anon_sym_RBRACK] = ACTIONS(1532),
    [anon_sym_DASH_GT] = ACTIONS(1532),
    [sym_unit_type] = ACTIONS(1532),
    [sym_list_constructor] = ACTIONS(1532),
    [sym_function_constructor] = ACTIONS(1532),
    [sym__variable_pattern] = ACTIONS(717),
    [sym__constructor_pattern] = ACTIONS(1576),
    [sym_module_identifier] = ACTIONS(1576),
    [sym_comment] = ACTIONS(5),
  },
  [712] = {
    [sym_variable_identifier] = STATE(339),
    [aux_sym_simple_type_repeat1] = STATE(723),
    [anon_sym_LPAREN] = ACTIONS(1532),
    [anon_sym_LBRACK] = ACTIONS(1532),
    [anon_sym_RBRACK] = ACTIONS(1532),
    [anon_sym_DASH_GT] = ACTIONS(1532),
    [sym_unit_type] = ACTIONS(1532),
    [sym_list_constructor] = ACTIONS(1532),
    [sym_function_constructor] = ACTIONS(1532),
    [sym__variable_pattern] = ACTIONS(717),
    [sym__constructor_pattern] = ACTIONS(1576),
    [sym_module_identifier] = ACTIONS(1576),
    [sym_comment] = ACTIONS(5),
  },
  [713] = {
    [sym_variable_identifier] = STATE(581),
    [sym__layout_semicolon] = ACTIONS(1578),
    [anon_sym_SEMI] = ACTIONS(1580),
    [anon_sym_DASH_GT] = ACTIONS(1580),
    [sym__variable_pattern] = ACTIONS(948),
    [sym_comment] = ACTIONS(5),
  },
  [714] = {
    [anon_sym_COMMA] = ACTIONS(1582),
    [anon_sym_RPAREN] = ACTIONS(1582),
    [sym_comment] = ACTIONS(5),
  },
  [715] = {
    [sym__layout_semicolon] = ACTIONS(1584),
    [anon_sym_SEMI] = ACTIONS(1586),
    [sym_comment] = ACTIONS(5),
  },
  [716] = {
    [anon_sym_COMMA] = ACTIONS(1149),
    [anon_sym_RPAREN] = ACTIONS(1588),
    [sym_comment] = ACTIONS(5),
  },
  [717] = {
    [aux_sym_import_specification_repeat1] = STATE(725),
    [anon_sym_COMMA] = ACTIONS(793),
    [anon_sym_RPAREN] = ACTIONS(1588),
    [sym_comment] = ACTIONS(5),
  },
  [718] = {
    [anon_sym_RPAREN] = ACTIONS(1590),
    [sym_comment] = ACTIONS(5),
  },
  [719] = {
    [aux_sym_export_repeat1] = STATE(727),
    [anon_sym_COMMA] = ACTIONS(461),
    [anon_sym_RPAREN] = ACTIONS(1590),
    [sym_comment] = ACTIONS(5),
  },
  [720] = {
    [sym__identifier] = STATE(729),
    [sym_variable_identifier] = STATE(96),
    [sym_constructor_identifier] = STATE(96),
    [anon_sym_DOT_DOT] = ACTIONS(1592),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [721] = {
    [anon_sym_COMMA] = ACTIONS(811),
    [anon_sym_RPAREN] = ACTIONS(1594),
    [sym_comment] = ACTIONS(5),
  },
  [722] = {
    [sym_variable_identifier] = STATE(343),
    [anon_sym_COMMA] = ACTIONS(1580),
    [anon_sym_RPAREN] = ACTIONS(1580),
    [anon_sym_DASH_GT] = ACTIONS(1580),
    [sym__variable_pattern] = ACTIONS(277),
    [sym_comment] = ACTIONS(5),
  },
  [723] = {
    [sym_variable_identifier] = STATE(343),
    [anon_sym_LPAREN] = ACTIONS(1580),
    [anon_sym_LBRACK] = ACTIONS(1580),
    [anon_sym_RBRACK] = ACTIONS(1580),
    [anon_sym_DASH_GT] = ACTIONS(1580),
    [sym_unit_type] = ACTIONS(1580),
    [sym_list_constructor] = ACTIONS(1580),
    [sym_function_constructor] = ACTIONS(1580),
    [sym__variable_pattern] = ACTIONS(717),
    [sym__constructor_pattern] = ACTIONS(1596),
    [sym_module_identifier] = ACTIONS(1596),
    [sym_comment] = ACTIONS(5),
  },
  [724] = {
    [sym__layout_semicolon] = ACTIONS(1598),
    [anon_sym_SEMI] = ACTIONS(1600),
    [sym_comment] = ACTIONS(5),
  },
  [725] = {
    [anon_sym_COMMA] = ACTIONS(1149),
    [anon_sym_RPAREN] = ACTIONS(1602),
    [sym_comment] = ACTIONS(5),
  },
  [726] = {
    [anon_sym_COMMA] = ACTIONS(1604),
    [anon_sym_RPAREN] = ACTIONS(1604),
    [sym_comment] = ACTIONS(5),
  },
  [727] = {
    [anon_sym_COMMA] = ACTIONS(811),
    [anon_sym_RPAREN] = ACTIONS(1606),
    [sym_comment] = ACTIONS(5),
  },
  [728] = {
    [anon_sym_RPAREN] = ACTIONS(1606),
    [sym_comment] = ACTIONS(5),
  },
  [729] = {
    [aux_sym_export_repeat1] = STATE(733),
    [anon_sym_COMMA] = ACTIONS(461),
    [anon_sym_RPAREN] = ACTIONS(1606),
    [sym_comment] = ACTIONS(5),
  },
  [730] = {
    [aux_sym_import_specification_repeat1] = STATE(734),
    [anon_sym_COMMA] = ACTIONS(793),
    [anon_sym_RPAREN] = ACTIONS(1602),
    [sym_comment] = ACTIONS(5),
  },
  [731] = {
    [sym__layout_semicolon] = ACTIONS(1608),
    [anon_sym_SEMI] = ACTIONS(1610),
    [sym_comment] = ACTIONS(5),
  },
  [732] = {
    [anon_sym_COMMA] = ACTIONS(1612),
    [anon_sym_RPAREN] = ACTIONS(1612),
    [sym_comment] = ACTIONS(5),
  },
  [733] = {
    [anon_sym_COMMA] = ACTIONS(811),
    [anon_sym_RPAREN] = ACTIONS(1614),
    [sym_comment] = ACTIONS(5),
  },
  [734] = {
    [anon_sym_COMMA] = ACTIONS(1149),
    [anon_sym_RPAREN] = ACTIONS(1616),
    [sym_comment] = ACTIONS(5),
  },
  [735] = {
    [anon_sym_COMMA] = ACTIONS(1618),
    [anon_sym_RPAREN] = ACTIONS(1618),
    [sym_comment] = ACTIONS(5),
  },
  [736] = {
    [sym__layout_semicolon] = ACTIONS(1620),
    [anon_sym_SEMI] = ACTIONS(1622),
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
  [165] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__variable, 1),
  [167] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__variable, 1),
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
  [213] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor, 1, .fragile = true),
  [215] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(122),
  [217] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(123),
  [219] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(124),
  [221] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(125),
  [223] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(126),
  [225] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(127),
  [227] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__variable_symbol, 1),
  [229] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__variable_symbol, 1),
  [231] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 1),
  [233] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_symbol, 1),
  [235] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(139),
  [237] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fixity, 2),
  [239] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 2),
  [241] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(142),
  [243] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__op, 1),
  [245] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__op, 1),
  [247] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 1, .fragile = true),
  [249] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_symbol, 1, .fragile = true),
  [251] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(147),
  [253] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 2),
  [255] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 2),
  [257] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(150),
  [259] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(151),
  [261] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor, 1, .fragile = true),
  [263] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(156),
  [265] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(157),
  [267] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(158),
  [269] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(159),
  [271] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(169),
  [273] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_simple_type, 1, .alias_sequence_id = 1),
  [275] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(170),
  [277] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(171),
  [279] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(177),
  [281] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(178),
  [283] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(179),
  [285] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(180),
  [287] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(181),
  [289] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_qualified_variable_identifier, 2),
  [291] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_qualified_variable_identifier, 2),
  [293] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__special, 1),
  [295] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__symbol, 1),
  [297] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__small, 1),
  [299] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(190),
  [301] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__graphic, 1),
  [303] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__large, 1),
  [305] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(191),
  [307] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(192),
  [309] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(193),
  [311] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(194),
  [313] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(195),
  [315] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(196),
  [317] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__special, 1),
  [319] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__symbol, 1),
  [321] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__small, 1),
  [323] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 1),
  [325] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [327] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 2),
  [329] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [331] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__graphic, 1),
  [333] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__large, 1),
  [335] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(197),
  [337] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(198),
  [339] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(199),
  [341] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(200),
  [343] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(201),
  [345] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(202),
  [347] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__gap, 1),
  [349] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(203),
  [351] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(204),
  [353] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
  [355] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 2),
  [357] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
  [359] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_body, 1),
  [361] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_body, 1),
  [363] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(205),
  [365] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(206),
  [367] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(207),
  [369] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(208),
  [371] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(209),
  [373] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(210),
  [375] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(211),
  [377] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_declaration, 2),
  [379] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_declaration, 2),
  [381] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(218),
  [383] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(219),
  [385] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(220),
  [387] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(227),
  [389] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(228),
  [391] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_wildcard, 1),
  [393] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_wildcard, 1),
  [395] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__function_pattern, 1),
  [397] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__function_pattern, 1),
  [399] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(231),
  [401] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(232),
  [403] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_function_head_repeat1, 1),
  [405] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_function_head_repeat1, 1),
  [407] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(234),
  [409] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(235),
  [411] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_head, 2),
  [413] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(237),
  [415] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(238),
  [417] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(239),
  [419] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(12),
  [421] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(240),
  [423] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(241),
  [425] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(249),
  [427] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(249),
  [429] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(250),
  [431] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(253),
  [433] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(254),
  [435] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 3),
  [437] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 3),
  [439] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 3),
  [441] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(257),
  [443] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(259),
  [445] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(261),
  [447] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(262),
  [449] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_calling_convention, 1),
  [451] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_calling_convention, 1),
  [453] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(263),
  [455] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(264),
  [457] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default, 3),
  [459] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_default, 3),
  [461] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(269),
  [463] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(270),
  [465] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(272),
  [467] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(273),
  [469] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(279),
  [471] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(280),
  [473] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(283),
  [475] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(284),
  [477] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 2),
  [479] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 3),
  [481] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 3),
  [483] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(123),
  [485] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(291),
  [487] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(292),
  [489] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor, 2, .fragile = true),
  [491] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(294),
  [493] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_labels, 1),
  [495] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat1, 1, .fragile = true),
  [497] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 1, .fragile = true),
  [499] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat3, 1),
  [501] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat3, 1),
  [503] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(296),
  [505] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class_instance, 3),
  [507] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class_instance, 3),
  [509] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(300),
  [511] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__constructor_symbol, 1),
  [513] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__constructor_symbol, 1),
  [515] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_symbol_repeat1, 1),
  [517] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_symbol_repeat1, 1),
  [519] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 2),
  [521] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_symbol, 2),
  [523] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fixity, 3),
  [525] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 3),
  [527] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(303),
  [529] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 1),
  [531] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_variable_symbol_repeat1, 1),
  [533] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 2, .fragile = true),
  [535] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_symbol, 2, .fragile = true),
  [537] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 3),
  [539] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 3),
  [541] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(306),
  [543] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(309),
  [545] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(310),
  [547] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(311),
  [549] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(312),
  [551] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(313),
  [553] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(314),
  [555] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(315),
  [557] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(316),
  [559] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(325),
  [561] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructors, 1),
  [563] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructors, 1),
  [565] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(327),
  [567] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(159),
  [569] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor, 2, .fragile = true),
  [571] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor, 2, .fragile = true),
  [573] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_labels, 1),
  [575] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(333),
  [577] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_labels, 1),
  [579] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 1, .fragile = true),
  [581] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat3, 1),
  [583] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat1, 1, .fragile = true), SHIFT(335),
  [586] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(338),
  [588] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_simple_type, 2, .alias_sequence_id = 2),
  [590] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(344),
  [592] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(345),
  [594] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(350),
  [596] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat1, 1, .fragile = true), SHIFT(352),
  [599] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [601] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_char, 3),
  [603] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [605] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__char_escape, 1),
  [607] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__escape, 2),
  [609] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(355),
  [611] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(357),
  [613] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(359),
  [615] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__ascii, 1),
  [617] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__char_escape, 1),
  [619] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 2),
  [621] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(361),
  [623] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(363),
  [625] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(365),
  [627] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 1),
  [629] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 2),
  [631] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [633] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 3),
  [635] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [637] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(367),
  [639] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(368),
  [641] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(371),
  [643] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(372),
  [645] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_body, 2),
  [647] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_body, 2),
  [649] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [651] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
  [653] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [655] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__variable, 1),
  [657] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_function_body_repeat1, 1),
  [659] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_function_body_repeat1, 1),
  [661] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_function_body_repeat1, 1),
  [663] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(374),
  [665] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(375),
  [667] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(376),
  [669] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(377),
  [671] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(388),
  [673] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(389),
  [675] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(390),
  [677] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(391),
  [679] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(392),
  [681] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(393),
  [683] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__pattern, 1),
  [685] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(398),
  [687] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_irrefutable_pattern, 2),
  [689] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_irrefutable_pattern, 2),
  [691] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(399),
  [693] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(400),
  [695] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(401),
  [697] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(402),
  [699] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(404),
  [701] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_function_head_repeat1, 2),
  [703] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_function_head_repeat1, 2),
  [705] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(408),
  [707] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(409),
  [709] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(410),
  [711] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(411),
  [713] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(412),
  [715] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(413),
  [717] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(419),
  [719] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(420),
  [721] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(421),
  [723] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__generic_type_constructor, 1),
  [725] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__generic_type_constructor, 1),
  [727] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 1, .fragile = true, .alias_sequence_id = 1),
  [729] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type_constructors, 1, .fragile = true, .alias_sequence_id = 1),
  [731] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(429),
  [733] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(430),
  [735] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_signature, 3),
  [737] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_signature, 3),
  [739] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type, 1),
  [741] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type, 1),
  [743] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(433),
  [745] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(435),
  [747] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type, 1, .alias_sequence_id = 3),
  [749] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type, 1, .alias_sequence_id = 3),
  [751] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(436),
  [753] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 1, .fragile = true),
  [755] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type_constructors, 1, .fragile = true),
  [757] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 3),
  [759] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 3),
  [761] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 3),
  [763] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 2),
  [765] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(437),
  [767] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(438),
  [769] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(440),
  [771] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 1),
  [773] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(441),
  [775] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(441),
  [777] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_where, 2),
  [779] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 4),
  [781] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(445),
  [783] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 4),
  [785] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 4),
  [787] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 2),
  [789] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 2),
  [791] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(446),
  [793] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(447),
  [795] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(448),
  [797] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_safety, 1),
  [799] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_safety, 1),
  [801] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(452),
  [803] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreign, 4),
  [805] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreign, 4),
  [807] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default, 4),
  [809] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_default, 4),
  [811] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(457),
  [813] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(458),
  [815] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(460),
  [817] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(461),
  [819] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(462),
  [821] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(465),
  [823] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 4),
  [825] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 4),
  [827] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(466),
  [829] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(466),
  [831] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_where, 2),
  [833] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(469),
  [835] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(470),
  [837] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(472),
  [839] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(473),
  [841] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat2, 1),
  [843] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat2, 1),
  [845] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(475),
  [847] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_strict, 2),
  [849] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_strict, 2),
  [851] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(477),
  [853] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(478),
  [855] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(481),
  [857] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_labels, 2),
  [859] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat1, 2),
  [861] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 2),
  [863] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat3, 2),
  [865] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat3, 2),
  [867] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class_instance, 4),
  [869] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class_instance, 4),
  [871] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__op, 3),
  [873] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__op, 3),
  [875] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_symbol_repeat1, 2),
  [877] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_symbol_repeat1, 2),
  [879] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_fixity_repeat1, 2),
  [881] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fixity_repeat1, 2),
  [883] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fixity, 4),
  [885] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 4),
  [887] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 2),
  [889] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_variable_symbol_repeat1, 2),
  [891] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 4),
  [893] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 4),
  [895] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(312),
  [897] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(489),
  [899] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(490),
  [901] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(492),
  [903] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat1, 1, .fragile = true), SHIFT(494),
  [906] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 2),
  [908] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 2),
  [910] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructors, 2),
  [912] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructors, 2),
  [914] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(499),
  [916] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(335),
  [918] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(500),
  [920] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(502),
  [922] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_strict, 2),
  [924] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_labels, 2),
  [926] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(505),
  [928] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_labels, 2),
  [930] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 2),
  [932] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat3, 2),
  [934] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_simple_type_repeat1, 1, .fragile = true),
  [936] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_type_repeat1, 1, .fragile = true),
  [938] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 4),
  [940] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 4),
  [942] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_simple_type_repeat1, 2),
  [944] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_type_repeat1, 2),
  [946] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(509),
  [948] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(426),
  [950] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_synonym, 4),
  [952] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_synonym, 4),
  [954] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(510),
  [956] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(512),
  [958] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(515),
  [960] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__cntrl, 1),
  [962] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__ascii, 2),
  [964] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat1, 1),
  [966] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__escape, 3),
  [968] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(517),
  [970] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat2, 1),
  [972] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(518),
  [974] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__cntrl, 1),
  [976] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 2),
  [978] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 1),
  [980] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 3),
  [982] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(519),
  [984] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 1),
  [986] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(520),
  [988] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(521),
  [990] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(522),
  [992] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(521),
  [994] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_do_expression, 2),
  [996] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_do_expression, 2),
  [998] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_expression, 2),
  [1000] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_variable_identifier, 2),
  [1002] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(530),
  [1004] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(531),
  [1006] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(206),
  [1008] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(535),
  [1010] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(537),
  [1012] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_body, 3),
  [1014] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_body, 3),
  [1016] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_function_body_repeat1, 2),
  [1018] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_function_body_repeat1, 2),
  [1020] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_function_body_repeat1, 2),
  [1022] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parenthesized_pattern, 3),
  [1024] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parenthesized_pattern, 3),
  [1026] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__variable_symbol, 1),
  [1028] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(544),
  [1030] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 1),
  [1032] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__op, 1),
  [1034] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 1, .fragile = true),
  [1036] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(551),
  [1038] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(552),
  [1040] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list_pattern, 3),
  [1042] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_list_pattern, 3),
  [1044] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_as_pattern, 3),
  [1046] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_as_pattern, 3),
  [1048] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_label_pattern, 3),
  [1050] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_label_pattern, 3),
  [1052] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(553),
  [1054] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(463),
  [1056] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(555),
  [1058] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(557),
  [1060] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(558),
  [1062] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__generic_type_constructor, 1),
  [1064] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_identifier, 1, .fragile = true), REDUCE(sym__type_constructors, 1, .fragile = true, .alias_sequence_id = 1),
  [1067] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(562),
  [1069] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(565),
  [1071] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(566),
  [1073] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(568),
  [1075] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(569),
  [1077] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(571),
  [1079] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 1, .fragile = true),
  [1081] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 1, .fragile = true, .alias_sequence_id = 1),
  [1083] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(573),
  [1085] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(574),
  [1087] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_list_repeat1, 1),
  [1089] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_list_repeat1, 1),
  [1091] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(577),
  [1093] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type, 1),
  [1095] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(578),
  [1097] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type, 1, .alias_sequence_id = 3),
  [1099] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(579),
  [1101] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_type_repeat1, 1, .fragile = true),
  [1103] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 2, .fragile = true, .alias_sequence_id = 1),
  [1105] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type_constructors, 2, .fragile = true, .alias_sequence_id = 1),
  [1107] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(582),
  [1109] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 2, .fragile = true),
  [1111] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_qualified_type_constructor, 2, .fragile = true),
  [1113] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(585),
  [1115] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_signature, 4),
  [1117] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_signature, 4),
  [1119] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 2),
  [1121] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 3),
  [1123] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(589),
  [1125] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(590),
  [1127] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(591),
  [1129] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__declarations, 2),
  [1131] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(593),
  [1133] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(593),
  [1135] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(594),
  [1137] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(594),
  [1139] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 5),
  [1141] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 5),
  [1143] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(597),
  [1145] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 3),
  [1147] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 3),
  [1149] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(600),
  [1151] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(601),
  [1153] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(602),
  [1155] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(604),
  [1157] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreign, 5),
  [1159] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreign, 5),
  [1161] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_export_repeat1, 2),
  [1163] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default, 5),
  [1165] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_default, 5),
  [1167] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_context_repeat1, 2),
  [1169] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 4),
  [1171] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(608),
  [1173] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__declarations, 2),
  [1175] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(610),
  [1177] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(610),
  [1179] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fields, 3),
  [1181] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(612),
  [1183] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(613),
  [1185] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(615),
  [1187] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(617),
  [1189] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(618),
  [1191] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor, 4),
  [1193] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat2, 2),
  [1195] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat2, 2),
  [1197] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_labels_repeat1, 2),
  [1199] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_label, 3),
  [1201] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_fixity_repeat1, 3),
  [1203] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fixity_repeat1, 3),
  [1205] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 5),
  [1207] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 5),
  [1209] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(621),
  [1211] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(623),
  [1213] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(624),
  [1215] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(625),
  [1217] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(628),
  [1219] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(630),
  [1221] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 2),
  [1223] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructors_repeat1, 2),
  [1225] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fields, 3),
  [1227] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_fields, 3),
  [1229] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(633),
  [1231] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor, 4),
  [1233] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor, 4),
  [1235] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_labels_repeat1, 2),
  [1237] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_labels_repeat1, 2),
  [1239] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_label, 3),
  [1241] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_label, 3),
  [1243] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 5),
  [1245] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 5),
  [1247] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(636),
  [1249] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(352),
  [1251] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat1, 2),
  [1253] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat2, 2),
  [1255] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 2),
  [1257] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 2),
  [1259] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_list, 2),
  [1261] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_list, 2),
  [1263] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_statement_list, 2),
  [1265] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(638),
  [1267] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(638),
  [1269] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [1271] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [1273] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [1275] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(639),
  [1277] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(644),
  [1279] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(646),
  [1281] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(646),
  [1283] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(644),
  [1285] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(648),
  [1287] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(650),
  [1289] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(653),
  [1291] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(655),
  [1293] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tuple_pattern_repeat1, 2),
  [1295] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(656),
  [1297] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__constructor_symbol, 1),
  [1299] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_symbol_repeat1, 1),
  [1301] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 2),
  [1303] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__pattern, 3),
  [1305] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 1),
  [1307] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 2, .fragile = true),
  [1309] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_tuple_pattern, 4),
  [1311] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_tuple_pattern, 4),
  [1313] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_label_pattern, 4),
  [1315] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_label_pattern, 4),
  [1317] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(609),
  [1319] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(661),
  [1321] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(663),
  [1323] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tupling_constructor_repeat1, 1),
  [1325] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tupling_constructor, 3),
  [1327] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_tupling_constructor, 3),
  [1329] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(665),
  [1331] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(666),
  [1333] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(667),
  [1335] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(670),
  [1337] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tuple, 3, .fragile = true), REDUCE(sym_parenthesized_constructor, 3, .fragile = true),
  [1340] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_tuple, 3, .fragile = true), REDUCE(sym_parenthesized_constructor, 3, .fragile = true),
  [1343] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(672),
  [1345] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(673),
  [1347] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(675),
  [1349] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(676),
  [1351] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 2, .fragile = true, .alias_sequence_id = 1),
  [1353] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 2, .fragile = true),
  [1355] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(680),
  [1357] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 3),
  [1359] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 3),
  [1361] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_list_repeat1, 2),
  [1363] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_list_repeat1, 2),
  [1365] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_simple_type_repeat1, 2),
  [1367] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_qualified_type_constructor_repeat1, 2),
  [1369] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_qualified_type_constructor_repeat1, 2),
  [1371] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 3, .fragile = true),
  [1373] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_qualified_type_constructor, 3, .fragile = true),
  [1375] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(682),
  [1377] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type, 3),
  [1379] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type, 3),
  [1381] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type, 3, .alias_sequence_id = 3),
  [1383] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type, 3, .alias_sequence_id = 3),
  [1385] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_exports_repeat1, 2),
  [1387] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 4),
  [1389] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(685),
  [1391] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__declarations, 3),
  [1393] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(687),
  [1395] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(687),
  [1397] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 6),
  [1399] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 6),
  [1401] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(688),
  [1403] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(690),
  [1405] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 2),
  [1407] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 4),
  [1409] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 4),
  [1411] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(692),
  [1413] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(694),
  [1415] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreign, 6),
  [1417] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreign, 6),
  [1419] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_export_repeat1, 3),
  [1421] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_context_repeat1, 3),
  [1423] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 5),
  [1425] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__declarations, 3),
  [1427] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fields_repeat1, 2),
  [1429] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fields, 4),
  [1431] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_field_repeat1, 2),
  [1433] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field, 3),
  [1435] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_labels_repeat1, 3),
  [1437] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 6),
  [1439] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 6),
  [1441] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(698),
  [1443] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(494),
  [1445] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 4),
  [1447] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 4),
  [1449] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(700),
  [1451] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 3),
  [1453] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructors_repeat1, 3),
  [1455] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fields, 4),
  [1457] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_fields, 4),
  [1459] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_labels_repeat1, 3),
  [1461] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_labels_repeat1, 3),
  [1463] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 6),
  [1465] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 6),
  [1467] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
  [1469] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2),
  [1471] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
  [1473] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_list, 3),
  [1475] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_list, 3),
  [1477] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_statement_list, 3),
  [1479] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [1481] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [1483] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [1485] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(703),
  [1487] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_negative_literal, 4),
  [1489] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__op, 3),
  [1491] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_symbol_repeat1, 2),
  [1493] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 2),
  [1495] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tuple_pattern_repeat1, 3),
  [1497] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_tupling_constructor, 3),
  [1499] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(705),
  [1501] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_tuple, 3, .fragile = true), REDUCE(sym_parenthesized_constructor, 3, .fragile = true),
  [1504] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(706),
  [1506] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tupling_constructor_repeat1, 2),
  [1508] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tupling_constructor, 4),
  [1510] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_tupling_constructor, 4),
  [1512] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_list, 3),
  [1514] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tuple_repeat1, 2),
  [1516] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tuple, 4),
  [1518] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_tuple, 4),
  [1520] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type, 3),
  [1522] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 4),
  [1524] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(710),
  [1526] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type, 3, .alias_sequence_id = 3),
  [1528] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 3, .fragile = true),
  [1530] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 4, .fragile = true),
  [1532] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_qualified_type_constructor, 4, .fragile = true),
  [1534] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_qualified_type_constructor_repeat1, 3),
  [1536] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_qualified_type_constructor_repeat1, 3),
  [1538] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_exports_repeat1, 3),
  [1540] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 4),
  [1542] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(714),
  [1544] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(715),
  [1546] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(717),
  [1548] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(718),
  [1550] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(720),
  [1552] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 3),
  [1554] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 5),
  [1556] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 5),
  [1558] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fields_repeat1, 3),
  [1560] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_field_repeat1, 3),
  [1562] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field, 4),
  [1564] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 5),
  [1566] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 5),
  [1568] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_tupling_constructor, 4),
  [1570] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_tuple, 4),
  [1572] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tuple_repeat1, 3),
  [1574] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 5),
  [1576] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 4, .fragile = true),
  [1578] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 5, .fragile = true),
  [1580] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_qualified_type_constructor, 5, .fragile = true),
  [1582] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 5),
  [1584] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 6),
  [1586] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 6),
  [1588] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(724),
  [1590] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(726),
  [1592] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(728),
  [1594] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(730),
  [1596] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 5, .fragile = true),
  [1598] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 7),
  [1600] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 7),
  [1602] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(731),
  [1604] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 5),
  [1606] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(732),
  [1608] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 8),
  [1610] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 8),
  [1612] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 6),
  [1614] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(735),
  [1616] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(736),
  [1618] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 7),
  [1620] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 9),
  [1622] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 9),
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
