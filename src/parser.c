#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 605
#define SYMBOL_COUNT 241
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
  sym_irrefutable_pattern = 143,
  sym_list_pattern = 144,
  sym_tuple_pattern = 145,
  sym_parenthesized_pattern = 146,
  sym__pattern = 147,
  sym_negative_literal = 148,
  sym_general_constructor = 149,
  sym_as_pattern = 150,
  sym_labels = 151,
  sym_label = 152,
  sym_wildcard = 153,
  sym__variable = 154,
  sym_qualified_variable_identifier = 155,
  sym__expression = 156,
  sym_foreign = 157,
  sym_foreign_import = 158,
  sym_calling_convention = 159,
  sym_safety = 160,
  sym_default = 161,
  sym_do_expression = 162,
  sym_statement_list = 163,
  sym__statement = 164,
  sym_type_class = 165,
  sym_general_declarations = 166,
  sym_type_class_instance = 167,
  sym__general_declaration = 168,
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
  sym_class = 182,
  sym_constructors = 183,
  sym_constructor = 184,
  sym_deriving = 185,
  sym_newtype = 186,
  sym_new_constructor = 187,
  sym_field = 188,
  sym_strict = 189,
  sym_type_synonym = 190,
  sym__literal = 191,
  sym__identifier = 192,
  sym_simple_type = 193,
  sym_variable_identifier = 194,
  sym_constructor_identifier = 195,
  sym__type_constructors = 196,
  sym_qualified_type_constructor = 197,
  sym_integer = 198,
  sym_char = 199,
  sym_string = 200,
  sym__gap = 201,
  sym__graphic = 202,
  sym__small = 203,
  sym__large = 204,
  sym__symbol = 205,
  sym__variable_symbol = 206,
  sym__constructor_symbol = 207,
  sym__special = 208,
  sym__escape = 209,
  sym__char_escape = 210,
  sym__ascii = 211,
  sym__cntrl = 212,
  sym_fields = 213,
  aux_sym_module_repeat1 = 214,
  aux_sym_module_exports_repeat1 = 215,
  aux_sym_export_repeat1 = 216,
  aux_sym_import_specification_repeat1 = 217,
  aux_sym_function_head_repeat1 = 218,
  aux_sym_function_body_repeat1 = 219,
  aux_sym_tuple_pattern_repeat1 = 220,
  aux_sym_general_constructor_repeat1 = 221,
  aux_sym_labels_repeat1 = 222,
  aux_sym_statement_list_repeat1 = 223,
  aux_sym_type_class_repeat1 = 224,
  aux_sym_general_declarations_repeat1 = 225,
  aux_sym_fixity_repeat1 = 226,
  aux_sym_variable_symbol_repeat1 = 227,
  aux_sym_constructor_symbol_repeat1 = 228,
  aux_sym_tupling_constructor_repeat1 = 229,
  aux_sym_tuple_repeat1 = 230,
  aux_sym_list_repeat1 = 231,
  aux_sym_context_repeat1 = 232,
  aux_sym_constructors_repeat1 = 233,
  aux_sym_constructor_repeat1 = 234,
  aux_sym_field_repeat1 = 235,
  aux_sym_qualified_type_constructor_repeat1 = 236,
  aux_sym_string_repeat1 = 237,
  aux_sym__escape_repeat1 = 238,
  aux_sym__escape_repeat2 = 239,
  aux_sym_fields_repeat1 = 240,
  alias_sym_type_constructor = 241,
  alias_sym_type_variable = 242,
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
      if (lookahead == '{')
        ADVANCE(168);
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
      if (lookahead == '{')
        ADVANCE(83);
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
      if (lookahead == '{')
        ADVANCE(168);
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
        ADVANCE(482);
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
        SKIP(483);
      if (lookahead == 'd')
        ADVANCE(484);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(477);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
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
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(478);
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
      if (lookahead == '\n')
        ADVANCE(478);
      if (lookahead == '\r')
        ADVANCE(482);
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
        SKIP(483);
      if (lookahead == 'd')
        ADVANCE(484);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(477);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 483:
      if (lookahead == 'n')
        SKIP(477);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'o')
        ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '\'')
        ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 486:
      if (lookahead == '\t')
        SKIP(486);
      if (lookahead == '\n')
        ADVANCE(487);
      if (lookahead == '\r')
        ADVANCE(492);
      if (lookahead == ' ')
        ADVANCE(493);
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
        ADVANCE(494);
      if (lookahead == '\\')
        ADVANCE(495);
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
        ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 487:
      if (lookahead == '\t')
        ADVANCE(487);
      if (lookahead == '\n')
        ADVANCE(487);
      if (lookahead == '\r')
        ADVANCE(487);
      if (lookahead == ' ')
        ADVANCE(488);
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
        ADVANCE(489);
      if (lookahead == '\\')
        ADVANCE(490);
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
        ADVANCE(491);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(487);
      if (lookahead == '\n')
        ADVANCE(487);
      if (lookahead == '\r')
        ADVANCE(487);
      if (lookahead == ' ')
        ADVANCE(488);
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
        ADVANCE(489);
      if (lookahead == '\\')
        ADVANCE(490);
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
        ADVANCE(491);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(487);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 492:
      if (lookahead == '\t')
        SKIP(486);
      if (lookahead == '\n')
        ADVANCE(487);
      if (lookahead == '\r')
        ADVANCE(492);
      if (lookahead == ' ')
        ADVANCE(493);
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
        ADVANCE(494);
      if (lookahead == '\\')
        ADVANCE(495);
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
        ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      END_STATE();
    case 497:
      if (lookahead == '\t')
        ADVANCE(498);
      if (lookahead == '\n')
        ADVANCE(499);
      if (lookahead == 11)
        ADVANCE(97);
      if (lookahead == '\r')
        ADVANCE(504);
      if (lookahead == ' ')
        ADVANCE(493);
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
        ADVANCE(494);
      if (lookahead == '\\')
        ADVANCE(495);
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
        ADVANCE(496);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym__tab);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(500);
      if (lookahead == '\n')
        ADVANCE(499);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(501);
      if (lookahead == ' ')
        ADVANCE(502);
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
        ADVANCE(489);
      if (lookahead == '\\')
        ADVANCE(503);
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
        ADVANCE(491);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(500);
      if (lookahead == '\n')
        ADVANCE(499);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(501);
      if (lookahead == ' ')
        ADVANCE(502);
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
        ADVANCE(489);
      if (lookahead == '\\')
        ADVANCE(503);
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
        ADVANCE(491);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 501:
      if (lookahead == '\t')
        ADVANCE(500);
      if (lookahead == '\n')
        ADVANCE(499);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(501);
      if (lookahead == ' ')
        ADVANCE(502);
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
        ADVANCE(489);
      if (lookahead == '\\')
        ADVANCE(503);
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
        ADVANCE(491);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(500);
      if (lookahead == '\n')
        ADVANCE(499);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(501);
      if (lookahead == ' ')
        ADVANCE(502);
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
        ADVANCE(489);
      if (lookahead == '\\')
        ADVANCE(503);
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
        ADVANCE(491);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(501);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 504:
      if (lookahead == '\t')
        ADVANCE(498);
      if (lookahead == '\n')
        ADVANCE(499);
      if (lookahead == 11)
        ADVANCE(97);
      if (lookahead == '\r')
        ADVANCE(504);
      if (lookahead == ' ')
        ADVANCE(493);
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
        ADVANCE(494);
      if (lookahead == '\\')
        ADVANCE(495);
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
        ADVANCE(496);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 505:
      if (lookahead == '\n')
        ADVANCE(506);
      if (lookahead == '\r')
        ADVANCE(508);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(509);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(505);
      END_STATE();
    case 506:
      if (lookahead == '\n')
        ADVANCE(506);
      if (lookahead == '\r')
        ADVANCE(506);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(507);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(506);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 507:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(506);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 508:
      if (lookahead == '\n')
        ADVANCE(506);
      if (lookahead == '\r')
        ADVANCE(508);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(509);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(505);
      END_STATE();
    case 509:
      if (lookahead == 'n')
        SKIP(505);
      END_STATE();
    case 510:
      if (lookahead == '\n')
        ADVANCE(511);
      if (lookahead == '\r')
        ADVANCE(513);
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
        SKIP(514);
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
        SKIP(510);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 511:
      if (lookahead == '\n')
        ADVANCE(511);
      if (lookahead == '\r')
        ADVANCE(511);
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
        ADVANCE(512);
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
        ADVANCE(511);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
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
        SKIP(514);
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
        SKIP(510);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
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
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ':')
        ADVANCE(262);
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
      if (lookahead == ':')
        ADVANCE(191);
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
      if (lookahead == ':')
        ADVANCE(262);
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
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(524);
      if (lookahead == '_')
        ADVANCE(471);
      if (lookahead == '~')
        ADVANCE(171);
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
        ADVANCE(522);
      if (lookahead == '_')
        ADVANCE(467);
      if (lookahead == '~')
        ADVANCE(86);
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
      if (lookahead == '[')
        ADVANCE(157);
      if (lookahead == '\\')
        SKIP(524);
      if (lookahead == '_')
        ADVANCE(471);
      if (lookahead == '~')
        ADVANCE(171);
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
        SKIP(529);
      if (lookahead == 'd')
        ADVANCE(484);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(525);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
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
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(527);
      if (lookahead == 'd')
        ADVANCE(480);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(526);
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
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == ':')
        ADVANCE(262);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(529);
      if (lookahead == 'd')
        ADVANCE(484);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(525);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 529:
      if (lookahead == 'n')
        SKIP(525);
      END_STATE();
    case 530:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(531);
      if (lookahead == '\r')
        ADVANCE(533);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == '\\')
        SKIP(534);
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
        SKIP(530);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      END_STATE();
    case 531:
      if (lookahead == 0)
        ADVANCE(1);
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
      if (lookahead == '\\')
        ADVANCE(532);
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
        ADVANCE(531);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
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
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(531);
      if (lookahead == '\r')
        ADVANCE(533);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == '\\')
        SKIP(534);
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
        SKIP(530);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
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
      if (lookahead == '(')
        ADVANCE(254);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(547);
      if (lookahead == 'a')
        ADVANCE(548);
      if (lookahead == 'h')
        ADVANCE(550);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(535);
      END_STATE();
    case 536:
      if (lookahead == '\n')
        ADVANCE(536);
      if (lookahead == '\r')
        ADVANCE(536);
      if (lookahead == '(')
        ADVANCE(183);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(537);
      if (lookahead == 'a')
        ADVANCE(538);
      if (lookahead == 'h')
        ADVANCE(540);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(536);
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
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(539);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 540:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(541);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 541:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(542);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 542:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(543);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 543:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(544);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 544:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(545);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_hiding);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 546:
      if (lookahead == '\n')
        ADVANCE(536);
      if (lookahead == '\r')
        ADVANCE(546);
      if (lookahead == '(')
        ADVANCE(254);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(547);
      if (lookahead == 'a')
        ADVANCE(548);
      if (lookahead == 'h')
        ADVANCE(550);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(535);
      END_STATE();
    case 547:
      if (lookahead == 'n')
        SKIP(535);
      END_STATE();
    case 548:
      if (lookahead == 's')
        ADVANCE(549);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 550:
      if (lookahead == 'i')
        ADVANCE(551);
      END_STATE();
    case 551:
      if (lookahead == 'd')
        ADVANCE(552);
      END_STATE();
    case 552:
      if (lookahead == 'i')
        ADVANCE(553);
      END_STATE();
    case 553:
      if (lookahead == 'n')
        ADVANCE(554);
      END_STATE();
    case 554:
      if (lookahead == 'g')
        ADVANCE(555);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_hiding);
      END_STATE();
    case 556:
      if (lookahead == '\n')
        ADVANCE(557);
      if (lookahead == '\r')
        ADVANCE(560);
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
        ADVANCE(561);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '\\')
        SKIP(562);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(556);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 557:
      if (lookahead == '\n')
        ADVANCE(557);
      if (lookahead == '\r')
        ADVANCE(557);
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
        ADVANCE(558);
      if (lookahead == '=')
        ADVANCE(192);
      if (lookahead == '\\')
        ADVANCE(559);
      if (lookahead == '{')
        ADVANCE(83);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(557);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 558:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(32);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 559:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(557);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 560:
      if (lookahead == '\n')
        ADVANCE(557);
      if (lookahead == '\r')
        ADVANCE(560);
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
        ADVANCE(561);
      if (lookahead == '=')
        ADVANCE(263);
      if (lookahead == '\\')
        SKIP(562);
      if (lookahead == '{')
        ADVANCE(168);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(556);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 561:
      if (lookahead == '.')
        ADVANCE(117);
      END_STATE();
    case 562:
      if (lookahead == 'n')
        SKIP(556);
      END_STATE();
    case 563:
      if (lookahead == '\n')
        ADVANCE(564);
      if (lookahead == '\r')
        ADVANCE(571);
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
        SKIP(572);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == 'w')
        ADVANCE(573);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(563);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 564:
      if (lookahead == '\n')
        ADVANCE(564);
      if (lookahead == '\r')
        ADVANCE(564);
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
        ADVANCE(565);
      if (lookahead == '`')
        ADVANCE(78);
      if (lookahead == 'w')
        ADVANCE(566);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(564);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
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
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'h')
        ADVANCE(567);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(568);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(569);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(570);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 570:
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
    case 571:
      if (lookahead == '\n')
        ADVANCE(564);
      if (lookahead == '\r')
        ADVANCE(571);
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
        SKIP(572);
      if (lookahead == '`')
        ADVANCE(163);
      if (lookahead == 'w')
        ADVANCE(573);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(563);
      if (('_' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 572:
      if (lookahead == 'n')
        SKIP(563);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'h')
        ADVANCE(574);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'e')
        ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'r')
        ADVANCE(576);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'e')
        ADVANCE(577);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '\'')
        ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
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
        ADVANCE(495);
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
        ADVANCE(496);
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
        ADVANCE(491);
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
        ADVANCE(495);
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
        ADVANCE(496);
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
        ADVANCE(498);
      if (lookahead == '\n')
        ADVANCE(750);
      if (lookahead == 11)
        ADVANCE(97);
      if (lookahead == '\r')
        ADVANCE(761);
      if (lookahead == ' ')
        ADVANCE(493);
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
        ADVANCE(494);
      if (lookahead == '\\')
        ADVANCE(495);
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
        ADVANCE(496);
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
        ADVANCE(489);
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
        ADVANCE(491);
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
        ADVANCE(489);
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
        ADVANCE(491);
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
        ADVANCE(489);
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
        ADVANCE(491);
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
        ADVANCE(489);
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
        ADVANCE(491);
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
        ADVANCE(498);
      if (lookahead == '\n')
        ADVANCE(750);
      if (lookahead == 11)
        ADVANCE(97);
      if (lookahead == '\r')
        ADVANCE(761);
      if (lookahead == ' ')
        ADVANCE(493);
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
        ADVANCE(494);
      if (lookahead == '\\')
        ADVANCE(495);
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
        ADVANCE(496);
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
        ADVANCE(469);
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
        ADVANCE(465);
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
        ADVANCE(469);
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
        ADVANCE(469);
      if (lookahead == ':')
        ADVANCE(262);
      if (lookahead == '=')
        ADVANCE(406);
      if (lookahead == '\\')
        SKIP(809);
      if (lookahead == 'w')
        ADVANCE(573);
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
        ADVANCE(465);
      if (lookahead == ':')
        ADVANCE(191);
      if (lookahead == '=')
        ADVANCE(354);
      if (lookahead == '\\')
        ADVANCE(807);
      if (lookahead == 'w')
        ADVANCE(566);
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
        ADVANCE(469);
      if (lookahead == ':')
        ADVANCE(262);
      if (lookahead == '=')
        ADVANCE(406);
      if (lookahead == '\\')
        SKIP(809);
      if (lookahead == 'w')
        ADVANCE(573);
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
        ADVANCE(469);
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
        ADVANCE(465);
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
        ADVANCE(469);
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
        ADVANCE(469);
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
        ADVANCE(465);
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
        ADVANCE(469);
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
        ADVANCE(494);
      if (lookahead == '\\')
        ADVANCE(495);
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
        ADVANCE(489);
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
        ADVANCE(494);
      if (lookahead == '\\')
        ADVANCE(495);
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
        ADVANCE(469);
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
        ADVANCE(465);
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
        ADVANCE(469);
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
        ADVANCE(469);
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
        ADVANCE(465);
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
        ADVANCE(469);
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
        ADVANCE(550);
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
        ADVANCE(540);
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
        ADVANCE(550);
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
        ADVANCE(913);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '\\')
        SKIP(914);
      if (lookahead == 'i')
        ADVANCE(915);
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
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '\\')
        ADVANCE(910);
      if (lookahead == 'i')
        ADVANCE(911);
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
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(912);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(195);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 913:
      if (lookahead == '\n')
        ADVANCE(909);
      if (lookahead == '\r')
        ADVANCE(913);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '\\')
        SKIP(914);
      if (lookahead == 'i')
        ADVANCE(915);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(908);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 914:
      if (lookahead == 'n')
        SKIP(908);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'n')
        ADVANCE(916);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym__variable_pattern);
      if (lookahead == '\'')
        ADVANCE(266);
      if (lookahead == 'f')
        ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 917:
      if (lookahead == '\n')
        ADVANCE(918);
      if (lookahead == '\r')
        ADVANCE(920);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '\\')
        SKIP(921);
      if (lookahead == 'i')
        ADVANCE(915);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(917);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 918:
      if (lookahead == '\n')
        ADVANCE(918);
      if (lookahead == '\r')
        ADVANCE(918);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '\\')
        ADVANCE(919);
      if (lookahead == 'i')
        ADVANCE(911);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(918);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 919:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(918);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 920:
      if (lookahead == '\n')
        ADVANCE(918);
      if (lookahead == '\r')
        ADVANCE(920);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '\\')
        SKIP(921);
      if (lookahead == 'i')
        ADVANCE(915);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(917);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 921:
      if (lookahead == 'n')
        SKIP(917);
      END_STATE();
    case 922:
      if (lookahead == '\n')
        ADVANCE(923);
      if (lookahead == '\r')
        ADVANCE(925);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(926);
      if (lookahead == 'd')
        ADVANCE(611);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(922);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 923:
      if (lookahead == '\n')
        ADVANCE(923);
      if (lookahead == '\r')
        ADVANCE(923);
      if (lookahead == '!')
        ADVANCE(9);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(924);
      if (lookahead == 'd')
        ADVANCE(601);
      if (lookahead == '|')
        ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(923);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(252);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 924:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(923);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 925:
      if (lookahead == '\n')
        ADVANCE(923);
      if (lookahead == '\r')
        ADVANCE(925);
      if (lookahead == '!')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(926);
      if (lookahead == 'd')
        ADVANCE(611);
      if (lookahead == '|')
        ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(922);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 926:
      if (lookahead == 'n')
        SKIP(922);
      END_STATE();
    case 927:
      if (lookahead == '\n')
        ADVANCE(928);
      if (lookahead == '\r')
        ADVANCE(930);
      if (lookahead == '-')
        ADVANCE(469);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(931);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(927);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 928:
      if (lookahead == '\n')
        ADVANCE(928);
      if (lookahead == '\r')
        ADVANCE(928);
      if (lookahead == '-')
        ADVANCE(465);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(929);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(928);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 929:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(928);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 930:
      if (lookahead == '\n')
        ADVANCE(928);
      if (lookahead == '\r')
        ADVANCE(930);
      if (lookahead == '-')
        ADVANCE(469);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(931);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(927);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 931:
      if (lookahead == 'n')
        SKIP(927);
      END_STATE();
    case 932:
      if (lookahead == '\t')
        ADVANCE(498);
      if (lookahead == '\n')
        ADVANCE(933);
      if (lookahead == 11)
        ADVANCE(97);
      if (lookahead == '\r')
        ADVANCE(938);
      if (lookahead == ' ')
        ADVANCE(493);
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
        ADVANCE(494);
      if (lookahead == '\\')
        ADVANCE(495);
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
        ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(934);
      if (lookahead == '\n')
        ADVANCE(933);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(935);
      if (lookahead == ' ')
        ADVANCE(936);
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
        ADVANCE(489);
      if (lookahead == '\\')
        ADVANCE(937);
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
        ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(491);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(934);
      if (lookahead == '\n')
        ADVANCE(933);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(935);
      if (lookahead == ' ')
        ADVANCE(936);
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
        ADVANCE(489);
      if (lookahead == '\\')
        ADVANCE(937);
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
        ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(491);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 935:
      if (lookahead == '\t')
        ADVANCE(934);
      if (lookahead == '\n')
        ADVANCE(933);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(935);
      if (lookahead == ' ')
        ADVANCE(936);
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
        ADVANCE(489);
      if (lookahead == '\\')
        ADVANCE(937);
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
        ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(491);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(934);
      if (lookahead == '\n')
        ADVANCE(933);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(935);
      if (lookahead == ' ')
        ADVANCE(936);
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
        ADVANCE(489);
      if (lookahead == '\\')
        ADVANCE(937);
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
        ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(491);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(95);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(96);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(935);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 938:
      if (lookahead == '\t')
        ADVANCE(498);
      if (lookahead == '\n')
        ADVANCE(933);
      if (lookahead == 11)
        ADVANCE(97);
      if (lookahead == '\r')
        ADVANCE(938);
      if (lookahead == ' ')
        ADVANCE(493);
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
        ADVANCE(494);
      if (lookahead == '\\')
        ADVANCE(495);
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
        ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(179);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 939:
      if (lookahead == '\n')
        ADVANCE(940);
      if (lookahead == '\r')
        ADVANCE(942);
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == '\\')
        SKIP(943);
      if (lookahead == 'd')
        ADVANCE(484);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(939);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 940:
      if (lookahead == '\n')
        ADVANCE(940);
      if (lookahead == '\r')
        ADVANCE(940);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == '\\')
        ADVANCE(941);
      if (lookahead == 'd')
        ADVANCE(480);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(940);
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
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == '\\')
        SKIP(943);
      if (lookahead == 'd')
        ADVANCE(484);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(939);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
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
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == '\\')
        SKIP(948);
      if (lookahead == 'd')
        ADVANCE(484);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(944);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 945:
      if (lookahead == '\n')
        ADVANCE(945);
      if (lookahead == '\r')
        ADVANCE(945);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == '\\')
        ADVANCE(946);
      if (lookahead == 'd')
        ADVANCE(480);
      if (lookahead == '}')
        ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(945);
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
      if (lookahead == '\"')
        ADVANCE(100);
      if (lookahead == '\'')
        ADVANCE(105);
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == '\\')
        SKIP(948);
      if (lookahead == 'd')
        ADVANCE(484);
      if (lookahead == '}')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(944);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 948:
      if (lookahead == 'n')
        SKIP(944);
      END_STATE();
    case 949:
      if (lookahead == '\n')
        ADVANCE(950);
      if (lookahead == '\r')
        ADVANCE(952);
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
        SKIP(953);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(949);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(774);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 950:
      if (lookahead == '\n')
        ADVANCE(950);
      if (lookahead == '\r')
        ADVANCE(950);
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
        ADVANCE(951);
      if (lookahead == ']')
        ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(950);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(771);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 951:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(950);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 952:
      if (lookahead == '\n')
        ADVANCE(950);
      if (lookahead == '\r')
        ADVANCE(952);
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
        SKIP(953);
      if (lookahead == ']')
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(949);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(774);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 953:
      if (lookahead == 'n')
        SKIP(949);
      END_STATE();
    case 954:
      if (lookahead == '\n')
        ADVANCE(955);
      if (lookahead == '\r')
        ADVANCE(957);
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
        SKIP(958);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(954);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 955:
      if (lookahead == '\n')
        ADVANCE(955);
      if (lookahead == '\r')
        ADVANCE(955);
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
        ADVANCE(956);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(955);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(195);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 956:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(955);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 957:
      if (lookahead == '\n')
        ADVANCE(955);
      if (lookahead == '\r')
        ADVANCE(957);
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
        SKIP(958);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(954);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 958:
      if (lookahead == 'n')
        SKIP(954);
      END_STATE();
    case 959:
      if (lookahead == '\n')
        ADVANCE(960);
      if (lookahead == '\r')
        ADVANCE(962);
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
        SKIP(963);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(959);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      END_STATE();
    case 960:
      if (lookahead == '\n')
        ADVANCE(960);
      if (lookahead == '\r')
        ADVANCE(960);
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
        ADVANCE(961);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(960);
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
        SKIP(963);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(959);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(323);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
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
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(968);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(964);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
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
      if (lookahead == '-')
        ADVANCE(184);
      if (lookahead == '0')
        ADVANCE(186);
      if (lookahead == ';')
        ADVANCE(36);
      if (lookahead == '\\')
        ADVANCE(966);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(965);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
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
      if (lookahead == '-')
        ADVANCE(255);
      if (lookahead == '0')
        ADVANCE(257);
      if (lookahead == ';')
        ADVANCE(121);
      if (lookahead == '\\')
        SKIP(968);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(964);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
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
  [15] = {.lex_state = 486},
  [16] = {.lex_state = 497},
  [17] = {.lex_state = 477, .external_lex_state = 2},
  [18] = {.lex_state = 181},
  [19] = {.lex_state = 505, .external_lex_state = 2},
  [20] = {.lex_state = 505, .external_lex_state = 2},
  [21] = {.lex_state = 181},
  [22] = {.lex_state = 510},
  [23] = {.lex_state = 510},
  [24] = {.lex_state = 505, .external_lex_state = 2},
  [25] = {.lex_state = 515, .external_lex_state = 2},
  [26] = {.lex_state = 520, .external_lex_state = 2},
  [27] = {.lex_state = 525, .external_lex_state = 2},
  [28] = {.lex_state = 530},
  [29] = {.lex_state = 349},
  [30] = {.lex_state = 324},
  [31] = {.lex_state = 535, .external_lex_state = 2},
  [32] = {.lex_state = 349},
  [33] = {.lex_state = 349},
  [34] = {.lex_state = 556},
  [35] = {.lex_state = 181},
  [36] = {.lex_state = 563},
  [37] = {.lex_state = 181},
  [38] = {.lex_state = 349},
  [39] = {.lex_state = 563},
  [40] = {.lex_state = 181},
  [41] = {.lex_state = 563},
  [42] = {.lex_state = 578, .external_lex_state = 2},
  [43] = {.lex_state = 556},
  [44] = {.lex_state = 583, .external_lex_state = 2},
  [45] = {.lex_state = 588},
  [46] = {.lex_state = 593, .external_lex_state = 2},
  [47] = {.lex_state = 593, .external_lex_state = 2},
  [48] = {.lex_state = 349},
  [49] = {.lex_state = 578, .external_lex_state = 2},
  [50] = {.lex_state = 598, .external_lex_state = 2},
  [51] = {.lex_state = 181},
  [52] = {.lex_state = 619, .external_lex_state = 2},
  [53] = {.lex_state = 640, .external_lex_state = 2},
  [54] = {.lex_state = 556},
  [55] = {.lex_state = 181},
  [56] = {.lex_state = 181},
  [57] = {.lex_state = 454},
  [58] = {.lex_state = 181},
  [59] = {.lex_state = 454},
  [60] = {.lex_state = 510},
  [61] = {.lex_state = 181},
  [62] = {.lex_state = 181},
  [63] = {.lex_state = 181},
  [64] = {.lex_state = 181},
  [65] = {.lex_state = 181},
  [66] = {.lex_state = 181},
  [67] = {.lex_state = 645},
  [68] = {.lex_state = 497},
  [69] = {.lex_state = 497},
  [70] = {.lex_state = 497},
  [71] = {.lex_state = 497},
  [72] = {.lex_state = 477, .external_lex_state = 2},
  [73] = {.lex_state = 497},
  [74] = {.lex_state = 497},
  [75] = {.lex_state = 749},
  [76] = {.lex_state = 497},
  [77] = {.lex_state = 497},
  [78] = {.lex_state = 530},
  [79] = {.lex_state = 477, .external_lex_state = 2},
  [80] = {.lex_state = 505, .external_lex_state = 2},
  [81] = {.lex_state = 510},
  [82] = {.lex_state = 510},
  [83] = {.lex_state = 510},
  [84] = {.lex_state = 588},
  [85] = {.lex_state = 588},
  [86] = {.lex_state = 588},
  [87] = {.lex_state = 510},
  [88] = {.lex_state = 588},
  [89] = {.lex_state = 486},
  [90] = {.lex_state = 497},
  [91] = {.lex_state = 510},
  [92] = {.lex_state = 181},
  [93] = {.lex_state = 588},
  [94] = {.lex_state = 181},
  [95] = {.lex_state = 588},
  [96] = {.lex_state = 510},
  [97] = {.lex_state = 510},
  [98] = {.lex_state = 768},
  [99] = {.lex_state = 505, .external_lex_state = 2},
  [100] = {.lex_state = 775, .external_lex_state = 3},
  [101] = {.lex_state = 556},
  [102] = {.lex_state = 349},
  [103] = {.lex_state = 535, .external_lex_state = 2},
  [104] = {.lex_state = 556},
  [105] = {.lex_state = 324},
  [106] = {.lex_state = 181},
  [107] = {.lex_state = 505, .external_lex_state = 2},
  [108] = {.lex_state = 780},
  [109] = {.lex_state = 780},
  [110] = {.lex_state = 505, .external_lex_state = 2},
  [111] = {.lex_state = 181},
  [112] = {.lex_state = 563},
  [113] = {.lex_state = 181},
  [114] = {.lex_state = 454},
  [115] = {.lex_state = 563},
  [116] = {.lex_state = 181},
  [117] = {.lex_state = 775, .external_lex_state = 3},
  [118] = {.lex_state = 454},
  [119] = {.lex_state = 805},
  [120] = {.lex_state = 805},
  [121] = {.lex_state = 563},
  [122] = {.lex_state = 563},
  [123] = {.lex_state = 775, .external_lex_state = 3},
  [124] = {.lex_state = 563},
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
  [137] = {.lex_state = 556},
  [138] = {.lex_state = 820, .external_lex_state = 2},
  [139] = {.lex_state = 825, .external_lex_state = 2},
  [140] = {.lex_state = 505, .external_lex_state = 2},
  [141] = {.lex_state = 830, .external_lex_state = 2},
  [142] = {.lex_state = 835, .external_lex_state = 2},
  [143] = {.lex_state = 840, .external_lex_state = 2},
  [144] = {.lex_state = 810, .external_lex_state = 2},
  [145] = {.lex_state = 181},
  [146] = {.lex_state = 181},
  [147] = {.lex_state = 845},
  [148] = {.lex_state = 850},
  [149] = {.lex_state = 454},
  [150] = {.lex_state = 768},
  [151] = {.lex_state = 454},
  [152] = {.lex_state = 855},
  [153] = {.lex_state = 477, .external_lex_state = 2},
  [154] = {.lex_state = 181},
  [155] = {.lex_state = 181},
  [156] = {.lex_state = 860},
  [157] = {.lex_state = 864},
  [158] = {.lex_state = 871},
  [159] = {.lex_state = 181},
  [160] = {.lex_state = 497},
  [161] = {.lex_state = 497},
  [162] = {.lex_state = 860},
  [163] = {.lex_state = 864},
  [164] = {.lex_state = 871},
  [165] = {.lex_state = 497},
  [166] = {.lex_state = 497},
  [167] = {.lex_state = 477, .external_lex_state = 2},
  [168] = {.lex_state = 775, .external_lex_state = 3},
  [169] = {.lex_state = 477, .external_lex_state = 2},
  [170] = {.lex_state = 477, .external_lex_state = 2},
  [171] = {.lex_state = 477, .external_lex_state = 2},
  [172] = {.lex_state = 477, .external_lex_state = 2},
  [173] = {.lex_state = 477, .external_lex_state = 2},
  [174] = {.lex_state = 477, .external_lex_state = 2},
  [175] = {.lex_state = 477, .external_lex_state = 2},
  [176] = {.lex_state = 510},
  [177] = {.lex_state = 181},
  [178] = {.lex_state = 878},
  [179] = {.lex_state = 349},
  [180] = {.lex_state = 181},
  [181] = {.lex_state = 181},
  [182] = {.lex_state = 181},
  [183] = {.lex_state = 883},
  [184] = {.lex_state = 588},
  [185] = {.lex_state = 510},
  [186] = {.lex_state = 324},
  [187] = {.lex_state = 181},
  [188] = {.lex_state = 850},
  [189] = {.lex_state = 181},
  [190] = {.lex_state = 588},
  [191] = {.lex_state = 497},
  [192] = {.lex_state = 510},
  [193] = {.lex_state = 556},
  [194] = {.lex_state = 454},
  [195] = {.lex_state = 510},
  [196] = {.lex_state = 768},
  [197] = {.lex_state = 768},
  [198] = {.lex_state = 888, .external_lex_state = 2},
  [199] = {.lex_state = 893, .external_lex_state = 2},
  [200] = {.lex_state = 181},
  [201] = {.lex_state = 505, .external_lex_state = 2},
  [202] = {.lex_state = 888, .external_lex_state = 2},
  [203] = {.lex_state = 768},
  [204] = {.lex_state = 349},
  [205] = {.lex_state = 888, .external_lex_state = 2},
  [206] = {.lex_state = 454},
  [207] = {.lex_state = 888, .external_lex_state = 2},
  [208] = {.lex_state = 530},
  [209] = {.lex_state = 898, .external_lex_state = 4},
  [210] = {.lex_state = 530},
  [211] = {.lex_state = 181},
  [212] = {.lex_state = 349},
  [213] = {.lex_state = 181},
  [214] = {.lex_state = 181},
  [215] = {.lex_state = 775, .external_lex_state = 3},
  [216] = {.lex_state = 324},
  [217] = {.lex_state = 505, .external_lex_state = 2},
  [218] = {.lex_state = 505, .external_lex_state = 2},
  [219] = {.lex_state = 181},
  [220] = {.lex_state = 903, .external_lex_state = 2},
  [221] = {.lex_state = 556},
  [222] = {.lex_state = 556},
  [223] = {.lex_state = 497},
  [224] = {.lex_state = 556},
  [225] = {.lex_state = 505, .external_lex_state = 2},
  [226] = {.lex_state = 181},
  [227] = {.lex_state = 556},
  [228] = {.lex_state = 556},
  [229] = {.lex_state = 505, .external_lex_state = 2},
  [230] = {.lex_state = 181},
  [231] = {.lex_state = 181},
  [232] = {.lex_state = 349},
  [233] = {.lex_state = 181},
  [234] = {.lex_state = 349},
  [235] = {.lex_state = 775, .external_lex_state = 3},
  [236] = {.lex_state = 563},
  [237] = {.lex_state = 563},
  [238] = {.lex_state = 908, .external_lex_state = 4},
  [239] = {.lex_state = 917},
  [240] = {.lex_state = 505, .external_lex_state = 2},
  [241] = {.lex_state = 454},
  [242] = {.lex_state = 563},
  [243] = {.lex_state = 775, .external_lex_state = 3},
  [244] = {.lex_state = 563},
  [245] = {.lex_state = 505, .external_lex_state = 2},
  [246] = {.lex_state = 593, .external_lex_state = 2},
  [247] = {.lex_state = 583, .external_lex_state = 2},
  [248] = {.lex_state = 593, .external_lex_state = 2},
  [249] = {.lex_state = 349},
  [250] = {.lex_state = 593, .external_lex_state = 2},
  [251] = {.lex_state = 578, .external_lex_state = 2},
  [252] = {.lex_state = 815, .external_lex_state = 2},
  [253] = {.lex_state = 820, .external_lex_state = 2},
  [254] = {.lex_state = 505, .external_lex_state = 2},
  [255] = {.lex_state = 810, .external_lex_state = 2},
  [256] = {.lex_state = 810, .external_lex_state = 2},
  [257] = {.lex_state = 556},
  [258] = {.lex_state = 505, .external_lex_state = 2},
  [259] = {.lex_state = 181},
  [260] = {.lex_state = 825, .external_lex_state = 2},
  [261] = {.lex_state = 454},
  [262] = {.lex_state = 556},
  [263] = {.lex_state = 922, .external_lex_state = 2},
  [264] = {.lex_state = 922, .external_lex_state = 2},
  [265] = {.lex_state = 825, .external_lex_state = 2},
  [266] = {.lex_state = 922, .external_lex_state = 2},
  [267] = {.lex_state = 810, .external_lex_state = 2},
  [268] = {.lex_state = 181},
  [269] = {.lex_state = 820, .external_lex_state = 2},
  [270] = {.lex_state = 556},
  [271] = {.lex_state = 855},
  [272] = {.lex_state = 768},
  [273] = {.lex_state = 927, .external_lex_state = 2},
  [274] = {.lex_state = 505, .external_lex_state = 2},
  [275] = {.lex_state = 181},
  [276] = {.lex_state = 181},
  [277] = {.lex_state = 864},
  [278] = {.lex_state = 864},
  [279] = {.lex_state = 871},
  [280] = {.lex_state = 871},
  [281] = {.lex_state = 497},
  [282] = {.lex_state = 497},
  [283] = {.lex_state = 497},
  [284] = {.lex_state = 497},
  [285] = {.lex_state = 932},
  [286] = {.lex_state = 932},
  [287] = {.lex_state = 939, .external_lex_state = 4},
  [288] = {.lex_state = 944},
  [289] = {.lex_state = 477, .external_lex_state = 2},
  [290] = {.lex_state = 477, .external_lex_state = 2},
  [291] = {.lex_state = 477, .external_lex_state = 2},
  [292] = {.lex_state = 477, .external_lex_state = 2},
  [293] = {.lex_state = 477, .external_lex_state = 2},
  [294] = {.lex_state = 181},
  [295] = {.lex_state = 510},
  [296] = {.lex_state = 588},
  [297] = {.lex_state = 510},
  [298] = {.lex_state = 556},
  [299] = {.lex_state = 510},
  [300] = {.lex_state = 510},
  [301] = {.lex_state = 510},
  [302] = {.lex_state = 510},
  [303] = {.lex_state = 181},
  [304] = {.lex_state = 510},
  [305] = {.lex_state = 883},
  [306] = {.lex_state = 486},
  [307] = {.lex_state = 883},
  [308] = {.lex_state = 883},
  [309] = {.lex_state = 883},
  [310] = {.lex_state = 883},
  [311] = {.lex_state = 588},
  [312] = {.lex_state = 510},
  [313] = {.lex_state = 588},
  [314] = {.lex_state = 588},
  [315] = {.lex_state = 588},
  [316] = {.lex_state = 588},
  [317] = {.lex_state = 181},
  [318] = {.lex_state = 181},
  [319] = {.lex_state = 181},
  [320] = {.lex_state = 768},
  [321] = {.lex_state = 181},
  [322] = {.lex_state = 768},
  [323] = {.lex_state = 949},
  [324] = {.lex_state = 556},
  [325] = {.lex_state = 181},
  [326] = {.lex_state = 181},
  [327] = {.lex_state = 556},
  [328] = {.lex_state = 181},
  [329] = {.lex_state = 556},
  [330] = {.lex_state = 949},
  [331] = {.lex_state = 949},
  [332] = {.lex_state = 181},
  [333] = {.lex_state = 768},
  [334] = {.lex_state = 768},
  [335] = {.lex_state = 768},
  [336] = {.lex_state = 768},
  [337] = {.lex_state = 954, .external_lex_state = 2},
  [338] = {.lex_state = 927, .external_lex_state = 2},
  [339] = {.lex_state = 927, .external_lex_state = 2},
  [340] = {.lex_state = 927, .external_lex_state = 2},
  [341] = {.lex_state = 768},
  [342] = {.lex_state = 927, .external_lex_state = 2},
  [343] = {.lex_state = 181},
  [344] = {.lex_state = 768},
  [345] = {.lex_state = 505, .external_lex_state = 2},
  [346] = {.lex_state = 768},
  [347] = {.lex_state = 768},
  [348] = {.lex_state = 181},
  [349] = {.lex_state = 505, .external_lex_state = 2},
  [350] = {.lex_state = 898, .external_lex_state = 4},
  [351] = {.lex_state = 530},
  [352] = {.lex_state = 556},
  [353] = {.lex_state = 349},
  [354] = {.lex_state = 181},
  [355] = {.lex_state = 556},
  [356] = {.lex_state = 181},
  [357] = {.lex_state = 903, .external_lex_state = 2},
  [358] = {.lex_state = 556},
  [359] = {.lex_state = 556},
  [360] = {.lex_state = 505, .external_lex_state = 2},
  [361] = {.lex_state = 181},
  [362] = {.lex_state = 505, .external_lex_state = 2},
  [363] = {.lex_state = 181},
  [364] = {.lex_state = 959},
  [365] = {.lex_state = 497},
  [366] = {.lex_state = 505, .external_lex_state = 2},
  [367] = {.lex_state = 556},
  [368] = {.lex_state = 181},
  [369] = {.lex_state = 556},
  [370] = {.lex_state = 505, .external_lex_state = 2},
  [371] = {.lex_state = 181},
  [372] = {.lex_state = 181},
  [373] = {.lex_state = 181},
  [374] = {.lex_state = 349},
  [375] = {.lex_state = 505, .external_lex_state = 2},
  [376] = {.lex_state = 775, .external_lex_state = 3},
  [377] = {.lex_state = 505, .external_lex_state = 2},
  [378] = {.lex_state = 505, .external_lex_state = 2},
  [379] = {.lex_state = 908, .external_lex_state = 4},
  [380] = {.lex_state = 505, .external_lex_state = 2},
  [381] = {.lex_state = 917},
  [382] = {.lex_state = 349},
  [383] = {.lex_state = 505, .external_lex_state = 2},
  [384] = {.lex_state = 775, .external_lex_state = 3},
  [385] = {.lex_state = 593, .external_lex_state = 2},
  [386] = {.lex_state = 820, .external_lex_state = 2},
  [387] = {.lex_state = 505, .external_lex_state = 2},
  [388] = {.lex_state = 181},
  [389] = {.lex_state = 825, .external_lex_state = 2},
  [390] = {.lex_state = 181},
  [391] = {.lex_state = 181},
  [392] = {.lex_state = 181},
  [393] = {.lex_state = 922, .external_lex_state = 2},
  [394] = {.lex_state = 922, .external_lex_state = 2},
  [395] = {.lex_state = 820, .external_lex_state = 2},
  [396] = {.lex_state = 505, .external_lex_state = 2},
  [397] = {.lex_state = 820, .external_lex_state = 2},
  [398] = {.lex_state = 864},
  [399] = {.lex_state = 871},
  [400] = {.lex_state = 497},
  [401] = {.lex_state = 932},
  [402] = {.lex_state = 477, .external_lex_state = 2},
  [403] = {.lex_state = 964, .external_lex_state = 2},
  [404] = {.lex_state = 505, .external_lex_state = 2},
  [405] = {.lex_state = 939, .external_lex_state = 4},
  [406] = {.lex_state = 964, .external_lex_state = 2},
  [407] = {.lex_state = 939, .external_lex_state = 4},
  [408] = {.lex_state = 505, .external_lex_state = 2},
  [409] = {.lex_state = 944},
  [410] = {.lex_state = 944},
  [411] = {.lex_state = 477, .external_lex_state = 2},
  [412] = {.lex_state = 181},
  [413] = {.lex_state = 349},
  [414] = {.lex_state = 181},
  [415] = {.lex_state = 349},
  [416] = {.lex_state = 510},
  [417] = {.lex_state = 510},
  [418] = {.lex_state = 510},
  [419] = {.lex_state = 349},
  [420] = {.lex_state = 181},
  [421] = {.lex_state = 510},
  [422] = {.lex_state = 510},
  [423] = {.lex_state = 510},
  [424] = {.lex_state = 588},
  [425] = {.lex_state = 181},
  [426] = {.lex_state = 883},
  [427] = {.lex_state = 588},
  [428] = {.lex_state = 556},
  [429] = {.lex_state = 181},
  [430] = {.lex_state = 181},
  [431] = {.lex_state = 181},
  [432] = {.lex_state = 181},
  [433] = {.lex_state = 181},
  [434] = {.lex_state = 888, .external_lex_state = 2},
  [435] = {.lex_state = 181},
  [436] = {.lex_state = 768},
  [437] = {.lex_state = 949},
  [438] = {.lex_state = 768},
  [439] = {.lex_state = 949},
  [440] = {.lex_state = 181},
  [441] = {.lex_state = 768},
  [442] = {.lex_state = 888, .external_lex_state = 2},
  [443] = {.lex_state = 181},
  [444] = {.lex_state = 768},
  [445] = {.lex_state = 349},
  [446] = {.lex_state = 181},
  [447] = {.lex_state = 768},
  [448] = {.lex_state = 768},
  [449] = {.lex_state = 768},
  [450] = {.lex_state = 181},
  [451] = {.lex_state = 768},
  [452] = {.lex_state = 768},
  [453] = {.lex_state = 888, .external_lex_state = 2},
  [454] = {.lex_state = 768},
  [455] = {.lex_state = 927, .external_lex_state = 2},
  [456] = {.lex_state = 181},
  [457] = {.lex_state = 927, .external_lex_state = 2},
  [458] = {.lex_state = 927, .external_lex_state = 2},
  [459] = {.lex_state = 768},
  [460] = {.lex_state = 505, .external_lex_state = 2},
  [461] = {.lex_state = 505, .external_lex_state = 2},
  [462] = {.lex_state = 898, .external_lex_state = 4},
  [463] = {.lex_state = 181},
  [464] = {.lex_state = 505, .external_lex_state = 2},
  [465] = {.lex_state = 181},
  [466] = {.lex_state = 556},
  [467] = {.lex_state = 349},
  [468] = {.lex_state = 181},
  [469] = {.lex_state = 181},
  [470] = {.lex_state = 505, .external_lex_state = 2},
  [471] = {.lex_state = 181},
  [472] = {.lex_state = 181},
  [473] = {.lex_state = 181},
  [474] = {.lex_state = 556},
  [475] = {.lex_state = 505, .external_lex_state = 2},
  [476] = {.lex_state = 556},
  [477] = {.lex_state = 181},
  [478] = {.lex_state = 959},
  [479] = {.lex_state = 505, .external_lex_state = 2},
  [480] = {.lex_state = 181},
  [481] = {.lex_state = 181},
  [482] = {.lex_state = 181},
  [483] = {.lex_state = 505, .external_lex_state = 2},
  [484] = {.lex_state = 908, .external_lex_state = 4},
  [485] = {.lex_state = 505, .external_lex_state = 2},
  [486] = {.lex_state = 505, .external_lex_state = 2},
  [487] = {.lex_state = 917},
  [488] = {.lex_state = 505, .external_lex_state = 2},
  [489] = {.lex_state = 505, .external_lex_state = 2},
  [490] = {.lex_state = 505, .external_lex_state = 2},
  [491] = {.lex_state = 505, .external_lex_state = 2},
  [492] = {.lex_state = 181},
  [493] = {.lex_state = 825, .external_lex_state = 2},
  [494] = {.lex_state = 825, .external_lex_state = 2},
  [495] = {.lex_state = 454},
  [496] = {.lex_state = 181},
  [497] = {.lex_state = 454},
  [498] = {.lex_state = 556},
  [499] = {.lex_state = 181},
  [500] = {.lex_state = 505, .external_lex_state = 2},
  [501] = {.lex_state = 939, .external_lex_state = 4},
  [502] = {.lex_state = 964, .external_lex_state = 2},
  [503] = {.lex_state = 486},
  [504] = {.lex_state = 497},
  [505] = {.lex_state = 964, .external_lex_state = 2},
  [506] = {.lex_state = 964, .external_lex_state = 2},
  [507] = {.lex_state = 964, .external_lex_state = 2},
  [508] = {.lex_state = 477, .external_lex_state = 2},
  [509] = {.lex_state = 939, .external_lex_state = 4},
  [510] = {.lex_state = 944},
  [511] = {.lex_state = 944},
  [512] = {.lex_state = 181},
  [513] = {.lex_state = 510},
  [514] = {.lex_state = 510},
  [515] = {.lex_state = 510},
  [516] = {.lex_state = 349},
  [517] = {.lex_state = 181},
  [518] = {.lex_state = 883},
  [519] = {.lex_state = 181},
  [520] = {.lex_state = 556},
  [521] = {.lex_state = 181},
  [522] = {.lex_state = 949},
  [523] = {.lex_state = 181},
  [524] = {.lex_state = 949},
  [525] = {.lex_state = 181},
  [526] = {.lex_state = 181},
  [527] = {.lex_state = 888, .external_lex_state = 2},
  [528] = {.lex_state = 949},
  [529] = {.lex_state = 949},
  [530] = {.lex_state = 949},
  [531] = {.lex_state = 768},
  [532] = {.lex_state = 181},
  [533] = {.lex_state = 768},
  [534] = {.lex_state = 888, .external_lex_state = 2},
  [535] = {.lex_state = 949},
  [536] = {.lex_state = 768},
  [537] = {.lex_state = 349},
  [538] = {.lex_state = 949},
  [539] = {.lex_state = 768},
  [540] = {.lex_state = 927, .external_lex_state = 2},
  [541] = {.lex_state = 181},
  [542] = {.lex_state = 927, .external_lex_state = 2},
  [543] = {.lex_state = 898, .external_lex_state = 4},
  [544] = {.lex_state = 181},
  [545] = {.lex_state = 181},
  [546] = {.lex_state = 181},
  [547] = {.lex_state = 181},
  [548] = {.lex_state = 181},
  [549] = {.lex_state = 556},
  [550] = {.lex_state = 181},
  [551] = {.lex_state = 181},
  [552] = {.lex_state = 181},
  [553] = {.lex_state = 505, .external_lex_state = 2},
  [554] = {.lex_state = 908, .external_lex_state = 4},
  [555] = {.lex_state = 917},
  [556] = {.lex_state = 505, .external_lex_state = 2},
  [557] = {.lex_state = 181},
  [558] = {.lex_state = 825, .external_lex_state = 2},
  [559] = {.lex_state = 454},
  [560] = {.lex_state = 181},
  [561] = {.lex_state = 556},
  [562] = {.lex_state = 181},
  [563] = {.lex_state = 454},
  [564] = {.lex_state = 556},
  [565] = {.lex_state = 181},
  [566] = {.lex_state = 964, .external_lex_state = 2},
  [567] = {.lex_state = 497},
  [568] = {.lex_state = 964, .external_lex_state = 2},
  [569] = {.lex_state = 181},
  [570] = {.lex_state = 949},
  [571] = {.lex_state = 949},
  [572] = {.lex_state = 949},
  [573] = {.lex_state = 949},
  [574] = {.lex_state = 181},
  [575] = {.lex_state = 768},
  [576] = {.lex_state = 927, .external_lex_state = 2},
  [577] = {.lex_state = 181},
  [578] = {.lex_state = 505, .external_lex_state = 2},
  [579] = {.lex_state = 181},
  [580] = {.lex_state = 181},
  [581] = {.lex_state = 181},
  [582] = {.lex_state = 181},
  [583] = {.lex_state = 556},
  [584] = {.lex_state = 181},
  [585] = {.lex_state = 181},
  [586] = {.lex_state = 181},
  [587] = {.lex_state = 181},
  [588] = {.lex_state = 181},
  [589] = {.lex_state = 964, .external_lex_state = 2},
  [590] = {.lex_state = 964, .external_lex_state = 2},
  [591] = {.lex_state = 949},
  [592] = {.lex_state = 505, .external_lex_state = 2},
  [593] = {.lex_state = 181},
  [594] = {.lex_state = 181},
  [595] = {.lex_state = 181},
  [596] = {.lex_state = 181},
  [597] = {.lex_state = 181},
  [598] = {.lex_state = 181},
  [599] = {.lex_state = 505, .external_lex_state = 2},
  [600] = {.lex_state = 181},
  [601] = {.lex_state = 181},
  [602] = {.lex_state = 181},
  [603] = {.lex_state = 181},
  [604] = {.lex_state = 505, .external_lex_state = 2},
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
    [sym__general_declaration] = STATE(19),
    [sym_fixity] = STATE(24),
    [sym_type_signature] = STATE(24),
    [sym_algebraic_datatype] = STATE(19),
    [sym_newtype] = STATE(19),
    [sym_type_synonym] = STATE(19),
    [sym__literal] = STATE(19),
    [sym__identifier] = STATE(25),
    [sym_variable_identifier] = STATE(26),
    [sym_constructor_identifier] = STATE(27),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [aux_sym_module_repeat1] = STATE(28),
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
    [sym_foreign_import] = STATE(33),
    [anon_sym_import] = ACTIONS(49),
    [sym_foreign_export] = ACTIONS(51),
    [sym_comment] = ACTIONS(5),
  },
  [5] = {
    [anon_sym_LPAREN] = ACTIONS(53),
    [sym_comment] = ACTIONS(5),
  },
  [6] = {
    [sym_context] = STATE(37),
    [sym_class] = STATE(38),
    [sym_constructor_identifier] = STATE(39),
    [anon_sym_LPAREN] = ACTIONS(55),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [7] = {
    [sym_context] = STATE(40),
    [sym_class] = STATE(38),
    [sym_constructor_identifier] = STATE(41),
    [anon_sym_LPAREN] = ACTIONS(55),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [8] = {
    [sym__op] = STATE(46),
    [sym_variable_symbol] = STATE(47),
    [sym_constructor_symbol] = STATE(47),
    [sym_integer] = STATE(48),
    [sym__variable_symbol] = STATE(49),
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
    [sym_context] = STATE(51),
    [sym_class] = STATE(38),
    [sym_simple_type] = STATE(52),
    [sym_constructor_identifier] = STATE(53),
    [anon_sym_LPAREN] = ACTIONS(55),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [10] = {
    [sym_context] = STATE(55),
    [sym_class] = STATE(38),
    [sym_simple_type] = STATE(56),
    [sym_constructor_identifier] = STATE(57),
    [anon_sym_LPAREN] = ACTIONS(55),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
  },
  [11] = {
    [sym_simple_type] = STATE(58),
    [sym_constructor_identifier] = STATE(59),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
  },
  [12] = {
    [sym__layout_semicolon] = ACTIONS(71),
    [anon_sym_SEMI] = ACTIONS(73),
    [anon_sym_LPAREN] = ACTIONS(73),
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
    [sym__graphic] = STATE(64),
    [sym__small] = STATE(65),
    [sym__large] = STATE(65),
    [sym__symbol] = STATE(65),
    [sym__special] = STATE(65),
    [sym__escape] = STATE(64),
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
    [sym__gap] = STATE(71),
    [sym__graphic] = STATE(71),
    [sym__small] = STATE(73),
    [sym__large] = STATE(73),
    [sym__symbol] = STATE(73),
    [sym__special] = STATE(73),
    [sym__escape] = STATE(71),
    [aux_sym_string_repeat1] = STATE(77),
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
    [sym_function_body] = STATE(80),
    [anon_sym_EQ] = ACTIONS(139),
    [sym_comment] = ACTIONS(5),
  },
  [22] = {
    [sym__function_pattern] = STATE(91),
    [sym_irrefutable_pattern] = STATE(85),
    [sym_list_pattern] = STATE(85),
    [sym_tuple_pattern] = STATE(85),
    [sym_parenthesized_pattern] = STATE(85),
    [sym_as_pattern] = STATE(85),
    [sym_wildcard] = STATE(85),
    [sym__variable] = STATE(92),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym__literal] = STATE(85),
    [sym__identifier] = STATE(93),
    [sym_simple_type] = STATE(94),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(96),
    [sym_integer] = STATE(88),
    [sym_char] = STATE(88),
    [sym_string] = STATE(88),
    [aux_sym_function_head_repeat1] = STATE(97),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(143),
    [anon_sym_LBRACK] = ACTIONS(145),
    [anon_sym__] = ACTIONS(147),
    [sym_list_constructor] = ACTIONS(149),
    [sym__variable_pattern] = ACTIONS(151),
    [sym__constructor_pattern] = ACTIONS(153),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(155),
    [anon_sym_SQUOTE] = ACTIONS(157),
    [anon_sym_DQUOTE] = ACTIONS(159),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [23] = {
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_TILDE] = ACTIONS(161),
    [anon_sym_LBRACK] = ACTIONS(161),
    [anon_sym_AT] = ACTIONS(161),
    [anon_sym__] = ACTIONS(161),
    [sym_list_constructor] = ACTIONS(161),
    [sym__variable_pattern] = ACTIONS(163),
    [sym__constructor_pattern] = ACTIONS(163),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(163),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(161),
    [sym__integer_literal] = ACTIONS(161),
    [sym__octal_literal] = ACTIONS(161),
    [sym__hexidecimal_literal] = ACTIONS(161),
  },
  [24] = {
    [sym__layout_semicolon] = ACTIONS(165),
    [anon_sym_SEMI] = ACTIONS(167),
    [sym_comment] = ACTIONS(5),
  },
  [25] = {
    [sym__layout_semicolon] = ACTIONS(131),
    [anon_sym_SEMI] = ACTIONS(133),
    [anon_sym_COLON_COLON] = ACTIONS(169),
    [sym_comment] = ACTIONS(5),
  },
  [26] = {
    [sym__layout_semicolon] = ACTIONS(171),
    [anon_sym_SEMI] = ACTIONS(173),
    [anon_sym_LPAREN] = ACTIONS(161),
    [anon_sym_TILDE] = ACTIONS(161),
    [anon_sym_LBRACK] = ACTIONS(161),
    [anon_sym__] = ACTIONS(161),
    [anon_sym_COLON_COLON] = ACTIONS(173),
    [sym_list_constructor] = ACTIONS(161),
    [sym__variable_pattern] = ACTIONS(163),
    [sym__constructor_pattern] = ACTIONS(163),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(163),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(161),
    [sym__integer_literal] = ACTIONS(161),
    [sym__octal_literal] = ACTIONS(161),
    [sym__hexidecimal_literal] = ACTIONS(161),
  },
  [27] = {
    [sym__layout_semicolon] = ACTIONS(171),
    [anon_sym_SEMI] = ACTIONS(173),
    [anon_sym_do] = ACTIONS(173),
    [anon_sym_COLON_COLON] = ACTIONS(173),
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
  [28] = {
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
    [sym__general_declaration] = STATE(19),
    [sym_fixity] = STATE(24),
    [sym_type_signature] = STATE(24),
    [sym_algebraic_datatype] = STATE(19),
    [sym_newtype] = STATE(19),
    [sym_type_synonym] = STATE(19),
    [sym__literal] = STATE(19),
    [sym__identifier] = STATE(25),
    [sym_variable_identifier] = STATE(26),
    [sym_constructor_identifier] = STATE(27),
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
  [29] = {
    [sym_module_exports] = STATE(102),
    [anon_sym_where] = ACTIONS(179),
    [anon_sym_LPAREN] = ACTIONS(181),
    [sym_comment] = ACTIONS(5),
  },
  [30] = {
    [sym_module_identifier] = ACTIONS(183),
    [sym_comment] = ACTIONS(5),
  },
  [31] = {
    [sym_import_specification] = STATE(107),
    [sym__layout_semicolon] = ACTIONS(185),
    [anon_sym_SEMI] = ACTIONS(187),
    [anon_sym_LPAREN] = ACTIONS(189),
    [anon_sym_as] = ACTIONS(191),
    [anon_sym_hiding] = ACTIONS(193),
    [sym_comment] = ACTIONS(5),
  },
  [32] = {
    [anon_sym_ccall] = ACTIONS(195),
    [anon_sym_stdcall] = ACTIONS(195),
    [anon_sym_cplusplus] = ACTIONS(195),
    [anon_sym_jvm] = ACTIONS(195),
    [anon_sym_dotnet] = ACTIONS(195),
    [sym_comment] = ACTIONS(5),
  },
  [33] = {
    [sym_calling_convention] = STATE(109),
    [anon_sym_ccall] = ACTIONS(197),
    [anon_sym_stdcall] = ACTIONS(197),
    [anon_sym_cplusplus] = ACTIONS(197),
    [anon_sym_jvm] = ACTIONS(197),
    [anon_sym_dotnet] = ACTIONS(197),
    [sym_comment] = ACTIONS(5),
  },
  [34] = {
    [sym__identifier] = STATE(111),
    [sym_variable_identifier] = STATE(112),
    [sym_constructor_identifier] = STATE(112),
    [anon_sym_RPAREN] = ACTIONS(199),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [35] = {
    [sym_class] = STATE(113),
    [sym_constructor_identifier] = STATE(114),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
  },
  [36] = {
    [anon_sym_where] = ACTIONS(79),
    [anon_sym_RBRACE] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(79),
    [anon_sym_BQUOTE] = ACTIONS(79),
    [anon_sym_COLON_COLON] = ACTIONS(79),
    [sym__variable_pattern] = ACTIONS(203),
    [sym_comment] = ACTIONS(5),
  },
  [37] = {
    [sym_constructor_identifier] = STATE(115),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [38] = {
    [anon_sym_EQ_GT] = ACTIONS(205),
    [sym_comment] = ACTIONS(5),
  },
  [39] = {
    [sym_variable_identifier] = STATE(120),
    [aux_sym_type_class_repeat1] = STATE(121),
    [anon_sym_where] = ACTIONS(207),
    [anon_sym_LPAREN] = ACTIONS(209),
    [sym__variable_pattern] = ACTIONS(211),
    [sym_comment] = ACTIONS(5),
  },
  [40] = {
    [sym_constructor_identifier] = STATE(122),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [41] = {
    [sym_variable_identifier] = STATE(120),
    [aux_sym_type_class_repeat1] = STATE(124),
    [anon_sym_where] = ACTIONS(213),
    [anon_sym_LPAREN] = ACTIONS(209),
    [sym__variable_pattern] = ACTIONS(211),
    [sym_comment] = ACTIONS(5),
  },
  [42] = {
    [sym__layout_semicolon] = ACTIONS(215),
    [anon_sym_SEMI] = ACTIONS(217),
    [anon_sym_COMMA] = ACTIONS(217),
    [anon_sym_DASH] = ACTIONS(217),
    [anon_sym_BANG] = ACTIONS(217),
    [anon_sym_DOT] = ACTIONS(217),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(217),
    [anon_sym_DOLLAR] = ACTIONS(217),
    [anon_sym_PERCENT] = ACTIONS(217),
    [anon_sym_AMP] = ACTIONS(217),
    [anon_sym_1] = ACTIONS(217),
    [anon_sym_PLUS] = ACTIONS(217),
    [anon_sym_SLASH] = ACTIONS(217),
    [anon_sym_LT] = ACTIONS(217),
    [anon_sym_GT] = ACTIONS(217),
    [anon_sym_QMARK] = ACTIONS(217),
    [anon_sym_CARET] = ACTIONS(217),
  },
  [43] = {
    [sym__identifier] = STATE(125),
    [sym_variable_identifier] = STATE(112),
    [sym_constructor_identifier] = STATE(112),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [44] = {
    [sym__constructor_symbol] = STATE(127),
    [aux_sym_constructor_symbol_repeat1] = STATE(128),
    [sym__layout_semicolon] = ACTIONS(219),
    [anon_sym_SEMI] = ACTIONS(221),
    [anon_sym_COMMA] = ACTIONS(221),
    [anon_sym_DASH] = ACTIONS(223),
    [anon_sym_COLON] = ACTIONS(223),
    [anon_sym_BANG] = ACTIONS(223),
    [anon_sym_DOT] = ACTIONS(223),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(223),
    [anon_sym_DOLLAR] = ACTIONS(223),
    [anon_sym_PERCENT] = ACTIONS(223),
    [anon_sym_AMP] = ACTIONS(223),
    [anon_sym_1] = ACTIONS(223),
    [anon_sym_PLUS] = ACTIONS(223),
    [anon_sym_SLASH] = ACTIONS(223),
    [anon_sym_LT] = ACTIONS(223),
    [anon_sym_GT] = ACTIONS(223),
    [anon_sym_QMARK] = ACTIONS(223),
    [anon_sym_CARET] = ACTIONS(223),
  },
  [45] = {
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
  [46] = {
    [aux_sym_fixity_repeat1] = STATE(130),
    [sym__layout_semicolon] = ACTIONS(225),
    [anon_sym_SEMI] = ACTIONS(227),
    [anon_sym_COMMA] = ACTIONS(229),
    [sym_comment] = ACTIONS(5),
  },
  [47] = {
    [sym__layout_semicolon] = ACTIONS(231),
    [anon_sym_SEMI] = ACTIONS(233),
    [anon_sym_COMMA] = ACTIONS(233),
    [sym_comment] = ACTIONS(5),
  },
  [48] = {
    [sym__op] = STATE(131),
    [sym_variable_symbol] = STATE(47),
    [sym_constructor_symbol] = STATE(47),
    [sym__variable_symbol] = STATE(49),
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
  [49] = {
    [sym__variable_symbol] = STATE(132),
    [aux_sym_variable_symbol_repeat1] = STATE(133),
    [sym__layout_semicolon] = ACTIONS(235),
    [anon_sym_SEMI] = ACTIONS(237),
    [anon_sym_COMMA] = ACTIONS(237),
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
  [50] = {
    [sym__layout_semicolon] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(79),
    [anon_sym_PIPE] = ACTIONS(79),
    [anon_sym_deriving] = ACTIONS(79),
    [anon_sym_BANG] = ACTIONS(79),
    [sym__variable_pattern] = ACTIONS(203),
    [sym__constructor_pattern] = ACTIONS(203),
    [sym_comment] = ACTIONS(5),
  },
  [51] = {
    [sym_simple_type] = STATE(134),
    [sym_constructor_identifier] = STATE(135),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [52] = {
    [sym_constructors] = STATE(138),
    [sym_constructor] = STATE(139),
    [sym_deriving] = STATE(140),
    [sym_constructor_identifier] = STATE(141),
    [sym__layout_semicolon] = ACTIONS(239),
    [anon_sym_SEMI] = ACTIONS(241),
    [anon_sym_EQ] = ACTIONS(243),
    [anon_sym_deriving] = ACTIONS(245),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [53] = {
    [sym_variable_identifier] = STATE(143),
    [aux_sym_type_class_repeat1] = STATE(144),
    [sym__layout_semicolon] = ACTIONS(247),
    [anon_sym_SEMI] = ACTIONS(249),
    [anon_sym_LPAREN] = ACTIONS(209),
    [anon_sym_EQ] = ACTIONS(249),
    [anon_sym_deriving] = ACTIONS(249),
    [sym__variable_pattern] = ACTIONS(251),
    [sym__constructor_pattern] = ACTIONS(253),
    [sym_comment] = ACTIONS(5),
  },
  [54] = {
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(79),
    [anon_sym_DASH_GT] = ACTIONS(79),
    [sym__variable_pattern] = ACTIONS(79),
    [sym__constructor_pattern] = ACTIONS(203),
    [sym_comment] = ACTIONS(5),
  },
  [55] = {
    [sym_simple_type] = STATE(145),
    [sym_constructor_identifier] = STATE(59),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
  },
  [56] = {
    [anon_sym_EQ] = ACTIONS(255),
    [sym_comment] = ACTIONS(5),
  },
  [57] = {
    [sym_variable_identifier] = STATE(148),
    [aux_sym_type_class_repeat1] = STATE(149),
    [anon_sym_LPAREN] = ACTIONS(209),
    [anon_sym_EQ] = ACTIONS(249),
    [sym__variable_pattern] = ACTIONS(257),
    [sym_comment] = ACTIONS(5),
  },
  [58] = {
    [anon_sym_EQ] = ACTIONS(259),
    [sym_comment] = ACTIONS(5),
  },
  [59] = {
    [sym_variable_identifier] = STATE(152),
    [aux_sym_type_class_repeat1] = STATE(149),
    [anon_sym_EQ] = ACTIONS(249),
    [sym__variable_pattern] = ACTIONS(261),
    [sym_comment] = ACTIONS(5),
  },
  [60] = {
    [anon_sym_LPAREN] = ACTIONS(263),
    [anon_sym_TILDE] = ACTIONS(263),
    [anon_sym_LBRACK] = ACTIONS(263),
    [anon_sym_AT] = ACTIONS(263),
    [anon_sym__] = ACTIONS(263),
    [sym_list_constructor] = ACTIONS(263),
    [sym__variable_pattern] = ACTIONS(265),
    [sym__constructor_pattern] = ACTIONS(265),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(265),
    [anon_sym_SQUOTE] = ACTIONS(263),
    [anon_sym_DQUOTE] = ACTIONS(263),
    [sym__integer_literal] = ACTIONS(263),
    [sym__octal_literal] = ACTIONS(263),
    [sym__hexidecimal_literal] = ACTIONS(263),
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
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(277),
  },
  [67] = {
    [sym__char_escape] = STATE(155),
    [sym__ascii] = STATE(155),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(279),
    [anon_sym_DQUOTE] = ACTIONS(279),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(281),
    [anon_sym_AMP] = ACTIONS(279),
    [anon_sym_CARET] = ACTIONS(283),
    [anon_sym_BSLASH] = ACTIONS(279),
    [anon_sym_x] = ACTIONS(285),
    [anon_sym_X] = ACTIONS(285),
    [anon_sym_o] = ACTIONS(287),
    [anon_sym_O] = ACTIONS(287),
    [anon_sym_a] = ACTIONS(279),
    [anon_sym_b] = ACTIONS(279),
    [anon_sym_f] = ACTIONS(279),
    [anon_sym_n] = ACTIONS(279),
    [anon_sym_r] = ACTIONS(279),
    [anon_sym_t] = ACTIONS(279),
    [anon_sym_v] = ACTIONS(279),
    [anon_sym_NUL] = ACTIONS(289),
    [anon_sym_SOH] = ACTIONS(289),
    [anon_sym_STX] = ACTIONS(289),
    [anon_sym_ETX] = ACTIONS(289),
    [anon_sym_EOT] = ACTIONS(289),
    [anon_sym_ENQ] = ACTIONS(289),
    [anon_sym_ACK] = ACTIONS(289),
    [anon_sym_BEL] = ACTIONS(289),
    [anon_sym_BS] = ACTIONS(289),
    [anon_sym_HT] = ACTIONS(289),
    [anon_sym_LF] = ACTIONS(289),
    [anon_sym_VT] = ACTIONS(289),
    [anon_sym_FF] = ACTIONS(289),
    [anon_sym_CR] = ACTIONS(289),
    [anon_sym_SO] = ACTIONS(289),
    [anon_sym_SI] = ACTIONS(289),
    [anon_sym_DLE] = ACTIONS(289),
    [anon_sym_DC1] = ACTIONS(289),
    [anon_sym_DC2] = ACTIONS(289),
    [anon_sym_DC3] = ACTIONS(289),
    [anon_sym_DC4] = ACTIONS(289),
    [anon_sym_NAK] = ACTIONS(289),
    [anon_sym_SYN] = ACTIONS(289),
    [anon_sym_ETB] = ACTIONS(289),
    [anon_sym_CAN] = ACTIONS(289),
    [anon_sym_EM] = ACTIONS(289),
    [anon_sym_SUB] = ACTIONS(289),
    [anon_sym_ESC] = ACTIONS(289),
    [anon_sym_FS] = ACTIONS(289),
    [anon_sym_GS] = ACTIONS(289),
    [anon_sym_RS] = ACTIONS(289),
    [anon_sym_US] = ACTIONS(289),
    [anon_sym_SP] = ACTIONS(289),
    [anon_sym_DEL] = ACTIONS(289),
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
    [anon_sym_SEMI] = ACTIONS(297),
    [anon_sym_LBRACE] = ACTIONS(297),
    [anon_sym_RBRACE] = ACTIONS(297),
    [anon_sym_LPAREN] = ACTIONS(297),
    [anon_sym_RPAREN] = ACTIONS(297),
    [anon_sym_EQ] = ACTIONS(297),
    [anon_sym_TILDE] = ACTIONS(297),
    [anon_sym_LBRACK] = ACTIONS(297),
    [anon_sym_RBRACK] = ACTIONS(297),
    [anon_sym_DASH] = ACTIONS(297),
    [anon_sym_AT] = ACTIONS(297),
    [anon_sym__] = ACTIONS(297),
    [anon_sym_BQUOTE] = ACTIONS(297),
    [anon_sym_COLON] = ACTIONS(297),
    [anon_sym_PIPE] = ACTIONS(297),
    [anon_sym_BANG] = ACTIONS(297),
    [anon_sym_DOT] = ACTIONS(297),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(297),
    [anon_sym_DQUOTE] = ACTIONS(297),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(297),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(297),
    [sym__ascii_large] = ACTIONS(297),
    [anon_sym_POUND] = ACTIONS(297),
    [anon_sym_DOLLAR] = ACTIONS(297),
    [anon_sym_PERCENT] = ACTIONS(297),
    [anon_sym_AMP] = ACTIONS(297),
    [anon_sym_1] = ACTIONS(297),
    [anon_sym_PLUS] = ACTIONS(297),
    [anon_sym_SLASH] = ACTIONS(297),
    [anon_sym_LT] = ACTIONS(297),
    [anon_sym_GT] = ACTIONS(297),
    [anon_sym_QMARK] = ACTIONS(297),
    [anon_sym_CARET] = ACTIONS(297),
    [anon_sym_BSLASH] = ACTIONS(297),
    [sym__space] = ACTIONS(297),
    [sym__newline] = ACTIONS(297),
    [sym__tab] = ACTIONS(297),
    [sym__vertical_tab] = ACTIONS(297),
  },
  [72] = {
    [sym__layout_semicolon] = ACTIONS(299),
    [anon_sym_SEMI] = ACTIONS(301),
    [anon_sym_do] = ACTIONS(301),
    [sym__variable_pattern] = ACTIONS(303),
    [sym__constructor_pattern] = ACTIONS(303),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(303),
    [anon_sym_SQUOTE] = ACTIONS(301),
    [anon_sym_DQUOTE] = ACTIONS(301),
    [sym__integer_literal] = ACTIONS(301),
    [sym__octal_literal] = ACTIONS(301),
    [sym__hexidecimal_literal] = ACTIONS(301),
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
    [anon_sym_SEMI] = ACTIONS(307),
    [anon_sym_LBRACE] = ACTIONS(307),
    [anon_sym_RBRACE] = ACTIONS(307),
    [anon_sym_LPAREN] = ACTIONS(307),
    [anon_sym_RPAREN] = ACTIONS(307),
    [anon_sym_EQ] = ACTIONS(307),
    [anon_sym_TILDE] = ACTIONS(307),
    [anon_sym_LBRACK] = ACTIONS(307),
    [anon_sym_RBRACK] = ACTIONS(307),
    [anon_sym_DASH] = ACTIONS(307),
    [anon_sym_AT] = ACTIONS(307),
    [anon_sym__] = ACTIONS(307),
    [anon_sym_BQUOTE] = ACTIONS(307),
    [anon_sym_COLON] = ACTIONS(307),
    [anon_sym_PIPE] = ACTIONS(307),
    [anon_sym_BANG] = ACTIONS(307),
    [anon_sym_DOT] = ACTIONS(307),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(307),
    [anon_sym_DQUOTE] = ACTIONS(307),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(307),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(307),
    [sym__ascii_large] = ACTIONS(307),
    [anon_sym_POUND] = ACTIONS(307),
    [anon_sym_DOLLAR] = ACTIONS(307),
    [anon_sym_PERCENT] = ACTIONS(307),
    [anon_sym_AMP] = ACTIONS(307),
    [anon_sym_1] = ACTIONS(307),
    [anon_sym_PLUS] = ACTIONS(307),
    [anon_sym_SLASH] = ACTIONS(307),
    [anon_sym_LT] = ACTIONS(307),
    [anon_sym_GT] = ACTIONS(307),
    [anon_sym_QMARK] = ACTIONS(307),
    [anon_sym_CARET] = ACTIONS(307),
    [anon_sym_BSLASH] = ACTIONS(307),
    [sym__space] = ACTIONS(307),
    [sym__newline] = ACTIONS(307),
    [sym__tab] = ACTIONS(307),
    [sym__vertical_tab] = ACTIONS(307),
  },
  [75] = {
    [sym__char_escape] = STATE(161),
    [sym__ascii] = STATE(161),
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
    [anon_sym_SQUOTE] = ACTIONS(309),
    [anon_sym_DQUOTE] = ACTIONS(309),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(311),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(293),
    [sym__ascii_large] = ACTIONS(293),
    [anon_sym_POUND] = ACTIONS(293),
    [anon_sym_DOLLAR] = ACTIONS(293),
    [anon_sym_PERCENT] = ACTIONS(293),
    [anon_sym_AMP] = ACTIONS(309),
    [anon_sym_1] = ACTIONS(293),
    [anon_sym_PLUS] = ACTIONS(293),
    [anon_sym_SLASH] = ACTIONS(293),
    [anon_sym_LT] = ACTIONS(293),
    [anon_sym_GT] = ACTIONS(293),
    [anon_sym_QMARK] = ACTIONS(293),
    [anon_sym_CARET] = ACTIONS(313),
    [anon_sym_BSLASH] = ACTIONS(309),
    [sym__space] = ACTIONS(293),
    [sym__newline] = ACTIONS(293),
    [sym__tab] = ACTIONS(293),
    [sym__vertical_tab] = ACTIONS(293),
    [anon_sym_x] = ACTIONS(315),
    [anon_sym_X] = ACTIONS(315),
    [anon_sym_o] = ACTIONS(317),
    [anon_sym_O] = ACTIONS(317),
    [anon_sym_a] = ACTIONS(309),
    [anon_sym_b] = ACTIONS(309),
    [anon_sym_f] = ACTIONS(309),
    [anon_sym_n] = ACTIONS(309),
    [anon_sym_r] = ACTIONS(309),
    [anon_sym_t] = ACTIONS(309),
    [anon_sym_v] = ACTIONS(309),
    [anon_sym_NUL] = ACTIONS(319),
    [anon_sym_SOH] = ACTIONS(319),
    [anon_sym_STX] = ACTIONS(319),
    [anon_sym_ETX] = ACTIONS(319),
    [anon_sym_EOT] = ACTIONS(319),
    [anon_sym_ENQ] = ACTIONS(319),
    [anon_sym_ACK] = ACTIONS(319),
    [anon_sym_BEL] = ACTIONS(319),
    [anon_sym_BS] = ACTIONS(319),
    [anon_sym_HT] = ACTIONS(319),
    [anon_sym_LF] = ACTIONS(319),
    [anon_sym_VT] = ACTIONS(319),
    [anon_sym_FF] = ACTIONS(319),
    [anon_sym_CR] = ACTIONS(319),
    [anon_sym_SO] = ACTIONS(319),
    [anon_sym_SI] = ACTIONS(319),
    [anon_sym_DLE] = ACTIONS(319),
    [anon_sym_DC1] = ACTIONS(319),
    [anon_sym_DC2] = ACTIONS(319),
    [anon_sym_DC3] = ACTIONS(319),
    [anon_sym_DC4] = ACTIONS(319),
    [anon_sym_NAK] = ACTIONS(319),
    [anon_sym_SYN] = ACTIONS(319),
    [anon_sym_ETB] = ACTIONS(319),
    [anon_sym_CAN] = ACTIONS(319),
    [anon_sym_EM] = ACTIONS(319),
    [anon_sym_SUB] = ACTIONS(319),
    [anon_sym_ESC] = ACTIONS(319),
    [anon_sym_FS] = ACTIONS(319),
    [anon_sym_GS] = ACTIONS(319),
    [anon_sym_RS] = ACTIONS(319),
    [anon_sym_US] = ACTIONS(319),
    [anon_sym_SP] = ACTIONS(319),
    [anon_sym_DEL] = ACTIONS(319),
  },
  [76] = {
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
    [sym_comment] = ACTIONS(95),
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
  [77] = {
    [sym__gap] = STATE(166),
    [sym__graphic] = STATE(166),
    [sym__small] = STATE(73),
    [sym__large] = STATE(73),
    [sym__symbol] = STATE(73),
    [sym__special] = STATE(73),
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
    [anon_sym_SQUOTE] = ACTIONS(323),
    [anon_sym_DQUOTE] = ACTIONS(325),
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
  [78] = {
    [ts_builtin_sym_end] = ACTIONS(327),
    [anon_sym_RBRACE] = ACTIONS(329),
    [anon_sym_import] = ACTIONS(329),
    [anon_sym_foreign] = ACTIONS(329),
    [anon_sym_default] = ACTIONS(329),
    [anon_sym_class] = ACTIONS(329),
    [anon_sym_instance] = ACTIONS(329),
    [anon_sym_infixl] = ACTIONS(329),
    [anon_sym_infixr] = ACTIONS(329),
    [anon_sym_infix] = ACTIONS(329),
    [anon_sym_data] = ACTIONS(329),
    [anon_sym_newtype] = ACTIONS(329),
    [anon_sym_type] = ACTIONS(329),
    [sym__variable_pattern] = ACTIONS(331),
    [sym__constructor_pattern] = ACTIONS(331),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(331),
    [anon_sym_SQUOTE] = ACTIONS(329),
    [anon_sym_DQUOTE] = ACTIONS(329),
    [sym__integer_literal] = ACTIONS(329),
    [sym__octal_literal] = ACTIONS(329),
    [sym__hexidecimal_literal] = ACTIONS(329),
  },
  [79] = {
    [sym_general_constructor] = STATE(171),
    [sym__variable] = STATE(171),
    [sym_qualified_variable_identifier] = STATE(172),
    [sym__expression] = STATE(173),
    [sym_do_expression] = STATE(171),
    [sym__literal] = STATE(171),
    [sym__identifier] = STATE(171),
    [sym_variable_identifier] = STATE(27),
    [sym_constructor_identifier] = STATE(174),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [aux_sym_function_body_repeat1] = STATE(175),
    [sym__layout_semicolon] = ACTIONS(333),
    [anon_sym_SEMI] = ACTIONS(335),
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
  [80] = {
    [sym__layout_semicolon] = ACTIONS(343),
    [anon_sym_SEMI] = ACTIONS(345),
    [sym_comment] = ACTIONS(5),
  },
  [81] = {
    [sym__function_pattern] = STATE(179),
    [sym_irrefutable_pattern] = STATE(85),
    [sym_list_pattern] = STATE(85),
    [sym_tuple_pattern] = STATE(85),
    [sym_parenthesized_pattern] = STATE(85),
    [sym__pattern] = STATE(180),
    [sym_negative_literal] = STATE(181),
    [sym_general_constructor] = STATE(181),
    [sym_as_pattern] = STATE(85),
    [sym_wildcard] = STATE(85),
    [sym__variable] = STATE(182),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym__literal] = STATE(85),
    [sym__identifier] = STATE(93),
    [sym_simple_type] = STATE(94),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(183),
    [sym_integer] = STATE(88),
    [sym_char] = STATE(88),
    [sym_string] = STATE(88),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(347),
    [anon_sym_LBRACK] = ACTIONS(145),
    [anon_sym_DASH] = ACTIONS(349),
    [anon_sym__] = ACTIONS(147),
    [sym_list_constructor] = ACTIONS(149),
    [sym__variable_pattern] = ACTIONS(151),
    [sym__constructor_pattern] = ACTIONS(351),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(155),
    [anon_sym_SQUOTE] = ACTIONS(157),
    [anon_sym_DQUOTE] = ACTIONS(159),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [82] = {
    [sym__function_pattern] = STATE(184),
    [sym_irrefutable_pattern] = STATE(85),
    [sym_list_pattern] = STATE(85),
    [sym_tuple_pattern] = STATE(85),
    [sym_parenthesized_pattern] = STATE(85),
    [sym_as_pattern] = STATE(85),
    [sym_wildcard] = STATE(85),
    [sym__variable] = STATE(92),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym__literal] = STATE(85),
    [sym__identifier] = STATE(93),
    [sym_simple_type] = STATE(94),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(96),
    [sym_integer] = STATE(88),
    [sym_char] = STATE(88),
    [sym_string] = STATE(88),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(143),
    [anon_sym_LBRACK] = ACTIONS(145),
    [anon_sym__] = ACTIONS(147),
    [sym_list_constructor] = ACTIONS(149),
    [sym__variable_pattern] = ACTIONS(151),
    [sym__constructor_pattern] = ACTIONS(153),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(155),
    [anon_sym_SQUOTE] = ACTIONS(157),
    [anon_sym_DQUOTE] = ACTIONS(159),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [83] = {
    [sym__function_pattern] = STATE(186),
    [sym_irrefutable_pattern] = STATE(85),
    [sym_list_pattern] = STATE(85),
    [sym_tuple_pattern] = STATE(85),
    [sym_parenthesized_pattern] = STATE(85),
    [sym_as_pattern] = STATE(85),
    [sym_wildcard] = STATE(85),
    [sym__variable] = STATE(187),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym__literal] = STATE(85),
    [sym__identifier] = STATE(93),
    [sym_simple_type] = STATE(94),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(188),
    [sym_integer] = STATE(88),
    [sym_char] = STATE(88),
    [sym_string] = STATE(88),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(353),
    [anon_sym_LBRACK] = ACTIONS(145),
    [anon_sym__] = ACTIONS(147),
    [sym_list_constructor] = ACTIONS(149),
    [sym__variable_pattern] = ACTIONS(151),
    [sym__constructor_pattern] = ACTIONS(351),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(155),
    [anon_sym_SQUOTE] = ACTIONS(157),
    [anon_sym_DQUOTE] = ACTIONS(159),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [84] = {
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
  [85] = {
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
  [86] = {
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
  [87] = {
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(79),
    [anon_sym_TILDE] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym__] = ACTIONS(79),
    [sym_list_constructor] = ACTIONS(79),
    [sym__variable_pattern] = ACTIONS(203),
    [sym__constructor_pattern] = ACTIONS(203),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(203),
    [anon_sym_SQUOTE] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym__integer_literal] = ACTIONS(79),
    [sym__octal_literal] = ACTIONS(79),
    [sym__hexidecimal_literal] = ACTIONS(79),
  },
  [88] = {
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
  [89] = {
    [sym__graphic] = STATE(189),
    [sym__small] = STATE(65),
    [sym__large] = STATE(65),
    [sym__symbol] = STATE(65),
    [sym__special] = STATE(65),
    [sym__escape] = STATE(189),
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
  [90] = {
    [sym__gap] = STATE(71),
    [sym__graphic] = STATE(71),
    [sym__small] = STATE(73),
    [sym__large] = STATE(73),
    [sym__symbol] = STATE(73),
    [sym__special] = STATE(73),
    [sym__escape] = STATE(71),
    [aux_sym_string_repeat1] = STATE(191),
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
  [91] = {
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
  [92] = {
    [anon_sym_AT] = ACTIONS(371),
    [sym_comment] = ACTIONS(5),
  },
  [93] = {
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
  [94] = {
    [anon_sym_LBRACE] = ACTIONS(373),
    [sym_comment] = ACTIONS(5),
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
    [anon_sym_AT] = ACTIONS(161),
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
    [sym_variable_identifier] = STATE(152),
    [aux_sym_type_class_repeat1] = STATE(194),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_LPAREN] = ACTIONS(173),
    [anon_sym_EQ] = ACTIONS(173),
    [anon_sym_TILDE] = ACTIONS(173),
    [anon_sym_LBRACK] = ACTIONS(173),
    [anon_sym__] = ACTIONS(173),
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
    [sym__function_pattern] = STATE(195),
    [sym_irrefutable_pattern] = STATE(85),
    [sym_list_pattern] = STATE(85),
    [sym_tuple_pattern] = STATE(85),
    [sym_parenthesized_pattern] = STATE(85),
    [sym_as_pattern] = STATE(85),
    [sym_wildcard] = STATE(85),
    [sym__variable] = STATE(92),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym__literal] = STATE(85),
    [sym__identifier] = STATE(93),
    [sym_simple_type] = STATE(94),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(96),
    [sym_integer] = STATE(88),
    [sym_char] = STATE(88),
    [sym_string] = STATE(88),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_EQ] = ACTIONS(375),
    [anon_sym_TILDE] = ACTIONS(143),
    [anon_sym_LBRACK] = ACTIONS(145),
    [anon_sym__] = ACTIONS(147),
    [sym_list_constructor] = ACTIONS(149),
    [sym__variable_pattern] = ACTIONS(151),
    [sym__constructor_pattern] = ACTIONS(153),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(155),
    [anon_sym_SQUOTE] = ACTIONS(157),
    [anon_sym_DQUOTE] = ACTIONS(159),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [98] = {
    [sym_type] = STATE(201),
    [sym__generic_type_constructor] = STATE(202),
    [sym_tupling_constructor] = STATE(198),
    [sym_tuple] = STATE(202),
    [sym_list] = STATE(202),
    [sym_parenthesized_constructor] = STATE(202),
    [sym_context] = STATE(203),
    [sym_class] = STATE(204),
    [sym_variable_identifier] = STATE(205),
    [sym_constructor_identifier] = STATE(206),
    [sym__type_constructors] = STATE(198),
    [sym_qualified_type_constructor] = STATE(207),
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
  [99] = {
    [sym__layout_semicolon] = ACTIONS(389),
    [anon_sym_SEMI] = ACTIONS(391),
    [sym_comment] = ACTIONS(5),
  },
  [100] = {
    [sym_declarations] = STATE(211),
    [sym__layout_open_brace] = ACTIONS(393),
    [anon_sym_LBRACE] = ACTIONS(395),
    [sym_comment] = ACTIONS(5),
  },
  [101] = {
    [sym_export] = STATE(213),
    [sym__identifier] = STATE(214),
    [sym_variable_identifier] = STATE(112),
    [sym_constructor_identifier] = STATE(112),
    [anon_sym_RPAREN] = ACTIONS(397),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [102] = {
    [anon_sym_where] = ACTIONS(399),
    [sym_comment] = ACTIONS(5),
  },
  [103] = {
    [sym_import_specification] = STATE(217),
    [sym__layout_semicolon] = ACTIONS(401),
    [anon_sym_SEMI] = ACTIONS(403),
    [anon_sym_LPAREN] = ACTIONS(189),
    [anon_sym_as] = ACTIONS(405),
    [anon_sym_hiding] = ACTIONS(193),
    [sym_comment] = ACTIONS(5),
  },
  [104] = {
    [sym__identifier] = STATE(219),
    [sym_variable_identifier] = STATE(112),
    [sym_constructor_identifier] = STATE(112),
    [anon_sym_RPAREN] = ACTIONS(407),
    [sym__variable_pattern] = ACTIONS(201),
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
    [sym_safety] = STATE(224),
    [sym_type_signature] = STATE(225),
    [sym__identifier] = STATE(226),
    [sym_variable_identifier] = STATE(112),
    [sym_constructor_identifier] = STATE(112),
    [sym_string] = STATE(227),
    [anon_sym_unsafe] = ACTIONS(417),
    [anon_sym_safe] = ACTIONS(417),
    [sym__variable_pattern] = ACTIONS(211),
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
    [aux_sym_export_repeat1] = STATE(230),
    [anon_sym_COMMA] = ACTIONS(425),
    [anon_sym_RPAREN] = ACTIONS(427),
    [sym_comment] = ACTIONS(5),
  },
  [112] = {
    [anon_sym_RBRACE] = ACTIONS(173),
    [anon_sym_LPAREN] = ACTIONS(173),
    [anon_sym_COMMA] = ACTIONS(173),
    [anon_sym_RPAREN] = ACTIONS(173),
    [anon_sym_EQ] = ACTIONS(173),
    [anon_sym_BQUOTE] = ACTIONS(173),
    [anon_sym_COLON_COLON] = ACTIONS(173),
    [sym_comment] = ACTIONS(5),
  },
  [113] = {
    [aux_sym_context_repeat1] = STATE(233),
    [anon_sym_COMMA] = ACTIONS(429),
    [anon_sym_RPAREN] = ACTIONS(431),
    [sym_comment] = ACTIONS(5),
  },
  [114] = {
    [sym_variable_identifier] = STATE(234),
    [anon_sym_LPAREN] = ACTIONS(209),
    [sym__variable_pattern] = ACTIONS(201),
    [sym_comment] = ACTIONS(5),
  },
  [115] = {
    [sym_variable_identifier] = STATE(236),
    [aux_sym_type_class_repeat1] = STATE(237),
    [anon_sym_where] = ACTIONS(433),
    [sym__variable_pattern] = ACTIONS(211),
    [sym_comment] = ACTIONS(5),
  },
  [116] = {
    [sym__constructor_pattern] = ACTIONS(435),
    [sym_comment] = ACTIONS(5),
  },
  [117] = {
    [sym_general_declarations] = STATE(240),
    [sym__layout_open_brace] = ACTIONS(437),
    [anon_sym_LBRACE] = ACTIONS(439),
    [sym_comment] = ACTIONS(5),
  },
  [118] = {
    [sym_variable_identifier] = STATE(152),
    [aux_sym_type_class_repeat1] = STATE(241),
    [sym__variable_pattern] = ACTIONS(257),
    [sym_comment] = ACTIONS(5),
  },
  [119] = {
    [anon_sym_where] = ACTIONS(73),
    [anon_sym_COMMA] = ACTIONS(73),
    [anon_sym_RPAREN] = ACTIONS(73),
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
    [sym_variable_identifier] = STATE(242),
    [anon_sym_where] = ACTIONS(433),
    [sym__variable_pattern] = ACTIONS(211),
    [sym_comment] = ACTIONS(5),
  },
  [122] = {
    [sym_variable_identifier] = STATE(236),
    [aux_sym_type_class_repeat1] = STATE(244),
    [anon_sym_where] = ACTIONS(447),
    [sym__variable_pattern] = ACTIONS(211),
    [sym_comment] = ACTIONS(5),
  },
  [123] = {
    [sym_general_declarations] = STATE(245),
    [sym__layout_open_brace] = ACTIONS(437),
    [anon_sym_LBRACE] = ACTIONS(439),
    [sym_comment] = ACTIONS(5),
  },
  [124] = {
    [sym_variable_identifier] = STATE(242),
    [anon_sym_where] = ACTIONS(447),
    [sym__variable_pattern] = ACTIONS(211),
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
    [sym__constructor_symbol] = STATE(247),
    [sym__layout_semicolon] = ACTIONS(459),
    [anon_sym_SEMI] = ACTIONS(461),
    [anon_sym_COMMA] = ACTIONS(461),
    [anon_sym_DASH] = ACTIONS(223),
    [anon_sym_COLON] = ACTIONS(223),
    [anon_sym_BANG] = ACTIONS(223),
    [anon_sym_DOT] = ACTIONS(223),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(223),
    [anon_sym_DOLLAR] = ACTIONS(223),
    [anon_sym_PERCENT] = ACTIONS(223),
    [anon_sym_AMP] = ACTIONS(223),
    [anon_sym_1] = ACTIONS(223),
    [anon_sym_PLUS] = ACTIONS(223),
    [anon_sym_SLASH] = ACTIONS(223),
    [anon_sym_LT] = ACTIONS(223),
    [anon_sym_GT] = ACTIONS(223),
    [anon_sym_QMARK] = ACTIONS(223),
    [anon_sym_CARET] = ACTIONS(223),
  },
  [129] = {
    [sym__op] = STATE(248),
    [sym_variable_symbol] = STATE(47),
    [sym_constructor_symbol] = STATE(47),
    [sym__variable_symbol] = STATE(49),
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
    [aux_sym_fixity_repeat1] = STATE(250),
    [sym__layout_semicolon] = ACTIONS(463),
    [anon_sym_SEMI] = ACTIONS(465),
    [anon_sym_COMMA] = ACTIONS(229),
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
    [sym__variable_symbol] = STATE(251),
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
    [sym_constructors] = STATE(253),
    [sym_constructor] = STATE(139),
    [sym_deriving] = STATE(254),
    [sym_constructor_identifier] = STATE(141),
    [sym__layout_semicolon] = ACTIONS(477),
    [anon_sym_SEMI] = ACTIONS(479),
    [anon_sym_EQ] = ACTIONS(481),
    [anon_sym_deriving] = ACTIONS(245),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [135] = {
    [sym_variable_identifier] = STATE(256),
    [aux_sym_type_class_repeat1] = STATE(144),
    [sym__layout_semicolon] = ACTIONS(247),
    [anon_sym_SEMI] = ACTIONS(249),
    [anon_sym_EQ] = ACTIONS(249),
    [anon_sym_deriving] = ACTIONS(249),
    [sym__variable_pattern] = ACTIONS(483),
    [sym__constructor_pattern] = ACTIONS(253),
    [sym_comment] = ACTIONS(5),
  },
  [136] = {
    [sym_constructors] = STATE(253),
    [sym_constructor] = STATE(139),
    [sym_deriving] = STATE(254),
    [sym_constructor_identifier] = STATE(141),
    [sym__layout_semicolon] = ACTIONS(477),
    [anon_sym_SEMI] = ACTIONS(479),
    [anon_sym_deriving] = ACTIONS(245),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [137] = {
    [sym__identifier] = STATE(258),
    [sym_variable_identifier] = STATE(27),
    [sym_constructor_identifier] = STATE(27),
    [anon_sym_LPAREN] = ACTIONS(485),
    [sym__variable_pattern] = ACTIONS(383),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [138] = {
    [sym_deriving] = STATE(254),
    [sym__layout_semicolon] = ACTIONS(477),
    [anon_sym_SEMI] = ACTIONS(479),
    [anon_sym_deriving] = ACTIONS(245),
    [sym_comment] = ACTIONS(5),
  },
  [139] = {
    [aux_sym_constructors_repeat1] = STATE(260),
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
    [sym_strict] = STATE(263),
    [sym__identifier] = STATE(263),
    [sym_variable_identifier] = STATE(264),
    [sym_constructor_identifier] = STATE(264),
    [sym_fields] = STATE(265),
    [aux_sym_constructor_repeat1] = STATE(266),
    [sym__layout_semicolon] = ACTIONS(493),
    [anon_sym_SEMI] = ACTIONS(495),
    [anon_sym_LBRACE] = ACTIONS(497),
    [anon_sym_PIPE] = ACTIONS(495),
    [anon_sym_deriving] = ACTIONS(495),
    [anon_sym_BANG] = ACTIONS(499),
    [sym__variable_pattern] = ACTIONS(251),
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
    [sym_variable_identifier] = STATE(267),
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
    [sym_new_constructor] = STATE(269),
    [sym_constructor_identifier] = STATE(270),
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
    [sym_variable_identifier] = STATE(271),
    [anon_sym_EQ] = ACTIONS(505),
    [sym__variable_pattern] = ACTIONS(261),
    [sym_comment] = ACTIONS(5),
  },
  [150] = {
    [sym_type] = STATE(274),
    [sym__generic_type_constructor] = STATE(202),
    [sym_tupling_constructor] = STATE(198),
    [sym_tuple] = STATE(202),
    [sym_list] = STATE(202),
    [sym_parenthesized_constructor] = STATE(202),
    [sym_variable_identifier] = STATE(205),
    [sym__type_constructors] = STATE(198),
    [sym_qualified_type_constructor] = STATE(207),
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
    [sym__cntrl] = STATE(276),
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
    [aux_sym__escape_repeat1] = STATE(278),
    [sym_comment] = ACTIONS(5),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(527),
  },
  [158] = {
    [aux_sym__escape_repeat2] = STATE(280),
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
    [sym__cntrl] = STATE(282),
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
    [aux_sym__escape_repeat1] = STATE(284),
    [sym_comment] = ACTIONS(5),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(539),
  },
  [164] = {
    [aux_sym__escape_repeat2] = STATE(286),
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
    [sym_statement_list] = STATE(289),
    [sym__layout_open_brace] = ACTIONS(553),
    [anon_sym_LBRACE] = ACTIONS(555),
    [sym_comment] = ACTIONS(5),
  },
  [169] = {
    [sym__layout_semicolon] = ACTIONS(71),
    [anon_sym_SEMI] = ACTIONS(73),
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
  [170] = {
    [sym__layout_semicolon] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_do] = ACTIONS(79),
    [sym__variable_pattern] = ACTIONS(203),
    [sym__constructor_pattern] = ACTIONS(203),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(203),
    [anon_sym_SQUOTE] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym__integer_literal] = ACTIONS(79),
    [sym__octal_literal] = ACTIONS(79),
    [sym__hexidecimal_literal] = ACTIONS(79),
  },
  [171] = {
    [sym__layout_semicolon] = ACTIONS(557),
    [anon_sym_SEMI] = ACTIONS(559),
    [anon_sym_do] = ACTIONS(559),
    [sym__variable_pattern] = ACTIONS(561),
    [sym__constructor_pattern] = ACTIONS(561),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(561),
    [anon_sym_SQUOTE] = ACTIONS(559),
    [anon_sym_DQUOTE] = ACTIONS(559),
    [sym__integer_literal] = ACTIONS(559),
    [sym__octal_literal] = ACTIONS(559),
    [sym__hexidecimal_literal] = ACTIONS(559),
  },
  [172] = {
    [sym__layout_semicolon] = ACTIONS(563),
    [anon_sym_SEMI] = ACTIONS(161),
    [anon_sym_do] = ACTIONS(161),
    [sym__variable_pattern] = ACTIONS(163),
    [sym__constructor_pattern] = ACTIONS(163),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(163),
    [anon_sym_SQUOTE] = ACTIONS(161),
    [anon_sym_DQUOTE] = ACTIONS(161),
    [sym__integer_literal] = ACTIONS(161),
    [sym__octal_literal] = ACTIONS(161),
    [sym__hexidecimal_literal] = ACTIONS(161),
  },
  [173] = {
    [sym__layout_semicolon] = ACTIONS(565),
    [anon_sym_SEMI] = ACTIONS(567),
    [anon_sym_do] = ACTIONS(567),
    [sym__variable_pattern] = ACTIONS(569),
    [sym__constructor_pattern] = ACTIONS(569),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(569),
    [anon_sym_SQUOTE] = ACTIONS(567),
    [anon_sym_DQUOTE] = ACTIONS(567),
    [sym__integer_literal] = ACTIONS(567),
    [sym__octal_literal] = ACTIONS(567),
    [sym__hexidecimal_literal] = ACTIONS(567),
  },
  [174] = {
    [sym__literal] = STATE(291),
    [sym_variable_identifier] = STATE(291),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [aux_sym_general_constructor_repeat1] = STATE(292),
    [sym__layout_semicolon] = ACTIONS(171),
    [anon_sym_SEMI] = ACTIONS(173),
    [anon_sym_do] = ACTIONS(173),
    [sym__variable_pattern] = ACTIONS(339),
    [sym__constructor_pattern] = ACTIONS(175),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym__integer_literal] = ACTIONS(41),
    [sym__octal_literal] = ACTIONS(41),
    [sym__hexidecimal_literal] = ACTIONS(41),
  },
  [175] = {
    [sym_general_constructor] = STATE(171),
    [sym__variable] = STATE(171),
    [sym_qualified_variable_identifier] = STATE(172),
    [sym__expression] = STATE(293),
    [sym_do_expression] = STATE(171),
    [sym__literal] = STATE(171),
    [sym__identifier] = STATE(171),
    [sym_variable_identifier] = STATE(27),
    [sym_constructor_identifier] = STATE(174),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [sym__layout_semicolon] = ACTIONS(571),
    [anon_sym_SEMI] = ACTIONS(573),
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
  [176] = {
    [sym__function_pattern] = STATE(184),
    [sym_irrefutable_pattern] = STATE(85),
    [sym_list_pattern] = STATE(85),
    [sym_tuple_pattern] = STATE(85),
    [sym_parenthesized_pattern] = STATE(85),
    [sym_as_pattern] = STATE(85),
    [sym_wildcard] = STATE(85),
    [sym__variable] = STATE(182),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym__literal] = STATE(85),
    [sym__identifier] = STATE(93),
    [sym_simple_type] = STATE(94),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(188),
    [sym_integer] = STATE(88),
    [sym_char] = STATE(88),
    [sym_string] = STATE(88),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(347),
    [anon_sym_LBRACK] = ACTIONS(145),
    [anon_sym__] = ACTIONS(147),
    [sym_list_constructor] = ACTIONS(149),
    [sym__variable_pattern] = ACTIONS(151),
    [sym__constructor_pattern] = ACTIONS(351),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(155),
    [anon_sym_SQUOTE] = ACTIONS(157),
    [anon_sym_DQUOTE] = ACTIONS(159),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [177] = {
    [anon_sym_LPAREN] = ACTIONS(575),
    [sym_comment] = ACTIONS(5),
  },
  [178] = {
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
    [sym_float] = ACTIONS(203),
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
  [179] = {
    [sym__op] = STATE(300),
    [sym_variable_symbol] = STATE(301),
    [sym_constructor_symbol] = STATE(301),
    [sym__variable_symbol] = STATE(302),
    [aux_sym_tuple_pattern_repeat1] = STATE(303),
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
  [180] = {
    [aux_sym_tuple_pattern_repeat1] = STATE(303),
    [anon_sym_COMMA] = ACTIONS(577),
    [anon_sym_RPAREN] = ACTIONS(579),
    [sym_comment] = ACTIONS(5),
  },
  [181] = {
    [anon_sym_COMMA] = ACTIONS(587),
    [anon_sym_RPAREN] = ACTIONS(587),
    [sym_comment] = ACTIONS(5),
  },
  [182] = {
    [anon_sym_AT] = ACTIONS(589),
    [sym_comment] = ACTIONS(5),
  },
  [183] = {
    [sym__literal] = STATE(308),
    [sym_variable_identifier] = STATE(309),
    [sym_integer] = STATE(305),
    [sym_char] = STATE(305),
    [sym_string] = STATE(305),
    [aux_sym_general_constructor_repeat1] = STATE(310),
    [aux_sym_type_class_repeat1] = STATE(194),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_COMMA] = ACTIONS(173),
    [anon_sym_RPAREN] = ACTIONS(173),
    [anon_sym_DASH] = ACTIONS(173),
    [anon_sym_BQUOTE] = ACTIONS(173),
    [anon_sym_COLON] = ACTIONS(173),
    [anon_sym_BANG] = ACTIONS(173),
    [sym__variable_pattern] = ACTIONS(257),
    [anon_sym_DOT] = ACTIONS(173),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(591),
    [anon_sym_SQUOTE] = ACTIONS(593),
    [anon_sym_DQUOTE] = ACTIONS(419),
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
    [sym__integer_literal] = ACTIONS(595),
    [sym__octal_literal] = ACTIONS(595),
    [sym__hexidecimal_literal] = ACTIONS(595),
  },
  [184] = {
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
  [185] = {
    [sym__function_pattern] = STATE(184),
    [sym_irrefutable_pattern] = STATE(85),
    [sym_list_pattern] = STATE(85),
    [sym_tuple_pattern] = STATE(85),
    [sym_parenthesized_pattern] = STATE(85),
    [sym_as_pattern] = STATE(85),
    [sym_wildcard] = STATE(85),
    [sym__variable] = STATE(187),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym__literal] = STATE(85),
    [sym__identifier] = STATE(93),
    [sym_simple_type] = STATE(94),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(188),
    [sym_integer] = STATE(88),
    [sym_char] = STATE(88),
    [sym_string] = STATE(88),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(353),
    [anon_sym_LBRACK] = ACTIONS(145),
    [anon_sym__] = ACTIONS(147),
    [sym_list_constructor] = ACTIONS(149),
    [sym__variable_pattern] = ACTIONS(151),
    [sym__constructor_pattern] = ACTIONS(351),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(155),
    [anon_sym_SQUOTE] = ACTIONS(157),
    [anon_sym_DQUOTE] = ACTIONS(159),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [186] = {
    [anon_sym_RBRACK] = ACTIONS(601),
    [sym_comment] = ACTIONS(5),
  },
  [187] = {
    [anon_sym_AT] = ACTIONS(603),
    [sym_comment] = ACTIONS(5),
  },
  [188] = {
    [sym_variable_identifier] = STATE(152),
    [aux_sym_type_class_repeat1] = STATE(194),
    [anon_sym_LBRACE] = ACTIONS(173),
    [anon_sym_COMMA] = ACTIONS(173),
    [anon_sym_RPAREN] = ACTIONS(173),
    [anon_sym_RBRACK] = ACTIONS(173),
    [anon_sym_DASH] = ACTIONS(173),
    [anon_sym_BQUOTE] = ACTIONS(173),
    [anon_sym_COLON] = ACTIONS(173),
    [anon_sym_BANG] = ACTIONS(173),
    [sym__variable_pattern] = ACTIONS(257),
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
  [189] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(605),
  },
  [190] = {
    [anon_sym_RBRACE] = ACTIONS(301),
    [anon_sym_LPAREN] = ACTIONS(301),
    [anon_sym_COMMA] = ACTIONS(301),
    [anon_sym_RPAREN] = ACTIONS(301),
    [anon_sym_EQ] = ACTIONS(301),
    [anon_sym_TILDE] = ACTIONS(301),
    [anon_sym_LBRACK] = ACTIONS(301),
    [anon_sym_RBRACK] = ACTIONS(301),
    [anon_sym_DASH] = ACTIONS(301),
    [anon_sym__] = ACTIONS(301),
    [anon_sym_BQUOTE] = ACTIONS(301),
    [anon_sym_COLON] = ACTIONS(301),
    [sym_list_constructor] = ACTIONS(301),
    [anon_sym_BANG] = ACTIONS(301),
    [sym__variable_pattern] = ACTIONS(303),
    [sym__constructor_pattern] = ACTIONS(303),
    [anon_sym_DOT] = ACTIONS(301),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(303),
    [anon_sym_SQUOTE] = ACTIONS(301),
    [anon_sym_DQUOTE] = ACTIONS(301),
    [anon_sym_POUND] = ACTIONS(301),
    [anon_sym_DOLLAR] = ACTIONS(301),
    [anon_sym_PERCENT] = ACTIONS(301),
    [anon_sym_AMP] = ACTIONS(301),
    [anon_sym_1] = ACTIONS(301),
    [anon_sym_PLUS] = ACTIONS(301),
    [anon_sym_SLASH] = ACTIONS(301),
    [anon_sym_LT] = ACTIONS(301),
    [anon_sym_GT] = ACTIONS(301),
    [anon_sym_QMARK] = ACTIONS(301),
    [anon_sym_CARET] = ACTIONS(301),
    [sym__integer_literal] = ACTIONS(301),
    [sym__octal_literal] = ACTIONS(301),
    [sym__hexidecimal_literal] = ACTIONS(301),
  },
  [191] = {
    [sym__gap] = STATE(166),
    [sym__graphic] = STATE(166),
    [sym__small] = STATE(73),
    [sym__large] = STATE(73),
    [sym__symbol] = STATE(73),
    [sym__special] = STATE(73),
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
    [anon_sym_SQUOTE] = ACTIONS(323),
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
  [192] = {
    [sym__function_pattern] = STATE(315),
    [sym_irrefutable_pattern] = STATE(85),
    [sym_list_pattern] = STATE(85),
    [sym_tuple_pattern] = STATE(85),
    [sym_parenthesized_pattern] = STATE(85),
    [sym_as_pattern] = STATE(85),
    [sym_wildcard] = STATE(85),
    [sym__variable] = STATE(92),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym__literal] = STATE(85),
    [sym__identifier] = STATE(93),
    [sym_simple_type] = STATE(94),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(96),
    [sym_integer] = STATE(88),
    [sym_char] = STATE(88),
    [sym_string] = STATE(88),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(143),
    [anon_sym_LBRACK] = ACTIONS(145),
    [anon_sym__] = ACTIONS(147),
    [sym_list_constructor] = ACTIONS(149),
    [sym__variable_pattern] = ACTIONS(151),
    [sym__constructor_pattern] = ACTIONS(153),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(155),
    [anon_sym_SQUOTE] = ACTIONS(157),
    [anon_sym_DQUOTE] = ACTIONS(159),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [193] = {
    [sym_labels] = STATE(317),
    [sym_label] = STATE(318),
    [sym__identifier] = STATE(319),
    [sym_variable_identifier] = STATE(112),
    [sym_constructor_identifier] = STATE(112),
    [anon_sym_RBRACE] = ACTIONS(609),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [194] = {
    [sym_variable_identifier] = STATE(271),
    [anon_sym_LBRACE] = ACTIONS(505),
    [sym__variable_pattern] = ACTIONS(257),
    [sym_comment] = ACTIONS(5),
  },
  [195] = {
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
  [196] = {
    [sym_type] = STATE(326),
    [sym__generic_type_constructor] = STATE(327),
    [sym_tupling_constructor] = STATE(323),
    [sym_tuple] = STATE(327),
    [sym_list] = STATE(327),
    [sym_parenthesized_constructor] = STATE(327),
    [sym_class] = STATE(328),
    [sym_variable_identifier] = STATE(329),
    [sym_constructor_identifier] = STATE(114),
    [sym__type_constructors] = STATE(323),
    [sym_qualified_type_constructor] = STATE(330),
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
  [197] = {
    [sym_type] = STATE(333),
    [sym__generic_type_constructor] = STATE(334),
    [sym_tupling_constructor] = STATE(323),
    [sym_tuple] = STATE(334),
    [sym_list] = STATE(334),
    [sym_parenthesized_constructor] = STATE(334),
    [sym_variable_identifier] = STATE(335),
    [sym__type_constructors] = STATE(323),
    [sym_qualified_type_constructor] = STATE(330),
    [aux_sym_list_repeat1] = STATE(336),
    [anon_sym_LPAREN] = ACTIONS(615),
    [anon_sym_LBRACK] = ACTIONS(619),
    [sym_unit_type] = ACTIONS(621),
    [sym_list_constructor] = ACTIONS(621),
    [sym_function_constructor] = ACTIONS(621),
    [sym__variable_pattern] = ACTIONS(257),
    [sym__constructor_pattern] = ACTIONS(629),
    [sym_module_identifier] = ACTIONS(631),
    [sym_comment] = ACTIONS(5),
  },
  [198] = {
    [sym__layout_semicolon] = ACTIONS(633),
    [anon_sym_SEMI] = ACTIONS(635),
    [anon_sym_DASH_GT] = ACTIONS(635),
    [sym_comment] = ACTIONS(5),
  },
  [199] = {
    [sym_variable_identifier] = STATE(338),
    [aux_sym_type_class_repeat1] = STATE(339),
    [sym__layout_semicolon] = ACTIONS(637),
    [anon_sym_SEMI] = ACTIONS(639),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_DASH_GT] = ACTIONS(639),
    [sym__variable_pattern] = ACTIONS(79),
    [sym_comment] = ACTIONS(5),
  },
  [200] = {
    [sym_constructor_identifier] = STATE(342),
    [aux_sym_qualified_type_constructor_repeat1] = STATE(343),
    [sym__constructor_pattern] = ACTIONS(641),
    [anon_sym_DOT] = ACTIONS(643),
    [sym_comment] = ACTIONS(5),
  },
  [201] = {
    [sym__layout_semicolon] = ACTIONS(645),
    [anon_sym_SEMI] = ACTIONS(647),
    [sym_comment] = ACTIONS(5),
  },
  [202] = {
    [sym__layout_semicolon] = ACTIONS(649),
    [anon_sym_SEMI] = ACTIONS(651),
    [anon_sym_DASH_GT] = ACTIONS(653),
    [sym_comment] = ACTIONS(5),
  },
  [203] = {
    [sym_type] = STATE(345),
    [sym__generic_type_constructor] = STATE(202),
    [sym_tupling_constructor] = STATE(198),
    [sym_tuple] = STATE(202),
    [sym_list] = STATE(202),
    [sym_parenthesized_constructor] = STATE(202),
    [sym_variable_identifier] = STATE(205),
    [sym__type_constructors] = STATE(198),
    [sym_qualified_type_constructor] = STATE(207),
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
  [204] = {
    [anon_sym_EQ_GT] = ACTIONS(655),
    [sym_comment] = ACTIONS(5),
  },
  [205] = {
    [sym__layout_semicolon] = ACTIONS(657),
    [anon_sym_SEMI] = ACTIONS(659),
    [anon_sym_DASH_GT] = ACTIONS(661),
    [sym_comment] = ACTIONS(5),
  },
  [206] = {
    [sym_variable_identifier] = STATE(234),
    [anon_sym_LPAREN] = ACTIONS(209),
    [sym__variable_pattern] = ACTIONS(623),
    [sym_comment] = ACTIONS(5),
  },
  [207] = {
    [sym__layout_semicolon] = ACTIONS(663),
    [anon_sym_SEMI] = ACTIONS(665),
    [anon_sym_DASH_GT] = ACTIONS(665),
    [sym_comment] = ACTIONS(5),
  },
  [208] = {
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
  [209] = {
    [sym_import] = STATE(19),
    [sym__declaration] = STATE(349),
    [sym_function_declaration] = STATE(19),
    [sym_function_head] = STATE(21),
    [sym__variable] = STATE(22),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym_foreign] = STATE(19),
    [sym_default] = STATE(19),
    [sym_type_class] = STATE(19),
    [sym_type_class_instance] = STATE(19),
    [sym__general_declaration] = STATE(19),
    [sym_fixity] = STATE(24),
    [sym_type_signature] = STATE(24),
    [sym_algebraic_datatype] = STATE(19),
    [sym_newtype] = STATE(19),
    [sym_type_synonym] = STATE(19),
    [sym__literal] = STATE(19),
    [sym__identifier] = STATE(25),
    [sym_variable_identifier] = STATE(26),
    [sym_constructor_identifier] = STATE(27),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [aux_sym_module_repeat1] = STATE(350),
    [sym__layout_close_brace] = ACTIONS(673),
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
  [210] = {
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
    [sym__general_declaration] = STATE(19),
    [sym_fixity] = STATE(24),
    [sym_type_signature] = STATE(24),
    [sym_algebraic_datatype] = STATE(19),
    [sym_newtype] = STATE(19),
    [sym_type_synonym] = STATE(19),
    [sym__literal] = STATE(19),
    [sym__identifier] = STATE(25),
    [sym_variable_identifier] = STATE(26),
    [sym_constructor_identifier] = STATE(27),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [aux_sym_module_repeat1] = STATE(351),
    [anon_sym_RBRACE] = ACTIONS(675),
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
  [211] = {
    [ts_builtin_sym_end] = ACTIONS(677),
    [sym_comment] = ACTIONS(5),
  },
  [212] = {
    [anon_sym_where] = ACTIONS(679),
    [sym_comment] = ACTIONS(5),
  },
  [213] = {
    [aux_sym_module_exports_repeat1] = STATE(354),
    [anon_sym_COMMA] = ACTIONS(681),
    [anon_sym_RPAREN] = ACTIONS(683),
    [sym_comment] = ACTIONS(5),
  },
  [214] = {
    [anon_sym_LPAREN] = ACTIONS(685),
    [anon_sym_COMMA] = ACTIONS(687),
    [anon_sym_RPAREN] = ACTIONS(687),
    [sym_comment] = ACTIONS(5),
  },
  [215] = {
    [sym_declarations] = STATE(356),
    [sym__layout_open_brace] = ACTIONS(393),
    [anon_sym_LBRACE] = ACTIONS(395),
    [sym_comment] = ACTIONS(5),
  },
  [216] = {
    [sym_module_identifier] = ACTIONS(689),
    [sym_comment] = ACTIONS(5),
  },
  [217] = {
    [sym__layout_semicolon] = ACTIONS(691),
    [anon_sym_SEMI] = ACTIONS(693),
    [sym_comment] = ACTIONS(5),
  },
  [218] = {
    [sym__layout_semicolon] = ACTIONS(695),
    [anon_sym_SEMI] = ACTIONS(697),
    [sym_comment] = ACTIONS(5),
  },
  [219] = {
    [aux_sym_import_specification_repeat1] = STATE(361),
    [anon_sym_LPAREN] = ACTIONS(699),
    [anon_sym_COMMA] = ACTIONS(701),
    [anon_sym_RPAREN] = ACTIONS(703),
    [sym_comment] = ACTIONS(5),
  },
  [220] = {
    [sym_import_specification] = STATE(362),
    [sym__layout_semicolon] = ACTIONS(691),
    [anon_sym_SEMI] = ACTIONS(693),
    [anon_sym_LPAREN] = ACTIONS(189),
    [anon_sym_hiding] = ACTIONS(193),
    [sym_comment] = ACTIONS(5),
  },
  [221] = {
    [sym__identifier] = STATE(363),
    [sym_variable_identifier] = STATE(112),
    [sym_constructor_identifier] = STATE(112),
    [anon_sym_RPAREN] = ACTIONS(703),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [222] = {
    [sym__variable_pattern] = ACTIONS(705),
    [sym__constructor_pattern] = ACTIONS(707),
    [sym_comment] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(705),
  },
  [223] = {
    [sym__gap] = STATE(71),
    [sym__graphic] = STATE(71),
    [sym__small] = STATE(73),
    [sym__large] = STATE(73),
    [sym__symbol] = STATE(73),
    [sym__special] = STATE(73),
    [sym__escape] = STATE(71),
    [aux_sym_string_repeat1] = STATE(365),
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
    [anon_sym_DQUOTE] = ACTIONS(709),
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
  [224] = {
    [sym_type_signature] = STATE(366),
    [sym__identifier] = STATE(226),
    [sym_variable_identifier] = STATE(112),
    [sym_constructor_identifier] = STATE(112),
    [sym_string] = STATE(367),
    [sym__variable_pattern] = ACTIONS(623),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(419),
  },
  [225] = {
    [sym__layout_semicolon] = ACTIONS(711),
    [anon_sym_SEMI] = ACTIONS(713),
    [sym_comment] = ACTIONS(5),
  },
  [226] = {
    [anon_sym_COLON_COLON] = ACTIONS(169),
    [sym_comment] = ACTIONS(5),
  },
  [227] = {
    [sym_type_signature] = STATE(366),
    [sym__identifier] = STATE(226),
    [sym_variable_identifier] = STATE(112),
    [sym_constructor_identifier] = STATE(112),
    [sym__variable_pattern] = ACTIONS(623),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [228] = {
    [sym__identifier] = STATE(368),
    [sym_variable_identifier] = STATE(112),
    [sym_constructor_identifier] = STATE(112),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [229] = {
    [sym__layout_semicolon] = ACTIONS(715),
    [anon_sym_SEMI] = ACTIONS(717),
    [sym_comment] = ACTIONS(5),
  },
  [230] = {
    [anon_sym_COMMA] = ACTIONS(719),
    [anon_sym_RPAREN] = ACTIONS(721),
    [sym_comment] = ACTIONS(5),
  },
  [231] = {
    [sym_class] = STATE(371),
    [sym_constructor_identifier] = STATE(114),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
  },
  [232] = {
    [anon_sym_EQ_GT] = ACTIONS(723),
    [sym_comment] = ACTIONS(5),
  },
  [233] = {
    [anon_sym_COMMA] = ACTIONS(725),
    [anon_sym_RPAREN] = ACTIONS(727),
    [sym_comment] = ACTIONS(5),
  },
  [234] = {
    [anon_sym_COMMA] = ACTIONS(443),
    [anon_sym_RPAREN] = ACTIONS(443),
    [anon_sym_EQ_GT] = ACTIONS(443),
    [sym_comment] = ACTIONS(5),
  },
  [235] = {
    [sym_general_declarations] = STATE(375),
    [sym__layout_open_brace] = ACTIONS(437),
    [anon_sym_LBRACE] = ACTIONS(439),
    [sym_comment] = ACTIONS(5),
  },
  [236] = {
    [anon_sym_where] = ACTIONS(441),
    [sym__variable_pattern] = ACTIONS(445),
    [sym_comment] = ACTIONS(5),
  },
  [237] = {
    [sym_variable_identifier] = STATE(242),
    [anon_sym_where] = ACTIONS(729),
    [sym__variable_pattern] = ACTIONS(211),
    [sym_comment] = ACTIONS(5),
  },
  [238] = {
    [sym__general_declaration] = STATE(378),
    [sym_fixity] = STATE(24),
    [sym_type_signature] = STATE(24),
    [sym__identifier] = STATE(226),
    [sym_variable_identifier] = STATE(112),
    [sym_constructor_identifier] = STATE(112),
    [aux_sym_general_declarations_repeat1] = STATE(379),
    [sym__layout_close_brace] = ACTIONS(731),
    [anon_sym_infixl] = ACTIONS(23),
    [anon_sym_infixr] = ACTIONS(23),
    [anon_sym_infix] = ACTIONS(23),
    [sym__variable_pattern] = ACTIONS(211),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [239] = {
    [sym__general_declaration] = STATE(380),
    [sym_fixity] = STATE(24),
    [sym_type_signature] = STATE(24),
    [sym__identifier] = STATE(226),
    [sym_variable_identifier] = STATE(112),
    [sym_constructor_identifier] = STATE(112),
    [aux_sym_general_declarations_repeat1] = STATE(381),
    [anon_sym_RBRACE] = ACTIONS(733),
    [anon_sym_infixl] = ACTIONS(23),
    [anon_sym_infixr] = ACTIONS(23),
    [anon_sym_infix] = ACTIONS(23),
    [sym__variable_pattern] = ACTIONS(211),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [240] = {
    [sym__layout_semicolon] = ACTIONS(735),
    [anon_sym_SEMI] = ACTIONS(737),
    [sym_comment] = ACTIONS(5),
  },
  [241] = {
    [sym_variable_identifier] = STATE(271),
    [anon_sym_RPAREN] = ACTIONS(739),
    [sym__variable_pattern] = ACTIONS(257),
    [sym_comment] = ACTIONS(5),
  },
  [242] = {
    [anon_sym_where] = ACTIONS(741),
    [sym__variable_pattern] = ACTIONS(743),
    [sym_comment] = ACTIONS(5),
  },
  [243] = {
    [sym_general_declarations] = STATE(383),
    [sym__layout_open_brace] = ACTIONS(437),
    [anon_sym_LBRACE] = ACTIONS(439),
    [sym_comment] = ACTIONS(5),
  },
  [244] = {
    [sym_variable_identifier] = STATE(242),
    [anon_sym_where] = ACTIONS(745),
    [sym__variable_pattern] = ACTIONS(211),
    [sym_comment] = ACTIONS(5),
  },
  [245] = {
    [sym__layout_semicolon] = ACTIONS(747),
    [anon_sym_SEMI] = ACTIONS(749),
    [sym_comment] = ACTIONS(5),
  },
  [246] = {
    [sym__layout_semicolon] = ACTIONS(751),
    [anon_sym_SEMI] = ACTIONS(753),
    [anon_sym_COMMA] = ACTIONS(753),
    [sym_comment] = ACTIONS(5),
  },
  [247] = {
    [sym__layout_semicolon] = ACTIONS(755),
    [anon_sym_SEMI] = ACTIONS(757),
    [anon_sym_COMMA] = ACTIONS(757),
    [anon_sym_DASH] = ACTIONS(757),
    [anon_sym_COLON] = ACTIONS(757),
    [anon_sym_BANG] = ACTIONS(757),
    [anon_sym_DOT] = ACTIONS(757),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(757),
    [anon_sym_DOLLAR] = ACTIONS(757),
    [anon_sym_PERCENT] = ACTIONS(757),
    [anon_sym_AMP] = ACTIONS(757),
    [anon_sym_1] = ACTIONS(757),
    [anon_sym_PLUS] = ACTIONS(757),
    [anon_sym_SLASH] = ACTIONS(757),
    [anon_sym_LT] = ACTIONS(757),
    [anon_sym_GT] = ACTIONS(757),
    [anon_sym_QMARK] = ACTIONS(757),
    [anon_sym_CARET] = ACTIONS(757),
  },
  [248] = {
    [sym__layout_semicolon] = ACTIONS(759),
    [anon_sym_SEMI] = ACTIONS(761),
    [anon_sym_COMMA] = ACTIONS(761),
    [sym_comment] = ACTIONS(5),
  },
  [249] = {
    [sym__op] = STATE(385),
    [sym_variable_symbol] = STATE(47),
    [sym_constructor_symbol] = STATE(47),
    [sym__variable_symbol] = STATE(49),
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
  [250] = {
    [sym__layout_semicolon] = ACTIONS(763),
    [anon_sym_SEMI] = ACTIONS(765),
    [anon_sym_COMMA] = ACTIONS(467),
    [sym_comment] = ACTIONS(5),
  },
  [251] = {
    [sym__layout_semicolon] = ACTIONS(767),
    [anon_sym_SEMI] = ACTIONS(769),
    [anon_sym_COMMA] = ACTIONS(769),
    [anon_sym_DASH] = ACTIONS(769),
    [anon_sym_BANG] = ACTIONS(769),
    [anon_sym_DOT] = ACTIONS(769),
    [sym_comment] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(769),
    [anon_sym_DOLLAR] = ACTIONS(769),
    [anon_sym_PERCENT] = ACTIONS(769),
    [anon_sym_AMP] = ACTIONS(769),
    [anon_sym_1] = ACTIONS(769),
    [anon_sym_PLUS] = ACTIONS(769),
    [anon_sym_SLASH] = ACTIONS(769),
    [anon_sym_LT] = ACTIONS(769),
    [anon_sym_GT] = ACTIONS(769),
    [anon_sym_QMARK] = ACTIONS(769),
    [anon_sym_CARET] = ACTIONS(769),
  },
  [252] = {
    [sym_constructors] = STATE(386),
    [sym_constructor] = STATE(139),
    [sym_deriving] = STATE(387),
    [sym_constructor_identifier] = STATE(141),
    [sym__layout_semicolon] = ACTIONS(771),
    [anon_sym_SEMI] = ACTIONS(773),
    [anon_sym_deriving] = ACTIONS(245),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [253] = {
    [sym_deriving] = STATE(387),
    [sym__layout_semicolon] = ACTIONS(771),
    [anon_sym_SEMI] = ACTIONS(773),
    [anon_sym_deriving] = ACTIONS(245),
    [sym_comment] = ACTIONS(5),
  },
  [254] = {
    [sym__layout_semicolon] = ACTIONS(771),
    [anon_sym_SEMI] = ACTIONS(773),
    [sym_comment] = ACTIONS(5),
  },
  [255] = {
    [sym__layout_semicolon] = ACTIONS(71),
    [anon_sym_SEMI] = ACTIONS(73),
    [anon_sym_EQ] = ACTIONS(73),
    [anon_sym_deriving] = ACTIONS(73),
    [sym__variable_pattern] = ACTIONS(75),
    [sym__constructor_pattern] = ACTIONS(75),
    [sym_comment] = ACTIONS(5),
  },
  [256] = {
    [sym__layout_semicolon] = ACTIONS(501),
    [anon_sym_SEMI] = ACTIONS(441),
    [anon_sym_EQ] = ACTIONS(441),
    [anon_sym_deriving] = ACTIONS(441),
    [sym__variable_pattern] = ACTIONS(445),
    [sym__constructor_pattern] = ACTIONS(445),
    [sym_comment] = ACTIONS(5),
  },
  [257] = {
    [sym__identifier] = STATE(388),
    [sym_variable_identifier] = STATE(112),
    [sym_constructor_identifier] = STATE(112),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [258] = {
    [sym__layout_semicolon] = ACTIONS(775),
    [anon_sym_SEMI] = ACTIONS(777),
    [sym_comment] = ACTIONS(5),
  },
  [259] = {
    [sym_constructor] = STATE(389),
    [sym_constructor_identifier] = STATE(141),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [260] = {
    [sym__layout_semicolon] = ACTIONS(779),
    [anon_sym_SEMI] = ACTIONS(781),
    [anon_sym_PIPE] = ACTIONS(783),
    [anon_sym_deriving] = ACTIONS(781),
    [sym_comment] = ACTIONS(5),
  },
  [261] = {
    [sym_field] = STATE(391),
    [sym_variable_identifier] = STATE(392),
    [sym__variable_pattern] = ACTIONS(623),
    [sym_comment] = ACTIONS(5),
  },
  [262] = {
    [sym__identifier] = STATE(393),
    [sym_variable_identifier] = STATE(264),
    [sym_constructor_identifier] = STATE(264),
    [sym__variable_pattern] = ACTIONS(785),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [263] = {
    [sym__layout_semicolon] = ACTIONS(787),
    [anon_sym_SEMI] = ACTIONS(789),
    [anon_sym_PIPE] = ACTIONS(789),
    [anon_sym_deriving] = ACTIONS(789),
    [anon_sym_BANG] = ACTIONS(789),
    [sym__variable_pattern] = ACTIONS(791),
    [sym__constructor_pattern] = ACTIONS(791),
    [sym_comment] = ACTIONS(5),
  },
  [264] = {
    [sym__layout_semicolon] = ACTIONS(171),
    [anon_sym_SEMI] = ACTIONS(173),
    [anon_sym_PIPE] = ACTIONS(173),
    [anon_sym_deriving] = ACTIONS(173),
    [anon_sym_BANG] = ACTIONS(173),
    [sym__variable_pattern] = ACTIONS(175),
    [sym__constructor_pattern] = ACTIONS(175),
    [sym_comment] = ACTIONS(5),
  },
  [265] = {
    [sym__layout_semicolon] = ACTIONS(793),
    [anon_sym_SEMI] = ACTIONS(795),
    [anon_sym_PIPE] = ACTIONS(795),
    [anon_sym_deriving] = ACTIONS(795),
    [sym_comment] = ACTIONS(5),
  },
  [266] = {
    [sym_strict] = STATE(394),
    [sym__identifier] = STATE(394),
    [sym_variable_identifier] = STATE(264),
    [sym_constructor_identifier] = STATE(264),
    [sym__layout_semicolon] = ACTIONS(793),
    [anon_sym_SEMI] = ACTIONS(795),
    [anon_sym_PIPE] = ACTIONS(795),
    [anon_sym_deriving] = ACTIONS(795),
    [anon_sym_BANG] = ACTIONS(499),
    [sym__variable_pattern] = ACTIONS(251),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [267] = {
    [sym__layout_semicolon] = ACTIONS(797),
    [anon_sym_SEMI] = ACTIONS(741),
    [anon_sym_EQ] = ACTIONS(741),
    [anon_sym_deriving] = ACTIONS(741),
    [sym__variable_pattern] = ACTIONS(743),
    [sym__constructor_pattern] = ACTIONS(743),
    [sym_comment] = ACTIONS(5),
  },
  [268] = {
    [sym_new_constructor] = STATE(395),
    [sym_constructor_identifier] = STATE(270),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
  },
  [269] = {
    [sym_deriving] = STATE(396),
    [sym__layout_semicolon] = ACTIONS(799),
    [anon_sym_SEMI] = ACTIONS(801),
    [anon_sym_deriving] = ACTIONS(245),
    [sym_comment] = ACTIONS(5),
  },
  [270] = {
    [sym__identifier] = STATE(397),
    [sym_variable_identifier] = STATE(264),
    [sym_constructor_identifier] = STATE(264),
    [sym_fields] = STATE(397),
    [anon_sym_LBRACE] = ACTIONS(497),
    [sym__variable_pattern] = ACTIONS(785),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [271] = {
    [anon_sym_LBRACE] = ACTIONS(741),
    [anon_sym_LPAREN] = ACTIONS(741),
    [anon_sym_COMMA] = ACTIONS(741),
    [anon_sym_RPAREN] = ACTIONS(741),
    [anon_sym_EQ] = ACTIONS(741),
    [anon_sym_LBRACK] = ACTIONS(741),
    [anon_sym_RBRACK] = ACTIONS(741),
    [anon_sym_DASH_GT] = ACTIONS(741),
    [sym_unit_type] = ACTIONS(741),
    [sym_list_constructor] = ACTIONS(741),
    [sym_function_constructor] = ACTIONS(741),
    [sym__variable_pattern] = ACTIONS(741),
    [sym__constructor_pattern] = ACTIONS(743),
    [sym_module_identifier] = ACTIONS(743),
    [sym_comment] = ACTIONS(5),
  },
  [272] = {
    [sym_type] = STATE(326),
    [sym__generic_type_constructor] = STATE(327),
    [sym_tupling_constructor] = STATE(323),
    [sym_tuple] = STATE(327),
    [sym_list] = STATE(327),
    [sym_parenthesized_constructor] = STATE(327),
    [sym_variable_identifier] = STATE(329),
    [sym__type_constructors] = STATE(323),
    [sym_qualified_type_constructor] = STATE(330),
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
  [273] = {
    [sym_variable_identifier] = STATE(338),
    [aux_sym_type_class_repeat1] = STATE(339),
    [sym__layout_semicolon] = ACTIONS(637),
    [anon_sym_SEMI] = ACTIONS(639),
    [anon_sym_DASH_GT] = ACTIONS(639),
    [sym__variable_pattern] = ACTIONS(803),
    [sym_comment] = ACTIONS(5),
  },
  [274] = {
    [sym__layout_semicolon] = ACTIONS(805),
    [anon_sym_SEMI] = ACTIONS(807),
    [sym_comment] = ACTIONS(5),
  },
  [275] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(809),
  },
  [276] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(811),
  },
  [277] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(813),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(813),
  },
  [278] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(815),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(817),
  },
  [279] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(819),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(819),
  },
  [280] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(815),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(821),
  },
  [281] = {
    [anon_sym_SEMI] = ACTIONS(823),
    [anon_sym_LBRACE] = ACTIONS(823),
    [anon_sym_RBRACE] = ACTIONS(823),
    [anon_sym_LPAREN] = ACTIONS(823),
    [anon_sym_RPAREN] = ACTIONS(823),
    [anon_sym_EQ] = ACTIONS(823),
    [anon_sym_TILDE] = ACTIONS(823),
    [anon_sym_LBRACK] = ACTIONS(823),
    [anon_sym_RBRACK] = ACTIONS(823),
    [anon_sym_DASH] = ACTIONS(823),
    [anon_sym_AT] = ACTIONS(823),
    [anon_sym__] = ACTIONS(823),
    [anon_sym_BQUOTE] = ACTIONS(823),
    [anon_sym_COLON] = ACTIONS(823),
    [anon_sym_PIPE] = ACTIONS(823),
    [anon_sym_BANG] = ACTIONS(823),
    [anon_sym_DOT] = ACTIONS(823),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(823),
    [anon_sym_DQUOTE] = ACTIONS(823),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(823),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(823),
    [sym__ascii_large] = ACTIONS(823),
    [anon_sym_POUND] = ACTIONS(823),
    [anon_sym_DOLLAR] = ACTIONS(823),
    [anon_sym_PERCENT] = ACTIONS(823),
    [anon_sym_AMP] = ACTIONS(823),
    [anon_sym_1] = ACTIONS(823),
    [anon_sym_PLUS] = ACTIONS(823),
    [anon_sym_SLASH] = ACTIONS(823),
    [anon_sym_LT] = ACTIONS(823),
    [anon_sym_GT] = ACTIONS(823),
    [anon_sym_QMARK] = ACTIONS(823),
    [anon_sym_CARET] = ACTIONS(823),
    [anon_sym_BSLASH] = ACTIONS(823),
    [sym__space] = ACTIONS(823),
    [sym__newline] = ACTIONS(823),
    [sym__tab] = ACTIONS(823),
    [sym__vertical_tab] = ACTIONS(823),
  },
  [282] = {
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
  [283] = {
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
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(827),
  },
  [284] = {
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
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(831),
  },
  [285] = {
    [anon_sym_SEMI] = ACTIONS(833),
    [anon_sym_LBRACE] = ACTIONS(833),
    [anon_sym_RBRACE] = ACTIONS(833),
    [anon_sym_LPAREN] = ACTIONS(833),
    [anon_sym_RPAREN] = ACTIONS(833),
    [anon_sym_EQ] = ACTIONS(833),
    [anon_sym_TILDE] = ACTIONS(833),
    [anon_sym_LBRACK] = ACTIONS(833),
    [anon_sym_RBRACK] = ACTIONS(833),
    [anon_sym_DASH] = ACTIONS(833),
    [anon_sym_AT] = ACTIONS(833),
    [anon_sym__] = ACTIONS(833),
    [anon_sym_BQUOTE] = ACTIONS(833),
    [anon_sym_COLON] = ACTIONS(833),
    [anon_sym_PIPE] = ACTIONS(833),
    [anon_sym_BANG] = ACTIONS(833),
    [anon_sym_DOT] = ACTIONS(833),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(833),
    [anon_sym_DQUOTE] = ACTIONS(833),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(833),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(833),
    [sym__ascii_large] = ACTIONS(833),
    [anon_sym_POUND] = ACTIONS(833),
    [anon_sym_DOLLAR] = ACTIONS(833),
    [anon_sym_PERCENT] = ACTIONS(833),
    [anon_sym_AMP] = ACTIONS(833),
    [anon_sym_1] = ACTIONS(833),
    [anon_sym_PLUS] = ACTIONS(833),
    [anon_sym_SLASH] = ACTIONS(833),
    [anon_sym_LT] = ACTIONS(833),
    [anon_sym_GT] = ACTIONS(833),
    [anon_sym_QMARK] = ACTIONS(833),
    [anon_sym_CARET] = ACTIONS(833),
    [anon_sym_BSLASH] = ACTIONS(833),
    [sym__space] = ACTIONS(833),
    [sym__newline] = ACTIONS(833),
    [sym__tab] = ACTIONS(833),
    [sym__vertical_tab] = ACTIONS(833),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(833),
  },
  [286] = {
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
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(835),
  },
  [287] = {
    [sym_general_constructor] = STATE(171),
    [sym__variable] = STATE(171),
    [sym_qualified_variable_identifier] = STATE(172),
    [sym__expression] = STATE(404),
    [sym_do_expression] = STATE(171),
    [sym__statement] = STATE(405),
    [sym__literal] = STATE(171),
    [sym__identifier] = STATE(171),
    [sym_variable_identifier] = STATE(27),
    [sym_constructor_identifier] = STATE(406),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [aux_sym_statement_list_repeat1] = STATE(407),
    [sym__layout_close_brace] = ACTIONS(837),
    [anon_sym_do] = ACTIONS(337),
    [sym__variable_pattern] = ACTIONS(31),
    [sym__constructor_pattern] = ACTIONS(839),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym__integer_literal] = ACTIONS(41),
    [sym__octal_literal] = ACTIONS(41),
    [sym__hexidecimal_literal] = ACTIONS(41),
  },
  [288] = {
    [sym_general_constructor] = STATE(171),
    [sym__variable] = STATE(171),
    [sym_qualified_variable_identifier] = STATE(172),
    [sym__expression] = STATE(408),
    [sym_do_expression] = STATE(171),
    [sym__statement] = STATE(409),
    [sym__literal] = STATE(171),
    [sym__identifier] = STATE(171),
    [sym_variable_identifier] = STATE(27),
    [sym_constructor_identifier] = STATE(406),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [aux_sym_statement_list_repeat1] = STATE(410),
    [anon_sym_RBRACE] = ACTIONS(841),
    [anon_sym_do] = ACTIONS(337),
    [sym__variable_pattern] = ACTIONS(31),
    [sym__constructor_pattern] = ACTIONS(839),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym__integer_literal] = ACTIONS(41),
    [sym__octal_literal] = ACTIONS(41),
    [sym__hexidecimal_literal] = ACTIONS(41),
  },
  [289] = {
    [sym__layout_semicolon] = ACTIONS(843),
    [anon_sym_SEMI] = ACTIONS(845),
    [anon_sym_do] = ACTIONS(845),
    [sym__variable_pattern] = ACTIONS(847),
    [sym__constructor_pattern] = ACTIONS(847),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(847),
    [anon_sym_SQUOTE] = ACTIONS(845),
    [anon_sym_DQUOTE] = ACTIONS(845),
    [sym__integer_literal] = ACTIONS(845),
    [sym__octal_literal] = ACTIONS(845),
    [sym__hexidecimal_literal] = ACTIONS(845),
  },
  [290] = {
    [sym__layout_semicolon] = ACTIONS(849),
    [anon_sym_SEMI] = ACTIONS(263),
    [anon_sym_do] = ACTIONS(263),
    [sym__variable_pattern] = ACTIONS(265),
    [sym__constructor_pattern] = ACTIONS(265),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(265),
    [anon_sym_SQUOTE] = ACTIONS(263),
    [anon_sym_DQUOTE] = ACTIONS(263),
    [sym__integer_literal] = ACTIONS(263),
    [sym__octal_literal] = ACTIONS(263),
    [sym__hexidecimal_literal] = ACTIONS(263),
  },
  [291] = {
    [sym__layout_semicolon] = ACTIONS(851),
    [anon_sym_SEMI] = ACTIONS(853),
    [anon_sym_do] = ACTIONS(853),
    [sym__variable_pattern] = ACTIONS(855),
    [sym__constructor_pattern] = ACTIONS(855),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(855),
    [anon_sym_SQUOTE] = ACTIONS(853),
    [anon_sym_DQUOTE] = ACTIONS(853),
    [sym__integer_literal] = ACTIONS(853),
    [sym__octal_literal] = ACTIONS(853),
    [sym__hexidecimal_literal] = ACTIONS(853),
  },
  [292] = {
    [sym__literal] = STATE(411),
    [sym_variable_identifier] = STATE(411),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [sym__layout_semicolon] = ACTIONS(857),
    [anon_sym_SEMI] = ACTIONS(859),
    [anon_sym_do] = ACTIONS(859),
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
  [293] = {
    [sym__layout_semicolon] = ACTIONS(863),
    [anon_sym_SEMI] = ACTIONS(865),
    [anon_sym_do] = ACTIONS(865),
    [sym__variable_pattern] = ACTIONS(867),
    [sym__constructor_pattern] = ACTIONS(867),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(867),
    [anon_sym_SQUOTE] = ACTIONS(865),
    [anon_sym_DQUOTE] = ACTIONS(865),
    [sym__integer_literal] = ACTIONS(865),
    [sym__octal_literal] = ACTIONS(865),
    [sym__hexidecimal_literal] = ACTIONS(865),
  },
  [294] = {
    [sym__literal] = STATE(412),
    [sym_integer] = STATE(88),
    [sym_char] = STATE(88),
    [sym_string] = STATE(88),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(155),
    [anon_sym_SQUOTE] = ACTIONS(157),
    [anon_sym_DQUOTE] = ACTIONS(159),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [295] = {
    [sym__function_pattern] = STATE(413),
    [sym_irrefutable_pattern] = STATE(85),
    [sym_list_pattern] = STATE(85),
    [sym_tuple_pattern] = STATE(85),
    [sym_parenthesized_pattern] = STATE(85),
    [sym__pattern] = STATE(414),
    [sym_negative_literal] = STATE(181),
    [sym_general_constructor] = STATE(181),
    [sym_as_pattern] = STATE(85),
    [sym_wildcard] = STATE(85),
    [sym__variable] = STATE(182),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym__literal] = STATE(85),
    [sym__identifier] = STATE(93),
    [sym_simple_type] = STATE(94),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(183),
    [sym_integer] = STATE(88),
    [sym_char] = STATE(88),
    [sym_string] = STATE(88),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(347),
    [anon_sym_LBRACK] = ACTIONS(145),
    [anon_sym_DASH] = ACTIONS(349),
    [anon_sym__] = ACTIONS(147),
    [sym_list_constructor] = ACTIONS(149),
    [sym__variable_pattern] = ACTIONS(151),
    [sym__constructor_pattern] = ACTIONS(351),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(155),
    [anon_sym_SQUOTE] = ACTIONS(157),
    [anon_sym_DQUOTE] = ACTIONS(159),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [296] = {
    [anon_sym_LPAREN] = ACTIONS(869),
    [anon_sym_COMMA] = ACTIONS(869),
    [anon_sym_RPAREN] = ACTIONS(869),
    [anon_sym_EQ] = ACTIONS(869),
    [anon_sym_TILDE] = ACTIONS(869),
    [anon_sym_LBRACK] = ACTIONS(869),
    [anon_sym_RBRACK] = ACTIONS(869),
    [anon_sym_DASH] = ACTIONS(869),
    [anon_sym__] = ACTIONS(869),
    [anon_sym_BQUOTE] = ACTIONS(869),
    [anon_sym_COLON] = ACTIONS(869),
    [sym_list_constructor] = ACTIONS(869),
    [anon_sym_BANG] = ACTIONS(869),
    [sym__variable_pattern] = ACTIONS(871),
    [sym__constructor_pattern] = ACTIONS(871),
    [anon_sym_DOT] = ACTIONS(869),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(871),
    [anon_sym_SQUOTE] = ACTIONS(869),
    [anon_sym_DQUOTE] = ACTIONS(869),
    [anon_sym_POUND] = ACTIONS(869),
    [anon_sym_DOLLAR] = ACTIONS(869),
    [anon_sym_PERCENT] = ACTIONS(869),
    [anon_sym_AMP] = ACTIONS(869),
    [anon_sym_1] = ACTIONS(869),
    [anon_sym_PLUS] = ACTIONS(869),
    [anon_sym_SLASH] = ACTIONS(869),
    [anon_sym_LT] = ACTIONS(869),
    [anon_sym_GT] = ACTIONS(869),
    [anon_sym_QMARK] = ACTIONS(869),
    [anon_sym_CARET] = ACTIONS(869),
    [sym__integer_literal] = ACTIONS(869),
    [sym__octal_literal] = ACTIONS(869),
    [sym__hexidecimal_literal] = ACTIONS(869),
  },
  [297] = {
    [anon_sym_LPAREN] = ACTIONS(217),
    [anon_sym_TILDE] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(217),
    [anon_sym_DASH] = ACTIONS(217),
    [anon_sym__] = ACTIONS(217),
    [sym_list_constructor] = ACTIONS(217),
    [anon_sym_BANG] = ACTIONS(217),
    [sym__variable_pattern] = ACTIONS(873),
    [sym__constructor_pattern] = ACTIONS(873),
    [anon_sym_DOT] = ACTIONS(217),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(873),
    [anon_sym_SQUOTE] = ACTIONS(217),
    [anon_sym_DQUOTE] = ACTIONS(217),
    [anon_sym_POUND] = ACTIONS(217),
    [anon_sym_DOLLAR] = ACTIONS(217),
    [anon_sym_PERCENT] = ACTIONS(217),
    [anon_sym_AMP] = ACTIONS(217),
    [anon_sym_1] = ACTIONS(217),
    [anon_sym_PLUS] = ACTIONS(217),
    [anon_sym_SLASH] = ACTIONS(217),
    [anon_sym_LT] = ACTIONS(217),
    [anon_sym_GT] = ACTIONS(217),
    [anon_sym_QMARK] = ACTIONS(217),
    [anon_sym_CARET] = ACTIONS(217),
    [sym__integer_literal] = ACTIONS(217),
    [sym__octal_literal] = ACTIONS(217),
    [sym__hexidecimal_literal] = ACTIONS(217),
  },
  [298] = {
    [sym__identifier] = STATE(415),
    [sym_variable_identifier] = STATE(112),
    [sym_constructor_identifier] = STATE(112),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [299] = {
    [sym__constructor_symbol] = STATE(417),
    [aux_sym_constructor_symbol_repeat1] = STATE(418),
    [anon_sym_LPAREN] = ACTIONS(221),
    [anon_sym_TILDE] = ACTIONS(221),
    [anon_sym_LBRACK] = ACTIONS(221),
    [anon_sym_DASH] = ACTIONS(221),
    [anon_sym__] = ACTIONS(221),
    [anon_sym_COLON] = ACTIONS(875),
    [sym_list_constructor] = ACTIONS(221),
    [anon_sym_BANG] = ACTIONS(875),
    [sym__variable_pattern] = ACTIONS(877),
    [sym__constructor_pattern] = ACTIONS(877),
    [anon_sym_DOT] = ACTIONS(875),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(877),
    [anon_sym_SQUOTE] = ACTIONS(221),
    [anon_sym_DQUOTE] = ACTIONS(221),
    [anon_sym_POUND] = ACTIONS(875),
    [anon_sym_DOLLAR] = ACTIONS(875),
    [anon_sym_PERCENT] = ACTIONS(875),
    [anon_sym_AMP] = ACTIONS(875),
    [anon_sym_1] = ACTIONS(875),
    [anon_sym_PLUS] = ACTIONS(875),
    [anon_sym_SLASH] = ACTIONS(875),
    [anon_sym_LT] = ACTIONS(875),
    [anon_sym_GT] = ACTIONS(875),
    [anon_sym_QMARK] = ACTIONS(875),
    [anon_sym_CARET] = ACTIONS(875),
    [sym__integer_literal] = ACTIONS(221),
    [sym__octal_literal] = ACTIONS(221),
    [sym__hexidecimal_literal] = ACTIONS(221),
  },
  [300] = {
    [sym__function_pattern] = STATE(419),
    [sym_irrefutable_pattern] = STATE(85),
    [sym_list_pattern] = STATE(85),
    [sym_tuple_pattern] = STATE(85),
    [sym_parenthesized_pattern] = STATE(85),
    [sym__pattern] = STATE(420),
    [sym_negative_literal] = STATE(181),
    [sym_general_constructor] = STATE(181),
    [sym_as_pattern] = STATE(85),
    [sym_wildcard] = STATE(85),
    [sym__variable] = STATE(182),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym__literal] = STATE(85),
    [sym__identifier] = STATE(93),
    [sym_simple_type] = STATE(94),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(183),
    [sym_integer] = STATE(88),
    [sym_char] = STATE(88),
    [sym_string] = STATE(88),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(347),
    [anon_sym_LBRACK] = ACTIONS(145),
    [anon_sym_DASH] = ACTIONS(349),
    [anon_sym__] = ACTIONS(147),
    [sym_list_constructor] = ACTIONS(149),
    [sym__variable_pattern] = ACTIONS(151),
    [sym__constructor_pattern] = ACTIONS(351),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(155),
    [anon_sym_SQUOTE] = ACTIONS(157),
    [anon_sym_DQUOTE] = ACTIONS(159),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [301] = {
    [anon_sym_LPAREN] = ACTIONS(233),
    [anon_sym_TILDE] = ACTIONS(233),
    [anon_sym_LBRACK] = ACTIONS(233),
    [anon_sym_DASH] = ACTIONS(233),
    [anon_sym__] = ACTIONS(233),
    [sym_list_constructor] = ACTIONS(233),
    [sym__variable_pattern] = ACTIONS(879),
    [sym__constructor_pattern] = ACTIONS(879),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(879),
    [anon_sym_SQUOTE] = ACTIONS(233),
    [anon_sym_DQUOTE] = ACTIONS(233),
    [sym__integer_literal] = ACTIONS(233),
    [sym__octal_literal] = ACTIONS(233),
    [sym__hexidecimal_literal] = ACTIONS(233),
  },
  [302] = {
    [sym__variable_symbol] = STATE(421),
    [aux_sym_variable_symbol_repeat1] = STATE(422),
    [anon_sym_LPAREN] = ACTIONS(237),
    [anon_sym_TILDE] = ACTIONS(237),
    [anon_sym_LBRACK] = ACTIONS(237),
    [anon_sym_DASH] = ACTIONS(581),
    [anon_sym__] = ACTIONS(237),
    [sym_list_constructor] = ACTIONS(237),
    [anon_sym_BANG] = ACTIONS(581),
    [sym__variable_pattern] = ACTIONS(881),
    [sym__constructor_pattern] = ACTIONS(881),
    [anon_sym_DOT] = ACTIONS(581),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(881),
    [anon_sym_SQUOTE] = ACTIONS(237),
    [anon_sym_DQUOTE] = ACTIONS(237),
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
    [sym__integer_literal] = ACTIONS(237),
    [sym__octal_literal] = ACTIONS(237),
    [sym__hexidecimal_literal] = ACTIONS(237),
  },
  [303] = {
    [anon_sym_COMMA] = ACTIONS(883),
    [anon_sym_RPAREN] = ACTIONS(885),
    [sym_comment] = ACTIONS(5),
  },
  [304] = {
    [sym__function_pattern] = STATE(315),
    [sym_irrefutable_pattern] = STATE(85),
    [sym_list_pattern] = STATE(85),
    [sym_tuple_pattern] = STATE(85),
    [sym_parenthesized_pattern] = STATE(85),
    [sym_as_pattern] = STATE(85),
    [sym_wildcard] = STATE(85),
    [sym__variable] = STATE(182),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym__literal] = STATE(85),
    [sym__identifier] = STATE(93),
    [sym_simple_type] = STATE(94),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(188),
    [sym_integer] = STATE(88),
    [sym_char] = STATE(88),
    [sym_string] = STATE(88),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(347),
    [anon_sym_LBRACK] = ACTIONS(145),
    [anon_sym__] = ACTIONS(147),
    [sym_list_constructor] = ACTIONS(149),
    [sym__variable_pattern] = ACTIONS(151),
    [sym__constructor_pattern] = ACTIONS(351),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(155),
    [anon_sym_SQUOTE] = ACTIONS(157),
    [anon_sym_DQUOTE] = ACTIONS(159),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [305] = {
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
  [306] = {
    [sym__graphic] = STATE(425),
    [sym__small] = STATE(65),
    [sym__large] = STATE(65),
    [sym__symbol] = STATE(65),
    [sym__special] = STATE(65),
    [sym__escape] = STATE(425),
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
    [anon_sym_SQUOTE] = ACTIONS(887),
    [anon_sym_DQUOTE] = ACTIONS(887),
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
    [sym__space] = ACTIONS(887),
  },
  [307] = {
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
  [308] = {
    [anon_sym_COMMA] = ACTIONS(853),
    [anon_sym_RPAREN] = ACTIONS(853),
    [sym__variable_pattern] = ACTIONS(853),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(855),
    [anon_sym_SQUOTE] = ACTIONS(853),
    [anon_sym_DQUOTE] = ACTIONS(853),
    [sym__integer_literal] = ACTIONS(853),
    [sym__octal_literal] = ACTIONS(853),
    [sym__hexidecimal_literal] = ACTIONS(853),
  },
  [309] = {
    [anon_sym_LBRACE] = ACTIONS(441),
    [anon_sym_COMMA] = ACTIONS(853),
    [anon_sym_RPAREN] = ACTIONS(853),
    [sym__variable_pattern] = ACTIONS(889),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(855),
    [anon_sym_SQUOTE] = ACTIONS(853),
    [anon_sym_DQUOTE] = ACTIONS(853),
    [sym__integer_literal] = ACTIONS(853),
    [sym__octal_literal] = ACTIONS(853),
    [sym__hexidecimal_literal] = ACTIONS(853),
  },
  [310] = {
    [sym__literal] = STATE(426),
    [sym_variable_identifier] = STATE(426),
    [sym_integer] = STATE(305),
    [sym_char] = STATE(305),
    [sym_string] = STATE(305),
    [anon_sym_COMMA] = ACTIONS(859),
    [anon_sym_RPAREN] = ACTIONS(859),
    [sym__variable_pattern] = ACTIONS(257),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(591),
    [anon_sym_SQUOTE] = ACTIONS(593),
    [anon_sym_DQUOTE] = ACTIONS(419),
    [sym__integer_literal] = ACTIONS(595),
    [sym__octal_literal] = ACTIONS(595),
    [sym__hexidecimal_literal] = ACTIONS(595),
  },
  [311] = {
    [anon_sym_LPAREN] = ACTIONS(892),
    [anon_sym_COMMA] = ACTIONS(892),
    [anon_sym_RPAREN] = ACTIONS(892),
    [anon_sym_EQ] = ACTIONS(892),
    [anon_sym_TILDE] = ACTIONS(892),
    [anon_sym_LBRACK] = ACTIONS(892),
    [anon_sym_RBRACK] = ACTIONS(892),
    [anon_sym_DASH] = ACTIONS(892),
    [anon_sym__] = ACTIONS(892),
    [anon_sym_BQUOTE] = ACTIONS(892),
    [anon_sym_COLON] = ACTIONS(892),
    [sym_list_constructor] = ACTIONS(892),
    [anon_sym_BANG] = ACTIONS(892),
    [sym__variable_pattern] = ACTIONS(894),
    [sym__constructor_pattern] = ACTIONS(894),
    [anon_sym_DOT] = ACTIONS(892),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(894),
    [anon_sym_SQUOTE] = ACTIONS(892),
    [anon_sym_DQUOTE] = ACTIONS(892),
    [anon_sym_POUND] = ACTIONS(892),
    [anon_sym_DOLLAR] = ACTIONS(892),
    [anon_sym_PERCENT] = ACTIONS(892),
    [anon_sym_AMP] = ACTIONS(892),
    [anon_sym_1] = ACTIONS(892),
    [anon_sym_PLUS] = ACTIONS(892),
    [anon_sym_SLASH] = ACTIONS(892),
    [anon_sym_LT] = ACTIONS(892),
    [anon_sym_GT] = ACTIONS(892),
    [anon_sym_QMARK] = ACTIONS(892),
    [anon_sym_CARET] = ACTIONS(892),
    [sym__integer_literal] = ACTIONS(892),
    [sym__octal_literal] = ACTIONS(892),
    [sym__hexidecimal_literal] = ACTIONS(892),
  },
  [312] = {
    [sym__function_pattern] = STATE(315),
    [sym_irrefutable_pattern] = STATE(85),
    [sym_list_pattern] = STATE(85),
    [sym_tuple_pattern] = STATE(85),
    [sym_parenthesized_pattern] = STATE(85),
    [sym_as_pattern] = STATE(85),
    [sym_wildcard] = STATE(85),
    [sym__variable] = STATE(187),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym__literal] = STATE(85),
    [sym__identifier] = STATE(93),
    [sym_simple_type] = STATE(94),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(188),
    [sym_integer] = STATE(88),
    [sym_char] = STATE(88),
    [sym_string] = STATE(88),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(353),
    [anon_sym_LBRACK] = ACTIONS(145),
    [anon_sym__] = ACTIONS(147),
    [sym_list_constructor] = ACTIONS(149),
    [sym__variable_pattern] = ACTIONS(151),
    [sym__constructor_pattern] = ACTIONS(351),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(155),
    [anon_sym_SQUOTE] = ACTIONS(157),
    [anon_sym_DQUOTE] = ACTIONS(159),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [313] = {
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
  [314] = {
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
  [315] = {
    [anon_sym_LPAREN] = ACTIONS(896),
    [anon_sym_COMMA] = ACTIONS(896),
    [anon_sym_RPAREN] = ACTIONS(896),
    [anon_sym_EQ] = ACTIONS(896),
    [anon_sym_TILDE] = ACTIONS(896),
    [anon_sym_LBRACK] = ACTIONS(896),
    [anon_sym_RBRACK] = ACTIONS(896),
    [anon_sym_DASH] = ACTIONS(896),
    [anon_sym__] = ACTIONS(896),
    [anon_sym_BQUOTE] = ACTIONS(896),
    [anon_sym_COLON] = ACTIONS(896),
    [sym_list_constructor] = ACTIONS(896),
    [anon_sym_BANG] = ACTIONS(896),
    [sym__variable_pattern] = ACTIONS(898),
    [sym__constructor_pattern] = ACTIONS(898),
    [anon_sym_DOT] = ACTIONS(896),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(898),
    [anon_sym_SQUOTE] = ACTIONS(896),
    [anon_sym_DQUOTE] = ACTIONS(896),
    [anon_sym_POUND] = ACTIONS(896),
    [anon_sym_DOLLAR] = ACTIONS(896),
    [anon_sym_PERCENT] = ACTIONS(896),
    [anon_sym_AMP] = ACTIONS(896),
    [anon_sym_1] = ACTIONS(896),
    [anon_sym_PLUS] = ACTIONS(896),
    [anon_sym_SLASH] = ACTIONS(896),
    [anon_sym_LT] = ACTIONS(896),
    [anon_sym_GT] = ACTIONS(896),
    [anon_sym_QMARK] = ACTIONS(896),
    [anon_sym_CARET] = ACTIONS(896),
    [sym__integer_literal] = ACTIONS(896),
    [sym__octal_literal] = ACTIONS(896),
    [sym__hexidecimal_literal] = ACTIONS(896),
  },
  [316] = {
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
  [317] = {
    [anon_sym_RBRACE] = ACTIONS(904),
    [sym_comment] = ACTIONS(5),
  },
  [318] = {
    [aux_sym_labels_repeat1] = STATE(429),
    [anon_sym_RBRACE] = ACTIONS(906),
    [anon_sym_COMMA] = ACTIONS(908),
    [sym_comment] = ACTIONS(5),
  },
  [319] = {
    [anon_sym_EQ] = ACTIONS(910),
    [sym_comment] = ACTIONS(5),
  },
  [320] = {
    [sym_type] = STATE(432),
    [sym__generic_type_constructor] = STATE(327),
    [sym_tupling_constructor] = STATE(323),
    [sym_tuple] = STATE(327),
    [sym_list] = STATE(327),
    [sym_parenthesized_constructor] = STATE(327),
    [sym_variable_identifier] = STATE(329),
    [sym__type_constructors] = STATE(323),
    [sym_qualified_type_constructor] = STATE(330),
    [anon_sym_LPAREN] = ACTIONS(615),
    [anon_sym_COMMA] = ACTIONS(912),
    [anon_sym_LBRACK] = ACTIONS(619),
    [sym_unit_type] = ACTIONS(621),
    [sym_list_constructor] = ACTIONS(621),
    [sym_function_constructor] = ACTIONS(621),
    [sym__variable_pattern] = ACTIONS(623),
    [sym__constructor_pattern] = ACTIONS(629),
    [sym_module_identifier] = ACTIONS(627),
    [sym_comment] = ACTIONS(5),
  },
  [321] = {
    [aux_sym_tupling_constructor_repeat1] = STATE(435),
    [anon_sym_COMMA] = ACTIONS(914),
    [anon_sym_RPAREN] = ACTIONS(916),
    [sym_comment] = ACTIONS(5),
  },
  [322] = {
    [sym_type] = STATE(333),
    [sym__generic_type_constructor] = STATE(334),
    [sym_tupling_constructor] = STATE(323),
    [sym_tuple] = STATE(334),
    [sym_list] = STATE(334),
    [sym_parenthesized_constructor] = STATE(334),
    [sym_variable_identifier] = STATE(335),
    [sym__type_constructors] = STATE(323),
    [sym_qualified_type_constructor] = STATE(330),
    [aux_sym_list_repeat1] = STATE(436),
    [anon_sym_LPAREN] = ACTIONS(615),
    [anon_sym_LBRACK] = ACTIONS(619),
    [sym_unit_type] = ACTIONS(621),
    [sym_list_constructor] = ACTIONS(621),
    [sym_function_constructor] = ACTIONS(621),
    [sym__variable_pattern] = ACTIONS(257),
    [sym__constructor_pattern] = ACTIONS(629),
    [sym_module_identifier] = ACTIONS(631),
    [sym_comment] = ACTIONS(5),
  },
  [323] = {
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
    [sym__constructor_pattern] = ACTIONS(918),
    [sym_module_identifier] = ACTIONS(918),
    [sym_comment] = ACTIONS(5),
  },
  [324] = {
    [sym_variable_identifier] = STATE(152),
    [aux_sym_type_class_repeat1] = STATE(437),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_COMMA] = ACTIONS(639),
    [anon_sym_RPAREN] = ACTIONS(639),
    [anon_sym_DASH_GT] = ACTIONS(639),
    [sym__variable_pattern] = ACTIONS(79),
    [sym_comment] = ACTIONS(5),
  },
  [325] = {
    [sym_constructor_identifier] = STATE(439),
    [aux_sym_qualified_type_constructor_repeat1] = STATE(440),
    [sym__constructor_pattern] = ACTIONS(69),
    [anon_sym_DOT] = ACTIONS(920),
    [sym_comment] = ACTIONS(5),
  },
  [326] = {
    [aux_sym_tuple_repeat1] = STATE(443),
    [anon_sym_COMMA] = ACTIONS(922),
    [anon_sym_RPAREN] = ACTIONS(924),
    [sym_comment] = ACTIONS(5),
  },
  [327] = {
    [anon_sym_COMMA] = ACTIONS(651),
    [anon_sym_RPAREN] = ACTIONS(651),
    [anon_sym_DASH_GT] = ACTIONS(926),
    [sym_comment] = ACTIONS(5),
  },
  [328] = {
    [aux_sym_context_repeat1] = STATE(446),
    [anon_sym_COMMA] = ACTIONS(429),
    [anon_sym_RPAREN] = ACTIONS(928),
    [sym_comment] = ACTIONS(5),
  },
  [329] = {
    [anon_sym_COMMA] = ACTIONS(659),
    [anon_sym_RPAREN] = ACTIONS(659),
    [anon_sym_DASH_GT] = ACTIONS(930),
    [sym_comment] = ACTIONS(5),
  },
  [330] = {
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
    [sym__constructor_pattern] = ACTIONS(932),
    [sym_module_identifier] = ACTIONS(932),
    [sym_comment] = ACTIONS(5),
  },
  [331] = {
    [sym_variable_identifier] = STATE(152),
    [aux_sym_type_class_repeat1] = STATE(437),
    [anon_sym_LPAREN] = ACTIONS(639),
    [anon_sym_COMMA] = ACTIONS(639),
    [anon_sym_RPAREN] = ACTIONS(639),
    [anon_sym_LBRACK] = ACTIONS(639),
    [anon_sym_RBRACK] = ACTIONS(639),
    [anon_sym_DASH_GT] = ACTIONS(639),
    [sym_unit_type] = ACTIONS(639),
    [sym_list_constructor] = ACTIONS(639),
    [sym_function_constructor] = ACTIONS(639),
    [sym__variable_pattern] = ACTIONS(257),
    [sym__constructor_pattern] = ACTIONS(934),
    [sym_module_identifier] = ACTIONS(934),
    [sym_comment] = ACTIONS(5),
  },
  [332] = {
    [sym_constructor_identifier] = STATE(439),
    [aux_sym_qualified_type_constructor_repeat1] = STATE(450),
    [sym__constructor_pattern] = ACTIONS(936),
    [anon_sym_DOT] = ACTIONS(938),
    [sym_comment] = ACTIONS(5),
  },
  [333] = {
    [anon_sym_LPAREN] = ACTIONS(940),
    [anon_sym_LBRACK] = ACTIONS(940),
    [anon_sym_RBRACK] = ACTIONS(940),
    [sym_unit_type] = ACTIONS(940),
    [sym_list_constructor] = ACTIONS(940),
    [sym_function_constructor] = ACTIONS(940),
    [sym__variable_pattern] = ACTIONS(940),
    [sym__constructor_pattern] = ACTIONS(942),
    [sym_module_identifier] = ACTIONS(942),
    [sym_comment] = ACTIONS(5),
  },
  [334] = {
    [anon_sym_LPAREN] = ACTIONS(651),
    [anon_sym_LBRACK] = ACTIONS(651),
    [anon_sym_RBRACK] = ACTIONS(651),
    [anon_sym_DASH_GT] = ACTIONS(944),
    [sym_unit_type] = ACTIONS(651),
    [sym_list_constructor] = ACTIONS(651),
    [sym_function_constructor] = ACTIONS(651),
    [sym__variable_pattern] = ACTIONS(651),
    [sym__constructor_pattern] = ACTIONS(946),
    [sym_module_identifier] = ACTIONS(946),
    [sym_comment] = ACTIONS(5),
  },
  [335] = {
    [anon_sym_LPAREN] = ACTIONS(659),
    [anon_sym_LBRACK] = ACTIONS(659),
    [anon_sym_RBRACK] = ACTIONS(659),
    [anon_sym_DASH_GT] = ACTIONS(948),
    [sym_unit_type] = ACTIONS(659),
    [sym_list_constructor] = ACTIONS(659),
    [sym_function_constructor] = ACTIONS(659),
    [sym__variable_pattern] = ACTIONS(659),
    [sym__constructor_pattern] = ACTIONS(950),
    [sym_module_identifier] = ACTIONS(950),
    [sym_comment] = ACTIONS(5),
  },
  [336] = {
    [sym_type] = STATE(454),
    [sym__generic_type_constructor] = STATE(334),
    [sym_tupling_constructor] = STATE(323),
    [sym_tuple] = STATE(334),
    [sym_list] = STATE(334),
    [sym_parenthesized_constructor] = STATE(334),
    [sym_variable_identifier] = STATE(335),
    [sym__type_constructors] = STATE(323),
    [sym_qualified_type_constructor] = STATE(330),
    [anon_sym_LPAREN] = ACTIONS(615),
    [anon_sym_LBRACK] = ACTIONS(619),
    [anon_sym_RBRACK] = ACTIONS(952),
    [sym_unit_type] = ACTIONS(621),
    [sym_list_constructor] = ACTIONS(621),
    [sym_function_constructor] = ACTIONS(621),
    [sym__variable_pattern] = ACTIONS(257),
    [sym__constructor_pattern] = ACTIONS(629),
    [sym_module_identifier] = ACTIONS(631),
    [sym_comment] = ACTIONS(5),
  },
  [337] = {
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
  [338] = {
    [sym__layout_semicolon] = ACTIONS(501),
    [anon_sym_SEMI] = ACTIONS(441),
    [anon_sym_DASH_GT] = ACTIONS(441),
    [sym__variable_pattern] = ACTIONS(441),
    [sym_comment] = ACTIONS(5),
  },
  [339] = {
    [sym_variable_identifier] = STATE(455),
    [sym__layout_semicolon] = ACTIONS(954),
    [anon_sym_SEMI] = ACTIONS(956),
    [anon_sym_DASH_GT] = ACTIONS(956),
    [sym__variable_pattern] = ACTIONS(803),
    [sym_comment] = ACTIONS(5),
  },
  [340] = {
    [sym__layout_semicolon] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(79),
    [anon_sym_DASH_GT] = ACTIONS(79),
    [sym__variable_pattern] = ACTIONS(79),
    [sym_comment] = ACTIONS(5),
  },
  [341] = {
    [sym_constructor_identifier] = STATE(457),
    [sym__constructor_pattern] = ACTIONS(641),
    [sym_module_identifier] = ACTIONS(958),
    [sym_comment] = ACTIONS(5),
  },
  [342] = {
    [sym_variable_identifier] = STATE(338),
    [aux_sym_type_class_repeat1] = STATE(458),
    [sym__layout_semicolon] = ACTIONS(960),
    [anon_sym_SEMI] = ACTIONS(962),
    [anon_sym_DASH_GT] = ACTIONS(962),
    [sym__variable_pattern] = ACTIONS(803),
    [sym_comment] = ACTIONS(5),
  },
  [343] = {
    [sym_constructor_identifier] = STATE(457),
    [sym__constructor_pattern] = ACTIONS(641),
    [anon_sym_DOT] = ACTIONS(964),
    [sym_comment] = ACTIONS(5),
  },
  [344] = {
    [sym_type] = STATE(460),
    [sym__generic_type_constructor] = STATE(202),
    [sym_tupling_constructor] = STATE(198),
    [sym_tuple] = STATE(202),
    [sym_list] = STATE(202),
    [sym_parenthesized_constructor] = STATE(202),
    [sym_variable_identifier] = STATE(205),
    [sym__type_constructors] = STATE(198),
    [sym_qualified_type_constructor] = STATE(207),
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
  [345] = {
    [sym__layout_semicolon] = ACTIONS(966),
    [anon_sym_SEMI] = ACTIONS(968),
    [sym_comment] = ACTIONS(5),
  },
  [346] = {
    [anon_sym_LPAREN] = ACTIONS(970),
    [anon_sym_LBRACK] = ACTIONS(970),
    [sym_unit_type] = ACTIONS(970),
    [sym_list_constructor] = ACTIONS(970),
    [sym_function_constructor] = ACTIONS(970),
    [sym__variable_pattern] = ACTIONS(970),
    [sym__constructor_pattern] = ACTIONS(435),
    [sym_module_identifier] = ACTIONS(435),
    [sym_comment] = ACTIONS(5),
  },
  [347] = {
    [sym_type] = STATE(461),
    [sym__generic_type_constructor] = STATE(202),
    [sym_tupling_constructor] = STATE(198),
    [sym_tuple] = STATE(202),
    [sym_list] = STATE(202),
    [sym_parenthesized_constructor] = STATE(202),
    [sym_variable_identifier] = STATE(205),
    [sym__type_constructors] = STATE(198),
    [sym_qualified_type_constructor] = STATE(207),
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
  [348] = {
    [ts_builtin_sym_end] = ACTIONS(972),
    [sym_comment] = ACTIONS(5),
  },
  [349] = {
    [sym__layout_semicolon] = ACTIONS(974),
    [anon_sym_SEMI] = ACTIONS(976),
    [sym_comment] = ACTIONS(5),
  },
  [350] = {
    [sym_import] = STATE(19),
    [sym__declaration] = STATE(464),
    [sym_function_declaration] = STATE(19),
    [sym_function_head] = STATE(21),
    [sym__variable] = STATE(22),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym_foreign] = STATE(19),
    [sym_default] = STATE(19),
    [sym_type_class] = STATE(19),
    [sym_type_class_instance] = STATE(19),
    [sym__general_declaration] = STATE(19),
    [sym_fixity] = STATE(24),
    [sym_type_signature] = STATE(24),
    [sym_algebraic_datatype] = STATE(19),
    [sym_newtype] = STATE(19),
    [sym_type_synonym] = STATE(19),
    [sym__literal] = STATE(19),
    [sym__identifier] = STATE(25),
    [sym_variable_identifier] = STATE(26),
    [sym_constructor_identifier] = STATE(27),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [sym__layout_close_brace] = ACTIONS(978),
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
  [351] = {
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
    [sym__general_declaration] = STATE(19),
    [sym_fixity] = STATE(24),
    [sym_type_signature] = STATE(24),
    [sym_algebraic_datatype] = STATE(19),
    [sym_newtype] = STATE(19),
    [sym_type_synonym] = STATE(19),
    [sym__literal] = STATE(19),
    [sym__identifier] = STATE(25),
    [sym_variable_identifier] = STATE(26),
    [sym_constructor_identifier] = STATE(27),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [anon_sym_RBRACE] = ACTIONS(980),
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
  [352] = {
    [sym_export] = STATE(465),
    [sym__identifier] = STATE(214),
    [sym_variable_identifier] = STATE(112),
    [sym_constructor_identifier] = STATE(112),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [353] = {
    [anon_sym_where] = ACTIONS(982),
    [sym_comment] = ACTIONS(5),
  },
  [354] = {
    [anon_sym_COMMA] = ACTIONS(984),
    [anon_sym_RPAREN] = ACTIONS(986),
    [sym_comment] = ACTIONS(5),
  },
  [355] = {
    [sym__identifier] = STATE(469),
    [sym_variable_identifier] = STATE(112),
    [sym_constructor_identifier] = STATE(112),
    [anon_sym_DOT_DOT] = ACTIONS(988),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [356] = {
    [ts_builtin_sym_end] = ACTIONS(990),
    [sym_comment] = ACTIONS(5),
  },
  [357] = {
    [sym_import_specification] = STATE(470),
    [sym__layout_semicolon] = ACTIONS(992),
    [anon_sym_SEMI] = ACTIONS(994),
    [anon_sym_LPAREN] = ACTIONS(189),
    [anon_sym_hiding] = ACTIONS(193),
    [sym_comment] = ACTIONS(5),
  },
  [358] = {
    [sym__identifier] = STATE(472),
    [sym_variable_identifier] = STATE(112),
    [sym_constructor_identifier] = STATE(112),
    [anon_sym_DOT_DOT] = ACTIONS(996),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [359] = {
    [sym__identifier] = STATE(473),
    [sym_variable_identifier] = STATE(112),
    [sym_constructor_identifier] = STATE(112),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [360] = {
    [sym__layout_semicolon] = ACTIONS(998),
    [anon_sym_SEMI] = ACTIONS(1000),
    [sym_comment] = ACTIONS(5),
  },
  [361] = {
    [anon_sym_COMMA] = ACTIONS(1002),
    [anon_sym_RPAREN] = ACTIONS(1004),
    [sym_comment] = ACTIONS(5),
  },
  [362] = {
    [sym__layout_semicolon] = ACTIONS(992),
    [anon_sym_SEMI] = ACTIONS(994),
    [sym_comment] = ACTIONS(5),
  },
  [363] = {
    [aux_sym_import_specification_repeat1] = STATE(477),
    [anon_sym_LPAREN] = ACTIONS(1006),
    [anon_sym_COMMA] = ACTIONS(701),
    [anon_sym_RPAREN] = ACTIONS(1004),
    [sym_comment] = ACTIONS(5),
  },
  [364] = {
    [anon_sym_COMMA] = ACTIONS(301),
    [anon_sym_RPAREN] = ACTIONS(301),
    [sym__variable_pattern] = ACTIONS(301),
    [sym__constructor_pattern] = ACTIONS(303),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(303),
    [anon_sym_SQUOTE] = ACTIONS(301),
    [anon_sym_DQUOTE] = ACTIONS(301),
    [sym__integer_literal] = ACTIONS(301),
    [sym__octal_literal] = ACTIONS(301),
    [sym__hexidecimal_literal] = ACTIONS(301),
  },
  [365] = {
    [sym__gap] = STATE(166),
    [sym__graphic] = STATE(166),
    [sym__small] = STATE(73),
    [sym__large] = STATE(73),
    [sym__symbol] = STATE(73),
    [sym__special] = STATE(73),
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
    [anon_sym_SQUOTE] = ACTIONS(323),
    [anon_sym_DQUOTE] = ACTIONS(1008),
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
  [366] = {
    [sym__layout_semicolon] = ACTIONS(1010),
    [anon_sym_SEMI] = ACTIONS(1012),
    [sym_comment] = ACTIONS(5),
  },
  [367] = {
    [sym_type_signature] = STATE(479),
    [sym__identifier] = STATE(226),
    [sym_variable_identifier] = STATE(112),
    [sym_constructor_identifier] = STATE(112),
    [sym__variable_pattern] = ACTIONS(623),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [368] = {
    [anon_sym_COMMA] = ACTIONS(1014),
    [anon_sym_RPAREN] = ACTIONS(1014),
    [sym_comment] = ACTIONS(5),
  },
  [369] = {
    [sym__identifier] = STATE(480),
    [sym_variable_identifier] = STATE(112),
    [sym_constructor_identifier] = STATE(112),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [370] = {
    [sym__layout_semicolon] = ACTIONS(1016),
    [anon_sym_SEMI] = ACTIONS(1018),
    [sym_comment] = ACTIONS(5),
  },
  [371] = {
    [anon_sym_COMMA] = ACTIONS(1020),
    [anon_sym_RPAREN] = ACTIONS(1020),
    [sym_comment] = ACTIONS(5),
  },
  [372] = {
    [sym__constructor_pattern] = ACTIONS(1022),
    [sym_comment] = ACTIONS(5),
  },
  [373] = {
    [sym_class] = STATE(481),
    [sym_constructor_identifier] = STATE(114),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_comment] = ACTIONS(5),
  },
  [374] = {
    [anon_sym_EQ_GT] = ACTIONS(1024),
    [sym_comment] = ACTIONS(5),
  },
  [375] = {
    [sym__layout_semicolon] = ACTIONS(1026),
    [anon_sym_SEMI] = ACTIONS(1028),
    [sym_comment] = ACTIONS(5),
  },
  [376] = {
    [sym_general_declarations] = STATE(483),
    [sym__layout_open_brace] = ACTIONS(437),
    [anon_sym_LBRACE] = ACTIONS(439),
    [sym_comment] = ACTIONS(5),
  },
  [377] = {
    [sym__layout_semicolon] = ACTIONS(1030),
    [anon_sym_SEMI] = ACTIONS(1032),
    [sym_comment] = ACTIONS(5),
  },
  [378] = {
    [sym__layout_semicolon] = ACTIONS(1034),
    [anon_sym_SEMI] = ACTIONS(1036),
    [sym_comment] = ACTIONS(5),
  },
  [379] = {
    [sym__general_declaration] = STATE(486),
    [sym_fixity] = STATE(24),
    [sym_type_signature] = STATE(24),
    [sym__identifier] = STATE(226),
    [sym_variable_identifier] = STATE(112),
    [sym_constructor_identifier] = STATE(112),
    [sym__layout_close_brace] = ACTIONS(1038),
    [anon_sym_infixl] = ACTIONS(23),
    [anon_sym_infixr] = ACTIONS(23),
    [anon_sym_infix] = ACTIONS(23),
    [sym__variable_pattern] = ACTIONS(211),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [380] = {
    [sym__layout_semicolon] = ACTIONS(1040),
    [anon_sym_SEMI] = ACTIONS(1042),
    [sym_comment] = ACTIONS(5),
  },
  [381] = {
    [sym__general_declaration] = STATE(488),
    [sym_fixity] = STATE(24),
    [sym_type_signature] = STATE(24),
    [sym__identifier] = STATE(226),
    [sym_variable_identifier] = STATE(112),
    [sym_constructor_identifier] = STATE(112),
    [anon_sym_RBRACE] = ACTIONS(1044),
    [anon_sym_infixl] = ACTIONS(23),
    [anon_sym_infixr] = ACTIONS(23),
    [anon_sym_infix] = ACTIONS(23),
    [sym__variable_pattern] = ACTIONS(211),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [382] = {
    [anon_sym_COMMA] = ACTIONS(1046),
    [anon_sym_RPAREN] = ACTIONS(1046),
    [anon_sym_EQ_GT] = ACTIONS(1046),
    [sym_comment] = ACTIONS(5),
  },
  [383] = {
    [sym__layout_semicolon] = ACTIONS(1048),
    [anon_sym_SEMI] = ACTIONS(1050),
    [sym_comment] = ACTIONS(5),
  },
  [384] = {
    [sym_general_declarations] = STATE(489),
    [sym__layout_open_brace] = ACTIONS(437),
    [anon_sym_LBRACE] = ACTIONS(439),
    [sym_comment] = ACTIONS(5),
  },
  [385] = {
    [sym__layout_semicolon] = ACTIONS(1052),
    [anon_sym_SEMI] = ACTIONS(1054),
    [anon_sym_COMMA] = ACTIONS(1054),
    [sym_comment] = ACTIONS(5),
  },
  [386] = {
    [sym_deriving] = STATE(490),
    [sym__layout_semicolon] = ACTIONS(1056),
    [anon_sym_SEMI] = ACTIONS(1058),
    [anon_sym_deriving] = ACTIONS(245),
    [sym_comment] = ACTIONS(5),
  },
  [387] = {
    [sym__layout_semicolon] = ACTIONS(1056),
    [anon_sym_SEMI] = ACTIONS(1058),
    [sym_comment] = ACTIONS(5),
  },
  [388] = {
    [aux_sym_export_repeat1] = STATE(492),
    [anon_sym_COMMA] = ACTIONS(425),
    [anon_sym_RPAREN] = ACTIONS(1060),
    [sym_comment] = ACTIONS(5),
  },
  [389] = {
    [sym__layout_semicolon] = ACTIONS(1062),
    [anon_sym_SEMI] = ACTIONS(1064),
    [anon_sym_PIPE] = ACTIONS(1064),
    [anon_sym_deriving] = ACTIONS(1064),
    [sym_comment] = ACTIONS(5),
  },
  [390] = {
    [sym_constructor] = STATE(493),
    [sym_constructor_identifier] = STATE(141),
    [sym__constructor_pattern] = ACTIONS(67),
    [sym_comment] = ACTIONS(5),
  },
  [391] = {
    [aux_sym_fields_repeat1] = STATE(496),
    [anon_sym_RBRACE] = ACTIONS(1066),
    [anon_sym_COMMA] = ACTIONS(1068),
    [sym_comment] = ACTIONS(5),
  },
  [392] = {
    [aux_sym_field_repeat1] = STATE(499),
    [anon_sym_COMMA] = ACTIONS(1070),
    [anon_sym_COLON_COLON] = ACTIONS(1072),
    [sym_comment] = ACTIONS(5),
  },
  [393] = {
    [sym__layout_semicolon] = ACTIONS(1074),
    [anon_sym_SEMI] = ACTIONS(1076),
    [anon_sym_PIPE] = ACTIONS(1076),
    [anon_sym_deriving] = ACTIONS(1076),
    [anon_sym_BANG] = ACTIONS(1076),
    [sym__variable_pattern] = ACTIONS(1078),
    [sym__constructor_pattern] = ACTIONS(1078),
    [sym_comment] = ACTIONS(5),
  },
  [394] = {
    [sym__layout_semicolon] = ACTIONS(1080),
    [anon_sym_SEMI] = ACTIONS(1082),
    [anon_sym_PIPE] = ACTIONS(1082),
    [anon_sym_deriving] = ACTIONS(1082),
    [anon_sym_BANG] = ACTIONS(1082),
    [sym__variable_pattern] = ACTIONS(1084),
    [sym__constructor_pattern] = ACTIONS(1084),
    [sym_comment] = ACTIONS(5),
  },
  [395] = {
    [sym_deriving] = STATE(500),
    [sym__layout_semicolon] = ACTIONS(1086),
    [anon_sym_SEMI] = ACTIONS(1088),
    [anon_sym_deriving] = ACTIONS(245),
    [sym_comment] = ACTIONS(5),
  },
  [396] = {
    [sym__layout_semicolon] = ACTIONS(1086),
    [anon_sym_SEMI] = ACTIONS(1088),
    [sym_comment] = ACTIONS(5),
  },
  [397] = {
    [sym__layout_semicolon] = ACTIONS(1090),
    [anon_sym_SEMI] = ACTIONS(1092),
    [anon_sym_deriving] = ACTIONS(1092),
    [sym_comment] = ACTIONS(5),
  },
  [398] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(1094),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1094),
  },
  [399] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(1096),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(1096),
  },
  [400] = {
    [anon_sym_SEMI] = ACTIONS(1098),
    [anon_sym_LBRACE] = ACTIONS(1098),
    [anon_sym_RBRACE] = ACTIONS(1098),
    [anon_sym_LPAREN] = ACTIONS(1098),
    [anon_sym_RPAREN] = ACTIONS(1098),
    [anon_sym_EQ] = ACTIONS(1098),
    [anon_sym_TILDE] = ACTIONS(1098),
    [anon_sym_LBRACK] = ACTIONS(1098),
    [anon_sym_RBRACK] = ACTIONS(1098),
    [anon_sym_DASH] = ACTIONS(1098),
    [anon_sym_AT] = ACTIONS(1098),
    [anon_sym__] = ACTIONS(1098),
    [anon_sym_BQUOTE] = ACTIONS(1098),
    [anon_sym_COLON] = ACTIONS(1098),
    [anon_sym_PIPE] = ACTIONS(1098),
    [anon_sym_BANG] = ACTIONS(1098),
    [anon_sym_DOT] = ACTIONS(1098),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(1098),
    [anon_sym_DQUOTE] = ACTIONS(1098),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(1098),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(1098),
    [sym__ascii_large] = ACTIONS(1098),
    [anon_sym_POUND] = ACTIONS(1098),
    [anon_sym_DOLLAR] = ACTIONS(1098),
    [anon_sym_PERCENT] = ACTIONS(1098),
    [anon_sym_AMP] = ACTIONS(1098),
    [anon_sym_1] = ACTIONS(1098),
    [anon_sym_PLUS] = ACTIONS(1098),
    [anon_sym_SLASH] = ACTIONS(1098),
    [anon_sym_LT] = ACTIONS(1098),
    [anon_sym_GT] = ACTIONS(1098),
    [anon_sym_QMARK] = ACTIONS(1098),
    [anon_sym_CARET] = ACTIONS(1098),
    [anon_sym_BSLASH] = ACTIONS(1098),
    [sym__space] = ACTIONS(1098),
    [sym__newline] = ACTIONS(1098),
    [sym__tab] = ACTIONS(1098),
    [sym__vertical_tab] = ACTIONS(1098),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(1098),
  },
  [401] = {
    [anon_sym_SEMI] = ACTIONS(1100),
    [anon_sym_LBRACE] = ACTIONS(1100),
    [anon_sym_RBRACE] = ACTIONS(1100),
    [anon_sym_LPAREN] = ACTIONS(1100),
    [anon_sym_RPAREN] = ACTIONS(1100),
    [anon_sym_EQ] = ACTIONS(1100),
    [anon_sym_TILDE] = ACTIONS(1100),
    [anon_sym_LBRACK] = ACTIONS(1100),
    [anon_sym_RBRACK] = ACTIONS(1100),
    [anon_sym_DASH] = ACTIONS(1100),
    [anon_sym_AT] = ACTIONS(1100),
    [anon_sym__] = ACTIONS(1100),
    [anon_sym_BQUOTE] = ACTIONS(1100),
    [anon_sym_COLON] = ACTIONS(1100),
    [anon_sym_PIPE] = ACTIONS(1100),
    [anon_sym_BANG] = ACTIONS(1100),
    [anon_sym_DOT] = ACTIONS(1100),
    [sym_comment] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(1100),
    [anon_sym_DQUOTE] = ACTIONS(1100),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(1100),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(1100),
    [sym__ascii_large] = ACTIONS(1100),
    [anon_sym_POUND] = ACTIONS(1100),
    [anon_sym_DOLLAR] = ACTIONS(1100),
    [anon_sym_PERCENT] = ACTIONS(1100),
    [anon_sym_AMP] = ACTIONS(1100),
    [anon_sym_1] = ACTIONS(1100),
    [anon_sym_PLUS] = ACTIONS(1100),
    [anon_sym_SLASH] = ACTIONS(1100),
    [anon_sym_LT] = ACTIONS(1100),
    [anon_sym_GT] = ACTIONS(1100),
    [anon_sym_QMARK] = ACTIONS(1100),
    [anon_sym_CARET] = ACTIONS(1100),
    [anon_sym_BSLASH] = ACTIONS(1100),
    [sym__space] = ACTIONS(1100),
    [sym__newline] = ACTIONS(1100),
    [sym__tab] = ACTIONS(1100),
    [sym__vertical_tab] = ACTIONS(1100),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(1100),
  },
  [402] = {
    [sym__layout_semicolon] = ACTIONS(1102),
    [anon_sym_SEMI] = ACTIONS(1104),
    [anon_sym_do] = ACTIONS(1104),
    [sym__variable_pattern] = ACTIONS(1106),
    [sym__constructor_pattern] = ACTIONS(1106),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1106),
    [anon_sym_SQUOTE] = ACTIONS(1104),
    [anon_sym_DQUOTE] = ACTIONS(1104),
    [sym__integer_literal] = ACTIONS(1104),
    [sym__octal_literal] = ACTIONS(1104),
    [sym__hexidecimal_literal] = ACTIONS(1104),
  },
  [403] = {
    [sym__layout_semicolon] = ACTIONS(77),
    [anon_sym_SEMI] = ACTIONS(79),
    [sym__variable_pattern] = ACTIONS(79),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(203),
    [anon_sym_SQUOTE] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [sym__integer_literal] = ACTIONS(79),
    [sym__octal_literal] = ACTIONS(79),
    [sym__hexidecimal_literal] = ACTIONS(79),
  },
  [404] = {
    [sym__layout_semicolon] = ACTIONS(1108),
    [anon_sym_SEMI] = ACTIONS(1110),
    [sym_comment] = ACTIONS(5),
  },
  [405] = {
    [sym__layout_close_brace] = ACTIONS(1112),
    [anon_sym_do] = ACTIONS(1114),
    [sym__variable_pattern] = ACTIONS(1116),
    [sym__constructor_pattern] = ACTIONS(1116),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1116),
    [anon_sym_SQUOTE] = ACTIONS(1114),
    [anon_sym_DQUOTE] = ACTIONS(1114),
    [sym__integer_literal] = ACTIONS(1114),
    [sym__octal_literal] = ACTIONS(1114),
    [sym__hexidecimal_literal] = ACTIONS(1114),
  },
  [406] = {
    [sym__literal] = STATE(506),
    [sym_variable_identifier] = STATE(506),
    [sym_integer] = STATE(502),
    [sym_char] = STATE(502),
    [sym_string] = STATE(502),
    [aux_sym_general_constructor_repeat1] = STATE(507),
    [sym__layout_semicolon] = ACTIONS(171),
    [anon_sym_SEMI] = ACTIONS(173),
    [sym__variable_pattern] = ACTIONS(803),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1118),
    [anon_sym_SQUOTE] = ACTIONS(1120),
    [anon_sym_DQUOTE] = ACTIONS(1122),
    [sym__integer_literal] = ACTIONS(1124),
    [sym__octal_literal] = ACTIONS(1124),
    [sym__hexidecimal_literal] = ACTIONS(1124),
  },
  [407] = {
    [sym_general_constructor] = STATE(171),
    [sym__variable] = STATE(171),
    [sym_qualified_variable_identifier] = STATE(172),
    [sym__expression] = STATE(404),
    [sym_do_expression] = STATE(171),
    [sym__statement] = STATE(509),
    [sym__literal] = STATE(171),
    [sym__identifier] = STATE(171),
    [sym_variable_identifier] = STATE(27),
    [sym_constructor_identifier] = STATE(406),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [sym__layout_close_brace] = ACTIONS(1126),
    [anon_sym_do] = ACTIONS(337),
    [sym__variable_pattern] = ACTIONS(31),
    [sym__constructor_pattern] = ACTIONS(839),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym__integer_literal] = ACTIONS(41),
    [sym__octal_literal] = ACTIONS(41),
    [sym__hexidecimal_literal] = ACTIONS(41),
  },
  [408] = {
    [sym__layout_semicolon] = ACTIONS(1128),
    [anon_sym_SEMI] = ACTIONS(1130),
    [sym_comment] = ACTIONS(5),
  },
  [409] = {
    [anon_sym_RBRACE] = ACTIONS(1114),
    [anon_sym_do] = ACTIONS(1114),
    [sym__variable_pattern] = ACTIONS(1116),
    [sym__constructor_pattern] = ACTIONS(1116),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1116),
    [anon_sym_SQUOTE] = ACTIONS(1114),
    [anon_sym_DQUOTE] = ACTIONS(1114),
    [sym__integer_literal] = ACTIONS(1114),
    [sym__octal_literal] = ACTIONS(1114),
    [sym__hexidecimal_literal] = ACTIONS(1114),
  },
  [410] = {
    [sym_general_constructor] = STATE(171),
    [sym__variable] = STATE(171),
    [sym_qualified_variable_identifier] = STATE(172),
    [sym__expression] = STATE(408),
    [sym_do_expression] = STATE(171),
    [sym__statement] = STATE(511),
    [sym__literal] = STATE(171),
    [sym__identifier] = STATE(171),
    [sym_variable_identifier] = STATE(27),
    [sym_constructor_identifier] = STATE(406),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_string] = STATE(14),
    [anon_sym_RBRACE] = ACTIONS(1132),
    [anon_sym_do] = ACTIONS(337),
    [sym__variable_pattern] = ACTIONS(31),
    [sym__constructor_pattern] = ACTIONS(839),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym__integer_literal] = ACTIONS(41),
    [sym__octal_literal] = ACTIONS(41),
    [sym__hexidecimal_literal] = ACTIONS(41),
  },
  [411] = {
    [sym__layout_semicolon] = ACTIONS(1134),
    [anon_sym_SEMI] = ACTIONS(1136),
    [anon_sym_do] = ACTIONS(1136),
    [sym__variable_pattern] = ACTIONS(1138),
    [sym__constructor_pattern] = ACTIONS(1138),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1138),
    [anon_sym_SQUOTE] = ACTIONS(1136),
    [anon_sym_DQUOTE] = ACTIONS(1136),
    [sym__integer_literal] = ACTIONS(1136),
    [sym__octal_literal] = ACTIONS(1136),
    [sym__hexidecimal_literal] = ACTIONS(1136),
  },
  [412] = {
    [anon_sym_RPAREN] = ACTIONS(1140),
    [sym_comment] = ACTIONS(5),
  },
  [413] = {
    [sym__op] = STATE(300),
    [sym_variable_symbol] = STATE(301),
    [sym_constructor_symbol] = STATE(301),
    [sym__variable_symbol] = STATE(302),
    [anon_sym_COMMA] = ACTIONS(1142),
    [anon_sym_RPAREN] = ACTIONS(1142),
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
  [414] = {
    [anon_sym_COMMA] = ACTIONS(1142),
    [anon_sym_RPAREN] = ACTIONS(1142),
    [sym_comment] = ACTIONS(5),
  },
  [415] = {
    [anon_sym_BQUOTE] = ACTIONS(1144),
    [sym_comment] = ACTIONS(5),
  },
  [416] = {
    [anon_sym_LPAREN] = ACTIONS(453),
    [anon_sym_TILDE] = ACTIONS(453),
    [anon_sym_LBRACK] = ACTIONS(453),
    [anon_sym_DASH] = ACTIONS(453),
    [anon_sym__] = ACTIONS(453),
    [anon_sym_COLON] = ACTIONS(453),
    [sym_list_constructor] = ACTIONS(453),
    [anon_sym_BANG] = ACTIONS(453),
    [sym__variable_pattern] = ACTIONS(1146),
    [sym__constructor_pattern] = ACTIONS(1146),
    [anon_sym_DOT] = ACTIONS(453),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1146),
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
  [417] = {
    [anon_sym_LPAREN] = ACTIONS(457),
    [anon_sym_TILDE] = ACTIONS(457),
    [anon_sym_LBRACK] = ACTIONS(457),
    [anon_sym_DASH] = ACTIONS(457),
    [anon_sym__] = ACTIONS(457),
    [anon_sym_COLON] = ACTIONS(457),
    [sym_list_constructor] = ACTIONS(457),
    [anon_sym_BANG] = ACTIONS(457),
    [sym__variable_pattern] = ACTIONS(1148),
    [sym__constructor_pattern] = ACTIONS(1148),
    [anon_sym_DOT] = ACTIONS(457),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1148),
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
  [418] = {
    [sym__constructor_symbol] = STATE(514),
    [anon_sym_LPAREN] = ACTIONS(461),
    [anon_sym_TILDE] = ACTIONS(461),
    [anon_sym_LBRACK] = ACTIONS(461),
    [anon_sym_DASH] = ACTIONS(461),
    [anon_sym__] = ACTIONS(461),
    [anon_sym_COLON] = ACTIONS(875),
    [sym_list_constructor] = ACTIONS(461),
    [anon_sym_BANG] = ACTIONS(875),
    [sym__variable_pattern] = ACTIONS(1150),
    [sym__constructor_pattern] = ACTIONS(1150),
    [anon_sym_DOT] = ACTIONS(875),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1150),
    [anon_sym_SQUOTE] = ACTIONS(461),
    [anon_sym_DQUOTE] = ACTIONS(461),
    [anon_sym_POUND] = ACTIONS(875),
    [anon_sym_DOLLAR] = ACTIONS(875),
    [anon_sym_PERCENT] = ACTIONS(875),
    [anon_sym_AMP] = ACTIONS(875),
    [anon_sym_1] = ACTIONS(875),
    [anon_sym_PLUS] = ACTIONS(875),
    [anon_sym_SLASH] = ACTIONS(875),
    [anon_sym_LT] = ACTIONS(875),
    [anon_sym_GT] = ACTIONS(875),
    [anon_sym_QMARK] = ACTIONS(875),
    [anon_sym_CARET] = ACTIONS(875),
    [sym__integer_literal] = ACTIONS(461),
    [sym__octal_literal] = ACTIONS(461),
    [sym__hexidecimal_literal] = ACTIONS(461),
  },
  [419] = {
    [sym__op] = STATE(300),
    [sym_variable_symbol] = STATE(301),
    [sym_constructor_symbol] = STATE(301),
    [sym__variable_symbol] = STATE(302),
    [anon_sym_COMMA] = ACTIONS(1152),
    [anon_sym_RPAREN] = ACTIONS(1152),
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
  [420] = {
    [anon_sym_COMMA] = ACTIONS(1152),
    [anon_sym_RPAREN] = ACTIONS(1152),
    [sym_comment] = ACTIONS(5),
  },
  [421] = {
    [anon_sym_LPAREN] = ACTIONS(471),
    [anon_sym_TILDE] = ACTIONS(471),
    [anon_sym_LBRACK] = ACTIONS(471),
    [anon_sym_DASH] = ACTIONS(471),
    [anon_sym__] = ACTIONS(471),
    [sym_list_constructor] = ACTIONS(471),
    [anon_sym_BANG] = ACTIONS(471),
    [sym__variable_pattern] = ACTIONS(1154),
    [sym__constructor_pattern] = ACTIONS(1154),
    [anon_sym_DOT] = ACTIONS(471),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1154),
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
  [422] = {
    [sym__variable_symbol] = STATE(515),
    [anon_sym_LPAREN] = ACTIONS(475),
    [anon_sym_TILDE] = ACTIONS(475),
    [anon_sym_LBRACK] = ACTIONS(475),
    [anon_sym_DASH] = ACTIONS(581),
    [anon_sym__] = ACTIONS(475),
    [sym_list_constructor] = ACTIONS(475),
    [anon_sym_BANG] = ACTIONS(581),
    [sym__variable_pattern] = ACTIONS(1156),
    [sym__constructor_pattern] = ACTIONS(1156),
    [anon_sym_DOT] = ACTIONS(581),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1156),
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
  [423] = {
    [sym__function_pattern] = STATE(516),
    [sym_irrefutable_pattern] = STATE(85),
    [sym_list_pattern] = STATE(85),
    [sym_tuple_pattern] = STATE(85),
    [sym_parenthesized_pattern] = STATE(85),
    [sym__pattern] = STATE(517),
    [sym_negative_literal] = STATE(181),
    [sym_general_constructor] = STATE(181),
    [sym_as_pattern] = STATE(85),
    [sym_wildcard] = STATE(85),
    [sym__variable] = STATE(182),
    [sym_qualified_variable_identifier] = STATE(23),
    [sym__literal] = STATE(85),
    [sym__identifier] = STATE(93),
    [sym_simple_type] = STATE(94),
    [sym_variable_identifier] = STATE(95),
    [sym_constructor_identifier] = STATE(183),
    [sym_integer] = STATE(88),
    [sym_char] = STATE(88),
    [sym_string] = STATE(88),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(347),
    [anon_sym_LBRACK] = ACTIONS(145),
    [anon_sym_DASH] = ACTIONS(349),
    [anon_sym__] = ACTIONS(147),
    [sym_list_constructor] = ACTIONS(149),
    [sym__variable_pattern] = ACTIONS(151),
    [sym__constructor_pattern] = ACTIONS(351),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(155),
    [anon_sym_SQUOTE] = ACTIONS(157),
    [anon_sym_DQUOTE] = ACTIONS(159),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [424] = {
    [anon_sym_LPAREN] = ACTIONS(1158),
    [anon_sym_COMMA] = ACTIONS(1158),
    [anon_sym_RPAREN] = ACTIONS(1158),
    [anon_sym_EQ] = ACTIONS(1158),
    [anon_sym_TILDE] = ACTIONS(1158),
    [anon_sym_LBRACK] = ACTIONS(1158),
    [anon_sym_RBRACK] = ACTIONS(1158),
    [anon_sym_DASH] = ACTIONS(1158),
    [anon_sym__] = ACTIONS(1158),
    [anon_sym_BQUOTE] = ACTIONS(1158),
    [anon_sym_COLON] = ACTIONS(1158),
    [sym_list_constructor] = ACTIONS(1158),
    [anon_sym_BANG] = ACTIONS(1158),
    [sym__variable_pattern] = ACTIONS(1160),
    [sym__constructor_pattern] = ACTIONS(1160),
    [anon_sym_DOT] = ACTIONS(1158),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1160),
    [anon_sym_SQUOTE] = ACTIONS(1158),
    [anon_sym_DQUOTE] = ACTIONS(1158),
    [anon_sym_POUND] = ACTIONS(1158),
    [anon_sym_DOLLAR] = ACTIONS(1158),
    [anon_sym_PERCENT] = ACTIONS(1158),
    [anon_sym_AMP] = ACTIONS(1158),
    [anon_sym_1] = ACTIONS(1158),
    [anon_sym_PLUS] = ACTIONS(1158),
    [anon_sym_SLASH] = ACTIONS(1158),
    [anon_sym_LT] = ACTIONS(1158),
    [anon_sym_GT] = ACTIONS(1158),
    [anon_sym_QMARK] = ACTIONS(1158),
    [anon_sym_CARET] = ACTIONS(1158),
    [sym__integer_literal] = ACTIONS(1158),
    [sym__octal_literal] = ACTIONS(1158),
    [sym__hexidecimal_literal] = ACTIONS(1158),
  },
  [425] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(1162),
  },
  [426] = {
    [anon_sym_COMMA] = ACTIONS(1136),
    [anon_sym_RPAREN] = ACTIONS(1136),
    [sym__variable_pattern] = ACTIONS(1136),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1138),
    [anon_sym_SQUOTE] = ACTIONS(1136),
    [anon_sym_DQUOTE] = ACTIONS(1136),
    [sym__integer_literal] = ACTIONS(1136),
    [sym__octal_literal] = ACTIONS(1136),
    [sym__hexidecimal_literal] = ACTIONS(1136),
  },
  [427] = {
    [anon_sym_LPAREN] = ACTIONS(1164),
    [anon_sym_COMMA] = ACTIONS(1164),
    [anon_sym_RPAREN] = ACTIONS(1164),
    [anon_sym_EQ] = ACTIONS(1164),
    [anon_sym_TILDE] = ACTIONS(1164),
    [anon_sym_LBRACK] = ACTIONS(1164),
    [anon_sym_RBRACK] = ACTIONS(1164),
    [anon_sym_DASH] = ACTIONS(1164),
    [anon_sym__] = ACTIONS(1164),
    [anon_sym_BQUOTE] = ACTIONS(1164),
    [anon_sym_COLON] = ACTIONS(1164),
    [sym_list_constructor] = ACTIONS(1164),
    [anon_sym_BANG] = ACTIONS(1164),
    [sym__variable_pattern] = ACTIONS(1166),
    [sym__constructor_pattern] = ACTIONS(1166),
    [anon_sym_DOT] = ACTIONS(1164),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1166),
    [anon_sym_SQUOTE] = ACTIONS(1164),
    [anon_sym_DQUOTE] = ACTIONS(1164),
    [anon_sym_POUND] = ACTIONS(1164),
    [anon_sym_DOLLAR] = ACTIONS(1164),
    [anon_sym_PERCENT] = ACTIONS(1164),
    [anon_sym_AMP] = ACTIONS(1164),
    [anon_sym_1] = ACTIONS(1164),
    [anon_sym_PLUS] = ACTIONS(1164),
    [anon_sym_SLASH] = ACTIONS(1164),
    [anon_sym_LT] = ACTIONS(1164),
    [anon_sym_GT] = ACTIONS(1164),
    [anon_sym_QMARK] = ACTIONS(1164),
    [anon_sym_CARET] = ACTIONS(1164),
    [sym__integer_literal] = ACTIONS(1164),
    [sym__octal_literal] = ACTIONS(1164),
    [sym__hexidecimal_literal] = ACTIONS(1164),
  },
  [428] = {
    [sym_label] = STATE(519),
    [sym__identifier] = STATE(319),
    [sym_variable_identifier] = STATE(112),
    [sym_constructor_identifier] = STATE(112),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [429] = {
    [anon_sym_RBRACE] = ACTIONS(1168),
    [anon_sym_COMMA] = ACTIONS(1170),
    [sym_comment] = ACTIONS(5),
  },
  [430] = {
    [sym__literal] = STATE(521),
    [sym_integer] = STATE(88),
    [sym_char] = STATE(88),
    [sym_string] = STATE(88),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(155),
    [anon_sym_SQUOTE] = ACTIONS(157),
    [anon_sym_DQUOTE] = ACTIONS(159),
    [sym__integer_literal] = ACTIONS(65),
    [sym__octal_literal] = ACTIONS(65),
    [sym__hexidecimal_literal] = ACTIONS(65),
  },
  [431] = {
    [aux_sym_tupling_constructor_repeat1] = STATE(523),
    [anon_sym_COMMA] = ACTIONS(914),
    [anon_sym_RPAREN] = ACTIONS(1172),
    [sym_comment] = ACTIONS(5),
  },
  [432] = {
    [aux_sym_tuple_repeat1] = STATE(525),
    [anon_sym_COMMA] = ACTIONS(922),
    [anon_sym_RPAREN] = ACTIONS(1174),
    [sym_comment] = ACTIONS(5),
  },
  [433] = {
    [anon_sym_COMMA] = ACTIONS(1176),
    [anon_sym_RPAREN] = ACTIONS(1176),
    [sym_comment] = ACTIONS(5),
  },
  [434] = {
    [sym__layout_semicolon] = ACTIONS(1178),
    [anon_sym_SEMI] = ACTIONS(1180),
    [anon_sym_DASH_GT] = ACTIONS(1180),
    [sym_comment] = ACTIONS(5),
  },
  [435] = {
    [anon_sym_COMMA] = ACTIONS(1182),
    [anon_sym_RPAREN] = ACTIONS(1184),
    [sym_comment] = ACTIONS(5),
  },
  [436] = {
    [sym_type] = STATE(454),
    [sym__generic_type_constructor] = STATE(334),
    [sym_tupling_constructor] = STATE(323),
    [sym_tuple] = STATE(334),
    [sym_list] = STATE(334),
    [sym_parenthesized_constructor] = STATE(334),
    [sym_variable_identifier] = STATE(335),
    [sym__type_constructors] = STATE(323),
    [sym_qualified_type_constructor] = STATE(330),
    [anon_sym_LPAREN] = ACTIONS(615),
    [anon_sym_LBRACK] = ACTIONS(619),
    [anon_sym_RBRACK] = ACTIONS(1186),
    [sym_unit_type] = ACTIONS(621),
    [sym_list_constructor] = ACTIONS(621),
    [sym_function_constructor] = ACTIONS(621),
    [sym__variable_pattern] = ACTIONS(257),
    [sym__constructor_pattern] = ACTIONS(629),
    [sym_module_identifier] = ACTIONS(631),
    [sym_comment] = ACTIONS(5),
  },
  [437] = {
    [sym_variable_identifier] = STATE(271),
    [anon_sym_LPAREN] = ACTIONS(956),
    [anon_sym_COMMA] = ACTIONS(956),
    [anon_sym_RPAREN] = ACTIONS(956),
    [anon_sym_LBRACK] = ACTIONS(956),
    [anon_sym_RBRACK] = ACTIONS(956),
    [anon_sym_DASH_GT] = ACTIONS(956),
    [sym_unit_type] = ACTIONS(956),
    [sym_list_constructor] = ACTIONS(956),
    [sym_function_constructor] = ACTIONS(956),
    [sym__variable_pattern] = ACTIONS(257),
    [sym__constructor_pattern] = ACTIONS(1188),
    [sym_module_identifier] = ACTIONS(1188),
    [sym_comment] = ACTIONS(5),
  },
  [438] = {
    [sym_constructor_identifier] = STATE(529),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_module_identifier] = ACTIONS(958),
    [sym_comment] = ACTIONS(5),
  },
  [439] = {
    [sym_variable_identifier] = STATE(152),
    [aux_sym_type_class_repeat1] = STATE(530),
    [anon_sym_LPAREN] = ACTIONS(962),
    [anon_sym_COMMA] = ACTIONS(962),
    [anon_sym_RPAREN] = ACTIONS(962),
    [anon_sym_LBRACK] = ACTIONS(962),
    [anon_sym_RBRACK] = ACTIONS(962),
    [anon_sym_DASH_GT] = ACTIONS(962),
    [sym_unit_type] = ACTIONS(962),
    [sym_list_constructor] = ACTIONS(962),
    [sym_function_constructor] = ACTIONS(962),
    [sym__variable_pattern] = ACTIONS(257),
    [sym__constructor_pattern] = ACTIONS(1190),
    [sym_module_identifier] = ACTIONS(1190),
    [sym_comment] = ACTIONS(5),
  },
  [440] = {
    [sym_constructor_identifier] = STATE(529),
    [sym__constructor_pattern] = ACTIONS(69),
    [anon_sym_DOT] = ACTIONS(1192),
    [sym_comment] = ACTIONS(5),
  },
  [441] = {
    [sym_type] = STATE(532),
    [sym__generic_type_constructor] = STATE(327),
    [sym_tupling_constructor] = STATE(323),
    [sym_tuple] = STATE(327),
    [sym_list] = STATE(327),
    [sym_parenthesized_constructor] = STATE(327),
    [sym_variable_identifier] = STATE(329),
    [sym__type_constructors] = STATE(323),
    [sym_qualified_type_constructor] = STATE(330),
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
  [442] = {
    [sym__layout_semicolon] = ACTIONS(1194),
    [anon_sym_SEMI] = ACTIONS(1197),
    [anon_sym_DASH_GT] = ACTIONS(1197),
    [sym_comment] = ACTIONS(5),
  },
  [443] = {
    [anon_sym_COMMA] = ACTIONS(1200),
    [anon_sym_RPAREN] = ACTIONS(1202),
    [sym_comment] = ACTIONS(5),
  },
  [444] = {
    [sym_type] = STATE(535),
    [sym__generic_type_constructor] = STATE(327),
    [sym_tupling_constructor] = STATE(323),
    [sym_tuple] = STATE(327),
    [sym_list] = STATE(327),
    [sym_parenthesized_constructor] = STATE(327),
    [sym_variable_identifier] = STATE(329),
    [sym__type_constructors] = STATE(323),
    [sym_qualified_type_constructor] = STATE(330),
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
  [445] = {
    [anon_sym_EQ_GT] = ACTIONS(1204),
    [sym_comment] = ACTIONS(5),
  },
  [446] = {
    [anon_sym_COMMA] = ACTIONS(725),
    [anon_sym_RPAREN] = ACTIONS(1206),
    [sym_comment] = ACTIONS(5),
  },
  [447] = {
    [sym_type] = STATE(538),
    [sym__generic_type_constructor] = STATE(327),
    [sym_tupling_constructor] = STATE(323),
    [sym_tuple] = STATE(327),
    [sym_list] = STATE(327),
    [sym_parenthesized_constructor] = STATE(327),
    [sym_variable_identifier] = STATE(329),
    [sym__type_constructors] = STATE(323),
    [sym_qualified_type_constructor] = STATE(330),
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
  [448] = {
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_RBRACK] = ACTIONS(79),
    [anon_sym_DASH_GT] = ACTIONS(79),
    [sym_unit_type] = ACTIONS(79),
    [sym_list_constructor] = ACTIONS(79),
    [sym_function_constructor] = ACTIONS(79),
    [sym__variable_pattern] = ACTIONS(79),
    [sym__constructor_pattern] = ACTIONS(203),
    [sym_module_identifier] = ACTIONS(203),
    [sym_comment] = ACTIONS(5),
  },
  [449] = {
    [sym_constructor_identifier] = STATE(529),
    [sym__constructor_pattern] = ACTIONS(936),
    [sym_module_identifier] = ACTIONS(958),
    [sym_comment] = ACTIONS(5),
  },
  [450] = {
    [sym_constructor_identifier] = STATE(529),
    [sym__constructor_pattern] = ACTIONS(936),
    [anon_sym_DOT] = ACTIONS(1208),
    [sym_comment] = ACTIONS(5),
  },
  [451] = {
    [sym_type] = STATE(535),
    [sym__generic_type_constructor] = STATE(334),
    [sym_tupling_constructor] = STATE(323),
    [sym_tuple] = STATE(334),
    [sym_list] = STATE(334),
    [sym_parenthesized_constructor] = STATE(334),
    [sym_variable_identifier] = STATE(335),
    [sym__type_constructors] = STATE(323),
    [sym_qualified_type_constructor] = STATE(330),
    [anon_sym_LPAREN] = ACTIONS(615),
    [anon_sym_LBRACK] = ACTIONS(619),
    [sym_unit_type] = ACTIONS(621),
    [sym_list_constructor] = ACTIONS(621),
    [sym_function_constructor] = ACTIONS(621),
    [sym__variable_pattern] = ACTIONS(257),
    [sym__constructor_pattern] = ACTIONS(629),
    [sym_module_identifier] = ACTIONS(631),
    [sym_comment] = ACTIONS(5),
  },
  [452] = {
    [sym_type] = STATE(538),
    [sym__generic_type_constructor] = STATE(334),
    [sym_tupling_constructor] = STATE(323),
    [sym_tuple] = STATE(334),
    [sym_list] = STATE(334),
    [sym_parenthesized_constructor] = STATE(334),
    [sym_variable_identifier] = STATE(335),
    [sym__type_constructors] = STATE(323),
    [sym_qualified_type_constructor] = STATE(330),
    [anon_sym_LPAREN] = ACTIONS(615),
    [anon_sym_LBRACK] = ACTIONS(619),
    [sym_unit_type] = ACTIONS(621),
    [sym_list_constructor] = ACTIONS(621),
    [sym_function_constructor] = ACTIONS(621),
    [sym__variable_pattern] = ACTIONS(257),
    [sym__constructor_pattern] = ACTIONS(629),
    [sym_module_identifier] = ACTIONS(631),
    [sym_comment] = ACTIONS(5),
  },
  [453] = {
    [sym__layout_semicolon] = ACTIONS(1210),
    [anon_sym_SEMI] = ACTIONS(1212),
    [anon_sym_DASH_GT] = ACTIONS(1212),
    [sym_comment] = ACTIONS(5),
  },
  [454] = {
    [anon_sym_LPAREN] = ACTIONS(1214),
    [anon_sym_LBRACK] = ACTIONS(1214),
    [anon_sym_RBRACK] = ACTIONS(1214),
    [sym_unit_type] = ACTIONS(1214),
    [sym_list_constructor] = ACTIONS(1214),
    [sym_function_constructor] = ACTIONS(1214),
    [sym__variable_pattern] = ACTIONS(1214),
    [sym__constructor_pattern] = ACTIONS(1216),
    [sym_module_identifier] = ACTIONS(1216),
    [sym_comment] = ACTIONS(5),
  },
  [455] = {
    [sym__layout_semicolon] = ACTIONS(797),
    [anon_sym_SEMI] = ACTIONS(741),
    [anon_sym_DASH_GT] = ACTIONS(741),
    [sym__variable_pattern] = ACTIONS(741),
    [sym_comment] = ACTIONS(5),
  },
  [456] = {
    [sym__constructor_pattern] = ACTIONS(1218),
    [anon_sym_DOT] = ACTIONS(1220),
    [sym_comment] = ACTIONS(5),
  },
  [457] = {
    [sym_variable_identifier] = STATE(338),
    [aux_sym_type_class_repeat1] = STATE(540),
    [sym__layout_semicolon] = ACTIONS(1222),
    [anon_sym_SEMI] = ACTIONS(1224),
    [anon_sym_DASH_GT] = ACTIONS(1224),
    [sym__variable_pattern] = ACTIONS(803),
    [sym_comment] = ACTIONS(5),
  },
  [458] = {
    [sym_variable_identifier] = STATE(455),
    [sym__layout_semicolon] = ACTIONS(1222),
    [anon_sym_SEMI] = ACTIONS(1224),
    [anon_sym_DASH_GT] = ACTIONS(1224),
    [sym__variable_pattern] = ACTIONS(803),
    [sym_comment] = ACTIONS(5),
  },
  [459] = {
    [sym_constructor_identifier] = STATE(542),
    [sym__constructor_pattern] = ACTIONS(641),
    [sym_module_identifier] = ACTIONS(1226),
    [sym_comment] = ACTIONS(5),
  },
  [460] = {
    [sym__layout_semicolon] = ACTIONS(1228),
    [anon_sym_SEMI] = ACTIONS(1230),
    [sym_comment] = ACTIONS(5),
  },
  [461] = {
    [sym__layout_semicolon] = ACTIONS(1232),
    [anon_sym_SEMI] = ACTIONS(1234),
    [sym_comment] = ACTIONS(5),
  },
  [462] = {
    [sym__layout_close_brace] = ACTIONS(327),
    [anon_sym_import] = ACTIONS(329),
    [anon_sym_foreign] = ACTIONS(329),
    [anon_sym_default] = ACTIONS(329),
    [anon_sym_class] = ACTIONS(329),
    [anon_sym_instance] = ACTIONS(329),
    [anon_sym_infixl] = ACTIONS(329),
    [anon_sym_infixr] = ACTIONS(329),
    [anon_sym_infix] = ACTIONS(329),
    [anon_sym_data] = ACTIONS(329),
    [anon_sym_newtype] = ACTIONS(329),
    [anon_sym_type] = ACTIONS(329),
    [sym__variable_pattern] = ACTIONS(331),
    [sym__constructor_pattern] = ACTIONS(331),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(331),
    [anon_sym_SQUOTE] = ACTIONS(329),
    [anon_sym_DQUOTE] = ACTIONS(329),
    [sym__integer_literal] = ACTIONS(329),
    [sym__octal_literal] = ACTIONS(329),
    [sym__hexidecimal_literal] = ACTIONS(329),
  },
  [463] = {
    [ts_builtin_sym_end] = ACTIONS(1236),
    [sym_comment] = ACTIONS(5),
  },
  [464] = {
    [sym__layout_semicolon] = ACTIONS(1238),
    [anon_sym_SEMI] = ACTIONS(1240),
    [sym_comment] = ACTIONS(5),
  },
  [465] = {
    [anon_sym_COMMA] = ACTIONS(1242),
    [anon_sym_RPAREN] = ACTIONS(1242),
    [sym_comment] = ACTIONS(5),
  },
  [466] = {
    [sym_export] = STATE(544),
    [sym__identifier] = STATE(214),
    [sym_variable_identifier] = STATE(112),
    [sym_constructor_identifier] = STATE(112),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [467] = {
    [anon_sym_where] = ACTIONS(1244),
    [sym_comment] = ACTIONS(5),
  },
  [468] = {
    [anon_sym_RPAREN] = ACTIONS(1246),
    [sym_comment] = ACTIONS(5),
  },
  [469] = {
    [aux_sym_export_repeat1] = STATE(546),
    [anon_sym_COMMA] = ACTIONS(425),
    [anon_sym_RPAREN] = ACTIONS(1246),
    [sym_comment] = ACTIONS(5),
  },
  [470] = {
    [sym__layout_semicolon] = ACTIONS(1248),
    [anon_sym_SEMI] = ACTIONS(1250),
    [sym_comment] = ACTIONS(5),
  },
  [471] = {
    [anon_sym_RPAREN] = ACTIONS(1252),
    [sym_comment] = ACTIONS(5),
  },
  [472] = {
    [aux_sym_export_repeat1] = STATE(548),
    [anon_sym_COMMA] = ACTIONS(425),
    [anon_sym_RPAREN] = ACTIONS(1252),
    [sym_comment] = ACTIONS(5),
  },
  [473] = {
    [anon_sym_LPAREN] = ACTIONS(1254),
    [anon_sym_COMMA] = ACTIONS(1256),
    [anon_sym_RPAREN] = ACTIONS(1256),
    [sym_comment] = ACTIONS(5),
  },
  [474] = {
    [sym__identifier] = STATE(550),
    [sym_variable_identifier] = STATE(112),
    [sym_constructor_identifier] = STATE(112),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [475] = {
    [sym__layout_semicolon] = ACTIONS(1258),
    [anon_sym_SEMI] = ACTIONS(1260),
    [sym_comment] = ACTIONS(5),
  },
  [476] = {
    [sym__identifier] = STATE(552),
    [sym_variable_identifier] = STATE(112),
    [sym_constructor_identifier] = STATE(112),
    [anon_sym_DOT_DOT] = ACTIONS(1262),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [477] = {
    [anon_sym_COMMA] = ACTIONS(1002),
    [anon_sym_RPAREN] = ACTIONS(1264),
    [sym_comment] = ACTIONS(5),
  },
  [478] = {
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
  [479] = {
    [sym__layout_semicolon] = ACTIONS(1266),
    [anon_sym_SEMI] = ACTIONS(1268),
    [sym_comment] = ACTIONS(5),
  },
  [480] = {
    [anon_sym_COMMA] = ACTIONS(1270),
    [anon_sym_RPAREN] = ACTIONS(1270),
    [sym_comment] = ACTIONS(5),
  },
  [481] = {
    [anon_sym_COMMA] = ACTIONS(1272),
    [anon_sym_RPAREN] = ACTIONS(1272),
    [sym_comment] = ACTIONS(5),
  },
  [482] = {
    [sym__constructor_pattern] = ACTIONS(1274),
    [sym_comment] = ACTIONS(5),
  },
  [483] = {
    [sym__layout_semicolon] = ACTIONS(1276),
    [anon_sym_SEMI] = ACTIONS(1278),
    [sym_comment] = ACTIONS(5),
  },
  [484] = {
    [sym__layout_close_brace] = ACTIONS(1280),
    [anon_sym_infixl] = ACTIONS(1282),
    [anon_sym_infixr] = ACTIONS(1282),
    [anon_sym_infix] = ACTIONS(1282),
    [sym__variable_pattern] = ACTIONS(1284),
    [sym__constructor_pattern] = ACTIONS(1284),
    [sym_comment] = ACTIONS(5),
  },
  [485] = {
    [sym__layout_semicolon] = ACTIONS(1286),
    [anon_sym_SEMI] = ACTIONS(1288),
    [sym_comment] = ACTIONS(5),
  },
  [486] = {
    [sym__layout_semicolon] = ACTIONS(1290),
    [anon_sym_SEMI] = ACTIONS(1292),
    [sym_comment] = ACTIONS(5),
  },
  [487] = {
    [anon_sym_RBRACE] = ACTIONS(1282),
    [anon_sym_infixl] = ACTIONS(1282),
    [anon_sym_infixr] = ACTIONS(1282),
    [anon_sym_infix] = ACTIONS(1282),
    [sym__variable_pattern] = ACTIONS(1284),
    [sym__constructor_pattern] = ACTIONS(1284),
    [sym_comment] = ACTIONS(5),
  },
  [488] = {
    [sym__layout_semicolon] = ACTIONS(1294),
    [anon_sym_SEMI] = ACTIONS(1296),
    [sym_comment] = ACTIONS(5),
  },
  [489] = {
    [sym__layout_semicolon] = ACTIONS(1298),
    [anon_sym_SEMI] = ACTIONS(1300),
    [sym_comment] = ACTIONS(5),
  },
  [490] = {
    [sym__layout_semicolon] = ACTIONS(1302),
    [anon_sym_SEMI] = ACTIONS(1304),
    [sym_comment] = ACTIONS(5),
  },
  [491] = {
    [sym__layout_semicolon] = ACTIONS(1306),
    [anon_sym_SEMI] = ACTIONS(1308),
    [sym_comment] = ACTIONS(5),
  },
  [492] = {
    [anon_sym_COMMA] = ACTIONS(719),
    [anon_sym_RPAREN] = ACTIONS(1310),
    [sym_comment] = ACTIONS(5),
  },
  [493] = {
    [sym__layout_semicolon] = ACTIONS(1312),
    [anon_sym_SEMI] = ACTIONS(1314),
    [anon_sym_PIPE] = ACTIONS(1314),
    [anon_sym_deriving] = ACTIONS(1314),
    [sym_comment] = ACTIONS(5),
  },
  [494] = {
    [sym__layout_semicolon] = ACTIONS(1316),
    [anon_sym_SEMI] = ACTIONS(1318),
    [anon_sym_PIPE] = ACTIONS(1318),
    [anon_sym_deriving] = ACTIONS(1318),
    [sym_comment] = ACTIONS(5),
  },
  [495] = {
    [sym_field] = STATE(557),
    [sym_variable_identifier] = STATE(392),
    [sym__variable_pattern] = ACTIONS(623),
    [sym_comment] = ACTIONS(5),
  },
  [496] = {
    [anon_sym_RBRACE] = ACTIONS(1320),
    [anon_sym_COMMA] = ACTIONS(1322),
    [sym_comment] = ACTIONS(5),
  },
  [497] = {
    [sym_variable_identifier] = STATE(560),
    [sym__variable_pattern] = ACTIONS(623),
    [sym_comment] = ACTIONS(5),
  },
  [498] = {
    [sym_strict] = STATE(562),
    [sym__identifier] = STATE(562),
    [sym_variable_identifier] = STATE(112),
    [sym_constructor_identifier] = STATE(112),
    [anon_sym_BANG] = ACTIONS(1324),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [499] = {
    [anon_sym_COMMA] = ACTIONS(1326),
    [anon_sym_COLON_COLON] = ACTIONS(1328),
    [sym_comment] = ACTIONS(5),
  },
  [500] = {
    [sym__layout_semicolon] = ACTIONS(1330),
    [anon_sym_SEMI] = ACTIONS(1332),
    [sym_comment] = ACTIONS(5),
  },
  [501] = {
    [sym__layout_close_brace] = ACTIONS(1334),
    [anon_sym_do] = ACTIONS(1336),
    [sym__variable_pattern] = ACTIONS(1338),
    [sym__constructor_pattern] = ACTIONS(1338),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1338),
    [anon_sym_SQUOTE] = ACTIONS(1336),
    [anon_sym_DQUOTE] = ACTIONS(1336),
    [sym__integer_literal] = ACTIONS(1336),
    [sym__octal_literal] = ACTIONS(1336),
    [sym__hexidecimal_literal] = ACTIONS(1336),
  },
  [502] = {
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
  [503] = {
    [sym__graphic] = STATE(565),
    [sym__small] = STATE(65),
    [sym__large] = STATE(65),
    [sym__symbol] = STATE(65),
    [sym__special] = STATE(65),
    [sym__escape] = STATE(565),
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
    [anon_sym_SQUOTE] = ACTIONS(1340),
    [anon_sym_DQUOTE] = ACTIONS(1340),
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
    [sym__space] = ACTIONS(1340),
  },
  [504] = {
    [sym__gap] = STATE(71),
    [sym__graphic] = STATE(71),
    [sym__small] = STATE(73),
    [sym__large] = STATE(73),
    [sym__symbol] = STATE(73),
    [sym__special] = STATE(73),
    [sym__escape] = STATE(71),
    [aux_sym_string_repeat1] = STATE(567),
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
    [anon_sym_DQUOTE] = ACTIONS(1342),
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
  [505] = {
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
  [506] = {
    [sym__layout_semicolon] = ACTIONS(851),
    [anon_sym_SEMI] = ACTIONS(853),
    [sym__variable_pattern] = ACTIONS(853),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(855),
    [anon_sym_SQUOTE] = ACTIONS(853),
    [anon_sym_DQUOTE] = ACTIONS(853),
    [sym__integer_literal] = ACTIONS(853),
    [sym__octal_literal] = ACTIONS(853),
    [sym__hexidecimal_literal] = ACTIONS(853),
  },
  [507] = {
    [sym__literal] = STATE(568),
    [sym_variable_identifier] = STATE(568),
    [sym_integer] = STATE(502),
    [sym_char] = STATE(502),
    [sym_string] = STATE(502),
    [sym__layout_semicolon] = ACTIONS(857),
    [anon_sym_SEMI] = ACTIONS(859),
    [sym__variable_pattern] = ACTIONS(803),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1118),
    [anon_sym_SQUOTE] = ACTIONS(1120),
    [anon_sym_DQUOTE] = ACTIONS(1122),
    [sym__integer_literal] = ACTIONS(1124),
    [sym__octal_literal] = ACTIONS(1124),
    [sym__hexidecimal_literal] = ACTIONS(1124),
  },
  [508] = {
    [sym__layout_semicolon] = ACTIONS(1344),
    [anon_sym_SEMI] = ACTIONS(1346),
    [anon_sym_do] = ACTIONS(1346),
    [sym__variable_pattern] = ACTIONS(1348),
    [sym__constructor_pattern] = ACTIONS(1348),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1348),
    [anon_sym_SQUOTE] = ACTIONS(1346),
    [anon_sym_DQUOTE] = ACTIONS(1346),
    [sym__integer_literal] = ACTIONS(1346),
    [sym__octal_literal] = ACTIONS(1346),
    [sym__hexidecimal_literal] = ACTIONS(1346),
  },
  [509] = {
    [sym__layout_close_brace] = ACTIONS(1350),
    [anon_sym_do] = ACTIONS(1352),
    [sym__variable_pattern] = ACTIONS(1354),
    [sym__constructor_pattern] = ACTIONS(1354),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1354),
    [anon_sym_SQUOTE] = ACTIONS(1352),
    [anon_sym_DQUOTE] = ACTIONS(1352),
    [sym__integer_literal] = ACTIONS(1352),
    [sym__octal_literal] = ACTIONS(1352),
    [sym__hexidecimal_literal] = ACTIONS(1352),
  },
  [510] = {
    [anon_sym_RBRACE] = ACTIONS(1336),
    [anon_sym_do] = ACTIONS(1336),
    [sym__variable_pattern] = ACTIONS(1338),
    [sym__constructor_pattern] = ACTIONS(1338),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1338),
    [anon_sym_SQUOTE] = ACTIONS(1336),
    [anon_sym_DQUOTE] = ACTIONS(1336),
    [sym__integer_literal] = ACTIONS(1336),
    [sym__octal_literal] = ACTIONS(1336),
    [sym__hexidecimal_literal] = ACTIONS(1336),
  },
  [511] = {
    [anon_sym_RBRACE] = ACTIONS(1352),
    [anon_sym_do] = ACTIONS(1352),
    [sym__variable_pattern] = ACTIONS(1354),
    [sym__constructor_pattern] = ACTIONS(1354),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1354),
    [anon_sym_SQUOTE] = ACTIONS(1352),
    [anon_sym_DQUOTE] = ACTIONS(1352),
    [sym__integer_literal] = ACTIONS(1352),
    [sym__octal_literal] = ACTIONS(1352),
    [sym__hexidecimal_literal] = ACTIONS(1352),
  },
  [512] = {
    [anon_sym_COMMA] = ACTIONS(1356),
    [anon_sym_RPAREN] = ACTIONS(1356),
    [sym_comment] = ACTIONS(5),
  },
  [513] = {
    [anon_sym_LPAREN] = ACTIONS(753),
    [anon_sym_TILDE] = ACTIONS(753),
    [anon_sym_LBRACK] = ACTIONS(753),
    [anon_sym_DASH] = ACTIONS(753),
    [anon_sym__] = ACTIONS(753),
    [sym_list_constructor] = ACTIONS(753),
    [sym__variable_pattern] = ACTIONS(1358),
    [sym__constructor_pattern] = ACTIONS(1358),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1358),
    [anon_sym_SQUOTE] = ACTIONS(753),
    [anon_sym_DQUOTE] = ACTIONS(753),
    [sym__integer_literal] = ACTIONS(753),
    [sym__octal_literal] = ACTIONS(753),
    [sym__hexidecimal_literal] = ACTIONS(753),
  },
  [514] = {
    [anon_sym_LPAREN] = ACTIONS(757),
    [anon_sym_TILDE] = ACTIONS(757),
    [anon_sym_LBRACK] = ACTIONS(757),
    [anon_sym_DASH] = ACTIONS(757),
    [anon_sym__] = ACTIONS(757),
    [anon_sym_COLON] = ACTIONS(757),
    [sym_list_constructor] = ACTIONS(757),
    [anon_sym_BANG] = ACTIONS(757),
    [sym__variable_pattern] = ACTIONS(1360),
    [sym__constructor_pattern] = ACTIONS(1360),
    [anon_sym_DOT] = ACTIONS(757),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1360),
    [anon_sym_SQUOTE] = ACTIONS(757),
    [anon_sym_DQUOTE] = ACTIONS(757),
    [anon_sym_POUND] = ACTIONS(757),
    [anon_sym_DOLLAR] = ACTIONS(757),
    [anon_sym_PERCENT] = ACTIONS(757),
    [anon_sym_AMP] = ACTIONS(757),
    [anon_sym_1] = ACTIONS(757),
    [anon_sym_PLUS] = ACTIONS(757),
    [anon_sym_SLASH] = ACTIONS(757),
    [anon_sym_LT] = ACTIONS(757),
    [anon_sym_GT] = ACTIONS(757),
    [anon_sym_QMARK] = ACTIONS(757),
    [anon_sym_CARET] = ACTIONS(757),
    [sym__integer_literal] = ACTIONS(757),
    [sym__octal_literal] = ACTIONS(757),
    [sym__hexidecimal_literal] = ACTIONS(757),
  },
  [515] = {
    [anon_sym_LPAREN] = ACTIONS(769),
    [anon_sym_TILDE] = ACTIONS(769),
    [anon_sym_LBRACK] = ACTIONS(769),
    [anon_sym_DASH] = ACTIONS(769),
    [anon_sym__] = ACTIONS(769),
    [sym_list_constructor] = ACTIONS(769),
    [anon_sym_BANG] = ACTIONS(769),
    [sym__variable_pattern] = ACTIONS(1362),
    [sym__constructor_pattern] = ACTIONS(1362),
    [anon_sym_DOT] = ACTIONS(769),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1362),
    [anon_sym_SQUOTE] = ACTIONS(769),
    [anon_sym_DQUOTE] = ACTIONS(769),
    [anon_sym_POUND] = ACTIONS(769),
    [anon_sym_DOLLAR] = ACTIONS(769),
    [anon_sym_PERCENT] = ACTIONS(769),
    [anon_sym_AMP] = ACTIONS(769),
    [anon_sym_1] = ACTIONS(769),
    [anon_sym_PLUS] = ACTIONS(769),
    [anon_sym_SLASH] = ACTIONS(769),
    [anon_sym_LT] = ACTIONS(769),
    [anon_sym_GT] = ACTIONS(769),
    [anon_sym_QMARK] = ACTIONS(769),
    [anon_sym_CARET] = ACTIONS(769),
    [sym__integer_literal] = ACTIONS(769),
    [sym__octal_literal] = ACTIONS(769),
    [sym__hexidecimal_literal] = ACTIONS(769),
  },
  [516] = {
    [sym__op] = STATE(300),
    [sym_variable_symbol] = STATE(301),
    [sym_constructor_symbol] = STATE(301),
    [sym__variable_symbol] = STATE(302),
    [anon_sym_COMMA] = ACTIONS(1364),
    [anon_sym_RPAREN] = ACTIONS(1364),
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
  [517] = {
    [anon_sym_COMMA] = ACTIONS(1364),
    [anon_sym_RPAREN] = ACTIONS(1364),
    [sym_comment] = ACTIONS(5),
  },
  [518] = {
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
  [519] = {
    [anon_sym_RBRACE] = ACTIONS(1366),
    [anon_sym_COMMA] = ACTIONS(1366),
    [sym_comment] = ACTIONS(5),
  },
  [520] = {
    [sym_label] = STATE(569),
    [sym__identifier] = STATE(319),
    [sym_variable_identifier] = STATE(112),
    [sym_constructor_identifier] = STATE(112),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [521] = {
    [anon_sym_RBRACE] = ACTIONS(1368),
    [anon_sym_COMMA] = ACTIONS(1368),
    [sym_comment] = ACTIONS(5),
  },
  [522] = {
    [anon_sym_LPAREN] = ACTIONS(1180),
    [anon_sym_COMMA] = ACTIONS(1180),
    [anon_sym_RPAREN] = ACTIONS(1180),
    [anon_sym_LBRACK] = ACTIONS(1180),
    [anon_sym_RBRACK] = ACTIONS(1180),
    [anon_sym_DASH_GT] = ACTIONS(1180),
    [sym_unit_type] = ACTIONS(1180),
    [sym_list_constructor] = ACTIONS(1180),
    [sym_function_constructor] = ACTIONS(1180),
    [sym__variable_pattern] = ACTIONS(1180),
    [sym__constructor_pattern] = ACTIONS(1370),
    [sym_module_identifier] = ACTIONS(1370),
    [sym_comment] = ACTIONS(5),
  },
  [523] = {
    [anon_sym_COMMA] = ACTIONS(1182),
    [anon_sym_RPAREN] = ACTIONS(1372),
    [sym_comment] = ACTIONS(5),
  },
  [524] = {
    [anon_sym_LPAREN] = ACTIONS(1197),
    [anon_sym_COMMA] = ACTIONS(1197),
    [anon_sym_RPAREN] = ACTIONS(1197),
    [anon_sym_LBRACK] = ACTIONS(1197),
    [anon_sym_RBRACK] = ACTIONS(1197),
    [anon_sym_DASH_GT] = ACTIONS(1197),
    [sym_unit_type] = ACTIONS(1197),
    [sym_list_constructor] = ACTIONS(1197),
    [sym_function_constructor] = ACTIONS(1197),
    [sym__variable_pattern] = ACTIONS(1197),
    [sym__constructor_pattern] = ACTIONS(1374),
    [sym_module_identifier] = ACTIONS(1374),
    [sym_comment] = ACTIONS(5),
  },
  [525] = {
    [anon_sym_COMMA] = ACTIONS(1200),
    [anon_sym_RPAREN] = ACTIONS(1377),
    [sym_comment] = ACTIONS(5),
  },
  [526] = {
    [anon_sym_COMMA] = ACTIONS(1379),
    [anon_sym_RPAREN] = ACTIONS(1379),
    [sym_comment] = ACTIONS(5),
  },
  [527] = {
    [sym__layout_semicolon] = ACTIONS(1381),
    [anon_sym_SEMI] = ACTIONS(1383),
    [anon_sym_DASH_GT] = ACTIONS(1383),
    [sym_comment] = ACTIONS(5),
  },
  [528] = {
    [anon_sym_LPAREN] = ACTIONS(1212),
    [anon_sym_COMMA] = ACTIONS(1212),
    [anon_sym_RPAREN] = ACTIONS(1212),
    [anon_sym_LBRACK] = ACTIONS(1212),
    [anon_sym_RBRACK] = ACTIONS(1212),
    [anon_sym_DASH_GT] = ACTIONS(1212),
    [sym_unit_type] = ACTIONS(1212),
    [sym_list_constructor] = ACTIONS(1212),
    [sym_function_constructor] = ACTIONS(1212),
    [sym__variable_pattern] = ACTIONS(1212),
    [sym__constructor_pattern] = ACTIONS(1385),
    [sym_module_identifier] = ACTIONS(1385),
    [sym_comment] = ACTIONS(5),
  },
  [529] = {
    [sym_variable_identifier] = STATE(152),
    [aux_sym_type_class_repeat1] = STATE(572),
    [anon_sym_LPAREN] = ACTIONS(1224),
    [anon_sym_COMMA] = ACTIONS(1224),
    [anon_sym_RPAREN] = ACTIONS(1224),
    [anon_sym_LBRACK] = ACTIONS(1224),
    [anon_sym_RBRACK] = ACTIONS(1224),
    [anon_sym_DASH_GT] = ACTIONS(1224),
    [sym_unit_type] = ACTIONS(1224),
    [sym_list_constructor] = ACTIONS(1224),
    [sym_function_constructor] = ACTIONS(1224),
    [sym__variable_pattern] = ACTIONS(257),
    [sym__constructor_pattern] = ACTIONS(1387),
    [sym_module_identifier] = ACTIONS(1387),
    [sym_comment] = ACTIONS(5),
  },
  [530] = {
    [sym_variable_identifier] = STATE(271),
    [anon_sym_LPAREN] = ACTIONS(1224),
    [anon_sym_COMMA] = ACTIONS(1224),
    [anon_sym_RPAREN] = ACTIONS(1224),
    [anon_sym_LBRACK] = ACTIONS(1224),
    [anon_sym_RBRACK] = ACTIONS(1224),
    [anon_sym_DASH_GT] = ACTIONS(1224),
    [sym_unit_type] = ACTIONS(1224),
    [sym_list_constructor] = ACTIONS(1224),
    [sym_function_constructor] = ACTIONS(1224),
    [sym__variable_pattern] = ACTIONS(257),
    [sym__constructor_pattern] = ACTIONS(1387),
    [sym_module_identifier] = ACTIONS(1387),
    [sym_comment] = ACTIONS(5),
  },
  [531] = {
    [sym_constructor_identifier] = STATE(573),
    [sym__constructor_pattern] = ACTIONS(69),
    [sym_module_identifier] = ACTIONS(1226),
    [sym_comment] = ACTIONS(5),
  },
  [532] = {
    [anon_sym_COMMA] = ACTIONS(1389),
    [anon_sym_RPAREN] = ACTIONS(1389),
    [sym_comment] = ACTIONS(5),
  },
  [533] = {
    [sym_type] = STATE(574),
    [sym__generic_type_constructor] = STATE(327),
    [sym_tupling_constructor] = STATE(323),
    [sym_tuple] = STATE(327),
    [sym_list] = STATE(327),
    [sym_parenthesized_constructor] = STATE(327),
    [sym_variable_identifier] = STATE(329),
    [sym__type_constructors] = STATE(323),
    [sym_qualified_type_constructor] = STATE(330),
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
  [534] = {
    [sym__layout_semicolon] = ACTIONS(1391),
    [anon_sym_SEMI] = ACTIONS(1393),
    [anon_sym_DASH_GT] = ACTIONS(1393),
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
    [sym__constructor_pattern] = ACTIONS(1395),
    [sym_module_identifier] = ACTIONS(1395),
    [sym_comment] = ACTIONS(5),
  },
  [536] = {
    [anon_sym_LPAREN] = ACTIONS(1397),
    [anon_sym_LBRACK] = ACTIONS(1397),
    [sym_unit_type] = ACTIONS(1397),
    [sym_list_constructor] = ACTIONS(1397),
    [sym_function_constructor] = ACTIONS(1397),
    [sym__variable_pattern] = ACTIONS(1397),
    [sym__constructor_pattern] = ACTIONS(1022),
    [sym_module_identifier] = ACTIONS(1022),
    [sym_comment] = ACTIONS(5),
  },
  [537] = {
    [anon_sym_EQ_GT] = ACTIONS(1399),
    [sym_comment] = ACTIONS(5),
  },
  [538] = {
    [anon_sym_LPAREN] = ACTIONS(1234),
    [anon_sym_COMMA] = ACTIONS(1234),
    [anon_sym_RPAREN] = ACTIONS(1234),
    [anon_sym_LBRACK] = ACTIONS(1234),
    [anon_sym_RBRACK] = ACTIONS(1234),
    [sym_unit_type] = ACTIONS(1234),
    [sym_list_constructor] = ACTIONS(1234),
    [sym_function_constructor] = ACTIONS(1234),
    [sym__variable_pattern] = ACTIONS(1234),
    [sym__constructor_pattern] = ACTIONS(1401),
    [sym_module_identifier] = ACTIONS(1401),
    [sym_comment] = ACTIONS(5),
  },
  [539] = {
    [sym_constructor_identifier] = STATE(573),
    [sym__constructor_pattern] = ACTIONS(936),
    [sym_module_identifier] = ACTIONS(1226),
    [sym_comment] = ACTIONS(5),
  },
  [540] = {
    [sym_variable_identifier] = STATE(455),
    [sym__layout_semicolon] = ACTIONS(1403),
    [anon_sym_SEMI] = ACTIONS(1405),
    [anon_sym_DASH_GT] = ACTIONS(1405),
    [sym__variable_pattern] = ACTIONS(803),
    [sym_comment] = ACTIONS(5),
  },
  [541] = {
    [sym__constructor_pattern] = ACTIONS(1407),
    [anon_sym_DOT] = ACTIONS(1409),
    [sym_comment] = ACTIONS(5),
  },
  [542] = {
    [sym_variable_identifier] = STATE(338),
    [aux_sym_type_class_repeat1] = STATE(576),
    [sym__layout_semicolon] = ACTIONS(1403),
    [anon_sym_SEMI] = ACTIONS(1405),
    [anon_sym_DASH_GT] = ACTIONS(1405),
    [sym__variable_pattern] = ACTIONS(803),
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
    [anon_sym_COMMA] = ACTIONS(1411),
    [anon_sym_RPAREN] = ACTIONS(1411),
    [sym_comment] = ACTIONS(5),
  },
  [545] = {
    [anon_sym_COMMA] = ACTIONS(1413),
    [anon_sym_RPAREN] = ACTIONS(1413),
    [sym_comment] = ACTIONS(5),
  },
  [546] = {
    [anon_sym_COMMA] = ACTIONS(719),
    [anon_sym_RPAREN] = ACTIONS(1415),
    [sym_comment] = ACTIONS(5),
  },
  [547] = {
    [aux_sym_import_specification_repeat1] = STATE(579),
    [anon_sym_COMMA] = ACTIONS(701),
    [anon_sym_RPAREN] = ACTIONS(1417),
    [sym_comment] = ACTIONS(5),
  },
  [548] = {
    [anon_sym_COMMA] = ACTIONS(719),
    [anon_sym_RPAREN] = ACTIONS(1419),
    [sym_comment] = ACTIONS(5),
  },
  [549] = {
    [sym__identifier] = STATE(582),
    [sym_variable_identifier] = STATE(112),
    [sym_constructor_identifier] = STATE(112),
    [anon_sym_DOT_DOT] = ACTIONS(1421),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [550] = {
    [anon_sym_LPAREN] = ACTIONS(1423),
    [anon_sym_COMMA] = ACTIONS(1425),
    [anon_sym_RPAREN] = ACTIONS(1425),
    [sym_comment] = ACTIONS(5),
  },
  [551] = {
    [anon_sym_RPAREN] = ACTIONS(1419),
    [sym_comment] = ACTIONS(5),
  },
  [552] = {
    [aux_sym_export_repeat1] = STATE(584),
    [anon_sym_COMMA] = ACTIONS(425),
    [anon_sym_RPAREN] = ACTIONS(1419),
    [sym_comment] = ACTIONS(5),
  },
  [553] = {
    [sym__layout_semicolon] = ACTIONS(1427),
    [anon_sym_SEMI] = ACTIONS(1429),
    [sym_comment] = ACTIONS(5),
  },
  [554] = {
    [sym__layout_close_brace] = ACTIONS(1431),
    [anon_sym_infixl] = ACTIONS(1433),
    [anon_sym_infixr] = ACTIONS(1433),
    [anon_sym_infix] = ACTIONS(1433),
    [sym__variable_pattern] = ACTIONS(1435),
    [sym__constructor_pattern] = ACTIONS(1435),
    [sym_comment] = ACTIONS(5),
  },
  [555] = {
    [anon_sym_RBRACE] = ACTIONS(1433),
    [anon_sym_infixl] = ACTIONS(1433),
    [anon_sym_infixr] = ACTIONS(1433),
    [anon_sym_infix] = ACTIONS(1433),
    [sym__variable_pattern] = ACTIONS(1435),
    [sym__constructor_pattern] = ACTIONS(1435),
    [sym_comment] = ACTIONS(5),
  },
  [556] = {
    [sym__layout_semicolon] = ACTIONS(1437),
    [anon_sym_SEMI] = ACTIONS(1439),
    [sym_comment] = ACTIONS(5),
  },
  [557] = {
    [anon_sym_RBRACE] = ACTIONS(1441),
    [anon_sym_COMMA] = ACTIONS(1441),
    [sym_comment] = ACTIONS(5),
  },
  [558] = {
    [sym__layout_semicolon] = ACTIONS(1443),
    [anon_sym_SEMI] = ACTIONS(1445),
    [anon_sym_PIPE] = ACTIONS(1445),
    [anon_sym_deriving] = ACTIONS(1445),
    [sym_comment] = ACTIONS(5),
  },
  [559] = {
    [sym_field] = STATE(585),
    [sym_variable_identifier] = STATE(392),
    [sym__variable_pattern] = ACTIONS(623),
    [sym_comment] = ACTIONS(5),
  },
  [560] = {
    [anon_sym_COMMA] = ACTIONS(1447),
    [anon_sym_COLON_COLON] = ACTIONS(1447),
    [sym_comment] = ACTIONS(5),
  },
  [561] = {
    [sym__identifier] = STATE(586),
    [sym_variable_identifier] = STATE(112),
    [sym_constructor_identifier] = STATE(112),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [562] = {
    [anon_sym_RBRACE] = ACTIONS(1449),
    [anon_sym_COMMA] = ACTIONS(1449),
    [sym_comment] = ACTIONS(5),
  },
  [563] = {
    [sym_variable_identifier] = STATE(587),
    [sym__variable_pattern] = ACTIONS(623),
    [sym_comment] = ACTIONS(5),
  },
  [564] = {
    [sym_strict] = STATE(588),
    [sym__identifier] = STATE(588),
    [sym_variable_identifier] = STATE(112),
    [sym_constructor_identifier] = STATE(112),
    [anon_sym_BANG] = ACTIONS(1324),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [565] = {
    [sym_comment] = ACTIONS(5),
    [anon_sym_SQUOTE] = ACTIONS(1451),
  },
  [566] = {
    [sym__layout_semicolon] = ACTIONS(299),
    [anon_sym_SEMI] = ACTIONS(301),
    [sym__variable_pattern] = ACTIONS(301),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(303),
    [anon_sym_SQUOTE] = ACTIONS(301),
    [anon_sym_DQUOTE] = ACTIONS(301),
    [sym__integer_literal] = ACTIONS(301),
    [sym__octal_literal] = ACTIONS(301),
    [sym__hexidecimal_literal] = ACTIONS(301),
  },
  [567] = {
    [sym__gap] = STATE(166),
    [sym__graphic] = STATE(166),
    [sym__small] = STATE(73),
    [sym__large] = STATE(73),
    [sym__symbol] = STATE(73),
    [sym__special] = STATE(73),
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
    [anon_sym_SQUOTE] = ACTIONS(323),
    [anon_sym_DQUOTE] = ACTIONS(1453),
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
  [568] = {
    [sym__layout_semicolon] = ACTIONS(1134),
    [anon_sym_SEMI] = ACTIONS(1136),
    [sym__variable_pattern] = ACTIONS(1136),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(1138),
    [anon_sym_SQUOTE] = ACTIONS(1136),
    [anon_sym_DQUOTE] = ACTIONS(1136),
    [sym__integer_literal] = ACTIONS(1136),
    [sym__octal_literal] = ACTIONS(1136),
    [sym__hexidecimal_literal] = ACTIONS(1136),
  },
  [569] = {
    [anon_sym_RBRACE] = ACTIONS(1455),
    [anon_sym_COMMA] = ACTIONS(1455),
    [sym_comment] = ACTIONS(5),
  },
  [570] = {
    [anon_sym_LPAREN] = ACTIONS(1383),
    [anon_sym_COMMA] = ACTIONS(1383),
    [anon_sym_RPAREN] = ACTIONS(1383),
    [anon_sym_LBRACK] = ACTIONS(1383),
    [anon_sym_RBRACK] = ACTIONS(1383),
    [anon_sym_DASH_GT] = ACTIONS(1383),
    [sym_unit_type] = ACTIONS(1383),
    [sym_list_constructor] = ACTIONS(1383),
    [sym_function_constructor] = ACTIONS(1383),
    [sym__variable_pattern] = ACTIONS(1383),
    [sym__constructor_pattern] = ACTIONS(1457),
    [sym_module_identifier] = ACTIONS(1457),
    [sym_comment] = ACTIONS(5),
  },
  [571] = {
    [anon_sym_LPAREN] = ACTIONS(1393),
    [anon_sym_COMMA] = ACTIONS(1393),
    [anon_sym_RPAREN] = ACTIONS(1393),
    [anon_sym_LBRACK] = ACTIONS(1393),
    [anon_sym_RBRACK] = ACTIONS(1393),
    [anon_sym_DASH_GT] = ACTIONS(1393),
    [sym_unit_type] = ACTIONS(1393),
    [sym_list_constructor] = ACTIONS(1393),
    [sym_function_constructor] = ACTIONS(1393),
    [sym__variable_pattern] = ACTIONS(1393),
    [sym__constructor_pattern] = ACTIONS(1459),
    [sym_module_identifier] = ACTIONS(1459),
    [sym_comment] = ACTIONS(5),
  },
  [572] = {
    [sym_variable_identifier] = STATE(271),
    [anon_sym_LPAREN] = ACTIONS(1405),
    [anon_sym_COMMA] = ACTIONS(1405),
    [anon_sym_RPAREN] = ACTIONS(1405),
    [anon_sym_LBRACK] = ACTIONS(1405),
    [anon_sym_RBRACK] = ACTIONS(1405),
    [anon_sym_DASH_GT] = ACTIONS(1405),
    [sym_unit_type] = ACTIONS(1405),
    [sym_list_constructor] = ACTIONS(1405),
    [sym_function_constructor] = ACTIONS(1405),
    [sym__variable_pattern] = ACTIONS(257),
    [sym__constructor_pattern] = ACTIONS(1461),
    [sym_module_identifier] = ACTIONS(1461),
    [sym_comment] = ACTIONS(5),
  },
  [573] = {
    [sym_variable_identifier] = STATE(152),
    [aux_sym_type_class_repeat1] = STATE(591),
    [anon_sym_LPAREN] = ACTIONS(1405),
    [anon_sym_COMMA] = ACTIONS(1405),
    [anon_sym_RPAREN] = ACTIONS(1405),
    [anon_sym_LBRACK] = ACTIONS(1405),
    [anon_sym_RBRACK] = ACTIONS(1405),
    [anon_sym_DASH_GT] = ACTIONS(1405),
    [sym_unit_type] = ACTIONS(1405),
    [sym_list_constructor] = ACTIONS(1405),
    [sym_function_constructor] = ACTIONS(1405),
    [sym__variable_pattern] = ACTIONS(257),
    [sym__constructor_pattern] = ACTIONS(1461),
    [sym_module_identifier] = ACTIONS(1461),
    [sym_comment] = ACTIONS(5),
  },
  [574] = {
    [anon_sym_COMMA] = ACTIONS(1463),
    [anon_sym_RPAREN] = ACTIONS(1463),
    [sym_comment] = ACTIONS(5),
  },
  [575] = {
    [anon_sym_LPAREN] = ACTIONS(1465),
    [anon_sym_LBRACK] = ACTIONS(1465),
    [sym_unit_type] = ACTIONS(1465),
    [sym_list_constructor] = ACTIONS(1465),
    [sym_function_constructor] = ACTIONS(1465),
    [sym__variable_pattern] = ACTIONS(1465),
    [sym__constructor_pattern] = ACTIONS(1274),
    [sym_module_identifier] = ACTIONS(1274),
    [sym_comment] = ACTIONS(5),
  },
  [576] = {
    [sym_variable_identifier] = STATE(455),
    [sym__layout_semicolon] = ACTIONS(1467),
    [anon_sym_SEMI] = ACTIONS(1469),
    [anon_sym_DASH_GT] = ACTIONS(1469),
    [sym__variable_pattern] = ACTIONS(803),
    [sym_comment] = ACTIONS(5),
  },
  [577] = {
    [anon_sym_COMMA] = ACTIONS(1471),
    [anon_sym_RPAREN] = ACTIONS(1471),
    [sym_comment] = ACTIONS(5),
  },
  [578] = {
    [sym__layout_semicolon] = ACTIONS(1473),
    [anon_sym_SEMI] = ACTIONS(1475),
    [sym_comment] = ACTIONS(5),
  },
  [579] = {
    [anon_sym_COMMA] = ACTIONS(1002),
    [anon_sym_RPAREN] = ACTIONS(1477),
    [sym_comment] = ACTIONS(5),
  },
  [580] = {
    [aux_sym_import_specification_repeat1] = STATE(593),
    [anon_sym_COMMA] = ACTIONS(701),
    [anon_sym_RPAREN] = ACTIONS(1477),
    [sym_comment] = ACTIONS(5),
  },
  [581] = {
    [anon_sym_RPAREN] = ACTIONS(1479),
    [sym_comment] = ACTIONS(5),
  },
  [582] = {
    [aux_sym_export_repeat1] = STATE(595),
    [anon_sym_COMMA] = ACTIONS(425),
    [anon_sym_RPAREN] = ACTIONS(1479),
    [sym_comment] = ACTIONS(5),
  },
  [583] = {
    [sym__identifier] = STATE(597),
    [sym_variable_identifier] = STATE(112),
    [sym_constructor_identifier] = STATE(112),
    [anon_sym_DOT_DOT] = ACTIONS(1481),
    [sym__variable_pattern] = ACTIONS(201),
    [sym__constructor_pattern] = ACTIONS(57),
    [sym_comment] = ACTIONS(5),
  },
  [584] = {
    [anon_sym_COMMA] = ACTIONS(719),
    [anon_sym_RPAREN] = ACTIONS(1483),
    [sym_comment] = ACTIONS(5),
  },
  [585] = {
    [anon_sym_RBRACE] = ACTIONS(1485),
    [anon_sym_COMMA] = ACTIONS(1485),
    [sym_comment] = ACTIONS(5),
  },
  [586] = {
    [anon_sym_RBRACE] = ACTIONS(1076),
    [anon_sym_COMMA] = ACTIONS(1076),
    [sym_comment] = ACTIONS(5),
  },
  [587] = {
    [anon_sym_COMMA] = ACTIONS(1487),
    [anon_sym_COLON_COLON] = ACTIONS(1487),
    [sym_comment] = ACTIONS(5),
  },
  [588] = {
    [anon_sym_RBRACE] = ACTIONS(1489),
    [anon_sym_COMMA] = ACTIONS(1489),
    [sym_comment] = ACTIONS(5),
  },
  [589] = {
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
  [590] = {
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
  [591] = {
    [sym_variable_identifier] = STATE(271),
    [anon_sym_LPAREN] = ACTIONS(1469),
    [anon_sym_COMMA] = ACTIONS(1469),
    [anon_sym_RPAREN] = ACTIONS(1469),
    [anon_sym_LBRACK] = ACTIONS(1469),
    [anon_sym_RBRACK] = ACTIONS(1469),
    [anon_sym_DASH_GT] = ACTIONS(1469),
    [sym_unit_type] = ACTIONS(1469),
    [sym_list_constructor] = ACTIONS(1469),
    [sym_function_constructor] = ACTIONS(1469),
    [sym__variable_pattern] = ACTIONS(257),
    [sym__constructor_pattern] = ACTIONS(1491),
    [sym_module_identifier] = ACTIONS(1491),
    [sym_comment] = ACTIONS(5),
  },
  [592] = {
    [sym__layout_semicolon] = ACTIONS(1493),
    [anon_sym_SEMI] = ACTIONS(1495),
    [sym_comment] = ACTIONS(5),
  },
  [593] = {
    [anon_sym_COMMA] = ACTIONS(1002),
    [anon_sym_RPAREN] = ACTIONS(1497),
    [sym_comment] = ACTIONS(5),
  },
  [594] = {
    [anon_sym_COMMA] = ACTIONS(1499),
    [anon_sym_RPAREN] = ACTIONS(1499),
    [sym_comment] = ACTIONS(5),
  },
  [595] = {
    [anon_sym_COMMA] = ACTIONS(719),
    [anon_sym_RPAREN] = ACTIONS(1501),
    [sym_comment] = ACTIONS(5),
  },
  [596] = {
    [anon_sym_RPAREN] = ACTIONS(1501),
    [sym_comment] = ACTIONS(5),
  },
  [597] = {
    [aux_sym_export_repeat1] = STATE(601),
    [anon_sym_COMMA] = ACTIONS(425),
    [anon_sym_RPAREN] = ACTIONS(1501),
    [sym_comment] = ACTIONS(5),
  },
  [598] = {
    [aux_sym_import_specification_repeat1] = STATE(602),
    [anon_sym_COMMA] = ACTIONS(701),
    [anon_sym_RPAREN] = ACTIONS(1497),
    [sym_comment] = ACTIONS(5),
  },
  [599] = {
    [sym__layout_semicolon] = ACTIONS(1503),
    [anon_sym_SEMI] = ACTIONS(1505),
    [sym_comment] = ACTIONS(5),
  },
  [600] = {
    [anon_sym_COMMA] = ACTIONS(1507),
    [anon_sym_RPAREN] = ACTIONS(1507),
    [sym_comment] = ACTIONS(5),
  },
  [601] = {
    [anon_sym_COMMA] = ACTIONS(719),
    [anon_sym_RPAREN] = ACTIONS(1509),
    [sym_comment] = ACTIONS(5),
  },
  [602] = {
    [anon_sym_COMMA] = ACTIONS(1002),
    [anon_sym_RPAREN] = ACTIONS(1511),
    [sym_comment] = ACTIONS(5),
  },
  [603] = {
    [anon_sym_COMMA] = ACTIONS(1513),
    [anon_sym_RPAREN] = ACTIONS(1513),
    [sym_comment] = ACTIONS(5),
  },
  [604] = {
    [sym__layout_semicolon] = ACTIONS(1515),
    [anon_sym_SEMI] = ACTIONS(1517),
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
  [43] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(29),
  [45] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(30),
  [47] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(31),
  [49] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(32),
  [51] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(33),
  [53] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(34),
  [55] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(35),
  [57] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(36),
  [59] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(42),
  [61] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(43),
  [63] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(44),
  [65] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(45),
  [67] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(50),
  [69] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(54),
  [71] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_identifier, 1),
  [73] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_identifier, 1),
  [75] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_identifier, 1),
  [77] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_identifier, 1),
  [79] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_identifier, 1),
  [81] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(60),
  [83] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [85] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__literal, 1),
  [87] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [89] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(61),
  [91] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(62),
  [93] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(63),
  [95] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [97] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(64),
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
  [123] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer, 1),
  [125] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_integer, 1),
  [127] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_integer, 1),
  [129] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [131] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__declaration, 1),
  [133] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__declaration, 1),
  [135] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(78),
  [137] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(78),
  [139] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(79),
  [141] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(81),
  [143] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(82),
  [145] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(83),
  [147] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(84),
  [149] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(85),
  [151] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(86),
  [153] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(87),
  [155] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(88),
  [157] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(89),
  [159] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(90),
  [161] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__variable, 1, .fragile = true),
  [163] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__variable, 1, .fragile = true),
  [165] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__general_declaration, 1),
  [167] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__general_declaration, 1),
  [169] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(98),
  [171] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [173] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__identifier, 1),
  [175] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [177] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 1),
  [179] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(100),
  [181] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(101),
  [183] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(103),
  [185] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 2),
  [187] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 2),
  [189] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(104),
  [191] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(105),
  [193] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(106),
  [195] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreign_import, 1),
  [197] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(108),
  [199] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(110),
  [201] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(86),
  [203] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_identifier, 1),
  [205] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(116),
  [207] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(117),
  [209] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(118),
  [211] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(119),
  [213] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(123),
  [215] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__variable_symbol, 1),
  [217] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__variable_symbol, 1),
  [219] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 1),
  [221] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_symbol, 1),
  [223] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(126),
  [225] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fixity, 2),
  [227] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 2),
  [229] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(129),
  [231] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__op, 1),
  [233] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__op, 1),
  [235] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 1, .fragile = true),
  [237] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_symbol, 1, .fragile = true),
  [239] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 2),
  [241] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 2),
  [243] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(136),
  [245] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(137),
  [247] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 1, .fragile = true, .alias_sequence_id = 1),
  [249] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_simple_type, 1, .fragile = true, .alias_sequence_id = 1),
  [251] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(142),
  [253] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 1, .fragile = true, .alias_sequence_id = 1),
  [255] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(146),
  [257] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(147),
  [259] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(150),
  [261] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(151),
  [263] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_qualified_variable_identifier, 2),
  [265] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_qualified_variable_identifier, 2),
  [267] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__special, 1),
  [269] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__symbol, 1),
  [271] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__small, 1),
  [273] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(153),
  [275] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__graphic, 1),
  [277] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__large, 1),
  [279] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(154),
  [281] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(155),
  [283] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(156),
  [285] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(157),
  [287] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(158),
  [289] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(159),
  [291] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__special, 1),
  [293] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__symbol, 1),
  [295] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__small, 1),
  [297] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 1),
  [299] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [301] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 2),
  [303] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [305] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__graphic, 1),
  [307] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__large, 1),
  [309] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(160),
  [311] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(161),
  [313] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(162),
  [315] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(163),
  [317] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(164),
  [319] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(165),
  [321] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__gap, 1),
  [323] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(166),
  [325] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(167),
  [327] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
  [329] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 2),
  [331] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 2),
  [333] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_body, 1),
  [335] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_body, 1),
  [337] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(168),
  [339] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(169),
  [341] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(170),
  [343] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_declaration, 2),
  [345] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_declaration, 2),
  [347] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(176),
  [349] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(177),
  [351] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(178),
  [353] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(185),
  [355] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_wildcard, 1),
  [357] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_wildcard, 1),
  [359] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__function_pattern, 1),
  [361] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__function_pattern, 1),
  [363] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(189),
  [365] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(190),
  [367] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_function_head_repeat1, 1),
  [369] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_function_head_repeat1, 1),
  [371] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(192),
  [373] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(193),
  [375] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_head, 2),
  [377] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(196),
  [379] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(197),
  [381] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(198),
  [383] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(12),
  [385] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(199),
  [387] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(200),
  [389] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(208),
  [391] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(208),
  [393] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(209),
  [395] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(210),
  [397] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(212),
  [399] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(215),
  [401] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 3),
  [403] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 3),
  [405] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(216),
  [407] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(218),
  [409] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(220),
  [411] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(221),
  [413] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_calling_convention, 1),
  [415] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_calling_convention, 1),
  [417] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(222),
  [419] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(223),
  [421] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default, 3),
  [423] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_default, 3),
  [425] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(228),
  [427] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(229),
  [429] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(231),
  [431] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(232),
  [433] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(235),
  [435] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 2),
  [437] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(238),
  [439] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(239),
  [441] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_class_repeat1, 1, .fragile = true),
  [443] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class, 2),
  [445] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 1, .fragile = true),
  [447] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(243),
  [449] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(246),
  [451] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__constructor_symbol, 1),
  [453] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__constructor_symbol, 1),
  [455] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_symbol_repeat1, 1),
  [457] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_symbol_repeat1, 1),
  [459] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 2),
  [461] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor_symbol, 2),
  [463] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fixity, 3),
  [465] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 3),
  [467] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(249),
  [469] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 1),
  [471] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_variable_symbol_repeat1, 1),
  [473] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 2, .fragile = true),
  [475] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_variable_symbol, 2, .fragile = true),
  [477] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 3),
  [479] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 3),
  [481] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(252),
  [483] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(255),
  [485] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(257),
  [487] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructors, 1),
  [489] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructors, 1),
  [491] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(259),
  [493] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor, 1),
  [495] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor, 1),
  [497] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(261),
  [499] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(262),
  [501] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 1, .fragile = true),
  [503] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 2, .alias_sequence_id = 2),
  [505] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_simple_type, 2, .alias_sequence_id = 2),
  [507] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 2, .alias_sequence_id = 2),
  [509] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(268),
  [511] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(272),
  [513] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(273),
  [515] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [517] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_char, 3),
  [519] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [521] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__char_escape, 1),
  [523] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__escape, 2),
  [525] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(275),
  [527] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(277),
  [529] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(279),
  [531] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__ascii, 1),
  [533] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__char_escape, 1),
  [535] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 2),
  [537] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(281),
  [539] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(283),
  [541] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(285),
  [543] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 1),
  [545] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 2),
  [547] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [549] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 3),
  [551] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [553] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(287),
  [555] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(288),
  [557] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [559] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1),
  [561] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__expression, 1),
  [563] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__variable, 1, .fragile = true),
  [565] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_function_body_repeat1, 1),
  [567] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_function_body_repeat1, 1),
  [569] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_function_body_repeat1, 1),
  [571] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_function_body, 2),
  [573] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_function_body, 2),
  [575] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(294),
  [577] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(295),
  [579] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(296),
  [581] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(297),
  [583] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(298),
  [585] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(299),
  [587] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__pattern, 1),
  [589] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(304),
  [591] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(305),
  [593] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(306),
  [595] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(307),
  [597] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_irrefutable_pattern, 2),
  [599] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_irrefutable_pattern, 2),
  [601] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(311),
  [603] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(312),
  [605] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(313),
  [607] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(314),
  [609] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(316),
  [611] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_function_head_repeat1, 2),
  [613] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_function_head_repeat1, 2),
  [615] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(320),
  [617] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(321),
  [619] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(322),
  [621] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(323),
  [623] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(119),
  [625] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(324),
  [627] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(325),
  [629] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(331),
  [631] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(332),
  [633] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__generic_type_constructor, 1),
  [635] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__generic_type_constructor, 1),
  [637] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 1, .fragile = true, .alias_sequence_id = 1),
  [639] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type_constructors, 1, .fragile = true, .alias_sequence_id = 1),
  [641] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(340),
  [643] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(341),
  [645] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_signature, 3),
  [647] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_signature, 3),
  [649] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type, 1),
  [651] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type, 1),
  [653] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(344),
  [655] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(346),
  [657] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type, 1, .alias_sequence_id = 3),
  [659] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type, 1, .alias_sequence_id = 3),
  [661] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(347),
  [663] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 1, .fragile = true),
  [665] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type_constructors, 1, .fragile = true),
  [667] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 3),
  [669] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_repeat1, 3),
  [671] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_repeat1, 3),
  [673] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(348),
  [675] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(348),
  [677] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 4),
  [679] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 2),
  [681] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(352),
  [683] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(353),
  [685] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(355),
  [687] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 1),
  [689] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(357),
  [691] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 4),
  [693] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 4),
  [695] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 2),
  [697] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 2),
  [699] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(358),
  [701] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(359),
  [703] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(360),
  [705] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_safety, 1),
  [707] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_safety, 1),
  [709] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(364),
  [711] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreign, 4),
  [713] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreign, 4),
  [715] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default, 4),
  [717] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_default, 4),
  [719] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(369),
  [721] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(370),
  [723] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(372),
  [725] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(373),
  [727] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(374),
  [729] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(376),
  [731] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(377),
  [733] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(377),
  [735] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 4),
  [737] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 4),
  [739] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(382),
  [741] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_type_class_repeat1, 2),
  [743] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 2),
  [745] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(384),
  [747] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class_instance, 4),
  [749] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class_instance, 4),
  [751] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__op, 3),
  [753] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__op, 3),
  [755] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_symbol_repeat1, 2),
  [757] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_symbol_repeat1, 2),
  [759] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_fixity_repeat1, 2),
  [761] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fixity_repeat1, 2),
  [763] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fixity, 4),
  [765] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fixity, 4),
  [767] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 2),
  [769] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_variable_symbol_repeat1, 2),
  [771] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 4),
  [773] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 4),
  [775] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 2),
  [777] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 2),
  [779] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructors, 2),
  [781] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructors, 2),
  [783] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(390),
  [785] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(142),
  [787] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 1),
  [789] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat1, 1),
  [791] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 1),
  [793] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructor, 2),
  [795] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructor, 2),
  [797] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_type_class_repeat1, 2),
  [799] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 4),
  [801] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 4),
  [803] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(337),
  [805] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_synonym, 4),
  [807] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_synonym, 4),
  [809] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__cntrl, 1),
  [811] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__ascii, 2),
  [813] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat1, 1),
  [815] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__escape, 3),
  [817] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(398),
  [819] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat2, 1),
  [821] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(399),
  [823] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__cntrl, 1),
  [825] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 2),
  [827] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 1),
  [829] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 3),
  [831] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(400),
  [833] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 1),
  [835] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(401),
  [837] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(402),
  [839] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(403),
  [841] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(402),
  [843] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_do_expression, 2),
  [845] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_do_expression, 2),
  [847] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_do_expression, 2),
  [849] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_variable_identifier, 2),
  [851] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_general_constructor_repeat1, 1, .fragile = true),
  [853] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_general_constructor_repeat1, 1, .fragile = true),
  [855] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_general_constructor_repeat1, 1, .fragile = true),
  [857] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_general_constructor, 2),
  [859] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_general_constructor, 2),
  [861] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_general_constructor, 2),
  [863] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_function_body_repeat1, 2),
  [865] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_function_body_repeat1, 2),
  [867] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_function_body_repeat1, 2),
  [869] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_parenthesized_pattern, 3),
  [871] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_parenthesized_pattern, 3),
  [873] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__variable_symbol, 1),
  [875] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(416),
  [877] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 1),
  [879] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__op, 1),
  [881] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 1, .fragile = true),
  [883] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(423),
  [885] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(424),
  [887] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(425),
  [889] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_general_constructor_repeat1, 1, .fragile = true), REDUCE(aux_sym_type_class_repeat1, 1, .fragile = true),
  [892] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list_pattern, 3),
  [894] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_list_pattern, 3),
  [896] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_as_pattern, 3),
  [898] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_as_pattern, 3),
  [900] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__function_pattern, 3),
  [902] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__function_pattern, 3),
  [904] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(427),
  [906] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_labels, 1),
  [908] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(428),
  [910] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(430),
  [912] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(431),
  [914] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(433),
  [916] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(434),
  [918] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__generic_type_constructor, 1),
  [920] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(438),
  [922] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(441),
  [924] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(442),
  [926] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(444),
  [928] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(445),
  [930] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(447),
  [932] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 1, .fragile = true),
  [934] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 1, .fragile = true, .alias_sequence_id = 1),
  [936] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(448),
  [938] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(449),
  [940] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_list_repeat1, 1),
  [942] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_list_repeat1, 1),
  [944] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(451),
  [946] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type, 1),
  [948] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(452),
  [950] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type, 1, .alias_sequence_id = 3),
  [952] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(453),
  [954] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 2, .fragile = true, .alias_sequence_id = 1),
  [956] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__type_constructors, 2, .fragile = true, .alias_sequence_id = 1),
  [958] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(456),
  [960] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 2, .fragile = true),
  [962] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_qualified_type_constructor, 2, .fragile = true),
  [964] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(459),
  [966] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_signature, 4),
  [968] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_signature, 4),
  [970] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 2),
  [972] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_declarations, 2),
  [974] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(462),
  [976] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(462),
  [978] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(463),
  [980] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(463),
  [982] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 3),
  [984] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(466),
  [986] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(467),
  [988] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(468),
  [990] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 5),
  [992] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 5),
  [994] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 5),
  [996] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(471),
  [998] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 3),
  [1000] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 3),
  [1002] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(474),
  [1004] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(475),
  [1006] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(476),
  [1008] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(478),
  [1010] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreign, 5),
  [1012] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreign, 5),
  [1014] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_export_repeat1, 2),
  [1016] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_default, 5),
  [1018] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_default, 5),
  [1020] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_context_repeat1, 2),
  [1022] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 4),
  [1024] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(482),
  [1026] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 5),
  [1028] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 5),
  [1030] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_general_declarations, 2),
  [1032] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_general_declarations, 2),
  [1034] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(484),
  [1036] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(484),
  [1038] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(485),
  [1040] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(487),
  [1042] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(487),
  [1044] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(485),
  [1046] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_class, 4),
  [1048] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class_instance, 5),
  [1050] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class_instance, 5),
  [1052] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_fixity_repeat1, 3),
  [1054] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fixity_repeat1, 3),
  [1056] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 5),
  [1058] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 5),
  [1060] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(491),
  [1062] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 2),
  [1064] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructors_repeat1, 2),
  [1066] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(494),
  [1068] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(495),
  [1070] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(497),
  [1072] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(498),
  [1074] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_strict, 2),
  [1076] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_strict, 2),
  [1078] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_strict, 2),
  [1080] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 2),
  [1082] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructor_repeat1, 2),
  [1084] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_repeat1, 2),
  [1086] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 5),
  [1088] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 5),
  [1090] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_new_constructor, 2),
  [1092] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_new_constructor, 2),
  [1094] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat1, 2),
  [1096] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat2, 2),
  [1098] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 2),
  [1100] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 2),
  [1102] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_list, 2),
  [1104] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_list, 2),
  [1106] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_statement_list, 2),
  [1108] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(501),
  [1110] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(501),
  [1112] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [1114] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [1116] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 1),
  [1118] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(502),
  [1120] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(503),
  [1122] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(504),
  [1124] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(505),
  [1126] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(508),
  [1128] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(510),
  [1130] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(510),
  [1132] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(508),
  [1134] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_general_constructor_repeat1, 2),
  [1136] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_general_constructor_repeat1, 2),
  [1138] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_general_constructor_repeat1, 2),
  [1140] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(512),
  [1142] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tuple_pattern_repeat1, 2),
  [1144] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(513),
  [1146] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__constructor_symbol, 1),
  [1148] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_symbol_repeat1, 1),
  [1150] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructor_symbol, 2),
  [1152] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__pattern, 3),
  [1154] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 1),
  [1156] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_variable_symbol, 2, .fragile = true),
  [1158] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_tuple_pattern, 4),
  [1160] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_tuple_pattern, 4),
  [1162] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(518),
  [1164] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__function_pattern, 4),
  [1166] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__function_pattern, 4),
  [1168] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_labels, 2),
  [1170] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(520),
  [1172] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(522),
  [1174] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(524),
  [1176] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tupling_constructor_repeat1, 1),
  [1178] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tupling_constructor, 3),
  [1180] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_tupling_constructor, 3),
  [1182] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(526),
  [1184] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(527),
  [1186] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(528),
  [1188] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__type_constructors, 2, .fragile = true, .alias_sequence_id = 1),
  [1190] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 2, .fragile = true),
  [1192] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(531),
  [1194] = {.count = 2, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tuple, 3, .fragile = true), REDUCE(sym_parenthesized_constructor, 3, .fragile = true),
  [1197] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_tuple, 3, .fragile = true), REDUCE(sym_parenthesized_constructor, 3, .fragile = true),
  [1200] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(533),
  [1202] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(534),
  [1204] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(536),
  [1206] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(537),
  [1208] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(539),
  [1210] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_list, 3),
  [1212] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_list, 3),
  [1214] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_list_repeat1, 2),
  [1216] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_list_repeat1, 2),
  [1218] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_qualified_type_constructor_repeat1, 2),
  [1220] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_qualified_type_constructor_repeat1, 2),
  [1222] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 3, .fragile = true),
  [1224] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_qualified_type_constructor, 3, .fragile = true),
  [1226] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(541),
  [1228] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type, 3),
  [1230] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type, 3),
  [1232] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type, 3, .alias_sequence_id = 3),
  [1234] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type, 3, .alias_sequence_id = 3),
  [1236] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_declarations, 3),
  [1238] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(543),
  [1240] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(543),
  [1242] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_exports_repeat1, 2),
  [1244] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_exports, 4),
  [1246] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(545),
  [1248] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import, 6),
  [1250] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import, 6),
  [1252] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(547),
  [1254] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(549),
  [1256] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 2),
  [1258] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 4),
  [1260] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 4),
  [1262] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(551),
  [1264] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(553),
  [1266] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_foreign, 6),
  [1268] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_foreign, 6),
  [1270] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_export_repeat1, 3),
  [1272] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_context_repeat1, 3),
  [1274] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_context, 5),
  [1276] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class, 6),
  [1278] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class, 6),
  [1280] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_general_declarations_repeat1, 2),
  [1282] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_general_declarations_repeat1, 2),
  [1284] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_general_declarations_repeat1, 2),
  [1286] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_general_declarations, 3),
  [1288] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_general_declarations, 3),
  [1290] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(554),
  [1292] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(554),
  [1294] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(555),
  [1296] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(555),
  [1298] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_class_instance, 6),
  [1300] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_class_instance, 6),
  [1302] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 6),
  [1304] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 6),
  [1306] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 4),
  [1308] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 4),
  [1310] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(556),
  [1312] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 3),
  [1314] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructors_repeat1, 3),
  [1316] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fields, 3),
  [1318] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fields, 3),
  [1320] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(558),
  [1322] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(559),
  [1324] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(561),
  [1326] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(563),
  [1328] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(564),
  [1330] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 6),
  [1332] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 6),
  [1334] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
  [1336] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2),
  [1338] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
  [1340] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(565),
  [1342] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(566),
  [1344] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_statement_list, 3),
  [1346] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_statement_list, 3),
  [1348] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_statement_list, 3),
  [1350] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [1352] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [1354] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_statement_list_repeat1, 2),
  [1356] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_negative_literal, 4),
  [1358] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__op, 3),
  [1360] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructor_symbol_repeat1, 2),
  [1362] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_variable_symbol_repeat1, 2),
  [1364] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tuple_pattern_repeat1, 3),
  [1366] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_labels_repeat1, 2),
  [1368] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_label, 3),
  [1370] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_tupling_constructor, 3),
  [1372] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(570),
  [1374] = {.count = 2, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_tuple, 3, .fragile = true), REDUCE(sym_parenthesized_constructor, 3, .fragile = true),
  [1377] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(571),
  [1379] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tupling_constructor_repeat1, 2),
  [1381] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tupling_constructor, 4),
  [1383] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_tupling_constructor, 4),
  [1385] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_list, 3),
  [1387] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 3, .fragile = true),
  [1389] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tuple_repeat1, 2),
  [1391] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_tuple, 4),
  [1393] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_tuple, 4),
  [1395] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type, 3),
  [1397] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 4),
  [1399] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(575),
  [1401] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type, 3, .alias_sequence_id = 3),
  [1403] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 4, .fragile = true),
  [1405] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_qualified_type_constructor, 4, .fragile = true),
  [1407] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_qualified_type_constructor_repeat1, 3),
  [1409] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_qualified_type_constructor_repeat1, 3),
  [1411] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_exports_repeat1, 3),
  [1413] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 4),
  [1415] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(577),
  [1417] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(578),
  [1419] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(580),
  [1421] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(581),
  [1423] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(583),
  [1425] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 3),
  [1427] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 5),
  [1429] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 5),
  [1431] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_general_declarations_repeat1, 3),
  [1433] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_general_declarations_repeat1, 3),
  [1435] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_general_declarations_repeat1, 3),
  [1437] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_deriving, 5),
  [1439] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_deriving, 5),
  [1441] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fields_repeat1, 2),
  [1443] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fields, 4),
  [1445] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fields, 4),
  [1447] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_field_repeat1, 2),
  [1449] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field, 3),
  [1451] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(589),
  [1453] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(590),
  [1455] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_labels_repeat1, 3),
  [1457] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_tupling_constructor, 4),
  [1459] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_tuple, 4),
  [1461] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 4, .fragile = true),
  [1463] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_tuple_repeat1, 3),
  [1465] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_context, 5),
  [1467] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 5, .fragile = true),
  [1469] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_qualified_type_constructor, 5, .fragile = true),
  [1471] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export, 5),
  [1473] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 6),
  [1475] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 6),
  [1477] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(592),
  [1479] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(594),
  [1481] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(596),
  [1483] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(598),
  [1485] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fields_repeat1, 3),
  [1487] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_field_repeat1, 3),
  [1489] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field, 4),
  [1491] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_qualified_type_constructor, 5, .fragile = true),
  [1493] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 7),
  [1495] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 7),
  [1497] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(599),
  [1499] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 5),
  [1501] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(600),
  [1503] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 8),
  [1505] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 8),
  [1507] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 6),
  [1509] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(603),
  [1511] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(604),
  [1513] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 7),
  [1515] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 9),
  [1517] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 9),
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
