#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 195
#define SYMBOL_COUNT 164
#define ALIAS_COUNT 1
#define TOKEN_COUNT 122
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  anon_sym_module = 1,
  anon_sym_where = 2,
  anon_sym_LPAREN = 3,
  anon_sym_COMMA = 4,
  anon_sym_RPAREN = 5,
  anon_sym_DOT_DOT = 6,
  anon_sym_import = 7,
  anon_sym_qualified = 8,
  anon_sym_as = 9,
  anon_sym_hiding = 10,
  anon_sym_data = 11,
  anon_sym_EQ = 12,
  anon_sym_newtype = 13,
  anon_sym_LBRACE = 14,
  anon_sym_RBRACE = 15,
  anon_sym_COLON_COLON = 16,
  anon_sym_type = 17,
  sym_variable_identifier = 18,
  sym_constructor_identifier = 19,
  sym_module_identifier = 20,
  anon_sym_case = 21,
  anon_sym_class = 22,
  anon_sym_default = 23,
  anon_sym_deriving = 24,
  anon_sym_do = 25,
  anon_sym_else = 26,
  anon_sym_foreign = 27,
  anon_sym_if = 28,
  anon_sym_in = 29,
  anon_sym_infix = 30,
  anon_sym_infixl = 31,
  anon_sym_infixr = 32,
  anon_sym_instance = 33,
  anon_sym_let = 34,
  anon_sym_of = 35,
  anon_sym_then = 36,
  anon_sym__ = 37,
  sym_comment = 38,
  sym_float = 39,
  anon_sym_SQUOTE = 40,
  anon_sym_DQUOTE = 41,
  aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH = 42,
  aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH = 43,
  sym__ascii_large = 44,
  anon_sym_BANG = 45,
  anon_sym_POUND = 46,
  anon_sym_DOLLAR = 47,
  anon_sym_PERCENT = 48,
  anon_sym_AMP = 49,
  anon_sym_1 = 50,
  anon_sym_PLUS = 51,
  anon_sym_DOT = 52,
  anon_sym_SLASH = 53,
  anon_sym_LT = 54,
  anon_sym_GT = 55,
  anon_sym_QMARK = 56,
  anon_sym_AT = 57,
  anon_sym_CARET = 58,
  anon_sym_PIPE = 59,
  anon_sym_DASH = 60,
  anon_sym_TILDE = 61,
  anon_sym_COLON = 62,
  anon_sym_BSLASH = 63,
  anon_sym_SEMI = 64,
  anon_sym_LBRACK = 65,
  anon_sym_RBRACK = 66,
  anon_sym_BQUOTE = 67,
  sym__space = 68,
  sym__newline = 69,
  sym__tab = 70,
  sym__vertical_tab = 71,
  anon_sym_x = 72,
  anon_sym_X = 73,
  aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH = 74,
  anon_sym_o = 75,
  anon_sym_O = 76,
  aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH = 77,
  anon_sym_a = 78,
  anon_sym_b = 79,
  anon_sym_f = 80,
  anon_sym_n = 81,
  anon_sym_r = 82,
  anon_sym_t = 83,
  anon_sym_v = 84,
  anon_sym_NUL = 85,
  anon_sym_SOH = 86,
  anon_sym_STX = 87,
  anon_sym_ETX = 88,
  anon_sym_EOT = 89,
  anon_sym_ENQ = 90,
  anon_sym_ACK = 91,
  anon_sym_BEL = 92,
  anon_sym_BS = 93,
  anon_sym_HT = 94,
  anon_sym_LF = 95,
  anon_sym_VT = 96,
  anon_sym_FF = 97,
  anon_sym_CR = 98,
  anon_sym_SO = 99,
  anon_sym_SI = 100,
  anon_sym_DLE = 101,
  anon_sym_DC1 = 102,
  anon_sym_DC2 = 103,
  anon_sym_DC3 = 104,
  anon_sym_DC4 = 105,
  anon_sym_NAK = 106,
  anon_sym_SYN = 107,
  anon_sym_ETB = 108,
  anon_sym_CAN = 109,
  anon_sym_EM = 110,
  anon_sym_SUB = 111,
  anon_sym_ESC = 112,
  anon_sym_FS = 113,
  anon_sym_GS = 114,
  anon_sym_RS = 115,
  anon_sym_US = 116,
  anon_sym_SP = 117,
  anon_sym_DEL = 118,
  sym__integer_literal = 119,
  sym__octal_literal = 120,
  sym__hexidecimal_literal = 121,
  sym_program = 122,
  sym__statement = 123,
  sym_module = 124,
  sym_module_export_declarations = 125,
  sym_export_declaration = 126,
  sym_import_declaration = 127,
  sym_import_specification = 128,
  sym__top_level_declaration = 129,
  sym_algebraic_datatype = 130,
  sym_constructors = 131,
  sym_newtype = 132,
  sym_new_constructor = 133,
  sym_fields = 134,
  sym_field = 135,
  sym_type_synonym = 136,
  sym__literal = 137,
  sym__identifier = 138,
  sym_simple_type = 139,
  sym_reserved_identifier = 140,
  sym_integer = 141,
  sym_char = 142,
  sym_string = 143,
  sym__gap = 144,
  sym__graphic = 145,
  sym__small = 146,
  sym__large = 147,
  sym__symbol = 148,
  sym__special = 149,
  sym__escape = 150,
  sym__char_escape = 151,
  sym__ascii = 152,
  sym__cntrl = 153,
  aux_sym_program_repeat1 = 154,
  aux_sym_module_export_declarations_repeat1 = 155,
  aux_sym_export_declaration_repeat1 = 156,
  aux_sym_import_specification_repeat1 = 157,
  aux_sym_constructors_repeat1 = 158,
  aux_sym_fields_repeat1 = 159,
  aux_sym_field_repeat1 = 160,
  aux_sym_string_repeat1 = 161,
  aux_sym__escape_repeat1 = 162,
  aux_sym__escape_repeat2 = 163,
  alias_sym_module_body = 164,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_module] = "module",
  [anon_sym_where] = "where",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_import] = "import",
  [anon_sym_qualified] = "qualified",
  [anon_sym_as] = "as",
  [anon_sym_hiding] = "hiding",
  [anon_sym_data] = "data",
  [anon_sym_EQ] = "=",
  [anon_sym_newtype] = "newtype",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_type] = "type",
  [sym_variable_identifier] = "variable_identifier",
  [sym_constructor_identifier] = "constructor_identifier",
  [sym_module_identifier] = "module_identifier",
  [anon_sym_case] = "case",
  [anon_sym_class] = "class",
  [anon_sym_default] = "default",
  [anon_sym_deriving] = "deriving",
  [anon_sym_do] = "do",
  [anon_sym_else] = "else",
  [anon_sym_foreign] = "foreign",
  [anon_sym_if] = "if",
  [anon_sym_in] = "in",
  [anon_sym_infix] = "infix",
  [anon_sym_infixl] = "infixl",
  [anon_sym_infixr] = "infixr",
  [anon_sym_instance] = "instance",
  [anon_sym_let] = "let",
  [anon_sym_of] = "of",
  [anon_sym_then] = "then",
  [anon_sym__] = "_",
  [sym_comment] = "comment",
  [sym_float] = "float",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = "/[0-9]/",
  [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = "/[a-z]/",
  [sym__ascii_large] = "_ascii_large",
  [anon_sym_BANG] = "!",
  [anon_sym_POUND] = "#",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_PERCENT] = "%",
  [anon_sym_AMP] = "&",
  [anon_sym_1] = "⋆",
  [anon_sym_PLUS] = "+",
  [anon_sym_DOT] = ".",
  [anon_sym_SLASH] = "/",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_QMARK] = "?",
  [anon_sym_AT] = "@",
  [anon_sym_CARET] = "^",
  [anon_sym_PIPE] = "|",
  [anon_sym_DASH] = "-",
  [anon_sym_TILDE] = "~",
  [anon_sym_COLON] = ":",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_SEMI] = ";",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_BQUOTE] = "`",
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
  [sym_program] = "program",
  [sym__statement] = "_statement",
  [sym_module] = "module",
  [sym_module_export_declarations] = "module_export_declarations",
  [sym_export_declaration] = "export_declaration",
  [sym_import_declaration] = "import_declaration",
  [sym_import_specification] = "import_specification",
  [sym__top_level_declaration] = "_top_level_declaration",
  [sym_algebraic_datatype] = "algebraic_datatype",
  [sym_constructors] = "constructors",
  [sym_newtype] = "newtype",
  [sym_new_constructor] = "new_constructor",
  [sym_fields] = "fields",
  [sym_field] = "field",
  [sym_type_synonym] = "type_synonym",
  [sym__literal] = "_literal",
  [sym__identifier] = "_identifier",
  [sym_simple_type] = "simple_type",
  [sym_reserved_identifier] = "reserved_identifier",
  [sym_integer] = "integer",
  [sym_char] = "char",
  [sym_string] = "string",
  [sym__gap] = "_gap",
  [sym__graphic] = "_graphic",
  [sym__small] = "_small",
  [sym__large] = "_large",
  [sym__symbol] = "_symbol",
  [sym__special] = "_special",
  [sym__escape] = "_escape",
  [sym__char_escape] = "_char_escape",
  [sym__ascii] = "_ascii",
  [sym__cntrl] = "_cntrl",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_module_export_declarations_repeat1] = "module_export_declarations_repeat1",
  [aux_sym_export_declaration_repeat1] = "export_declaration_repeat1",
  [aux_sym_import_specification_repeat1] = "import_specification_repeat1",
  [aux_sym_constructors_repeat1] = "constructors_repeat1",
  [aux_sym_fields_repeat1] = "fields_repeat1",
  [aux_sym_field_repeat1] = "field_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym__escape_repeat1] = "_escape_repeat1",
  [aux_sym__escape_repeat2] = "_escape_repeat2",
  [alias_sym_module_body] = "module_body",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
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
  [anon_sym_data] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_newtype] = {
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
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [sym_variable_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_constructor_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_module_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_case] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_default] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_deriving] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_foreign] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_infix] = {
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
  [anon_sym_instance] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_of] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_then] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
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
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
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
  [anon_sym_DOT] = {
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
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
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
  [anon_sym_BQUOTE] = {
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
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [sym_module_export_declarations] = {
    .visible = true,
    .named = true,
  },
  [sym_export_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_import_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_import_specification] = {
    .visible = true,
    .named = true,
  },
  [sym__top_level_declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_algebraic_datatype] = {
    .visible = true,
    .named = true,
  },
  [sym_constructors] = {
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
  [sym_fields] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
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
  [sym_reserved_identifier] = {
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
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_module_export_declarations_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_export_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_import_specification_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constructors_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fields_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_field_repeat1] = {
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
  [alias_sym_module_body] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[3][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [3] = alias_sym_module_body,
  },
  [2] = {
    [4] = alias_sym_module_body,
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
        ADVANCE(89);
      if (lookahead == '\r')
        ADVANCE(90);
      if (lookahead == '!')
        ADVANCE(91);
      if (lookahead == '\"')
        ADVANCE(92);
      if (lookahead == '#')
        ADVANCE(93);
      if (lookahead == '$')
        ADVANCE(94);
      if (lookahead == '%')
        ADVANCE(95);
      if (lookahead == '&')
        ADVANCE(96);
      if (lookahead == '\'')
        ADVANCE(97);
      if (lookahead == '(')
        ADVANCE(98);
      if (lookahead == ')')
        ADVANCE(99);
      if (lookahead == '+')
        ADVANCE(100);
      if (lookahead == ',')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(102);
      if (lookahead == '.')
        ADVANCE(103);
      if (lookahead == '/')
        ADVANCE(105);
      if (lookahead == ':')
        ADVANCE(106);
      if (lookahead == ';')
        ADVANCE(108);
      if (lookahead == '<')
        ADVANCE(109);
      if (lookahead == '=')
        ADVANCE(110);
      if (lookahead == '>')
        ADVANCE(111);
      if (lookahead == '?')
        ADVANCE(112);
      if (lookahead == '@')
        ADVANCE(113);
      if (lookahead == 'G')
        ADVANCE(114);
      if (lookahead == 'H')
        ADVANCE(116);
      if (lookahead == 'L')
        ADVANCE(118);
      if (lookahead == 'N')
        ADVANCE(120);
      if (lookahead == 'R')
        ADVANCE(125);
      if (lookahead == 'S')
        ADVANCE(127);
      if (lookahead == 'U')
        ADVANCE(138);
      if (lookahead == 'V')
        ADVANCE(140);
      if (lookahead == '[')
        ADVANCE(142);
      if (lookahead == '\\')
        SKIP(143);
      if (lookahead == ']')
        ADVANCE(144);
      if (lookahead == '^')
        ADVANCE(145);
      if (lookahead == '_')
        ADVANCE(146);
      if (lookahead == '`')
        ADVANCE(147);
      if (lookahead == 'n')
        ADVANCE(148);
      if (lookahead == 'r')
        ADVANCE(149);
      if (lookahead == 't')
        ADVANCE(150);
      if (lookahead == 'v')
        ADVANCE(151);
      if (lookahead == '{')
        ADVANCE(152);
      if (lookahead == '|')
        ADVANCE(153);
      if (lookahead == '}')
        ADVANCE(154);
      if (lookahead == '~')
        ADVANCE(155);
      if (lookahead == 8902)
        ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(0);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(163);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(164);
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
        ADVANCE(17);
      if (lookahead == '+')
        ADVANCE(18);
      if (lookahead == ',')
        ADVANCE(19);
      if (lookahead == '-')
        ADVANCE(20);
      if (lookahead == '.')
        ADVANCE(26);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(29);
      if (lookahead == ';')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(33);
      if (lookahead == '>')
        ADVANCE(34);
      if (lookahead == '?')
        ADVANCE(35);
      if (lookahead == '@')
        ADVANCE(36);
      if (lookahead == 'G')
        ADVANCE(37);
      if (lookahead == 'H')
        ADVANCE(39);
      if (lookahead == 'L')
        ADVANCE(41);
      if (lookahead == 'N')
        ADVANCE(43);
      if (lookahead == 'R')
        ADVANCE(48);
      if (lookahead == 'S')
        ADVANCE(50);
      if (lookahead == 'U')
        ADVANCE(61);
      if (lookahead == 'V')
        ADVANCE(63);
      if (lookahead == '[')
        ADVANCE(65);
      if (lookahead == '\\')
        ADVANCE(66);
      if (lookahead == ']')
        ADVANCE(67);
      if (lookahead == '^')
        ADVANCE(68);
      if (lookahead == '_')
        ADVANCE(69);
      if (lookahead == '`')
        ADVANCE(70);
      if (lookahead == 'n')
        ADVANCE(71);
      if (lookahead == 'r')
        ADVANCE(72);
      if (lookahead == 't')
        ADVANCE(73);
      if (lookahead == 'v')
        ADVANCE(74);
      if (lookahead == '{')
        ADVANCE(75);
      if (lookahead == '|')
        ADVANCE(76);
      if (lookahead == '}')
        ADVANCE(77);
      if (lookahead == '~')
        ADVANCE(78);
      if (lookahead == 8902)
        ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(2);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(88);
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
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(21);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(22);
      if (lookahead != 0)
        ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(8);
      if (lookahead == '}')
        ADVANCE(23);
      if (lookahead != 0)
        ADVANCE(21);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(6);
      if (lookahead == '\r')
        ADVANCE(24);
      if (lookahead != 0)
        ADVANCE(25);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n')
        ADVANCE(6);
      if (lookahead != 0)
        ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(27);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == ':')
        ADVANCE(30);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(38);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_GS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(40);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_HT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(42);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(44);
      if (lookahead == 'U')
        ADVANCE(46);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 44:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'K')
        ADVANCE(45);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_NAK);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 46:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'L')
        ADVANCE(47);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_NUL);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(49);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_RS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'I')
        ADVANCE(51);
      if (lookahead == 'O')
        ADVANCE(52);
      if (lookahead == 'P')
        ADVANCE(54);
      if (lookahead == 'T')
        ADVANCE(55);
      if (lookahead == 'U')
        ADVANCE(57);
      if (lookahead == 'Y')
        ADVANCE(59);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_SI);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_SO);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'H')
        ADVANCE(53);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_SOH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_SP);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 55:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'X')
        ADVANCE(56);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_STX);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 57:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'B')
        ADVANCE(58);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_SUB);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 59:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'N')
        ADVANCE(60);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_SYN);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(62);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_US);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(64);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_VT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 66:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(2);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_n);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_r);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_t);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_v);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_1);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(81);
      if (lookahead == 'E')
        ADVANCE(82);
      if (lookahead == 'e')
        ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(86);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(82);
      if (lookahead == 'e')
        ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(81);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 82:
      if (lookahead == '+')
        ADVANCE(83);
      if (lookahead == '-')
        ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(84);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 83:
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(84);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(84);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 85:
      if (lookahead == '}')
        ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(84);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(81);
      if (lookahead == 'E')
        ADVANCE(82);
      if (lookahead == 'e')
        ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(86);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__vertical_tab);
      END_STATE();
    case 90:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead == 11)
        ADVANCE(89);
      if (lookahead == '\r')
        ADVANCE(90);
      if (lookahead == '!')
        ADVANCE(91);
      if (lookahead == '\"')
        ADVANCE(92);
      if (lookahead == '#')
        ADVANCE(93);
      if (lookahead == '$')
        ADVANCE(94);
      if (lookahead == '%')
        ADVANCE(95);
      if (lookahead == '&')
        ADVANCE(96);
      if (lookahead == '\'')
        ADVANCE(97);
      if (lookahead == '(')
        ADVANCE(98);
      if (lookahead == ')')
        ADVANCE(99);
      if (lookahead == '+')
        ADVANCE(100);
      if (lookahead == ',')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(102);
      if (lookahead == '.')
        ADVANCE(103);
      if (lookahead == '/')
        ADVANCE(105);
      if (lookahead == ':')
        ADVANCE(106);
      if (lookahead == ';')
        ADVANCE(108);
      if (lookahead == '<')
        ADVANCE(109);
      if (lookahead == '=')
        ADVANCE(110);
      if (lookahead == '>')
        ADVANCE(111);
      if (lookahead == '?')
        ADVANCE(112);
      if (lookahead == '@')
        ADVANCE(113);
      if (lookahead == 'G')
        ADVANCE(114);
      if (lookahead == 'H')
        ADVANCE(116);
      if (lookahead == 'L')
        ADVANCE(118);
      if (lookahead == 'N')
        ADVANCE(120);
      if (lookahead == 'R')
        ADVANCE(125);
      if (lookahead == 'S')
        ADVANCE(127);
      if (lookahead == 'U')
        ADVANCE(138);
      if (lookahead == 'V')
        ADVANCE(140);
      if (lookahead == '[')
        ADVANCE(142);
      if (lookahead == '\\')
        SKIP(143);
      if (lookahead == ']')
        ADVANCE(144);
      if (lookahead == '^')
        ADVANCE(145);
      if (lookahead == '_')
        ADVANCE(146);
      if (lookahead == '`')
        ADVANCE(147);
      if (lookahead == 'n')
        ADVANCE(148);
      if (lookahead == 'r')
        ADVANCE(149);
      if (lookahead == 't')
        ADVANCE(150);
      if (lookahead == 'v')
        ADVANCE(151);
      if (lookahead == '{')
        ADVANCE(152);
      if (lookahead == '|')
        ADVANCE(153);
      if (lookahead == '}')
        ADVANCE(154);
      if (lookahead == '~')
        ADVANCE(155);
      if (lookahead == 8902)
        ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(0);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(163);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(164);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(25);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.')
        ADVANCE(104);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':')
        ADVANCE(107);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'S')
        ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_GS);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'T')
        ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_HT);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'F')
        ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'A')
        ADVANCE(121);
      if (lookahead == 'U')
        ADVANCE(123);
      END_STATE();
    case 121:
      if (lookahead == 'K')
        ADVANCE(122);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_NAK);
      END_STATE();
    case 123:
      if (lookahead == 'L')
        ADVANCE(124);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_NUL);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'S')
        ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_RS);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'I')
        ADVANCE(128);
      if (lookahead == 'O')
        ADVANCE(129);
      if (lookahead == 'P')
        ADVANCE(131);
      if (lookahead == 'T')
        ADVANCE(132);
      if (lookahead == 'U')
        ADVANCE(134);
      if (lookahead == 'Y')
        ADVANCE(136);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_SI);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_SO);
      if (lookahead == 'H')
        ADVANCE(130);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_SOH);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_SP);
      END_STATE();
    case 132:
      if (lookahead == 'X')
        ADVANCE(133);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_STX);
      END_STATE();
    case 134:
      if (lookahead == 'B')
        ADVANCE(135);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_SUB);
      END_STATE();
    case 136:
      if (lookahead == 'N')
        ADVANCE(137);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_SYN);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'S')
        ADVANCE(139);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_US);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'T')
        ADVANCE(141);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_VT);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 143:
      if (lookahead == 'n')
        SKIP(0);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_n);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_r);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_t);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_v);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_1);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      if (lookahead == '.')
        ADVANCE(158);
      if (lookahead == 'E')
        ADVANCE(159);
      if (lookahead == 'e')
        ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(162);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E')
        ADVANCE(159);
      if (lookahead == 'e')
        ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(158);
      END_STATE();
    case 159:
      if (lookahead == '+')
        ADVANCE(160);
      if (lookahead == '-')
        ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(161);
      END_STATE();
    case 160:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(161);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '.')
        ADVANCE(158);
      if (lookahead == 'E')
        ADVANCE(159);
      if (lookahead == 'e')
        ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__ascii_large);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH);
      END_STATE();
    case 165:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(166);
      if (lookahead == '\r')
        ADVANCE(270);
      if (lookahead == '\"')
        ADVANCE(92);
      if (lookahead == '\'')
        ADVANCE(97);
      if (lookahead == '-')
        ADVANCE(271);
      if (lookahead == '0')
        ADVANCE(272);
      if (lookahead == '=')
        ADVANCE(110);
      if (lookahead == '[')
        ADVANCE(179);
      if (lookahead == '\\')
        SKIP(277);
      if (lookahead == '_')
        ADVANCE(278);
      if (lookahead == 'c')
        ADVANCE(280);
      if (lookahead == 'd')
        ADVANCE(288);
      if (lookahead == 'e')
        ADVANCE(305);
      if (lookahead == 'f')
        ADVANCE(309);
      if (lookahead == 'i')
        ADVANCE(316);
      if (lookahead == 'l')
        ADVANCE(335);
      if (lookahead == 'm')
        ADVANCE(338);
      if (lookahead == 'n')
        ADVANCE(344);
      if (lookahead == 'o')
        ADVANCE(351);
      if (lookahead == 't')
        ADVANCE(353);
      if (lookahead == 'w')
        ADVANCE(360);
      if (lookahead == '{')
        ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(165);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(162);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(365);
      END_STATE();
    case 166:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(166);
      if (lookahead == '\r')
        ADVANCE(166);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(167);
      if (lookahead == '0')
        ADVANCE(168);
      if (lookahead == '=')
        ADVANCE(33);
      if (lookahead == '[')
        ADVANCE(173);
      if (lookahead == '\\')
        ADVANCE(180);
      if (lookahead == '_')
        ADVANCE(181);
      if (lookahead == 'c')
        ADVANCE(183);
      if (lookahead == 'd')
        ADVANCE(191);
      if (lookahead == 'e')
        ADVANCE(208);
      if (lookahead == 'f')
        ADVANCE(212);
      if (lookahead == 'i')
        ADVANCE(219);
      if (lookahead == 'l')
        ADVANCE(238);
      if (lookahead == 'm')
        ADVANCE(241);
      if (lookahead == 'n')
        ADVANCE(247);
      if (lookahead == 'o')
        ADVANCE(254);
      if (lookahead == 't')
        ADVANCE(256);
      if (lookahead == 'w')
        ADVANCE(263);
      if (lookahead == '{')
        ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(166);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(86);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(268);
      ADVANCE(8);
      END_STATE();
    case 167:
      if (lookahead == '-')
        ADVANCE(21);
      if (lookahead == '}')
        ADVANCE(5);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(81);
      if (lookahead == 'E')
        ADVANCE(82);
      if (lookahead == 'O')
        ADVANCE(169);
      if (lookahead == 'X')
        ADVANCE(171);
      if (lookahead == 'e')
        ADVANCE(82);
      if (lookahead == 'o')
        ADVANCE(169);
      if (lookahead == 'x')
        ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(86);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 169:
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(170);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__octal_literal);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(170);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 171:
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(172);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__hexidecimal_literal);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(172);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 173:
      if (lookahead == '\n')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(174);
      if (lookahead == ']')
        ADVANCE(175);
      if (lookahead != 0)
        ADVANCE(173);
      END_STATE();
    case 174:
      if (lookahead == '\n')
        ADVANCE(8);
      if (lookahead == ']')
        ADVANCE(175);
      if (lookahead == '}')
        ADVANCE(176);
      if (lookahead != 0)
        ADVANCE(173);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\n')
        ADVANCE(8);
      if (lookahead == '-')
        ADVANCE(174);
      if (lookahead == ']')
        ADVANCE(175);
      if (lookahead != 0)
        ADVANCE(173);
      END_STATE();
    case 176:
      if (lookahead == '\n')
        ADVANCE(6);
      if (lookahead == '\r')
        ADVANCE(177);
      if (lookahead == ']')
        ADVANCE(178);
      if (lookahead != 0)
        ADVANCE(179);
      END_STATE();
    case 177:
      if (lookahead == '\n')
        ADVANCE(6);
      if (lookahead == ']')
        ADVANCE(178);
      if (lookahead != 0)
        ADVANCE(179);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == ']')
        ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(179);
      END_STATE();
    case 179:
      if (lookahead == ']')
        ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(179);
      END_STATE();
    case 180:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(166);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(184);
      if (lookahead == 'l')
        ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(192);
      if (lookahead == 'e')
        ADVANCE(195);
      if (lookahead == 'o')
        ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_data);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(196);
      if (lookahead == 'r')
        ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'v')
        ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_foreign);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(220);
      if (lookahead == 'm')
        ADVANCE(221);
      if (lookahead == 'n')
        ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(227);
      if (lookahead == 's')
        ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'x')
        ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(230);
      if (lookahead == 'r')
        ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_infixl);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_infixr);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'c')
        ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_instance);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'o')
        ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'w')
        ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 't')
        ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'y')
        ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_newtype);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_of);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'h')
        ADVANCE(257);
      if (lookahead == 'y')
        ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_then);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'p')
        ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'h')
        ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(268);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(268);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_module_identifier);
      if (lookahead == '\'')
        ADVANCE(269);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(269);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 270:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(166);
      if (lookahead == '\r')
        ADVANCE(270);
      if (lookahead == '\"')
        ADVANCE(92);
      if (lookahead == '\'')
        ADVANCE(97);
      if (lookahead == '-')
        ADVANCE(271);
      if (lookahead == '0')
        ADVANCE(272);
      if (lookahead == '=')
        ADVANCE(110);
      if (lookahead == '[')
        ADVANCE(179);
      if (lookahead == '\\')
        SKIP(277);
      if (lookahead == '_')
        ADVANCE(278);
      if (lookahead == 'c')
        ADVANCE(280);
      if (lookahead == 'd')
        ADVANCE(288);
      if (lookahead == 'e')
        ADVANCE(305);
      if (lookahead == 'f')
        ADVANCE(309);
      if (lookahead == 'i')
        ADVANCE(316);
      if (lookahead == 'l')
        ADVANCE(335);
      if (lookahead == 'm')
        ADVANCE(338);
      if (lookahead == 'n')
        ADVANCE(344);
      if (lookahead == 'o')
        ADVANCE(351);
      if (lookahead == 't')
        ADVANCE(353);
      if (lookahead == 'w')
        ADVANCE(360);
      if (lookahead == '{')
        ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(165);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(162);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(365);
      END_STATE();
    case 271:
      if (lookahead == '-')
        ADVANCE(25);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__integer_literal);
      if (lookahead == '.')
        ADVANCE(158);
      if (lookahead == 'E')
        ADVANCE(159);
      if (lookahead == 'O')
        ADVANCE(273);
      if (lookahead == 'X')
        ADVANCE(275);
      if (lookahead == 'e')
        ADVANCE(159);
      if (lookahead == 'o')
        ADVANCE(273);
      if (lookahead == 'x')
        ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(162);
      END_STATE();
    case 273:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(274);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym__octal_literal);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(274);
      END_STATE();
    case 275:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(276);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym__hexidecimal_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(276);
      END_STATE();
    case 277:
      if (lookahead == 'n')
        SKIP(165);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == '\'')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'a')
        ADVANCE(281);
      if (lookahead == 'l')
        ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 's')
        ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'e')
        ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_case);
      if (lookahead == '\'')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'a')
        ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 's')
        ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 's')
        ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_class);
      if (lookahead == '\'')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'a')
        ADVANCE(289);
      if (lookahead == 'e')
        ADVANCE(292);
      if (lookahead == 'o')
        ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 't')
        ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'a')
        ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_data);
      if (lookahead == '\'')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'f')
        ADVANCE(293);
      if (lookahead == 'r')
        ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'a')
        ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'u')
        ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'l')
        ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 't')
        ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_default);
      if (lookahead == '\'')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'i')
        ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'v')
        ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'i')
        ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'n')
        ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'g')
        ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_deriving);
      if (lookahead == '\'')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_do);
      if (lookahead == '\'')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'l')
        ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 's')
        ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'e')
        ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == '\'')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'o')
        ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'r')
        ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'e')
        ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'i')
        ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'g')
        ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'n')
        ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_foreign);
      if (lookahead == '\'')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'f')
        ADVANCE(317);
      if (lookahead == 'm')
        ADVANCE(318);
      if (lookahead == 'n')
        ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '\'')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'p')
        ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'o')
        ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'r')
        ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 't')
        ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_import);
      if (lookahead == '\'')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'f')
        ADVANCE(324);
      if (lookahead == 's')
        ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'i')
        ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'x')
        ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_infix);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'l')
        ADVANCE(327);
      if (lookahead == 'r')
        ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_infixl);
      if (lookahead == '\'')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_infixr);
      if (lookahead == '\'')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 't')
        ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'a')
        ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'n')
        ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'c')
        ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'e')
        ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_instance);
      if (lookahead == '\'')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'e')
        ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 't')
        ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '\'')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'o')
        ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'd')
        ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'u')
        ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'l')
        ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'e')
        ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_module);
      if (lookahead == '\'')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'e')
        ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'w')
        ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 't')
        ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'y')
        ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'p')
        ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'e')
        ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_newtype);
      if (lookahead == '\'')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'f')
        ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_of);
      if (lookahead == '\'')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'h')
        ADVANCE(354);
      if (lookahead == 'y')
        ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'e')
        ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'n')
        ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_then);
      if (lookahead == '\'')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'p')
        ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'e')
        ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '\'')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'h')
        ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'e')
        ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'r')
        ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'e')
        ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '\'')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(365);
      if (lookahead == '.')
        ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(365);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_module_identifier);
      if (lookahead == '\'')
        ADVANCE(366);
      if (lookahead == '.')
        ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(366);
      END_STATE();
    case 367:
      if (lookahead == '\n')
        ADVANCE(368);
      if (lookahead == '\r')
        ADVANCE(375);
      if (lookahead == '(')
        ADVANCE(98);
      if (lookahead == ')')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(271);
      if (lookahead == '\\')
        SKIP(376);
      if (lookahead == 'w')
        ADVANCE(377);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(367);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(366);
      END_STATE();
    case 368:
      if (lookahead == '\n')
        ADVANCE(368);
      if (lookahead == '\r')
        ADVANCE(368);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == '-')
        ADVANCE(167);
      if (lookahead == '\\')
        ADVANCE(369);
      if (lookahead == 'w')
        ADVANCE(370);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(368);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(269);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 369:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(368);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 370:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'h')
        ADVANCE(371);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 371:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(372);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 372:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'r')
        ADVANCE(373);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 373:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(374);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 375:
      if (lookahead == '\n')
        ADVANCE(368);
      if (lookahead == '\r')
        ADVANCE(375);
      if (lookahead == '(')
        ADVANCE(98);
      if (lookahead == ')')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(271);
      if (lookahead == '\\')
        SKIP(376);
      if (lookahead == 'w')
        ADVANCE(377);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(367);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(366);
      END_STATE();
    case 376:
      if (lookahead == 'n')
        SKIP(367);
      END_STATE();
    case 377:
      if (lookahead == 'h')
        ADVANCE(378);
      END_STATE();
    case 378:
      if (lookahead == 'e')
        ADVANCE(379);
      END_STATE();
    case 379:
      if (lookahead == 'r')
        ADVANCE(380);
      END_STATE();
    case 380:
      if (lookahead == 'e')
        ADVANCE(381);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 382:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(383);
      if (lookahead == '\r')
        ADVANCE(385);
      if (lookahead == '\"')
        ADVANCE(92);
      if (lookahead == '\'')
        ADVANCE(97);
      if (lookahead == '(')
        ADVANCE(98);
      if (lookahead == ')')
        ADVANCE(99);
      if (lookahead == ',')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(271);
      if (lookahead == '0')
        ADVANCE(272);
      if (lookahead == '=')
        ADVANCE(110);
      if (lookahead == '[')
        ADVANCE(179);
      if (lookahead == '\\')
        SKIP(386);
      if (lookahead == '_')
        ADVANCE(278);
      if (lookahead == 'c')
        ADVANCE(280);
      if (lookahead == 'd')
        ADVANCE(288);
      if (lookahead == 'e')
        ADVANCE(305);
      if (lookahead == 'f')
        ADVANCE(309);
      if (lookahead == 'i')
        ADVANCE(316);
      if (lookahead == 'l')
        ADVANCE(335);
      if (lookahead == 'm')
        ADVANCE(338);
      if (lookahead == 'n')
        ADVANCE(344);
      if (lookahead == 'o')
        ADVANCE(351);
      if (lookahead == 't')
        ADVANCE(353);
      if (lookahead == 'w')
        ADVANCE(360);
      if (lookahead == '{')
        ADVANCE(152);
      if (lookahead == '}')
        ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(382);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(162);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(365);
      END_STATE();
    case 383:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(383);
      if (lookahead == '\r')
        ADVANCE(383);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == ',')
        ADVANCE(19);
      if (lookahead == '-')
        ADVANCE(167);
      if (lookahead == '0')
        ADVANCE(168);
      if (lookahead == '=')
        ADVANCE(33);
      if (lookahead == '[')
        ADVANCE(173);
      if (lookahead == '\\')
        ADVANCE(384);
      if (lookahead == '_')
        ADVANCE(181);
      if (lookahead == 'c')
        ADVANCE(183);
      if (lookahead == 'd')
        ADVANCE(191);
      if (lookahead == 'e')
        ADVANCE(208);
      if (lookahead == 'f')
        ADVANCE(212);
      if (lookahead == 'i')
        ADVANCE(219);
      if (lookahead == 'l')
        ADVANCE(238);
      if (lookahead == 'm')
        ADVANCE(241);
      if (lookahead == 'n')
        ADVANCE(247);
      if (lookahead == 'o')
        ADVANCE(254);
      if (lookahead == 't')
        ADVANCE(256);
      if (lookahead == 'w')
        ADVANCE(263);
      if (lookahead == '{')
        ADVANCE(75);
      if (lookahead == '}')
        ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(383);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(86);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(268);
      ADVANCE(8);
      END_STATE();
    case 384:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(383);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 385:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(383);
      if (lookahead == '\r')
        ADVANCE(385);
      if (lookahead == '\"')
        ADVANCE(92);
      if (lookahead == '\'')
        ADVANCE(97);
      if (lookahead == '(')
        ADVANCE(98);
      if (lookahead == ')')
        ADVANCE(99);
      if (lookahead == ',')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(271);
      if (lookahead == '0')
        ADVANCE(272);
      if (lookahead == '=')
        ADVANCE(110);
      if (lookahead == '[')
        ADVANCE(179);
      if (lookahead == '\\')
        SKIP(386);
      if (lookahead == '_')
        ADVANCE(278);
      if (lookahead == 'c')
        ADVANCE(280);
      if (lookahead == 'd')
        ADVANCE(288);
      if (lookahead == 'e')
        ADVANCE(305);
      if (lookahead == 'f')
        ADVANCE(309);
      if (lookahead == 'i')
        ADVANCE(316);
      if (lookahead == 'l')
        ADVANCE(335);
      if (lookahead == 'm')
        ADVANCE(338);
      if (lookahead == 'n')
        ADVANCE(344);
      if (lookahead == 'o')
        ADVANCE(351);
      if (lookahead == 't')
        ADVANCE(353);
      if (lookahead == 'w')
        ADVANCE(360);
      if (lookahead == '{')
        ADVANCE(152);
      if (lookahead == '}')
        ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(382);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(162);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(365);
      END_STATE();
    case 386:
      if (lookahead == 'n')
        SKIP(382);
      END_STATE();
    case 387:
      if (lookahead == '\n')
        ADVANCE(388);
      if (lookahead == '\r')
        ADVANCE(402);
      if (lookahead == '-')
        ADVANCE(271);
      if (lookahead == '[')
        ADVANCE(179);
      if (lookahead == '\\')
        SKIP(403);
      if (lookahead == '_')
        ADVANCE(278);
      if (lookahead == 'c')
        ADVANCE(280);
      if (lookahead == 'd')
        ADVANCE(404);
      if (lookahead == 'e')
        ADVANCE(305);
      if (lookahead == 'f')
        ADVANCE(309);
      if (lookahead == 'i')
        ADVANCE(405);
      if (lookahead == 'l')
        ADVANCE(335);
      if (lookahead == 'o')
        ADVANCE(351);
      if (lookahead == 'q')
        ADVANCE(406);
      if (lookahead == 't')
        ADVANCE(415);
      if (lookahead == 'w')
        ADVANCE(360);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(387);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(365);
      END_STATE();
    case 388:
      if (lookahead == '\n')
        ADVANCE(388);
      if (lookahead == '\r')
        ADVANCE(388);
      if (lookahead == '-')
        ADVANCE(167);
      if (lookahead == '[')
        ADVANCE(173);
      if (lookahead == '\\')
        ADVANCE(389);
      if (lookahead == '_')
        ADVANCE(181);
      if (lookahead == 'c')
        ADVANCE(183);
      if (lookahead == 'd')
        ADVANCE(390);
      if (lookahead == 'e')
        ADVANCE(208);
      if (lookahead == 'f')
        ADVANCE(212);
      if (lookahead == 'i')
        ADVANCE(391);
      if (lookahead == 'l')
        ADVANCE(238);
      if (lookahead == 'o')
        ADVANCE(254);
      if (lookahead == 'q')
        ADVANCE(392);
      if (lookahead == 't')
        ADVANCE(401);
      if (lookahead == 'w')
        ADVANCE(263);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(388);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(268);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 389:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(388);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(195);
      if (lookahead == 'o')
        ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(220);
      if (lookahead == 'n')
        ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'u')
        ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'a')
        ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'l')
        ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'f')
        ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'e')
        ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_qualified);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'h')
        ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 402:
      if (lookahead == '\n')
        ADVANCE(388);
      if (lookahead == '\r')
        ADVANCE(402);
      if (lookahead == '-')
        ADVANCE(271);
      if (lookahead == '[')
        ADVANCE(179);
      if (lookahead == '\\')
        SKIP(403);
      if (lookahead == '_')
        ADVANCE(278);
      if (lookahead == 'c')
        ADVANCE(280);
      if (lookahead == 'd')
        ADVANCE(404);
      if (lookahead == 'e')
        ADVANCE(305);
      if (lookahead == 'f')
        ADVANCE(309);
      if (lookahead == 'i')
        ADVANCE(405);
      if (lookahead == 'l')
        ADVANCE(335);
      if (lookahead == 'o')
        ADVANCE(351);
      if (lookahead == 'q')
        ADVANCE(406);
      if (lookahead == 't')
        ADVANCE(415);
      if (lookahead == 'w')
        ADVANCE(360);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(387);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(365);
      END_STATE();
    case 403:
      if (lookahead == 'n')
        SKIP(387);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'e')
        ADVANCE(292);
      if (lookahead == 'o')
        ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'f')
        ADVANCE(317);
      if (lookahead == 'n')
        ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'u')
        ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'a')
        ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'l')
        ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'i')
        ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'f')
        ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'i')
        ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'e')
        ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'd')
        ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_qualified);
      if (lookahead == '\'')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'h')
        ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 416:
      if (lookahead == '\n')
        ADVANCE(417);
      if (lookahead == '\r')
        ADVANCE(420);
      if (lookahead == ')')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(271);
      if (lookahead == '.')
        ADVANCE(421);
      if (lookahead == '=')
        ADVANCE(110);
      if (lookahead == '[')
        ADVANCE(179);
      if (lookahead == '\\')
        SKIP(422);
      if (lookahead == '_')
        ADVANCE(278);
      if (lookahead == 'c')
        ADVANCE(280);
      if (lookahead == 'd')
        ADVANCE(404);
      if (lookahead == 'e')
        ADVANCE(305);
      if (lookahead == 'f')
        ADVANCE(309);
      if (lookahead == 'i')
        ADVANCE(405);
      if (lookahead == 'l')
        ADVANCE(335);
      if (lookahead == 'o')
        ADVANCE(351);
      if (lookahead == 't')
        ADVANCE(415);
      if (lookahead == 'w')
        ADVANCE(360);
      if (lookahead == '{')
        ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(416);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(365);
      END_STATE();
    case 417:
      if (lookahead == '\n')
        ADVANCE(417);
      if (lookahead == '\r')
        ADVANCE(417);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == '-')
        ADVANCE(167);
      if (lookahead == '.')
        ADVANCE(418);
      if (lookahead == '=')
        ADVANCE(33);
      if (lookahead == '[')
        ADVANCE(173);
      if (lookahead == '\\')
        ADVANCE(419);
      if (lookahead == '_')
        ADVANCE(181);
      if (lookahead == 'c')
        ADVANCE(183);
      if (lookahead == 'd')
        ADVANCE(390);
      if (lookahead == 'e')
        ADVANCE(208);
      if (lookahead == 'f')
        ADVANCE(212);
      if (lookahead == 'i')
        ADVANCE(391);
      if (lookahead == 'l')
        ADVANCE(238);
      if (lookahead == 'o')
        ADVANCE(254);
      if (lookahead == 't')
        ADVANCE(401);
      if (lookahead == 'w')
        ADVANCE(263);
      if (lookahead == '{')
        ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(417);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(268);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 418:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '.')
        ADVANCE(27);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 419:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(417);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 420:
      if (lookahead == '\n')
        ADVANCE(417);
      if (lookahead == '\r')
        ADVANCE(420);
      if (lookahead == ')')
        ADVANCE(99);
      if (lookahead == '-')
        ADVANCE(271);
      if (lookahead == '.')
        ADVANCE(421);
      if (lookahead == '=')
        ADVANCE(110);
      if (lookahead == '[')
        ADVANCE(179);
      if (lookahead == '\\')
        SKIP(422);
      if (lookahead == '_')
        ADVANCE(278);
      if (lookahead == 'c')
        ADVANCE(280);
      if (lookahead == 'd')
        ADVANCE(404);
      if (lookahead == 'e')
        ADVANCE(305);
      if (lookahead == 'f')
        ADVANCE(309);
      if (lookahead == 'i')
        ADVANCE(405);
      if (lookahead == 'l')
        ADVANCE(335);
      if (lookahead == 'o')
        ADVANCE(351);
      if (lookahead == 't')
        ADVANCE(415);
      if (lookahead == 'w')
        ADVANCE(360);
      if (lookahead == '{')
        ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(416);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(365);
      END_STATE();
    case 421:
      if (lookahead == '.')
        ADVANCE(104);
      END_STATE();
    case 422:
      if (lookahead == 'n')
        SKIP(416);
      END_STATE();
    case 423:
      if (lookahead == '\t')
        SKIP(423);
      if (lookahead == '\n')
        ADVANCE(424);
      if (lookahead == '\r')
        ADVANCE(430);
      if (lookahead == ' ')
        ADVANCE(431);
      if (lookahead == '!')
        ADVANCE(91);
      if (lookahead == '\"')
        ADVANCE(92);
      if (lookahead == '#')
        ADVANCE(93);
      if (lookahead == '$')
        ADVANCE(94);
      if (lookahead == '%')
        ADVANCE(95);
      if (lookahead == '&')
        ADVANCE(96);
      if (lookahead == '\'')
        ADVANCE(97);
      if (lookahead == '(')
        ADVANCE(98);
      if (lookahead == ')')
        ADVANCE(99);
      if (lookahead == '+')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(102);
      if (lookahead == '.')
        ADVANCE(432);
      if (lookahead == '/')
        ADVANCE(105);
      if (lookahead == ':')
        ADVANCE(433);
      if (lookahead == ';')
        ADVANCE(108);
      if (lookahead == '<')
        ADVANCE(109);
      if (lookahead == '=')
        ADVANCE(110);
      if (lookahead == '>')
        ADVANCE(111);
      if (lookahead == '?')
        ADVANCE(112);
      if (lookahead == '@')
        ADVANCE(113);
      if (lookahead == '[')
        ADVANCE(142);
      if (lookahead == '\\')
        ADVANCE(434);
      if (lookahead == ']')
        ADVANCE(144);
      if (lookahead == '^')
        ADVANCE(145);
      if (lookahead == '_')
        ADVANCE(146);
      if (lookahead == '`')
        ADVANCE(147);
      if (lookahead == '{')
        ADVANCE(152);
      if (lookahead == '|')
        ADVANCE(153);
      if (lookahead == '}')
        ADVANCE(154);
      if (lookahead == '~')
        ADVANCE(155);
      if (lookahead == 8902)
        ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(435);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(163);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(164);
      END_STATE();
    case 424:
      if (lookahead == '\t')
        ADVANCE(424);
      if (lookahead == '\n')
        ADVANCE(424);
      if (lookahead == '\r')
        ADVANCE(424);
      if (lookahead == ' ')
        ADVANCE(425);
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
        ADVANCE(17);
      if (lookahead == '+')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(20);
      if (lookahead == '.')
        ADVANCE(426);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(427);
      if (lookahead == ';')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(33);
      if (lookahead == '>')
        ADVANCE(34);
      if (lookahead == '?')
        ADVANCE(35);
      if (lookahead == '@')
        ADVANCE(36);
      if (lookahead == '[')
        ADVANCE(65);
      if (lookahead == '\\')
        ADVANCE(428);
      if (lookahead == ']')
        ADVANCE(67);
      if (lookahead == '^')
        ADVANCE(68);
      if (lookahead == '_')
        ADVANCE(69);
      if (lookahead == '`')
        ADVANCE(70);
      if (lookahead == '{')
        ADVANCE(75);
      if (lookahead == '|')
        ADVANCE(76);
      if (lookahead == '}')
        ADVANCE(77);
      if (lookahead == '~')
        ADVANCE(78);
      if (lookahead == 8902)
        ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(429);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(88);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(424);
      if (lookahead == '\n')
        ADVANCE(424);
      if (lookahead == '\r')
        ADVANCE(424);
      if (lookahead == ' ')
        ADVANCE(425);
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
        ADVANCE(17);
      if (lookahead == '+')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(20);
      if (lookahead == '.')
        ADVANCE(426);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(427);
      if (lookahead == ';')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(33);
      if (lookahead == '>')
        ADVANCE(34);
      if (lookahead == '?')
        ADVANCE(35);
      if (lookahead == '@')
        ADVANCE(36);
      if (lookahead == '[')
        ADVANCE(65);
      if (lookahead == '\\')
        ADVANCE(428);
      if (lookahead == ']')
        ADVANCE(67);
      if (lookahead == '^')
        ADVANCE(68);
      if (lookahead == '_')
        ADVANCE(69);
      if (lookahead == '`')
        ADVANCE(70);
      if (lookahead == '{')
        ADVANCE(75);
      if (lookahead == '|')
        ADVANCE(76);
      if (lookahead == '}')
        ADVANCE(77);
      if (lookahead == '~')
        ADVANCE(78);
      if (lookahead == 8902)
        ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(429);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(88);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(424);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 430:
      if (lookahead == '\t')
        SKIP(423);
      if (lookahead == '\n')
        ADVANCE(424);
      if (lookahead == '\r')
        ADVANCE(430);
      if (lookahead == ' ')
        ADVANCE(431);
      if (lookahead == '!')
        ADVANCE(91);
      if (lookahead == '\"')
        ADVANCE(92);
      if (lookahead == '#')
        ADVANCE(93);
      if (lookahead == '$')
        ADVANCE(94);
      if (lookahead == '%')
        ADVANCE(95);
      if (lookahead == '&')
        ADVANCE(96);
      if (lookahead == '\'')
        ADVANCE(97);
      if (lookahead == '(')
        ADVANCE(98);
      if (lookahead == ')')
        ADVANCE(99);
      if (lookahead == '+')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(102);
      if (lookahead == '.')
        ADVANCE(432);
      if (lookahead == '/')
        ADVANCE(105);
      if (lookahead == ':')
        ADVANCE(433);
      if (lookahead == ';')
        ADVANCE(108);
      if (lookahead == '<')
        ADVANCE(109);
      if (lookahead == '=')
        ADVANCE(110);
      if (lookahead == '>')
        ADVANCE(111);
      if (lookahead == '?')
        ADVANCE(112);
      if (lookahead == '@')
        ADVANCE(113);
      if (lookahead == '[')
        ADVANCE(142);
      if (lookahead == '\\')
        ADVANCE(434);
      if (lookahead == ']')
        ADVANCE(144);
      if (lookahead == '^')
        ADVANCE(145);
      if (lookahead == '_')
        ADVANCE(146);
      if (lookahead == '`')
        ADVANCE(147);
      if (lookahead == '{')
        ADVANCE(152);
      if (lookahead == '|')
        ADVANCE(153);
      if (lookahead == '}')
        ADVANCE(154);
      if (lookahead == '~')
        ADVANCE(155);
      if (lookahead == 8902)
        ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(435);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(163);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(164);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH);
      END_STATE();
    case 436:
      if (lookahead == '\t')
        ADVANCE(437);
      if (lookahead == '\n')
        ADVANCE(438);
      if (lookahead == 11)
        ADVANCE(89);
      if (lookahead == '\r')
        ADVANCE(443);
      if (lookahead == ' ')
        ADVANCE(431);
      if (lookahead == '!')
        ADVANCE(91);
      if (lookahead == '\"')
        ADVANCE(92);
      if (lookahead == '#')
        ADVANCE(93);
      if (lookahead == '$')
        ADVANCE(94);
      if (lookahead == '%')
        ADVANCE(95);
      if (lookahead == '&')
        ADVANCE(96);
      if (lookahead == '\'')
        ADVANCE(97);
      if (lookahead == '(')
        ADVANCE(98);
      if (lookahead == ')')
        ADVANCE(99);
      if (lookahead == '+')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(102);
      if (lookahead == '.')
        ADVANCE(432);
      if (lookahead == '/')
        ADVANCE(105);
      if (lookahead == ':')
        ADVANCE(433);
      if (lookahead == ';')
        ADVANCE(108);
      if (lookahead == '<')
        ADVANCE(109);
      if (lookahead == '=')
        ADVANCE(110);
      if (lookahead == '>')
        ADVANCE(111);
      if (lookahead == '?')
        ADVANCE(112);
      if (lookahead == '@')
        ADVANCE(113);
      if (lookahead == '[')
        ADVANCE(142);
      if (lookahead == '\\')
        ADVANCE(434);
      if (lookahead == ']')
        ADVANCE(144);
      if (lookahead == '^')
        ADVANCE(145);
      if (lookahead == '_')
        ADVANCE(146);
      if (lookahead == '`')
        ADVANCE(147);
      if (lookahead == '{')
        ADVANCE(152);
      if (lookahead == '|')
        ADVANCE(153);
      if (lookahead == '}')
        ADVANCE(154);
      if (lookahead == '~')
        ADVANCE(155);
      if (lookahead == 8902)
        ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'F'))
        ADVANCE(163);
      if (('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(435);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(163);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(164);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym__tab);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(439);
      if (lookahead == '\n')
        ADVANCE(438);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(440);
      if (lookahead == ' ')
        ADVANCE(441);
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
        ADVANCE(17);
      if (lookahead == '+')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(20);
      if (lookahead == '.')
        ADVANCE(426);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(427);
      if (lookahead == ';')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(33);
      if (lookahead == '>')
        ADVANCE(34);
      if (lookahead == '?')
        ADVANCE(35);
      if (lookahead == '@')
        ADVANCE(36);
      if (lookahead == '[')
        ADVANCE(65);
      if (lookahead == '\\')
        ADVANCE(442);
      if (lookahead == ']')
        ADVANCE(67);
      if (lookahead == '^')
        ADVANCE(68);
      if (lookahead == '_')
        ADVANCE(69);
      if (lookahead == '`')
        ADVANCE(70);
      if (lookahead == '{')
        ADVANCE(75);
      if (lookahead == '|')
        ADVANCE(76);
      if (lookahead == '}')
        ADVANCE(77);
      if (lookahead == '~')
        ADVANCE(78);
      if (lookahead == 8902)
        ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'F'))
        ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(429);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(87);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(88);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(439);
      if (lookahead == '\n')
        ADVANCE(438);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(440);
      if (lookahead == ' ')
        ADVANCE(441);
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
        ADVANCE(17);
      if (lookahead == '+')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(20);
      if (lookahead == '.')
        ADVANCE(426);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(427);
      if (lookahead == ';')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(33);
      if (lookahead == '>')
        ADVANCE(34);
      if (lookahead == '?')
        ADVANCE(35);
      if (lookahead == '@')
        ADVANCE(36);
      if (lookahead == '[')
        ADVANCE(65);
      if (lookahead == '\\')
        ADVANCE(442);
      if (lookahead == ']')
        ADVANCE(67);
      if (lookahead == '^')
        ADVANCE(68);
      if (lookahead == '_')
        ADVANCE(69);
      if (lookahead == '`')
        ADVANCE(70);
      if (lookahead == '{')
        ADVANCE(75);
      if (lookahead == '|')
        ADVANCE(76);
      if (lookahead == '}')
        ADVANCE(77);
      if (lookahead == '~')
        ADVANCE(78);
      if (lookahead == 8902)
        ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'F'))
        ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(429);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(87);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(88);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 440:
      if (lookahead == '\t')
        ADVANCE(439);
      if (lookahead == '\n')
        ADVANCE(438);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(440);
      if (lookahead == ' ')
        ADVANCE(441);
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
        ADVANCE(17);
      if (lookahead == '+')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(20);
      if (lookahead == '.')
        ADVANCE(426);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(427);
      if (lookahead == ';')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(33);
      if (lookahead == '>')
        ADVANCE(34);
      if (lookahead == '?')
        ADVANCE(35);
      if (lookahead == '@')
        ADVANCE(36);
      if (lookahead == '[')
        ADVANCE(65);
      if (lookahead == '\\')
        ADVANCE(442);
      if (lookahead == ']')
        ADVANCE(67);
      if (lookahead == '^')
        ADVANCE(68);
      if (lookahead == '_')
        ADVANCE(69);
      if (lookahead == '`')
        ADVANCE(70);
      if (lookahead == '{')
        ADVANCE(75);
      if (lookahead == '|')
        ADVANCE(76);
      if (lookahead == '}')
        ADVANCE(77);
      if (lookahead == '~')
        ADVANCE(78);
      if (lookahead == 8902)
        ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'F'))
        ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(429);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(87);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(88);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(439);
      if (lookahead == '\n')
        ADVANCE(438);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(440);
      if (lookahead == ' ')
        ADVANCE(441);
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
        ADVANCE(17);
      if (lookahead == '+')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(20);
      if (lookahead == '.')
        ADVANCE(426);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(427);
      if (lookahead == ';')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(33);
      if (lookahead == '>')
        ADVANCE(34);
      if (lookahead == '?')
        ADVANCE(35);
      if (lookahead == '@')
        ADVANCE(36);
      if (lookahead == '[')
        ADVANCE(65);
      if (lookahead == '\\')
        ADVANCE(442);
      if (lookahead == ']')
        ADVANCE(67);
      if (lookahead == '^')
        ADVANCE(68);
      if (lookahead == '_')
        ADVANCE(69);
      if (lookahead == '`')
        ADVANCE(70);
      if (lookahead == '{')
        ADVANCE(75);
      if (lookahead == '|')
        ADVANCE(76);
      if (lookahead == '}')
        ADVANCE(77);
      if (lookahead == '~')
        ADVANCE(78);
      if (lookahead == 8902)
        ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'F'))
        ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(429);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(87);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(88);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(440);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 443:
      if (lookahead == '\t')
        ADVANCE(437);
      if (lookahead == '\n')
        ADVANCE(438);
      if (lookahead == 11)
        ADVANCE(89);
      if (lookahead == '\r')
        ADVANCE(443);
      if (lookahead == ' ')
        ADVANCE(431);
      if (lookahead == '!')
        ADVANCE(91);
      if (lookahead == '\"')
        ADVANCE(92);
      if (lookahead == '#')
        ADVANCE(93);
      if (lookahead == '$')
        ADVANCE(94);
      if (lookahead == '%')
        ADVANCE(95);
      if (lookahead == '&')
        ADVANCE(96);
      if (lookahead == '\'')
        ADVANCE(97);
      if (lookahead == '(')
        ADVANCE(98);
      if (lookahead == ')')
        ADVANCE(99);
      if (lookahead == '+')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(102);
      if (lookahead == '.')
        ADVANCE(432);
      if (lookahead == '/')
        ADVANCE(105);
      if (lookahead == ':')
        ADVANCE(433);
      if (lookahead == ';')
        ADVANCE(108);
      if (lookahead == '<')
        ADVANCE(109);
      if (lookahead == '=')
        ADVANCE(110);
      if (lookahead == '>')
        ADVANCE(111);
      if (lookahead == '?')
        ADVANCE(112);
      if (lookahead == '@')
        ADVANCE(113);
      if (lookahead == '[')
        ADVANCE(142);
      if (lookahead == '\\')
        ADVANCE(434);
      if (lookahead == ']')
        ADVANCE(144);
      if (lookahead == '^')
        ADVANCE(145);
      if (lookahead == '_')
        ADVANCE(146);
      if (lookahead == '`')
        ADVANCE(147);
      if (lookahead == '{')
        ADVANCE(152);
      if (lookahead == '|')
        ADVANCE(153);
      if (lookahead == '}')
        ADVANCE(154);
      if (lookahead == '~')
        ADVANCE(155);
      if (lookahead == 8902)
        ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'F'))
        ADVANCE(163);
      if (('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(435);
      if (('G' <= lookahead && lookahead <= 'Z'))
        ADVANCE(163);
      if (('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(164);
      END_STATE();
    case 444:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(445);
      if (lookahead == '\r')
        ADVANCE(455);
      if (lookahead == '\"')
        ADVANCE(92);
      if (lookahead == '\'')
        ADVANCE(97);
      if (lookahead == '(')
        ADVANCE(98);
      if (lookahead == '-')
        ADVANCE(271);
      if (lookahead == '0')
        ADVANCE(272);
      if (lookahead == '[')
        ADVANCE(179);
      if (lookahead == '\\')
        SKIP(456);
      if (lookahead == '_')
        ADVANCE(278);
      if (lookahead == 'a')
        ADVANCE(457);
      if (lookahead == 'c')
        ADVANCE(280);
      if (lookahead == 'd')
        ADVANCE(288);
      if (lookahead == 'e')
        ADVANCE(305);
      if (lookahead == 'f')
        ADVANCE(309);
      if (lookahead == 'h')
        ADVANCE(459);
      if (lookahead == 'i')
        ADVANCE(316);
      if (lookahead == 'l')
        ADVANCE(335);
      if (lookahead == 'm')
        ADVANCE(338);
      if (lookahead == 'n')
        ADVANCE(344);
      if (lookahead == 'o')
        ADVANCE(351);
      if (lookahead == 't')
        ADVANCE(353);
      if (lookahead == 'w')
        ADVANCE(360);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(444);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(162);
      if (('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(365);
      END_STATE();
    case 445:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(445);
      if (lookahead == '\r')
        ADVANCE(445);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(167);
      if (lookahead == '0')
        ADVANCE(168);
      if (lookahead == '[')
        ADVANCE(173);
      if (lookahead == '\\')
        ADVANCE(446);
      if (lookahead == '_')
        ADVANCE(181);
      if (lookahead == 'a')
        ADVANCE(447);
      if (lookahead == 'c')
        ADVANCE(183);
      if (lookahead == 'd')
        ADVANCE(191);
      if (lookahead == 'e')
        ADVANCE(208);
      if (lookahead == 'f')
        ADVANCE(212);
      if (lookahead == 'h')
        ADVANCE(449);
      if (lookahead == 'i')
        ADVANCE(219);
      if (lookahead == 'l')
        ADVANCE(238);
      if (lookahead == 'm')
        ADVANCE(241);
      if (lookahead == 'n')
        ADVANCE(247);
      if (lookahead == 'o')
        ADVANCE(254);
      if (lookahead == 't')
        ADVANCE(256);
      if (lookahead == 'w')
        ADVANCE(263);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(445);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(86);
      if (('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(268);
      ADVANCE(8);
      END_STATE();
    case 446:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(445);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 's')
        ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'd')
        ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'i')
        ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'g')
        ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_hiding);
      if (lookahead == '\'')
        ADVANCE(182);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 455:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(445);
      if (lookahead == '\r')
        ADVANCE(455);
      if (lookahead == '\"')
        ADVANCE(92);
      if (lookahead == '\'')
        ADVANCE(97);
      if (lookahead == '(')
        ADVANCE(98);
      if (lookahead == '-')
        ADVANCE(271);
      if (lookahead == '0')
        ADVANCE(272);
      if (lookahead == '[')
        ADVANCE(179);
      if (lookahead == '\\')
        SKIP(456);
      if (lookahead == '_')
        ADVANCE(278);
      if (lookahead == 'a')
        ADVANCE(457);
      if (lookahead == 'c')
        ADVANCE(280);
      if (lookahead == 'd')
        ADVANCE(288);
      if (lookahead == 'e')
        ADVANCE(305);
      if (lookahead == 'f')
        ADVANCE(309);
      if (lookahead == 'h')
        ADVANCE(459);
      if (lookahead == 'i')
        ADVANCE(316);
      if (lookahead == 'l')
        ADVANCE(335);
      if (lookahead == 'm')
        ADVANCE(338);
      if (lookahead == 'n')
        ADVANCE(344);
      if (lookahead == 'o')
        ADVANCE(351);
      if (lookahead == 't')
        ADVANCE(353);
      if (lookahead == 'w')
        ADVANCE(360);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(444);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(162);
      if (('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(365);
      END_STATE();
    case 456:
      if (lookahead == 'n')
        SKIP(444);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 's')
        ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '\'')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'i')
        ADVANCE(460);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'd')
        ADVANCE(461);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'i')
        ADVANCE(462);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'n')
        ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_variable_identifier);
      if (lookahead == '\'')
        ADVANCE(279);
      if (lookahead == 'g')
        ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_hiding);
      if (lookahead == '\'')
        ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 465:
      if (lookahead == '\n')
        ADVANCE(466);
      if (lookahead == '\r')
        ADVANCE(518);
      if (lookahead == '\"')
        ADVANCE(92);
      if (lookahead == '&')
        ADVANCE(96);
      if (lookahead == '\'')
        ADVANCE(97);
      if (lookahead == '-')
        ADVANCE(271);
      if (lookahead == 'A')
        ADVANCE(519);
      if (lookahead == 'B')
        ADVANCE(522);
      if (lookahead == 'C')
        ADVANCE(526);
      if (lookahead == 'D')
        ADVANCE(530);
      if (lookahead == 'E')
        ADVANCE(540);
      if (lookahead == 'F')
        ADVANCE(551);
      if (lookahead == 'G')
        ADVANCE(554);
      if (lookahead == 'H')
        ADVANCE(555);
      if (lookahead == 'L')
        ADVANCE(556);
      if (lookahead == 'N')
        ADVANCE(557);
      if (lookahead == 'O')
        ADVANCE(558);
      if (lookahead == 'R')
        ADVANCE(559);
      if (lookahead == 'S')
        ADVANCE(560);
      if (lookahead == 'U')
        ADVANCE(561);
      if (lookahead == 'V')
        ADVANCE(562);
      if (lookahead == 'X')
        ADVANCE(563);
      if (lookahead == '\\')
        ADVANCE(434);
      if (lookahead == '^')
        ADVANCE(145);
      if (lookahead == 'a')
        ADVANCE(564);
      if (lookahead == 'b')
        ADVANCE(565);
      if (lookahead == 'f')
        ADVANCE(566);
      if (lookahead == 'n')
        ADVANCE(148);
      if (lookahead == 'o')
        ADVANCE(567);
      if (lookahead == 'r')
        ADVANCE(149);
      if (lookahead == 't')
        ADVANCE(150);
      if (lookahead == 'v')
        ADVANCE(151);
      if (lookahead == 'x')
        ADVANCE(568);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(465);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(435);
      END_STATE();
    case 466:
      if (lookahead == '\n')
        ADVANCE(466);
      if (lookahead == '\r')
        ADVANCE(466);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '&')
        ADVANCE(14);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(167);
      if (lookahead == 'A')
        ADVANCE(467);
      if (lookahead == 'B')
        ADVANCE(470);
      if (lookahead == 'C')
        ADVANCE(474);
      if (lookahead == 'D')
        ADVANCE(478);
      if (lookahead == 'E')
        ADVANCE(488);
      if (lookahead == 'F')
        ADVANCE(499);
      if (lookahead == 'G')
        ADVANCE(502);
      if (lookahead == 'H')
        ADVANCE(503);
      if (lookahead == 'L')
        ADVANCE(504);
      if (lookahead == 'N')
        ADVANCE(505);
      if (lookahead == 'O')
        ADVANCE(506);
      if (lookahead == 'R')
        ADVANCE(507);
      if (lookahead == 'S')
        ADVANCE(508);
      if (lookahead == 'U')
        ADVANCE(509);
      if (lookahead == 'V')
        ADVANCE(510);
      if (lookahead == 'X')
        ADVANCE(511);
      if (lookahead == '\\')
        ADVANCE(512);
      if (lookahead == '^')
        ADVANCE(68);
      if (lookahead == 'a')
        ADVANCE(513);
      if (lookahead == 'b')
        ADVANCE(514);
      if (lookahead == 'f')
        ADVANCE(515);
      if (lookahead == 'n')
        ADVANCE(71);
      if (lookahead == 'o')
        ADVANCE(516);
      if (lookahead == 'r')
        ADVANCE(72);
      if (lookahead == 't')
        ADVANCE(73);
      if (lookahead == 'v')
        ADVANCE(74);
      if (lookahead == 'x')
        ADVANCE(517);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(429);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 467:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(468);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 468:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'K')
        ADVANCE(469);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_ACK);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 470:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(471);
      if (lookahead == 'S')
        ADVANCE(473);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 471:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'L')
        ADVANCE(472);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_BEL);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_BS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 474:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(475);
      if (lookahead == 'R')
        ADVANCE(477);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 475:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'N')
        ADVANCE(476);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_CAN);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 478:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(479);
      if (lookahead == 'E')
        ADVANCE(484);
      if (lookahead == 'L')
        ADVANCE(486);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 479:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == '1')
        ADVANCE(480);
      if (lookahead == '2')
        ADVANCE(481);
      if (lookahead == '3')
        ADVANCE(482);
      if (lookahead == '4')
        ADVANCE(483);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_DC1);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_DC2);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_DC3);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_DC4);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 484:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'L')
        ADVANCE(485);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_DEL);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 486:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(487);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_DLE);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 488:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'M')
        ADVANCE(489);
      if (lookahead == 'N')
        ADVANCE(490);
      if (lookahead == 'O')
        ADVANCE(492);
      if (lookahead == 'S')
        ADVANCE(494);
      if (lookahead == 'T')
        ADVANCE(496);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_EM);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 490:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'Q')
        ADVANCE(491);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_ENQ);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 492:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(493);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_EOT);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 494:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(495);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_ESC);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 496:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'B')
        ADVANCE(497);
      if (lookahead == 'X')
        ADVANCE(498);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_ETB);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_ETX);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 499:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(500);
      if (lookahead == 'S')
        ADVANCE(501);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_FF);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_FS);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 502:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(38);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 503:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(40);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 504:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(42);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 505:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(44);
      if (lookahead == 'U')
        ADVANCE(46);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_O);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 507:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(49);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 508:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'I')
        ADVANCE(51);
      if (lookahead == 'O')
        ADVANCE(52);
      if (lookahead == 'P')
        ADVANCE(54);
      if (lookahead == 'T')
        ADVANCE(55);
      if (lookahead == 'U')
        ADVANCE(57);
      if (lookahead == 'Y')
        ADVANCE(59);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 509:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'S')
        ADVANCE(62);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 510:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'T')
        ADVANCE(64);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_X);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(466);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_a);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_b);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_f);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_o);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_x);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 518:
      if (lookahead == '\n')
        ADVANCE(466);
      if (lookahead == '\r')
        ADVANCE(518);
      if (lookahead == '\"')
        ADVANCE(92);
      if (lookahead == '&')
        ADVANCE(96);
      if (lookahead == '\'')
        ADVANCE(97);
      if (lookahead == '-')
        ADVANCE(271);
      if (lookahead == 'A')
        ADVANCE(519);
      if (lookahead == 'B')
        ADVANCE(522);
      if (lookahead == 'C')
        ADVANCE(526);
      if (lookahead == 'D')
        ADVANCE(530);
      if (lookahead == 'E')
        ADVANCE(540);
      if (lookahead == 'F')
        ADVANCE(551);
      if (lookahead == 'G')
        ADVANCE(554);
      if (lookahead == 'H')
        ADVANCE(555);
      if (lookahead == 'L')
        ADVANCE(556);
      if (lookahead == 'N')
        ADVANCE(557);
      if (lookahead == 'O')
        ADVANCE(558);
      if (lookahead == 'R')
        ADVANCE(559);
      if (lookahead == 'S')
        ADVANCE(560);
      if (lookahead == 'U')
        ADVANCE(561);
      if (lookahead == 'V')
        ADVANCE(562);
      if (lookahead == 'X')
        ADVANCE(563);
      if (lookahead == '\\')
        ADVANCE(434);
      if (lookahead == '^')
        ADVANCE(145);
      if (lookahead == 'a')
        ADVANCE(564);
      if (lookahead == 'b')
        ADVANCE(565);
      if (lookahead == 'f')
        ADVANCE(566);
      if (lookahead == 'n')
        ADVANCE(148);
      if (lookahead == 'o')
        ADVANCE(567);
      if (lookahead == 'r')
        ADVANCE(149);
      if (lookahead == 't')
        ADVANCE(150);
      if (lookahead == 'v')
        ADVANCE(151);
      if (lookahead == 'x')
        ADVANCE(568);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(465);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(435);
      END_STATE();
    case 519:
      if (lookahead == 'C')
        ADVANCE(520);
      END_STATE();
    case 520:
      if (lookahead == 'K')
        ADVANCE(521);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_ACK);
      END_STATE();
    case 522:
      if (lookahead == 'E')
        ADVANCE(523);
      if (lookahead == 'S')
        ADVANCE(525);
      END_STATE();
    case 523:
      if (lookahead == 'L')
        ADVANCE(524);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_BEL);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_BS);
      END_STATE();
    case 526:
      if (lookahead == 'A')
        ADVANCE(527);
      if (lookahead == 'R')
        ADVANCE(529);
      END_STATE();
    case 527:
      if (lookahead == 'N')
        ADVANCE(528);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_CAN);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_CR);
      END_STATE();
    case 530:
      if (lookahead == 'C')
        ADVANCE(531);
      if (lookahead == 'E')
        ADVANCE(536);
      if (lookahead == 'L')
        ADVANCE(538);
      END_STATE();
    case 531:
      if (lookahead == '1')
        ADVANCE(532);
      if (lookahead == '2')
        ADVANCE(533);
      if (lookahead == '3')
        ADVANCE(534);
      if (lookahead == '4')
        ADVANCE(535);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_DC1);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_DC2);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_DC3);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_DC4);
      END_STATE();
    case 536:
      if (lookahead == 'L')
        ADVANCE(537);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_DEL);
      END_STATE();
    case 538:
      if (lookahead == 'E')
        ADVANCE(539);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_DLE);
      END_STATE();
    case 540:
      if (lookahead == 'M')
        ADVANCE(541);
      if (lookahead == 'N')
        ADVANCE(542);
      if (lookahead == 'O')
        ADVANCE(544);
      if (lookahead == 'S')
        ADVANCE(546);
      if (lookahead == 'T')
        ADVANCE(548);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_EM);
      END_STATE();
    case 542:
      if (lookahead == 'Q')
        ADVANCE(543);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_ENQ);
      END_STATE();
    case 544:
      if (lookahead == 'T')
        ADVANCE(545);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_EOT);
      END_STATE();
    case 546:
      if (lookahead == 'C')
        ADVANCE(547);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_ESC);
      END_STATE();
    case 548:
      if (lookahead == 'B')
        ADVANCE(549);
      if (lookahead == 'X')
        ADVANCE(550);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_ETB);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_ETX);
      END_STATE();
    case 551:
      if (lookahead == 'F')
        ADVANCE(552);
      if (lookahead == 'S')
        ADVANCE(553);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_FF);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_FS);
      END_STATE();
    case 554:
      if (lookahead == 'S')
        ADVANCE(115);
      END_STATE();
    case 555:
      if (lookahead == 'T')
        ADVANCE(117);
      END_STATE();
    case 556:
      if (lookahead == 'F')
        ADVANCE(119);
      END_STATE();
    case 557:
      if (lookahead == 'A')
        ADVANCE(121);
      if (lookahead == 'U')
        ADVANCE(123);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_O);
      END_STATE();
    case 559:
      if (lookahead == 'S')
        ADVANCE(126);
      END_STATE();
    case 560:
      if (lookahead == 'I')
        ADVANCE(128);
      if (lookahead == 'O')
        ADVANCE(129);
      if (lookahead == 'P')
        ADVANCE(131);
      if (lookahead == 'T')
        ADVANCE(132);
      if (lookahead == 'U')
        ADVANCE(134);
      if (lookahead == 'Y')
        ADVANCE(136);
      END_STATE();
    case 561:
      if (lookahead == 'S')
        ADVANCE(139);
      END_STATE();
    case 562:
      if (lookahead == 'T')
        ADVANCE(141);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_b);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_f);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_o);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_x);
      END_STATE();
    case 569:
      if (lookahead == '\t')
        ADVANCE(437);
      if (lookahead == '\n')
        ADVANCE(570);
      if (lookahead == 11)
        ADVANCE(89);
      if (lookahead == '\r')
        ADVANCE(581);
      if (lookahead == ' ')
        ADVANCE(431);
      if (lookahead == '!')
        ADVANCE(91);
      if (lookahead == '\"')
        ADVANCE(92);
      if (lookahead == '#')
        ADVANCE(93);
      if (lookahead == '$')
        ADVANCE(94);
      if (lookahead == '%')
        ADVANCE(95);
      if (lookahead == '&')
        ADVANCE(96);
      if (lookahead == '\'')
        ADVANCE(97);
      if (lookahead == '(')
        ADVANCE(98);
      if (lookahead == ')')
        ADVANCE(99);
      if (lookahead == '+')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(102);
      if (lookahead == '.')
        ADVANCE(432);
      if (lookahead == '/')
        ADVANCE(105);
      if (lookahead == ':')
        ADVANCE(433);
      if (lookahead == ';')
        ADVANCE(108);
      if (lookahead == '<')
        ADVANCE(109);
      if (lookahead == '=')
        ADVANCE(110);
      if (lookahead == '>')
        ADVANCE(111);
      if (lookahead == '?')
        ADVANCE(112);
      if (lookahead == '@')
        ADVANCE(113);
      if (lookahead == 'A')
        ADVANCE(582);
      if (lookahead == 'B')
        ADVANCE(583);
      if (lookahead == 'C')
        ADVANCE(584);
      if (lookahead == 'D')
        ADVANCE(585);
      if (lookahead == 'E')
        ADVANCE(586);
      if (lookahead == 'F')
        ADVANCE(587);
      if (lookahead == 'G')
        ADVANCE(114);
      if (lookahead == 'H')
        ADVANCE(116);
      if (lookahead == 'L')
        ADVANCE(118);
      if (lookahead == 'N')
        ADVANCE(120);
      if (lookahead == 'O')
        ADVANCE(558);
      if (lookahead == 'R')
        ADVANCE(125);
      if (lookahead == 'S')
        ADVANCE(127);
      if (lookahead == 'U')
        ADVANCE(138);
      if (lookahead == 'V')
        ADVANCE(140);
      if (lookahead == 'X')
        ADVANCE(563);
      if (lookahead == '[')
        ADVANCE(142);
      if (lookahead == '\\')
        ADVANCE(434);
      if (lookahead == ']')
        ADVANCE(144);
      if (lookahead == '^')
        ADVANCE(145);
      if (lookahead == '_')
        ADVANCE(146);
      if (lookahead == '`')
        ADVANCE(147);
      if (lookahead == 'a')
        ADVANCE(564);
      if (lookahead == 'b')
        ADVANCE(565);
      if (lookahead == 'f')
        ADVANCE(566);
      if (lookahead == 'n')
        ADVANCE(148);
      if (lookahead == 'o')
        ADVANCE(567);
      if (lookahead == 'r')
        ADVANCE(149);
      if (lookahead == 't')
        ADVANCE(150);
      if (lookahead == 'v')
        ADVANCE(151);
      if (lookahead == 'x')
        ADVANCE(568);
      if (lookahead == '{')
        ADVANCE(152);
      if (lookahead == '|')
        ADVANCE(153);
      if (lookahead == '}')
        ADVANCE(154);
      if (lookahead == '~')
        ADVANCE(155);
      if (lookahead == 8902)
        ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(435);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(163);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(164);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(571);
      if (lookahead == '\n')
        ADVANCE(570);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(572);
      if (lookahead == ' ')
        ADVANCE(573);
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
        ADVANCE(17);
      if (lookahead == '+')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(20);
      if (lookahead == '.')
        ADVANCE(426);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(427);
      if (lookahead == ';')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(33);
      if (lookahead == '>')
        ADVANCE(34);
      if (lookahead == '?')
        ADVANCE(35);
      if (lookahead == '@')
        ADVANCE(36);
      if (lookahead == 'A')
        ADVANCE(574);
      if (lookahead == 'B')
        ADVANCE(575);
      if (lookahead == 'C')
        ADVANCE(576);
      if (lookahead == 'D')
        ADVANCE(577);
      if (lookahead == 'E')
        ADVANCE(578);
      if (lookahead == 'F')
        ADVANCE(579);
      if (lookahead == 'G')
        ADVANCE(37);
      if (lookahead == 'H')
        ADVANCE(39);
      if (lookahead == 'L')
        ADVANCE(41);
      if (lookahead == 'N')
        ADVANCE(43);
      if (lookahead == 'O')
        ADVANCE(506);
      if (lookahead == 'R')
        ADVANCE(48);
      if (lookahead == 'S')
        ADVANCE(50);
      if (lookahead == 'U')
        ADVANCE(61);
      if (lookahead == 'V')
        ADVANCE(63);
      if (lookahead == 'X')
        ADVANCE(511);
      if (lookahead == '[')
        ADVANCE(65);
      if (lookahead == '\\')
        ADVANCE(580);
      if (lookahead == ']')
        ADVANCE(67);
      if (lookahead == '^')
        ADVANCE(68);
      if (lookahead == '_')
        ADVANCE(69);
      if (lookahead == '`')
        ADVANCE(70);
      if (lookahead == 'a')
        ADVANCE(513);
      if (lookahead == 'b')
        ADVANCE(514);
      if (lookahead == 'f')
        ADVANCE(515);
      if (lookahead == 'n')
        ADVANCE(71);
      if (lookahead == 'o')
        ADVANCE(516);
      if (lookahead == 'r')
        ADVANCE(72);
      if (lookahead == 't')
        ADVANCE(73);
      if (lookahead == 'v')
        ADVANCE(74);
      if (lookahead == 'x')
        ADVANCE(517);
      if (lookahead == '{')
        ADVANCE(75);
      if (lookahead == '|')
        ADVANCE(76);
      if (lookahead == '}')
        ADVANCE(77);
      if (lookahead == '~')
        ADVANCE(78);
      if (lookahead == 8902)
        ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(429);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(87);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(88);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(571);
      if (lookahead == '\n')
        ADVANCE(570);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(572);
      if (lookahead == ' ')
        ADVANCE(573);
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
        ADVANCE(17);
      if (lookahead == '+')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(20);
      if (lookahead == '.')
        ADVANCE(426);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(427);
      if (lookahead == ';')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(33);
      if (lookahead == '>')
        ADVANCE(34);
      if (lookahead == '?')
        ADVANCE(35);
      if (lookahead == '@')
        ADVANCE(36);
      if (lookahead == 'A')
        ADVANCE(574);
      if (lookahead == 'B')
        ADVANCE(575);
      if (lookahead == 'C')
        ADVANCE(576);
      if (lookahead == 'D')
        ADVANCE(577);
      if (lookahead == 'E')
        ADVANCE(578);
      if (lookahead == 'F')
        ADVANCE(579);
      if (lookahead == 'G')
        ADVANCE(37);
      if (lookahead == 'H')
        ADVANCE(39);
      if (lookahead == 'L')
        ADVANCE(41);
      if (lookahead == 'N')
        ADVANCE(43);
      if (lookahead == 'O')
        ADVANCE(506);
      if (lookahead == 'R')
        ADVANCE(48);
      if (lookahead == 'S')
        ADVANCE(50);
      if (lookahead == 'U')
        ADVANCE(61);
      if (lookahead == 'V')
        ADVANCE(63);
      if (lookahead == 'X')
        ADVANCE(511);
      if (lookahead == '[')
        ADVANCE(65);
      if (lookahead == '\\')
        ADVANCE(580);
      if (lookahead == ']')
        ADVANCE(67);
      if (lookahead == '^')
        ADVANCE(68);
      if (lookahead == '_')
        ADVANCE(69);
      if (lookahead == '`')
        ADVANCE(70);
      if (lookahead == 'a')
        ADVANCE(513);
      if (lookahead == 'b')
        ADVANCE(514);
      if (lookahead == 'f')
        ADVANCE(515);
      if (lookahead == 'n')
        ADVANCE(71);
      if (lookahead == 'o')
        ADVANCE(516);
      if (lookahead == 'r')
        ADVANCE(72);
      if (lookahead == 't')
        ADVANCE(73);
      if (lookahead == 'v')
        ADVANCE(74);
      if (lookahead == 'x')
        ADVANCE(517);
      if (lookahead == '{')
        ADVANCE(75);
      if (lookahead == '|')
        ADVANCE(76);
      if (lookahead == '}')
        ADVANCE(77);
      if (lookahead == '~')
        ADVANCE(78);
      if (lookahead == 8902)
        ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(429);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(87);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(88);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 572:
      if (lookahead == '\t')
        ADVANCE(571);
      if (lookahead == '\n')
        ADVANCE(570);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(572);
      if (lookahead == ' ')
        ADVANCE(573);
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
        ADVANCE(17);
      if (lookahead == '+')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(20);
      if (lookahead == '.')
        ADVANCE(426);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(427);
      if (lookahead == ';')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(33);
      if (lookahead == '>')
        ADVANCE(34);
      if (lookahead == '?')
        ADVANCE(35);
      if (lookahead == '@')
        ADVANCE(36);
      if (lookahead == 'A')
        ADVANCE(574);
      if (lookahead == 'B')
        ADVANCE(575);
      if (lookahead == 'C')
        ADVANCE(576);
      if (lookahead == 'D')
        ADVANCE(577);
      if (lookahead == 'E')
        ADVANCE(578);
      if (lookahead == 'F')
        ADVANCE(579);
      if (lookahead == 'G')
        ADVANCE(37);
      if (lookahead == 'H')
        ADVANCE(39);
      if (lookahead == 'L')
        ADVANCE(41);
      if (lookahead == 'N')
        ADVANCE(43);
      if (lookahead == 'O')
        ADVANCE(506);
      if (lookahead == 'R')
        ADVANCE(48);
      if (lookahead == 'S')
        ADVANCE(50);
      if (lookahead == 'U')
        ADVANCE(61);
      if (lookahead == 'V')
        ADVANCE(63);
      if (lookahead == 'X')
        ADVANCE(511);
      if (lookahead == '[')
        ADVANCE(65);
      if (lookahead == '\\')
        ADVANCE(580);
      if (lookahead == ']')
        ADVANCE(67);
      if (lookahead == '^')
        ADVANCE(68);
      if (lookahead == '_')
        ADVANCE(69);
      if (lookahead == '`')
        ADVANCE(70);
      if (lookahead == 'a')
        ADVANCE(513);
      if (lookahead == 'b')
        ADVANCE(514);
      if (lookahead == 'f')
        ADVANCE(515);
      if (lookahead == 'n')
        ADVANCE(71);
      if (lookahead == 'o')
        ADVANCE(516);
      if (lookahead == 'r')
        ADVANCE(72);
      if (lookahead == 't')
        ADVANCE(73);
      if (lookahead == 'v')
        ADVANCE(74);
      if (lookahead == 'x')
        ADVANCE(517);
      if (lookahead == '{')
        ADVANCE(75);
      if (lookahead == '|')
        ADVANCE(76);
      if (lookahead == '}')
        ADVANCE(77);
      if (lookahead == '~')
        ADVANCE(78);
      if (lookahead == 8902)
        ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(429);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(87);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(88);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(571);
      if (lookahead == '\n')
        ADVANCE(570);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(572);
      if (lookahead == ' ')
        ADVANCE(573);
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
        ADVANCE(17);
      if (lookahead == '+')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(20);
      if (lookahead == '.')
        ADVANCE(426);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(427);
      if (lookahead == ';')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(33);
      if (lookahead == '>')
        ADVANCE(34);
      if (lookahead == '?')
        ADVANCE(35);
      if (lookahead == '@')
        ADVANCE(36);
      if (lookahead == 'A')
        ADVANCE(574);
      if (lookahead == 'B')
        ADVANCE(575);
      if (lookahead == 'C')
        ADVANCE(576);
      if (lookahead == 'D')
        ADVANCE(577);
      if (lookahead == 'E')
        ADVANCE(578);
      if (lookahead == 'F')
        ADVANCE(579);
      if (lookahead == 'G')
        ADVANCE(37);
      if (lookahead == 'H')
        ADVANCE(39);
      if (lookahead == 'L')
        ADVANCE(41);
      if (lookahead == 'N')
        ADVANCE(43);
      if (lookahead == 'O')
        ADVANCE(506);
      if (lookahead == 'R')
        ADVANCE(48);
      if (lookahead == 'S')
        ADVANCE(50);
      if (lookahead == 'U')
        ADVANCE(61);
      if (lookahead == 'V')
        ADVANCE(63);
      if (lookahead == 'X')
        ADVANCE(511);
      if (lookahead == '[')
        ADVANCE(65);
      if (lookahead == '\\')
        ADVANCE(580);
      if (lookahead == ']')
        ADVANCE(67);
      if (lookahead == '^')
        ADVANCE(68);
      if (lookahead == '_')
        ADVANCE(69);
      if (lookahead == '`')
        ADVANCE(70);
      if (lookahead == 'a')
        ADVANCE(513);
      if (lookahead == 'b')
        ADVANCE(514);
      if (lookahead == 'f')
        ADVANCE(515);
      if (lookahead == 'n')
        ADVANCE(71);
      if (lookahead == 'o')
        ADVANCE(516);
      if (lookahead == 'r')
        ADVANCE(72);
      if (lookahead == 't')
        ADVANCE(73);
      if (lookahead == 'v')
        ADVANCE(74);
      if (lookahead == 'x')
        ADVANCE(517);
      if (lookahead == '{')
        ADVANCE(75);
      if (lookahead == '|')
        ADVANCE(76);
      if (lookahead == '}')
        ADVANCE(77);
      if (lookahead == '~')
        ADVANCE(78);
      if (lookahead == 8902)
        ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(429);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(87);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(88);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(468);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'E')
        ADVANCE(471);
      if (lookahead == 'S')
        ADVANCE(473);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'A')
        ADVANCE(475);
      if (lookahead == 'R')
        ADVANCE(477);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'C')
        ADVANCE(479);
      if (lookahead == 'E')
        ADVANCE(484);
      if (lookahead == 'L')
        ADVANCE(486);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'M')
        ADVANCE(489);
      if (lookahead == 'N')
        ADVANCE(490);
      if (lookahead == 'O')
        ADVANCE(492);
      if (lookahead == 'S')
        ADVANCE(494);
      if (lookahead == 'T')
        ADVANCE(496);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'F')
        ADVANCE(500);
      if (lookahead == 'S')
        ADVANCE(501);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(572);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 581:
      if (lookahead == '\t')
        ADVANCE(437);
      if (lookahead == '\n')
        ADVANCE(570);
      if (lookahead == 11)
        ADVANCE(89);
      if (lookahead == '\r')
        ADVANCE(581);
      if (lookahead == ' ')
        ADVANCE(431);
      if (lookahead == '!')
        ADVANCE(91);
      if (lookahead == '\"')
        ADVANCE(92);
      if (lookahead == '#')
        ADVANCE(93);
      if (lookahead == '$')
        ADVANCE(94);
      if (lookahead == '%')
        ADVANCE(95);
      if (lookahead == '&')
        ADVANCE(96);
      if (lookahead == '\'')
        ADVANCE(97);
      if (lookahead == '(')
        ADVANCE(98);
      if (lookahead == ')')
        ADVANCE(99);
      if (lookahead == '+')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(102);
      if (lookahead == '.')
        ADVANCE(432);
      if (lookahead == '/')
        ADVANCE(105);
      if (lookahead == ':')
        ADVANCE(433);
      if (lookahead == ';')
        ADVANCE(108);
      if (lookahead == '<')
        ADVANCE(109);
      if (lookahead == '=')
        ADVANCE(110);
      if (lookahead == '>')
        ADVANCE(111);
      if (lookahead == '?')
        ADVANCE(112);
      if (lookahead == '@')
        ADVANCE(113);
      if (lookahead == 'A')
        ADVANCE(582);
      if (lookahead == 'B')
        ADVANCE(583);
      if (lookahead == 'C')
        ADVANCE(584);
      if (lookahead == 'D')
        ADVANCE(585);
      if (lookahead == 'E')
        ADVANCE(586);
      if (lookahead == 'F')
        ADVANCE(587);
      if (lookahead == 'G')
        ADVANCE(114);
      if (lookahead == 'H')
        ADVANCE(116);
      if (lookahead == 'L')
        ADVANCE(118);
      if (lookahead == 'N')
        ADVANCE(120);
      if (lookahead == 'O')
        ADVANCE(558);
      if (lookahead == 'R')
        ADVANCE(125);
      if (lookahead == 'S')
        ADVANCE(127);
      if (lookahead == 'U')
        ADVANCE(138);
      if (lookahead == 'V')
        ADVANCE(140);
      if (lookahead == 'X')
        ADVANCE(563);
      if (lookahead == '[')
        ADVANCE(142);
      if (lookahead == '\\')
        ADVANCE(434);
      if (lookahead == ']')
        ADVANCE(144);
      if (lookahead == '^')
        ADVANCE(145);
      if (lookahead == '_')
        ADVANCE(146);
      if (lookahead == '`')
        ADVANCE(147);
      if (lookahead == 'a')
        ADVANCE(564);
      if (lookahead == 'b')
        ADVANCE(565);
      if (lookahead == 'f')
        ADVANCE(566);
      if (lookahead == 'n')
        ADVANCE(148);
      if (lookahead == 'o')
        ADVANCE(567);
      if (lookahead == 'r')
        ADVANCE(149);
      if (lookahead == 't')
        ADVANCE(150);
      if (lookahead == 'v')
        ADVANCE(151);
      if (lookahead == 'x')
        ADVANCE(568);
      if (lookahead == '{')
        ADVANCE(152);
      if (lookahead == '|')
        ADVANCE(153);
      if (lookahead == '}')
        ADVANCE(154);
      if (lookahead == '~')
        ADVANCE(155);
      if (lookahead == 8902)
        ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(435);
      if (('I' <= lookahead && lookahead <= 'Z'))
        ADVANCE(163);
      if (('c' <= lookahead && lookahead <= 'z'))
        ADVANCE(164);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(520);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'E')
        ADVANCE(523);
      if (lookahead == 'S')
        ADVANCE(525);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'A')
        ADVANCE(527);
      if (lookahead == 'R')
        ADVANCE(529);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'C')
        ADVANCE(531);
      if (lookahead == 'E')
        ADVANCE(536);
      if (lookahead == 'L')
        ADVANCE(538);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'M')
        ADVANCE(541);
      if (lookahead == 'N')
        ADVANCE(542);
      if (lookahead == 'O')
        ADVANCE(544);
      if (lookahead == 'S')
        ADVANCE(546);
      if (lookahead == 'T')
        ADVANCE(548);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__ascii_large);
      if (lookahead == 'F')
        ADVANCE(552);
      if (lookahead == 'S')
        ADVANCE(553);
      END_STATE();
    case 588:
      if (lookahead == '\n')
        ADVANCE(589);
      if (lookahead == '\r')
        ADVANCE(592);
      if (lookahead == '-')
        ADVANCE(271);
      if (lookahead == '[')
        ADVANCE(179);
      if (lookahead == '\\')
        SKIP(593);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(588);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(594);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 589:
      if (lookahead == '\n')
        ADVANCE(589);
      if (lookahead == '\r')
        ADVANCE(589);
      if (lookahead == '-')
        ADVANCE(167);
      if (lookahead == '[')
        ADVANCE(173);
      if (lookahead == '\\')
        ADVANCE(590);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(589);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(591);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
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
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(591);
      if (lookahead == '-')
        ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(591);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 592:
      if (lookahead == '\n')
        ADVANCE(589);
      if (lookahead == '\r')
        ADVANCE(592);
      if (lookahead == '-')
        ADVANCE(271);
      if (lookahead == '[')
        ADVANCE(179);
      if (lookahead == '\\')
        SKIP(593);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(588);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(594);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      END_STATE();
    case 593:
      if (lookahead == 'n')
        SKIP(588);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_constructor_identifier);
      if (lookahead == '\'')
        ADVANCE(594);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(594);
      END_STATE();
    case 595:
      if (lookahead == '\n')
        ADVANCE(596);
      if (lookahead == '\r')
        ADVANCE(598);
      if (lookahead == '-')
        ADVANCE(271);
      if (lookahead == '@')
        ADVANCE(113);
      if (lookahead == '[')
        ADVANCE(142);
      if (lookahead == '\\')
        ADVANCE(434);
      if (lookahead == ']')
        ADVANCE(144);
      if (lookahead == '^')
        ADVANCE(145);
      if (lookahead == '_')
        ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(595);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(163);
      END_STATE();
    case 596:
      if (lookahead == '\n')
        ADVANCE(596);
      if (lookahead == '\r')
        ADVANCE(596);
      if (lookahead == '-')
        ADVANCE(167);
      if (lookahead == '@')
        ADVANCE(36);
      if (lookahead == '[')
        ADVANCE(65);
      if (lookahead == '\\')
        ADVANCE(597);
      if (lookahead == ']')
        ADVANCE(67);
      if (lookahead == '^')
        ADVANCE(68);
      if (lookahead == '_')
        ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(596);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(87);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_BSLASH);
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
      if (lookahead == '-')
        ADVANCE(271);
      if (lookahead == '@')
        ADVANCE(113);
      if (lookahead == '[')
        ADVANCE(142);
      if (lookahead == '\\')
        ADVANCE(434);
      if (lookahead == ']')
        ADVANCE(144);
      if (lookahead == '^')
        ADVANCE(145);
      if (lookahead == '_')
        ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(595);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(163);
      END_STATE();
    case 599:
      if (lookahead == '\n')
        ADVANCE(600);
      if (lookahead == '\r')
        ADVANCE(603);
      if (lookahead == '\'')
        ADVANCE(97);
      if (lookahead == '-')
        ADVANCE(271);
      if (lookahead == '\\')
        SKIP(604);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(605);
      END_STATE();
    case 600:
      if (lookahead == '\n')
        ADVANCE(600);
      if (lookahead == '\r')
        ADVANCE(600);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(167);
      if (lookahead == '\\')
        ADVANCE(601);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(602);
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
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 603:
      if (lookahead == '\n')
        ADVANCE(600);
      if (lookahead == '\r')
        ADVANCE(603);
      if (lookahead == '\'')
        ADVANCE(97);
      if (lookahead == '-')
        ADVANCE(271);
      if (lookahead == '\\')
        SKIP(604);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(599);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(605);
      END_STATE();
    case 604:
      if (lookahead == 'n')
        SKIP(599);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH);
      END_STATE();
    case 606:
      if (lookahead == '\n')
        ADVANCE(607);
      if (lookahead == '\r')
        ADVANCE(610);
      if (lookahead == '\'')
        ADVANCE(97);
      if (lookahead == '-')
        ADVANCE(271);
      if (lookahead == '\\')
        SKIP(611);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(606);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(612);
      END_STATE();
    case 607:
      if (lookahead == '\n')
        ADVANCE(607);
      if (lookahead == '\r')
        ADVANCE(607);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '-')
        ADVANCE(167);
      if (lookahead == '\\')
        ADVANCE(608);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(607);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(609);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 608:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(607);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 610:
      if (lookahead == '\n')
        ADVANCE(607);
      if (lookahead == '\r')
        ADVANCE(610);
      if (lookahead == '\'')
        ADVANCE(97);
      if (lookahead == '-')
        ADVANCE(271);
      if (lookahead == '\\')
        SKIP(611);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(606);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(612);
      END_STATE();
    case 611:
      if (lookahead == 'n')
        SKIP(606);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH);
      END_STATE();
    case 613:
      if (lookahead == '\n')
        ADVANCE(614);
      if (lookahead == '\r')
        ADVANCE(617);
      if (lookahead == '(')
        ADVANCE(98);
      if (lookahead == ')')
        ADVANCE(99);
      if (lookahead == ',')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(271);
      if (lookahead == ':')
        ADVANCE(618);
      if (lookahead == '\\')
        SKIP(619);
      if (lookahead == '}')
        ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(613);
      END_STATE();
    case 614:
      if (lookahead == '\n')
        ADVANCE(614);
      if (lookahead == '\r')
        ADVANCE(614);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(17);
      if (lookahead == ',')
        ADVANCE(19);
      if (lookahead == '-')
        ADVANCE(167);
      if (lookahead == ':')
        ADVANCE(615);
      if (lookahead == '\\')
        ADVANCE(616);
      if (lookahead == '}')
        ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(614);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 615:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == ':')
        ADVANCE(30);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 616:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(614);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 617:
      if (lookahead == '\n')
        ADVANCE(614);
      if (lookahead == '\r')
        ADVANCE(617);
      if (lookahead == '(')
        ADVANCE(98);
      if (lookahead == ')')
        ADVANCE(99);
      if (lookahead == ',')
        ADVANCE(101);
      if (lookahead == '-')
        ADVANCE(271);
      if (lookahead == ':')
        ADVANCE(618);
      if (lookahead == '\\')
        SKIP(619);
      if (lookahead == '}')
        ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(613);
      END_STATE();
    case 618:
      if (lookahead == ':')
        ADVANCE(107);
      END_STATE();
    case 619:
      if (lookahead == 'n')
        SKIP(613);
      END_STATE();
    case 620:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(621);
      if (lookahead == '\r')
        ADVANCE(623);
      if (lookahead == '\"')
        ADVANCE(92);
      if (lookahead == '\'')
        ADVANCE(97);
      if (lookahead == '(')
        ADVANCE(98);
      if (lookahead == '-')
        ADVANCE(271);
      if (lookahead == '0')
        ADVANCE(272);
      if (lookahead == '[')
        ADVANCE(179);
      if (lookahead == '\\')
        SKIP(624);
      if (lookahead == '_')
        ADVANCE(278);
      if (lookahead == 'c')
        ADVANCE(280);
      if (lookahead == 'd')
        ADVANCE(288);
      if (lookahead == 'e')
        ADVANCE(305);
      if (lookahead == 'f')
        ADVANCE(309);
      if (lookahead == 'h')
        ADVANCE(459);
      if (lookahead == 'i')
        ADVANCE(316);
      if (lookahead == 'l')
        ADVANCE(335);
      if (lookahead == 'm')
        ADVANCE(338);
      if (lookahead == 'n')
        ADVANCE(344);
      if (lookahead == 'o')
        ADVANCE(351);
      if (lookahead == 't')
        ADVANCE(353);
      if (lookahead == 'w')
        ADVANCE(360);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(620);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(162);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(365);
      END_STATE();
    case 621:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(621);
      if (lookahead == '\r')
        ADVANCE(621);
      if (lookahead == '\"')
        ADVANCE(10);
      if (lookahead == '\'')
        ADVANCE(15);
      if (lookahead == '(')
        ADVANCE(16);
      if (lookahead == '-')
        ADVANCE(167);
      if (lookahead == '0')
        ADVANCE(168);
      if (lookahead == '[')
        ADVANCE(173);
      if (lookahead == '\\')
        ADVANCE(622);
      if (lookahead == '_')
        ADVANCE(181);
      if (lookahead == 'c')
        ADVANCE(183);
      if (lookahead == 'd')
        ADVANCE(191);
      if (lookahead == 'e')
        ADVANCE(208);
      if (lookahead == 'f')
        ADVANCE(212);
      if (lookahead == 'h')
        ADVANCE(449);
      if (lookahead == 'i')
        ADVANCE(219);
      if (lookahead == 'l')
        ADVANCE(238);
      if (lookahead == 'm')
        ADVANCE(241);
      if (lookahead == 'n')
        ADVANCE(247);
      if (lookahead == 'o')
        ADVANCE(254);
      if (lookahead == 't')
        ADVANCE(256);
      if (lookahead == 'w')
        ADVANCE(263);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(621);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(86);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(268);
      ADVANCE(8);
      END_STATE();
    case 622:
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(621);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 623:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\n')
        ADVANCE(621);
      if (lookahead == '\r')
        ADVANCE(623);
      if (lookahead == '\"')
        ADVANCE(92);
      if (lookahead == '\'')
        ADVANCE(97);
      if (lookahead == '(')
        ADVANCE(98);
      if (lookahead == '-')
        ADVANCE(271);
      if (lookahead == '0')
        ADVANCE(272);
      if (lookahead == '[')
        ADVANCE(179);
      if (lookahead == '\\')
        SKIP(624);
      if (lookahead == '_')
        ADVANCE(278);
      if (lookahead == 'c')
        ADVANCE(280);
      if (lookahead == 'd')
        ADVANCE(288);
      if (lookahead == 'e')
        ADVANCE(305);
      if (lookahead == 'f')
        ADVANCE(309);
      if (lookahead == 'h')
        ADVANCE(459);
      if (lookahead == 'i')
        ADVANCE(316);
      if (lookahead == 'l')
        ADVANCE(335);
      if (lookahead == 'm')
        ADVANCE(338);
      if (lookahead == 'n')
        ADVANCE(344);
      if (lookahead == 'o')
        ADVANCE(351);
      if (lookahead == 't')
        ADVANCE(353);
      if (lookahead == 'w')
        ADVANCE(360);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(620);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(162);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(365);
      END_STATE();
    case 624:
      if (lookahead == 'n')
        SKIP(620);
      END_STATE();
    case 625:
      if (lookahead == '\t')
        ADVANCE(437);
      if (lookahead == '\n')
        ADVANCE(626);
      if (lookahead == 11)
        ADVANCE(89);
      if (lookahead == '\r')
        ADVANCE(631);
      if (lookahead == ' ')
        ADVANCE(431);
      if (lookahead == '!')
        ADVANCE(91);
      if (lookahead == '\"')
        ADVANCE(92);
      if (lookahead == '#')
        ADVANCE(93);
      if (lookahead == '$')
        ADVANCE(94);
      if (lookahead == '%')
        ADVANCE(95);
      if (lookahead == '&')
        ADVANCE(96);
      if (lookahead == '\'')
        ADVANCE(97);
      if (lookahead == '(')
        ADVANCE(98);
      if (lookahead == ')')
        ADVANCE(99);
      if (lookahead == '+')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(102);
      if (lookahead == '.')
        ADVANCE(432);
      if (lookahead == '/')
        ADVANCE(105);
      if (lookahead == ':')
        ADVANCE(433);
      if (lookahead == ';')
        ADVANCE(108);
      if (lookahead == '<')
        ADVANCE(109);
      if (lookahead == '=')
        ADVANCE(110);
      if (lookahead == '>')
        ADVANCE(111);
      if (lookahead == '?')
        ADVANCE(112);
      if (lookahead == '@')
        ADVANCE(113);
      if (lookahead == '[')
        ADVANCE(142);
      if (lookahead == '\\')
        ADVANCE(434);
      if (lookahead == ']')
        ADVANCE(144);
      if (lookahead == '^')
        ADVANCE(145);
      if (lookahead == '_')
        ADVANCE(146);
      if (lookahead == '`')
        ADVANCE(147);
      if (lookahead == '{')
        ADVANCE(152);
      if (lookahead == '|')
        ADVANCE(153);
      if (lookahead == '}')
        ADVANCE(154);
      if (lookahead == '~')
        ADVANCE(155);
      if (lookahead == 8902)
        ADVANCE(156);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(435);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(163);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(164);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\t')
        ADVANCE(627);
      if (lookahead == '\n')
        ADVANCE(626);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(628);
      if (lookahead == ' ')
        ADVANCE(629);
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
        ADVANCE(17);
      if (lookahead == '+')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(20);
      if (lookahead == '.')
        ADVANCE(426);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(427);
      if (lookahead == ';')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(33);
      if (lookahead == '>')
        ADVANCE(34);
      if (lookahead == '?')
        ADVANCE(35);
      if (lookahead == '@')
        ADVANCE(36);
      if (lookahead == '[')
        ADVANCE(65);
      if (lookahead == '\\')
        ADVANCE(630);
      if (lookahead == ']')
        ADVANCE(67);
      if (lookahead == '^')
        ADVANCE(68);
      if (lookahead == '_')
        ADVANCE(69);
      if (lookahead == '`')
        ADVANCE(70);
      if (lookahead == '{')
        ADVANCE(75);
      if (lookahead == '|')
        ADVANCE(76);
      if (lookahead == '}')
        ADVANCE(77);
      if (lookahead == '~')
        ADVANCE(78);
      if (lookahead == 8902)
        ADVANCE(79);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(429);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(88);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym__tab);
      if (lookahead == '\t')
        ADVANCE(627);
      if (lookahead == '\n')
        ADVANCE(626);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(628);
      if (lookahead == ' ')
        ADVANCE(629);
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
        ADVANCE(17);
      if (lookahead == '+')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(20);
      if (lookahead == '.')
        ADVANCE(426);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(427);
      if (lookahead == ';')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(33);
      if (lookahead == '>')
        ADVANCE(34);
      if (lookahead == '?')
        ADVANCE(35);
      if (lookahead == '@')
        ADVANCE(36);
      if (lookahead == '[')
        ADVANCE(65);
      if (lookahead == '\\')
        ADVANCE(630);
      if (lookahead == ']')
        ADVANCE(67);
      if (lookahead == '^')
        ADVANCE(68);
      if (lookahead == '_')
        ADVANCE(69);
      if (lookahead == '`')
        ADVANCE(70);
      if (lookahead == '{')
        ADVANCE(75);
      if (lookahead == '|')
        ADVANCE(76);
      if (lookahead == '}')
        ADVANCE(77);
      if (lookahead == '~')
        ADVANCE(78);
      if (lookahead == 8902)
        ADVANCE(79);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(429);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(88);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 628:
      if (lookahead == '\t')
        ADVANCE(627);
      if (lookahead == '\n')
        ADVANCE(626);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(628);
      if (lookahead == ' ')
        ADVANCE(629);
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
        ADVANCE(17);
      if (lookahead == '+')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(20);
      if (lookahead == '.')
        ADVANCE(426);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(427);
      if (lookahead == ';')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(33);
      if (lookahead == '>')
        ADVANCE(34);
      if (lookahead == '?')
        ADVANCE(35);
      if (lookahead == '@')
        ADVANCE(36);
      if (lookahead == '[')
        ADVANCE(65);
      if (lookahead == '\\')
        ADVANCE(630);
      if (lookahead == ']')
        ADVANCE(67);
      if (lookahead == '^')
        ADVANCE(68);
      if (lookahead == '_')
        ADVANCE(69);
      if (lookahead == '`')
        ADVANCE(70);
      if (lookahead == '{')
        ADVANCE(75);
      if (lookahead == '|')
        ADVANCE(76);
      if (lookahead == '}')
        ADVANCE(77);
      if (lookahead == '~')
        ADVANCE(78);
      if (lookahead == 8902)
        ADVANCE(79);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(429);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(88);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t')
        ADVANCE(627);
      if (lookahead == '\n')
        ADVANCE(626);
      if (lookahead == 11)
        ADVANCE(3);
      if (lookahead == '\r')
        ADVANCE(628);
      if (lookahead == ' ')
        ADVANCE(629);
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
        ADVANCE(17);
      if (lookahead == '+')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(20);
      if (lookahead == '.')
        ADVANCE(426);
      if (lookahead == '/')
        ADVANCE(28);
      if (lookahead == ':')
        ADVANCE(427);
      if (lookahead == ';')
        ADVANCE(31);
      if (lookahead == '<')
        ADVANCE(32);
      if (lookahead == '=')
        ADVANCE(33);
      if (lookahead == '>')
        ADVANCE(34);
      if (lookahead == '?')
        ADVANCE(35);
      if (lookahead == '@')
        ADVANCE(36);
      if (lookahead == '[')
        ADVANCE(65);
      if (lookahead == '\\')
        ADVANCE(630);
      if (lookahead == ']')
        ADVANCE(67);
      if (lookahead == '^')
        ADVANCE(68);
      if (lookahead == '_')
        ADVANCE(69);
      if (lookahead == '`')
        ADVANCE(70);
      if (lookahead == '{')
        ADVANCE(75);
      if (lookahead == '|')
        ADVANCE(76);
      if (lookahead == '}')
        ADVANCE(77);
      if (lookahead == '~')
        ADVANCE(78);
      if (lookahead == 8902)
        ADVANCE(79);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(429);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(87);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(88);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '-')
        ADVANCE(4);
      if (lookahead == 'n')
        ADVANCE(628);
      if (lookahead != 0)
        ADVANCE(8);
      END_STATE();
    case 631:
      if (lookahead == '\t')
        ADVANCE(437);
      if (lookahead == '\n')
        ADVANCE(626);
      if (lookahead == 11)
        ADVANCE(89);
      if (lookahead == '\r')
        ADVANCE(631);
      if (lookahead == ' ')
        ADVANCE(431);
      if (lookahead == '!')
        ADVANCE(91);
      if (lookahead == '\"')
        ADVANCE(92);
      if (lookahead == '#')
        ADVANCE(93);
      if (lookahead == '$')
        ADVANCE(94);
      if (lookahead == '%')
        ADVANCE(95);
      if (lookahead == '&')
        ADVANCE(96);
      if (lookahead == '\'')
        ADVANCE(97);
      if (lookahead == '(')
        ADVANCE(98);
      if (lookahead == ')')
        ADVANCE(99);
      if (lookahead == '+')
        ADVANCE(100);
      if (lookahead == '-')
        ADVANCE(102);
      if (lookahead == '.')
        ADVANCE(432);
      if (lookahead == '/')
        ADVANCE(105);
      if (lookahead == ':')
        ADVANCE(433);
      if (lookahead == ';')
        ADVANCE(108);
      if (lookahead == '<')
        ADVANCE(109);
      if (lookahead == '=')
        ADVANCE(110);
      if (lookahead == '>')
        ADVANCE(111);
      if (lookahead == '?')
        ADVANCE(112);
      if (lookahead == '@')
        ADVANCE(113);
      if (lookahead == '[')
        ADVANCE(142);
      if (lookahead == '\\')
        ADVANCE(434);
      if (lookahead == ']')
        ADVANCE(144);
      if (lookahead == '^')
        ADVANCE(145);
      if (lookahead == '_')
        ADVANCE(146);
      if (lookahead == '`')
        ADVANCE(147);
      if (lookahead == '{')
        ADVANCE(152);
      if (lookahead == '|')
        ADVANCE(153);
      if (lookahead == '}')
        ADVANCE(154);
      if (lookahead == '~')
        ADVANCE(155);
      if (lookahead == 8902)
        ADVANCE(156);
      if (lookahead == '8' ||
          lookahead == '9')
        ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(435);
      if (('A' <= lookahead && lookahead <= 'Z'))
        ADVANCE(163);
      if (('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(164);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 165},
  [2] = {.lex_state = 367},
  [3] = {.lex_state = 382},
  [4] = {.lex_state = 387},
  [5] = {.lex_state = 416},
  [6] = {.lex_state = 416},
  [7] = {.lex_state = 416},
  [8] = {.lex_state = 382},
  [9] = {.lex_state = 165},
  [10] = {.lex_state = 423},
  [11] = {.lex_state = 436},
  [12] = {.lex_state = 165},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 165},
  [15] = {.lex_state = 165},
  [16] = {.lex_state = 165},
  [17] = {.lex_state = 165},
  [18] = {.lex_state = 367},
  [19] = {.lex_state = 444},
  [20] = {.lex_state = 416},
  [21] = {.lex_state = 444},
  [22] = {.lex_state = 444},
  [23] = {.lex_state = 165},
  [24] = {.lex_state = 165},
  [25] = {.lex_state = 165},
  [26] = {.lex_state = 416},
  [27] = {.lex_state = 416},
  [28] = {.lex_state = 416},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 416},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 465},
  [39] = {.lex_state = 436},
  [40] = {.lex_state = 436},
  [41] = {.lex_state = 436},
  [42] = {.lex_state = 436},
  [43] = {.lex_state = 165},
  [44] = {.lex_state = 436},
  [45] = {.lex_state = 436},
  [46] = {.lex_state = 569},
  [47] = {.lex_state = 436},
  [48] = {.lex_state = 436},
  [49] = {.lex_state = 165},
  [50] = {.lex_state = 165},
  [51] = {.lex_state = 416},
  [52] = {.lex_state = 367},
  [53] = {.lex_state = 444},
  [54] = {.lex_state = 416},
  [55] = {.lex_state = 416},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 165},
  [58] = {.lex_state = 165},
  [59] = {.lex_state = 165},
  [60] = {.lex_state = 165},
  [61] = {.lex_state = 165},
  [62] = {.lex_state = 165},
  [63] = {.lex_state = 588},
  [64] = {.lex_state = 416},
  [65] = {.lex_state = 416},
  [66] = {.lex_state = 165},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 595},
  [70] = {.lex_state = 599},
  [71] = {.lex_state = 606},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 436},
  [74] = {.lex_state = 436},
  [75] = {.lex_state = 595},
  [76] = {.lex_state = 599},
  [77] = {.lex_state = 606},
  [78] = {.lex_state = 436},
  [79] = {.lex_state = 436},
  [80] = {.lex_state = 165},
  [81] = {.lex_state = 165},
  [82] = {.lex_state = 367},
  [83] = {.lex_state = 613},
  [84] = {.lex_state = 613},
  [85] = {.lex_state = 165},
  [86] = {.lex_state = 416},
  [87] = {.lex_state = 165},
  [88] = {.lex_state = 165},
  [89] = {.lex_state = 613},
  [90] = {.lex_state = 620},
  [91] = {.lex_state = 620},
  [92] = {.lex_state = 620},
  [93] = {.lex_state = 416},
  [94] = {.lex_state = 165},
  [95] = {.lex_state = 588},
  [96] = {.lex_state = 165},
  [97] = {.lex_state = 416},
  [98] = {.lex_state = 165},
  [99] = {.lex_state = 165},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 599},
  [103] = {.lex_state = 599},
  [104] = {.lex_state = 606},
  [105] = {.lex_state = 606},
  [106] = {.lex_state = 436},
  [107] = {.lex_state = 436},
  [108] = {.lex_state = 436},
  [109] = {.lex_state = 436},
  [110] = {.lex_state = 625},
  [111] = {.lex_state = 625},
  [112] = {.lex_state = 416},
  [113] = {.lex_state = 367},
  [114] = {.lex_state = 613},
  [115] = {.lex_state = 416},
  [116] = {.lex_state = 165},
  [117] = {.lex_state = 620},
  [118] = {.lex_state = 416},
  [119] = {.lex_state = 416},
  [120] = {.lex_state = 165},
  [121] = {.lex_state = 613},
  [122] = {.lex_state = 165},
  [123] = {.lex_state = 613},
  [124] = {.lex_state = 613},
  [125] = {.lex_state = 613},
  [126] = {.lex_state = 165},
  [127] = {.lex_state = 599},
  [128] = {.lex_state = 606},
  [129] = {.lex_state = 436},
  [130] = {.lex_state = 625},
  [131] = {.lex_state = 613},
  [132] = {.lex_state = 416},
  [133] = {.lex_state = 367},
  [134] = {.lex_state = 367},
  [135] = {.lex_state = 613},
  [136] = {.lex_state = 165},
  [137] = {.lex_state = 367},
  [138] = {.lex_state = 613},
  [139] = {.lex_state = 613},
  [140] = {.lex_state = 416},
  [141] = {.lex_state = 165},
  [142] = {.lex_state = 416},
  [143] = {.lex_state = 613},
  [144] = {.lex_state = 588},
  [145] = {.lex_state = 416},
  [146] = {.lex_state = 613},
  [147] = {.lex_state = 588},
  [148] = {.lex_state = 165},
  [149] = {.lex_state = 613},
  [150] = {.lex_state = 613},
  [151] = {.lex_state = 613},
  [152] = {.lex_state = 416},
  [153] = {.lex_state = 613},
  [154] = {.lex_state = 613},
  [155] = {.lex_state = 613},
  [156] = {.lex_state = 416},
  [157] = {.lex_state = 613},
  [158] = {.lex_state = 367},
  [159] = {.lex_state = 613},
  [160] = {.lex_state = 165},
  [161] = {.lex_state = 613},
  [162] = {.lex_state = 613},
  [163] = {.lex_state = 588},
  [164] = {.lex_state = 416},
  [165] = {.lex_state = 613},
  [166] = {.lex_state = 588},
  [167] = {.lex_state = 165},
  [168] = {.lex_state = 613},
  [169] = {.lex_state = 416},
  [170] = {.lex_state = 613},
  [171] = {.lex_state = 165},
  [172] = {.lex_state = 613},
  [173] = {.lex_state = 613},
  [174] = {.lex_state = 367},
  [175] = {.lex_state = 613},
  [176] = {.lex_state = 416},
  [177] = {.lex_state = 613},
  [178] = {.lex_state = 613},
  [179] = {.lex_state = 613},
  [180] = {.lex_state = 613},
  [181] = {.lex_state = 613},
  [182] = {.lex_state = 165},
  [183] = {.lex_state = 613},
  [184] = {.lex_state = 613},
  [185] = {.lex_state = 613},
  [186] = {.lex_state = 367},
  [187] = {.lex_state = 613},
  [188] = {.lex_state = 613},
  [189] = {.lex_state = 165},
  [190] = {.lex_state = 613},
  [191] = {.lex_state = 613},
  [192] = {.lex_state = 613},
  [193] = {.lex_state = 613},
  [194] = {.lex_state = 165},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(3),
    [anon_sym_DOT_DOT] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(3),
    [anon_sym_COLON_COLON] = ACTIONS(3),
    [anon_sym__] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [sym_float] = ACTIONS(8),
    [anon_sym_SQUOTE] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(3),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(8),
    [sym__ascii_large] = ACTIONS(3),
    [anon_sym_BANG] = ACTIONS(3),
    [anon_sym_POUND] = ACTIONS(3),
    [anon_sym_DOLLAR] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(3),
    [anon_sym_AMP] = ACTIONS(3),
    [anon_sym_1] = ACTIONS(3),
    [anon_sym_PLUS] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(3),
    [anon_sym_LT] = ACTIONS(3),
    [anon_sym_GT] = ACTIONS(3),
    [anon_sym_QMARK] = ACTIONS(3),
    [anon_sym_AT] = ACTIONS(3),
    [anon_sym_CARET] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_TILDE] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(3),
    [sym__vertical_tab] = ACTIONS(3),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(8),
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
    [sym__integer_literal] = ACTIONS(8),
  },
  [1] = {
    [sym_program] = STATE(13),
    [sym__statement] = STATE(14),
    [sym_module] = STATE(15),
    [sym_import_declaration] = STATE(15),
    [sym__top_level_declaration] = STATE(15),
    [sym_algebraic_datatype] = STATE(16),
    [sym_newtype] = STATE(16),
    [sym_type_synonym] = STATE(16),
    [sym__literal] = STATE(15),
    [sym__identifier] = STATE(15),
    [sym_reserved_identifier] = STATE(8),
    [sym_integer] = STATE(9),
    [sym_char] = STATE(9),
    [sym_string] = STATE(9),
    [aux_sym_program_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(10),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(16),
    [anon_sym_data] = ACTIONS(18),
    [anon_sym_newtype] = ACTIONS(20),
    [anon_sym_type] = ACTIONS(22),
    [sym_variable_identifier] = ACTIONS(24),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_in] = ACTIONS(14),
    [anon_sym_infix] = ACTIONS(14),
    [anon_sym_infixl] = ACTIONS(14),
    [anon_sym_infixr] = ACTIONS(14),
    [anon_sym_instance] = ACTIONS(14),
    [anon_sym_let] = ACTIONS(14),
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(28),
    [anon_sym_SQUOTE] = ACTIONS(30),
    [anon_sym_DQUOTE] = ACTIONS(32),
    [sym__integer_literal] = ACTIONS(34),
    [sym__octal_literal] = ACTIONS(34),
    [sym__hexidecimal_literal] = ACTIONS(34),
  },
  [2] = {
    [sym_module_identifier] = ACTIONS(36),
    [sym_comment] = ACTIONS(26),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(38),
    [anon_sym_module] = ACTIONS(40),
    [anon_sym_where] = ACTIONS(40),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_COMMA] = ACTIONS(40),
    [anon_sym_RPAREN] = ACTIONS(40),
    [anon_sym_import] = ACTIONS(40),
    [anon_sym_data] = ACTIONS(40),
    [anon_sym_EQ] = ACTIONS(40),
    [anon_sym_newtype] = ACTIONS(40),
    [anon_sym_LBRACE] = ACTIONS(40),
    [anon_sym_RBRACE] = ACTIONS(40),
    [anon_sym_type] = ACTIONS(40),
    [sym_variable_identifier] = ACTIONS(42),
    [sym_constructor_identifier] = ACTIONS(42),
    [sym_module_identifier] = ACTIONS(42),
    [anon_sym_case] = ACTIONS(40),
    [anon_sym_class] = ACTIONS(40),
    [anon_sym_default] = ACTIONS(40),
    [anon_sym_deriving] = ACTIONS(40),
    [anon_sym_do] = ACTIONS(40),
    [anon_sym_else] = ACTIONS(40),
    [anon_sym_foreign] = ACTIONS(40),
    [anon_sym_if] = ACTIONS(40),
    [anon_sym_in] = ACTIONS(40),
    [anon_sym_infix] = ACTIONS(40),
    [anon_sym_infixl] = ACTIONS(40),
    [anon_sym_infixr] = ACTIONS(40),
    [anon_sym_instance] = ACTIONS(40),
    [anon_sym_let] = ACTIONS(40),
    [anon_sym_of] = ACTIONS(40),
    [anon_sym_then] = ACTIONS(40),
    [anon_sym__] = ACTIONS(40),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(40),
    [anon_sym_DQUOTE] = ACTIONS(40),
    [sym__integer_literal] = ACTIONS(40),
    [sym__octal_literal] = ACTIONS(40),
    [sym__hexidecimal_literal] = ACTIONS(40),
  },
  [4] = {
    [sym__identifier] = STATE(22),
    [sym_reserved_identifier] = STATE(21),
    [anon_sym_where] = ACTIONS(44),
    [anon_sym_qualified] = ACTIONS(46),
    [sym_variable_identifier] = ACTIONS(48),
    [sym_constructor_identifier] = ACTIONS(48),
    [sym_module_identifier] = ACTIONS(48),
    [anon_sym_case] = ACTIONS(44),
    [anon_sym_class] = ACTIONS(44),
    [anon_sym_default] = ACTIONS(44),
    [anon_sym_deriving] = ACTIONS(44),
    [anon_sym_do] = ACTIONS(44),
    [anon_sym_else] = ACTIONS(44),
    [anon_sym_foreign] = ACTIONS(44),
    [anon_sym_if] = ACTIONS(44),
    [anon_sym_in] = ACTIONS(44),
    [anon_sym_infix] = ACTIONS(44),
    [anon_sym_infixl] = ACTIONS(44),
    [anon_sym_infixr] = ACTIONS(44),
    [anon_sym_instance] = ACTIONS(44),
    [anon_sym_let] = ACTIONS(44),
    [anon_sym_of] = ACTIONS(44),
    [anon_sym_then] = ACTIONS(44),
    [anon_sym__] = ACTIONS(44),
    [sym_comment] = ACTIONS(26),
  },
  [5] = {
    [sym__identifier] = STATE(23),
    [sym_simple_type] = STATE(24),
    [sym_reserved_identifier] = STATE(8),
    [aux_sym_constructors_repeat1] = STATE(25),
    [anon_sym_where] = ACTIONS(14),
    [sym_variable_identifier] = ACTIONS(24),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_in] = ACTIONS(14),
    [anon_sym_infix] = ACTIONS(14),
    [anon_sym_infixl] = ACTIONS(14),
    [anon_sym_infixr] = ACTIONS(14),
    [anon_sym_instance] = ACTIONS(14),
    [anon_sym_let] = ACTIONS(14),
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(26),
  },
  [6] = {
    [sym__identifier] = STATE(28),
    [sym_simple_type] = STATE(29),
    [sym_reserved_identifier] = STATE(27),
    [aux_sym_constructors_repeat1] = STATE(30),
    [anon_sym_where] = ACTIONS(50),
    [sym_variable_identifier] = ACTIONS(52),
    [sym_constructor_identifier] = ACTIONS(52),
    [sym_module_identifier] = ACTIONS(52),
    [anon_sym_case] = ACTIONS(50),
    [anon_sym_class] = ACTIONS(50),
    [anon_sym_default] = ACTIONS(50),
    [anon_sym_deriving] = ACTIONS(50),
    [anon_sym_do] = ACTIONS(50),
    [anon_sym_else] = ACTIONS(50),
    [anon_sym_foreign] = ACTIONS(50),
    [anon_sym_if] = ACTIONS(50),
    [anon_sym_in] = ACTIONS(50),
    [anon_sym_infix] = ACTIONS(50),
    [anon_sym_infixl] = ACTIONS(50),
    [anon_sym_infixr] = ACTIONS(50),
    [anon_sym_instance] = ACTIONS(50),
    [anon_sym_let] = ACTIONS(50),
    [anon_sym_of] = ACTIONS(50),
    [anon_sym_then] = ACTIONS(50),
    [anon_sym__] = ACTIONS(50),
    [sym_comment] = ACTIONS(26),
  },
  [7] = {
    [sym__identifier] = STATE(28),
    [sym_simple_type] = STATE(31),
    [sym_reserved_identifier] = STATE(27),
    [aux_sym_constructors_repeat1] = STATE(30),
    [anon_sym_where] = ACTIONS(50),
    [sym_variable_identifier] = ACTIONS(52),
    [sym_constructor_identifier] = ACTIONS(52),
    [sym_module_identifier] = ACTIONS(52),
    [anon_sym_case] = ACTIONS(50),
    [anon_sym_class] = ACTIONS(50),
    [anon_sym_default] = ACTIONS(50),
    [anon_sym_deriving] = ACTIONS(50),
    [anon_sym_do] = ACTIONS(50),
    [anon_sym_else] = ACTIONS(50),
    [anon_sym_foreign] = ACTIONS(50),
    [anon_sym_if] = ACTIONS(50),
    [anon_sym_in] = ACTIONS(50),
    [anon_sym_infix] = ACTIONS(50),
    [anon_sym_infixl] = ACTIONS(50),
    [anon_sym_infixr] = ACTIONS(50),
    [anon_sym_instance] = ACTIONS(50),
    [anon_sym_let] = ACTIONS(50),
    [anon_sym_of] = ACTIONS(50),
    [anon_sym_then] = ACTIONS(50),
    [anon_sym__] = ACTIONS(50),
    [sym_comment] = ACTIONS(26),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(54),
    [anon_sym_module] = ACTIONS(56),
    [anon_sym_where] = ACTIONS(56),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_COMMA] = ACTIONS(56),
    [anon_sym_RPAREN] = ACTIONS(56),
    [anon_sym_import] = ACTIONS(56),
    [anon_sym_data] = ACTIONS(56),
    [anon_sym_EQ] = ACTIONS(56),
    [anon_sym_newtype] = ACTIONS(56),
    [anon_sym_LBRACE] = ACTIONS(56),
    [anon_sym_RBRACE] = ACTIONS(56),
    [anon_sym_type] = ACTIONS(56),
    [sym_variable_identifier] = ACTIONS(58),
    [sym_constructor_identifier] = ACTIONS(58),
    [sym_module_identifier] = ACTIONS(58),
    [anon_sym_case] = ACTIONS(56),
    [anon_sym_class] = ACTIONS(56),
    [anon_sym_default] = ACTIONS(56),
    [anon_sym_deriving] = ACTIONS(56),
    [anon_sym_do] = ACTIONS(56),
    [anon_sym_else] = ACTIONS(56),
    [anon_sym_foreign] = ACTIONS(56),
    [anon_sym_if] = ACTIONS(56),
    [anon_sym_in] = ACTIONS(56),
    [anon_sym_infix] = ACTIONS(56),
    [anon_sym_infixl] = ACTIONS(56),
    [anon_sym_infixr] = ACTIONS(56),
    [anon_sym_instance] = ACTIONS(56),
    [anon_sym_let] = ACTIONS(56),
    [anon_sym_of] = ACTIONS(56),
    [anon_sym_then] = ACTIONS(56),
    [anon_sym__] = ACTIONS(56),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(58),
    [anon_sym_SQUOTE] = ACTIONS(56),
    [anon_sym_DQUOTE] = ACTIONS(56),
    [sym__integer_literal] = ACTIONS(56),
    [sym__octal_literal] = ACTIONS(56),
    [sym__hexidecimal_literal] = ACTIONS(56),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(60),
    [anon_sym_module] = ACTIONS(62),
    [anon_sym_where] = ACTIONS(62),
    [anon_sym_import] = ACTIONS(62),
    [anon_sym_data] = ACTIONS(62),
    [anon_sym_newtype] = ACTIONS(62),
    [anon_sym_type] = ACTIONS(62),
    [sym_variable_identifier] = ACTIONS(64),
    [sym_constructor_identifier] = ACTIONS(64),
    [sym_module_identifier] = ACTIONS(64),
    [anon_sym_case] = ACTIONS(62),
    [anon_sym_class] = ACTIONS(62),
    [anon_sym_default] = ACTIONS(62),
    [anon_sym_deriving] = ACTIONS(62),
    [anon_sym_do] = ACTIONS(62),
    [anon_sym_else] = ACTIONS(62),
    [anon_sym_foreign] = ACTIONS(62),
    [anon_sym_if] = ACTIONS(62),
    [anon_sym_in] = ACTIONS(62),
    [anon_sym_infix] = ACTIONS(62),
    [anon_sym_infixl] = ACTIONS(62),
    [anon_sym_infixr] = ACTIONS(62),
    [anon_sym_instance] = ACTIONS(62),
    [anon_sym_let] = ACTIONS(62),
    [anon_sym_of] = ACTIONS(62),
    [anon_sym_then] = ACTIONS(62),
    [anon_sym__] = ACTIONS(62),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(64),
    [anon_sym_SQUOTE] = ACTIONS(62),
    [anon_sym_DQUOTE] = ACTIONS(62),
    [sym__integer_literal] = ACTIONS(62),
    [sym__octal_literal] = ACTIONS(62),
    [sym__hexidecimal_literal] = ACTIONS(62),
  },
  [10] = {
    [sym__graphic] = STATE(35),
    [sym__small] = STATE(36),
    [sym__large] = STATE(36),
    [sym__symbol] = STATE(36),
    [sym__special] = STATE(36),
    [sym__escape] = STATE(35),
    [anon_sym_LPAREN] = ACTIONS(66),
    [anon_sym_RPAREN] = ACTIONS(66),
    [anon_sym_EQ] = ACTIONS(68),
    [anon_sym_LBRACE] = ACTIONS(66),
    [anon_sym_RBRACE] = ACTIONS(66),
    [anon_sym__] = ACTIONS(70),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(74),
    [anon_sym_DQUOTE] = ACTIONS(74),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(76),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(70),
    [sym__ascii_large] = ACTIONS(78),
    [anon_sym_BANG] = ACTIONS(68),
    [anon_sym_POUND] = ACTIONS(68),
    [anon_sym_DOLLAR] = ACTIONS(68),
    [anon_sym_PERCENT] = ACTIONS(68),
    [anon_sym_AMP] = ACTIONS(68),
    [anon_sym_1] = ACTIONS(68),
    [anon_sym_PLUS] = ACTIONS(68),
    [anon_sym_DOT] = ACTIONS(68),
    [anon_sym_SLASH] = ACTIONS(68),
    [anon_sym_LT] = ACTIONS(68),
    [anon_sym_GT] = ACTIONS(68),
    [anon_sym_QMARK] = ACTIONS(68),
    [anon_sym_AT] = ACTIONS(68),
    [anon_sym_CARET] = ACTIONS(68),
    [anon_sym_PIPE] = ACTIONS(68),
    [anon_sym_DASH] = ACTIONS(68),
    [anon_sym_TILDE] = ACTIONS(68),
    [anon_sym_COLON] = ACTIONS(68),
    [anon_sym_BSLASH] = ACTIONS(80),
    [anon_sym_SEMI] = ACTIONS(66),
    [anon_sym_LBRACK] = ACTIONS(66),
    [anon_sym_RBRACK] = ACTIONS(66),
    [anon_sym_BQUOTE] = ACTIONS(66),
    [sym__space] = ACTIONS(74),
  },
  [11] = {
    [sym__gap] = STATE(42),
    [sym__graphic] = STATE(42),
    [sym__small] = STATE(44),
    [sym__large] = STATE(44),
    [sym__symbol] = STATE(44),
    [sym__special] = STATE(44),
    [sym__escape] = STATE(42),
    [aux_sym_string_repeat1] = STATE(48),
    [anon_sym_LPAREN] = ACTIONS(82),
    [anon_sym_RPAREN] = ACTIONS(82),
    [anon_sym_EQ] = ACTIONS(84),
    [anon_sym_LBRACE] = ACTIONS(82),
    [anon_sym_RBRACE] = ACTIONS(82),
    [anon_sym__] = ACTIONS(86),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(88),
    [anon_sym_DQUOTE] = ACTIONS(90),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(92),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(86),
    [sym__ascii_large] = ACTIONS(94),
    [anon_sym_BANG] = ACTIONS(84),
    [anon_sym_POUND] = ACTIONS(84),
    [anon_sym_DOLLAR] = ACTIONS(84),
    [anon_sym_PERCENT] = ACTIONS(84),
    [anon_sym_AMP] = ACTIONS(84),
    [anon_sym_1] = ACTIONS(84),
    [anon_sym_PLUS] = ACTIONS(84),
    [anon_sym_DOT] = ACTIONS(84),
    [anon_sym_SLASH] = ACTIONS(84),
    [anon_sym_LT] = ACTIONS(84),
    [anon_sym_GT] = ACTIONS(84),
    [anon_sym_QMARK] = ACTIONS(84),
    [anon_sym_AT] = ACTIONS(84),
    [anon_sym_CARET] = ACTIONS(84),
    [anon_sym_PIPE] = ACTIONS(84),
    [anon_sym_DASH] = ACTIONS(84),
    [anon_sym_TILDE] = ACTIONS(84),
    [anon_sym_COLON] = ACTIONS(84),
    [anon_sym_BSLASH] = ACTIONS(96),
    [anon_sym_SEMI] = ACTIONS(82),
    [anon_sym_LBRACK] = ACTIONS(82),
    [anon_sym_RBRACK] = ACTIONS(82),
    [anon_sym_BQUOTE] = ACTIONS(82),
    [sym__space] = ACTIONS(98),
    [sym__newline] = ACTIONS(98),
    [sym__tab] = ACTIONS(98),
    [sym__vertical_tab] = ACTIONS(98),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(100),
    [anon_sym_module] = ACTIONS(102),
    [anon_sym_where] = ACTIONS(102),
    [anon_sym_import] = ACTIONS(102),
    [anon_sym_data] = ACTIONS(102),
    [anon_sym_newtype] = ACTIONS(102),
    [anon_sym_type] = ACTIONS(102),
    [sym_variable_identifier] = ACTIONS(104),
    [sym_constructor_identifier] = ACTIONS(104),
    [sym_module_identifier] = ACTIONS(104),
    [anon_sym_case] = ACTIONS(102),
    [anon_sym_class] = ACTIONS(102),
    [anon_sym_default] = ACTIONS(102),
    [anon_sym_deriving] = ACTIONS(102),
    [anon_sym_do] = ACTIONS(102),
    [anon_sym_else] = ACTIONS(102),
    [anon_sym_foreign] = ACTIONS(102),
    [anon_sym_if] = ACTIONS(102),
    [anon_sym_in] = ACTIONS(102),
    [anon_sym_infix] = ACTIONS(102),
    [anon_sym_infixl] = ACTIONS(102),
    [anon_sym_infixr] = ACTIONS(102),
    [anon_sym_instance] = ACTIONS(102),
    [anon_sym_let] = ACTIONS(102),
    [anon_sym_of] = ACTIONS(102),
    [anon_sym_then] = ACTIONS(102),
    [anon_sym__] = ACTIONS(102),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(104),
    [anon_sym_SQUOTE] = ACTIONS(102),
    [anon_sym_DQUOTE] = ACTIONS(102),
    [sym__integer_literal] = ACTIONS(102),
    [sym__octal_literal] = ACTIONS(102),
    [sym__hexidecimal_literal] = ACTIONS(102),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(106),
    [sym_comment] = ACTIONS(26),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(108),
    [anon_sym_module] = ACTIONS(110),
    [anon_sym_where] = ACTIONS(110),
    [anon_sym_import] = ACTIONS(110),
    [anon_sym_data] = ACTIONS(110),
    [anon_sym_newtype] = ACTIONS(110),
    [anon_sym_type] = ACTIONS(110),
    [sym_variable_identifier] = ACTIONS(112),
    [sym_constructor_identifier] = ACTIONS(112),
    [sym_module_identifier] = ACTIONS(112),
    [anon_sym_case] = ACTIONS(110),
    [anon_sym_class] = ACTIONS(110),
    [anon_sym_default] = ACTIONS(110),
    [anon_sym_deriving] = ACTIONS(110),
    [anon_sym_do] = ACTIONS(110),
    [anon_sym_else] = ACTIONS(110),
    [anon_sym_foreign] = ACTIONS(110),
    [anon_sym_if] = ACTIONS(110),
    [anon_sym_in] = ACTIONS(110),
    [anon_sym_infix] = ACTIONS(110),
    [anon_sym_infixl] = ACTIONS(110),
    [anon_sym_infixr] = ACTIONS(110),
    [anon_sym_instance] = ACTIONS(110),
    [anon_sym_let] = ACTIONS(110),
    [anon_sym_of] = ACTIONS(110),
    [anon_sym_then] = ACTIONS(110),
    [anon_sym__] = ACTIONS(110),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(112),
    [anon_sym_SQUOTE] = ACTIONS(110),
    [anon_sym_DQUOTE] = ACTIONS(110),
    [sym__integer_literal] = ACTIONS(110),
    [sym__octal_literal] = ACTIONS(110),
    [sym__hexidecimal_literal] = ACTIONS(110),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(114),
    [anon_sym_module] = ACTIONS(116),
    [anon_sym_where] = ACTIONS(116),
    [anon_sym_import] = ACTIONS(116),
    [anon_sym_data] = ACTIONS(116),
    [anon_sym_newtype] = ACTIONS(116),
    [anon_sym_type] = ACTIONS(116),
    [sym_variable_identifier] = ACTIONS(118),
    [sym_constructor_identifier] = ACTIONS(118),
    [sym_module_identifier] = ACTIONS(118),
    [anon_sym_case] = ACTIONS(116),
    [anon_sym_class] = ACTIONS(116),
    [anon_sym_default] = ACTIONS(116),
    [anon_sym_deriving] = ACTIONS(116),
    [anon_sym_do] = ACTIONS(116),
    [anon_sym_else] = ACTIONS(116),
    [anon_sym_foreign] = ACTIONS(116),
    [anon_sym_if] = ACTIONS(116),
    [anon_sym_in] = ACTIONS(116),
    [anon_sym_infix] = ACTIONS(116),
    [anon_sym_infixl] = ACTIONS(116),
    [anon_sym_infixr] = ACTIONS(116),
    [anon_sym_instance] = ACTIONS(116),
    [anon_sym_let] = ACTIONS(116),
    [anon_sym_of] = ACTIONS(116),
    [anon_sym_then] = ACTIONS(116),
    [anon_sym__] = ACTIONS(116),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(118),
    [anon_sym_SQUOTE] = ACTIONS(116),
    [anon_sym_DQUOTE] = ACTIONS(116),
    [sym__integer_literal] = ACTIONS(116),
    [sym__octal_literal] = ACTIONS(116),
    [sym__hexidecimal_literal] = ACTIONS(116),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(120),
    [anon_sym_module] = ACTIONS(122),
    [anon_sym_where] = ACTIONS(122),
    [anon_sym_import] = ACTIONS(122),
    [anon_sym_data] = ACTIONS(122),
    [anon_sym_newtype] = ACTIONS(122),
    [anon_sym_type] = ACTIONS(122),
    [sym_variable_identifier] = ACTIONS(124),
    [sym_constructor_identifier] = ACTIONS(124),
    [sym_module_identifier] = ACTIONS(124),
    [anon_sym_case] = ACTIONS(122),
    [anon_sym_class] = ACTIONS(122),
    [anon_sym_default] = ACTIONS(122),
    [anon_sym_deriving] = ACTIONS(122),
    [anon_sym_do] = ACTIONS(122),
    [anon_sym_else] = ACTIONS(122),
    [anon_sym_foreign] = ACTIONS(122),
    [anon_sym_if] = ACTIONS(122),
    [anon_sym_in] = ACTIONS(122),
    [anon_sym_infix] = ACTIONS(122),
    [anon_sym_infixl] = ACTIONS(122),
    [anon_sym_infixr] = ACTIONS(122),
    [anon_sym_instance] = ACTIONS(122),
    [anon_sym_let] = ACTIONS(122),
    [anon_sym_of] = ACTIONS(122),
    [anon_sym_then] = ACTIONS(122),
    [anon_sym__] = ACTIONS(122),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(124),
    [anon_sym_SQUOTE] = ACTIONS(122),
    [anon_sym_DQUOTE] = ACTIONS(122),
    [sym__integer_literal] = ACTIONS(122),
    [sym__octal_literal] = ACTIONS(122),
    [sym__hexidecimal_literal] = ACTIONS(122),
  },
  [17] = {
    [sym__statement] = STATE(49),
    [sym_module] = STATE(15),
    [sym_import_declaration] = STATE(15),
    [sym__top_level_declaration] = STATE(15),
    [sym_algebraic_datatype] = STATE(16),
    [sym_newtype] = STATE(16),
    [sym_type_synonym] = STATE(16),
    [sym__literal] = STATE(15),
    [sym__identifier] = STATE(15),
    [sym_reserved_identifier] = STATE(8),
    [sym_integer] = STATE(9),
    [sym_char] = STATE(9),
    [sym_string] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(126),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(16),
    [anon_sym_data] = ACTIONS(18),
    [anon_sym_newtype] = ACTIONS(20),
    [anon_sym_type] = ACTIONS(22),
    [sym_variable_identifier] = ACTIONS(24),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_in] = ACTIONS(14),
    [anon_sym_infix] = ACTIONS(14),
    [anon_sym_infixl] = ACTIONS(14),
    [anon_sym_infixr] = ACTIONS(14),
    [anon_sym_instance] = ACTIONS(14),
    [anon_sym_let] = ACTIONS(14),
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(28),
    [anon_sym_SQUOTE] = ACTIONS(30),
    [anon_sym_DQUOTE] = ACTIONS(32),
    [sym__integer_literal] = ACTIONS(34),
    [sym__octal_literal] = ACTIONS(34),
    [sym__hexidecimal_literal] = ACTIONS(34),
  },
  [18] = {
    [sym_module_export_declarations] = STATE(52),
    [anon_sym_where] = ACTIONS(128),
    [anon_sym_LPAREN] = ACTIONS(130),
    [sym_comment] = ACTIONS(26),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(38),
    [anon_sym_module] = ACTIONS(40),
    [anon_sym_where] = ACTIONS(40),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_import] = ACTIONS(40),
    [anon_sym_as] = ACTIONS(40),
    [anon_sym_hiding] = ACTIONS(40),
    [anon_sym_data] = ACTIONS(40),
    [anon_sym_newtype] = ACTIONS(40),
    [anon_sym_type] = ACTIONS(40),
    [sym_variable_identifier] = ACTIONS(42),
    [sym_constructor_identifier] = ACTIONS(42),
    [sym_module_identifier] = ACTIONS(42),
    [anon_sym_case] = ACTIONS(40),
    [anon_sym_class] = ACTIONS(40),
    [anon_sym_default] = ACTIONS(40),
    [anon_sym_deriving] = ACTIONS(40),
    [anon_sym_do] = ACTIONS(40),
    [anon_sym_else] = ACTIONS(40),
    [anon_sym_foreign] = ACTIONS(40),
    [anon_sym_if] = ACTIONS(40),
    [anon_sym_in] = ACTIONS(40),
    [anon_sym_infix] = ACTIONS(40),
    [anon_sym_infixl] = ACTIONS(40),
    [anon_sym_infixr] = ACTIONS(40),
    [anon_sym_instance] = ACTIONS(40),
    [anon_sym_let] = ACTIONS(40),
    [anon_sym_of] = ACTIONS(40),
    [anon_sym_then] = ACTIONS(40),
    [anon_sym__] = ACTIONS(40),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(40),
    [anon_sym_DQUOTE] = ACTIONS(40),
    [sym__integer_literal] = ACTIONS(40),
    [sym__octal_literal] = ACTIONS(40),
    [sym__hexidecimal_literal] = ACTIONS(40),
  },
  [20] = {
    [sym__identifier] = STATE(53),
    [sym_reserved_identifier] = STATE(21),
    [anon_sym_where] = ACTIONS(44),
    [sym_variable_identifier] = ACTIONS(48),
    [sym_constructor_identifier] = ACTIONS(48),
    [sym_module_identifier] = ACTIONS(48),
    [anon_sym_case] = ACTIONS(44),
    [anon_sym_class] = ACTIONS(44),
    [anon_sym_default] = ACTIONS(44),
    [anon_sym_deriving] = ACTIONS(44),
    [anon_sym_do] = ACTIONS(44),
    [anon_sym_else] = ACTIONS(44),
    [anon_sym_foreign] = ACTIONS(44),
    [anon_sym_if] = ACTIONS(44),
    [anon_sym_in] = ACTIONS(44),
    [anon_sym_infix] = ACTIONS(44),
    [anon_sym_infixl] = ACTIONS(44),
    [anon_sym_infixr] = ACTIONS(44),
    [anon_sym_instance] = ACTIONS(44),
    [anon_sym_let] = ACTIONS(44),
    [anon_sym_of] = ACTIONS(44),
    [anon_sym_then] = ACTIONS(44),
    [anon_sym__] = ACTIONS(44),
    [sym_comment] = ACTIONS(26),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(54),
    [anon_sym_module] = ACTIONS(56),
    [anon_sym_where] = ACTIONS(56),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_import] = ACTIONS(56),
    [anon_sym_as] = ACTIONS(56),
    [anon_sym_hiding] = ACTIONS(56),
    [anon_sym_data] = ACTIONS(56),
    [anon_sym_newtype] = ACTIONS(56),
    [anon_sym_type] = ACTIONS(56),
    [sym_variable_identifier] = ACTIONS(58),
    [sym_constructor_identifier] = ACTIONS(58),
    [sym_module_identifier] = ACTIONS(58),
    [anon_sym_case] = ACTIONS(56),
    [anon_sym_class] = ACTIONS(56),
    [anon_sym_default] = ACTIONS(56),
    [anon_sym_deriving] = ACTIONS(56),
    [anon_sym_do] = ACTIONS(56),
    [anon_sym_else] = ACTIONS(56),
    [anon_sym_foreign] = ACTIONS(56),
    [anon_sym_if] = ACTIONS(56),
    [anon_sym_in] = ACTIONS(56),
    [anon_sym_infix] = ACTIONS(56),
    [anon_sym_infixl] = ACTIONS(56),
    [anon_sym_infixr] = ACTIONS(56),
    [anon_sym_instance] = ACTIONS(56),
    [anon_sym_let] = ACTIONS(56),
    [anon_sym_of] = ACTIONS(56),
    [anon_sym_then] = ACTIONS(56),
    [anon_sym__] = ACTIONS(56),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(58),
    [anon_sym_SQUOTE] = ACTIONS(56),
    [anon_sym_DQUOTE] = ACTIONS(56),
    [sym__integer_literal] = ACTIONS(56),
    [sym__octal_literal] = ACTIONS(56),
    [sym__hexidecimal_literal] = ACTIONS(56),
  },
  [22] = {
    [sym_import_specification] = STATE(57),
    [ts_builtin_sym_end] = ACTIONS(132),
    [anon_sym_module] = ACTIONS(134),
    [anon_sym_where] = ACTIONS(134),
    [anon_sym_LPAREN] = ACTIONS(136),
    [anon_sym_import] = ACTIONS(134),
    [anon_sym_as] = ACTIONS(138),
    [anon_sym_hiding] = ACTIONS(140),
    [anon_sym_data] = ACTIONS(134),
    [anon_sym_newtype] = ACTIONS(134),
    [anon_sym_type] = ACTIONS(134),
    [sym_variable_identifier] = ACTIONS(142),
    [sym_constructor_identifier] = ACTIONS(142),
    [sym_module_identifier] = ACTIONS(142),
    [anon_sym_case] = ACTIONS(134),
    [anon_sym_class] = ACTIONS(134),
    [anon_sym_default] = ACTIONS(134),
    [anon_sym_deriving] = ACTIONS(134),
    [anon_sym_do] = ACTIONS(134),
    [anon_sym_else] = ACTIONS(134),
    [anon_sym_foreign] = ACTIONS(134),
    [anon_sym_if] = ACTIONS(134),
    [anon_sym_in] = ACTIONS(134),
    [anon_sym_infix] = ACTIONS(134),
    [anon_sym_infixl] = ACTIONS(134),
    [anon_sym_infixr] = ACTIONS(134),
    [anon_sym_instance] = ACTIONS(134),
    [anon_sym_let] = ACTIONS(134),
    [anon_sym_of] = ACTIONS(134),
    [anon_sym_then] = ACTIONS(134),
    [anon_sym__] = ACTIONS(134),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(142),
    [anon_sym_SQUOTE] = ACTIONS(134),
    [anon_sym_DQUOTE] = ACTIONS(134),
    [sym__integer_literal] = ACTIONS(134),
    [sym__octal_literal] = ACTIONS(134),
    [sym__hexidecimal_literal] = ACTIONS(134),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(144),
    [anon_sym_module] = ACTIONS(146),
    [anon_sym_where] = ACTIONS(146),
    [anon_sym_import] = ACTIONS(146),
    [anon_sym_data] = ACTIONS(146),
    [anon_sym_EQ] = ACTIONS(146),
    [anon_sym_newtype] = ACTIONS(146),
    [anon_sym_type] = ACTIONS(146),
    [sym_variable_identifier] = ACTIONS(148),
    [sym_constructor_identifier] = ACTIONS(148),
    [sym_module_identifier] = ACTIONS(148),
    [anon_sym_case] = ACTIONS(146),
    [anon_sym_class] = ACTIONS(146),
    [anon_sym_default] = ACTIONS(146),
    [anon_sym_deriving] = ACTIONS(146),
    [anon_sym_do] = ACTIONS(146),
    [anon_sym_else] = ACTIONS(146),
    [anon_sym_foreign] = ACTIONS(146),
    [anon_sym_if] = ACTIONS(146),
    [anon_sym_in] = ACTIONS(146),
    [anon_sym_infix] = ACTIONS(146),
    [anon_sym_infixl] = ACTIONS(146),
    [anon_sym_infixr] = ACTIONS(146),
    [anon_sym_instance] = ACTIONS(146),
    [anon_sym_let] = ACTIONS(146),
    [anon_sym_of] = ACTIONS(146),
    [anon_sym_then] = ACTIONS(146),
    [anon_sym__] = ACTIONS(146),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(148),
    [anon_sym_SQUOTE] = ACTIONS(146),
    [anon_sym_DQUOTE] = ACTIONS(146),
    [sym__integer_literal] = ACTIONS(146),
    [sym__octal_literal] = ACTIONS(146),
    [sym__hexidecimal_literal] = ACTIONS(146),
  },
  [24] = {
    [sym_constructors] = STATE(59),
    [sym__identifier] = STATE(60),
    [sym_reserved_identifier] = STATE(8),
    [aux_sym_constructors_repeat1] = STATE(61),
    [ts_builtin_sym_end] = ACTIONS(150),
    [anon_sym_module] = ACTIONS(152),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(152),
    [anon_sym_data] = ACTIONS(152),
    [anon_sym_EQ] = ACTIONS(154),
    [anon_sym_newtype] = ACTIONS(152),
    [anon_sym_type] = ACTIONS(152),
    [sym_variable_identifier] = ACTIONS(24),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_in] = ACTIONS(14),
    [anon_sym_infix] = ACTIONS(14),
    [anon_sym_infixl] = ACTIONS(14),
    [anon_sym_infixr] = ACTIONS(14),
    [anon_sym_instance] = ACTIONS(14),
    [anon_sym_let] = ACTIONS(14),
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(156),
    [anon_sym_SQUOTE] = ACTIONS(152),
    [anon_sym_DQUOTE] = ACTIONS(152),
    [sym__integer_literal] = ACTIONS(152),
    [sym__octal_literal] = ACTIONS(152),
    [sym__hexidecimal_literal] = ACTIONS(152),
  },
  [25] = {
    [sym__identifier] = STATE(62),
    [sym_reserved_identifier] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(158),
    [anon_sym_module] = ACTIONS(160),
    [anon_sym_where] = ACTIONS(160),
    [anon_sym_import] = ACTIONS(160),
    [anon_sym_data] = ACTIONS(160),
    [anon_sym_EQ] = ACTIONS(160),
    [anon_sym_newtype] = ACTIONS(160),
    [anon_sym_type] = ACTIONS(160),
    [sym_variable_identifier] = ACTIONS(162),
    [sym_constructor_identifier] = ACTIONS(162),
    [sym_module_identifier] = ACTIONS(162),
    [anon_sym_case] = ACTIONS(160),
    [anon_sym_class] = ACTIONS(160),
    [anon_sym_default] = ACTIONS(160),
    [anon_sym_deriving] = ACTIONS(160),
    [anon_sym_do] = ACTIONS(160),
    [anon_sym_else] = ACTIONS(160),
    [anon_sym_foreign] = ACTIONS(160),
    [anon_sym_if] = ACTIONS(160),
    [anon_sym_in] = ACTIONS(160),
    [anon_sym_infix] = ACTIONS(160),
    [anon_sym_infixl] = ACTIONS(160),
    [anon_sym_infixr] = ACTIONS(160),
    [anon_sym_instance] = ACTIONS(160),
    [anon_sym_let] = ACTIONS(160),
    [anon_sym_of] = ACTIONS(160),
    [anon_sym_then] = ACTIONS(160),
    [anon_sym__] = ACTIONS(160),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(162),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [anon_sym_DQUOTE] = ACTIONS(160),
    [sym__integer_literal] = ACTIONS(160),
    [sym__octal_literal] = ACTIONS(160),
    [sym__hexidecimal_literal] = ACTIONS(160),
  },
  [26] = {
    [anon_sym_where] = ACTIONS(40),
    [anon_sym_EQ] = ACTIONS(40),
    [sym_variable_identifier] = ACTIONS(42),
    [sym_constructor_identifier] = ACTIONS(42),
    [sym_module_identifier] = ACTIONS(42),
    [anon_sym_case] = ACTIONS(40),
    [anon_sym_class] = ACTIONS(40),
    [anon_sym_default] = ACTIONS(40),
    [anon_sym_deriving] = ACTIONS(40),
    [anon_sym_do] = ACTIONS(40),
    [anon_sym_else] = ACTIONS(40),
    [anon_sym_foreign] = ACTIONS(40),
    [anon_sym_if] = ACTIONS(40),
    [anon_sym_in] = ACTIONS(40),
    [anon_sym_infix] = ACTIONS(40),
    [anon_sym_infixl] = ACTIONS(40),
    [anon_sym_infixr] = ACTIONS(40),
    [anon_sym_instance] = ACTIONS(40),
    [anon_sym_let] = ACTIONS(40),
    [anon_sym_of] = ACTIONS(40),
    [anon_sym_then] = ACTIONS(40),
    [anon_sym__] = ACTIONS(40),
    [sym_comment] = ACTIONS(26),
  },
  [27] = {
    [anon_sym_where] = ACTIONS(56),
    [anon_sym_EQ] = ACTIONS(56),
    [sym_variable_identifier] = ACTIONS(58),
    [sym_constructor_identifier] = ACTIONS(58),
    [sym_module_identifier] = ACTIONS(58),
    [anon_sym_case] = ACTIONS(56),
    [anon_sym_class] = ACTIONS(56),
    [anon_sym_default] = ACTIONS(56),
    [anon_sym_deriving] = ACTIONS(56),
    [anon_sym_do] = ACTIONS(56),
    [anon_sym_else] = ACTIONS(56),
    [anon_sym_foreign] = ACTIONS(56),
    [anon_sym_if] = ACTIONS(56),
    [anon_sym_in] = ACTIONS(56),
    [anon_sym_infix] = ACTIONS(56),
    [anon_sym_infixl] = ACTIONS(56),
    [anon_sym_infixr] = ACTIONS(56),
    [anon_sym_instance] = ACTIONS(56),
    [anon_sym_let] = ACTIONS(56),
    [anon_sym_of] = ACTIONS(56),
    [anon_sym_then] = ACTIONS(56),
    [anon_sym__] = ACTIONS(56),
    [sym_comment] = ACTIONS(26),
  },
  [28] = {
    [anon_sym_where] = ACTIONS(146),
    [anon_sym_EQ] = ACTIONS(146),
    [sym_variable_identifier] = ACTIONS(148),
    [sym_constructor_identifier] = ACTIONS(148),
    [sym_module_identifier] = ACTIONS(148),
    [anon_sym_case] = ACTIONS(146),
    [anon_sym_class] = ACTIONS(146),
    [anon_sym_default] = ACTIONS(146),
    [anon_sym_deriving] = ACTIONS(146),
    [anon_sym_do] = ACTIONS(146),
    [anon_sym_else] = ACTIONS(146),
    [anon_sym_foreign] = ACTIONS(146),
    [anon_sym_if] = ACTIONS(146),
    [anon_sym_in] = ACTIONS(146),
    [anon_sym_infix] = ACTIONS(146),
    [anon_sym_infixl] = ACTIONS(146),
    [anon_sym_infixr] = ACTIONS(146),
    [anon_sym_instance] = ACTIONS(146),
    [anon_sym_let] = ACTIONS(146),
    [anon_sym_of] = ACTIONS(146),
    [anon_sym_then] = ACTIONS(146),
    [anon_sym__] = ACTIONS(146),
    [sym_comment] = ACTIONS(26),
  },
  [29] = {
    [anon_sym_EQ] = ACTIONS(164),
    [sym_comment] = ACTIONS(26),
  },
  [30] = {
    [sym__identifier] = STATE(64),
    [sym_reserved_identifier] = STATE(27),
    [anon_sym_where] = ACTIONS(50),
    [anon_sym_EQ] = ACTIONS(160),
    [sym_variable_identifier] = ACTIONS(52),
    [sym_constructor_identifier] = ACTIONS(52),
    [sym_module_identifier] = ACTIONS(52),
    [anon_sym_case] = ACTIONS(50),
    [anon_sym_class] = ACTIONS(50),
    [anon_sym_default] = ACTIONS(50),
    [anon_sym_deriving] = ACTIONS(50),
    [anon_sym_do] = ACTIONS(50),
    [anon_sym_else] = ACTIONS(50),
    [anon_sym_foreign] = ACTIONS(50),
    [anon_sym_if] = ACTIONS(50),
    [anon_sym_in] = ACTIONS(50),
    [anon_sym_infix] = ACTIONS(50),
    [anon_sym_infixl] = ACTIONS(50),
    [anon_sym_infixr] = ACTIONS(50),
    [anon_sym_instance] = ACTIONS(50),
    [anon_sym_let] = ACTIONS(50),
    [anon_sym_of] = ACTIONS(50),
    [anon_sym_then] = ACTIONS(50),
    [anon_sym__] = ACTIONS(50),
    [sym_comment] = ACTIONS(26),
  },
  [31] = {
    [anon_sym_EQ] = ACTIONS(166),
    [sym_comment] = ACTIONS(26),
  },
  [32] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(168),
  },
  [33] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(170),
  },
  [34] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(172),
  },
  [35] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(174),
  },
  [36] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(176),
  },
  [37] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(178),
  },
  [38] = {
    [sym__char_escape] = STATE(68),
    [sym__ascii] = STATE(68),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(180),
    [anon_sym_DQUOTE] = ACTIONS(180),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(182),
    [anon_sym_AMP] = ACTIONS(180),
    [anon_sym_CARET] = ACTIONS(184),
    [anon_sym_BSLASH] = ACTIONS(180),
    [anon_sym_x] = ACTIONS(186),
    [anon_sym_X] = ACTIONS(186),
    [anon_sym_o] = ACTIONS(188),
    [anon_sym_O] = ACTIONS(188),
    [anon_sym_a] = ACTIONS(180),
    [anon_sym_b] = ACTIONS(180),
    [anon_sym_f] = ACTIONS(180),
    [anon_sym_n] = ACTIONS(180),
    [anon_sym_r] = ACTIONS(180),
    [anon_sym_t] = ACTIONS(180),
    [anon_sym_v] = ACTIONS(180),
    [anon_sym_NUL] = ACTIONS(190),
    [anon_sym_SOH] = ACTIONS(190),
    [anon_sym_STX] = ACTIONS(190),
    [anon_sym_ETX] = ACTIONS(190),
    [anon_sym_EOT] = ACTIONS(190),
    [anon_sym_ENQ] = ACTIONS(190),
    [anon_sym_ACK] = ACTIONS(190),
    [anon_sym_BEL] = ACTIONS(190),
    [anon_sym_BS] = ACTIONS(190),
    [anon_sym_HT] = ACTIONS(190),
    [anon_sym_LF] = ACTIONS(190),
    [anon_sym_VT] = ACTIONS(190),
    [anon_sym_FF] = ACTIONS(190),
    [anon_sym_CR] = ACTIONS(190),
    [anon_sym_SO] = ACTIONS(190),
    [anon_sym_SI] = ACTIONS(190),
    [anon_sym_DLE] = ACTIONS(190),
    [anon_sym_DC1] = ACTIONS(190),
    [anon_sym_DC2] = ACTIONS(190),
    [anon_sym_DC3] = ACTIONS(190),
    [anon_sym_DC4] = ACTIONS(190),
    [anon_sym_NAK] = ACTIONS(190),
    [anon_sym_SYN] = ACTIONS(190),
    [anon_sym_ETB] = ACTIONS(190),
    [anon_sym_CAN] = ACTIONS(190),
    [anon_sym_EM] = ACTIONS(190),
    [anon_sym_SUB] = ACTIONS(190),
    [anon_sym_ESC] = ACTIONS(190),
    [anon_sym_FS] = ACTIONS(190),
    [anon_sym_GS] = ACTIONS(190),
    [anon_sym_RS] = ACTIONS(190),
    [anon_sym_US] = ACTIONS(190),
    [anon_sym_SP] = ACTIONS(190),
    [anon_sym_DEL] = ACTIONS(190),
  },
  [39] = {
    [anon_sym_LPAREN] = ACTIONS(192),
    [anon_sym_RPAREN] = ACTIONS(192),
    [anon_sym_EQ] = ACTIONS(192),
    [anon_sym_LBRACE] = ACTIONS(192),
    [anon_sym_RBRACE] = ACTIONS(192),
    [anon_sym__] = ACTIONS(192),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(192),
    [anon_sym_DQUOTE] = ACTIONS(192),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(192),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(192),
    [sym__ascii_large] = ACTIONS(192),
    [anon_sym_BANG] = ACTIONS(192),
    [anon_sym_POUND] = ACTIONS(192),
    [anon_sym_DOLLAR] = ACTIONS(192),
    [anon_sym_PERCENT] = ACTIONS(192),
    [anon_sym_AMP] = ACTIONS(192),
    [anon_sym_1] = ACTIONS(192),
    [anon_sym_PLUS] = ACTIONS(192),
    [anon_sym_DOT] = ACTIONS(192),
    [anon_sym_SLASH] = ACTIONS(192),
    [anon_sym_LT] = ACTIONS(192),
    [anon_sym_GT] = ACTIONS(192),
    [anon_sym_QMARK] = ACTIONS(192),
    [anon_sym_AT] = ACTIONS(192),
    [anon_sym_CARET] = ACTIONS(192),
    [anon_sym_PIPE] = ACTIONS(192),
    [anon_sym_DASH] = ACTIONS(192),
    [anon_sym_TILDE] = ACTIONS(192),
    [anon_sym_COLON] = ACTIONS(192),
    [anon_sym_BSLASH] = ACTIONS(192),
    [anon_sym_SEMI] = ACTIONS(192),
    [anon_sym_LBRACK] = ACTIONS(192),
    [anon_sym_RBRACK] = ACTIONS(192),
    [anon_sym_BQUOTE] = ACTIONS(192),
    [sym__space] = ACTIONS(192),
    [sym__newline] = ACTIONS(192),
    [sym__tab] = ACTIONS(192),
    [sym__vertical_tab] = ACTIONS(192),
  },
  [40] = {
    [anon_sym_LPAREN] = ACTIONS(194),
    [anon_sym_RPAREN] = ACTIONS(194),
    [anon_sym_EQ] = ACTIONS(194),
    [anon_sym_LBRACE] = ACTIONS(194),
    [anon_sym_RBRACE] = ACTIONS(194),
    [anon_sym__] = ACTIONS(194),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(194),
    [anon_sym_DQUOTE] = ACTIONS(194),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(194),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(194),
    [sym__ascii_large] = ACTIONS(194),
    [anon_sym_BANG] = ACTIONS(194),
    [anon_sym_POUND] = ACTIONS(194),
    [anon_sym_DOLLAR] = ACTIONS(194),
    [anon_sym_PERCENT] = ACTIONS(194),
    [anon_sym_AMP] = ACTIONS(194),
    [anon_sym_1] = ACTIONS(194),
    [anon_sym_PLUS] = ACTIONS(194),
    [anon_sym_DOT] = ACTIONS(194),
    [anon_sym_SLASH] = ACTIONS(194),
    [anon_sym_LT] = ACTIONS(194),
    [anon_sym_GT] = ACTIONS(194),
    [anon_sym_QMARK] = ACTIONS(194),
    [anon_sym_AT] = ACTIONS(194),
    [anon_sym_CARET] = ACTIONS(194),
    [anon_sym_PIPE] = ACTIONS(194),
    [anon_sym_DASH] = ACTIONS(194),
    [anon_sym_TILDE] = ACTIONS(194),
    [anon_sym_COLON] = ACTIONS(194),
    [anon_sym_BSLASH] = ACTIONS(194),
    [anon_sym_SEMI] = ACTIONS(194),
    [anon_sym_LBRACK] = ACTIONS(194),
    [anon_sym_RBRACK] = ACTIONS(194),
    [anon_sym_BQUOTE] = ACTIONS(194),
    [sym__space] = ACTIONS(194),
    [sym__newline] = ACTIONS(194),
    [sym__tab] = ACTIONS(194),
    [sym__vertical_tab] = ACTIONS(194),
  },
  [41] = {
    [anon_sym_LPAREN] = ACTIONS(196),
    [anon_sym_RPAREN] = ACTIONS(196),
    [anon_sym_EQ] = ACTIONS(196),
    [anon_sym_LBRACE] = ACTIONS(196),
    [anon_sym_RBRACE] = ACTIONS(196),
    [anon_sym__] = ACTIONS(196),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(196),
    [anon_sym_DQUOTE] = ACTIONS(196),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(196),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(196),
    [sym__ascii_large] = ACTIONS(196),
    [anon_sym_BANG] = ACTIONS(196),
    [anon_sym_POUND] = ACTIONS(196),
    [anon_sym_DOLLAR] = ACTIONS(196),
    [anon_sym_PERCENT] = ACTIONS(196),
    [anon_sym_AMP] = ACTIONS(196),
    [anon_sym_1] = ACTIONS(196),
    [anon_sym_PLUS] = ACTIONS(196),
    [anon_sym_DOT] = ACTIONS(196),
    [anon_sym_SLASH] = ACTIONS(196),
    [anon_sym_LT] = ACTIONS(196),
    [anon_sym_GT] = ACTIONS(196),
    [anon_sym_QMARK] = ACTIONS(196),
    [anon_sym_AT] = ACTIONS(196),
    [anon_sym_CARET] = ACTIONS(196),
    [anon_sym_PIPE] = ACTIONS(196),
    [anon_sym_DASH] = ACTIONS(196),
    [anon_sym_TILDE] = ACTIONS(196),
    [anon_sym_COLON] = ACTIONS(196),
    [anon_sym_BSLASH] = ACTIONS(196),
    [anon_sym_SEMI] = ACTIONS(196),
    [anon_sym_LBRACK] = ACTIONS(196),
    [anon_sym_RBRACK] = ACTIONS(196),
    [anon_sym_BQUOTE] = ACTIONS(196),
    [sym__space] = ACTIONS(196),
    [sym__newline] = ACTIONS(196),
    [sym__tab] = ACTIONS(196),
    [sym__vertical_tab] = ACTIONS(196),
  },
  [42] = {
    [anon_sym_LPAREN] = ACTIONS(198),
    [anon_sym_RPAREN] = ACTIONS(198),
    [anon_sym_EQ] = ACTIONS(198),
    [anon_sym_LBRACE] = ACTIONS(198),
    [anon_sym_RBRACE] = ACTIONS(198),
    [anon_sym__] = ACTIONS(198),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(198),
    [anon_sym_DQUOTE] = ACTIONS(198),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(198),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(198),
    [sym__ascii_large] = ACTIONS(198),
    [anon_sym_BANG] = ACTIONS(198),
    [anon_sym_POUND] = ACTIONS(198),
    [anon_sym_DOLLAR] = ACTIONS(198),
    [anon_sym_PERCENT] = ACTIONS(198),
    [anon_sym_AMP] = ACTIONS(198),
    [anon_sym_1] = ACTIONS(198),
    [anon_sym_PLUS] = ACTIONS(198),
    [anon_sym_DOT] = ACTIONS(198),
    [anon_sym_SLASH] = ACTIONS(198),
    [anon_sym_LT] = ACTIONS(198),
    [anon_sym_GT] = ACTIONS(198),
    [anon_sym_QMARK] = ACTIONS(198),
    [anon_sym_AT] = ACTIONS(198),
    [anon_sym_CARET] = ACTIONS(198),
    [anon_sym_PIPE] = ACTIONS(198),
    [anon_sym_DASH] = ACTIONS(198),
    [anon_sym_TILDE] = ACTIONS(198),
    [anon_sym_COLON] = ACTIONS(198),
    [anon_sym_BSLASH] = ACTIONS(198),
    [anon_sym_SEMI] = ACTIONS(198),
    [anon_sym_LBRACK] = ACTIONS(198),
    [anon_sym_RBRACK] = ACTIONS(198),
    [anon_sym_BQUOTE] = ACTIONS(198),
    [sym__space] = ACTIONS(198),
    [sym__newline] = ACTIONS(198),
    [sym__tab] = ACTIONS(198),
    [sym__vertical_tab] = ACTIONS(198),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(200),
    [anon_sym_module] = ACTIONS(202),
    [anon_sym_where] = ACTIONS(202),
    [anon_sym_import] = ACTIONS(202),
    [anon_sym_data] = ACTIONS(202),
    [anon_sym_newtype] = ACTIONS(202),
    [anon_sym_type] = ACTIONS(202),
    [sym_variable_identifier] = ACTIONS(204),
    [sym_constructor_identifier] = ACTIONS(204),
    [sym_module_identifier] = ACTIONS(204),
    [anon_sym_case] = ACTIONS(202),
    [anon_sym_class] = ACTIONS(202),
    [anon_sym_default] = ACTIONS(202),
    [anon_sym_deriving] = ACTIONS(202),
    [anon_sym_do] = ACTIONS(202),
    [anon_sym_else] = ACTIONS(202),
    [anon_sym_foreign] = ACTIONS(202),
    [anon_sym_if] = ACTIONS(202),
    [anon_sym_in] = ACTIONS(202),
    [anon_sym_infix] = ACTIONS(202),
    [anon_sym_infixl] = ACTIONS(202),
    [anon_sym_infixr] = ACTIONS(202),
    [anon_sym_instance] = ACTIONS(202),
    [anon_sym_let] = ACTIONS(202),
    [anon_sym_of] = ACTIONS(202),
    [anon_sym_then] = ACTIONS(202),
    [anon_sym__] = ACTIONS(202),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(204),
    [anon_sym_SQUOTE] = ACTIONS(202),
    [anon_sym_DQUOTE] = ACTIONS(202),
    [sym__integer_literal] = ACTIONS(202),
    [sym__octal_literal] = ACTIONS(202),
    [sym__hexidecimal_literal] = ACTIONS(202),
  },
  [44] = {
    [anon_sym_LPAREN] = ACTIONS(206),
    [anon_sym_RPAREN] = ACTIONS(206),
    [anon_sym_EQ] = ACTIONS(206),
    [anon_sym_LBRACE] = ACTIONS(206),
    [anon_sym_RBRACE] = ACTIONS(206),
    [anon_sym__] = ACTIONS(206),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(206),
    [anon_sym_DQUOTE] = ACTIONS(206),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(206),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(206),
    [sym__ascii_large] = ACTIONS(206),
    [anon_sym_BANG] = ACTIONS(206),
    [anon_sym_POUND] = ACTIONS(206),
    [anon_sym_DOLLAR] = ACTIONS(206),
    [anon_sym_PERCENT] = ACTIONS(206),
    [anon_sym_AMP] = ACTIONS(206),
    [anon_sym_1] = ACTIONS(206),
    [anon_sym_PLUS] = ACTIONS(206),
    [anon_sym_DOT] = ACTIONS(206),
    [anon_sym_SLASH] = ACTIONS(206),
    [anon_sym_LT] = ACTIONS(206),
    [anon_sym_GT] = ACTIONS(206),
    [anon_sym_QMARK] = ACTIONS(206),
    [anon_sym_AT] = ACTIONS(206),
    [anon_sym_CARET] = ACTIONS(206),
    [anon_sym_PIPE] = ACTIONS(206),
    [anon_sym_DASH] = ACTIONS(206),
    [anon_sym_TILDE] = ACTIONS(206),
    [anon_sym_COLON] = ACTIONS(206),
    [anon_sym_BSLASH] = ACTIONS(206),
    [anon_sym_SEMI] = ACTIONS(206),
    [anon_sym_LBRACK] = ACTIONS(206),
    [anon_sym_RBRACK] = ACTIONS(206),
    [anon_sym_BQUOTE] = ACTIONS(206),
    [sym__space] = ACTIONS(206),
    [sym__newline] = ACTIONS(206),
    [sym__tab] = ACTIONS(206),
    [sym__vertical_tab] = ACTIONS(206),
  },
  [45] = {
    [anon_sym_LPAREN] = ACTIONS(208),
    [anon_sym_RPAREN] = ACTIONS(208),
    [anon_sym_EQ] = ACTIONS(208),
    [anon_sym_LBRACE] = ACTIONS(208),
    [anon_sym_RBRACE] = ACTIONS(208),
    [anon_sym__] = ACTIONS(208),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(208),
    [anon_sym_DQUOTE] = ACTIONS(208),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(208),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(208),
    [sym__ascii_large] = ACTIONS(208),
    [anon_sym_BANG] = ACTIONS(208),
    [anon_sym_POUND] = ACTIONS(208),
    [anon_sym_DOLLAR] = ACTIONS(208),
    [anon_sym_PERCENT] = ACTIONS(208),
    [anon_sym_AMP] = ACTIONS(208),
    [anon_sym_1] = ACTIONS(208),
    [anon_sym_PLUS] = ACTIONS(208),
    [anon_sym_DOT] = ACTIONS(208),
    [anon_sym_SLASH] = ACTIONS(208),
    [anon_sym_LT] = ACTIONS(208),
    [anon_sym_GT] = ACTIONS(208),
    [anon_sym_QMARK] = ACTIONS(208),
    [anon_sym_AT] = ACTIONS(208),
    [anon_sym_CARET] = ACTIONS(208),
    [anon_sym_PIPE] = ACTIONS(208),
    [anon_sym_DASH] = ACTIONS(208),
    [anon_sym_TILDE] = ACTIONS(208),
    [anon_sym_COLON] = ACTIONS(208),
    [anon_sym_BSLASH] = ACTIONS(208),
    [anon_sym_SEMI] = ACTIONS(208),
    [anon_sym_LBRACK] = ACTIONS(208),
    [anon_sym_RBRACK] = ACTIONS(208),
    [anon_sym_BQUOTE] = ACTIONS(208),
    [sym__space] = ACTIONS(208),
    [sym__newline] = ACTIONS(208),
    [sym__tab] = ACTIONS(208),
    [sym__vertical_tab] = ACTIONS(208),
  },
  [46] = {
    [sym__char_escape] = STATE(74),
    [sym__ascii] = STATE(74),
    [anon_sym_LPAREN] = ACTIONS(194),
    [anon_sym_RPAREN] = ACTIONS(194),
    [anon_sym_EQ] = ACTIONS(194),
    [anon_sym_LBRACE] = ACTIONS(194),
    [anon_sym_RBRACE] = ACTIONS(194),
    [anon_sym__] = ACTIONS(194),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(210),
    [anon_sym_DQUOTE] = ACTIONS(210),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(212),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(194),
    [sym__ascii_large] = ACTIONS(194),
    [anon_sym_BANG] = ACTIONS(194),
    [anon_sym_POUND] = ACTIONS(194),
    [anon_sym_DOLLAR] = ACTIONS(194),
    [anon_sym_PERCENT] = ACTIONS(194),
    [anon_sym_AMP] = ACTIONS(210),
    [anon_sym_1] = ACTIONS(194),
    [anon_sym_PLUS] = ACTIONS(194),
    [anon_sym_DOT] = ACTIONS(194),
    [anon_sym_SLASH] = ACTIONS(194),
    [anon_sym_LT] = ACTIONS(194),
    [anon_sym_GT] = ACTIONS(194),
    [anon_sym_QMARK] = ACTIONS(194),
    [anon_sym_AT] = ACTIONS(194),
    [anon_sym_CARET] = ACTIONS(214),
    [anon_sym_PIPE] = ACTIONS(194),
    [anon_sym_DASH] = ACTIONS(194),
    [anon_sym_TILDE] = ACTIONS(194),
    [anon_sym_COLON] = ACTIONS(194),
    [anon_sym_BSLASH] = ACTIONS(210),
    [anon_sym_SEMI] = ACTIONS(194),
    [anon_sym_LBRACK] = ACTIONS(194),
    [anon_sym_RBRACK] = ACTIONS(194),
    [anon_sym_BQUOTE] = ACTIONS(194),
    [sym__space] = ACTIONS(194),
    [sym__newline] = ACTIONS(194),
    [sym__tab] = ACTIONS(194),
    [sym__vertical_tab] = ACTIONS(194),
    [anon_sym_x] = ACTIONS(216),
    [anon_sym_X] = ACTIONS(216),
    [anon_sym_o] = ACTIONS(218),
    [anon_sym_O] = ACTIONS(218),
    [anon_sym_a] = ACTIONS(210),
    [anon_sym_b] = ACTIONS(210),
    [anon_sym_f] = ACTIONS(210),
    [anon_sym_n] = ACTIONS(210),
    [anon_sym_r] = ACTIONS(210),
    [anon_sym_t] = ACTIONS(210),
    [anon_sym_v] = ACTIONS(210),
    [anon_sym_NUL] = ACTIONS(220),
    [anon_sym_SOH] = ACTIONS(220),
    [anon_sym_STX] = ACTIONS(220),
    [anon_sym_ETX] = ACTIONS(220),
    [anon_sym_EOT] = ACTIONS(220),
    [anon_sym_ENQ] = ACTIONS(220),
    [anon_sym_ACK] = ACTIONS(220),
    [anon_sym_BEL] = ACTIONS(220),
    [anon_sym_BS] = ACTIONS(220),
    [anon_sym_HT] = ACTIONS(220),
    [anon_sym_LF] = ACTIONS(220),
    [anon_sym_VT] = ACTIONS(220),
    [anon_sym_FF] = ACTIONS(220),
    [anon_sym_CR] = ACTIONS(220),
    [anon_sym_SO] = ACTIONS(220),
    [anon_sym_SI] = ACTIONS(220),
    [anon_sym_DLE] = ACTIONS(220),
    [anon_sym_DC1] = ACTIONS(220),
    [anon_sym_DC2] = ACTIONS(220),
    [anon_sym_DC3] = ACTIONS(220),
    [anon_sym_DC4] = ACTIONS(220),
    [anon_sym_NAK] = ACTIONS(220),
    [anon_sym_SYN] = ACTIONS(220),
    [anon_sym_ETB] = ACTIONS(220),
    [anon_sym_CAN] = ACTIONS(220),
    [anon_sym_EM] = ACTIONS(220),
    [anon_sym_SUB] = ACTIONS(220),
    [anon_sym_ESC] = ACTIONS(220),
    [anon_sym_FS] = ACTIONS(220),
    [anon_sym_GS] = ACTIONS(220),
    [anon_sym_RS] = ACTIONS(220),
    [anon_sym_US] = ACTIONS(220),
    [anon_sym_SP] = ACTIONS(220),
    [anon_sym_DEL] = ACTIONS(220),
  },
  [47] = {
    [anon_sym_LPAREN] = ACTIONS(222),
    [anon_sym_RPAREN] = ACTIONS(222),
    [anon_sym_EQ] = ACTIONS(222),
    [anon_sym_LBRACE] = ACTIONS(222),
    [anon_sym_RBRACE] = ACTIONS(222),
    [anon_sym__] = ACTIONS(222),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(222),
    [anon_sym_DQUOTE] = ACTIONS(222),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(222),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(222),
    [sym__ascii_large] = ACTIONS(222),
    [anon_sym_BANG] = ACTIONS(222),
    [anon_sym_POUND] = ACTIONS(222),
    [anon_sym_DOLLAR] = ACTIONS(222),
    [anon_sym_PERCENT] = ACTIONS(222),
    [anon_sym_AMP] = ACTIONS(222),
    [anon_sym_1] = ACTIONS(222),
    [anon_sym_PLUS] = ACTIONS(222),
    [anon_sym_DOT] = ACTIONS(222),
    [anon_sym_SLASH] = ACTIONS(222),
    [anon_sym_LT] = ACTIONS(222),
    [anon_sym_GT] = ACTIONS(222),
    [anon_sym_QMARK] = ACTIONS(222),
    [anon_sym_AT] = ACTIONS(222),
    [anon_sym_CARET] = ACTIONS(222),
    [anon_sym_PIPE] = ACTIONS(222),
    [anon_sym_DASH] = ACTIONS(222),
    [anon_sym_TILDE] = ACTIONS(222),
    [anon_sym_COLON] = ACTIONS(222),
    [anon_sym_BSLASH] = ACTIONS(222),
    [anon_sym_SEMI] = ACTIONS(222),
    [anon_sym_LBRACK] = ACTIONS(222),
    [anon_sym_RBRACK] = ACTIONS(222),
    [anon_sym_BQUOTE] = ACTIONS(222),
    [sym__space] = ACTIONS(222),
    [sym__newline] = ACTIONS(222),
    [sym__tab] = ACTIONS(222),
    [sym__vertical_tab] = ACTIONS(222),
  },
  [48] = {
    [sym__gap] = STATE(79),
    [sym__graphic] = STATE(79),
    [sym__small] = STATE(44),
    [sym__large] = STATE(44),
    [sym__symbol] = STATE(44),
    [sym__special] = STATE(44),
    [sym__escape] = STATE(79),
    [anon_sym_LPAREN] = ACTIONS(82),
    [anon_sym_RPAREN] = ACTIONS(82),
    [anon_sym_EQ] = ACTIONS(84),
    [anon_sym_LBRACE] = ACTIONS(82),
    [anon_sym_RBRACE] = ACTIONS(82),
    [anon_sym__] = ACTIONS(86),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(224),
    [anon_sym_DQUOTE] = ACTIONS(226),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(92),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(86),
    [sym__ascii_large] = ACTIONS(94),
    [anon_sym_BANG] = ACTIONS(84),
    [anon_sym_POUND] = ACTIONS(84),
    [anon_sym_DOLLAR] = ACTIONS(84),
    [anon_sym_PERCENT] = ACTIONS(84),
    [anon_sym_AMP] = ACTIONS(84),
    [anon_sym_1] = ACTIONS(84),
    [anon_sym_PLUS] = ACTIONS(84),
    [anon_sym_DOT] = ACTIONS(84),
    [anon_sym_SLASH] = ACTIONS(84),
    [anon_sym_LT] = ACTIONS(84),
    [anon_sym_GT] = ACTIONS(84),
    [anon_sym_QMARK] = ACTIONS(84),
    [anon_sym_AT] = ACTIONS(84),
    [anon_sym_CARET] = ACTIONS(84),
    [anon_sym_PIPE] = ACTIONS(84),
    [anon_sym_DASH] = ACTIONS(84),
    [anon_sym_TILDE] = ACTIONS(84),
    [anon_sym_COLON] = ACTIONS(84),
    [anon_sym_BSLASH] = ACTIONS(96),
    [anon_sym_SEMI] = ACTIONS(82),
    [anon_sym_LBRACK] = ACTIONS(82),
    [anon_sym_RBRACK] = ACTIONS(82),
    [anon_sym_BQUOTE] = ACTIONS(82),
    [sym__space] = ACTIONS(98),
    [sym__newline] = ACTIONS(98),
    [sym__tab] = ACTIONS(98),
    [sym__vertical_tab] = ACTIONS(98),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(228),
    [anon_sym_module] = ACTIONS(230),
    [anon_sym_where] = ACTIONS(230),
    [anon_sym_import] = ACTIONS(230),
    [anon_sym_data] = ACTIONS(230),
    [anon_sym_newtype] = ACTIONS(230),
    [anon_sym_type] = ACTIONS(230),
    [sym_variable_identifier] = ACTIONS(232),
    [sym_constructor_identifier] = ACTIONS(232),
    [sym_module_identifier] = ACTIONS(232),
    [anon_sym_case] = ACTIONS(230),
    [anon_sym_class] = ACTIONS(230),
    [anon_sym_default] = ACTIONS(230),
    [anon_sym_deriving] = ACTIONS(230),
    [anon_sym_do] = ACTIONS(230),
    [anon_sym_else] = ACTIONS(230),
    [anon_sym_foreign] = ACTIONS(230),
    [anon_sym_if] = ACTIONS(230),
    [anon_sym_in] = ACTIONS(230),
    [anon_sym_infix] = ACTIONS(230),
    [anon_sym_infixl] = ACTIONS(230),
    [anon_sym_infixr] = ACTIONS(230),
    [anon_sym_instance] = ACTIONS(230),
    [anon_sym_let] = ACTIONS(230),
    [anon_sym_of] = ACTIONS(230),
    [anon_sym_then] = ACTIONS(230),
    [anon_sym__] = ACTIONS(230),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(232),
    [anon_sym_SQUOTE] = ACTIONS(230),
    [anon_sym_DQUOTE] = ACTIONS(230),
    [sym__integer_literal] = ACTIONS(230),
    [sym__octal_literal] = ACTIONS(230),
    [sym__hexidecimal_literal] = ACTIONS(230),
  },
  [50] = {
    [sym__statement] = STATE(14),
    [sym_module] = STATE(15),
    [sym_import_declaration] = STATE(15),
    [sym__top_level_declaration] = STATE(15),
    [sym_algebraic_datatype] = STATE(16),
    [sym_newtype] = STATE(16),
    [sym_type_synonym] = STATE(16),
    [sym__literal] = STATE(15),
    [sym__identifier] = STATE(15),
    [sym_reserved_identifier] = STATE(8),
    [sym_integer] = STATE(9),
    [sym_char] = STATE(9),
    [sym_string] = STATE(9),
    [aux_sym_program_repeat1] = STATE(81),
    [ts_builtin_sym_end] = ACTIONS(234),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(16),
    [anon_sym_data] = ACTIONS(18),
    [anon_sym_newtype] = ACTIONS(20),
    [anon_sym_type] = ACTIONS(22),
    [sym_variable_identifier] = ACTIONS(24),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_in] = ACTIONS(14),
    [anon_sym_infix] = ACTIONS(14),
    [anon_sym_infixl] = ACTIONS(14),
    [anon_sym_infixr] = ACTIONS(14),
    [anon_sym_instance] = ACTIONS(14),
    [anon_sym_let] = ACTIONS(14),
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(28),
    [anon_sym_SQUOTE] = ACTIONS(30),
    [anon_sym_DQUOTE] = ACTIONS(32),
    [sym__integer_literal] = ACTIONS(34),
    [sym__octal_literal] = ACTIONS(34),
    [sym__hexidecimal_literal] = ACTIONS(34),
  },
  [51] = {
    [sym_export_declaration] = STATE(83),
    [sym__identifier] = STATE(84),
    [sym_reserved_identifier] = STATE(8),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_RPAREN] = ACTIONS(236),
    [sym_variable_identifier] = ACTIONS(24),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_in] = ACTIONS(14),
    [anon_sym_infix] = ACTIONS(14),
    [anon_sym_infixl] = ACTIONS(14),
    [anon_sym_infixr] = ACTIONS(14),
    [anon_sym_instance] = ACTIONS(14),
    [anon_sym_let] = ACTIONS(14),
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(26),
  },
  [52] = {
    [anon_sym_where] = ACTIONS(238),
    [sym_comment] = ACTIONS(26),
  },
  [53] = {
    [sym_import_specification] = STATE(87),
    [ts_builtin_sym_end] = ACTIONS(240),
    [anon_sym_module] = ACTIONS(242),
    [anon_sym_where] = ACTIONS(242),
    [anon_sym_LPAREN] = ACTIONS(136),
    [anon_sym_import] = ACTIONS(242),
    [anon_sym_as] = ACTIONS(244),
    [anon_sym_hiding] = ACTIONS(140),
    [anon_sym_data] = ACTIONS(242),
    [anon_sym_newtype] = ACTIONS(242),
    [anon_sym_type] = ACTIONS(242),
    [sym_variable_identifier] = ACTIONS(246),
    [sym_constructor_identifier] = ACTIONS(246),
    [sym_module_identifier] = ACTIONS(246),
    [anon_sym_case] = ACTIONS(242),
    [anon_sym_class] = ACTIONS(242),
    [anon_sym_default] = ACTIONS(242),
    [anon_sym_deriving] = ACTIONS(242),
    [anon_sym_do] = ACTIONS(242),
    [anon_sym_else] = ACTIONS(242),
    [anon_sym_foreign] = ACTIONS(242),
    [anon_sym_if] = ACTIONS(242),
    [anon_sym_in] = ACTIONS(242),
    [anon_sym_infix] = ACTIONS(242),
    [anon_sym_infixl] = ACTIONS(242),
    [anon_sym_infixr] = ACTIONS(242),
    [anon_sym_instance] = ACTIONS(242),
    [anon_sym_let] = ACTIONS(242),
    [anon_sym_of] = ACTIONS(242),
    [anon_sym_then] = ACTIONS(242),
    [anon_sym__] = ACTIONS(242),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(246),
    [anon_sym_SQUOTE] = ACTIONS(242),
    [anon_sym_DQUOTE] = ACTIONS(242),
    [sym__integer_literal] = ACTIONS(242),
    [sym__octal_literal] = ACTIONS(242),
    [sym__hexidecimal_literal] = ACTIONS(242),
  },
  [54] = {
    [sym__identifier] = STATE(89),
    [sym_reserved_identifier] = STATE(8),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_RPAREN] = ACTIONS(248),
    [sym_variable_identifier] = ACTIONS(24),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_in] = ACTIONS(14),
    [anon_sym_infix] = ACTIONS(14),
    [anon_sym_infixl] = ACTIONS(14),
    [anon_sym_infixr] = ACTIONS(14),
    [anon_sym_instance] = ACTIONS(14),
    [anon_sym_let] = ACTIONS(14),
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(26),
  },
  [55] = {
    [sym__identifier] = STATE(92),
    [sym_reserved_identifier] = STATE(91),
    [anon_sym_where] = ACTIONS(250),
    [sym_variable_identifier] = ACTIONS(252),
    [sym_constructor_identifier] = ACTIONS(252),
    [sym_module_identifier] = ACTIONS(252),
    [anon_sym_case] = ACTIONS(250),
    [anon_sym_class] = ACTIONS(250),
    [anon_sym_default] = ACTIONS(250),
    [anon_sym_deriving] = ACTIONS(250),
    [anon_sym_do] = ACTIONS(250),
    [anon_sym_else] = ACTIONS(250),
    [anon_sym_foreign] = ACTIONS(250),
    [anon_sym_if] = ACTIONS(250),
    [anon_sym_in] = ACTIONS(250),
    [anon_sym_infix] = ACTIONS(250),
    [anon_sym_infixl] = ACTIONS(250),
    [anon_sym_infixr] = ACTIONS(250),
    [anon_sym_instance] = ACTIONS(250),
    [anon_sym_let] = ACTIONS(250),
    [anon_sym_of] = ACTIONS(250),
    [anon_sym_then] = ACTIONS(250),
    [anon_sym__] = ACTIONS(250),
    [sym_comment] = ACTIONS(26),
  },
  [56] = {
    [anon_sym_LPAREN] = ACTIONS(254),
    [sym_comment] = ACTIONS(26),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(240),
    [anon_sym_module] = ACTIONS(242),
    [anon_sym_where] = ACTIONS(242),
    [anon_sym_import] = ACTIONS(242),
    [anon_sym_data] = ACTIONS(242),
    [anon_sym_newtype] = ACTIONS(242),
    [anon_sym_type] = ACTIONS(242),
    [sym_variable_identifier] = ACTIONS(246),
    [sym_constructor_identifier] = ACTIONS(246),
    [sym_module_identifier] = ACTIONS(246),
    [anon_sym_case] = ACTIONS(242),
    [anon_sym_class] = ACTIONS(242),
    [anon_sym_default] = ACTIONS(242),
    [anon_sym_deriving] = ACTIONS(242),
    [anon_sym_do] = ACTIONS(242),
    [anon_sym_else] = ACTIONS(242),
    [anon_sym_foreign] = ACTIONS(242),
    [anon_sym_if] = ACTIONS(242),
    [anon_sym_in] = ACTIONS(242),
    [anon_sym_infix] = ACTIONS(242),
    [anon_sym_infixl] = ACTIONS(242),
    [anon_sym_infixr] = ACTIONS(242),
    [anon_sym_instance] = ACTIONS(242),
    [anon_sym_let] = ACTIONS(242),
    [anon_sym_of] = ACTIONS(242),
    [anon_sym_then] = ACTIONS(242),
    [anon_sym__] = ACTIONS(242),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(246),
    [anon_sym_SQUOTE] = ACTIONS(242),
    [anon_sym_DQUOTE] = ACTIONS(242),
    [sym__integer_literal] = ACTIONS(242),
    [sym__octal_literal] = ACTIONS(242),
    [sym__hexidecimal_literal] = ACTIONS(242),
  },
  [58] = {
    [sym_constructors] = STATE(94),
    [sym__identifier] = STATE(60),
    [sym_reserved_identifier] = STATE(8),
    [aux_sym_constructors_repeat1] = STATE(61),
    [ts_builtin_sym_end] = ACTIONS(256),
    [anon_sym_module] = ACTIONS(258),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(258),
    [anon_sym_data] = ACTIONS(258),
    [anon_sym_newtype] = ACTIONS(258),
    [anon_sym_type] = ACTIONS(258),
    [sym_variable_identifier] = ACTIONS(24),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_in] = ACTIONS(14),
    [anon_sym_infix] = ACTIONS(14),
    [anon_sym_infixl] = ACTIONS(14),
    [anon_sym_infixr] = ACTIONS(14),
    [anon_sym_instance] = ACTIONS(14),
    [anon_sym_let] = ACTIONS(14),
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(260),
    [anon_sym_SQUOTE] = ACTIONS(258),
    [anon_sym_DQUOTE] = ACTIONS(258),
    [sym__integer_literal] = ACTIONS(258),
    [sym__octal_literal] = ACTIONS(258),
    [sym__hexidecimal_literal] = ACTIONS(258),
  },
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(256),
    [anon_sym_module] = ACTIONS(258),
    [anon_sym_where] = ACTIONS(258),
    [anon_sym_import] = ACTIONS(258),
    [anon_sym_data] = ACTIONS(258),
    [anon_sym_newtype] = ACTIONS(258),
    [anon_sym_type] = ACTIONS(258),
    [sym_variable_identifier] = ACTIONS(260),
    [sym_constructor_identifier] = ACTIONS(260),
    [sym_module_identifier] = ACTIONS(260),
    [anon_sym_case] = ACTIONS(258),
    [anon_sym_class] = ACTIONS(258),
    [anon_sym_default] = ACTIONS(258),
    [anon_sym_deriving] = ACTIONS(258),
    [anon_sym_do] = ACTIONS(258),
    [anon_sym_else] = ACTIONS(258),
    [anon_sym_foreign] = ACTIONS(258),
    [anon_sym_if] = ACTIONS(258),
    [anon_sym_in] = ACTIONS(258),
    [anon_sym_infix] = ACTIONS(258),
    [anon_sym_infixl] = ACTIONS(258),
    [anon_sym_infixr] = ACTIONS(258),
    [anon_sym_instance] = ACTIONS(258),
    [anon_sym_let] = ACTIONS(258),
    [anon_sym_of] = ACTIONS(258),
    [anon_sym_then] = ACTIONS(258),
    [anon_sym__] = ACTIONS(258),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(260),
    [anon_sym_SQUOTE] = ACTIONS(258),
    [anon_sym_DQUOTE] = ACTIONS(258),
    [sym__integer_literal] = ACTIONS(258),
    [sym__octal_literal] = ACTIONS(258),
    [sym__hexidecimal_literal] = ACTIONS(258),
  },
  [60] = {
    [sym_fields] = STATE(96),
    [ts_builtin_sym_end] = ACTIONS(144),
    [anon_sym_module] = ACTIONS(146),
    [anon_sym_where] = ACTIONS(146),
    [anon_sym_import] = ACTIONS(146),
    [anon_sym_data] = ACTIONS(146),
    [anon_sym_newtype] = ACTIONS(146),
    [anon_sym_LBRACE] = ACTIONS(262),
    [anon_sym_type] = ACTIONS(146),
    [sym_variable_identifier] = ACTIONS(148),
    [sym_constructor_identifier] = ACTIONS(148),
    [sym_module_identifier] = ACTIONS(148),
    [anon_sym_case] = ACTIONS(146),
    [anon_sym_class] = ACTIONS(146),
    [anon_sym_default] = ACTIONS(146),
    [anon_sym_deriving] = ACTIONS(146),
    [anon_sym_do] = ACTIONS(146),
    [anon_sym_else] = ACTIONS(146),
    [anon_sym_foreign] = ACTIONS(146),
    [anon_sym_if] = ACTIONS(146),
    [anon_sym_in] = ACTIONS(146),
    [anon_sym_infix] = ACTIONS(146),
    [anon_sym_infixl] = ACTIONS(146),
    [anon_sym_infixr] = ACTIONS(146),
    [anon_sym_instance] = ACTIONS(146),
    [anon_sym_let] = ACTIONS(146),
    [anon_sym_of] = ACTIONS(146),
    [anon_sym_then] = ACTIONS(146),
    [anon_sym__] = ACTIONS(146),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(148),
    [anon_sym_SQUOTE] = ACTIONS(146),
    [anon_sym_DQUOTE] = ACTIONS(146),
    [sym__integer_literal] = ACTIONS(146),
    [sym__octal_literal] = ACTIONS(146),
    [sym__hexidecimal_literal] = ACTIONS(146),
  },
  [61] = {
    [sym__identifier] = STATE(62),
    [sym_reserved_identifier] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(264),
    [anon_sym_module] = ACTIONS(266),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(266),
    [anon_sym_data] = ACTIONS(266),
    [anon_sym_newtype] = ACTIONS(266),
    [anon_sym_type] = ACTIONS(266),
    [sym_variable_identifier] = ACTIONS(24),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_in] = ACTIONS(14),
    [anon_sym_infix] = ACTIONS(14),
    [anon_sym_infixl] = ACTIONS(14),
    [anon_sym_infixr] = ACTIONS(14),
    [anon_sym_instance] = ACTIONS(14),
    [anon_sym_let] = ACTIONS(14),
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(268),
    [anon_sym_SQUOTE] = ACTIONS(266),
    [anon_sym_DQUOTE] = ACTIONS(266),
    [sym__integer_literal] = ACTIONS(266),
    [sym__octal_literal] = ACTIONS(266),
    [sym__hexidecimal_literal] = ACTIONS(266),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(270),
    [anon_sym_module] = ACTIONS(272),
    [anon_sym_where] = ACTIONS(272),
    [anon_sym_import] = ACTIONS(272),
    [anon_sym_data] = ACTIONS(272),
    [anon_sym_EQ] = ACTIONS(272),
    [anon_sym_newtype] = ACTIONS(272),
    [anon_sym_type] = ACTIONS(272),
    [sym_variable_identifier] = ACTIONS(274),
    [sym_constructor_identifier] = ACTIONS(274),
    [sym_module_identifier] = ACTIONS(274),
    [anon_sym_case] = ACTIONS(272),
    [anon_sym_class] = ACTIONS(272),
    [anon_sym_default] = ACTIONS(272),
    [anon_sym_deriving] = ACTIONS(272),
    [anon_sym_do] = ACTIONS(272),
    [anon_sym_else] = ACTIONS(272),
    [anon_sym_foreign] = ACTIONS(272),
    [anon_sym_if] = ACTIONS(272),
    [anon_sym_in] = ACTIONS(272),
    [anon_sym_infix] = ACTIONS(272),
    [anon_sym_infixl] = ACTIONS(272),
    [anon_sym_infixr] = ACTIONS(272),
    [anon_sym_instance] = ACTIONS(272),
    [anon_sym_let] = ACTIONS(272),
    [anon_sym_of] = ACTIONS(272),
    [anon_sym_then] = ACTIONS(272),
    [anon_sym__] = ACTIONS(272),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(274),
    [anon_sym_SQUOTE] = ACTIONS(272),
    [anon_sym_DQUOTE] = ACTIONS(272),
    [sym__integer_literal] = ACTIONS(272),
    [sym__octal_literal] = ACTIONS(272),
    [sym__hexidecimal_literal] = ACTIONS(272),
  },
  [63] = {
    [sym_new_constructor] = STATE(98),
    [sym_constructor_identifier] = ACTIONS(276),
    [sym_comment] = ACTIONS(26),
  },
  [64] = {
    [anon_sym_where] = ACTIONS(272),
    [anon_sym_EQ] = ACTIONS(272),
    [sym_variable_identifier] = ACTIONS(274),
    [sym_constructor_identifier] = ACTIONS(274),
    [sym_module_identifier] = ACTIONS(274),
    [anon_sym_case] = ACTIONS(272),
    [anon_sym_class] = ACTIONS(272),
    [anon_sym_default] = ACTIONS(272),
    [anon_sym_deriving] = ACTIONS(272),
    [anon_sym_do] = ACTIONS(272),
    [anon_sym_else] = ACTIONS(272),
    [anon_sym_foreign] = ACTIONS(272),
    [anon_sym_if] = ACTIONS(272),
    [anon_sym_in] = ACTIONS(272),
    [anon_sym_infix] = ACTIONS(272),
    [anon_sym_infixl] = ACTIONS(272),
    [anon_sym_infixr] = ACTIONS(272),
    [anon_sym_instance] = ACTIONS(272),
    [anon_sym_let] = ACTIONS(272),
    [anon_sym_of] = ACTIONS(272),
    [anon_sym_then] = ACTIONS(272),
    [anon_sym__] = ACTIONS(272),
    [sym_comment] = ACTIONS(26),
  },
  [65] = {
    [sym__identifier] = STATE(23),
    [sym_reserved_identifier] = STATE(8),
    [aux_sym_constructors_repeat1] = STATE(99),
    [anon_sym_where] = ACTIONS(14),
    [sym_variable_identifier] = ACTIONS(24),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_in] = ACTIONS(14),
    [anon_sym_infix] = ACTIONS(14),
    [anon_sym_infixl] = ACTIONS(14),
    [anon_sym_infixr] = ACTIONS(14),
    [anon_sym_instance] = ACTIONS(14),
    [anon_sym_let] = ACTIONS(14),
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(26),
  },
  [66] = {
    [ts_builtin_sym_end] = ACTIONS(278),
    [anon_sym_module] = ACTIONS(280),
    [anon_sym_where] = ACTIONS(280),
    [anon_sym_import] = ACTIONS(280),
    [anon_sym_data] = ACTIONS(280),
    [anon_sym_newtype] = ACTIONS(280),
    [anon_sym_type] = ACTIONS(280),
    [sym_variable_identifier] = ACTIONS(282),
    [sym_constructor_identifier] = ACTIONS(282),
    [sym_module_identifier] = ACTIONS(282),
    [anon_sym_case] = ACTIONS(280),
    [anon_sym_class] = ACTIONS(280),
    [anon_sym_default] = ACTIONS(280),
    [anon_sym_deriving] = ACTIONS(280),
    [anon_sym_do] = ACTIONS(280),
    [anon_sym_else] = ACTIONS(280),
    [anon_sym_foreign] = ACTIONS(280),
    [anon_sym_if] = ACTIONS(280),
    [anon_sym_in] = ACTIONS(280),
    [anon_sym_infix] = ACTIONS(280),
    [anon_sym_infixl] = ACTIONS(280),
    [anon_sym_infixr] = ACTIONS(280),
    [anon_sym_instance] = ACTIONS(280),
    [anon_sym_let] = ACTIONS(280),
    [anon_sym_of] = ACTIONS(280),
    [anon_sym_then] = ACTIONS(280),
    [anon_sym__] = ACTIONS(280),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(282),
    [anon_sym_SQUOTE] = ACTIONS(280),
    [anon_sym_DQUOTE] = ACTIONS(280),
    [sym__integer_literal] = ACTIONS(280),
    [sym__octal_literal] = ACTIONS(280),
    [sym__hexidecimal_literal] = ACTIONS(280),
  },
  [67] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(284),
  },
  [68] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(286),
  },
  [69] = {
    [sym__cntrl] = STATE(101),
    [anon_sym__] = ACTIONS(288),
    [sym_comment] = ACTIONS(72),
    [sym__ascii_large] = ACTIONS(288),
    [anon_sym_AT] = ACTIONS(288),
    [anon_sym_CARET] = ACTIONS(288),
    [anon_sym_BSLASH] = ACTIONS(288),
    [anon_sym_LBRACK] = ACTIONS(288),
    [anon_sym_RBRACK] = ACTIONS(288),
  },
  [70] = {
    [aux_sym__escape_repeat1] = STATE(103),
    [sym_comment] = ACTIONS(26),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(290),
  },
  [71] = {
    [aux_sym__escape_repeat2] = STATE(105),
    [sym_comment] = ACTIONS(26),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(292),
  },
  [72] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(294),
  },
  [73] = {
    [anon_sym_LPAREN] = ACTIONS(296),
    [anon_sym_RPAREN] = ACTIONS(296),
    [anon_sym_EQ] = ACTIONS(296),
    [anon_sym_LBRACE] = ACTIONS(296),
    [anon_sym_RBRACE] = ACTIONS(296),
    [anon_sym__] = ACTIONS(296),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(296),
    [anon_sym_DQUOTE] = ACTIONS(296),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(296),
    [sym__ascii_large] = ACTIONS(296),
    [anon_sym_BANG] = ACTIONS(296),
    [anon_sym_POUND] = ACTIONS(296),
    [anon_sym_DOLLAR] = ACTIONS(296),
    [anon_sym_PERCENT] = ACTIONS(296),
    [anon_sym_AMP] = ACTIONS(296),
    [anon_sym_1] = ACTIONS(296),
    [anon_sym_PLUS] = ACTIONS(296),
    [anon_sym_DOT] = ACTIONS(296),
    [anon_sym_SLASH] = ACTIONS(296),
    [anon_sym_LT] = ACTIONS(296),
    [anon_sym_GT] = ACTIONS(296),
    [anon_sym_QMARK] = ACTIONS(296),
    [anon_sym_AT] = ACTIONS(296),
    [anon_sym_CARET] = ACTIONS(296),
    [anon_sym_PIPE] = ACTIONS(296),
    [anon_sym_DASH] = ACTIONS(296),
    [anon_sym_TILDE] = ACTIONS(296),
    [anon_sym_COLON] = ACTIONS(296),
    [anon_sym_BSLASH] = ACTIONS(296),
    [anon_sym_SEMI] = ACTIONS(296),
    [anon_sym_LBRACK] = ACTIONS(296),
    [anon_sym_RBRACK] = ACTIONS(296),
    [anon_sym_BQUOTE] = ACTIONS(296),
    [sym__space] = ACTIONS(296),
    [sym__newline] = ACTIONS(296),
    [sym__tab] = ACTIONS(296),
    [sym__vertical_tab] = ACTIONS(296),
  },
  [74] = {
    [anon_sym_LPAREN] = ACTIONS(298),
    [anon_sym_RPAREN] = ACTIONS(298),
    [anon_sym_EQ] = ACTIONS(298),
    [anon_sym_LBRACE] = ACTIONS(298),
    [anon_sym_RBRACE] = ACTIONS(298),
    [anon_sym__] = ACTIONS(298),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(298),
    [anon_sym_DQUOTE] = ACTIONS(298),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(298),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(298),
    [sym__ascii_large] = ACTIONS(298),
    [anon_sym_BANG] = ACTIONS(298),
    [anon_sym_POUND] = ACTIONS(298),
    [anon_sym_DOLLAR] = ACTIONS(298),
    [anon_sym_PERCENT] = ACTIONS(298),
    [anon_sym_AMP] = ACTIONS(298),
    [anon_sym_1] = ACTIONS(298),
    [anon_sym_PLUS] = ACTIONS(298),
    [anon_sym_DOT] = ACTIONS(298),
    [anon_sym_SLASH] = ACTIONS(298),
    [anon_sym_LT] = ACTIONS(298),
    [anon_sym_GT] = ACTIONS(298),
    [anon_sym_QMARK] = ACTIONS(298),
    [anon_sym_AT] = ACTIONS(298),
    [anon_sym_CARET] = ACTIONS(298),
    [anon_sym_PIPE] = ACTIONS(298),
    [anon_sym_DASH] = ACTIONS(298),
    [anon_sym_TILDE] = ACTIONS(298),
    [anon_sym_COLON] = ACTIONS(298),
    [anon_sym_BSLASH] = ACTIONS(298),
    [anon_sym_SEMI] = ACTIONS(298),
    [anon_sym_LBRACK] = ACTIONS(298),
    [anon_sym_RBRACK] = ACTIONS(298),
    [anon_sym_BQUOTE] = ACTIONS(298),
    [sym__space] = ACTIONS(298),
    [sym__newline] = ACTIONS(298),
    [sym__tab] = ACTIONS(298),
    [sym__vertical_tab] = ACTIONS(298),
  },
  [75] = {
    [sym__cntrl] = STATE(107),
    [anon_sym__] = ACTIONS(300),
    [sym_comment] = ACTIONS(72),
    [sym__ascii_large] = ACTIONS(300),
    [anon_sym_AT] = ACTIONS(300),
    [anon_sym_CARET] = ACTIONS(300),
    [anon_sym_BSLASH] = ACTIONS(300),
    [anon_sym_LBRACK] = ACTIONS(300),
    [anon_sym_RBRACK] = ACTIONS(300),
  },
  [76] = {
    [aux_sym__escape_repeat1] = STATE(109),
    [sym_comment] = ACTIONS(26),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(302),
  },
  [77] = {
    [aux_sym__escape_repeat2] = STATE(111),
    [sym_comment] = ACTIONS(26),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(304),
  },
  [78] = {
    [anon_sym_LPAREN] = ACTIONS(306),
    [anon_sym_RPAREN] = ACTIONS(306),
    [anon_sym_EQ] = ACTIONS(306),
    [anon_sym_LBRACE] = ACTIONS(306),
    [anon_sym_RBRACE] = ACTIONS(306),
    [anon_sym__] = ACTIONS(306),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(306),
    [anon_sym_DQUOTE] = ACTIONS(306),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(306),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(306),
    [sym__ascii_large] = ACTIONS(306),
    [anon_sym_BANG] = ACTIONS(306),
    [anon_sym_POUND] = ACTIONS(306),
    [anon_sym_DOLLAR] = ACTIONS(306),
    [anon_sym_PERCENT] = ACTIONS(306),
    [anon_sym_AMP] = ACTIONS(306),
    [anon_sym_1] = ACTIONS(306),
    [anon_sym_PLUS] = ACTIONS(306),
    [anon_sym_DOT] = ACTIONS(306),
    [anon_sym_SLASH] = ACTIONS(306),
    [anon_sym_LT] = ACTIONS(306),
    [anon_sym_GT] = ACTIONS(306),
    [anon_sym_QMARK] = ACTIONS(306),
    [anon_sym_AT] = ACTIONS(306),
    [anon_sym_CARET] = ACTIONS(306),
    [anon_sym_PIPE] = ACTIONS(306),
    [anon_sym_DASH] = ACTIONS(306),
    [anon_sym_TILDE] = ACTIONS(306),
    [anon_sym_COLON] = ACTIONS(306),
    [anon_sym_BSLASH] = ACTIONS(306),
    [anon_sym_SEMI] = ACTIONS(306),
    [anon_sym_LBRACK] = ACTIONS(306),
    [anon_sym_RBRACK] = ACTIONS(306),
    [anon_sym_BQUOTE] = ACTIONS(306),
    [sym__space] = ACTIONS(306),
    [sym__newline] = ACTIONS(306),
    [sym__tab] = ACTIONS(306),
    [sym__vertical_tab] = ACTIONS(306),
  },
  [79] = {
    [anon_sym_LPAREN] = ACTIONS(308),
    [anon_sym_RPAREN] = ACTIONS(308),
    [anon_sym_EQ] = ACTIONS(308),
    [anon_sym_LBRACE] = ACTIONS(308),
    [anon_sym_RBRACE] = ACTIONS(308),
    [anon_sym__] = ACTIONS(308),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(308),
    [anon_sym_DQUOTE] = ACTIONS(308),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(308),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(308),
    [sym__ascii_large] = ACTIONS(308),
    [anon_sym_BANG] = ACTIONS(308),
    [anon_sym_POUND] = ACTIONS(308),
    [anon_sym_DOLLAR] = ACTIONS(308),
    [anon_sym_PERCENT] = ACTIONS(308),
    [anon_sym_AMP] = ACTIONS(308),
    [anon_sym_1] = ACTIONS(308),
    [anon_sym_PLUS] = ACTIONS(308),
    [anon_sym_DOT] = ACTIONS(308),
    [anon_sym_SLASH] = ACTIONS(308),
    [anon_sym_LT] = ACTIONS(308),
    [anon_sym_GT] = ACTIONS(308),
    [anon_sym_QMARK] = ACTIONS(308),
    [anon_sym_AT] = ACTIONS(308),
    [anon_sym_CARET] = ACTIONS(308),
    [anon_sym_PIPE] = ACTIONS(308),
    [anon_sym_DASH] = ACTIONS(308),
    [anon_sym_TILDE] = ACTIONS(308),
    [anon_sym_COLON] = ACTIONS(308),
    [anon_sym_BSLASH] = ACTIONS(308),
    [anon_sym_SEMI] = ACTIONS(308),
    [anon_sym_LBRACK] = ACTIONS(308),
    [anon_sym_RBRACK] = ACTIONS(308),
    [anon_sym_BQUOTE] = ACTIONS(308),
    [sym__space] = ACTIONS(308),
    [sym__newline] = ACTIONS(308),
    [sym__tab] = ACTIONS(308),
    [sym__vertical_tab] = ACTIONS(308),
  },
  [80] = {
    [ts_builtin_sym_end] = ACTIONS(310),
    [anon_sym_module] = ACTIONS(312),
    [anon_sym_where] = ACTIONS(312),
    [anon_sym_import] = ACTIONS(312),
    [anon_sym_data] = ACTIONS(312),
    [anon_sym_newtype] = ACTIONS(312),
    [anon_sym_type] = ACTIONS(312),
    [sym_variable_identifier] = ACTIONS(314),
    [sym_constructor_identifier] = ACTIONS(314),
    [sym_module_identifier] = ACTIONS(314),
    [anon_sym_case] = ACTIONS(312),
    [anon_sym_class] = ACTIONS(312),
    [anon_sym_default] = ACTIONS(312),
    [anon_sym_deriving] = ACTIONS(312),
    [anon_sym_do] = ACTIONS(312),
    [anon_sym_else] = ACTIONS(312),
    [anon_sym_foreign] = ACTIONS(312),
    [anon_sym_if] = ACTIONS(312),
    [anon_sym_in] = ACTIONS(312),
    [anon_sym_infix] = ACTIONS(312),
    [anon_sym_infixl] = ACTIONS(312),
    [anon_sym_infixr] = ACTIONS(312),
    [anon_sym_instance] = ACTIONS(312),
    [anon_sym_let] = ACTIONS(312),
    [anon_sym_of] = ACTIONS(312),
    [anon_sym_then] = ACTIONS(312),
    [anon_sym__] = ACTIONS(312),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(314),
    [anon_sym_SQUOTE] = ACTIONS(312),
    [anon_sym_DQUOTE] = ACTIONS(312),
    [sym__integer_literal] = ACTIONS(312),
    [sym__octal_literal] = ACTIONS(312),
    [sym__hexidecimal_literal] = ACTIONS(312),
  },
  [81] = {
    [sym__statement] = STATE(49),
    [sym_module] = STATE(15),
    [sym_import_declaration] = STATE(15),
    [sym__top_level_declaration] = STATE(15),
    [sym_algebraic_datatype] = STATE(16),
    [sym_newtype] = STATE(16),
    [sym_type_synonym] = STATE(16),
    [sym__literal] = STATE(15),
    [sym__identifier] = STATE(15),
    [sym_reserved_identifier] = STATE(8),
    [sym_integer] = STATE(9),
    [sym_char] = STATE(9),
    [sym_string] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(316),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(16),
    [anon_sym_data] = ACTIONS(18),
    [anon_sym_newtype] = ACTIONS(20),
    [anon_sym_type] = ACTIONS(22),
    [sym_variable_identifier] = ACTIONS(24),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_in] = ACTIONS(14),
    [anon_sym_infix] = ACTIONS(14),
    [anon_sym_infixl] = ACTIONS(14),
    [anon_sym_infixr] = ACTIONS(14),
    [anon_sym_instance] = ACTIONS(14),
    [anon_sym_let] = ACTIONS(14),
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(28),
    [anon_sym_SQUOTE] = ACTIONS(30),
    [anon_sym_DQUOTE] = ACTIONS(32),
    [sym__integer_literal] = ACTIONS(34),
    [sym__octal_literal] = ACTIONS(34),
    [sym__hexidecimal_literal] = ACTIONS(34),
  },
  [82] = {
    [anon_sym_where] = ACTIONS(318),
    [sym_comment] = ACTIONS(26),
  },
  [83] = {
    [aux_sym_module_export_declarations_repeat1] = STATE(114),
    [anon_sym_COMMA] = ACTIONS(320),
    [anon_sym_RPAREN] = ACTIONS(322),
    [sym_comment] = ACTIONS(26),
  },
  [84] = {
    [anon_sym_LPAREN] = ACTIONS(324),
    [anon_sym_COMMA] = ACTIONS(326),
    [anon_sym_RPAREN] = ACTIONS(326),
    [sym_comment] = ACTIONS(26),
  },
  [85] = {
    [sym__statement] = STATE(14),
    [sym_module] = STATE(15),
    [sym_import_declaration] = STATE(15),
    [sym__top_level_declaration] = STATE(15),
    [sym_algebraic_datatype] = STATE(16),
    [sym_newtype] = STATE(16),
    [sym_type_synonym] = STATE(16),
    [sym__literal] = STATE(15),
    [sym__identifier] = STATE(15),
    [sym_reserved_identifier] = STATE(8),
    [sym_integer] = STATE(9),
    [sym_char] = STATE(9),
    [sym_string] = STATE(9),
    [aux_sym_program_repeat1] = STATE(116),
    [ts_builtin_sym_end] = ACTIONS(328),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(16),
    [anon_sym_data] = ACTIONS(18),
    [anon_sym_newtype] = ACTIONS(20),
    [anon_sym_type] = ACTIONS(22),
    [sym_variable_identifier] = ACTIONS(24),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_in] = ACTIONS(14),
    [anon_sym_infix] = ACTIONS(14),
    [anon_sym_infixl] = ACTIONS(14),
    [anon_sym_infixr] = ACTIONS(14),
    [anon_sym_instance] = ACTIONS(14),
    [anon_sym_let] = ACTIONS(14),
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(28),
    [anon_sym_SQUOTE] = ACTIONS(30),
    [anon_sym_DQUOTE] = ACTIONS(32),
    [sym__integer_literal] = ACTIONS(34),
    [sym__octal_literal] = ACTIONS(34),
    [sym__hexidecimal_literal] = ACTIONS(34),
  },
  [86] = {
    [sym__identifier] = STATE(117),
    [sym_reserved_identifier] = STATE(91),
    [anon_sym_where] = ACTIONS(250),
    [sym_variable_identifier] = ACTIONS(252),
    [sym_constructor_identifier] = ACTIONS(252),
    [sym_module_identifier] = ACTIONS(252),
    [anon_sym_case] = ACTIONS(250),
    [anon_sym_class] = ACTIONS(250),
    [anon_sym_default] = ACTIONS(250),
    [anon_sym_deriving] = ACTIONS(250),
    [anon_sym_do] = ACTIONS(250),
    [anon_sym_else] = ACTIONS(250),
    [anon_sym_foreign] = ACTIONS(250),
    [anon_sym_if] = ACTIONS(250),
    [anon_sym_in] = ACTIONS(250),
    [anon_sym_infix] = ACTIONS(250),
    [anon_sym_infixl] = ACTIONS(250),
    [anon_sym_infixr] = ACTIONS(250),
    [anon_sym_instance] = ACTIONS(250),
    [anon_sym_let] = ACTIONS(250),
    [anon_sym_of] = ACTIONS(250),
    [anon_sym_then] = ACTIONS(250),
    [anon_sym__] = ACTIONS(250),
    [sym_comment] = ACTIONS(26),
  },
  [87] = {
    [ts_builtin_sym_end] = ACTIONS(330),
    [anon_sym_module] = ACTIONS(332),
    [anon_sym_where] = ACTIONS(332),
    [anon_sym_import] = ACTIONS(332),
    [anon_sym_data] = ACTIONS(332),
    [anon_sym_newtype] = ACTIONS(332),
    [anon_sym_type] = ACTIONS(332),
    [sym_variable_identifier] = ACTIONS(334),
    [sym_constructor_identifier] = ACTIONS(334),
    [sym_module_identifier] = ACTIONS(334),
    [anon_sym_case] = ACTIONS(332),
    [anon_sym_class] = ACTIONS(332),
    [anon_sym_default] = ACTIONS(332),
    [anon_sym_deriving] = ACTIONS(332),
    [anon_sym_do] = ACTIONS(332),
    [anon_sym_else] = ACTIONS(332),
    [anon_sym_foreign] = ACTIONS(332),
    [anon_sym_if] = ACTIONS(332),
    [anon_sym_in] = ACTIONS(332),
    [anon_sym_infix] = ACTIONS(332),
    [anon_sym_infixl] = ACTIONS(332),
    [anon_sym_infixr] = ACTIONS(332),
    [anon_sym_instance] = ACTIONS(332),
    [anon_sym_let] = ACTIONS(332),
    [anon_sym_of] = ACTIONS(332),
    [anon_sym_then] = ACTIONS(332),
    [anon_sym__] = ACTIONS(332),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(334),
    [anon_sym_SQUOTE] = ACTIONS(332),
    [anon_sym_DQUOTE] = ACTIONS(332),
    [sym__integer_literal] = ACTIONS(332),
    [sym__octal_literal] = ACTIONS(332),
    [sym__hexidecimal_literal] = ACTIONS(332),
  },
  [88] = {
    [ts_builtin_sym_end] = ACTIONS(336),
    [anon_sym_module] = ACTIONS(338),
    [anon_sym_where] = ACTIONS(338),
    [anon_sym_import] = ACTIONS(338),
    [anon_sym_data] = ACTIONS(338),
    [anon_sym_newtype] = ACTIONS(338),
    [anon_sym_type] = ACTIONS(338),
    [sym_variable_identifier] = ACTIONS(340),
    [sym_constructor_identifier] = ACTIONS(340),
    [sym_module_identifier] = ACTIONS(340),
    [anon_sym_case] = ACTIONS(338),
    [anon_sym_class] = ACTIONS(338),
    [anon_sym_default] = ACTIONS(338),
    [anon_sym_deriving] = ACTIONS(338),
    [anon_sym_do] = ACTIONS(338),
    [anon_sym_else] = ACTIONS(338),
    [anon_sym_foreign] = ACTIONS(338),
    [anon_sym_if] = ACTIONS(338),
    [anon_sym_in] = ACTIONS(338),
    [anon_sym_infix] = ACTIONS(338),
    [anon_sym_infixl] = ACTIONS(338),
    [anon_sym_infixr] = ACTIONS(338),
    [anon_sym_instance] = ACTIONS(338),
    [anon_sym_let] = ACTIONS(338),
    [anon_sym_of] = ACTIONS(338),
    [anon_sym_then] = ACTIONS(338),
    [anon_sym__] = ACTIONS(338),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(340),
    [anon_sym_SQUOTE] = ACTIONS(338),
    [anon_sym_DQUOTE] = ACTIONS(338),
    [sym__integer_literal] = ACTIONS(338),
    [sym__octal_literal] = ACTIONS(338),
    [sym__hexidecimal_literal] = ACTIONS(338),
  },
  [89] = {
    [aux_sym_import_specification_repeat1] = STATE(121),
    [anon_sym_LPAREN] = ACTIONS(342),
    [anon_sym_COMMA] = ACTIONS(344),
    [anon_sym_RPAREN] = ACTIONS(346),
    [sym_comment] = ACTIONS(26),
  },
  [90] = {
    [ts_builtin_sym_end] = ACTIONS(38),
    [anon_sym_module] = ACTIONS(40),
    [anon_sym_where] = ACTIONS(40),
    [anon_sym_LPAREN] = ACTIONS(40),
    [anon_sym_import] = ACTIONS(40),
    [anon_sym_hiding] = ACTIONS(40),
    [anon_sym_data] = ACTIONS(40),
    [anon_sym_newtype] = ACTIONS(40),
    [anon_sym_type] = ACTIONS(40),
    [sym_variable_identifier] = ACTIONS(42),
    [sym_constructor_identifier] = ACTIONS(42),
    [sym_module_identifier] = ACTIONS(42),
    [anon_sym_case] = ACTIONS(40),
    [anon_sym_class] = ACTIONS(40),
    [anon_sym_default] = ACTIONS(40),
    [anon_sym_deriving] = ACTIONS(40),
    [anon_sym_do] = ACTIONS(40),
    [anon_sym_else] = ACTIONS(40),
    [anon_sym_foreign] = ACTIONS(40),
    [anon_sym_if] = ACTIONS(40),
    [anon_sym_in] = ACTIONS(40),
    [anon_sym_infix] = ACTIONS(40),
    [anon_sym_infixl] = ACTIONS(40),
    [anon_sym_infixr] = ACTIONS(40),
    [anon_sym_instance] = ACTIONS(40),
    [anon_sym_let] = ACTIONS(40),
    [anon_sym_of] = ACTIONS(40),
    [anon_sym_then] = ACTIONS(40),
    [anon_sym__] = ACTIONS(40),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(42),
    [anon_sym_SQUOTE] = ACTIONS(40),
    [anon_sym_DQUOTE] = ACTIONS(40),
    [sym__integer_literal] = ACTIONS(40),
    [sym__octal_literal] = ACTIONS(40),
    [sym__hexidecimal_literal] = ACTIONS(40),
  },
  [91] = {
    [ts_builtin_sym_end] = ACTIONS(54),
    [anon_sym_module] = ACTIONS(56),
    [anon_sym_where] = ACTIONS(56),
    [anon_sym_LPAREN] = ACTIONS(56),
    [anon_sym_import] = ACTIONS(56),
    [anon_sym_hiding] = ACTIONS(56),
    [anon_sym_data] = ACTIONS(56),
    [anon_sym_newtype] = ACTIONS(56),
    [anon_sym_type] = ACTIONS(56),
    [sym_variable_identifier] = ACTIONS(58),
    [sym_constructor_identifier] = ACTIONS(58),
    [sym_module_identifier] = ACTIONS(58),
    [anon_sym_case] = ACTIONS(56),
    [anon_sym_class] = ACTIONS(56),
    [anon_sym_default] = ACTIONS(56),
    [anon_sym_deriving] = ACTIONS(56),
    [anon_sym_do] = ACTIONS(56),
    [anon_sym_else] = ACTIONS(56),
    [anon_sym_foreign] = ACTIONS(56),
    [anon_sym_if] = ACTIONS(56),
    [anon_sym_in] = ACTIONS(56),
    [anon_sym_infix] = ACTIONS(56),
    [anon_sym_infixl] = ACTIONS(56),
    [anon_sym_infixr] = ACTIONS(56),
    [anon_sym_instance] = ACTIONS(56),
    [anon_sym_let] = ACTIONS(56),
    [anon_sym_of] = ACTIONS(56),
    [anon_sym_then] = ACTIONS(56),
    [anon_sym__] = ACTIONS(56),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(58),
    [anon_sym_SQUOTE] = ACTIONS(56),
    [anon_sym_DQUOTE] = ACTIONS(56),
    [sym__integer_literal] = ACTIONS(56),
    [sym__octal_literal] = ACTIONS(56),
    [sym__hexidecimal_literal] = ACTIONS(56),
  },
  [92] = {
    [sym_import_specification] = STATE(122),
    [ts_builtin_sym_end] = ACTIONS(330),
    [anon_sym_module] = ACTIONS(332),
    [anon_sym_where] = ACTIONS(332),
    [anon_sym_LPAREN] = ACTIONS(136),
    [anon_sym_import] = ACTIONS(332),
    [anon_sym_hiding] = ACTIONS(140),
    [anon_sym_data] = ACTIONS(332),
    [anon_sym_newtype] = ACTIONS(332),
    [anon_sym_type] = ACTIONS(332),
    [sym_variable_identifier] = ACTIONS(334),
    [sym_constructor_identifier] = ACTIONS(334),
    [sym_module_identifier] = ACTIONS(334),
    [anon_sym_case] = ACTIONS(332),
    [anon_sym_class] = ACTIONS(332),
    [anon_sym_default] = ACTIONS(332),
    [anon_sym_deriving] = ACTIONS(332),
    [anon_sym_do] = ACTIONS(332),
    [anon_sym_else] = ACTIONS(332),
    [anon_sym_foreign] = ACTIONS(332),
    [anon_sym_if] = ACTIONS(332),
    [anon_sym_in] = ACTIONS(332),
    [anon_sym_infix] = ACTIONS(332),
    [anon_sym_infixl] = ACTIONS(332),
    [anon_sym_infixr] = ACTIONS(332),
    [anon_sym_instance] = ACTIONS(332),
    [anon_sym_let] = ACTIONS(332),
    [anon_sym_of] = ACTIONS(332),
    [anon_sym_then] = ACTIONS(332),
    [anon_sym__] = ACTIONS(332),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(334),
    [anon_sym_SQUOTE] = ACTIONS(332),
    [anon_sym_DQUOTE] = ACTIONS(332),
    [sym__integer_literal] = ACTIONS(332),
    [sym__octal_literal] = ACTIONS(332),
    [sym__hexidecimal_literal] = ACTIONS(332),
  },
  [93] = {
    [sym__identifier] = STATE(123),
    [sym_reserved_identifier] = STATE(8),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_RPAREN] = ACTIONS(346),
    [sym_variable_identifier] = ACTIONS(24),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_in] = ACTIONS(14),
    [anon_sym_infix] = ACTIONS(14),
    [anon_sym_infixl] = ACTIONS(14),
    [anon_sym_infixr] = ACTIONS(14),
    [anon_sym_instance] = ACTIONS(14),
    [anon_sym_let] = ACTIONS(14),
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(26),
  },
  [94] = {
    [ts_builtin_sym_end] = ACTIONS(348),
    [anon_sym_module] = ACTIONS(350),
    [anon_sym_where] = ACTIONS(350),
    [anon_sym_import] = ACTIONS(350),
    [anon_sym_data] = ACTIONS(350),
    [anon_sym_newtype] = ACTIONS(350),
    [anon_sym_type] = ACTIONS(350),
    [sym_variable_identifier] = ACTIONS(352),
    [sym_constructor_identifier] = ACTIONS(352),
    [sym_module_identifier] = ACTIONS(352),
    [anon_sym_case] = ACTIONS(350),
    [anon_sym_class] = ACTIONS(350),
    [anon_sym_default] = ACTIONS(350),
    [anon_sym_deriving] = ACTIONS(350),
    [anon_sym_do] = ACTIONS(350),
    [anon_sym_else] = ACTIONS(350),
    [anon_sym_foreign] = ACTIONS(350),
    [anon_sym_if] = ACTIONS(350),
    [anon_sym_in] = ACTIONS(350),
    [anon_sym_infix] = ACTIONS(350),
    [anon_sym_infixl] = ACTIONS(350),
    [anon_sym_infixr] = ACTIONS(350),
    [anon_sym_instance] = ACTIONS(350),
    [anon_sym_let] = ACTIONS(350),
    [anon_sym_of] = ACTIONS(350),
    [anon_sym_then] = ACTIONS(350),
    [anon_sym__] = ACTIONS(350),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(352),
    [anon_sym_SQUOTE] = ACTIONS(350),
    [anon_sym_DQUOTE] = ACTIONS(350),
    [sym__integer_literal] = ACTIONS(350),
    [sym__octal_literal] = ACTIONS(350),
    [sym__hexidecimal_literal] = ACTIONS(350),
  },
  [95] = {
    [sym_field] = STATE(125),
    [sym_variable_identifier] = ACTIONS(354),
    [sym_comment] = ACTIONS(26),
  },
  [96] = {
    [ts_builtin_sym_end] = ACTIONS(356),
    [anon_sym_module] = ACTIONS(358),
    [anon_sym_where] = ACTIONS(358),
    [anon_sym_import] = ACTIONS(358),
    [anon_sym_data] = ACTIONS(358),
    [anon_sym_newtype] = ACTIONS(358),
    [anon_sym_type] = ACTIONS(358),
    [sym_variable_identifier] = ACTIONS(360),
    [sym_constructor_identifier] = ACTIONS(360),
    [sym_module_identifier] = ACTIONS(360),
    [anon_sym_case] = ACTIONS(358),
    [anon_sym_class] = ACTIONS(358),
    [anon_sym_default] = ACTIONS(358),
    [anon_sym_deriving] = ACTIONS(358),
    [anon_sym_do] = ACTIONS(358),
    [anon_sym_else] = ACTIONS(358),
    [anon_sym_foreign] = ACTIONS(358),
    [anon_sym_if] = ACTIONS(358),
    [anon_sym_in] = ACTIONS(358),
    [anon_sym_infix] = ACTIONS(358),
    [anon_sym_infixl] = ACTIONS(358),
    [anon_sym_infixr] = ACTIONS(358),
    [anon_sym_instance] = ACTIONS(358),
    [anon_sym_let] = ACTIONS(358),
    [anon_sym_of] = ACTIONS(358),
    [anon_sym_then] = ACTIONS(358),
    [anon_sym__] = ACTIONS(358),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(360),
    [anon_sym_SQUOTE] = ACTIONS(358),
    [anon_sym_DQUOTE] = ACTIONS(358),
    [sym__integer_literal] = ACTIONS(358),
    [sym__octal_literal] = ACTIONS(358),
    [sym__hexidecimal_literal] = ACTIONS(358),
  },
  [97] = {
    [sym_fields] = STATE(126),
    [sym__identifier] = STATE(126),
    [sym_reserved_identifier] = STATE(8),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_LBRACE] = ACTIONS(262),
    [sym_variable_identifier] = ACTIONS(24),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_in] = ACTIONS(14),
    [anon_sym_infix] = ACTIONS(14),
    [anon_sym_infixl] = ACTIONS(14),
    [anon_sym_infixr] = ACTIONS(14),
    [anon_sym_instance] = ACTIONS(14),
    [anon_sym_let] = ACTIONS(14),
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(26),
  },
  [98] = {
    [ts_builtin_sym_end] = ACTIONS(362),
    [anon_sym_module] = ACTIONS(364),
    [anon_sym_where] = ACTIONS(364),
    [anon_sym_import] = ACTIONS(364),
    [anon_sym_data] = ACTIONS(364),
    [anon_sym_newtype] = ACTIONS(364),
    [anon_sym_type] = ACTIONS(364),
    [sym_variable_identifier] = ACTIONS(366),
    [sym_constructor_identifier] = ACTIONS(366),
    [sym_module_identifier] = ACTIONS(366),
    [anon_sym_case] = ACTIONS(364),
    [anon_sym_class] = ACTIONS(364),
    [anon_sym_default] = ACTIONS(364),
    [anon_sym_deriving] = ACTIONS(364),
    [anon_sym_do] = ACTIONS(364),
    [anon_sym_else] = ACTIONS(364),
    [anon_sym_foreign] = ACTIONS(364),
    [anon_sym_if] = ACTIONS(364),
    [anon_sym_in] = ACTIONS(364),
    [anon_sym_infix] = ACTIONS(364),
    [anon_sym_infixl] = ACTIONS(364),
    [anon_sym_infixr] = ACTIONS(364),
    [anon_sym_instance] = ACTIONS(364),
    [anon_sym_let] = ACTIONS(364),
    [anon_sym_of] = ACTIONS(364),
    [anon_sym_then] = ACTIONS(364),
    [anon_sym__] = ACTIONS(364),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(366),
    [anon_sym_SQUOTE] = ACTIONS(364),
    [anon_sym_DQUOTE] = ACTIONS(364),
    [sym__integer_literal] = ACTIONS(364),
    [sym__octal_literal] = ACTIONS(364),
    [sym__hexidecimal_literal] = ACTIONS(364),
  },
  [99] = {
    [sym__identifier] = STATE(62),
    [sym_reserved_identifier] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(368),
    [anon_sym_module] = ACTIONS(370),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(370),
    [anon_sym_data] = ACTIONS(370),
    [anon_sym_newtype] = ACTIONS(370),
    [anon_sym_type] = ACTIONS(370),
    [sym_variable_identifier] = ACTIONS(24),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_in] = ACTIONS(14),
    [anon_sym_infix] = ACTIONS(14),
    [anon_sym_infixl] = ACTIONS(14),
    [anon_sym_infixr] = ACTIONS(14),
    [anon_sym_instance] = ACTIONS(14),
    [anon_sym_let] = ACTIONS(14),
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(372),
    [anon_sym_SQUOTE] = ACTIONS(370),
    [anon_sym_DQUOTE] = ACTIONS(370),
    [sym__integer_literal] = ACTIONS(370),
    [sym__octal_literal] = ACTIONS(370),
    [sym__hexidecimal_literal] = ACTIONS(370),
  },
  [100] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(374),
  },
  [101] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(376),
  },
  [102] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(378),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(378),
  },
  [103] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(380),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(382),
  },
  [104] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(384),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(384),
  },
  [105] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(380),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(386),
  },
  [106] = {
    [anon_sym_LPAREN] = ACTIONS(388),
    [anon_sym_RPAREN] = ACTIONS(388),
    [anon_sym_EQ] = ACTIONS(388),
    [anon_sym_LBRACE] = ACTIONS(388),
    [anon_sym_RBRACE] = ACTIONS(388),
    [anon_sym__] = ACTIONS(388),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(388),
    [anon_sym_DQUOTE] = ACTIONS(388),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(388),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(388),
    [sym__ascii_large] = ACTIONS(388),
    [anon_sym_BANG] = ACTIONS(388),
    [anon_sym_POUND] = ACTIONS(388),
    [anon_sym_DOLLAR] = ACTIONS(388),
    [anon_sym_PERCENT] = ACTIONS(388),
    [anon_sym_AMP] = ACTIONS(388),
    [anon_sym_1] = ACTIONS(388),
    [anon_sym_PLUS] = ACTIONS(388),
    [anon_sym_DOT] = ACTIONS(388),
    [anon_sym_SLASH] = ACTIONS(388),
    [anon_sym_LT] = ACTIONS(388),
    [anon_sym_GT] = ACTIONS(388),
    [anon_sym_QMARK] = ACTIONS(388),
    [anon_sym_AT] = ACTIONS(388),
    [anon_sym_CARET] = ACTIONS(388),
    [anon_sym_PIPE] = ACTIONS(388),
    [anon_sym_DASH] = ACTIONS(388),
    [anon_sym_TILDE] = ACTIONS(388),
    [anon_sym_COLON] = ACTIONS(388),
    [anon_sym_BSLASH] = ACTIONS(388),
    [anon_sym_SEMI] = ACTIONS(388),
    [anon_sym_LBRACK] = ACTIONS(388),
    [anon_sym_RBRACK] = ACTIONS(388),
    [anon_sym_BQUOTE] = ACTIONS(388),
    [sym__space] = ACTIONS(388),
    [sym__newline] = ACTIONS(388),
    [sym__tab] = ACTIONS(388),
    [sym__vertical_tab] = ACTIONS(388),
  },
  [107] = {
    [anon_sym_LPAREN] = ACTIONS(390),
    [anon_sym_RPAREN] = ACTIONS(390),
    [anon_sym_EQ] = ACTIONS(390),
    [anon_sym_LBRACE] = ACTIONS(390),
    [anon_sym_RBRACE] = ACTIONS(390),
    [anon_sym__] = ACTIONS(390),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(390),
    [anon_sym_DQUOTE] = ACTIONS(390),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(390),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(390),
    [sym__ascii_large] = ACTIONS(390),
    [anon_sym_BANG] = ACTIONS(390),
    [anon_sym_POUND] = ACTIONS(390),
    [anon_sym_DOLLAR] = ACTIONS(390),
    [anon_sym_PERCENT] = ACTIONS(390),
    [anon_sym_AMP] = ACTIONS(390),
    [anon_sym_1] = ACTIONS(390),
    [anon_sym_PLUS] = ACTIONS(390),
    [anon_sym_DOT] = ACTIONS(390),
    [anon_sym_SLASH] = ACTIONS(390),
    [anon_sym_LT] = ACTIONS(390),
    [anon_sym_GT] = ACTIONS(390),
    [anon_sym_QMARK] = ACTIONS(390),
    [anon_sym_AT] = ACTIONS(390),
    [anon_sym_CARET] = ACTIONS(390),
    [anon_sym_PIPE] = ACTIONS(390),
    [anon_sym_DASH] = ACTIONS(390),
    [anon_sym_TILDE] = ACTIONS(390),
    [anon_sym_COLON] = ACTIONS(390),
    [anon_sym_BSLASH] = ACTIONS(390),
    [anon_sym_SEMI] = ACTIONS(390),
    [anon_sym_LBRACK] = ACTIONS(390),
    [anon_sym_RBRACK] = ACTIONS(390),
    [anon_sym_BQUOTE] = ACTIONS(390),
    [sym__space] = ACTIONS(390),
    [sym__newline] = ACTIONS(390),
    [sym__tab] = ACTIONS(390),
    [sym__vertical_tab] = ACTIONS(390),
  },
  [108] = {
    [anon_sym_LPAREN] = ACTIONS(392),
    [anon_sym_RPAREN] = ACTIONS(392),
    [anon_sym_EQ] = ACTIONS(392),
    [anon_sym_LBRACE] = ACTIONS(392),
    [anon_sym_RBRACE] = ACTIONS(392),
    [anon_sym__] = ACTIONS(392),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(392),
    [anon_sym_DQUOTE] = ACTIONS(392),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(392),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(392),
    [sym__ascii_large] = ACTIONS(392),
    [anon_sym_BANG] = ACTIONS(392),
    [anon_sym_POUND] = ACTIONS(392),
    [anon_sym_DOLLAR] = ACTIONS(392),
    [anon_sym_PERCENT] = ACTIONS(392),
    [anon_sym_AMP] = ACTIONS(392),
    [anon_sym_1] = ACTIONS(392),
    [anon_sym_PLUS] = ACTIONS(392),
    [anon_sym_DOT] = ACTIONS(392),
    [anon_sym_SLASH] = ACTIONS(392),
    [anon_sym_LT] = ACTIONS(392),
    [anon_sym_GT] = ACTIONS(392),
    [anon_sym_QMARK] = ACTIONS(392),
    [anon_sym_AT] = ACTIONS(392),
    [anon_sym_CARET] = ACTIONS(392),
    [anon_sym_PIPE] = ACTIONS(392),
    [anon_sym_DASH] = ACTIONS(392),
    [anon_sym_TILDE] = ACTIONS(392),
    [anon_sym_COLON] = ACTIONS(392),
    [anon_sym_BSLASH] = ACTIONS(392),
    [anon_sym_SEMI] = ACTIONS(392),
    [anon_sym_LBRACK] = ACTIONS(392),
    [anon_sym_RBRACK] = ACTIONS(392),
    [anon_sym_BQUOTE] = ACTIONS(392),
    [sym__space] = ACTIONS(392),
    [sym__newline] = ACTIONS(392),
    [sym__tab] = ACTIONS(392),
    [sym__vertical_tab] = ACTIONS(392),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(392),
  },
  [109] = {
    [anon_sym_LPAREN] = ACTIONS(394),
    [anon_sym_RPAREN] = ACTIONS(394),
    [anon_sym_EQ] = ACTIONS(394),
    [anon_sym_LBRACE] = ACTIONS(394),
    [anon_sym_RBRACE] = ACTIONS(394),
    [anon_sym__] = ACTIONS(394),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(394),
    [anon_sym_DQUOTE] = ACTIONS(394),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(394),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(394),
    [sym__ascii_large] = ACTIONS(394),
    [anon_sym_BANG] = ACTIONS(394),
    [anon_sym_POUND] = ACTIONS(394),
    [anon_sym_DOLLAR] = ACTIONS(394),
    [anon_sym_PERCENT] = ACTIONS(394),
    [anon_sym_AMP] = ACTIONS(394),
    [anon_sym_1] = ACTIONS(394),
    [anon_sym_PLUS] = ACTIONS(394),
    [anon_sym_DOT] = ACTIONS(394),
    [anon_sym_SLASH] = ACTIONS(394),
    [anon_sym_LT] = ACTIONS(394),
    [anon_sym_GT] = ACTIONS(394),
    [anon_sym_QMARK] = ACTIONS(394),
    [anon_sym_AT] = ACTIONS(394),
    [anon_sym_CARET] = ACTIONS(394),
    [anon_sym_PIPE] = ACTIONS(394),
    [anon_sym_DASH] = ACTIONS(394),
    [anon_sym_TILDE] = ACTIONS(394),
    [anon_sym_COLON] = ACTIONS(394),
    [anon_sym_BSLASH] = ACTIONS(394),
    [anon_sym_SEMI] = ACTIONS(394),
    [anon_sym_LBRACK] = ACTIONS(394),
    [anon_sym_RBRACK] = ACTIONS(394),
    [anon_sym_BQUOTE] = ACTIONS(394),
    [sym__space] = ACTIONS(394),
    [sym__newline] = ACTIONS(394),
    [sym__tab] = ACTIONS(394),
    [sym__vertical_tab] = ACTIONS(394),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(396),
  },
  [110] = {
    [anon_sym_LPAREN] = ACTIONS(398),
    [anon_sym_RPAREN] = ACTIONS(398),
    [anon_sym_EQ] = ACTIONS(398),
    [anon_sym_LBRACE] = ACTIONS(398),
    [anon_sym_RBRACE] = ACTIONS(398),
    [anon_sym__] = ACTIONS(398),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(398),
    [anon_sym_DQUOTE] = ACTIONS(398),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(398),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(398),
    [sym__ascii_large] = ACTIONS(398),
    [anon_sym_BANG] = ACTIONS(398),
    [anon_sym_POUND] = ACTIONS(398),
    [anon_sym_DOLLAR] = ACTIONS(398),
    [anon_sym_PERCENT] = ACTIONS(398),
    [anon_sym_AMP] = ACTIONS(398),
    [anon_sym_1] = ACTIONS(398),
    [anon_sym_PLUS] = ACTIONS(398),
    [anon_sym_DOT] = ACTIONS(398),
    [anon_sym_SLASH] = ACTIONS(398),
    [anon_sym_LT] = ACTIONS(398),
    [anon_sym_GT] = ACTIONS(398),
    [anon_sym_QMARK] = ACTIONS(398),
    [anon_sym_AT] = ACTIONS(398),
    [anon_sym_CARET] = ACTIONS(398),
    [anon_sym_PIPE] = ACTIONS(398),
    [anon_sym_DASH] = ACTIONS(398),
    [anon_sym_TILDE] = ACTIONS(398),
    [anon_sym_COLON] = ACTIONS(398),
    [anon_sym_BSLASH] = ACTIONS(398),
    [anon_sym_SEMI] = ACTIONS(398),
    [anon_sym_LBRACK] = ACTIONS(398),
    [anon_sym_RBRACK] = ACTIONS(398),
    [anon_sym_BQUOTE] = ACTIONS(398),
    [sym__space] = ACTIONS(398),
    [sym__newline] = ACTIONS(398),
    [sym__tab] = ACTIONS(398),
    [sym__vertical_tab] = ACTIONS(398),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(398),
  },
  [111] = {
    [anon_sym_LPAREN] = ACTIONS(394),
    [anon_sym_RPAREN] = ACTIONS(394),
    [anon_sym_EQ] = ACTIONS(394),
    [anon_sym_LBRACE] = ACTIONS(394),
    [anon_sym_RBRACE] = ACTIONS(394),
    [anon_sym__] = ACTIONS(394),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(394),
    [anon_sym_DQUOTE] = ACTIONS(394),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(394),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(394),
    [sym__ascii_large] = ACTIONS(394),
    [anon_sym_BANG] = ACTIONS(394),
    [anon_sym_POUND] = ACTIONS(394),
    [anon_sym_DOLLAR] = ACTIONS(394),
    [anon_sym_PERCENT] = ACTIONS(394),
    [anon_sym_AMP] = ACTIONS(394),
    [anon_sym_1] = ACTIONS(394),
    [anon_sym_PLUS] = ACTIONS(394),
    [anon_sym_DOT] = ACTIONS(394),
    [anon_sym_SLASH] = ACTIONS(394),
    [anon_sym_LT] = ACTIONS(394),
    [anon_sym_GT] = ACTIONS(394),
    [anon_sym_QMARK] = ACTIONS(394),
    [anon_sym_AT] = ACTIONS(394),
    [anon_sym_CARET] = ACTIONS(394),
    [anon_sym_PIPE] = ACTIONS(394),
    [anon_sym_DASH] = ACTIONS(394),
    [anon_sym_TILDE] = ACTIONS(394),
    [anon_sym_COLON] = ACTIONS(394),
    [anon_sym_BSLASH] = ACTIONS(394),
    [anon_sym_SEMI] = ACTIONS(394),
    [anon_sym_LBRACK] = ACTIONS(394),
    [anon_sym_RBRACK] = ACTIONS(394),
    [anon_sym_BQUOTE] = ACTIONS(394),
    [sym__space] = ACTIONS(394),
    [sym__newline] = ACTIONS(394),
    [sym__tab] = ACTIONS(394),
    [sym__vertical_tab] = ACTIONS(394),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(400),
  },
  [112] = {
    [sym_export_declaration] = STATE(131),
    [sym__identifier] = STATE(84),
    [sym_reserved_identifier] = STATE(8),
    [anon_sym_where] = ACTIONS(14),
    [sym_variable_identifier] = ACTIONS(24),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_in] = ACTIONS(14),
    [anon_sym_infix] = ACTIONS(14),
    [anon_sym_infixl] = ACTIONS(14),
    [anon_sym_infixr] = ACTIONS(14),
    [anon_sym_instance] = ACTIONS(14),
    [anon_sym_let] = ACTIONS(14),
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(26),
  },
  [113] = {
    [anon_sym_where] = ACTIONS(402),
    [sym_comment] = ACTIONS(26),
  },
  [114] = {
    [anon_sym_COMMA] = ACTIONS(404),
    [anon_sym_RPAREN] = ACTIONS(406),
    [sym_comment] = ACTIONS(26),
  },
  [115] = {
    [sym__identifier] = STATE(135),
    [sym_reserved_identifier] = STATE(8),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_DOT_DOT] = ACTIONS(408),
    [sym_variable_identifier] = ACTIONS(24),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_in] = ACTIONS(14),
    [anon_sym_infix] = ACTIONS(14),
    [anon_sym_infixl] = ACTIONS(14),
    [anon_sym_infixr] = ACTIONS(14),
    [anon_sym_instance] = ACTIONS(14),
    [anon_sym_let] = ACTIONS(14),
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(26),
  },
  [116] = {
    [sym__statement] = STATE(49),
    [sym_module] = STATE(15),
    [sym_import_declaration] = STATE(15),
    [sym__top_level_declaration] = STATE(15),
    [sym_algebraic_datatype] = STATE(16),
    [sym_newtype] = STATE(16),
    [sym_type_synonym] = STATE(16),
    [sym__literal] = STATE(15),
    [sym__identifier] = STATE(15),
    [sym_reserved_identifier] = STATE(8),
    [sym_integer] = STATE(9),
    [sym_char] = STATE(9),
    [sym_string] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(410),
    [anon_sym_module] = ACTIONS(12),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_import] = ACTIONS(16),
    [anon_sym_data] = ACTIONS(18),
    [anon_sym_newtype] = ACTIONS(20),
    [anon_sym_type] = ACTIONS(22),
    [sym_variable_identifier] = ACTIONS(24),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_in] = ACTIONS(14),
    [anon_sym_infix] = ACTIONS(14),
    [anon_sym_infixl] = ACTIONS(14),
    [anon_sym_infixr] = ACTIONS(14),
    [anon_sym_instance] = ACTIONS(14),
    [anon_sym_let] = ACTIONS(14),
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(28),
    [anon_sym_SQUOTE] = ACTIONS(30),
    [anon_sym_DQUOTE] = ACTIONS(32),
    [sym__integer_literal] = ACTIONS(34),
    [sym__octal_literal] = ACTIONS(34),
    [sym__hexidecimal_literal] = ACTIONS(34),
  },
  [117] = {
    [sym_import_specification] = STATE(136),
    [ts_builtin_sym_end] = ACTIONS(412),
    [anon_sym_module] = ACTIONS(414),
    [anon_sym_where] = ACTIONS(414),
    [anon_sym_LPAREN] = ACTIONS(136),
    [anon_sym_import] = ACTIONS(414),
    [anon_sym_hiding] = ACTIONS(140),
    [anon_sym_data] = ACTIONS(414),
    [anon_sym_newtype] = ACTIONS(414),
    [anon_sym_type] = ACTIONS(414),
    [sym_variable_identifier] = ACTIONS(416),
    [sym_constructor_identifier] = ACTIONS(416),
    [sym_module_identifier] = ACTIONS(416),
    [anon_sym_case] = ACTIONS(414),
    [anon_sym_class] = ACTIONS(414),
    [anon_sym_default] = ACTIONS(414),
    [anon_sym_deriving] = ACTIONS(414),
    [anon_sym_do] = ACTIONS(414),
    [anon_sym_else] = ACTIONS(414),
    [anon_sym_foreign] = ACTIONS(414),
    [anon_sym_if] = ACTIONS(414),
    [anon_sym_in] = ACTIONS(414),
    [anon_sym_infix] = ACTIONS(414),
    [anon_sym_infixl] = ACTIONS(414),
    [anon_sym_infixr] = ACTIONS(414),
    [anon_sym_instance] = ACTIONS(414),
    [anon_sym_let] = ACTIONS(414),
    [anon_sym_of] = ACTIONS(414),
    [anon_sym_then] = ACTIONS(414),
    [anon_sym__] = ACTIONS(414),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(416),
    [anon_sym_SQUOTE] = ACTIONS(414),
    [anon_sym_DQUOTE] = ACTIONS(414),
    [sym__integer_literal] = ACTIONS(414),
    [sym__octal_literal] = ACTIONS(414),
    [sym__hexidecimal_literal] = ACTIONS(414),
  },
  [118] = {
    [sym__identifier] = STATE(138),
    [sym_reserved_identifier] = STATE(8),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_DOT_DOT] = ACTIONS(418),
    [sym_variable_identifier] = ACTIONS(24),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_in] = ACTIONS(14),
    [anon_sym_infix] = ACTIONS(14),
    [anon_sym_infixl] = ACTIONS(14),
    [anon_sym_infixr] = ACTIONS(14),
    [anon_sym_instance] = ACTIONS(14),
    [anon_sym_let] = ACTIONS(14),
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(26),
  },
  [119] = {
    [sym__identifier] = STATE(139),
    [sym_reserved_identifier] = STATE(8),
    [anon_sym_where] = ACTIONS(14),
    [sym_variable_identifier] = ACTIONS(24),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_in] = ACTIONS(14),
    [anon_sym_infix] = ACTIONS(14),
    [anon_sym_infixl] = ACTIONS(14),
    [anon_sym_infixr] = ACTIONS(14),
    [anon_sym_instance] = ACTIONS(14),
    [anon_sym_let] = ACTIONS(14),
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(26),
  },
  [120] = {
    [ts_builtin_sym_end] = ACTIONS(420),
    [anon_sym_module] = ACTIONS(422),
    [anon_sym_where] = ACTIONS(422),
    [anon_sym_import] = ACTIONS(422),
    [anon_sym_data] = ACTIONS(422),
    [anon_sym_newtype] = ACTIONS(422),
    [anon_sym_type] = ACTIONS(422),
    [sym_variable_identifier] = ACTIONS(424),
    [sym_constructor_identifier] = ACTIONS(424),
    [sym_module_identifier] = ACTIONS(424),
    [anon_sym_case] = ACTIONS(422),
    [anon_sym_class] = ACTIONS(422),
    [anon_sym_default] = ACTIONS(422),
    [anon_sym_deriving] = ACTIONS(422),
    [anon_sym_do] = ACTIONS(422),
    [anon_sym_else] = ACTIONS(422),
    [anon_sym_foreign] = ACTIONS(422),
    [anon_sym_if] = ACTIONS(422),
    [anon_sym_in] = ACTIONS(422),
    [anon_sym_infix] = ACTIONS(422),
    [anon_sym_infixl] = ACTIONS(422),
    [anon_sym_infixr] = ACTIONS(422),
    [anon_sym_instance] = ACTIONS(422),
    [anon_sym_let] = ACTIONS(422),
    [anon_sym_of] = ACTIONS(422),
    [anon_sym_then] = ACTIONS(422),
    [anon_sym__] = ACTIONS(422),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(424),
    [anon_sym_SQUOTE] = ACTIONS(422),
    [anon_sym_DQUOTE] = ACTIONS(422),
    [sym__integer_literal] = ACTIONS(422),
    [sym__octal_literal] = ACTIONS(422),
    [sym__hexidecimal_literal] = ACTIONS(422),
  },
  [121] = {
    [anon_sym_COMMA] = ACTIONS(426),
    [anon_sym_RPAREN] = ACTIONS(428),
    [sym_comment] = ACTIONS(26),
  },
  [122] = {
    [ts_builtin_sym_end] = ACTIONS(412),
    [anon_sym_module] = ACTIONS(414),
    [anon_sym_where] = ACTIONS(414),
    [anon_sym_import] = ACTIONS(414),
    [anon_sym_data] = ACTIONS(414),
    [anon_sym_newtype] = ACTIONS(414),
    [anon_sym_type] = ACTIONS(414),
    [sym_variable_identifier] = ACTIONS(416),
    [sym_constructor_identifier] = ACTIONS(416),
    [sym_module_identifier] = ACTIONS(416),
    [anon_sym_case] = ACTIONS(414),
    [anon_sym_class] = ACTIONS(414),
    [anon_sym_default] = ACTIONS(414),
    [anon_sym_deriving] = ACTIONS(414),
    [anon_sym_do] = ACTIONS(414),
    [anon_sym_else] = ACTIONS(414),
    [anon_sym_foreign] = ACTIONS(414),
    [anon_sym_if] = ACTIONS(414),
    [anon_sym_in] = ACTIONS(414),
    [anon_sym_infix] = ACTIONS(414),
    [anon_sym_infixl] = ACTIONS(414),
    [anon_sym_infixr] = ACTIONS(414),
    [anon_sym_instance] = ACTIONS(414),
    [anon_sym_let] = ACTIONS(414),
    [anon_sym_of] = ACTIONS(414),
    [anon_sym_then] = ACTIONS(414),
    [anon_sym__] = ACTIONS(414),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(416),
    [anon_sym_SQUOTE] = ACTIONS(414),
    [anon_sym_DQUOTE] = ACTIONS(414),
    [sym__integer_literal] = ACTIONS(414),
    [sym__octal_literal] = ACTIONS(414),
    [sym__hexidecimal_literal] = ACTIONS(414),
  },
  [123] = {
    [aux_sym_import_specification_repeat1] = STATE(143),
    [anon_sym_LPAREN] = ACTIONS(430),
    [anon_sym_COMMA] = ACTIONS(344),
    [anon_sym_RPAREN] = ACTIONS(428),
    [sym_comment] = ACTIONS(26),
  },
  [124] = {
    [aux_sym_field_repeat1] = STATE(146),
    [anon_sym_COMMA] = ACTIONS(432),
    [anon_sym_COLON_COLON] = ACTIONS(434),
    [sym_comment] = ACTIONS(26),
  },
  [125] = {
    [aux_sym_fields_repeat1] = STATE(149),
    [anon_sym_COMMA] = ACTIONS(436),
    [anon_sym_RBRACE] = ACTIONS(438),
    [sym_comment] = ACTIONS(26),
  },
  [126] = {
    [ts_builtin_sym_end] = ACTIONS(440),
    [anon_sym_module] = ACTIONS(442),
    [anon_sym_where] = ACTIONS(442),
    [anon_sym_import] = ACTIONS(442),
    [anon_sym_data] = ACTIONS(442),
    [anon_sym_newtype] = ACTIONS(442),
    [anon_sym_type] = ACTIONS(442),
    [sym_variable_identifier] = ACTIONS(444),
    [sym_constructor_identifier] = ACTIONS(444),
    [sym_module_identifier] = ACTIONS(444),
    [anon_sym_case] = ACTIONS(442),
    [anon_sym_class] = ACTIONS(442),
    [anon_sym_default] = ACTIONS(442),
    [anon_sym_deriving] = ACTIONS(442),
    [anon_sym_do] = ACTIONS(442),
    [anon_sym_else] = ACTIONS(442),
    [anon_sym_foreign] = ACTIONS(442),
    [anon_sym_if] = ACTIONS(442),
    [anon_sym_in] = ACTIONS(442),
    [anon_sym_infix] = ACTIONS(442),
    [anon_sym_infixl] = ACTIONS(442),
    [anon_sym_infixr] = ACTIONS(442),
    [anon_sym_instance] = ACTIONS(442),
    [anon_sym_let] = ACTIONS(442),
    [anon_sym_of] = ACTIONS(442),
    [anon_sym_then] = ACTIONS(442),
    [anon_sym__] = ACTIONS(442),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(444),
    [anon_sym_SQUOTE] = ACTIONS(442),
    [anon_sym_DQUOTE] = ACTIONS(442),
    [sym__integer_literal] = ACTIONS(442),
    [sym__octal_literal] = ACTIONS(442),
    [sym__hexidecimal_literal] = ACTIONS(442),
  },
  [127] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(446),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(446),
  },
  [128] = {
    [sym_comment] = ACTIONS(26),
    [anon_sym_SQUOTE] = ACTIONS(448),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(448),
  },
  [129] = {
    [anon_sym_LPAREN] = ACTIONS(450),
    [anon_sym_RPAREN] = ACTIONS(450),
    [anon_sym_EQ] = ACTIONS(450),
    [anon_sym_LBRACE] = ACTIONS(450),
    [anon_sym_RBRACE] = ACTIONS(450),
    [anon_sym__] = ACTIONS(450),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(450),
    [anon_sym_DQUOTE] = ACTIONS(450),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(450),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(450),
    [sym__ascii_large] = ACTIONS(450),
    [anon_sym_BANG] = ACTIONS(450),
    [anon_sym_POUND] = ACTIONS(450),
    [anon_sym_DOLLAR] = ACTIONS(450),
    [anon_sym_PERCENT] = ACTIONS(450),
    [anon_sym_AMP] = ACTIONS(450),
    [anon_sym_1] = ACTIONS(450),
    [anon_sym_PLUS] = ACTIONS(450),
    [anon_sym_DOT] = ACTIONS(450),
    [anon_sym_SLASH] = ACTIONS(450),
    [anon_sym_LT] = ACTIONS(450),
    [anon_sym_GT] = ACTIONS(450),
    [anon_sym_QMARK] = ACTIONS(450),
    [anon_sym_AT] = ACTIONS(450),
    [anon_sym_CARET] = ACTIONS(450),
    [anon_sym_PIPE] = ACTIONS(450),
    [anon_sym_DASH] = ACTIONS(450),
    [anon_sym_TILDE] = ACTIONS(450),
    [anon_sym_COLON] = ACTIONS(450),
    [anon_sym_BSLASH] = ACTIONS(450),
    [anon_sym_SEMI] = ACTIONS(450),
    [anon_sym_LBRACK] = ACTIONS(450),
    [anon_sym_RBRACK] = ACTIONS(450),
    [anon_sym_BQUOTE] = ACTIONS(450),
    [sym__space] = ACTIONS(450),
    [sym__newline] = ACTIONS(450),
    [sym__tab] = ACTIONS(450),
    [sym__vertical_tab] = ACTIONS(450),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_SLASH] = ACTIONS(450),
  },
  [130] = {
    [anon_sym_LPAREN] = ACTIONS(452),
    [anon_sym_RPAREN] = ACTIONS(452),
    [anon_sym_EQ] = ACTIONS(452),
    [anon_sym_LBRACE] = ACTIONS(452),
    [anon_sym_RBRACE] = ACTIONS(452),
    [anon_sym__] = ACTIONS(452),
    [sym_comment] = ACTIONS(72),
    [anon_sym_SQUOTE] = ACTIONS(452),
    [anon_sym_DQUOTE] = ACTIONS(452),
    [aux_sym_SLASH_LBRACK0_DASH9_RBRACK_SLASH] = ACTIONS(452),
    [aux_sym_SLASH_LBRACKa_DASHz_RBRACK_SLASH] = ACTIONS(452),
    [sym__ascii_large] = ACTIONS(452),
    [anon_sym_BANG] = ACTIONS(452),
    [anon_sym_POUND] = ACTIONS(452),
    [anon_sym_DOLLAR] = ACTIONS(452),
    [anon_sym_PERCENT] = ACTIONS(452),
    [anon_sym_AMP] = ACTIONS(452),
    [anon_sym_1] = ACTIONS(452),
    [anon_sym_PLUS] = ACTIONS(452),
    [anon_sym_DOT] = ACTIONS(452),
    [anon_sym_SLASH] = ACTIONS(452),
    [anon_sym_LT] = ACTIONS(452),
    [anon_sym_GT] = ACTIONS(452),
    [anon_sym_QMARK] = ACTIONS(452),
    [anon_sym_AT] = ACTIONS(452),
    [anon_sym_CARET] = ACTIONS(452),
    [anon_sym_PIPE] = ACTIONS(452),
    [anon_sym_DASH] = ACTIONS(452),
    [anon_sym_TILDE] = ACTIONS(452),
    [anon_sym_COLON] = ACTIONS(452),
    [anon_sym_BSLASH] = ACTIONS(452),
    [anon_sym_SEMI] = ACTIONS(452),
    [anon_sym_LBRACK] = ACTIONS(452),
    [anon_sym_RBRACK] = ACTIONS(452),
    [anon_sym_BQUOTE] = ACTIONS(452),
    [sym__space] = ACTIONS(452),
    [sym__newline] = ACTIONS(452),
    [sym__tab] = ACTIONS(452),
    [sym__vertical_tab] = ACTIONS(452),
    [aux_sym_SLASH_LBRACK0_DASH7_RBRACK_SLASH] = ACTIONS(452),
  },
  [131] = {
    [anon_sym_COMMA] = ACTIONS(454),
    [anon_sym_RPAREN] = ACTIONS(454),
    [sym_comment] = ACTIONS(26),
  },
  [132] = {
    [sym_export_declaration] = STATE(150),
    [sym__identifier] = STATE(84),
    [sym_reserved_identifier] = STATE(8),
    [anon_sym_where] = ACTIONS(14),
    [sym_variable_identifier] = ACTIONS(24),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_in] = ACTIONS(14),
    [anon_sym_infix] = ACTIONS(14),
    [anon_sym_infixl] = ACTIONS(14),
    [anon_sym_infixr] = ACTIONS(14),
    [anon_sym_instance] = ACTIONS(14),
    [anon_sym_let] = ACTIONS(14),
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(26),
  },
  [133] = {
    [anon_sym_where] = ACTIONS(456),
    [sym_comment] = ACTIONS(26),
  },
  [134] = {
    [anon_sym_RPAREN] = ACTIONS(458),
    [sym_comment] = ACTIONS(26),
  },
  [135] = {
    [aux_sym_export_declaration_repeat1] = STATE(153),
    [anon_sym_COMMA] = ACTIONS(460),
    [anon_sym_RPAREN] = ACTIONS(458),
    [sym_comment] = ACTIONS(26),
  },
  [136] = {
    [ts_builtin_sym_end] = ACTIONS(462),
    [anon_sym_module] = ACTIONS(464),
    [anon_sym_where] = ACTIONS(464),
    [anon_sym_import] = ACTIONS(464),
    [anon_sym_data] = ACTIONS(464),
    [anon_sym_newtype] = ACTIONS(464),
    [anon_sym_type] = ACTIONS(464),
    [sym_variable_identifier] = ACTIONS(466),
    [sym_constructor_identifier] = ACTIONS(466),
    [sym_module_identifier] = ACTIONS(466),
    [anon_sym_case] = ACTIONS(464),
    [anon_sym_class] = ACTIONS(464),
    [anon_sym_default] = ACTIONS(464),
    [anon_sym_deriving] = ACTIONS(464),
    [anon_sym_do] = ACTIONS(464),
    [anon_sym_else] = ACTIONS(464),
    [anon_sym_foreign] = ACTIONS(464),
    [anon_sym_if] = ACTIONS(464),
    [anon_sym_in] = ACTIONS(464),
    [anon_sym_infix] = ACTIONS(464),
    [anon_sym_infixl] = ACTIONS(464),
    [anon_sym_infixr] = ACTIONS(464),
    [anon_sym_instance] = ACTIONS(464),
    [anon_sym_let] = ACTIONS(464),
    [anon_sym_of] = ACTIONS(464),
    [anon_sym_then] = ACTIONS(464),
    [anon_sym__] = ACTIONS(464),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(466),
    [anon_sym_SQUOTE] = ACTIONS(464),
    [anon_sym_DQUOTE] = ACTIONS(464),
    [sym__integer_literal] = ACTIONS(464),
    [sym__octal_literal] = ACTIONS(464),
    [sym__hexidecimal_literal] = ACTIONS(464),
  },
  [137] = {
    [anon_sym_RPAREN] = ACTIONS(468),
    [sym_comment] = ACTIONS(26),
  },
  [138] = {
    [aux_sym_export_declaration_repeat1] = STATE(155),
    [anon_sym_COMMA] = ACTIONS(460),
    [anon_sym_RPAREN] = ACTIONS(468),
    [sym_comment] = ACTIONS(26),
  },
  [139] = {
    [anon_sym_LPAREN] = ACTIONS(470),
    [anon_sym_COMMA] = ACTIONS(472),
    [anon_sym_RPAREN] = ACTIONS(472),
    [sym_comment] = ACTIONS(26),
  },
  [140] = {
    [sym__identifier] = STATE(157),
    [sym_reserved_identifier] = STATE(8),
    [anon_sym_where] = ACTIONS(14),
    [sym_variable_identifier] = ACTIONS(24),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_in] = ACTIONS(14),
    [anon_sym_infix] = ACTIONS(14),
    [anon_sym_infixl] = ACTIONS(14),
    [anon_sym_infixr] = ACTIONS(14),
    [anon_sym_instance] = ACTIONS(14),
    [anon_sym_let] = ACTIONS(14),
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(26),
  },
  [141] = {
    [ts_builtin_sym_end] = ACTIONS(474),
    [anon_sym_module] = ACTIONS(476),
    [anon_sym_where] = ACTIONS(476),
    [anon_sym_import] = ACTIONS(476),
    [anon_sym_data] = ACTIONS(476),
    [anon_sym_newtype] = ACTIONS(476),
    [anon_sym_type] = ACTIONS(476),
    [sym_variable_identifier] = ACTIONS(478),
    [sym_constructor_identifier] = ACTIONS(478),
    [sym_module_identifier] = ACTIONS(478),
    [anon_sym_case] = ACTIONS(476),
    [anon_sym_class] = ACTIONS(476),
    [anon_sym_default] = ACTIONS(476),
    [anon_sym_deriving] = ACTIONS(476),
    [anon_sym_do] = ACTIONS(476),
    [anon_sym_else] = ACTIONS(476),
    [anon_sym_foreign] = ACTIONS(476),
    [anon_sym_if] = ACTIONS(476),
    [anon_sym_in] = ACTIONS(476),
    [anon_sym_infix] = ACTIONS(476),
    [anon_sym_infixl] = ACTIONS(476),
    [anon_sym_infixr] = ACTIONS(476),
    [anon_sym_instance] = ACTIONS(476),
    [anon_sym_let] = ACTIONS(476),
    [anon_sym_of] = ACTIONS(476),
    [anon_sym_then] = ACTIONS(476),
    [anon_sym__] = ACTIONS(476),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(478),
    [anon_sym_SQUOTE] = ACTIONS(476),
    [anon_sym_DQUOTE] = ACTIONS(476),
    [sym__integer_literal] = ACTIONS(476),
    [sym__octal_literal] = ACTIONS(476),
    [sym__hexidecimal_literal] = ACTIONS(476),
  },
  [142] = {
    [sym__identifier] = STATE(159),
    [sym_reserved_identifier] = STATE(8),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_DOT_DOT] = ACTIONS(480),
    [sym_variable_identifier] = ACTIONS(24),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_in] = ACTIONS(14),
    [anon_sym_infix] = ACTIONS(14),
    [anon_sym_infixl] = ACTIONS(14),
    [anon_sym_infixr] = ACTIONS(14),
    [anon_sym_instance] = ACTIONS(14),
    [anon_sym_let] = ACTIONS(14),
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(26),
  },
  [143] = {
    [anon_sym_COMMA] = ACTIONS(426),
    [anon_sym_RPAREN] = ACTIONS(482),
    [sym_comment] = ACTIONS(26),
  },
  [144] = {
    [sym_variable_identifier] = ACTIONS(484),
    [sym_comment] = ACTIONS(26),
  },
  [145] = {
    [sym__identifier] = STATE(162),
    [sym_reserved_identifier] = STATE(8),
    [anon_sym_where] = ACTIONS(14),
    [sym_variable_identifier] = ACTIONS(24),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_in] = ACTIONS(14),
    [anon_sym_infix] = ACTIONS(14),
    [anon_sym_infixl] = ACTIONS(14),
    [anon_sym_infixr] = ACTIONS(14),
    [anon_sym_instance] = ACTIONS(14),
    [anon_sym_let] = ACTIONS(14),
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(26),
  },
  [146] = {
    [anon_sym_COMMA] = ACTIONS(486),
    [anon_sym_COLON_COLON] = ACTIONS(488),
    [sym_comment] = ACTIONS(26),
  },
  [147] = {
    [sym_field] = STATE(165),
    [sym_variable_identifier] = ACTIONS(354),
    [sym_comment] = ACTIONS(26),
  },
  [148] = {
    [ts_builtin_sym_end] = ACTIONS(490),
    [anon_sym_module] = ACTIONS(492),
    [anon_sym_where] = ACTIONS(492),
    [anon_sym_import] = ACTIONS(492),
    [anon_sym_data] = ACTIONS(492),
    [anon_sym_newtype] = ACTIONS(492),
    [anon_sym_type] = ACTIONS(492),
    [sym_variable_identifier] = ACTIONS(494),
    [sym_constructor_identifier] = ACTIONS(494),
    [sym_module_identifier] = ACTIONS(494),
    [anon_sym_case] = ACTIONS(492),
    [anon_sym_class] = ACTIONS(492),
    [anon_sym_default] = ACTIONS(492),
    [anon_sym_deriving] = ACTIONS(492),
    [anon_sym_do] = ACTIONS(492),
    [anon_sym_else] = ACTIONS(492),
    [anon_sym_foreign] = ACTIONS(492),
    [anon_sym_if] = ACTIONS(492),
    [anon_sym_in] = ACTIONS(492),
    [anon_sym_infix] = ACTIONS(492),
    [anon_sym_infixl] = ACTIONS(492),
    [anon_sym_infixr] = ACTIONS(492),
    [anon_sym_instance] = ACTIONS(492),
    [anon_sym_let] = ACTIONS(492),
    [anon_sym_of] = ACTIONS(492),
    [anon_sym_then] = ACTIONS(492),
    [anon_sym__] = ACTIONS(492),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(494),
    [anon_sym_SQUOTE] = ACTIONS(492),
    [anon_sym_DQUOTE] = ACTIONS(492),
    [sym__integer_literal] = ACTIONS(492),
    [sym__octal_literal] = ACTIONS(492),
    [sym__hexidecimal_literal] = ACTIONS(492),
  },
  [149] = {
    [anon_sym_COMMA] = ACTIONS(496),
    [anon_sym_RBRACE] = ACTIONS(498),
    [sym_comment] = ACTIONS(26),
  },
  [150] = {
    [anon_sym_COMMA] = ACTIONS(500),
    [anon_sym_RPAREN] = ACTIONS(500),
    [sym_comment] = ACTIONS(26),
  },
  [151] = {
    [anon_sym_COMMA] = ACTIONS(502),
    [anon_sym_RPAREN] = ACTIONS(502),
    [sym_comment] = ACTIONS(26),
  },
  [152] = {
    [sym__identifier] = STATE(168),
    [sym_reserved_identifier] = STATE(8),
    [anon_sym_where] = ACTIONS(14),
    [sym_variable_identifier] = ACTIONS(24),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_in] = ACTIONS(14),
    [anon_sym_infix] = ACTIONS(14),
    [anon_sym_infixl] = ACTIONS(14),
    [anon_sym_infixr] = ACTIONS(14),
    [anon_sym_instance] = ACTIONS(14),
    [anon_sym_let] = ACTIONS(14),
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(26),
  },
  [153] = {
    [anon_sym_COMMA] = ACTIONS(504),
    [anon_sym_RPAREN] = ACTIONS(506),
    [sym_comment] = ACTIONS(26),
  },
  [154] = {
    [aux_sym_import_specification_repeat1] = STATE(172),
    [anon_sym_COMMA] = ACTIONS(344),
    [anon_sym_RPAREN] = ACTIONS(508),
    [sym_comment] = ACTIONS(26),
  },
  [155] = {
    [anon_sym_COMMA] = ACTIONS(504),
    [anon_sym_RPAREN] = ACTIONS(510),
    [sym_comment] = ACTIONS(26),
  },
  [156] = {
    [sym__identifier] = STATE(175),
    [sym_reserved_identifier] = STATE(8),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_DOT_DOT] = ACTIONS(512),
    [sym_variable_identifier] = ACTIONS(24),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_in] = ACTIONS(14),
    [anon_sym_infix] = ACTIONS(14),
    [anon_sym_infixl] = ACTIONS(14),
    [anon_sym_infixr] = ACTIONS(14),
    [anon_sym_instance] = ACTIONS(14),
    [anon_sym_let] = ACTIONS(14),
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(26),
  },
  [157] = {
    [anon_sym_LPAREN] = ACTIONS(514),
    [anon_sym_COMMA] = ACTIONS(516),
    [anon_sym_RPAREN] = ACTIONS(516),
    [sym_comment] = ACTIONS(26),
  },
  [158] = {
    [anon_sym_RPAREN] = ACTIONS(510),
    [sym_comment] = ACTIONS(26),
  },
  [159] = {
    [aux_sym_export_declaration_repeat1] = STATE(177),
    [anon_sym_COMMA] = ACTIONS(460),
    [anon_sym_RPAREN] = ACTIONS(510),
    [sym_comment] = ACTIONS(26),
  },
  [160] = {
    [ts_builtin_sym_end] = ACTIONS(518),
    [anon_sym_module] = ACTIONS(520),
    [anon_sym_where] = ACTIONS(520),
    [anon_sym_import] = ACTIONS(520),
    [anon_sym_data] = ACTIONS(520),
    [anon_sym_newtype] = ACTIONS(520),
    [anon_sym_type] = ACTIONS(520),
    [sym_variable_identifier] = ACTIONS(522),
    [sym_constructor_identifier] = ACTIONS(522),
    [sym_module_identifier] = ACTIONS(522),
    [anon_sym_case] = ACTIONS(520),
    [anon_sym_class] = ACTIONS(520),
    [anon_sym_default] = ACTIONS(520),
    [anon_sym_deriving] = ACTIONS(520),
    [anon_sym_do] = ACTIONS(520),
    [anon_sym_else] = ACTIONS(520),
    [anon_sym_foreign] = ACTIONS(520),
    [anon_sym_if] = ACTIONS(520),
    [anon_sym_in] = ACTIONS(520),
    [anon_sym_infix] = ACTIONS(520),
    [anon_sym_infixl] = ACTIONS(520),
    [anon_sym_infixr] = ACTIONS(520),
    [anon_sym_instance] = ACTIONS(520),
    [anon_sym_let] = ACTIONS(520),
    [anon_sym_of] = ACTIONS(520),
    [anon_sym_then] = ACTIONS(520),
    [anon_sym__] = ACTIONS(520),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(522),
    [anon_sym_SQUOTE] = ACTIONS(520),
    [anon_sym_DQUOTE] = ACTIONS(520),
    [sym__integer_literal] = ACTIONS(520),
    [sym__octal_literal] = ACTIONS(520),
    [sym__hexidecimal_literal] = ACTIONS(520),
  },
  [161] = {
    [anon_sym_COMMA] = ACTIONS(524),
    [anon_sym_COLON_COLON] = ACTIONS(524),
    [sym_comment] = ACTIONS(26),
  },
  [162] = {
    [anon_sym_COMMA] = ACTIONS(526),
    [anon_sym_RBRACE] = ACTIONS(526),
    [sym_comment] = ACTIONS(26),
  },
  [163] = {
    [sym_variable_identifier] = ACTIONS(528),
    [sym_comment] = ACTIONS(26),
  },
  [164] = {
    [sym__identifier] = STATE(179),
    [sym_reserved_identifier] = STATE(8),
    [anon_sym_where] = ACTIONS(14),
    [sym_variable_identifier] = ACTIONS(24),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_in] = ACTIONS(14),
    [anon_sym_infix] = ACTIONS(14),
    [anon_sym_infixl] = ACTIONS(14),
    [anon_sym_infixr] = ACTIONS(14),
    [anon_sym_instance] = ACTIONS(14),
    [anon_sym_let] = ACTIONS(14),
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(26),
  },
  [165] = {
    [anon_sym_COMMA] = ACTIONS(530),
    [anon_sym_RBRACE] = ACTIONS(530),
    [sym_comment] = ACTIONS(26),
  },
  [166] = {
    [sym_field] = STATE(180),
    [sym_variable_identifier] = ACTIONS(354),
    [sym_comment] = ACTIONS(26),
  },
  [167] = {
    [ts_builtin_sym_end] = ACTIONS(532),
    [anon_sym_module] = ACTIONS(534),
    [anon_sym_where] = ACTIONS(534),
    [anon_sym_import] = ACTIONS(534),
    [anon_sym_data] = ACTIONS(534),
    [anon_sym_newtype] = ACTIONS(534),
    [anon_sym_type] = ACTIONS(534),
    [sym_variable_identifier] = ACTIONS(536),
    [sym_constructor_identifier] = ACTIONS(536),
    [sym_module_identifier] = ACTIONS(536),
    [anon_sym_case] = ACTIONS(534),
    [anon_sym_class] = ACTIONS(534),
    [anon_sym_default] = ACTIONS(534),
    [anon_sym_deriving] = ACTIONS(534),
    [anon_sym_do] = ACTIONS(534),
    [anon_sym_else] = ACTIONS(534),
    [anon_sym_foreign] = ACTIONS(534),
    [anon_sym_if] = ACTIONS(534),
    [anon_sym_in] = ACTIONS(534),
    [anon_sym_infix] = ACTIONS(534),
    [anon_sym_infixl] = ACTIONS(534),
    [anon_sym_infixr] = ACTIONS(534),
    [anon_sym_instance] = ACTIONS(534),
    [anon_sym_let] = ACTIONS(534),
    [anon_sym_of] = ACTIONS(534),
    [anon_sym_then] = ACTIONS(534),
    [anon_sym__] = ACTIONS(534),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(536),
    [anon_sym_SQUOTE] = ACTIONS(534),
    [anon_sym_DQUOTE] = ACTIONS(534),
    [sym__integer_literal] = ACTIONS(534),
    [sym__octal_literal] = ACTIONS(534),
    [sym__hexidecimal_literal] = ACTIONS(534),
  },
  [168] = {
    [anon_sym_COMMA] = ACTIONS(538),
    [anon_sym_RPAREN] = ACTIONS(538),
    [sym_comment] = ACTIONS(26),
  },
  [169] = {
    [sym__identifier] = STATE(181),
    [sym_reserved_identifier] = STATE(8),
    [anon_sym_where] = ACTIONS(14),
    [sym_variable_identifier] = ACTIONS(24),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_in] = ACTIONS(14),
    [anon_sym_infix] = ACTIONS(14),
    [anon_sym_infixl] = ACTIONS(14),
    [anon_sym_infixr] = ACTIONS(14),
    [anon_sym_instance] = ACTIONS(14),
    [anon_sym_let] = ACTIONS(14),
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(26),
  },
  [170] = {
    [anon_sym_COMMA] = ACTIONS(540),
    [anon_sym_RPAREN] = ACTIONS(540),
    [sym_comment] = ACTIONS(26),
  },
  [171] = {
    [ts_builtin_sym_end] = ACTIONS(542),
    [anon_sym_module] = ACTIONS(544),
    [anon_sym_where] = ACTIONS(544),
    [anon_sym_import] = ACTIONS(544),
    [anon_sym_data] = ACTIONS(544),
    [anon_sym_newtype] = ACTIONS(544),
    [anon_sym_type] = ACTIONS(544),
    [sym_variable_identifier] = ACTIONS(546),
    [sym_constructor_identifier] = ACTIONS(546),
    [sym_module_identifier] = ACTIONS(546),
    [anon_sym_case] = ACTIONS(544),
    [anon_sym_class] = ACTIONS(544),
    [anon_sym_default] = ACTIONS(544),
    [anon_sym_deriving] = ACTIONS(544),
    [anon_sym_do] = ACTIONS(544),
    [anon_sym_else] = ACTIONS(544),
    [anon_sym_foreign] = ACTIONS(544),
    [anon_sym_if] = ACTIONS(544),
    [anon_sym_in] = ACTIONS(544),
    [anon_sym_infix] = ACTIONS(544),
    [anon_sym_infixl] = ACTIONS(544),
    [anon_sym_infixr] = ACTIONS(544),
    [anon_sym_instance] = ACTIONS(544),
    [anon_sym_let] = ACTIONS(544),
    [anon_sym_of] = ACTIONS(544),
    [anon_sym_then] = ACTIONS(544),
    [anon_sym__] = ACTIONS(544),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(546),
    [anon_sym_SQUOTE] = ACTIONS(544),
    [anon_sym_DQUOTE] = ACTIONS(544),
    [sym__integer_literal] = ACTIONS(544),
    [sym__octal_literal] = ACTIONS(544),
    [sym__hexidecimal_literal] = ACTIONS(544),
  },
  [172] = {
    [anon_sym_COMMA] = ACTIONS(426),
    [anon_sym_RPAREN] = ACTIONS(548),
    [sym_comment] = ACTIONS(26),
  },
  [173] = {
    [aux_sym_import_specification_repeat1] = STATE(183),
    [anon_sym_COMMA] = ACTIONS(344),
    [anon_sym_RPAREN] = ACTIONS(548),
    [sym_comment] = ACTIONS(26),
  },
  [174] = {
    [anon_sym_RPAREN] = ACTIONS(550),
    [sym_comment] = ACTIONS(26),
  },
  [175] = {
    [aux_sym_export_declaration_repeat1] = STATE(185),
    [anon_sym_COMMA] = ACTIONS(460),
    [anon_sym_RPAREN] = ACTIONS(550),
    [sym_comment] = ACTIONS(26),
  },
  [176] = {
    [sym__identifier] = STATE(187),
    [sym_reserved_identifier] = STATE(8),
    [anon_sym_where] = ACTIONS(14),
    [anon_sym_DOT_DOT] = ACTIONS(552),
    [sym_variable_identifier] = ACTIONS(24),
    [sym_constructor_identifier] = ACTIONS(24),
    [sym_module_identifier] = ACTIONS(24),
    [anon_sym_case] = ACTIONS(14),
    [anon_sym_class] = ACTIONS(14),
    [anon_sym_default] = ACTIONS(14),
    [anon_sym_deriving] = ACTIONS(14),
    [anon_sym_do] = ACTIONS(14),
    [anon_sym_else] = ACTIONS(14),
    [anon_sym_foreign] = ACTIONS(14),
    [anon_sym_if] = ACTIONS(14),
    [anon_sym_in] = ACTIONS(14),
    [anon_sym_infix] = ACTIONS(14),
    [anon_sym_infixl] = ACTIONS(14),
    [anon_sym_infixr] = ACTIONS(14),
    [anon_sym_instance] = ACTIONS(14),
    [anon_sym_let] = ACTIONS(14),
    [anon_sym_of] = ACTIONS(14),
    [anon_sym_then] = ACTIONS(14),
    [anon_sym__] = ACTIONS(14),
    [sym_comment] = ACTIONS(26),
  },
  [177] = {
    [anon_sym_COMMA] = ACTIONS(504),
    [anon_sym_RPAREN] = ACTIONS(554),
    [sym_comment] = ACTIONS(26),
  },
  [178] = {
    [anon_sym_COMMA] = ACTIONS(556),
    [anon_sym_COLON_COLON] = ACTIONS(556),
    [sym_comment] = ACTIONS(26),
  },
  [179] = {
    [anon_sym_COMMA] = ACTIONS(558),
    [anon_sym_RBRACE] = ACTIONS(558),
    [sym_comment] = ACTIONS(26),
  },
  [180] = {
    [anon_sym_COMMA] = ACTIONS(560),
    [anon_sym_RBRACE] = ACTIONS(560),
    [sym_comment] = ACTIONS(26),
  },
  [181] = {
    [anon_sym_COMMA] = ACTIONS(562),
    [anon_sym_RPAREN] = ACTIONS(562),
    [sym_comment] = ACTIONS(26),
  },
  [182] = {
    [ts_builtin_sym_end] = ACTIONS(564),
    [anon_sym_module] = ACTIONS(566),
    [anon_sym_where] = ACTIONS(566),
    [anon_sym_import] = ACTIONS(566),
    [anon_sym_data] = ACTIONS(566),
    [anon_sym_newtype] = ACTIONS(566),
    [anon_sym_type] = ACTIONS(566),
    [sym_variable_identifier] = ACTIONS(568),
    [sym_constructor_identifier] = ACTIONS(568),
    [sym_module_identifier] = ACTIONS(568),
    [anon_sym_case] = ACTIONS(566),
    [anon_sym_class] = ACTIONS(566),
    [anon_sym_default] = ACTIONS(566),
    [anon_sym_deriving] = ACTIONS(566),
    [anon_sym_do] = ACTIONS(566),
    [anon_sym_else] = ACTIONS(566),
    [anon_sym_foreign] = ACTIONS(566),
    [anon_sym_if] = ACTIONS(566),
    [anon_sym_in] = ACTIONS(566),
    [anon_sym_infix] = ACTIONS(566),
    [anon_sym_infixl] = ACTIONS(566),
    [anon_sym_infixr] = ACTIONS(566),
    [anon_sym_instance] = ACTIONS(566),
    [anon_sym_let] = ACTIONS(566),
    [anon_sym_of] = ACTIONS(566),
    [anon_sym_then] = ACTIONS(566),
    [anon_sym__] = ACTIONS(566),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(568),
    [anon_sym_SQUOTE] = ACTIONS(566),
    [anon_sym_DQUOTE] = ACTIONS(566),
    [sym__integer_literal] = ACTIONS(566),
    [sym__octal_literal] = ACTIONS(566),
    [sym__hexidecimal_literal] = ACTIONS(566),
  },
  [183] = {
    [anon_sym_COMMA] = ACTIONS(426),
    [anon_sym_RPAREN] = ACTIONS(570),
    [sym_comment] = ACTIONS(26),
  },
  [184] = {
    [anon_sym_COMMA] = ACTIONS(572),
    [anon_sym_RPAREN] = ACTIONS(572),
    [sym_comment] = ACTIONS(26),
  },
  [185] = {
    [anon_sym_COMMA] = ACTIONS(504),
    [anon_sym_RPAREN] = ACTIONS(574),
    [sym_comment] = ACTIONS(26),
  },
  [186] = {
    [anon_sym_RPAREN] = ACTIONS(574),
    [sym_comment] = ACTIONS(26),
  },
  [187] = {
    [aux_sym_export_declaration_repeat1] = STATE(191),
    [anon_sym_COMMA] = ACTIONS(460),
    [anon_sym_RPAREN] = ACTIONS(574),
    [sym_comment] = ACTIONS(26),
  },
  [188] = {
    [aux_sym_import_specification_repeat1] = STATE(192),
    [anon_sym_COMMA] = ACTIONS(344),
    [anon_sym_RPAREN] = ACTIONS(570),
    [sym_comment] = ACTIONS(26),
  },
  [189] = {
    [ts_builtin_sym_end] = ACTIONS(576),
    [anon_sym_module] = ACTIONS(578),
    [anon_sym_where] = ACTIONS(578),
    [anon_sym_import] = ACTIONS(578),
    [anon_sym_data] = ACTIONS(578),
    [anon_sym_newtype] = ACTIONS(578),
    [anon_sym_type] = ACTIONS(578),
    [sym_variable_identifier] = ACTIONS(580),
    [sym_constructor_identifier] = ACTIONS(580),
    [sym_module_identifier] = ACTIONS(580),
    [anon_sym_case] = ACTIONS(578),
    [anon_sym_class] = ACTIONS(578),
    [anon_sym_default] = ACTIONS(578),
    [anon_sym_deriving] = ACTIONS(578),
    [anon_sym_do] = ACTIONS(578),
    [anon_sym_else] = ACTIONS(578),
    [anon_sym_foreign] = ACTIONS(578),
    [anon_sym_if] = ACTIONS(578),
    [anon_sym_in] = ACTIONS(578),
    [anon_sym_infix] = ACTIONS(578),
    [anon_sym_infixl] = ACTIONS(578),
    [anon_sym_infixr] = ACTIONS(578),
    [anon_sym_instance] = ACTIONS(578),
    [anon_sym_let] = ACTIONS(578),
    [anon_sym_of] = ACTIONS(578),
    [anon_sym_then] = ACTIONS(578),
    [anon_sym__] = ACTIONS(578),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(580),
    [anon_sym_SQUOTE] = ACTIONS(578),
    [anon_sym_DQUOTE] = ACTIONS(578),
    [sym__integer_literal] = ACTIONS(578),
    [sym__octal_literal] = ACTIONS(578),
    [sym__hexidecimal_literal] = ACTIONS(578),
  },
  [190] = {
    [anon_sym_COMMA] = ACTIONS(582),
    [anon_sym_RPAREN] = ACTIONS(582),
    [sym_comment] = ACTIONS(26),
  },
  [191] = {
    [anon_sym_COMMA] = ACTIONS(504),
    [anon_sym_RPAREN] = ACTIONS(584),
    [sym_comment] = ACTIONS(26),
  },
  [192] = {
    [anon_sym_COMMA] = ACTIONS(426),
    [anon_sym_RPAREN] = ACTIONS(586),
    [sym_comment] = ACTIONS(26),
  },
  [193] = {
    [anon_sym_COMMA] = ACTIONS(588),
    [anon_sym_RPAREN] = ACTIONS(588),
    [sym_comment] = ACTIONS(26),
  },
  [194] = {
    [ts_builtin_sym_end] = ACTIONS(590),
    [anon_sym_module] = ACTIONS(592),
    [anon_sym_where] = ACTIONS(592),
    [anon_sym_import] = ACTIONS(592),
    [anon_sym_data] = ACTIONS(592),
    [anon_sym_newtype] = ACTIONS(592),
    [anon_sym_type] = ACTIONS(592),
    [sym_variable_identifier] = ACTIONS(594),
    [sym_constructor_identifier] = ACTIONS(594),
    [sym_module_identifier] = ACTIONS(594),
    [anon_sym_case] = ACTIONS(592),
    [anon_sym_class] = ACTIONS(592),
    [anon_sym_default] = ACTIONS(592),
    [anon_sym_deriving] = ACTIONS(592),
    [anon_sym_do] = ACTIONS(592),
    [anon_sym_else] = ACTIONS(592),
    [anon_sym_foreign] = ACTIONS(592),
    [anon_sym_if] = ACTIONS(592),
    [anon_sym_in] = ACTIONS(592),
    [anon_sym_infix] = ACTIONS(592),
    [anon_sym_infixl] = ACTIONS(592),
    [anon_sym_infixr] = ACTIONS(592),
    [anon_sym_instance] = ACTIONS(592),
    [anon_sym_let] = ACTIONS(592),
    [anon_sym_of] = ACTIONS(592),
    [anon_sym_then] = ACTIONS(592),
    [anon_sym__] = ACTIONS(592),
    [sym_comment] = ACTIONS(26),
    [sym_float] = ACTIONS(594),
    [anon_sym_SQUOTE] = ACTIONS(592),
    [anon_sym_DQUOTE] = ACTIONS(592),
    [sym__integer_literal] = ACTIONS(592),
    [sym__octal_literal] = ACTIONS(592),
    [sym__hexidecimal_literal] = ACTIONS(592),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(),
  [5] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(), RECOVER(),
  [8] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(),
  [10] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 0),
  [12] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(2),
  [14] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
  [16] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
  [18] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(5),
  [20] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(6),
  [22] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(7),
  [24] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(8),
  [26] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [28] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(9),
  [30] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(10),
  [32] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(11),
  [34] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(12),
  [36] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(18),
  [38] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_reserved_identifier, 1),
  [40] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_reserved_identifier, 1),
  [42] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_reserved_identifier, 1),
  [44] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(19),
  [46] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(20),
  [48] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(21),
  [50] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(26),
  [52] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(27),
  [54] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [56] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__identifier, 1),
  [58] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__identifier, 1),
  [60] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [62] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__literal, 1),
  [64] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [66] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(32),
  [68] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(33),
  [70] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(34),
  [72] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [74] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(35),
  [76] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(36),
  [78] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(37),
  [80] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(38),
  [82] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(39),
  [84] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(40),
  [86] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(41),
  [88] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(42),
  [90] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(43),
  [92] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(44),
  [94] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(45),
  [96] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(46),
  [98] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(47),
  [100] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer, 1),
  [102] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_integer, 1),
  [104] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_integer, 1),
  [106] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [108] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [110] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 1),
  [112] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [114] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [116] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 1),
  [118] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [120] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__top_level_declaration, 1),
  [122] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__top_level_declaration, 1),
  [124] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__top_level_declaration, 1),
  [126] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 1),
  [128] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(50),
  [130] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(51),
  [132] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 2),
  [134] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_declaration, 2),
  [136] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(54),
  [138] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(55),
  [140] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(56),
  [142] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 2),
  [144] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 1),
  [146] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructors_repeat1, 1),
  [148] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 1),
  [150] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 2, .fragile = true),
  [152] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 2, .fragile = true),
  [154] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(58),
  [156] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 2, .fragile = true),
  [158] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 1),
  [160] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_simple_type, 1),
  [162] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_simple_type, 1),
  [164] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(63),
  [166] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(65),
  [168] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__special, 1),
  [170] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__symbol, 1),
  [172] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__small, 1),
  [174] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(66),
  [176] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__graphic, 1),
  [178] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__large, 1),
  [180] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(67),
  [182] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(68),
  [184] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(69),
  [186] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(70),
  [188] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(71),
  [190] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(72),
  [192] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__special, 1),
  [194] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__symbol, 1),
  [196] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__small, 1),
  [198] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 1),
  [200] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [202] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 2),
  [204] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 2),
  [206] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__graphic, 1),
  [208] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__large, 1),
  [210] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(73),
  [212] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(74),
  [214] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(75),
  [216] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(76),
  [218] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(77),
  [220] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(78),
  [222] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__gap, 1),
  [224] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(79),
  [226] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(80),
  [228] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [230] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2),
  [232] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [234] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 3, .fragile = true),
  [236] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(82),
  [238] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(85),
  [240] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 3),
  [242] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_declaration, 3),
  [244] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(86),
  [246] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 3),
  [248] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(88),
  [250] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(90),
  [252] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(91),
  [254] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(93),
  [256] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 3, .fragile = true),
  [258] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 3, .fragile = true),
  [260] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 3, .fragile = true),
  [262] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(95),
  [264] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructors, 1, .fragile = true),
  [266] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructors, 1, .fragile = true),
  [268] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructors, 1, .fragile = true),
  [270] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 2),
  [272] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_constructors_repeat1, 2),
  [274] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_constructors_repeat1, 2),
  [276] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(97),
  [278] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [280] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_char, 3),
  [282] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_char, 3),
  [284] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__char_escape, 1),
  [286] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__escape, 2),
  [288] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(100),
  [290] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(102),
  [292] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(104),
  [294] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__ascii, 1),
  [296] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__char_escape, 1),
  [298] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 2),
  [300] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(106),
  [302] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(108),
  [304] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(110),
  [306] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 1),
  [308] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_string_repeat1, 2),
  [310] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [312] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_string, 3),
  [314] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_string, 3),
  [316] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 4, .fragile = true, .alias_sequence_id = 1),
  [318] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_export_declarations, 2),
  [320] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(112),
  [322] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(113),
  [324] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(115),
  [326] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export_declaration, 1),
  [328] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 4, .fragile = true),
  [330] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 4),
  [332] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_declaration, 4),
  [334] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 4),
  [336] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 2),
  [338] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 2),
  [340] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 2),
  [342] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(118),
  [344] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(119),
  [346] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(120),
  [348] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 4),
  [350] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_algebraic_datatype, 4),
  [352] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_algebraic_datatype, 4),
  [354] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(124),
  [356] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_constructors, 2),
  [358] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_constructors, 2),
  [360] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_constructors, 2),
  [362] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_newtype, 4),
  [364] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_newtype, 4),
  [366] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_newtype, 4),
  [368] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_type_synonym, 4, .fragile = true),
  [370] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_type_synonym, 4, .fragile = true),
  [372] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_type_synonym, 4, .fragile = true),
  [374] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__cntrl, 1),
  [376] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__ascii, 2),
  [378] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat1, 1),
  [380] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__escape, 3),
  [382] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(127),
  [384] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat2, 1),
  [386] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(128),
  [388] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__cntrl, 1),
  [390] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__ascii, 2),
  [392] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 1),
  [394] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__escape, 3),
  [396] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(129),
  [398] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 1),
  [400] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(130),
  [402] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_export_declarations, 3),
  [404] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(132),
  [406] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(133),
  [408] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(134),
  [410] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module, 5, .fragile = true, .alias_sequence_id = 2),
  [412] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 5),
  [414] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_declaration, 5),
  [416] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 5),
  [418] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(137),
  [420] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 3),
  [422] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 3),
  [424] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 3),
  [426] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(140),
  [428] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(141),
  [430] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(142),
  [432] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(144),
  [434] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(145),
  [436] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(147),
  [438] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(148),
  [440] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_new_constructor, 2),
  [442] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_new_constructor, 2),
  [444] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_new_constructor, 2),
  [446] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat1, 2),
  [448] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym__escape_repeat2, 2),
  [450] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat1, 2),
  [452] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym__escape_repeat2, 2),
  [454] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_export_declarations_repeat1, 2),
  [456] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_export_declarations, 4),
  [458] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(151),
  [460] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(152),
  [462] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 6),
  [464] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_declaration, 6),
  [466] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_declaration, 6),
  [468] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(154),
  [470] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(156),
  [472] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 2),
  [474] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 4),
  [476] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 4),
  [478] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 4),
  [480] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(158),
  [482] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(160),
  [484] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(161),
  [486] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(163),
  [488] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(164),
  [490] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fields, 3),
  [492] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fields, 3),
  [494] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_fields, 3),
  [496] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(166),
  [498] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(167),
  [500] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_export_declarations_repeat1, 3),
  [502] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export_declaration, 4),
  [504] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(169),
  [506] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(170),
  [508] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(171),
  [510] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(173),
  [512] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(174),
  [514] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(176),
  [516] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 3),
  [518] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 5),
  [520] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 5),
  [522] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 5),
  [524] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_field_repeat1, 2),
  [526] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field, 3),
  [528] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(178),
  [530] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fields_repeat1, 2),
  [532] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_fields, 4),
  [534] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_fields, 4),
  [536] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_fields, 4),
  [538] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_export_declaration_repeat1, 2),
  [540] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_export_declaration, 5),
  [542] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 6),
  [544] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 6),
  [546] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 6),
  [548] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(182),
  [550] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(184),
  [552] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(186),
  [554] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(188),
  [556] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_field_repeat1, 3),
  [558] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_field, 4),
  [560] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_fields_repeat1, 3),
  [562] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_export_declaration_repeat1, 3),
  [564] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 7),
  [566] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 7),
  [568] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 7),
  [570] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(189),
  [572] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 5),
  [574] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(190),
  [576] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 8),
  [578] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 8),
  [580] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 8),
  [582] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 6),
  [584] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(193),
  [586] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(194),
  [588] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_import_specification_repeat1, 7),
  [590] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 9),
  [592] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_import_specification, 9),
  [594] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_import_specification, 9),
};

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
  };
  return &language;
}
