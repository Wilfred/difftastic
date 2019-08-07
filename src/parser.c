#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 235
#define SYMBOL_COUNT 157
#define ALIAS_COUNT 0
#define TOKEN_COUNT 104
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8

enum {
  anon_sym_POUND_BANG = 1,
  aux_sym_shebang_line_token1 = 2,
  anon_sym_package = 3,
  anon_sym_import = 4,
  anon_sym_DOT_STAR = 5,
  anon_sym_as = 6,
  anon_sym_typealias = 7,
  anon_sym_EQ = 8,
  anon_sym_class = 9,
  anon_sym_interface = 10,
  anon_sym_LBRACE = 11,
  anon_sym_RBRACE = 12,
  anon_sym_COLON = 13,
  anon_sym_fun = 14,
  anon_sym_LPAREN = 15,
  anon_sym_RPAREN = 16,
  anon_sym_object = 17,
  anon_sym_AT = 18,
  anon_sym_for = 19,
  anon_sym_in = 20,
  anon_sym_while = 21,
  anon_sym_SEMI = 22,
  anon_sym_do = 23,
  aux_sym__semi_token1 = 24,
  anon_sym_STAR = 25,
  anon_sym_DOT_DOT = 26,
  anon_sym_QMARK_COLON = 27,
  anon_sym_AMP_AMP = 28,
  anon_sym_PIPE_PIPE = 29,
  anon_sym_LBRACK = 30,
  anon_sym_COMMA = 31,
  anon_sym_RBRACK = 32,
  anon_sym_null = 33,
  anon_sym_DQUOTE = 34,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 35,
  anon_sym_DOLLAR_LBRACE = 36,
  anon_sym_DASH_GT = 37,
  anon_sym_DOT = 38,
  sym_this_expression = 39,
  anon_sym_super = 40,
  anon_sym_LT = 41,
  anon_sym_GT = 42,
  anon_sym_if = 43,
  anon_sym_else = 44,
  anon_sym_val = 45,
  anon_sym_when = 46,
  anon_sym_try = 47,
  anon_sym_catch = 48,
  anon_sym_finally = 49,
  anon_sym_throw = 50,
  anon_sym_return = 51,
  anon_sym_continue = 52,
  anon_sym_break = 53,
  anon_sym_COLON_COLON = 54,
  anon_sym_PLUS_EQ = 55,
  anon_sym_DASH_EQ = 56,
  anon_sym_STAR_EQ = 57,
  anon_sym_SLASH_EQ = 58,
  anon_sym_PERCENT_EQ = 59,
  anon_sym_BANG_EQ = 60,
  anon_sym_BANG_EQ_EQ = 61,
  anon_sym_EQ_EQ = 62,
  anon_sym_EQ_EQ_EQ = 63,
  anon_sym_LT_EQ = 64,
  anon_sym_GT_EQ = 65,
  anon_sym_BANGin = 66,
  anon_sym_is = 67,
  anon_sym_PLUS = 68,
  anon_sym_DASH = 69,
  anon_sym_SLASH = 70,
  anon_sym_PERCENT = 71,
  anon_sym_as_QMARK = 72,
  anon_sym_PLUS_PLUS = 73,
  anon_sym_DASH_DASH = 74,
  anon_sym_BANG = 75,
  anon_sym_BANG_BANG = 76,
  anon_sym_QMARK = 77,
  anon_sym_continue_AT = 78,
  anon_sym_break_AT = 79,
  anon_sym_this_AT = 80,
  sym__not_is = 81,
  sym__dec_digit = 82,
  sym__dec_digit_no_zero = 83,
  anon_sym__ = 84,
  aux_sym__double_exponent_token1 = 85,
  aux_sym__double_exponent_token2 = 86,
  aux_sym__float_literal_token1 = 87,
  sym__hex_digit = 88,
  anon_sym_0 = 89,
  aux_sym_hex_literal_token1 = 90,
  sym__bin_digit = 91,
  aux_sym_bin_literal_token1 = 92,
  aux_sym_unsigned_literal_token1 = 93,
  anon_sym_L = 94,
  anon_sym_true = 95,
  anon_sym_false = 96,
  anon_sym_SQUOTE = 97,
  aux_sym__lexical_identifier_token1 = 98,
  aux_sym__lexical_identifier_token2 = 99,
  anon_sym_BSLASH = 100,
  anon_sym_u = 101,
  sym__escaped_identifier = 102,
  anon_sym_DOLLAR = 103,
  sym_source_file = 104,
  sym_shebang_line = 105,
  sym_package_header = 106,
  sym_import_header = 107,
  sym_import_alias = 108,
  sym_type_alias = 109,
  sym__declaration = 110,
  sym_class_declaration = 111,
  sym_class_body = 112,
  sym_class_member_declarations = 113,
  sym_variable_declaration = 114,
  sym_function_declaration = 115,
  sym_function_body = 116,
  sym_object_declaration = 117,
  sym__type = 118,
  sym_statements = 119,
  sym__statement = 120,
  sym_label = 121,
  sym_control_structure_body = 122,
  sym__block = 123,
  sym__loop_statement = 124,
  sym_for_statement = 125,
  sym_while_statement = 126,
  sym_do_while_statement = 127,
  sym__semi = 128,
  sym__semis = 129,
  sym_assignment = 130,
  sym__expression = 131,
  sym_unary_expression = 132,
  sym_binary_expression = 133,
  sym__postfix_unary_suffix = 134,
  sym__assignment_and_operator = 135,
  sym__equality_operator = 136,
  sym__comparison_operator = 137,
  sym__in_operator = 138,
  sym__is_operator = 139,
  sym__additive_operator = 140,
  sym__multiplicative_operator = 141,
  sym__as_operator = 142,
  sym__prefix_unary_operator = 143,
  sym__postfix_unary_operator = 144,
  sym_directly_assignable_expression = 145,
  sym_annotation = 146,
  sym_simple_identifier = 147,
  sym_identifier = 148,
  sym__lexical_identifier = 149,
  aux_sym_source_file_repeat1 = 150,
  aux_sym_source_file_repeat2 = 151,
  aux_sym_class_member_declarations_repeat1 = 152,
  aux_sym_statements_repeat1 = 153,
  aux_sym__statement_repeat1 = 154,
  aux_sym_for_statement_repeat1 = 155,
  aux_sym_identifier_repeat1 = 156,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_POUND_BANG] = "#!",
  [aux_sym_shebang_line_token1] = "shebang_line_token1",
  [anon_sym_package] = "package",
  [anon_sym_import] = "import",
  [anon_sym_DOT_STAR] = ".*",
  [anon_sym_as] = "as",
  [anon_sym_typealias] = "typealias",
  [anon_sym_EQ] = "=",
  [anon_sym_class] = "class",
  [anon_sym_interface] = "interface",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_fun] = "fun",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_object] = "object",
  [anon_sym_AT] = "@",
  [anon_sym_for] = "for",
  [anon_sym_in] = "in",
  [anon_sym_while] = "while",
  [anon_sym_SEMI] = ";",
  [anon_sym_do] = "do",
  [aux_sym__semi_token1] = "_semi_token1",
  [anon_sym_STAR] = "*",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_QMARK_COLON] = "?:",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_null] = "null",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = "\"\"\"",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_DOT] = ".",
  [sym_this_expression] = "this_expression",
  [anon_sym_super] = "super",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_val] = "val",
  [anon_sym_when] = "when",
  [anon_sym_try] = "try",
  [anon_sym_catch] = "catch",
  [anon_sym_finally] = "finally",
  [anon_sym_throw] = "throw",
  [anon_sym_return] = "return",
  [anon_sym_continue] = "continue",
  [anon_sym_break] = "break",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_SLASH_EQ] = "/=",
  [anon_sym_PERCENT_EQ] = "%=",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_BANG_EQ_EQ] = "!==",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_EQ_EQ_EQ] = "===",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_BANGin] = "!in",
  [anon_sym_is] = "is",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_as_QMARK] = "as?",
  [anon_sym_PLUS_PLUS] = "++",
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_BANG] = "!",
  [anon_sym_BANG_BANG] = "!!",
  [anon_sym_QMARK] = "?",
  [anon_sym_continue_AT] = "continue@",
  [anon_sym_break_AT] = "break@",
  [anon_sym_this_AT] = "this@",
  [sym__not_is] = "_not_is",
  [sym__dec_digit] = "_dec_digit",
  [sym__dec_digit_no_zero] = "_dec_digit_no_zero",
  [anon_sym__] = "_",
  [aux_sym__double_exponent_token1] = "_double_exponent_token1",
  [aux_sym__double_exponent_token2] = "_double_exponent_token2",
  [aux_sym__float_literal_token1] = "_float_literal_token1",
  [sym__hex_digit] = "_hex_digit",
  [anon_sym_0] = "0",
  [aux_sym_hex_literal_token1] = "hex_literal_token1",
  [sym__bin_digit] = "_bin_digit",
  [aux_sym_bin_literal_token1] = "bin_literal_token1",
  [aux_sym_unsigned_literal_token1] = "unsigned_literal_token1",
  [anon_sym_L] = "L",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_SQUOTE] = "'",
  [aux_sym__lexical_identifier_token1] = "_lexical_identifier_token1",
  [aux_sym__lexical_identifier_token2] = "_lexical_identifier_token2",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_u] = "u",
  [sym__escaped_identifier] = "_escaped_identifier",
  [anon_sym_DOLLAR] = "$",
  [sym_source_file] = "source_file",
  [sym_shebang_line] = "shebang_line",
  [sym_package_header] = "package_header",
  [sym_import_header] = "import_header",
  [sym_import_alias] = "import_alias",
  [sym_type_alias] = "type_alias",
  [sym__declaration] = "_declaration",
  [sym_class_declaration] = "class_declaration",
  [sym_class_body] = "class_body",
  [sym_class_member_declarations] = "class_member_declarations",
  [sym_variable_declaration] = "variable_declaration",
  [sym_function_declaration] = "function_declaration",
  [sym_function_body] = "function_body",
  [sym_object_declaration] = "object_declaration",
  [sym__type] = "_type",
  [sym_statements] = "statements",
  [sym__statement] = "_statement",
  [sym_label] = "label",
  [sym_control_structure_body] = "control_structure_body",
  [sym__block] = "_block",
  [sym__loop_statement] = "_loop_statement",
  [sym_for_statement] = "for_statement",
  [sym_while_statement] = "while_statement",
  [sym_do_while_statement] = "do_while_statement",
  [sym__semi] = "_semi",
  [sym__semis] = "_semis",
  [sym_assignment] = "assignment",
  [sym__expression] = "_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym__postfix_unary_suffix] = "_postfix_unary_suffix",
  [sym__assignment_and_operator] = "_assignment_and_operator",
  [sym__equality_operator] = "_equality_operator",
  [sym__comparison_operator] = "_comparison_operator",
  [sym__in_operator] = "_in_operator",
  [sym__is_operator] = "_is_operator",
  [sym__additive_operator] = "_additive_operator",
  [sym__multiplicative_operator] = "_multiplicative_operator",
  [sym__as_operator] = "_as_operator",
  [sym__prefix_unary_operator] = "_prefix_unary_operator",
  [sym__postfix_unary_operator] = "_postfix_unary_operator",
  [sym_directly_assignable_expression] = "directly_assignable_expression",
  [sym_annotation] = "annotation",
  [sym_simple_identifier] = "simple_identifier",
  [sym_identifier] = "identifier",
  [sym__lexical_identifier] = "_lexical_identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_class_member_declarations_repeat1] = "class_member_declarations_repeat1",
  [aux_sym_statements_repeat1] = "statements_repeat1",
  [aux_sym__statement_repeat1] = "_statement_repeat1",
  [aux_sym_for_statement_repeat1] = "for_statement_repeat1",
  [aux_sym_identifier_repeat1] = "identifier_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUND_BANG] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_shebang_line_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_package] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_typealias] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_class] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_interface] = {
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fun] = {
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
  [anon_sym_object] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__semi_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_this_expression] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_super] = {
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
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_val] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_when] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_try] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_catch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_finally] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_throw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_continue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_break] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_continue_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_break_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_this_AT] = {
    .visible = true,
    .named = false,
  },
  [sym__not_is] = {
    .visible = false,
    .named = true,
  },
  [sym__dec_digit] = {
    .visible = false,
    .named = true,
  },
  [sym__dec_digit_no_zero] = {
    .visible = false,
    .named = true,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__double_exponent_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__double_exponent_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__float_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__hex_digit] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_0] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_hex_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__bin_digit] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_bin_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unsigned_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_L] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__lexical_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__lexical_identifier_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u] = {
    .visible = true,
    .named = false,
  },
  [sym__escaped_identifier] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_shebang_line] = {
    .visible = true,
    .named = true,
  },
  [sym_package_header] = {
    .visible = true,
    .named = true,
  },
  [sym_import_header] = {
    .visible = true,
    .named = true,
  },
  [sym_import_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_type_alias] = {
    .visible = true,
    .named = true,
  },
  [sym__declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_class_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_class_body] = {
    .visible = true,
    .named = true,
  },
  [sym_class_member_declarations] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_function_body] = {
    .visible = true,
    .named = true,
  },
  [sym_object_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_statements] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_control_structure_body] = {
    .visible = true,
    .named = true,
  },
  [sym__block] = {
    .visible = false,
    .named = true,
  },
  [sym__loop_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_for_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_while_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_do_while_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__semi] = {
    .visible = false,
    .named = true,
  },
  [sym__semis] = {
    .visible = false,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__postfix_unary_suffix] = {
    .visible = false,
    .named = true,
  },
  [sym__assignment_and_operator] = {
    .visible = false,
    .named = true,
  },
  [sym__equality_operator] = {
    .visible = false,
    .named = true,
  },
  [sym__comparison_operator] = {
    .visible = false,
    .named = true,
  },
  [sym__in_operator] = {
    .visible = false,
    .named = true,
  },
  [sym__is_operator] = {
    .visible = false,
    .named = true,
  },
  [sym__additive_operator] = {
    .visible = false,
    .named = true,
  },
  [sym__multiplicative_operator] = {
    .visible = false,
    .named = true,
  },
  [sym__as_operator] = {
    .visible = false,
    .named = true,
  },
  [sym__prefix_unary_operator] = {
    .visible = false,
    .named = true,
  },
  [sym__postfix_unary_operator] = {
    .visible = false,
    .named = true,
  },
  [sym_directly_assignable_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__lexical_identifier] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_member_declarations_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_statements_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_for_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0) ADVANCE(129);
      if (lookahead == '!') ADVANCE(232);
      if (lookahead == '"') ADVANCE(182);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '$') ADVANCE(297);
      if (lookahead == '%') ADVANCE(227);
      if (lookahead == '&') ADVANCE(13);
      if (lookahead == '\'') ADVANCE(256);
      if (lookahead == '(') ADVANCE(155);
      if (lookahead == ')') ADVANCE(156);
      if (lookahead == '*') ADVANCE(173);
      if (lookahead == '+') ADVANCE(220);
      if (lookahead == ',') ADVANCE(179);
      if (lookahead == '-') ADVANCE(223);
      if (lookahead == '.') ADVANCE(188);
      if (lookahead == '/') ADVANCE(225);
      if (lookahead == '0') ADVANCE(250);
      if (lookahead == '1') ADVANCE(239);
      if (lookahead == ':') ADVANCE(152);
      if (lookahead == ';') ADVANCE(168);
      if (lookahead == '<') ADVANCE(191);
      if (lookahead == '=') ADVANCE(144);
      if (lookahead == '>') ADVANCE(192);
      if (lookahead == '?') ADVANCE(234);
      if (lookahead == '@') ADVANCE(159);
      if (lookahead == 'B') ADVANCE(245);
      if (lookahead == 'E') ADVANCE(241);
      if (lookahead == 'F') ADVANCE(243);
      if (lookahead == 'L') ADVANCE(253);
      if (lookahead == 'U') ADVANCE(252);
      if (lookahead == '[') ADVANCE(178);
      if (lookahead == '\\') ADVANCE(294);
      if (lookahead == ']') ADVANCE(180);
      if (lookahead == '_') ADVANCE(240);
      if (lookahead == '`') ADVANCE(128);
      if (lookahead == 'a') ADVANCE(249);
      if (lookahead == 'b') ADVANCE(248);
      if (lookahead == 'c') ADVANCE(246);
      if (lookahead == 'd') ADVANCE(247);
      if (lookahead == 'e') ADVANCE(242);
      if (lookahead == 'f') ADVANCE(244);
      if (lookahead == 'i') ADVANCE(53);
      if (lookahead == 'n') ADVANCE(116);
      if (lookahead == 'o') ADVANCE(32);
      if (lookahead == 'p') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(46);
      if (lookahead == 's') ADVANCE(117);
      if (lookahead == 't') ADVANCE(56);
      if (lookahead == 'u') ADVANCE(295);
      if (lookahead == 'v') ADVANCE(27);
      if (lookahead == 'w') ADVANCE(57);
      if (lookahead == '{') ADVANCE(149);
      if (lookahead == '|') ADVANCE(126);
      if (lookahead == '}') ADVANCE(150);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(251);
      if (('A' <= lookahead && lookahead <= 'D')) ADVANCE(245);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(239);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(129);
      if (lookahead == '!') ADVANCE(231);
      if (lookahead == '#') ADVANCE(6);
      if (lookahead == '%') ADVANCE(17);
      if (lookahead == '*') ADVANCE(173);
      if (lookahead == '+') ADVANCE(220);
      if (lookahead == '-') ADVANCE(222);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == '=') ADVANCE(143);
      if (lookahead == '@') ADVANCE(159);
      if (lookahead == '`') ADVANCE(128);
      if (lookahead == 'c') ADVANCE(69);
      if (lookahead == 'd') ADVANCE(90);
      if (lookahead == 'f') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(76);
      if (lookahead == 'o') ADVANCE(33);
      if (lookahead == 'p') ADVANCE(24);
      if (lookahead == 't') ADVANCE(124);
      if (lookahead == 'w') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(129);
      if (lookahead == '!') ADVANCE(231);
      if (lookahead == '(') ADVANCE(155);
      if (lookahead == '*') ADVANCE(172);
      if (lookahead == '+') ADVANCE(219);
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == '=') ADVANCE(143);
      if (lookahead == '@') ADVANCE(159);
      if (lookahead == '`') ADVANCE(128);
      if (lookahead == 'c') ADVANCE(69);
      if (lookahead == 'd') ADVANCE(90);
      if (lookahead == 'f') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(80);
      if (lookahead == 'o') ADVANCE(33);
      if (lookahead == 't') ADVANCE(124);
      if (lookahead == 'w') ADVANCE(59);
      if (lookahead == '}') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(129);
      if (lookahead == '!') ADVANCE(231);
      if (lookahead == '*') ADVANCE(172);
      if (lookahead == '+') ADVANCE(219);
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == '.') ADVANCE(187);
      if (lookahead == '@') ADVANCE(159);
      if (lookahead == '`') ADVANCE(128);
      if (lookahead == 'a') ADVANCE(105);
      if (lookahead == 'c') ADVANCE(69);
      if (lookahead == 'd') ADVANCE(90);
      if (lookahead == 'f') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(76);
      if (lookahead == 'o') ADVANCE(33);
      if (lookahead == 't') ADVANCE(124);
      if (lookahead == 'w') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 4:
      if (lookahead == 0) ADVANCE(129);
      if (lookahead == '!') ADVANCE(231);
      if (lookahead == '*') ADVANCE(172);
      if (lookahead == '+') ADVANCE(219);
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == '.') ADVANCE(186);
      if (lookahead == '@') ADVANCE(159);
      if (lookahead == '`') ADVANCE(128);
      if (lookahead == 'c') ADVANCE(69);
      if (lookahead == 'd') ADVANCE(90);
      if (lookahead == 'f') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(76);
      if (lookahead == 'o') ADVANCE(33);
      if (lookahead == 't') ADVANCE(124);
      if (lookahead == 'w') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(4)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 5:
      if (lookahead == 0) ADVANCE(129);
      if (lookahead == '!') ADVANCE(231);
      if (lookahead == '*') ADVANCE(172);
      if (lookahead == '+') ADVANCE(219);
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == '@') ADVANCE(159);
      if (lookahead == '`') ADVANCE(128);
      if (lookahead == 'c') ADVANCE(69);
      if (lookahead == 'd') ADVANCE(90);
      if (lookahead == 'f') ADVANCE(91);
      if (lookahead == 'i') ADVANCE(76);
      if (lookahead == 'o') ADVANCE(33);
      if (lookahead == 't') ADVANCE(124);
      if (lookahead == 'w') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(130);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(231);
      if (lookahead == '*') ADVANCE(172);
      if (lookahead == '+') ADVANCE(219);
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == '@') ADVANCE(159);
      if (lookahead == '`') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '%') ADVANCE(227);
      if (lookahead == '&') ADVANCE(13);
      if (lookahead == '*') ADVANCE(173);
      if (lookahead == '+') ADVANCE(220);
      if (lookahead == '-') ADVANCE(222);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(225);
      if (lookahead == '<') ADVANCE(191);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '>') ADVANCE(192);
      if (lookahead == '?') ADVANCE(15);
      if (lookahead == '@') ADVANCE(159);
      if (lookahead == '`') ADVANCE(128);
      if (lookahead == 'a') ADVANCE(104);
      if (lookahead == 'i') ADVANCE(81);
      if (lookahead == '{') ADVANCE(149);
      if (lookahead == '|') ADVANCE(126);
      if (lookahead == '}') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '%') ADVANCE(226);
      if (lookahead == '&') ADVANCE(13);
      if (lookahead == ')') ADVANCE(156);
      if (lookahead == '*') ADVANCE(172);
      if (lookahead == '+') ADVANCE(219);
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(224);
      if (lookahead == '<') ADVANCE(191);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '>') ADVANCE(192);
      if (lookahead == '?') ADVANCE(15);
      if (lookahead == '@') ADVANCE(159);
      if (lookahead == '`') ADVANCE(128);
      if (lookahead == 'a') ADVANCE(104);
      if (lookahead == 'i') ADVANCE(81);
      if (lookahead == '|') ADVANCE(126);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 10:
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '%') ADVANCE(226);
      if (lookahead == '&') ADVANCE(13);
      if (lookahead == '*') ADVANCE(172);
      if (lookahead == '+') ADVANCE(219);
      if (lookahead == '-') ADVANCE(221);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(224);
      if (lookahead == '<') ADVANCE(191);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '>') ADVANCE(192);
      if (lookahead == '?') ADVANCE(15);
      if (lookahead == '@') ADVANCE(159);
      if (lookahead == '`') ADVANCE(128);
      if (lookahead == 'a') ADVANCE(104);
      if (lookahead == 'c') ADVANCE(69);
      if (lookahead == 'f') ADVANCE(115);
      if (lookahead == 'i') ADVANCE(84);
      if (lookahead == 'o') ADVANCE(33);
      if (lookahead == 't') ADVANCE(124);
      if (lookahead == '|') ADVANCE(126);
      if (lookahead == '}') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 11:
      if (lookahead == '!') ADVANCE(233);
      if (lookahead == '=') ADVANCE(210);
      if (lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(183);
      END_STATE();
    case 13:
      if (lookahead == '&') ADVANCE(176);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(174);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(175);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(151);
      if (lookahead == 'i') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(209);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(208);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(212);
      END_STATE();
    case 20:
      if (lookahead == '=') ADVANCE(143);
      if (lookahead == 'c') ADVANCE(71);
      if (lookahead == 'f') ADVANCE(118);
      if (lookahead == 'i') ADVANCE(87);
      if (lookahead == 'o') ADVANCE(32);
      if (lookahead == 't') ADVANCE(125);
      if (lookahead == '{') ADVANCE(149);
      if (lookahead == '}') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(20)
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(171);
      END_STATE();
    case 21:
      if (lookahead == '`') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 32:
      if (lookahead == 'b') ADVANCE(63);
      END_STATE();
    case 33:
      if (lookahead == 'b') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(65);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(58);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(111);
      END_STATE();
    case 37:
      if (lookahead == 'c') ADVANCE(71);
      if (lookahead == 'f') ADVANCE(118);
      if (lookahead == 'i') ADVANCE(87);
      if (lookahead == 'o') ADVANCE(32);
      if (lookahead == 't') ADVANCE(125);
      if (lookahead == '}') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(37)
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(45);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(78);
      if (lookahead == 'i') ADVANCE(74);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 53:
      if (lookahead == 'f') ADVANCE(193);
      if (lookahead == 'm') ADVANCE(93);
      if (lookahead == 'n') ADVANCE(164);
      if (lookahead == 's') ADVANCE(217);
      END_STATE();
    case 54:
      if (lookahead == 'f') ADVANCE(28);
      END_STATE();
    case 55:
      if (lookahead == 'g') ADVANCE(43);
      END_STATE();
    case 56:
      if (lookahead == 'h') ADVANCE(60);
      if (lookahead == 'r') ADVANCE(120);
      if (lookahead == 'y') ADVANCE(95);
      END_STATE();
    case 57:
      if (lookahead == 'h') ADVANCE(50);
      END_STATE();
    case 58:
      if (lookahead == 'h') ADVANCE(198);
      END_STATE();
    case 59:
      if (lookahead == 'h') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(101);
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 63:
      if (lookahead == 'j') ADVANCE(48);
      END_STATE();
    case 64:
      if (lookahead == 'k') ADVANCE(203);
      END_STATE();
    case 65:
      if (lookahead == 'k') ADVANCE(23);
      END_STATE();
    case 66:
      if (lookahead == 'l') ADVANCE(195);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(181);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(108);
      END_STATE();
    case 76:
      if (lookahead == 'm') ADVANCE(281);
      if (lookahead == 'n') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(201);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(165);
      if (lookahead == 's') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(216);
      if (lookahead == 's') ADVANCE(238);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(162);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(163);
      if (lookahead == 's') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 89:
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(283);
      if (lookahead == 'u') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 93:
      if (lookahead == 'p') ADVANCE(92);
      END_STATE();
    case 94:
      if (lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 95:
      if (lookahead == 'p') ADVANCE(52);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 97:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 100:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 101:
      if (lookahead == 's') ADVANCE(189);
      END_STATE();
    case 102:
      if (lookahead == 's') ADVANCE(145);
      END_STATE();
    case 103:
      if (lookahead == 's') ADVANCE(141);
      END_STATE();
    case 104:
      if (lookahead == 's') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 105:
      if (lookahead == 's') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 106:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 107:
      if (lookahead == 's') ADVANCE(102);
      END_STATE();
    case 108:
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(157);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 115:
      if (lookahead == 'u') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 116:
      if (lookahead == 'u') ADVANCE(72);
      END_STATE();
    case 117:
      if (lookahead == 'u') ADVANCE(94);
      END_STATE();
    case 118:
      if (lookahead == 'u') ADVANCE(77);
      END_STATE();
    case 119:
      if (lookahead == 'u') ADVANCE(100);
      END_STATE();
    case 120:
      if (lookahead == 'u') ADVANCE(40);
      if (lookahead == 'y') ADVANCE(197);
      END_STATE();
    case 121:
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 122:
      if (lookahead == 'w') ADVANCE(200);
      END_STATE();
    case 123:
      if (lookahead == 'y') ADVANCE(199);
      END_STATE();
    case 124:
      if (lookahead == 'y') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 125:
      if (lookahead == 'y') ADVANCE(95);
      END_STATE();
    case 126:
      if (lookahead == '|') ADVANCE(177);
      END_STATE();
    case 127:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 128:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '`') ADVANCE(21);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_POUND_BANG);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_shebang_line_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(132);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_shebang_line_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_package);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_DOT_STAR);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '?') ADVANCE(228);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == '?') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_typealias);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_typealias);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(212);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_class);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_interface);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(204);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_fun);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_fun);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_object);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_object);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_for);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 't') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_in);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_while);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_do);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym__semi_token1);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(207);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_QMARK_COLON);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(12);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '*') ADVANCE(137);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '*') ADVANCE(137);
      if (lookahead == '.') ADVANCE(174);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_this_expression);
      if (lookahead == '@') ADVANCE(237);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_super);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(214);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(215);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_val);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_when);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_try);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_catch);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_finally);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_throw);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_continue);
      if (lookahead == '@') ADVANCE(235);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_break);
      if (lookahead == '@') ADVANCE(236);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      if (lookahead == '=') ADVANCE(211);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_BANG_EQ_EQ);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      if (lookahead == '=') ADVANCE(213);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_BANGin);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_is);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(229);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(229);
      if (lookahead == '=') ADVANCE(205);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(230);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '=') ADVANCE(206);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(230);
      if (lookahead == '=') ADVANCE(206);
      if (lookahead == '>') ADVANCE(185);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '=') ADVANCE(208);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '=') ADVANCE(209);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_as_QMARK);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(210);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_BANG_BANG);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_QMARK);
      if (lookahead == ':') ADVANCE(175);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_continue_AT);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_break_AT);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_this_AT);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__not_is);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__dec_digit);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym__double_exponent_token1);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym__double_exponent_token1);
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym__float_literal_token1);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym__float_literal_token1);
      if (lookahead == 'a') ADVANCE(75);
      if (lookahead == 'i') ADVANCE(88);
      if (lookahead == 'o') ADVANCE(96);
      if (lookahead == 'u') ADVANCE(77);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__hex_digit);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'a') ADVANCE(112);
      if (lookahead == 'l') ADVANCE(25);
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__hex_digit);
      if (lookahead == 's') ADVANCE(138);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_hex_literal_token1);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_unsigned_literal_token1);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_L);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'a') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'a') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'a') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'a') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'a') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'c') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'c') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'c') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'e') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'e') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'e') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'e') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'e') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'e') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'f') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'g') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'i') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'i') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'j') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'k') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'l') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'l') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'n') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'o') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'p') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'p') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'r') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'r') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 'r') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 's') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 's') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 's') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 't') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 't') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (lookahead == 't') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym__lexical_identifier_token2);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(296);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_u);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym__escaped_identifier);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '{') ADVANCE(184);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 131},
  [6] = {.lex_state = 7},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 7},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 20},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 20},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 7},
  [52] = {.lex_state = 7},
  [53] = {.lex_state = 7},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 7},
  [56] = {.lex_state = 7},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 7},
  [60] = {.lex_state = 7},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 9},
  [69] = {.lex_state = 37},
  [70] = {.lex_state = 20},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 7},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 7},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 8},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 20},
  [84] = {.lex_state = 7},
  [85] = {.lex_state = 16},
  [86] = {.lex_state = 7},
  [87] = {.lex_state = 16},
  [88] = {.lex_state = 8},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 8},
  [91] = {.lex_state = 8},
  [92] = {.lex_state = 8},
  [93] = {.lex_state = 8},
  [94] = {.lex_state = 8},
  [95] = {.lex_state = 8},
  [96] = {.lex_state = 8},
  [97] = {.lex_state = 8},
  [98] = {.lex_state = 8},
  [99] = {.lex_state = 8},
  [100] = {.lex_state = 8},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 5},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 20},
  [105] = {.lex_state = 37},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 20},
  [108] = {.lex_state = 3},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 5},
  [111] = {.lex_state = 4},
  [112] = {.lex_state = 9},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 8},
  [116] = {.lex_state = 7},
  [117] = {.lex_state = 20},
  [118] = {.lex_state = 20},
  [119] = {.lex_state = 7},
  [120] = {.lex_state = 7},
  [121] = {.lex_state = 16},
  [122] = {.lex_state = 7},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 8},
  [125] = {.lex_state = 37},
  [126] = {.lex_state = 20},
  [127] = {.lex_state = 37},
  [128] = {.lex_state = 8},
  [129] = {.lex_state = 8},
  [130] = {.lex_state = 2},
  [131] = {.lex_state = 8},
  [132] = {.lex_state = 9},
  [133] = {.lex_state = 7},
  [134] = {.lex_state = 20},
  [135] = {.lex_state = 20},
  [136] = {.lex_state = 16},
  [137] = {.lex_state = 7},
  [138] = {.lex_state = 9},
  [139] = {.lex_state = 2},
  [140] = {.lex_state = 8},
  [141] = {.lex_state = 8},
  [142] = {.lex_state = 9},
  [143] = {.lex_state = 8},
  [144] = {.lex_state = 8},
  [145] = {.lex_state = 8},
  [146] = {.lex_state = 8},
  [147] = {.lex_state = 7},
  [148] = {.lex_state = 7},
  [149] = {.lex_state = 3},
  [150] = {.lex_state = 7},
  [151] = {.lex_state = 4},
  [152] = {.lex_state = 7},
  [153] = {.lex_state = 8},
  [154] = {.lex_state = 9},
  [155] = {.lex_state = 9},
  [156] = {.lex_state = 9},
  [157] = {.lex_state = 7},
  [158] = {.lex_state = 7},
  [159] = {.lex_state = 7},
  [160] = {.lex_state = 7},
  [161] = {.lex_state = 7},
  [162] = {.lex_state = 7},
  [163] = {.lex_state = 7},
  [164] = {.lex_state = 7},
  [165] = {.lex_state = 9},
  [166] = {.lex_state = 7},
  [167] = {.lex_state = 7},
  [168] = {.lex_state = 7},
  [169] = {.lex_state = 7},
  [170] = {.lex_state = 4},
  [171] = {.lex_state = 20},
  [172] = {.lex_state = 7},
  [173] = {.lex_state = 9},
  [174] = {.lex_state = 9},
  [175] = {.lex_state = 9},
  [176] = {.lex_state = 9},
  [177] = {.lex_state = 9},
  [178] = {.lex_state = 9},
  [179] = {.lex_state = 9},
  [180] = {.lex_state = 9},
  [181] = {.lex_state = 9},
  [182] = {.lex_state = 9},
  [183] = {.lex_state = 9},
  [184] = {.lex_state = 4},
  [185] = {.lex_state = 4},
  [186] = {.lex_state = 20},
  [187] = {.lex_state = 7},
  [188] = {.lex_state = 10},
  [189] = {.lex_state = 2},
  [190] = {.lex_state = 10},
  [191] = {.lex_state = 10},
  [192] = {.lex_state = 10},
  [193] = {.lex_state = 10},
  [194] = {.lex_state = 10},
  [195] = {.lex_state = 10},
  [196] = {.lex_state = 10},
  [197] = {.lex_state = 10},
  [198] = {.lex_state = 10},
  [199] = {.lex_state = 10},
  [200] = {.lex_state = 10},
  [201] = {.lex_state = 10},
  [202] = {.lex_state = 10},
  [203] = {.lex_state = 10},
  [204] = {.lex_state = 10},
  [205] = {.lex_state = 4},
  [206] = {.lex_state = 7},
  [207] = {.lex_state = 9},
  [208] = {.lex_state = 16},
  [209] = {.lex_state = 20},
  [210] = {.lex_state = 10},
  [211] = {.lex_state = 7},
  [212] = {.lex_state = 7},
  [213] = {.lex_state = 2},
  [214] = {.lex_state = 1},
  [215] = {.lex_state = 7},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 20},
  [218] = {.lex_state = 7},
  [219] = {.lex_state = 7},
  [220] = {.lex_state = 7},
  [221] = {.lex_state = 7},
  [222] = {.lex_state = 7},
  [223] = {.lex_state = 7},
  [224] = {.lex_state = 7},
  [225] = {.lex_state = 7},
  [226] = {.lex_state = 7},
  [227] = {.lex_state = 7},
  [228] = {.lex_state = 7},
  [229] = {.lex_state = 7},
  [230] = {.lex_state = 7},
  [231] = {.lex_state = 7},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 7},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym__dec_digit_no_zero] = ACTIONS(1),
    [anon_sym_try] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [aux_sym__lexical_identifier_token2] = ACTIONS(1),
    [anon_sym_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_package] = ACTIONS(1),
    [anon_sym_as_QMARK] = ACTIONS(1),
    [anon_sym_DOT_STAR] = ACTIONS(1),
    [sym__hex_digit] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym__dec_digit] = ACTIONS(1),
    [anon_sym_object] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_catch] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_interface] = ACTIONS(1),
    [anon_sym_continue_AT] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_0] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym__bin_digit] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym__double_exponent_token1] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(1),
    [anon_sym_u] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(1),
    [anon_sym_finally] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_break_AT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_typealias] = ACTIONS(1),
    [aux_sym_hex_literal_token1] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [aux_sym_bin_literal_token1] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [aux_sym__double_exponent_token2] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_throw] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_fun] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [aux_sym_unsigned_literal_token1] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_this_AT] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_val] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_this_expression] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_POUND_BANG] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_QMARK_COLON] = ACTIONS(1),
    [anon_sym_L] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [sym__escaped_identifier] = ACTIONS(1),
    [anon_sym_when] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_super] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_continue] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [aux_sym__float_literal_token1] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
  },
  [1] = {
    [sym_binary_expression] = STATE(18),
    [sym__lexical_identifier] = STATE(15),
    [sym_import_header] = STATE(26),
    [sym_while_statement] = STATE(22),
    [sym_directly_assignable_expression] = STATE(16),
    [sym_do_while_statement] = STATE(22),
    [aux_sym__statement_repeat1] = STATE(17),
    [sym__loop_statement] = STATE(22),
    [sym_for_statement] = STATE(22),
    [sym_assignment] = STATE(22),
    [sym__expression] = STATE(18),
    [sym_shebang_line] = STATE(19),
    [sym_package_header] = STATE(20),
    [sym__declaration] = STATE(22),
    [sym_class_declaration] = STATE(22),
    [aux_sym_source_file_repeat2] = STATE(21),
    [sym_object_declaration] = STATE(22),
    [sym_unary_expression] = STATE(18),
    [sym_source_file] = STATE(23),
    [sym_type_alias] = STATE(22),
    [sym_annotation] = STATE(14),
    [sym__prefix_unary_operator] = STATE(24),
    [sym__statement] = STATE(22),
    [sym_label] = STATE(14),
    [sym_simple_identifier] = STATE(25),
    [aux_sym_source_file_repeat1] = STATE(26),
    [sym_function_declaration] = STATE(22),
    [anon_sym_while] = ACTIONS(3),
    [anon_sym_interface] = ACTIONS(5),
    [anon_sym_DASH_DASH] = ACTIONS(7),
    [anon_sym_import] = ACTIONS(9),
    [anon_sym_POUND_BANG] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(13),
    [aux_sym__lexical_identifier_token2] = ACTIONS(15),
    [anon_sym_AT] = ACTIONS(17),
    [anon_sym_do] = ACTIONS(19),
    [anon_sym_class] = ACTIONS(5),
    [anon_sym_fun] = ACTIONS(21),
    [anon_sym_package] = ACTIONS(23),
    [anon_sym_PLUS_PLUS] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym__lexical_identifier_token1] = ACTIONS(25),
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_object] = ACTIONS(29),
    [anon_sym_BANG] = ACTIONS(7),
    [anon_sym_typealias] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
  },
  [2] = {
    [anon_sym_LPAREN] = ACTIONS(37),
  },
  [3] = {
    [sym__lexical_identifier] = STATE(15),
    [sym_simple_identifier] = STATE(28),
    [aux_sym__lexical_identifier_token1] = ACTIONS(15),
    [aux_sym__lexical_identifier_token2] = ACTIONS(15),
  },
  [4] = {
    [sym__lexical_identifier] = STATE(149),
    [sym_simple_identifier] = STATE(29),
    [sym_identifier] = STATE(30),
    [aux_sym__lexical_identifier_token1] = ACTIONS(39),
    [aux_sym__lexical_identifier_token2] = ACTIONS(39),
  },
  [5] = {
    [aux_sym_shebang_line_token1] = ACTIONS(41),
  },
  [6] = {
    [sym__lexical_identifier] = STATE(189),
    [sym_simple_identifier] = STATE(32),
    [aux_sym__lexical_identifier_token1] = ACTIONS(43),
    [aux_sym__lexical_identifier_token2] = ACTIONS(43),
  },
  [7] = {
    [sym_control_structure_body] = STATE(35),
    [sym__block] = STATE(36),
    [anon_sym_while] = ACTIONS(45),
    [anon_sym_LBRACE] = ACTIONS(47),
  },
  [8] = {
    [sym__lexical_identifier] = STATE(189),
    [sym_simple_identifier] = STATE(37),
    [aux_sym__lexical_identifier_token1] = ACTIONS(43),
    [aux_sym__lexical_identifier_token2] = ACTIONS(43),
  },
  [9] = {
    [sym__lexical_identifier] = STATE(205),
    [sym_simple_identifier] = STATE(151),
    [sym_identifier] = STATE(38),
    [aux_sym__lexical_identifier_token1] = ACTIONS(49),
    [aux_sym__lexical_identifier_token2] = ACTIONS(49),
  },
  [10] = {
    [sym__lexical_identifier] = STATE(15),
    [sym_simple_identifier] = STATE(39),
    [aux_sym__lexical_identifier_token1] = ACTIONS(15),
    [aux_sym__lexical_identifier_token2] = ACTIONS(15),
  },
  [11] = {
    [sym__lexical_identifier] = STATE(189),
    [sym_simple_identifier] = STATE(40),
    [aux_sym__lexical_identifier_token1] = ACTIONS(43),
    [aux_sym__lexical_identifier_token2] = ACTIONS(43),
  },
  [12] = {
    [sym_binary_expression] = STATE(42),
    [sym__lexical_identifier] = STATE(15),
    [sym__prefix_unary_operator] = STATE(24),
    [sym_annotation] = STATE(24),
    [sym_simple_identifier] = STATE(41),
    [sym__expression] = STATE(42),
    [sym_label] = STATE(24),
    [sym_unary_expression] = STATE(42),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_DASH_DASH] = ACTIONS(7),
    [aux_sym__lexical_identifier_token1] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(13),
    [aux_sym__lexical_identifier_token2] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(7),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_PLUS_PLUS] = ACTIONS(7),
  },
  [13] = {
    [anon_sym_LPAREN] = ACTIONS(53),
  },
  [14] = {
    [sym_binary_expression] = STATE(44),
    [sym__lexical_identifier] = STATE(15),
    [sym__prefix_unary_operator] = STATE(24),
    [sym_annotation] = STATE(24),
    [sym_simple_identifier] = STATE(41),
    [sym__expression] = STATE(44),
    [sym_label] = STATE(24),
    [sym_unary_expression] = STATE(44),
    [anon_sym_while] = ACTIONS(55),
    [anon_sym_interface] = ACTIONS(55),
    [anon_sym_DASH_DASH] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(13),
    [aux_sym__lexical_identifier_token2] = ACTIONS(15),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_do] = ACTIONS(55),
    [anon_sym_PLUS_PLUS] = ACTIONS(7),
    [anon_sym_class] = ACTIONS(55),
    [anon_sym_fun] = ACTIONS(55),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym__lexical_identifier_token1] = ACTIONS(25),
    [anon_sym_object] = ACTIONS(55),
    [anon_sym_BANG] = ACTIONS(7),
    [anon_sym_typealias] = ACTIONS(55),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(55),
  },
  [15] = {
    [anon_sym_GT] = ACTIONS(57),
    [aux_sym__lexical_identifier_token2] = ACTIONS(57),
    [anon_sym_PERCENT_EQ] = ACTIONS(57),
    [anon_sym_LT_EQ] = ACTIONS(57),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(57),
    [anon_sym_PLUS_EQ] = ACTIONS(57),
    [anon_sym_BANG_BANG] = ACTIONS(57),
    [anon_sym_PLUS_PLUS] = ACTIONS(57),
    [anon_sym_RBRACE] = ACTIONS(57),
    [anon_sym_is] = ACTIONS(57),
    [anon_sym_as_QMARK] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(57),
    [anon_sym_DOT_DOT] = ACTIONS(57),
    [anon_sym_in] = ACTIONS(57),
    [anon_sym_BANG_EQ] = ACTIONS(57),
    [anon_sym_STAR_EQ] = ACTIONS(57),
    [anon_sym_EQ_EQ] = ACTIONS(57),
    [anon_sym_DASH_EQ] = ACTIONS(57),
    [anon_sym_DASH_DASH] = ACTIONS(57),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_GT_EQ] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(57),
    [anon_sym_QMARK_COLON] = ACTIONS(57),
    [anon_sym_SLASH] = ACTIONS(57),
    [anon_sym_PIPE_PIPE] = ACTIONS(57),
    [anon_sym_AT] = ACTIONS(57),
    [anon_sym_LT] = ACTIONS(57),
    [aux_sym__lexical_identifier_token1] = ACTIONS(57),
    [anon_sym_SLASH_EQ] = ACTIONS(57),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_BANGin] = ACTIONS(57),
    [anon_sym_PERCENT] = ACTIONS(57),
    [anon_sym_AMP_AMP] = ACTIONS(57),
    [anon_sym_STAR] = ACTIONS(57),
    [sym__not_is] = ACTIONS(57),
    [aux_sym__semi_token1] = ACTIONS(59),
  },
  [16] = {
    [sym__assignment_and_operator] = STATE(45),
    [anon_sym_SLASH_EQ] = ACTIONS(61),
    [anon_sym_PERCENT_EQ] = ACTIONS(61),
    [anon_sym_PLUS_EQ] = ACTIONS(61),
    [anon_sym_STAR_EQ] = ACTIONS(61),
    [anon_sym_DASH_EQ] = ACTIONS(61),
  },
  [17] = {
    [sym_directly_assignable_expression] = STATE(16),
    [sym__loop_statement] = STATE(47),
    [sym_for_statement] = STATE(47),
    [sym_assignment] = STATE(47),
    [sym__expression] = STATE(48),
    [sym__prefix_unary_operator] = STATE(24),
    [sym_annotation] = STATE(14),
    [sym_type_alias] = STATE(47),
    [sym_function_declaration] = STATE(47),
    [sym_simple_identifier] = STATE(25),
    [sym_label] = STATE(14),
    [sym_while_statement] = STATE(47),
    [sym_unary_expression] = STATE(48),
    [sym_binary_expression] = STATE(48),
    [sym__lexical_identifier] = STATE(15),
    [sym_do_while_statement] = STATE(47),
    [aux_sym__statement_repeat1] = STATE(46),
    [sym__declaration] = STATE(47),
    [sym_class_declaration] = STATE(47),
    [sym_object_declaration] = STATE(47),
    [anon_sym_while] = ACTIONS(3),
    [anon_sym_interface] = ACTIONS(5),
    [anon_sym_DASH_DASH] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(13),
    [aux_sym__lexical_identifier_token2] = ACTIONS(15),
    [anon_sym_AT] = ACTIONS(17),
    [anon_sym_do] = ACTIONS(19),
    [anon_sym_PLUS_PLUS] = ACTIONS(7),
    [anon_sym_class] = ACTIONS(5),
    [anon_sym_fun] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym__lexical_identifier_token1] = ACTIONS(25),
    [anon_sym_object] = ACTIONS(29),
    [anon_sym_BANG] = ACTIONS(7),
    [anon_sym_typealias] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
  },
  [18] = {
    [sym__lexical_identifier] = STATE(206),
    [sym__additive_operator] = STATE(53),
    [sym__multiplicative_operator] = STATE(54),
    [sym__in_operator] = STATE(60),
    [sym__is_operator] = STATE(60),
    [sym__postfix_unary_operator] = STATE(57),
    [sym__equality_operator] = STATE(55),
    [sym__comparison_operator] = STATE(56),
    [sym__as_operator] = STATE(58),
    [sym__postfix_unary_suffix] = STATE(57),
    [sym_simple_identifier] = STATE(59),
    [anon_sym_GT] = ACTIONS(63),
    [aux_sym__lexical_identifier_token2] = ACTIONS(65),
    [anon_sym_LT_EQ] = ACTIONS(63),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(67),
    [anon_sym_BANG_BANG] = ACTIONS(69),
    [anon_sym_PLUS_PLUS] = ACTIONS(69),
    [anon_sym_RBRACE] = ACTIONS(71),
    [anon_sym_is] = ACTIONS(73),
    [anon_sym_as_QMARK] = ACTIONS(75),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_DOT_DOT] = ACTIONS(79),
    [anon_sym_in] = ACTIONS(73),
    [anon_sym_BANG_EQ] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(67),
    [anon_sym_DASH_DASH] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(77),
    [anon_sym_GT_EQ] = ACTIONS(63),
    [anon_sym_SLASH] = ACTIONS(81),
    [anon_sym_as] = ACTIONS(75),
    [anon_sym_QMARK_COLON] = ACTIONS(83),
    [anon_sym_PIPE_PIPE] = ACTIONS(85),
    [anon_sym_LT] = ACTIONS(63),
    [aux_sym__lexical_identifier_token1] = ACTIONS(65),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(67),
    [anon_sym_BANGin] = ACTIONS(73),
    [anon_sym_PERCENT] = ACTIONS(81),
    [anon_sym_AMP_AMP] = ACTIONS(87),
    [anon_sym_STAR] = ACTIONS(81),
    [sym__not_is] = ACTIONS(73),
    [aux_sym__semi_token1] = ACTIONS(89),
  },
  [19] = {
    [sym_binary_expression] = STATE(18),
    [sym__lexical_identifier] = STATE(15),
    [sym_import_header] = STATE(61),
    [sym_while_statement] = STATE(22),
    [sym_directly_assignable_expression] = STATE(16),
    [sym_do_while_statement] = STATE(22),
    [aux_sym__statement_repeat1] = STATE(17),
    [sym__loop_statement] = STATE(22),
    [sym_for_statement] = STATE(22),
    [sym_assignment] = STATE(22),
    [sym__expression] = STATE(18),
    [sym_unary_expression] = STATE(18),
    [sym_package_header] = STATE(62),
    [sym__declaration] = STATE(22),
    [sym_class_declaration] = STATE(22),
    [aux_sym_source_file_repeat2] = STATE(63),
    [sym_object_declaration] = STATE(22),
    [sym_type_alias] = STATE(22),
    [sym_annotation] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(61),
    [sym__statement] = STATE(22),
    [sym__prefix_unary_operator] = STATE(24),
    [sym_function_declaration] = STATE(22),
    [sym_simple_identifier] = STATE(25),
    [sym_label] = STATE(14),
    [anon_sym_while] = ACTIONS(3),
    [anon_sym_interface] = ACTIONS(5),
    [anon_sym_DASH_DASH] = ACTIONS(7),
    [anon_sym_import] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(13),
    [aux_sym__lexical_identifier_token2] = ACTIONS(15),
    [anon_sym_AT] = ACTIONS(17),
    [anon_sym_do] = ACTIONS(19),
    [anon_sym_PLUS_PLUS] = ACTIONS(7),
    [anon_sym_class] = ACTIONS(5),
    [anon_sym_fun] = ACTIONS(21),
    [anon_sym_package] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym__lexical_identifier_token1] = ACTIONS(25),
    [ts_builtin_sym_end] = ACTIONS(91),
    [anon_sym_object] = ACTIONS(29),
    [anon_sym_BANG] = ACTIONS(7),
    [anon_sym_typealias] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
  },
  [20] = {
    [sym_binary_expression] = STATE(18),
    [sym__lexical_identifier] = STATE(15),
    [sym_import_header] = STATE(61),
    [sym_while_statement] = STATE(22),
    [sym_directly_assignable_expression] = STATE(16),
    [sym_do_while_statement] = STATE(22),
    [aux_sym__statement_repeat1] = STATE(17),
    [sym__loop_statement] = STATE(22),
    [sym_for_statement] = STATE(22),
    [sym_assignment] = STATE(22),
    [sym__expression] = STATE(18),
    [sym_unary_expression] = STATE(18),
    [sym__declaration] = STATE(22),
    [sym_class_declaration] = STATE(22),
    [aux_sym_source_file_repeat2] = STATE(63),
    [sym_object_declaration] = STATE(22),
    [sym_type_alias] = STATE(22),
    [sym_annotation] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(61),
    [sym__statement] = STATE(22),
    [sym__prefix_unary_operator] = STATE(24),
    [sym_function_declaration] = STATE(22),
    [sym_simple_identifier] = STATE(25),
    [sym_label] = STATE(14),
    [anon_sym_while] = ACTIONS(3),
    [anon_sym_interface] = ACTIONS(5),
    [anon_sym_DASH_DASH] = ACTIONS(7),
    [anon_sym_import] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(13),
    [aux_sym__lexical_identifier_token2] = ACTIONS(15),
    [anon_sym_AT] = ACTIONS(17),
    [anon_sym_do] = ACTIONS(19),
    [anon_sym_PLUS_PLUS] = ACTIONS(7),
    [anon_sym_class] = ACTIONS(5),
    [anon_sym_fun] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym__lexical_identifier_token1] = ACTIONS(25),
    [ts_builtin_sym_end] = ACTIONS(91),
    [anon_sym_object] = ACTIONS(29),
    [anon_sym_BANG] = ACTIONS(7),
    [anon_sym_typealias] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
  },
  [21] = {
    [sym_binary_expression] = STATE(18),
    [sym__lexical_identifier] = STATE(15),
    [sym_do_while_statement] = STATE(22),
    [sym_unary_expression] = STATE(18),
    [sym_directly_assignable_expression] = STATE(16),
    [aux_sym__statement_repeat1] = STATE(17),
    [sym__loop_statement] = STATE(22),
    [sym_for_statement] = STATE(22),
    [sym_assignment] = STATE(22),
    [sym__expression] = STATE(18),
    [sym__declaration] = STATE(22),
    [sym_class_declaration] = STATE(22),
    [aux_sym_source_file_repeat2] = STATE(64),
    [sym_object_declaration] = STATE(22),
    [sym_type_alias] = STATE(22),
    [sym_annotation] = STATE(14),
    [sym__prefix_unary_operator] = STATE(24),
    [sym__statement] = STATE(22),
    [sym_function_declaration] = STATE(22),
    [sym_simple_identifier] = STATE(25),
    [sym_label] = STATE(14),
    [sym_while_statement] = STATE(22),
    [anon_sym_while] = ACTIONS(3),
    [anon_sym_interface] = ACTIONS(5),
    [anon_sym_DASH_DASH] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(13),
    [aux_sym__lexical_identifier_token2] = ACTIONS(15),
    [anon_sym_AT] = ACTIONS(17),
    [anon_sym_do] = ACTIONS(19),
    [anon_sym_PLUS_PLUS] = ACTIONS(7),
    [anon_sym_class] = ACTIONS(5),
    [anon_sym_fun] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym__lexical_identifier_token1] = ACTIONS(25),
    [ts_builtin_sym_end] = ACTIONS(91),
    [anon_sym_object] = ACTIONS(29),
    [anon_sym_BANG] = ACTIONS(7),
    [anon_sym_typealias] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
  },
  [22] = {
    [sym__semi] = STATE(65),
    [aux_sym__semi_token1] = ACTIONS(93),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(95),
  },
  [24] = {
    [sym_binary_expression] = STATE(44),
    [sym__lexical_identifier] = STATE(15),
    [sym__prefix_unary_operator] = STATE(24),
    [sym_annotation] = STATE(24),
    [sym_simple_identifier] = STATE(41),
    [sym__expression] = STATE(44),
    [sym_label] = STATE(24),
    [sym_unary_expression] = STATE(44),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_DASH_DASH] = ACTIONS(7),
    [aux_sym__lexical_identifier_token1] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(13),
    [aux_sym__lexical_identifier_token2] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(7),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_PLUS_PLUS] = ACTIONS(7),
  },
  [25] = {
    [anon_sym_GT] = ACTIONS(97),
    [aux_sym__lexical_identifier_token2] = ACTIONS(97),
    [anon_sym_PERCENT_EQ] = ACTIONS(99),
    [anon_sym_LT_EQ] = ACTIONS(97),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(97),
    [anon_sym_PLUS_EQ] = ACTIONS(99),
    [anon_sym_BANG_BANG] = ACTIONS(97),
    [anon_sym_PLUS_PLUS] = ACTIONS(97),
    [anon_sym_RBRACE] = ACTIONS(97),
    [anon_sym_is] = ACTIONS(97),
    [anon_sym_as_QMARK] = ACTIONS(97),
    [anon_sym_DASH] = ACTIONS(97),
    [anon_sym_DOT_DOT] = ACTIONS(97),
    [anon_sym_in] = ACTIONS(97),
    [anon_sym_BANG_EQ] = ACTIONS(97),
    [anon_sym_STAR_EQ] = ACTIONS(99),
    [anon_sym_EQ_EQ] = ACTIONS(97),
    [anon_sym_DASH_EQ] = ACTIONS(99),
    [anon_sym_DASH_DASH] = ACTIONS(97),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_GT_EQ] = ACTIONS(97),
    [anon_sym_as] = ACTIONS(97),
    [anon_sym_QMARK_COLON] = ACTIONS(97),
    [anon_sym_SLASH] = ACTIONS(97),
    [anon_sym_PIPE_PIPE] = ACTIONS(97),
    [anon_sym_AT] = ACTIONS(101),
    [anon_sym_LT] = ACTIONS(97),
    [aux_sym__lexical_identifier_token1] = ACTIONS(97),
    [anon_sym_SLASH_EQ] = ACTIONS(99),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(97),
    [anon_sym_BANGin] = ACTIONS(97),
    [anon_sym_PERCENT] = ACTIONS(97),
    [anon_sym_AMP_AMP] = ACTIONS(97),
    [anon_sym_STAR] = ACTIONS(97),
    [sym__not_is] = ACTIONS(97),
    [aux_sym__semi_token1] = ACTIONS(103),
  },
  [26] = {
    [sym_binary_expression] = STATE(18),
    [sym__lexical_identifier] = STATE(15),
    [sym_import_header] = STATE(67),
    [sym_while_statement] = STATE(22),
    [sym_directly_assignable_expression] = STATE(16),
    [sym_do_while_statement] = STATE(22),
    [aux_sym__statement_repeat1] = STATE(17),
    [sym__loop_statement] = STATE(22),
    [sym_for_statement] = STATE(22),
    [sym_assignment] = STATE(22),
    [sym__expression] = STATE(18),
    [sym_unary_expression] = STATE(18),
    [sym__declaration] = STATE(22),
    [sym_class_declaration] = STATE(22),
    [aux_sym_source_file_repeat2] = STATE(63),
    [sym_object_declaration] = STATE(22),
    [sym_type_alias] = STATE(22),
    [sym_annotation] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(67),
    [sym__statement] = STATE(22),
    [sym__prefix_unary_operator] = STATE(24),
    [sym_function_declaration] = STATE(22),
    [sym_simple_identifier] = STATE(25),
    [sym_label] = STATE(14),
    [anon_sym_while] = ACTIONS(3),
    [anon_sym_interface] = ACTIONS(5),
    [anon_sym_DASH_DASH] = ACTIONS(7),
    [anon_sym_import] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(13),
    [aux_sym__lexical_identifier_token2] = ACTIONS(15),
    [anon_sym_AT] = ACTIONS(17),
    [anon_sym_do] = ACTIONS(19),
    [anon_sym_PLUS_PLUS] = ACTIONS(7),
    [anon_sym_class] = ACTIONS(5),
    [anon_sym_fun] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym__lexical_identifier_token1] = ACTIONS(25),
    [ts_builtin_sym_end] = ACTIONS(91),
    [anon_sym_object] = ACTIONS(29),
    [anon_sym_BANG] = ACTIONS(7),
    [anon_sym_typealias] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
  },
  [27] = {
    [sym_binary_expression] = STATE(68),
    [sym__lexical_identifier] = STATE(207),
    [sym__prefix_unary_operator] = STATE(150),
    [sym_annotation] = STATE(150),
    [sym_simple_identifier] = STATE(154),
    [sym__expression] = STATE(68),
    [sym_label] = STATE(150),
    [sym_unary_expression] = STATE(68),
    [anon_sym_DASH] = ACTIONS(105),
    [anon_sym_DASH_DASH] = ACTIONS(107),
    [aux_sym__lexical_identifier_token1] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(105),
    [aux_sym__lexical_identifier_token2] = ACTIONS(109),
    [anon_sym_BANG] = ACTIONS(107),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(111),
    [anon_sym_PLUS_PLUS] = ACTIONS(107),
  },
  [28] = {
    [sym_class_body] = STATE(70),
    [anon_sym_interface] = ACTIONS(113),
    [anon_sym_object] = ACTIONS(113),
    [anon_sym_LBRACE] = ACTIONS(115),
    [anon_sym_typealias] = ACTIONS(113),
    [anon_sym_RBRACE] = ACTIONS(113),
    [anon_sym_class] = ACTIONS(113),
    [anon_sym_fun] = ACTIONS(113),
    [aux_sym__semi_token1] = ACTIONS(117),
  },
  [29] = {
    [aux_sym_identifier_repeat1] = STATE(72),
    [anon_sym_while] = ACTIONS(119),
    [anon_sym_interface] = ACTIONS(119),
    [anon_sym_DASH_DASH] = ACTIONS(119),
    [anon_sym_import] = ACTIONS(119),
    [anon_sym_PLUS] = ACTIONS(119),
    [anon_sym_as] = ACTIONS(119),
    [aux_sym__lexical_identifier_token2] = ACTIONS(119),
    [anon_sym_DOT] = ACTIONS(121),
    [anon_sym_AT] = ACTIONS(119),
    [anon_sym_do] = ACTIONS(119),
    [anon_sym_class] = ACTIONS(119),
    [anon_sym_fun] = ACTIONS(119),
    [anon_sym_PLUS_PLUS] = ACTIONS(119),
    [anon_sym_DOT_STAR] = ACTIONS(119),
    [anon_sym_DASH] = ACTIONS(119),
    [aux_sym__lexical_identifier_token1] = ACTIONS(119),
    [ts_builtin_sym_end] = ACTIONS(123),
    [anon_sym_object] = ACTIONS(119),
    [anon_sym_BANG] = ACTIONS(119),
    [anon_sym_typealias] = ACTIONS(119),
    [anon_sym_STAR] = ACTIONS(119),
    [anon_sym_for] = ACTIONS(119),
    [aux_sym__semi_token1] = ACTIONS(123),
  },
  [30] = {
    [sym_import_alias] = STATE(73),
    [sym__semi] = STATE(75),
    [anon_sym_while] = ACTIONS(125),
    [anon_sym_interface] = ACTIONS(125),
    [anon_sym_DASH_DASH] = ACTIONS(125),
    [anon_sym_import] = ACTIONS(125),
    [anon_sym_PLUS] = ACTIONS(125),
    [aux_sym__lexical_identifier_token2] = ACTIONS(125),
    [anon_sym_as] = ACTIONS(127),
    [anon_sym_AT] = ACTIONS(125),
    [anon_sym_do] = ACTIONS(125),
    [anon_sym_PLUS_PLUS] = ACTIONS(125),
    [anon_sym_class] = ACTIONS(125),
    [anon_sym_fun] = ACTIONS(125),
    [anon_sym_DASH] = ACTIONS(125),
    [aux_sym__lexical_identifier_token1] = ACTIONS(125),
    [ts_builtin_sym_end] = ACTIONS(129),
    [anon_sym_DOT_STAR] = ACTIONS(131),
    [anon_sym_object] = ACTIONS(125),
    [anon_sym_BANG] = ACTIONS(125),
    [anon_sym_typealias] = ACTIONS(125),
    [anon_sym_STAR] = ACTIONS(125),
    [anon_sym_for] = ACTIONS(125),
    [aux_sym__semi_token1] = ACTIONS(133),
  },
  [31] = {
    [anon_sym_while] = ACTIONS(135),
    [anon_sym_interface] = ACTIONS(135),
    [anon_sym_DASH_DASH] = ACTIONS(137),
    [anon_sym_import] = ACTIONS(135),
    [anon_sym_PLUS] = ACTIONS(135),
    [aux_sym__lexical_identifier_token2] = ACTIONS(137),
    [anon_sym_AT] = ACTIONS(137),
    [anon_sym_do] = ACTIONS(135),
    [anon_sym_class] = ACTIONS(135),
    [anon_sym_fun] = ACTIONS(135),
    [anon_sym_package] = ACTIONS(135),
    [anon_sym_PLUS_PLUS] = ACTIONS(137),
    [anon_sym_DASH] = ACTIONS(135),
    [aux_sym__lexical_identifier_token1] = ACTIONS(135),
    [ts_builtin_sym_end] = ACTIONS(137),
    [anon_sym_object] = ACTIONS(135),
    [anon_sym_BANG] = ACTIONS(137),
    [anon_sym_typealias] = ACTIONS(135),
    [anon_sym_STAR] = ACTIONS(137),
    [anon_sym_for] = ACTIONS(135),
  },
  [32] = {
    [anon_sym_while] = ACTIONS(139),
    [anon_sym_interface] = ACTIONS(139),
    [anon_sym_DASH_DASH] = ACTIONS(141),
    [anon_sym_PLUS] = ACTIONS(139),
    [aux_sym__lexical_identifier_token2] = ACTIONS(141),
    [anon_sym_AT] = ACTIONS(141),
    [anon_sym_do] = ACTIONS(139),
    [anon_sym_PLUS_PLUS] = ACTIONS(141),
    [anon_sym_class] = ACTIONS(139),
    [anon_sym_fun] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(139),
    [aux_sym__lexical_identifier_token1] = ACTIONS(139),
    [anon_sym_object] = ACTIONS(139),
    [anon_sym_BANG] = ACTIONS(141),
    [anon_sym_typealias] = ACTIONS(139),
    [anon_sym_STAR] = ACTIONS(141),
    [anon_sym_for] = ACTIONS(139),
  },
  [33] = {
    [anon_sym_LPAREN] = ACTIONS(143),
  },
  [34] = {
    [sym_binary_expression] = STATE(18),
    [sym__lexical_identifier] = STATE(15),
    [sym_do_while_statement] = STATE(79),
    [sym_unary_expression] = STATE(18),
    [sym_directly_assignable_expression] = STATE(16),
    [aux_sym__statement_repeat1] = STATE(17),
    [sym__loop_statement] = STATE(79),
    [sym_for_statement] = STATE(79),
    [sym_assignment] = STATE(79),
    [sym__expression] = STATE(18),
    [sym_statements] = STATE(78),
    [sym__declaration] = STATE(79),
    [sym_class_declaration] = STATE(79),
    [sym_object_declaration] = STATE(79),
    [sym_type_alias] = STATE(79),
    [sym_annotation] = STATE(14),
    [sym__prefix_unary_operator] = STATE(24),
    [sym_function_declaration] = STATE(79),
    [sym_label] = STATE(14),
    [sym__statement] = STATE(79),
    [sym_simple_identifier] = STATE(25),
    [sym_while_statement] = STATE(79),
    [anon_sym_while] = ACTIONS(3),
    [anon_sym_interface] = ACTIONS(5),
    [anon_sym_DASH_DASH] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(13),
    [aux_sym__lexical_identifier_token2] = ACTIONS(15),
    [anon_sym_AT] = ACTIONS(17),
    [anon_sym_do] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(145),
    [anon_sym_PLUS_PLUS] = ACTIONS(7),
    [anon_sym_class] = ACTIONS(5),
    [anon_sym_fun] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym__lexical_identifier_token1] = ACTIONS(25),
    [anon_sym_object] = ACTIONS(29),
    [anon_sym_BANG] = ACTIONS(7),
    [anon_sym_typealias] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
  },
  [35] = {
    [anon_sym_while] = ACTIONS(147),
  },
  [36] = {
    [anon_sym_while] = ACTIONS(149),
  },
  [37] = {
    [anon_sym_LPAREN] = ACTIONS(151),
  },
  [38] = {
    [sym__semi] = STATE(82),
    [anon_sym_while] = ACTIONS(153),
    [anon_sym_interface] = ACTIONS(153),
    [anon_sym_DASH_DASH] = ACTIONS(153),
    [anon_sym_import] = ACTIONS(153),
    [anon_sym_PLUS] = ACTIONS(153),
    [aux_sym__lexical_identifier_token2] = ACTIONS(153),
    [anon_sym_AT] = ACTIONS(153),
    [anon_sym_do] = ACTIONS(153),
    [anon_sym_PLUS_PLUS] = ACTIONS(153),
    [anon_sym_class] = ACTIONS(153),
    [anon_sym_fun] = ACTIONS(153),
    [anon_sym_DASH] = ACTIONS(153),
    [aux_sym__lexical_identifier_token1] = ACTIONS(153),
    [ts_builtin_sym_end] = ACTIONS(155),
    [anon_sym_object] = ACTIONS(153),
    [anon_sym_BANG] = ACTIONS(153),
    [anon_sym_typealias] = ACTIONS(153),
    [anon_sym_STAR] = ACTIONS(153),
    [anon_sym_for] = ACTIONS(153),
    [aux_sym__semi_token1] = ACTIONS(157),
  },
  [39] = {
    [sym_class_body] = STATE(83),
    [anon_sym_interface] = ACTIONS(159),
    [anon_sym_object] = ACTIONS(159),
    [anon_sym_LBRACE] = ACTIONS(115),
    [anon_sym_typealias] = ACTIONS(159),
    [anon_sym_RBRACE] = ACTIONS(159),
    [anon_sym_class] = ACTIONS(159),
    [anon_sym_fun] = ACTIONS(159),
    [aux_sym__semi_token1] = ACTIONS(161),
  },
  [40] = {
    [anon_sym_EQ] = ACTIONS(163),
  },
  [41] = {
    [anon_sym_GT] = ACTIONS(97),
    [aux_sym__lexical_identifier_token2] = ACTIONS(97),
    [anon_sym_LT_EQ] = ACTIONS(97),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(97),
    [anon_sym_BANG_BANG] = ACTIONS(97),
    [anon_sym_PLUS_PLUS] = ACTIONS(97),
    [anon_sym_RBRACE] = ACTIONS(97),
    [anon_sym_is] = ACTIONS(97),
    [anon_sym_as_QMARK] = ACTIONS(97),
    [anon_sym_DASH] = ACTIONS(97),
    [anon_sym_DOT_DOT] = ACTIONS(97),
    [anon_sym_in] = ACTIONS(97),
    [anon_sym_BANG_EQ] = ACTIONS(97),
    [anon_sym_EQ_EQ] = ACTIONS(97),
    [anon_sym_DASH_DASH] = ACTIONS(97),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_GT_EQ] = ACTIONS(97),
    [anon_sym_as] = ACTIONS(97),
    [anon_sym_QMARK_COLON] = ACTIONS(97),
    [anon_sym_SLASH] = ACTIONS(97),
    [anon_sym_PIPE_PIPE] = ACTIONS(97),
    [anon_sym_AT] = ACTIONS(165),
    [anon_sym_LT] = ACTIONS(97),
    [aux_sym__lexical_identifier_token1] = ACTIONS(97),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(97),
    [anon_sym_BANGin] = ACTIONS(97),
    [anon_sym_PERCENT] = ACTIONS(97),
    [anon_sym_AMP_AMP] = ACTIONS(97),
    [anon_sym_STAR] = ACTIONS(97),
    [sym__not_is] = ACTIONS(97),
    [aux_sym__semi_token1] = ACTIONS(103),
  },
  [42] = {
    [sym__lexical_identifier] = STATE(206),
    [sym__additive_operator] = STATE(53),
    [sym__multiplicative_operator] = STATE(54),
    [sym__in_operator] = STATE(60),
    [sym__is_operator] = STATE(60),
    [sym__postfix_unary_operator] = STATE(57),
    [sym__equality_operator] = STATE(55),
    [sym__comparison_operator] = STATE(56),
    [sym__as_operator] = STATE(58),
    [sym__postfix_unary_suffix] = STATE(57),
    [sym_simple_identifier] = STATE(59),
    [anon_sym_GT] = ACTIONS(63),
    [aux_sym__lexical_identifier_token2] = ACTIONS(65),
    [anon_sym_LT_EQ] = ACTIONS(63),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(67),
    [anon_sym_BANG_BANG] = ACTIONS(69),
    [anon_sym_PLUS_PLUS] = ACTIONS(69),
    [anon_sym_RBRACE] = ACTIONS(167),
    [anon_sym_is] = ACTIONS(73),
    [anon_sym_as_QMARK] = ACTIONS(75),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_DOT_DOT] = ACTIONS(79),
    [anon_sym_in] = ACTIONS(73),
    [anon_sym_BANG_EQ] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(67),
    [anon_sym_DASH_DASH] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(77),
    [anon_sym_GT_EQ] = ACTIONS(63),
    [anon_sym_as] = ACTIONS(75),
    [anon_sym_QMARK_COLON] = ACTIONS(83),
    [anon_sym_SLASH] = ACTIONS(81),
    [anon_sym_PIPE_PIPE] = ACTIONS(85),
    [anon_sym_LT] = ACTIONS(63),
    [aux_sym__lexical_identifier_token1] = ACTIONS(65),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(67),
    [anon_sym_BANGin] = ACTIONS(73),
    [anon_sym_PERCENT] = ACTIONS(81),
    [anon_sym_AMP_AMP] = ACTIONS(87),
    [anon_sym_STAR] = ACTIONS(81),
    [sym__not_is] = ACTIONS(73),
    [aux_sym__semi_token1] = ACTIONS(169),
  },
  [43] = {
    [sym__lexical_identifier] = STATE(208),
    [sym_annotation] = STATE(86),
    [sym_simple_identifier] = STATE(85),
    [aux_sym_for_statement_repeat1] = STATE(86),
    [sym_variable_declaration] = STATE(87),
    [aux_sym__lexical_identifier_token1] = ACTIONS(171),
    [anon_sym_AT] = ACTIONS(51),
    [aux_sym__lexical_identifier_token2] = ACTIONS(171),
  },
  [44] = {
    [sym__lexical_identifier] = STATE(206),
    [sym__additive_operator] = STATE(53),
    [sym__multiplicative_operator] = STATE(54),
    [sym__in_operator] = STATE(60),
    [sym__is_operator] = STATE(60),
    [sym__postfix_unary_operator] = STATE(57),
    [sym__equality_operator] = STATE(55),
    [sym__comparison_operator] = STATE(56),
    [sym__as_operator] = STATE(58),
    [sym__postfix_unary_suffix] = STATE(57),
    [sym_simple_identifier] = STATE(59),
    [anon_sym_GT] = ACTIONS(167),
    [aux_sym__lexical_identifier_token2] = ACTIONS(167),
    [anon_sym_LT_EQ] = ACTIONS(167),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(167),
    [anon_sym_BANG_BANG] = ACTIONS(69),
    [anon_sym_PLUS_PLUS] = ACTIONS(69),
    [anon_sym_RBRACE] = ACTIONS(167),
    [anon_sym_is] = ACTIONS(167),
    [anon_sym_as_QMARK] = ACTIONS(167),
    [anon_sym_DASH] = ACTIONS(167),
    [anon_sym_DOT_DOT] = ACTIONS(167),
    [anon_sym_in] = ACTIONS(167),
    [anon_sym_BANG_EQ] = ACTIONS(167),
    [anon_sym_EQ_EQ] = ACTIONS(167),
    [anon_sym_DASH_DASH] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(167),
    [anon_sym_GT_EQ] = ACTIONS(167),
    [anon_sym_as] = ACTIONS(167),
    [anon_sym_QMARK_COLON] = ACTIONS(167),
    [anon_sym_SLASH] = ACTIONS(167),
    [anon_sym_PIPE_PIPE] = ACTIONS(167),
    [anon_sym_LT] = ACTIONS(167),
    [aux_sym__lexical_identifier_token1] = ACTIONS(167),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(167),
    [anon_sym_BANGin] = ACTIONS(167),
    [anon_sym_PERCENT] = ACTIONS(167),
    [anon_sym_AMP_AMP] = ACTIONS(167),
    [anon_sym_STAR] = ACTIONS(167),
    [sym__not_is] = ACTIONS(167),
    [aux_sym__semi_token1] = ACTIONS(169),
  },
  [45] = {
    [sym_binary_expression] = STATE(88),
    [sym__lexical_identifier] = STATE(15),
    [sym__prefix_unary_operator] = STATE(24),
    [sym_annotation] = STATE(24),
    [sym_simple_identifier] = STATE(41),
    [sym__expression] = STATE(88),
    [sym_label] = STATE(24),
    [sym_unary_expression] = STATE(88),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_DASH_DASH] = ACTIONS(7),
    [aux_sym__lexical_identifier_token1] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(13),
    [aux_sym__lexical_identifier_token2] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(7),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_PLUS_PLUS] = ACTIONS(7),
  },
  [46] = {
    [sym__lexical_identifier] = STATE(189),
    [sym_simple_identifier] = STATE(89),
    [sym_annotation] = STATE(46),
    [sym_label] = STATE(46),
    [aux_sym__statement_repeat1] = STATE(46),
    [anon_sym_while] = ACTIONS(173),
    [anon_sym_interface] = ACTIONS(173),
    [anon_sym_DASH_DASH] = ACTIONS(175),
    [anon_sym_PLUS] = ACTIONS(173),
    [aux_sym__lexical_identifier_token2] = ACTIONS(177),
    [anon_sym_AT] = ACTIONS(180),
    [anon_sym_do] = ACTIONS(173),
    [anon_sym_PLUS_PLUS] = ACTIONS(175),
    [anon_sym_class] = ACTIONS(173),
    [anon_sym_fun] = ACTIONS(173),
    [anon_sym_DASH] = ACTIONS(173),
    [aux_sym__lexical_identifier_token1] = ACTIONS(183),
    [anon_sym_object] = ACTIONS(173),
    [anon_sym_BANG] = ACTIONS(175),
    [anon_sym_typealias] = ACTIONS(173),
    [anon_sym_STAR] = ACTIONS(175),
    [anon_sym_for] = ACTIONS(173),
  },
  [47] = {
    [anon_sym_RBRACE] = ACTIONS(186),
    [aux_sym__semi_token1] = ACTIONS(188),
  },
  [48] = {
    [sym__lexical_identifier] = STATE(206),
    [sym__additive_operator] = STATE(53),
    [sym__multiplicative_operator] = STATE(54),
    [sym__in_operator] = STATE(60),
    [sym__is_operator] = STATE(60),
    [sym__postfix_unary_operator] = STATE(57),
    [sym__equality_operator] = STATE(55),
    [sym__comparison_operator] = STATE(56),
    [sym__as_operator] = STATE(58),
    [sym__postfix_unary_suffix] = STATE(57),
    [sym_simple_identifier] = STATE(59),
    [anon_sym_GT] = ACTIONS(63),
    [aux_sym__lexical_identifier_token2] = ACTIONS(65),
    [anon_sym_LT_EQ] = ACTIONS(63),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(67),
    [anon_sym_BANG_BANG] = ACTIONS(69),
    [anon_sym_PLUS_PLUS] = ACTIONS(69),
    [anon_sym_RBRACE] = ACTIONS(186),
    [anon_sym_is] = ACTIONS(73),
    [anon_sym_as_QMARK] = ACTIONS(75),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_DOT_DOT] = ACTIONS(79),
    [anon_sym_in] = ACTIONS(73),
    [anon_sym_BANG_EQ] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(67),
    [anon_sym_DASH_DASH] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(77),
    [anon_sym_GT_EQ] = ACTIONS(63),
    [anon_sym_SLASH] = ACTIONS(81),
    [anon_sym_as] = ACTIONS(75),
    [anon_sym_QMARK_COLON] = ACTIONS(83),
    [anon_sym_PIPE_PIPE] = ACTIONS(85),
    [anon_sym_LT] = ACTIONS(63),
    [aux_sym__lexical_identifier_token1] = ACTIONS(65),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(67),
    [anon_sym_BANGin] = ACTIONS(73),
    [anon_sym_PERCENT] = ACTIONS(81),
    [anon_sym_AMP_AMP] = ACTIONS(87),
    [anon_sym_STAR] = ACTIONS(81),
    [sym__not_is] = ACTIONS(73),
    [aux_sym__semi_token1] = ACTIONS(188),
  },
  [49] = {
    [sym_binary_expression] = STATE(90),
    [sym__lexical_identifier] = STATE(15),
    [sym__prefix_unary_operator] = STATE(24),
    [sym_annotation] = STATE(24),
    [sym_simple_identifier] = STATE(41),
    [sym__expression] = STATE(90),
    [sym_label] = STATE(24),
    [sym_unary_expression] = STATE(90),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_DASH_DASH] = ACTIONS(7),
    [aux_sym__lexical_identifier_token1] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(13),
    [aux_sym__lexical_identifier_token2] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(7),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_PLUS_PLUS] = ACTIONS(7),
  },
  [50] = {
    [sym_binary_expression] = STATE(91),
    [sym__lexical_identifier] = STATE(15),
    [sym__prefix_unary_operator] = STATE(24),
    [sym_annotation] = STATE(24),
    [sym_simple_identifier] = STATE(41),
    [sym__expression] = STATE(91),
    [sym_label] = STATE(24),
    [sym_unary_expression] = STATE(91),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_DASH_DASH] = ACTIONS(7),
    [aux_sym__lexical_identifier_token1] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(13),
    [aux_sym__lexical_identifier_token2] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(7),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_PLUS_PLUS] = ACTIONS(7),
  },
  [51] = {
    [sym_binary_expression] = STATE(92),
    [sym__lexical_identifier] = STATE(15),
    [sym__prefix_unary_operator] = STATE(24),
    [sym_annotation] = STATE(24),
    [sym_simple_identifier] = STATE(41),
    [sym__expression] = STATE(92),
    [sym_label] = STATE(24),
    [sym_unary_expression] = STATE(92),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_DASH_DASH] = ACTIONS(7),
    [aux_sym__lexical_identifier_token1] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(13),
    [aux_sym__lexical_identifier_token2] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(7),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_PLUS_PLUS] = ACTIONS(7),
  },
  [52] = {
    [sym_binary_expression] = STATE(93),
    [sym__lexical_identifier] = STATE(15),
    [sym__prefix_unary_operator] = STATE(24),
    [sym_annotation] = STATE(24),
    [sym_simple_identifier] = STATE(41),
    [sym__expression] = STATE(93),
    [sym_label] = STATE(24),
    [sym_unary_expression] = STATE(93),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_DASH_DASH] = ACTIONS(7),
    [aux_sym__lexical_identifier_token1] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(13),
    [aux_sym__lexical_identifier_token2] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(7),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_PLUS_PLUS] = ACTIONS(7),
  },
  [53] = {
    [sym_binary_expression] = STATE(94),
    [sym__lexical_identifier] = STATE(15),
    [sym__prefix_unary_operator] = STATE(24),
    [sym_annotation] = STATE(24),
    [sym_simple_identifier] = STATE(41),
    [sym__expression] = STATE(94),
    [sym_label] = STATE(24),
    [sym_unary_expression] = STATE(94),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_DASH_DASH] = ACTIONS(7),
    [aux_sym__lexical_identifier_token1] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(13),
    [aux_sym__lexical_identifier_token2] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(7),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_PLUS_PLUS] = ACTIONS(7),
  },
  [54] = {
    [sym_binary_expression] = STATE(95),
    [sym__lexical_identifier] = STATE(15),
    [sym__prefix_unary_operator] = STATE(24),
    [sym_annotation] = STATE(24),
    [sym_simple_identifier] = STATE(41),
    [sym__expression] = STATE(95),
    [sym_label] = STATE(24),
    [sym_unary_expression] = STATE(95),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_DASH_DASH] = ACTIONS(7),
    [aux_sym__lexical_identifier_token1] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(13),
    [aux_sym__lexical_identifier_token2] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(7),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_PLUS_PLUS] = ACTIONS(7),
  },
  [55] = {
    [sym_binary_expression] = STATE(96),
    [sym__lexical_identifier] = STATE(15),
    [sym__prefix_unary_operator] = STATE(24),
    [sym_annotation] = STATE(24),
    [sym_simple_identifier] = STATE(41),
    [sym__expression] = STATE(96),
    [sym_label] = STATE(24),
    [sym_unary_expression] = STATE(96),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_DASH_DASH] = ACTIONS(7),
    [aux_sym__lexical_identifier_token1] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(13),
    [aux_sym__lexical_identifier_token2] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(7),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_PLUS_PLUS] = ACTIONS(7),
  },
  [56] = {
    [sym_binary_expression] = STATE(97),
    [sym__lexical_identifier] = STATE(15),
    [sym__prefix_unary_operator] = STATE(24),
    [sym_annotation] = STATE(24),
    [sym_simple_identifier] = STATE(41),
    [sym__expression] = STATE(97),
    [sym_label] = STATE(24),
    [sym_unary_expression] = STATE(97),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_DASH_DASH] = ACTIONS(7),
    [aux_sym__lexical_identifier_token1] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(13),
    [aux_sym__lexical_identifier_token2] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(7),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_PLUS_PLUS] = ACTIONS(7),
  },
  [57] = {
    [anon_sym_GT] = ACTIONS(167),
    [aux_sym__lexical_identifier_token2] = ACTIONS(167),
    [anon_sym_LT_EQ] = ACTIONS(167),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(167),
    [anon_sym_BANG_BANG] = ACTIONS(167),
    [anon_sym_PLUS_PLUS] = ACTIONS(167),
    [anon_sym_RBRACE] = ACTIONS(167),
    [anon_sym_is] = ACTIONS(167),
    [anon_sym_as_QMARK] = ACTIONS(167),
    [anon_sym_DASH] = ACTIONS(167),
    [anon_sym_DOT_DOT] = ACTIONS(167),
    [anon_sym_in] = ACTIONS(167),
    [anon_sym_BANG_EQ] = ACTIONS(167),
    [anon_sym_EQ_EQ] = ACTIONS(167),
    [anon_sym_DASH_DASH] = ACTIONS(167),
    [anon_sym_PLUS] = ACTIONS(167),
    [anon_sym_GT_EQ] = ACTIONS(167),
    [anon_sym_as] = ACTIONS(167),
    [anon_sym_QMARK_COLON] = ACTIONS(167),
    [anon_sym_SLASH] = ACTIONS(167),
    [anon_sym_PIPE_PIPE] = ACTIONS(167),
    [anon_sym_LT] = ACTIONS(167),
    [aux_sym__lexical_identifier_token1] = ACTIONS(167),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(167),
    [anon_sym_BANGin] = ACTIONS(167),
    [anon_sym_PERCENT] = ACTIONS(167),
    [anon_sym_AMP_AMP] = ACTIONS(167),
    [anon_sym_STAR] = ACTIONS(167),
    [sym__not_is] = ACTIONS(167),
    [aux_sym__semi_token1] = ACTIONS(169),
  },
  [58] = {
    [sym__lexical_identifier] = STATE(15),
    [sym_simple_identifier] = STATE(98),
    [sym__type] = STATE(98),
    [aux_sym__lexical_identifier_token1] = ACTIONS(15),
    [aux_sym__lexical_identifier_token2] = ACTIONS(15),
  },
  [59] = {
    [sym_binary_expression] = STATE(99),
    [sym__lexical_identifier] = STATE(15),
    [sym__prefix_unary_operator] = STATE(24),
    [sym_annotation] = STATE(24),
    [sym_simple_identifier] = STATE(41),
    [sym__expression] = STATE(99),
    [sym_label] = STATE(24),
    [sym_unary_expression] = STATE(99),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_DASH_DASH] = ACTIONS(7),
    [aux_sym__lexical_identifier_token1] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(13),
    [aux_sym__lexical_identifier_token2] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(7),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_PLUS_PLUS] = ACTIONS(7),
  },
  [60] = {
    [sym_binary_expression] = STATE(100),
    [sym__lexical_identifier] = STATE(15),
    [sym__prefix_unary_operator] = STATE(24),
    [sym_annotation] = STATE(24),
    [sym_simple_identifier] = STATE(41),
    [sym__expression] = STATE(100),
    [sym_label] = STATE(24),
    [sym_unary_expression] = STATE(100),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_DASH_DASH] = ACTIONS(7),
    [aux_sym__lexical_identifier_token1] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(13),
    [aux_sym__lexical_identifier_token2] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(7),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_PLUS_PLUS] = ACTIONS(7),
  },
  [61] = {
    [sym_binary_expression] = STATE(18),
    [sym__lexical_identifier] = STATE(15),
    [sym_import_header] = STATE(67),
    [sym_while_statement] = STATE(22),
    [sym_directly_assignable_expression] = STATE(16),
    [sym_do_while_statement] = STATE(22),
    [aux_sym__statement_repeat1] = STATE(17),
    [sym__loop_statement] = STATE(22),
    [sym_for_statement] = STATE(22),
    [sym_assignment] = STATE(22),
    [sym__expression] = STATE(18),
    [sym_unary_expression] = STATE(18),
    [sym__declaration] = STATE(22),
    [sym_class_declaration] = STATE(22),
    [aux_sym_source_file_repeat2] = STATE(101),
    [sym_object_declaration] = STATE(22),
    [sym_type_alias] = STATE(22),
    [sym_annotation] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(67),
    [sym__statement] = STATE(22),
    [sym__prefix_unary_operator] = STATE(24),
    [sym_function_declaration] = STATE(22),
    [sym_simple_identifier] = STATE(25),
    [sym_label] = STATE(14),
    [anon_sym_while] = ACTIONS(3),
    [anon_sym_interface] = ACTIONS(5),
    [anon_sym_DASH_DASH] = ACTIONS(7),
    [anon_sym_import] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(13),
    [aux_sym__lexical_identifier_token2] = ACTIONS(15),
    [anon_sym_AT] = ACTIONS(17),
    [anon_sym_do] = ACTIONS(19),
    [anon_sym_PLUS_PLUS] = ACTIONS(7),
    [anon_sym_class] = ACTIONS(5),
    [anon_sym_fun] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym__lexical_identifier_token1] = ACTIONS(25),
    [ts_builtin_sym_end] = ACTIONS(190),
    [anon_sym_object] = ACTIONS(29),
    [anon_sym_BANG] = ACTIONS(7),
    [anon_sym_typealias] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
  },
  [62] = {
    [sym_binary_expression] = STATE(18),
    [sym__lexical_identifier] = STATE(15),
    [sym_import_header] = STATE(102),
    [sym_while_statement] = STATE(22),
    [sym_directly_assignable_expression] = STATE(16),
    [sym_do_while_statement] = STATE(22),
    [aux_sym__statement_repeat1] = STATE(17),
    [sym__loop_statement] = STATE(22),
    [sym_for_statement] = STATE(22),
    [sym_assignment] = STATE(22),
    [sym__expression] = STATE(18),
    [sym_unary_expression] = STATE(18),
    [sym__declaration] = STATE(22),
    [sym_class_declaration] = STATE(22),
    [aux_sym_source_file_repeat2] = STATE(101),
    [sym_object_declaration] = STATE(22),
    [sym_type_alias] = STATE(22),
    [sym_annotation] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(102),
    [sym__statement] = STATE(22),
    [sym__prefix_unary_operator] = STATE(24),
    [sym_function_declaration] = STATE(22),
    [sym_simple_identifier] = STATE(25),
    [sym_label] = STATE(14),
    [anon_sym_while] = ACTIONS(3),
    [anon_sym_interface] = ACTIONS(5),
    [anon_sym_DASH_DASH] = ACTIONS(7),
    [anon_sym_import] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(13),
    [aux_sym__lexical_identifier_token2] = ACTIONS(15),
    [anon_sym_AT] = ACTIONS(17),
    [anon_sym_do] = ACTIONS(19),
    [anon_sym_PLUS_PLUS] = ACTIONS(7),
    [anon_sym_class] = ACTIONS(5),
    [anon_sym_fun] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym__lexical_identifier_token1] = ACTIONS(25),
    [ts_builtin_sym_end] = ACTIONS(190),
    [anon_sym_object] = ACTIONS(29),
    [anon_sym_BANG] = ACTIONS(7),
    [anon_sym_typealias] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
  },
  [63] = {
    [sym_binary_expression] = STATE(18),
    [sym__lexical_identifier] = STATE(15),
    [sym_do_while_statement] = STATE(22),
    [sym_unary_expression] = STATE(18),
    [sym_directly_assignable_expression] = STATE(16),
    [aux_sym__statement_repeat1] = STATE(17),
    [sym__loop_statement] = STATE(22),
    [sym_for_statement] = STATE(22),
    [sym_assignment] = STATE(22),
    [sym__expression] = STATE(18),
    [sym__declaration] = STATE(22),
    [sym_class_declaration] = STATE(22),
    [aux_sym_source_file_repeat2] = STATE(64),
    [sym_object_declaration] = STATE(22),
    [sym_type_alias] = STATE(22),
    [sym_annotation] = STATE(14),
    [sym__prefix_unary_operator] = STATE(24),
    [sym__statement] = STATE(22),
    [sym_function_declaration] = STATE(22),
    [sym_simple_identifier] = STATE(25),
    [sym_label] = STATE(14),
    [sym_while_statement] = STATE(22),
    [anon_sym_while] = ACTIONS(3),
    [anon_sym_interface] = ACTIONS(5),
    [anon_sym_DASH_DASH] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(13),
    [aux_sym__lexical_identifier_token2] = ACTIONS(15),
    [anon_sym_AT] = ACTIONS(17),
    [anon_sym_do] = ACTIONS(19),
    [anon_sym_PLUS_PLUS] = ACTIONS(7),
    [anon_sym_class] = ACTIONS(5),
    [anon_sym_fun] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym__lexical_identifier_token1] = ACTIONS(25),
    [ts_builtin_sym_end] = ACTIONS(190),
    [anon_sym_object] = ACTIONS(29),
    [anon_sym_BANG] = ACTIONS(7),
    [anon_sym_typealias] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
  },
  [64] = {
    [sym_binary_expression] = STATE(18),
    [sym__lexical_identifier] = STATE(15),
    [sym_do_while_statement] = STATE(22),
    [sym_unary_expression] = STATE(18),
    [sym_directly_assignable_expression] = STATE(16),
    [aux_sym__statement_repeat1] = STATE(17),
    [sym__loop_statement] = STATE(22),
    [sym_for_statement] = STATE(22),
    [sym_assignment] = STATE(22),
    [sym__expression] = STATE(18),
    [sym__declaration] = STATE(22),
    [sym_class_declaration] = STATE(22),
    [aux_sym_source_file_repeat2] = STATE(64),
    [sym_object_declaration] = STATE(22),
    [sym_type_alias] = STATE(22),
    [sym_annotation] = STATE(14),
    [sym__prefix_unary_operator] = STATE(24),
    [sym__statement] = STATE(22),
    [sym_function_declaration] = STATE(22),
    [sym_simple_identifier] = STATE(25),
    [sym_label] = STATE(14),
    [sym_while_statement] = STATE(22),
    [anon_sym_while] = ACTIONS(192),
    [anon_sym_interface] = ACTIONS(195),
    [anon_sym_DASH_DASH] = ACTIONS(198),
    [anon_sym_PLUS] = ACTIONS(201),
    [aux_sym__lexical_identifier_token2] = ACTIONS(204),
    [anon_sym_AT] = ACTIONS(207),
    [anon_sym_do] = ACTIONS(210),
    [anon_sym_PLUS_PLUS] = ACTIONS(198),
    [anon_sym_class] = ACTIONS(195),
    [anon_sym_fun] = ACTIONS(213),
    [anon_sym_DASH] = ACTIONS(201),
    [aux_sym__lexical_identifier_token1] = ACTIONS(216),
    [ts_builtin_sym_end] = ACTIONS(219),
    [anon_sym_object] = ACTIONS(221),
    [anon_sym_BANG] = ACTIONS(198),
    [anon_sym_typealias] = ACTIONS(224),
    [anon_sym_STAR] = ACTIONS(227),
    [anon_sym_for] = ACTIONS(230),
  },
  [65] = {
    [anon_sym_while] = ACTIONS(233),
    [anon_sym_interface] = ACTIONS(233),
    [anon_sym_DASH_DASH] = ACTIONS(219),
    [anon_sym_PLUS] = ACTIONS(233),
    [aux_sym__lexical_identifier_token2] = ACTIONS(219),
    [anon_sym_AT] = ACTIONS(219),
    [anon_sym_do] = ACTIONS(233),
    [anon_sym_PLUS_PLUS] = ACTIONS(219),
    [anon_sym_class] = ACTIONS(233),
    [anon_sym_fun] = ACTIONS(233),
    [anon_sym_DASH] = ACTIONS(233),
    [aux_sym__lexical_identifier_token1] = ACTIONS(233),
    [ts_builtin_sym_end] = ACTIONS(219),
    [anon_sym_object] = ACTIONS(233),
    [anon_sym_BANG] = ACTIONS(219),
    [anon_sym_typealias] = ACTIONS(233),
    [anon_sym_STAR] = ACTIONS(219),
    [anon_sym_for] = ACTIONS(233),
  },
  [66] = {
    [anon_sym_while] = ACTIONS(235),
    [anon_sym_interface] = ACTIONS(235),
    [anon_sym_DASH_DASH] = ACTIONS(237),
    [anon_sym_PLUS] = ACTIONS(235),
    [aux_sym__lexical_identifier_token2] = ACTIONS(237),
    [anon_sym_AT] = ACTIONS(237),
    [anon_sym_do] = ACTIONS(235),
    [anon_sym_PLUS_PLUS] = ACTIONS(237),
    [anon_sym_class] = ACTIONS(235),
    [anon_sym_fun] = ACTIONS(235),
    [anon_sym_DASH] = ACTIONS(235),
    [aux_sym__lexical_identifier_token1] = ACTIONS(235),
    [anon_sym_object] = ACTIONS(235),
    [anon_sym_BANG] = ACTIONS(237),
    [anon_sym_typealias] = ACTIONS(235),
    [anon_sym_STAR] = ACTIONS(237),
    [anon_sym_for] = ACTIONS(235),
  },
  [67] = {
    [sym_import_header] = STATE(67),
    [aux_sym_source_file_repeat1] = STATE(67),
    [anon_sym_while] = ACTIONS(239),
    [anon_sym_interface] = ACTIONS(239),
    [anon_sym_DASH_DASH] = ACTIONS(241),
    [anon_sym_import] = ACTIONS(243),
    [anon_sym_PLUS] = ACTIONS(239),
    [aux_sym__lexical_identifier_token2] = ACTIONS(241),
    [anon_sym_AT] = ACTIONS(241),
    [anon_sym_do] = ACTIONS(239),
    [anon_sym_PLUS_PLUS] = ACTIONS(241),
    [anon_sym_class] = ACTIONS(239),
    [anon_sym_fun] = ACTIONS(239),
    [anon_sym_DASH] = ACTIONS(239),
    [aux_sym__lexical_identifier_token1] = ACTIONS(239),
    [ts_builtin_sym_end] = ACTIONS(241),
    [anon_sym_object] = ACTIONS(239),
    [anon_sym_BANG] = ACTIONS(241),
    [anon_sym_typealias] = ACTIONS(239),
    [anon_sym_STAR] = ACTIONS(241),
    [anon_sym_for] = ACTIONS(239),
  },
  [68] = {
    [sym__lexical_identifier] = STATE(206),
    [sym__additive_operator] = STATE(161),
    [sym__multiplicative_operator] = STATE(162),
    [sym__in_operator] = STATE(168),
    [sym__is_operator] = STATE(168),
    [sym__postfix_unary_operator] = STATE(165),
    [sym__equality_operator] = STATE(163),
    [sym__comparison_operator] = STATE(164),
    [sym__as_operator] = STATE(166),
    [sym__postfix_unary_suffix] = STATE(165),
    [sym_simple_identifier] = STATE(167),
    [anon_sym_GT] = ACTIONS(246),
    [aux_sym__lexical_identifier_token2] = ACTIONS(248),
    [anon_sym_LT_EQ] = ACTIONS(250),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(252),
    [anon_sym_BANG_BANG] = ACTIONS(254),
    [anon_sym_PLUS_PLUS] = ACTIONS(254),
    [anon_sym_is] = ACTIONS(256),
    [anon_sym_as_QMARK] = ACTIONS(258),
    [anon_sym_DASH] = ACTIONS(260),
    [anon_sym_DOT_DOT] = ACTIONS(262),
    [anon_sym_in] = ACTIONS(256),
    [anon_sym_BANG_EQ] = ACTIONS(264),
    [anon_sym_EQ_EQ] = ACTIONS(264),
    [anon_sym_DASH_DASH] = ACTIONS(254),
    [anon_sym_PLUS] = ACTIONS(260),
    [anon_sym_GT_EQ] = ACTIONS(250),
    [anon_sym_SLASH] = ACTIONS(266),
    [anon_sym_as] = ACTIONS(268),
    [anon_sym_QMARK_COLON] = ACTIONS(270),
    [anon_sym_PIPE_PIPE] = ACTIONS(272),
    [anon_sym_LT] = ACTIONS(246),
    [aux_sym__lexical_identifier_token1] = ACTIONS(65),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(252),
    [anon_sym_RPAREN] = ACTIONS(274),
    [anon_sym_BANGin] = ACTIONS(276),
    [anon_sym_PERCENT] = ACTIONS(266),
    [anon_sym_AMP_AMP] = ACTIONS(278),
    [anon_sym_STAR] = ACTIONS(266),
    [sym__not_is] = ACTIONS(276),
  },
  [69] = {
    [sym_object_declaration] = STATE(107),
    [aux_sym_class_member_declarations_repeat1] = STATE(105),
    [sym_class_member_declarations] = STATE(106),
    [sym_type_alias] = STATE(107),
    [sym_function_declaration] = STATE(107),
    [sym__declaration] = STATE(107),
    [sym_class_declaration] = STATE(107),
    [anon_sym_interface] = ACTIONS(280),
    [anon_sym_object] = ACTIONS(282),
    [anon_sym_typealias] = ACTIONS(284),
    [anon_sym_RBRACE] = ACTIONS(286),
    [anon_sym_class] = ACTIONS(280),
    [anon_sym_fun] = ACTIONS(288),
  },
  [70] = {
    [anon_sym_interface] = ACTIONS(290),
    [anon_sym_typealias] = ACTIONS(290),
    [anon_sym_RBRACE] = ACTIONS(290),
    [anon_sym_class] = ACTIONS(290),
    [anon_sym_fun] = ACTIONS(290),
    [anon_sym_object] = ACTIONS(290),
    [aux_sym__semi_token1] = ACTIONS(292),
  },
  [71] = {
    [sym__lexical_identifier] = STATE(149),
    [sym_simple_identifier] = STATE(108),
    [aux_sym__lexical_identifier_token1] = ACTIONS(39),
    [aux_sym__lexical_identifier_token2] = ACTIONS(39),
  },
  [72] = {
    [aux_sym_identifier_repeat1] = STATE(109),
    [anon_sym_while] = ACTIONS(294),
    [anon_sym_interface] = ACTIONS(294),
    [anon_sym_DASH_DASH] = ACTIONS(294),
    [anon_sym_import] = ACTIONS(294),
    [anon_sym_PLUS] = ACTIONS(294),
    [anon_sym_as] = ACTIONS(294),
    [aux_sym__lexical_identifier_token2] = ACTIONS(294),
    [anon_sym_DOT] = ACTIONS(121),
    [anon_sym_AT] = ACTIONS(294),
    [anon_sym_do] = ACTIONS(294),
    [anon_sym_class] = ACTIONS(294),
    [anon_sym_fun] = ACTIONS(294),
    [anon_sym_PLUS_PLUS] = ACTIONS(294),
    [anon_sym_DOT_STAR] = ACTIONS(294),
    [anon_sym_DASH] = ACTIONS(294),
    [aux_sym__lexical_identifier_token1] = ACTIONS(294),
    [ts_builtin_sym_end] = ACTIONS(296),
    [anon_sym_object] = ACTIONS(294),
    [anon_sym_BANG] = ACTIONS(294),
    [anon_sym_typealias] = ACTIONS(294),
    [anon_sym_STAR] = ACTIONS(294),
    [anon_sym_for] = ACTIONS(294),
    [aux_sym__semi_token1] = ACTIONS(296),
  },
  [73] = {
    [sym__semi] = STATE(110),
    [anon_sym_while] = ACTIONS(298),
    [anon_sym_interface] = ACTIONS(298),
    [anon_sym_DASH_DASH] = ACTIONS(298),
    [anon_sym_import] = ACTIONS(298),
    [anon_sym_PLUS] = ACTIONS(298),
    [aux_sym__lexical_identifier_token2] = ACTIONS(298),
    [anon_sym_AT] = ACTIONS(298),
    [anon_sym_do] = ACTIONS(298),
    [anon_sym_PLUS_PLUS] = ACTIONS(298),
    [anon_sym_class] = ACTIONS(298),
    [anon_sym_fun] = ACTIONS(298),
    [anon_sym_DASH] = ACTIONS(298),
    [aux_sym__lexical_identifier_token1] = ACTIONS(298),
    [ts_builtin_sym_end] = ACTIONS(300),
    [anon_sym_object] = ACTIONS(298),
    [anon_sym_BANG] = ACTIONS(298),
    [anon_sym_typealias] = ACTIONS(298),
    [anon_sym_STAR] = ACTIONS(298),
    [anon_sym_for] = ACTIONS(298),
    [aux_sym__semi_token1] = ACTIONS(302),
  },
  [74] = {
    [sym__lexical_identifier] = STATE(205),
    [sym_simple_identifier] = STATE(111),
    [aux_sym__lexical_identifier_token1] = ACTIONS(49),
    [aux_sym__lexical_identifier_token2] = ACTIONS(49),
  },
  [75] = {
    [anon_sym_while] = ACTIONS(298),
    [anon_sym_interface] = ACTIONS(298),
    [anon_sym_DASH_DASH] = ACTIONS(300),
    [anon_sym_import] = ACTIONS(298),
    [anon_sym_PLUS] = ACTIONS(298),
    [aux_sym__lexical_identifier_token2] = ACTIONS(300),
    [anon_sym_AT] = ACTIONS(300),
    [anon_sym_do] = ACTIONS(298),
    [anon_sym_PLUS_PLUS] = ACTIONS(300),
    [anon_sym_class] = ACTIONS(298),
    [anon_sym_fun] = ACTIONS(298),
    [anon_sym_DASH] = ACTIONS(298),
    [aux_sym__lexical_identifier_token1] = ACTIONS(298),
    [ts_builtin_sym_end] = ACTIONS(300),
    [anon_sym_object] = ACTIONS(298),
    [anon_sym_BANG] = ACTIONS(300),
    [anon_sym_typealias] = ACTIONS(298),
    [anon_sym_STAR] = ACTIONS(300),
    [anon_sym_for] = ACTIONS(298),
  },
  [76] = {
    [sym_binary_expression] = STATE(112),
    [sym__lexical_identifier] = STATE(207),
    [sym__prefix_unary_operator] = STATE(150),
    [sym_annotation] = STATE(150),
    [sym_simple_identifier] = STATE(154),
    [sym__expression] = STATE(112),
    [sym_label] = STATE(150),
    [sym_unary_expression] = STATE(112),
    [anon_sym_DASH] = ACTIONS(105),
    [anon_sym_DASH_DASH] = ACTIONS(107),
    [aux_sym__lexical_identifier_token1] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(105),
    [aux_sym__lexical_identifier_token2] = ACTIONS(109),
    [anon_sym_BANG] = ACTIONS(107),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(111),
    [anon_sym_PLUS_PLUS] = ACTIONS(107),
  },
  [77] = {
    [anon_sym_while] = ACTIONS(304),
  },
  [78] = {
    [anon_sym_RBRACE] = ACTIONS(306),
  },
  [79] = {
    [sym__semis] = STATE(114),
    [aux_sym_statements_repeat1] = STATE(115),
    [aux_sym__semi_token1] = ACTIONS(308),
    [anon_sym_RBRACE] = ACTIONS(310),
  },
  [80] = {
    [anon_sym_LPAREN] = ACTIONS(312),
  },
  [81] = {
    [anon_sym_RPAREN] = ACTIONS(314),
  },
  [82] = {
    [anon_sym_while] = ACTIONS(316),
    [anon_sym_interface] = ACTIONS(316),
    [anon_sym_DASH_DASH] = ACTIONS(318),
    [anon_sym_import] = ACTIONS(316),
    [anon_sym_PLUS] = ACTIONS(316),
    [aux_sym__lexical_identifier_token2] = ACTIONS(318),
    [anon_sym_AT] = ACTIONS(318),
    [anon_sym_do] = ACTIONS(316),
    [anon_sym_PLUS_PLUS] = ACTIONS(318),
    [anon_sym_class] = ACTIONS(316),
    [anon_sym_fun] = ACTIONS(316),
    [anon_sym_DASH] = ACTIONS(316),
    [aux_sym__lexical_identifier_token1] = ACTIONS(316),
    [ts_builtin_sym_end] = ACTIONS(318),
    [anon_sym_object] = ACTIONS(316),
    [anon_sym_BANG] = ACTIONS(318),
    [anon_sym_typealias] = ACTIONS(316),
    [anon_sym_STAR] = ACTIONS(318),
    [anon_sym_for] = ACTIONS(316),
  },
  [83] = {
    [anon_sym_interface] = ACTIONS(320),
    [anon_sym_typealias] = ACTIONS(320),
    [anon_sym_RBRACE] = ACTIONS(320),
    [anon_sym_class] = ACTIONS(320),
    [anon_sym_fun] = ACTIONS(320),
    [anon_sym_object] = ACTIONS(320),
    [aux_sym__semi_token1] = ACTIONS(322),
  },
  [84] = {
    [sym__lexical_identifier] = STATE(15),
    [sym_simple_identifier] = STATE(118),
    [sym__type] = STATE(118),
    [aux_sym__lexical_identifier_token1] = ACTIONS(15),
    [aux_sym__lexical_identifier_token2] = ACTIONS(15),
  },
  [85] = {
    [anon_sym_COLON] = ACTIONS(324),
    [anon_sym_in] = ACTIONS(326),
  },
  [86] = {
    [sym__lexical_identifier] = STATE(208),
    [sym_annotation] = STATE(120),
    [sym_simple_identifier] = STATE(85),
    [aux_sym_for_statement_repeat1] = STATE(120),
    [sym_variable_declaration] = STATE(121),
    [aux_sym__lexical_identifier_token1] = ACTIONS(171),
    [anon_sym_AT] = ACTIONS(51),
    [aux_sym__lexical_identifier_token2] = ACTIONS(171),
  },
  [87] = {
    [anon_sym_in] = ACTIONS(328),
  },
  [88] = {
    [sym__lexical_identifier] = STATE(206),
    [sym__additive_operator] = STATE(53),
    [sym__multiplicative_operator] = STATE(54),
    [sym__in_operator] = STATE(60),
    [sym__is_operator] = STATE(60),
    [sym__postfix_unary_operator] = STATE(57),
    [sym__equality_operator] = STATE(55),
    [sym__comparison_operator] = STATE(56),
    [sym__as_operator] = STATE(58),
    [sym__postfix_unary_suffix] = STATE(57),
    [sym_simple_identifier] = STATE(59),
    [anon_sym_GT] = ACTIONS(63),
    [aux_sym__lexical_identifier_token2] = ACTIONS(65),
    [anon_sym_LT_EQ] = ACTIONS(63),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(67),
    [anon_sym_BANG_BANG] = ACTIONS(69),
    [anon_sym_PLUS_PLUS] = ACTIONS(69),
    [anon_sym_RBRACE] = ACTIONS(330),
    [anon_sym_is] = ACTIONS(73),
    [anon_sym_as_QMARK] = ACTIONS(75),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_DOT_DOT] = ACTIONS(79),
    [anon_sym_in] = ACTIONS(73),
    [anon_sym_BANG_EQ] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(67),
    [anon_sym_DASH_DASH] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(77),
    [anon_sym_GT_EQ] = ACTIONS(63),
    [anon_sym_SLASH] = ACTIONS(81),
    [anon_sym_as] = ACTIONS(75),
    [anon_sym_QMARK_COLON] = ACTIONS(83),
    [anon_sym_PIPE_PIPE] = ACTIONS(85),
    [anon_sym_LT] = ACTIONS(63),
    [aux_sym__lexical_identifier_token1] = ACTIONS(65),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(67),
    [anon_sym_BANGin] = ACTIONS(73),
    [anon_sym_PERCENT] = ACTIONS(81),
    [anon_sym_AMP_AMP] = ACTIONS(87),
    [anon_sym_STAR] = ACTIONS(81),
    [sym__not_is] = ACTIONS(73),
    [aux_sym__semi_token1] = ACTIONS(332),
  },
  [89] = {
    [anon_sym_AT] = ACTIONS(334),
  },
  [90] = {
    [sym__lexical_identifier] = STATE(206),
    [sym__additive_operator] = STATE(53),
    [sym__multiplicative_operator] = STATE(54),
    [sym__in_operator] = STATE(60),
    [sym__is_operator] = STATE(60),
    [sym__postfix_unary_operator] = STATE(57),
    [sym__equality_operator] = STATE(55),
    [sym__comparison_operator] = STATE(56),
    [sym__as_operator] = STATE(58),
    [sym__postfix_unary_suffix] = STATE(57),
    [sym_simple_identifier] = STATE(59),
    [anon_sym_GT] = ACTIONS(63),
    [aux_sym__lexical_identifier_token2] = ACTIONS(65),
    [anon_sym_LT_EQ] = ACTIONS(63),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(67),
    [anon_sym_BANG_BANG] = ACTIONS(69),
    [anon_sym_PLUS_PLUS] = ACTIONS(69),
    [anon_sym_RBRACE] = ACTIONS(336),
    [anon_sym_is] = ACTIONS(73),
    [anon_sym_as_QMARK] = ACTIONS(75),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_DOT_DOT] = ACTIONS(79),
    [anon_sym_in] = ACTIONS(73),
    [anon_sym_BANG_EQ] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(67),
    [anon_sym_DASH_DASH] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(77),
    [anon_sym_GT_EQ] = ACTIONS(63),
    [anon_sym_as] = ACTIONS(75),
    [anon_sym_QMARK_COLON] = ACTIONS(83),
    [anon_sym_SLASH] = ACTIONS(81),
    [anon_sym_PIPE_PIPE] = ACTIONS(336),
    [anon_sym_LT] = ACTIONS(63),
    [aux_sym__lexical_identifier_token1] = ACTIONS(65),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(67),
    [anon_sym_BANGin] = ACTIONS(73),
    [anon_sym_PERCENT] = ACTIONS(81),
    [anon_sym_AMP_AMP] = ACTIONS(87),
    [anon_sym_STAR] = ACTIONS(81),
    [sym__not_is] = ACTIONS(73),
    [aux_sym__semi_token1] = ACTIONS(338),
  },
  [91] = {
    [sym__lexical_identifier] = STATE(206),
    [sym__additive_operator] = STATE(53),
    [sym__multiplicative_operator] = STATE(54),
    [sym__in_operator] = STATE(60),
    [sym__is_operator] = STATE(60),
    [sym__postfix_unary_operator] = STATE(57),
    [sym__equality_operator] = STATE(55),
    [sym__comparison_operator] = STATE(56),
    [sym__as_operator] = STATE(58),
    [sym__postfix_unary_suffix] = STATE(57),
    [sym_simple_identifier] = STATE(59),
    [anon_sym_GT] = ACTIONS(336),
    [aux_sym__lexical_identifier_token2] = ACTIONS(65),
    [anon_sym_LT_EQ] = ACTIONS(336),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(336),
    [anon_sym_BANG_BANG] = ACTIONS(69),
    [anon_sym_PLUS_PLUS] = ACTIONS(69),
    [anon_sym_RBRACE] = ACTIONS(336),
    [anon_sym_is] = ACTIONS(336),
    [anon_sym_as_QMARK] = ACTIONS(75),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_DOT_DOT] = ACTIONS(79),
    [anon_sym_in] = ACTIONS(336),
    [anon_sym_BANG_EQ] = ACTIONS(336),
    [anon_sym_EQ_EQ] = ACTIONS(336),
    [anon_sym_DASH_DASH] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(77),
    [anon_sym_GT_EQ] = ACTIONS(336),
    [anon_sym_as] = ACTIONS(75),
    [anon_sym_QMARK_COLON] = ACTIONS(336),
    [anon_sym_SLASH] = ACTIONS(81),
    [anon_sym_PIPE_PIPE] = ACTIONS(336),
    [anon_sym_LT] = ACTIONS(336),
    [aux_sym__lexical_identifier_token1] = ACTIONS(65),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(336),
    [anon_sym_BANGin] = ACTIONS(336),
    [anon_sym_PERCENT] = ACTIONS(81),
    [anon_sym_AMP_AMP] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(81),
    [sym__not_is] = ACTIONS(336),
    [aux_sym__semi_token1] = ACTIONS(338),
  },
  [92] = {
    [sym__lexical_identifier] = STATE(206),
    [sym__additive_operator] = STATE(53),
    [sym__multiplicative_operator] = STATE(54),
    [sym__in_operator] = STATE(60),
    [sym__is_operator] = STATE(60),
    [sym__postfix_unary_operator] = STATE(57),
    [sym__equality_operator] = STATE(55),
    [sym__comparison_operator] = STATE(56),
    [sym__as_operator] = STATE(58),
    [sym__postfix_unary_suffix] = STATE(57),
    [sym_simple_identifier] = STATE(59),
    [anon_sym_GT] = ACTIONS(336),
    [aux_sym__lexical_identifier_token2] = ACTIONS(336),
    [anon_sym_LT_EQ] = ACTIONS(336),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(336),
    [anon_sym_BANG_BANG] = ACTIONS(69),
    [anon_sym_PLUS_PLUS] = ACTIONS(69),
    [anon_sym_RBRACE] = ACTIONS(336),
    [anon_sym_is] = ACTIONS(336),
    [anon_sym_as_QMARK] = ACTIONS(75),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_DOT_DOT] = ACTIONS(336),
    [anon_sym_in] = ACTIONS(336),
    [anon_sym_BANG_EQ] = ACTIONS(336),
    [anon_sym_EQ_EQ] = ACTIONS(336),
    [anon_sym_DASH_DASH] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(77),
    [anon_sym_GT_EQ] = ACTIONS(336),
    [anon_sym_as] = ACTIONS(75),
    [anon_sym_QMARK_COLON] = ACTIONS(336),
    [anon_sym_SLASH] = ACTIONS(81),
    [anon_sym_PIPE_PIPE] = ACTIONS(336),
    [anon_sym_LT] = ACTIONS(336),
    [aux_sym__lexical_identifier_token1] = ACTIONS(336),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(336),
    [anon_sym_BANGin] = ACTIONS(336),
    [anon_sym_PERCENT] = ACTIONS(81),
    [anon_sym_AMP_AMP] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(81),
    [sym__not_is] = ACTIONS(336),
    [aux_sym__semi_token1] = ACTIONS(338),
  },
  [93] = {
    [sym__lexical_identifier] = STATE(206),
    [sym__additive_operator] = STATE(53),
    [sym__multiplicative_operator] = STATE(54),
    [sym__in_operator] = STATE(60),
    [sym__is_operator] = STATE(60),
    [sym__postfix_unary_operator] = STATE(57),
    [sym__equality_operator] = STATE(55),
    [sym__comparison_operator] = STATE(56),
    [sym__as_operator] = STATE(58),
    [sym__postfix_unary_suffix] = STATE(57),
    [sym_simple_identifier] = STATE(59),
    [anon_sym_GT] = ACTIONS(63),
    [aux_sym__lexical_identifier_token2] = ACTIONS(65),
    [anon_sym_LT_EQ] = ACTIONS(63),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(67),
    [anon_sym_BANG_BANG] = ACTIONS(69),
    [anon_sym_PLUS_PLUS] = ACTIONS(69),
    [anon_sym_RBRACE] = ACTIONS(336),
    [anon_sym_is] = ACTIONS(73),
    [anon_sym_as_QMARK] = ACTIONS(75),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_DOT_DOT] = ACTIONS(79),
    [anon_sym_in] = ACTIONS(73),
    [anon_sym_BANG_EQ] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(67),
    [anon_sym_DASH_DASH] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(77),
    [anon_sym_GT_EQ] = ACTIONS(63),
    [anon_sym_as] = ACTIONS(75),
    [anon_sym_QMARK_COLON] = ACTIONS(83),
    [anon_sym_SLASH] = ACTIONS(81),
    [anon_sym_PIPE_PIPE] = ACTIONS(336),
    [anon_sym_LT] = ACTIONS(63),
    [aux_sym__lexical_identifier_token1] = ACTIONS(65),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(67),
    [anon_sym_BANGin] = ACTIONS(73),
    [anon_sym_PERCENT] = ACTIONS(81),
    [anon_sym_AMP_AMP] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(81),
    [sym__not_is] = ACTIONS(73),
    [aux_sym__semi_token1] = ACTIONS(338),
  },
  [94] = {
    [sym__lexical_identifier] = STATE(206),
    [sym__additive_operator] = STATE(53),
    [sym__multiplicative_operator] = STATE(54),
    [sym__in_operator] = STATE(60),
    [sym__is_operator] = STATE(60),
    [sym__postfix_unary_operator] = STATE(57),
    [sym__equality_operator] = STATE(55),
    [sym__comparison_operator] = STATE(56),
    [sym__as_operator] = STATE(58),
    [sym__postfix_unary_suffix] = STATE(57),
    [sym_simple_identifier] = STATE(59),
    [anon_sym_GT] = ACTIONS(336),
    [aux_sym__lexical_identifier_token2] = ACTIONS(336),
    [anon_sym_LT_EQ] = ACTIONS(336),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(336),
    [anon_sym_BANG_BANG] = ACTIONS(69),
    [anon_sym_PLUS_PLUS] = ACTIONS(69),
    [anon_sym_RBRACE] = ACTIONS(336),
    [anon_sym_is] = ACTIONS(336),
    [anon_sym_as_QMARK] = ACTIONS(75),
    [anon_sym_DASH] = ACTIONS(336),
    [anon_sym_DOT_DOT] = ACTIONS(336),
    [anon_sym_in] = ACTIONS(336),
    [anon_sym_BANG_EQ] = ACTIONS(336),
    [anon_sym_EQ_EQ] = ACTIONS(336),
    [anon_sym_DASH_DASH] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(336),
    [anon_sym_GT_EQ] = ACTIONS(336),
    [anon_sym_as] = ACTIONS(75),
    [anon_sym_QMARK_COLON] = ACTIONS(336),
    [anon_sym_SLASH] = ACTIONS(81),
    [anon_sym_PIPE_PIPE] = ACTIONS(336),
    [anon_sym_LT] = ACTIONS(336),
    [aux_sym__lexical_identifier_token1] = ACTIONS(336),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(336),
    [anon_sym_BANGin] = ACTIONS(336),
    [anon_sym_PERCENT] = ACTIONS(81),
    [anon_sym_AMP_AMP] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(81),
    [sym__not_is] = ACTIONS(336),
    [aux_sym__semi_token1] = ACTIONS(338),
  },
  [95] = {
    [sym__lexical_identifier] = STATE(206),
    [sym__additive_operator] = STATE(53),
    [sym__multiplicative_operator] = STATE(54),
    [sym__in_operator] = STATE(60),
    [sym__is_operator] = STATE(60),
    [sym__postfix_unary_operator] = STATE(57),
    [sym__equality_operator] = STATE(55),
    [sym__comparison_operator] = STATE(56),
    [sym__as_operator] = STATE(58),
    [sym__postfix_unary_suffix] = STATE(57),
    [sym_simple_identifier] = STATE(59),
    [anon_sym_GT] = ACTIONS(336),
    [aux_sym__lexical_identifier_token2] = ACTIONS(336),
    [anon_sym_LT_EQ] = ACTIONS(336),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(336),
    [anon_sym_BANG_BANG] = ACTIONS(69),
    [anon_sym_PLUS_PLUS] = ACTIONS(69),
    [anon_sym_RBRACE] = ACTIONS(336),
    [anon_sym_is] = ACTIONS(336),
    [anon_sym_as_QMARK] = ACTIONS(75),
    [anon_sym_DASH] = ACTIONS(336),
    [anon_sym_DOT_DOT] = ACTIONS(336),
    [anon_sym_in] = ACTIONS(336),
    [anon_sym_BANG_EQ] = ACTIONS(336),
    [anon_sym_EQ_EQ] = ACTIONS(336),
    [anon_sym_DASH_DASH] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(336),
    [anon_sym_GT_EQ] = ACTIONS(336),
    [anon_sym_as] = ACTIONS(75),
    [anon_sym_QMARK_COLON] = ACTIONS(336),
    [anon_sym_SLASH] = ACTIONS(336),
    [anon_sym_PIPE_PIPE] = ACTIONS(336),
    [anon_sym_LT] = ACTIONS(336),
    [aux_sym__lexical_identifier_token1] = ACTIONS(336),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(336),
    [anon_sym_BANGin] = ACTIONS(336),
    [anon_sym_PERCENT] = ACTIONS(336),
    [anon_sym_AMP_AMP] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(336),
    [sym__not_is] = ACTIONS(336),
    [aux_sym__semi_token1] = ACTIONS(338),
  },
  [96] = {
    [sym__lexical_identifier] = STATE(206),
    [sym__additive_operator] = STATE(53),
    [sym__multiplicative_operator] = STATE(54),
    [sym__in_operator] = STATE(60),
    [sym__is_operator] = STATE(60),
    [sym__postfix_unary_operator] = STATE(57),
    [sym__equality_operator] = STATE(55),
    [sym__comparison_operator] = STATE(56),
    [sym__as_operator] = STATE(58),
    [sym__postfix_unary_suffix] = STATE(57),
    [sym_simple_identifier] = STATE(59),
    [anon_sym_GT] = ACTIONS(63),
    [aux_sym__lexical_identifier_token2] = ACTIONS(65),
    [anon_sym_LT_EQ] = ACTIONS(63),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(336),
    [anon_sym_BANG_BANG] = ACTIONS(69),
    [anon_sym_PLUS_PLUS] = ACTIONS(69),
    [anon_sym_RBRACE] = ACTIONS(336),
    [anon_sym_is] = ACTIONS(73),
    [anon_sym_as_QMARK] = ACTIONS(75),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_DOT_DOT] = ACTIONS(79),
    [anon_sym_in] = ACTIONS(73),
    [anon_sym_BANG_EQ] = ACTIONS(336),
    [anon_sym_EQ_EQ] = ACTIONS(336),
    [anon_sym_DASH_DASH] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(77),
    [anon_sym_GT_EQ] = ACTIONS(63),
    [anon_sym_as] = ACTIONS(75),
    [anon_sym_QMARK_COLON] = ACTIONS(83),
    [anon_sym_SLASH] = ACTIONS(81),
    [anon_sym_PIPE_PIPE] = ACTIONS(336),
    [anon_sym_LT] = ACTIONS(63),
    [aux_sym__lexical_identifier_token1] = ACTIONS(65),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(336),
    [anon_sym_BANGin] = ACTIONS(73),
    [anon_sym_PERCENT] = ACTIONS(81),
    [anon_sym_AMP_AMP] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(81),
    [sym__not_is] = ACTIONS(73),
    [aux_sym__semi_token1] = ACTIONS(338),
  },
  [97] = {
    [sym__lexical_identifier] = STATE(206),
    [sym__additive_operator] = STATE(53),
    [sym__multiplicative_operator] = STATE(54),
    [sym__in_operator] = STATE(60),
    [sym__is_operator] = STATE(60),
    [sym__postfix_unary_operator] = STATE(57),
    [sym__equality_operator] = STATE(55),
    [sym__comparison_operator] = STATE(56),
    [sym__as_operator] = STATE(58),
    [sym__postfix_unary_suffix] = STATE(57),
    [sym_simple_identifier] = STATE(59),
    [anon_sym_GT] = ACTIONS(336),
    [aux_sym__lexical_identifier_token2] = ACTIONS(65),
    [anon_sym_LT_EQ] = ACTIONS(336),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(336),
    [anon_sym_BANG_BANG] = ACTIONS(69),
    [anon_sym_PLUS_PLUS] = ACTIONS(69),
    [anon_sym_RBRACE] = ACTIONS(336),
    [anon_sym_is] = ACTIONS(73),
    [anon_sym_as_QMARK] = ACTIONS(75),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_DOT_DOT] = ACTIONS(79),
    [anon_sym_in] = ACTIONS(73),
    [anon_sym_BANG_EQ] = ACTIONS(336),
    [anon_sym_EQ_EQ] = ACTIONS(336),
    [anon_sym_DASH_DASH] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(77),
    [anon_sym_GT_EQ] = ACTIONS(336),
    [anon_sym_as] = ACTIONS(75),
    [anon_sym_QMARK_COLON] = ACTIONS(83),
    [anon_sym_SLASH] = ACTIONS(81),
    [anon_sym_PIPE_PIPE] = ACTIONS(336),
    [anon_sym_LT] = ACTIONS(336),
    [aux_sym__lexical_identifier_token1] = ACTIONS(65),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(336),
    [anon_sym_BANGin] = ACTIONS(73),
    [anon_sym_PERCENT] = ACTIONS(81),
    [anon_sym_AMP_AMP] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(81),
    [sym__not_is] = ACTIONS(73),
    [aux_sym__semi_token1] = ACTIONS(338),
  },
  [98] = {
    [anon_sym_GT] = ACTIONS(340),
    [aux_sym__lexical_identifier_token2] = ACTIONS(340),
    [anon_sym_LT_EQ] = ACTIONS(340),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(340),
    [anon_sym_BANG_BANG] = ACTIONS(340),
    [anon_sym_PLUS_PLUS] = ACTIONS(340),
    [anon_sym_RBRACE] = ACTIONS(340),
    [anon_sym_is] = ACTIONS(340),
    [anon_sym_as_QMARK] = ACTIONS(340),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_DOT_DOT] = ACTIONS(340),
    [anon_sym_in] = ACTIONS(340),
    [anon_sym_BANG_EQ] = ACTIONS(340),
    [anon_sym_EQ_EQ] = ACTIONS(340),
    [anon_sym_DASH_DASH] = ACTIONS(340),
    [anon_sym_PLUS] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(340),
    [anon_sym_as] = ACTIONS(340),
    [anon_sym_QMARK_COLON] = ACTIONS(340),
    [anon_sym_SLASH] = ACTIONS(340),
    [anon_sym_PIPE_PIPE] = ACTIONS(340),
    [anon_sym_LT] = ACTIONS(340),
    [aux_sym__lexical_identifier_token1] = ACTIONS(340),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(340),
    [anon_sym_BANGin] = ACTIONS(340),
    [anon_sym_PERCENT] = ACTIONS(340),
    [anon_sym_AMP_AMP] = ACTIONS(340),
    [anon_sym_STAR] = ACTIONS(340),
    [sym__not_is] = ACTIONS(340),
    [aux_sym__semi_token1] = ACTIONS(342),
  },
  [99] = {
    [sym__lexical_identifier] = STATE(206),
    [sym__additive_operator] = STATE(53),
    [sym__multiplicative_operator] = STATE(54),
    [sym__in_operator] = STATE(60),
    [sym__is_operator] = STATE(60),
    [sym__postfix_unary_operator] = STATE(57),
    [sym__equality_operator] = STATE(55),
    [sym__comparison_operator] = STATE(56),
    [sym__as_operator] = STATE(58),
    [sym__postfix_unary_suffix] = STATE(57),
    [sym_simple_identifier] = STATE(59),
    [anon_sym_GT] = ACTIONS(336),
    [aux_sym__lexical_identifier_token2] = ACTIONS(336),
    [anon_sym_LT_EQ] = ACTIONS(336),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(336),
    [anon_sym_BANG_BANG] = ACTIONS(69),
    [anon_sym_PLUS_PLUS] = ACTIONS(69),
    [anon_sym_RBRACE] = ACTIONS(336),
    [anon_sym_is] = ACTIONS(336),
    [anon_sym_as_QMARK] = ACTIONS(75),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_DOT_DOT] = ACTIONS(79),
    [anon_sym_in] = ACTIONS(336),
    [anon_sym_BANG_EQ] = ACTIONS(336),
    [anon_sym_EQ_EQ] = ACTIONS(336),
    [anon_sym_DASH_DASH] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(77),
    [anon_sym_GT_EQ] = ACTIONS(336),
    [anon_sym_as] = ACTIONS(75),
    [anon_sym_QMARK_COLON] = ACTIONS(336),
    [anon_sym_SLASH] = ACTIONS(81),
    [anon_sym_PIPE_PIPE] = ACTIONS(336),
    [anon_sym_LT] = ACTIONS(336),
    [aux_sym__lexical_identifier_token1] = ACTIONS(336),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(336),
    [anon_sym_BANGin] = ACTIONS(336),
    [anon_sym_PERCENT] = ACTIONS(81),
    [anon_sym_AMP_AMP] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(81),
    [sym__not_is] = ACTIONS(336),
    [aux_sym__semi_token1] = ACTIONS(338),
  },
  [100] = {
    [sym__lexical_identifier] = STATE(206),
    [sym__additive_operator] = STATE(53),
    [sym__multiplicative_operator] = STATE(54),
    [sym__in_operator] = STATE(60),
    [sym__is_operator] = STATE(60),
    [sym__postfix_unary_operator] = STATE(57),
    [sym__equality_operator] = STATE(55),
    [sym__comparison_operator] = STATE(56),
    [sym__as_operator] = STATE(58),
    [sym__postfix_unary_suffix] = STATE(57),
    [sym_simple_identifier] = STATE(59),
    [anon_sym_GT] = ACTIONS(336),
    [aux_sym__lexical_identifier_token2] = ACTIONS(65),
    [anon_sym_LT_EQ] = ACTIONS(336),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(336),
    [anon_sym_BANG_BANG] = ACTIONS(69),
    [anon_sym_PLUS_PLUS] = ACTIONS(69),
    [anon_sym_RBRACE] = ACTIONS(336),
    [anon_sym_is] = ACTIONS(336),
    [anon_sym_as_QMARK] = ACTIONS(75),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_DOT_DOT] = ACTIONS(79),
    [anon_sym_in] = ACTIONS(336),
    [anon_sym_BANG_EQ] = ACTIONS(336),
    [anon_sym_EQ_EQ] = ACTIONS(336),
    [anon_sym_DASH_DASH] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(77),
    [anon_sym_GT_EQ] = ACTIONS(336),
    [anon_sym_as] = ACTIONS(75),
    [anon_sym_QMARK_COLON] = ACTIONS(83),
    [anon_sym_SLASH] = ACTIONS(81),
    [anon_sym_PIPE_PIPE] = ACTIONS(336),
    [anon_sym_LT] = ACTIONS(336),
    [aux_sym__lexical_identifier_token1] = ACTIONS(65),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(336),
    [anon_sym_BANGin] = ACTIONS(336),
    [anon_sym_PERCENT] = ACTIONS(81),
    [anon_sym_AMP_AMP] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(81),
    [sym__not_is] = ACTIONS(336),
    [aux_sym__semi_token1] = ACTIONS(338),
  },
  [101] = {
    [sym_binary_expression] = STATE(18),
    [sym__lexical_identifier] = STATE(15),
    [sym_do_while_statement] = STATE(22),
    [sym_unary_expression] = STATE(18),
    [sym_directly_assignable_expression] = STATE(16),
    [aux_sym__statement_repeat1] = STATE(17),
    [sym__loop_statement] = STATE(22),
    [sym_for_statement] = STATE(22),
    [sym_assignment] = STATE(22),
    [sym__expression] = STATE(18),
    [sym__declaration] = STATE(22),
    [sym_class_declaration] = STATE(22),
    [aux_sym_source_file_repeat2] = STATE(64),
    [sym_object_declaration] = STATE(22),
    [sym_type_alias] = STATE(22),
    [sym_annotation] = STATE(14),
    [sym__prefix_unary_operator] = STATE(24),
    [sym__statement] = STATE(22),
    [sym_function_declaration] = STATE(22),
    [sym_simple_identifier] = STATE(25),
    [sym_label] = STATE(14),
    [sym_while_statement] = STATE(22),
    [anon_sym_while] = ACTIONS(3),
    [anon_sym_interface] = ACTIONS(5),
    [anon_sym_DASH_DASH] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(13),
    [aux_sym__lexical_identifier_token2] = ACTIONS(15),
    [anon_sym_AT] = ACTIONS(17),
    [anon_sym_do] = ACTIONS(19),
    [anon_sym_PLUS_PLUS] = ACTIONS(7),
    [anon_sym_class] = ACTIONS(5),
    [anon_sym_fun] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym__lexical_identifier_token1] = ACTIONS(25),
    [ts_builtin_sym_end] = ACTIONS(344),
    [anon_sym_object] = ACTIONS(29),
    [anon_sym_BANG] = ACTIONS(7),
    [anon_sym_typealias] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
  },
  [102] = {
    [sym_binary_expression] = STATE(18),
    [sym__lexical_identifier] = STATE(15),
    [sym_import_header] = STATE(67),
    [sym_while_statement] = STATE(22),
    [sym_directly_assignable_expression] = STATE(16),
    [sym_do_while_statement] = STATE(22),
    [aux_sym__statement_repeat1] = STATE(17),
    [sym__loop_statement] = STATE(22),
    [sym_for_statement] = STATE(22),
    [sym_assignment] = STATE(22),
    [sym__expression] = STATE(18),
    [sym_unary_expression] = STATE(18),
    [sym__declaration] = STATE(22),
    [sym_class_declaration] = STATE(22),
    [aux_sym_source_file_repeat2] = STATE(123),
    [sym_object_declaration] = STATE(22),
    [sym_type_alias] = STATE(22),
    [sym_annotation] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(67),
    [sym__statement] = STATE(22),
    [sym__prefix_unary_operator] = STATE(24),
    [sym_function_declaration] = STATE(22),
    [sym_simple_identifier] = STATE(25),
    [sym_label] = STATE(14),
    [anon_sym_while] = ACTIONS(3),
    [anon_sym_interface] = ACTIONS(5),
    [anon_sym_DASH_DASH] = ACTIONS(7),
    [anon_sym_import] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(13),
    [aux_sym__lexical_identifier_token2] = ACTIONS(15),
    [anon_sym_AT] = ACTIONS(17),
    [anon_sym_do] = ACTIONS(19),
    [anon_sym_PLUS_PLUS] = ACTIONS(7),
    [anon_sym_class] = ACTIONS(5),
    [anon_sym_fun] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym__lexical_identifier_token1] = ACTIONS(25),
    [ts_builtin_sym_end] = ACTIONS(344),
    [anon_sym_object] = ACTIONS(29),
    [anon_sym_BANG] = ACTIONS(7),
    [anon_sym_typealias] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
  },
  [103] = {
    [sym_control_structure_body] = STATE(124),
    [sym__block] = STATE(153),
    [anon_sym_SEMI] = ACTIONS(346),
    [anon_sym_LBRACE] = ACTIONS(348),
  },
  [104] = {
    [anon_sym_interface] = ACTIONS(350),
    [anon_sym_typealias] = ACTIONS(350),
    [anon_sym_RBRACE] = ACTIONS(350),
    [anon_sym_class] = ACTIONS(350),
    [anon_sym_fun] = ACTIONS(350),
    [anon_sym_object] = ACTIONS(350),
    [aux_sym__semi_token1] = ACTIONS(352),
  },
  [105] = {
    [sym_type_alias] = STATE(107),
    [sym_object_declaration] = STATE(107),
    [sym_function_declaration] = STATE(107),
    [aux_sym_class_member_declarations_repeat1] = STATE(125),
    [sym__declaration] = STATE(107),
    [sym_class_declaration] = STATE(107),
    [anon_sym_interface] = ACTIONS(280),
    [anon_sym_typealias] = ACTIONS(284),
    [anon_sym_RBRACE] = ACTIONS(354),
    [anon_sym_class] = ACTIONS(280),
    [anon_sym_fun] = ACTIONS(288),
    [anon_sym_object] = ACTIONS(282),
  },
  [106] = {
    [anon_sym_RBRACE] = ACTIONS(356),
  },
  [107] = {
    [sym__semis] = STATE(127),
    [anon_sym_interface] = ACTIONS(358),
    [anon_sym_typealias] = ACTIONS(358),
    [anon_sym_RBRACE] = ACTIONS(358),
    [anon_sym_class] = ACTIONS(358),
    [anon_sym_fun] = ACTIONS(358),
    [anon_sym_object] = ACTIONS(358),
    [aux_sym__semi_token1] = ACTIONS(360),
  },
  [108] = {
    [anon_sym_while] = ACTIONS(362),
    [anon_sym_interface] = ACTIONS(362),
    [anon_sym_DASH_DASH] = ACTIONS(362),
    [anon_sym_import] = ACTIONS(362),
    [anon_sym_PLUS] = ACTIONS(362),
    [anon_sym_as] = ACTIONS(362),
    [anon_sym_DOT] = ACTIONS(362),
    [aux_sym__lexical_identifier_token2] = ACTIONS(362),
    [anon_sym_AT] = ACTIONS(362),
    [anon_sym_do] = ACTIONS(362),
    [anon_sym_class] = ACTIONS(362),
    [anon_sym_fun] = ACTIONS(362),
    [anon_sym_PLUS_PLUS] = ACTIONS(362),
    [anon_sym_DOT_STAR] = ACTIONS(362),
    [anon_sym_DASH] = ACTIONS(362),
    [aux_sym__lexical_identifier_token1] = ACTIONS(362),
    [ts_builtin_sym_end] = ACTIONS(364),
    [anon_sym_object] = ACTIONS(362),
    [anon_sym_BANG] = ACTIONS(362),
    [anon_sym_typealias] = ACTIONS(362),
    [anon_sym_STAR] = ACTIONS(362),
    [anon_sym_for] = ACTIONS(362),
    [aux_sym__semi_token1] = ACTIONS(364),
  },
  [109] = {
    [aux_sym_identifier_repeat1] = STATE(109),
    [anon_sym_while] = ACTIONS(362),
    [anon_sym_interface] = ACTIONS(362),
    [anon_sym_DASH_DASH] = ACTIONS(362),
    [anon_sym_import] = ACTIONS(362),
    [anon_sym_PLUS] = ACTIONS(362),
    [anon_sym_as] = ACTIONS(362),
    [anon_sym_DOT] = ACTIONS(366),
    [aux_sym__lexical_identifier_token2] = ACTIONS(362),
    [anon_sym_AT] = ACTIONS(362),
    [anon_sym_do] = ACTIONS(362),
    [anon_sym_class] = ACTIONS(362),
    [anon_sym_fun] = ACTIONS(362),
    [anon_sym_PLUS_PLUS] = ACTIONS(362),
    [anon_sym_DOT_STAR] = ACTIONS(362),
    [anon_sym_DASH] = ACTIONS(362),
    [aux_sym__lexical_identifier_token1] = ACTIONS(362),
    [ts_builtin_sym_end] = ACTIONS(364),
    [anon_sym_object] = ACTIONS(362),
    [anon_sym_BANG] = ACTIONS(362),
    [anon_sym_typealias] = ACTIONS(362),
    [anon_sym_STAR] = ACTIONS(362),
    [anon_sym_for] = ACTIONS(362),
    [aux_sym__semi_token1] = ACTIONS(364),
  },
  [110] = {
    [anon_sym_while] = ACTIONS(369),
    [anon_sym_interface] = ACTIONS(369),
    [anon_sym_DASH_DASH] = ACTIONS(371),
    [anon_sym_import] = ACTIONS(369),
    [anon_sym_PLUS] = ACTIONS(369),
    [aux_sym__lexical_identifier_token2] = ACTIONS(371),
    [anon_sym_AT] = ACTIONS(371),
    [anon_sym_do] = ACTIONS(369),
    [anon_sym_PLUS_PLUS] = ACTIONS(371),
    [anon_sym_class] = ACTIONS(369),
    [anon_sym_fun] = ACTIONS(369),
    [anon_sym_DASH] = ACTIONS(369),
    [aux_sym__lexical_identifier_token1] = ACTIONS(369),
    [ts_builtin_sym_end] = ACTIONS(371),
    [anon_sym_object] = ACTIONS(369),
    [anon_sym_BANG] = ACTIONS(371),
    [anon_sym_typealias] = ACTIONS(369),
    [anon_sym_STAR] = ACTIONS(371),
    [anon_sym_for] = ACTIONS(369),
  },
  [111] = {
    [anon_sym_while] = ACTIONS(373),
    [anon_sym_interface] = ACTIONS(373),
    [anon_sym_DASH_DASH] = ACTIONS(373),
    [anon_sym_import] = ACTIONS(373),
    [anon_sym_PLUS] = ACTIONS(373),
    [aux_sym__lexical_identifier_token2] = ACTIONS(373),
    [anon_sym_AT] = ACTIONS(373),
    [anon_sym_do] = ACTIONS(373),
    [anon_sym_class] = ACTIONS(373),
    [anon_sym_fun] = ACTIONS(373),
    [anon_sym_PLUS_PLUS] = ACTIONS(373),
    [anon_sym_DASH] = ACTIONS(373),
    [aux_sym__lexical_identifier_token1] = ACTIONS(373),
    [ts_builtin_sym_end] = ACTIONS(375),
    [anon_sym_object] = ACTIONS(373),
    [anon_sym_BANG] = ACTIONS(373),
    [anon_sym_typealias] = ACTIONS(373),
    [anon_sym_STAR] = ACTIONS(373),
    [anon_sym_for] = ACTIONS(373),
    [aux_sym__semi_token1] = ACTIONS(375),
  },
  [112] = {
    [sym__lexical_identifier] = STATE(206),
    [sym__additive_operator] = STATE(161),
    [sym__multiplicative_operator] = STATE(162),
    [sym__in_operator] = STATE(168),
    [sym__is_operator] = STATE(168),
    [sym__postfix_unary_operator] = STATE(165),
    [sym__equality_operator] = STATE(163),
    [sym__comparison_operator] = STATE(164),
    [sym__as_operator] = STATE(166),
    [sym__postfix_unary_suffix] = STATE(165),
    [sym_simple_identifier] = STATE(167),
    [anon_sym_GT] = ACTIONS(246),
    [aux_sym__lexical_identifier_token2] = ACTIONS(248),
    [anon_sym_LT_EQ] = ACTIONS(250),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(252),
    [anon_sym_BANG_BANG] = ACTIONS(254),
    [anon_sym_PLUS_PLUS] = ACTIONS(254),
    [anon_sym_is] = ACTIONS(256),
    [anon_sym_as_QMARK] = ACTIONS(258),
    [anon_sym_DASH] = ACTIONS(260),
    [anon_sym_DOT_DOT] = ACTIONS(262),
    [anon_sym_in] = ACTIONS(256),
    [anon_sym_BANG_EQ] = ACTIONS(264),
    [anon_sym_EQ_EQ] = ACTIONS(264),
    [anon_sym_DASH_DASH] = ACTIONS(254),
    [anon_sym_PLUS] = ACTIONS(260),
    [anon_sym_GT_EQ] = ACTIONS(250),
    [anon_sym_SLASH] = ACTIONS(266),
    [anon_sym_as] = ACTIONS(268),
    [anon_sym_QMARK_COLON] = ACTIONS(270),
    [anon_sym_PIPE_PIPE] = ACTIONS(272),
    [anon_sym_LT] = ACTIONS(246),
    [aux_sym__lexical_identifier_token1] = ACTIONS(65),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(252),
    [anon_sym_RPAREN] = ACTIONS(377),
    [anon_sym_BANGin] = ACTIONS(276),
    [anon_sym_PERCENT] = ACTIONS(266),
    [anon_sym_AMP_AMP] = ACTIONS(278),
    [anon_sym_STAR] = ACTIONS(266),
    [sym__not_is] = ACTIONS(276),
  },
  [113] = {
    [anon_sym_while] = ACTIONS(379),
  },
  [114] = {
    [sym_binary_expression] = STATE(18),
    [sym__lexical_identifier] = STATE(15),
    [sym_do_while_statement] = STATE(129),
    [sym_unary_expression] = STATE(18),
    [sym_directly_assignable_expression] = STATE(16),
    [aux_sym__statement_repeat1] = STATE(17),
    [sym__loop_statement] = STATE(129),
    [sym_for_statement] = STATE(129),
    [sym_assignment] = STATE(129),
    [sym__expression] = STATE(18),
    [sym__declaration] = STATE(129),
    [sym_class_declaration] = STATE(129),
    [sym_object_declaration] = STATE(129),
    [sym_type_alias] = STATE(129),
    [sym_annotation] = STATE(14),
    [sym__prefix_unary_operator] = STATE(24),
    [sym__statement] = STATE(129),
    [sym_function_declaration] = STATE(129),
    [sym_simple_identifier] = STATE(25),
    [sym_label] = STATE(14),
    [sym_while_statement] = STATE(129),
    [anon_sym_while] = ACTIONS(3),
    [anon_sym_interface] = ACTIONS(5),
    [anon_sym_DASH_DASH] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(13),
    [aux_sym__lexical_identifier_token2] = ACTIONS(15),
    [anon_sym_AT] = ACTIONS(17),
    [anon_sym_do] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(381),
    [anon_sym_PLUS_PLUS] = ACTIONS(7),
    [anon_sym_class] = ACTIONS(5),
    [anon_sym_fun] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym__lexical_identifier_token1] = ACTIONS(25),
    [anon_sym_object] = ACTIONS(29),
    [anon_sym_BANG] = ACTIONS(7),
    [anon_sym_typealias] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
  },
  [115] = {
    [sym__semis] = STATE(130),
    [aux_sym_statements_repeat1] = STATE(131),
    [aux_sym__semi_token1] = ACTIONS(383),
    [anon_sym_RBRACE] = ACTIONS(385),
  },
  [116] = {
    [sym_binary_expression] = STATE(132),
    [sym__lexical_identifier] = STATE(207),
    [sym__prefix_unary_operator] = STATE(150),
    [sym_annotation] = STATE(150),
    [sym_simple_identifier] = STATE(154),
    [sym__expression] = STATE(132),
    [sym_label] = STATE(150),
    [sym_unary_expression] = STATE(132),
    [anon_sym_DASH] = ACTIONS(105),
    [anon_sym_DASH_DASH] = ACTIONS(107),
    [aux_sym__lexical_identifier_token1] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(105),
    [aux_sym__lexical_identifier_token2] = ACTIONS(109),
    [anon_sym_BANG] = ACTIONS(107),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(111),
    [anon_sym_PLUS_PLUS] = ACTIONS(107),
  },
  [117] = {
    [sym__block] = STATE(134),
    [sym_function_body] = STATE(135),
    [aux_sym__semi_token1] = ACTIONS(387),
    [anon_sym_RBRACE] = ACTIONS(389),
    [anon_sym_LBRACE] = ACTIONS(391),
    [anon_sym_EQ] = ACTIONS(393),
  },
  [118] = {
    [anon_sym_interface] = ACTIONS(395),
    [anon_sym_typealias] = ACTIONS(395),
    [anon_sym_RBRACE] = ACTIONS(395),
    [anon_sym_class] = ACTIONS(395),
    [anon_sym_fun] = ACTIONS(395),
    [anon_sym_object] = ACTIONS(395),
    [aux_sym__semi_token1] = ACTIONS(397),
  },
  [119] = {
    [sym__lexical_identifier] = STATE(208),
    [sym_simple_identifier] = STATE(136),
    [sym__type] = STATE(136),
    [aux_sym__lexical_identifier_token1] = ACTIONS(171),
    [aux_sym__lexical_identifier_token2] = ACTIONS(171),
  },
  [120] = {
    [sym_annotation] = STATE(120),
    [aux_sym_for_statement_repeat1] = STATE(120),
    [aux_sym__lexical_identifier_token1] = ACTIONS(399),
    [anon_sym_AT] = ACTIONS(401),
    [aux_sym__lexical_identifier_token2] = ACTIONS(399),
  },
  [121] = {
    [anon_sym_in] = ACTIONS(404),
  },
  [122] = {
    [sym_binary_expression] = STATE(138),
    [sym__lexical_identifier] = STATE(207),
    [sym__prefix_unary_operator] = STATE(150),
    [sym_annotation] = STATE(150),
    [sym_simple_identifier] = STATE(154),
    [sym__expression] = STATE(138),
    [sym_label] = STATE(150),
    [sym_unary_expression] = STATE(138),
    [anon_sym_DASH] = ACTIONS(105),
    [anon_sym_DASH_DASH] = ACTIONS(107),
    [aux_sym__lexical_identifier_token1] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(105),
    [aux_sym__lexical_identifier_token2] = ACTIONS(109),
    [anon_sym_BANG] = ACTIONS(107),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(111),
    [anon_sym_PLUS_PLUS] = ACTIONS(107),
  },
  [123] = {
    [sym_binary_expression] = STATE(18),
    [sym__lexical_identifier] = STATE(15),
    [sym_do_while_statement] = STATE(22),
    [sym_unary_expression] = STATE(18),
    [sym_directly_assignable_expression] = STATE(16),
    [aux_sym__statement_repeat1] = STATE(17),
    [sym__loop_statement] = STATE(22),
    [sym_for_statement] = STATE(22),
    [sym_assignment] = STATE(22),
    [sym__expression] = STATE(18),
    [sym__declaration] = STATE(22),
    [sym_class_declaration] = STATE(22),
    [aux_sym_source_file_repeat2] = STATE(64),
    [sym_object_declaration] = STATE(22),
    [sym_type_alias] = STATE(22),
    [sym_annotation] = STATE(14),
    [sym__prefix_unary_operator] = STATE(24),
    [sym__statement] = STATE(22),
    [sym_function_declaration] = STATE(22),
    [sym_simple_identifier] = STATE(25),
    [sym_label] = STATE(14),
    [sym_while_statement] = STATE(22),
    [anon_sym_while] = ACTIONS(3),
    [anon_sym_interface] = ACTIONS(5),
    [anon_sym_DASH_DASH] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(13),
    [aux_sym__lexical_identifier_token2] = ACTIONS(15),
    [anon_sym_AT] = ACTIONS(17),
    [anon_sym_do] = ACTIONS(19),
    [anon_sym_PLUS_PLUS] = ACTIONS(7),
    [anon_sym_class] = ACTIONS(5),
    [anon_sym_fun] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym__lexical_identifier_token1] = ACTIONS(25),
    [ts_builtin_sym_end] = ACTIONS(406),
    [anon_sym_object] = ACTIONS(29),
    [anon_sym_BANG] = ACTIONS(7),
    [anon_sym_typealias] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
  },
  [124] = {
    [anon_sym_RBRACE] = ACTIONS(408),
    [aux_sym__semi_token1] = ACTIONS(410),
  },
  [125] = {
    [sym_type_alias] = STATE(107),
    [sym_object_declaration] = STATE(107),
    [sym_function_declaration] = STATE(107),
    [aux_sym_class_member_declarations_repeat1] = STATE(125),
    [sym__declaration] = STATE(107),
    [sym_class_declaration] = STATE(107),
    [anon_sym_interface] = ACTIONS(412),
    [anon_sym_typealias] = ACTIONS(415),
    [anon_sym_RBRACE] = ACTIONS(418),
    [anon_sym_class] = ACTIONS(412),
    [anon_sym_fun] = ACTIONS(420),
    [anon_sym_object] = ACTIONS(423),
  },
  [126] = {
    [anon_sym_interface] = ACTIONS(426),
    [anon_sym_typealias] = ACTIONS(426),
    [anon_sym_RBRACE] = ACTIONS(426),
    [anon_sym_class] = ACTIONS(426),
    [anon_sym_fun] = ACTIONS(426),
    [anon_sym_object] = ACTIONS(426),
    [aux_sym__semi_token1] = ACTIONS(428),
  },
  [127] = {
    [anon_sym_interface] = ACTIONS(418),
    [anon_sym_typealias] = ACTIONS(418),
    [anon_sym_RBRACE] = ACTIONS(418),
    [anon_sym_class] = ACTIONS(418),
    [anon_sym_fun] = ACTIONS(418),
    [anon_sym_object] = ACTIONS(418),
  },
  [128] = {
    [anon_sym_RBRACE] = ACTIONS(430),
    [aux_sym__semi_token1] = ACTIONS(432),
  },
  [129] = {
    [aux_sym__semi_token1] = ACTIONS(434),
    [anon_sym_RBRACE] = ACTIONS(436),
  },
  [130] = {
    [sym_binary_expression] = STATE(18),
    [sym__lexical_identifier] = STATE(15),
    [sym_do_while_statement] = STATE(129),
    [sym_unary_expression] = STATE(18),
    [sym_directly_assignable_expression] = STATE(16),
    [aux_sym__statement_repeat1] = STATE(17),
    [sym__loop_statement] = STATE(129),
    [sym_for_statement] = STATE(129),
    [sym_assignment] = STATE(129),
    [sym__expression] = STATE(18),
    [sym__declaration] = STATE(129),
    [sym_class_declaration] = STATE(129),
    [sym_object_declaration] = STATE(129),
    [sym_type_alias] = STATE(129),
    [sym_annotation] = STATE(14),
    [sym__prefix_unary_operator] = STATE(24),
    [sym__statement] = STATE(129),
    [sym_function_declaration] = STATE(129),
    [sym_simple_identifier] = STATE(25),
    [sym_label] = STATE(14),
    [sym_while_statement] = STATE(129),
    [anon_sym_while] = ACTIONS(3),
    [anon_sym_interface] = ACTIONS(5),
    [anon_sym_DASH_DASH] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(13),
    [aux_sym__lexical_identifier_token2] = ACTIONS(15),
    [anon_sym_AT] = ACTIONS(17),
    [anon_sym_do] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(438),
    [anon_sym_PLUS_PLUS] = ACTIONS(7),
    [anon_sym_class] = ACTIONS(5),
    [anon_sym_fun] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym__lexical_identifier_token1] = ACTIONS(25),
    [anon_sym_object] = ACTIONS(29),
    [anon_sym_BANG] = ACTIONS(7),
    [anon_sym_typealias] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
  },
  [131] = {
    [sym__semis] = STATE(139),
    [aux_sym_statements_repeat1] = STATE(131),
    [aux_sym__semi_token1] = ACTIONS(440),
    [anon_sym_RBRACE] = ACTIONS(436),
  },
  [132] = {
    [sym__lexical_identifier] = STATE(206),
    [sym__additive_operator] = STATE(161),
    [sym__multiplicative_operator] = STATE(162),
    [sym__in_operator] = STATE(168),
    [sym__is_operator] = STATE(168),
    [sym__postfix_unary_operator] = STATE(165),
    [sym__equality_operator] = STATE(163),
    [sym__comparison_operator] = STATE(164),
    [sym__as_operator] = STATE(166),
    [sym__postfix_unary_suffix] = STATE(165),
    [sym_simple_identifier] = STATE(167),
    [anon_sym_GT] = ACTIONS(246),
    [aux_sym__lexical_identifier_token2] = ACTIONS(248),
    [anon_sym_LT_EQ] = ACTIONS(250),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(252),
    [anon_sym_BANG_BANG] = ACTIONS(254),
    [anon_sym_PLUS_PLUS] = ACTIONS(254),
    [anon_sym_is] = ACTIONS(256),
    [anon_sym_as_QMARK] = ACTIONS(258),
    [anon_sym_DASH] = ACTIONS(260),
    [anon_sym_DOT_DOT] = ACTIONS(262),
    [anon_sym_in] = ACTIONS(256),
    [anon_sym_BANG_EQ] = ACTIONS(264),
    [anon_sym_EQ_EQ] = ACTIONS(264),
    [anon_sym_DASH_DASH] = ACTIONS(254),
    [anon_sym_PLUS] = ACTIONS(260),
    [anon_sym_GT_EQ] = ACTIONS(250),
    [anon_sym_SLASH] = ACTIONS(266),
    [anon_sym_as] = ACTIONS(268),
    [anon_sym_QMARK_COLON] = ACTIONS(270),
    [anon_sym_PIPE_PIPE] = ACTIONS(272),
    [anon_sym_LT] = ACTIONS(246),
    [aux_sym__lexical_identifier_token1] = ACTIONS(65),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(252),
    [anon_sym_RPAREN] = ACTIONS(443),
    [anon_sym_BANGin] = ACTIONS(276),
    [anon_sym_PERCENT] = ACTIONS(266),
    [anon_sym_AMP_AMP] = ACTIONS(278),
    [anon_sym_STAR] = ACTIONS(266),
    [sym__not_is] = ACTIONS(276),
  },
  [133] = {
    [sym_binary_expression] = STATE(141),
    [sym__lexical_identifier] = STATE(15),
    [sym__prefix_unary_operator] = STATE(24),
    [sym_annotation] = STATE(24),
    [sym_simple_identifier] = STATE(41),
    [sym__expression] = STATE(141),
    [sym_label] = STATE(24),
    [sym_unary_expression] = STATE(141),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_DASH_DASH] = ACTIONS(7),
    [aux_sym__lexical_identifier_token1] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(13),
    [aux_sym__lexical_identifier_token2] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(7),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_PLUS_PLUS] = ACTIONS(7),
  },
  [134] = {
    [anon_sym_interface] = ACTIONS(445),
    [anon_sym_typealias] = ACTIONS(445),
    [anon_sym_RBRACE] = ACTIONS(445),
    [anon_sym_class] = ACTIONS(445),
    [anon_sym_fun] = ACTIONS(445),
    [anon_sym_object] = ACTIONS(445),
    [aux_sym__semi_token1] = ACTIONS(447),
  },
  [135] = {
    [anon_sym_interface] = ACTIONS(449),
    [anon_sym_typealias] = ACTIONS(449),
    [anon_sym_RBRACE] = ACTIONS(449),
    [anon_sym_class] = ACTIONS(449),
    [anon_sym_fun] = ACTIONS(449),
    [anon_sym_object] = ACTIONS(449),
    [aux_sym__semi_token1] = ACTIONS(451),
  },
  [136] = {
    [anon_sym_in] = ACTIONS(453),
  },
  [137] = {
    [sym_binary_expression] = STATE(142),
    [sym__lexical_identifier] = STATE(207),
    [sym__prefix_unary_operator] = STATE(150),
    [sym_annotation] = STATE(150),
    [sym_simple_identifier] = STATE(154),
    [sym__expression] = STATE(142),
    [sym_label] = STATE(150),
    [sym_unary_expression] = STATE(142),
    [anon_sym_DASH] = ACTIONS(105),
    [anon_sym_DASH_DASH] = ACTIONS(107),
    [aux_sym__lexical_identifier_token1] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(105),
    [aux_sym__lexical_identifier_token2] = ACTIONS(109),
    [anon_sym_BANG] = ACTIONS(107),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(111),
    [anon_sym_PLUS_PLUS] = ACTIONS(107),
  },
  [138] = {
    [sym__lexical_identifier] = STATE(206),
    [sym__additive_operator] = STATE(161),
    [sym__multiplicative_operator] = STATE(162),
    [sym__in_operator] = STATE(168),
    [sym__is_operator] = STATE(168),
    [sym__postfix_unary_operator] = STATE(165),
    [sym__equality_operator] = STATE(163),
    [sym__comparison_operator] = STATE(164),
    [sym__as_operator] = STATE(166),
    [sym__postfix_unary_suffix] = STATE(165),
    [sym_simple_identifier] = STATE(167),
    [anon_sym_GT] = ACTIONS(246),
    [aux_sym__lexical_identifier_token2] = ACTIONS(248),
    [anon_sym_LT_EQ] = ACTIONS(250),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(252),
    [anon_sym_BANG_BANG] = ACTIONS(254),
    [anon_sym_PLUS_PLUS] = ACTIONS(254),
    [anon_sym_is] = ACTIONS(256),
    [anon_sym_as_QMARK] = ACTIONS(258),
    [anon_sym_DASH] = ACTIONS(260),
    [anon_sym_DOT_DOT] = ACTIONS(262),
    [anon_sym_in] = ACTIONS(256),
    [anon_sym_BANG_EQ] = ACTIONS(264),
    [anon_sym_EQ_EQ] = ACTIONS(264),
    [anon_sym_DASH_DASH] = ACTIONS(254),
    [anon_sym_PLUS] = ACTIONS(260),
    [anon_sym_GT_EQ] = ACTIONS(250),
    [anon_sym_SLASH] = ACTIONS(266),
    [anon_sym_as] = ACTIONS(268),
    [anon_sym_QMARK_COLON] = ACTIONS(270),
    [anon_sym_PIPE_PIPE] = ACTIONS(272),
    [anon_sym_LT] = ACTIONS(246),
    [aux_sym__lexical_identifier_token1] = ACTIONS(65),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(252),
    [anon_sym_RPAREN] = ACTIONS(455),
    [anon_sym_BANGin] = ACTIONS(276),
    [anon_sym_PERCENT] = ACTIONS(266),
    [anon_sym_AMP_AMP] = ACTIONS(278),
    [anon_sym_STAR] = ACTIONS(266),
    [sym__not_is] = ACTIONS(276),
  },
  [139] = {
    [sym_binary_expression] = STATE(18),
    [sym__lexical_identifier] = STATE(15),
    [sym_do_while_statement] = STATE(129),
    [sym_unary_expression] = STATE(18),
    [sym_directly_assignable_expression] = STATE(16),
    [aux_sym__statement_repeat1] = STATE(17),
    [sym__loop_statement] = STATE(129),
    [sym_for_statement] = STATE(129),
    [sym_assignment] = STATE(129),
    [sym__expression] = STATE(18),
    [sym__declaration] = STATE(129),
    [sym_class_declaration] = STATE(129),
    [sym_object_declaration] = STATE(129),
    [sym_type_alias] = STATE(129),
    [sym_annotation] = STATE(14),
    [sym__prefix_unary_operator] = STATE(24),
    [sym__statement] = STATE(129),
    [sym_function_declaration] = STATE(129),
    [sym_simple_identifier] = STATE(25),
    [sym_label] = STATE(14),
    [sym_while_statement] = STATE(129),
    [anon_sym_while] = ACTIONS(3),
    [anon_sym_interface] = ACTIONS(5),
    [anon_sym_DASH_DASH] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(13),
    [aux_sym__lexical_identifier_token2] = ACTIONS(15),
    [anon_sym_AT] = ACTIONS(17),
    [anon_sym_do] = ACTIONS(19),
    [anon_sym_PLUS_PLUS] = ACTIONS(7),
    [anon_sym_class] = ACTIONS(5),
    [anon_sym_fun] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym__lexical_identifier_token1] = ACTIONS(25),
    [anon_sym_object] = ACTIONS(29),
    [anon_sym_BANG] = ACTIONS(7),
    [anon_sym_typealias] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
  },
  [140] = {
    [anon_sym_RBRACE] = ACTIONS(457),
    [aux_sym__semi_token1] = ACTIONS(459),
  },
  [141] = {
    [sym__lexical_identifier] = STATE(206),
    [sym__additive_operator] = STATE(53),
    [sym__multiplicative_operator] = STATE(54),
    [sym__in_operator] = STATE(60),
    [sym__is_operator] = STATE(60),
    [sym__postfix_unary_operator] = STATE(57),
    [sym__equality_operator] = STATE(55),
    [sym__comparison_operator] = STATE(56),
    [sym__as_operator] = STATE(58),
    [sym__postfix_unary_suffix] = STATE(57),
    [sym_simple_identifier] = STATE(59),
    [anon_sym_GT] = ACTIONS(63),
    [aux_sym__lexical_identifier_token2] = ACTIONS(65),
    [anon_sym_LT_EQ] = ACTIONS(63),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(67),
    [anon_sym_BANG_BANG] = ACTIONS(69),
    [anon_sym_PLUS_PLUS] = ACTIONS(69),
    [anon_sym_RBRACE] = ACTIONS(461),
    [anon_sym_is] = ACTIONS(73),
    [anon_sym_as_QMARK] = ACTIONS(75),
    [anon_sym_DASH] = ACTIONS(77),
    [anon_sym_DOT_DOT] = ACTIONS(79),
    [anon_sym_in] = ACTIONS(73),
    [anon_sym_BANG_EQ] = ACTIONS(67),
    [anon_sym_EQ_EQ] = ACTIONS(67),
    [anon_sym_DASH_DASH] = ACTIONS(69),
    [anon_sym_PLUS] = ACTIONS(77),
    [anon_sym_GT_EQ] = ACTIONS(63),
    [anon_sym_SLASH] = ACTIONS(81),
    [anon_sym_as] = ACTIONS(75),
    [anon_sym_QMARK_COLON] = ACTIONS(83),
    [anon_sym_PIPE_PIPE] = ACTIONS(85),
    [anon_sym_LT] = ACTIONS(63),
    [aux_sym__lexical_identifier_token1] = ACTIONS(65),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(67),
    [anon_sym_BANGin] = ACTIONS(73),
    [anon_sym_PERCENT] = ACTIONS(81),
    [anon_sym_AMP_AMP] = ACTIONS(87),
    [anon_sym_STAR] = ACTIONS(81),
    [sym__not_is] = ACTIONS(73),
    [aux_sym__semi_token1] = ACTIONS(463),
  },
  [142] = {
    [sym__lexical_identifier] = STATE(206),
    [sym__additive_operator] = STATE(161),
    [sym__multiplicative_operator] = STATE(162),
    [sym__in_operator] = STATE(168),
    [sym__is_operator] = STATE(168),
    [sym__postfix_unary_operator] = STATE(165),
    [sym__equality_operator] = STATE(163),
    [sym__comparison_operator] = STATE(164),
    [sym__as_operator] = STATE(166),
    [sym__postfix_unary_suffix] = STATE(165),
    [sym_simple_identifier] = STATE(167),
    [anon_sym_GT] = ACTIONS(246),
    [aux_sym__lexical_identifier_token2] = ACTIONS(248),
    [anon_sym_LT_EQ] = ACTIONS(250),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(252),
    [anon_sym_BANG_BANG] = ACTIONS(254),
    [anon_sym_PLUS_PLUS] = ACTIONS(254),
    [anon_sym_is] = ACTIONS(256),
    [anon_sym_as_QMARK] = ACTIONS(258),
    [anon_sym_DASH] = ACTIONS(260),
    [anon_sym_DOT_DOT] = ACTIONS(262),
    [anon_sym_in] = ACTIONS(256),
    [anon_sym_BANG_EQ] = ACTIONS(264),
    [anon_sym_EQ_EQ] = ACTIONS(264),
    [anon_sym_DASH_DASH] = ACTIONS(254),
    [anon_sym_PLUS] = ACTIONS(260),
    [anon_sym_GT_EQ] = ACTIONS(250),
    [anon_sym_SLASH] = ACTIONS(266),
    [anon_sym_as] = ACTIONS(268),
    [anon_sym_QMARK_COLON] = ACTIONS(270),
    [anon_sym_PIPE_PIPE] = ACTIONS(272),
    [anon_sym_LT] = ACTIONS(246),
    [aux_sym__lexical_identifier_token1] = ACTIONS(65),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(252),
    [anon_sym_RPAREN] = ACTIONS(465),
    [anon_sym_BANGin] = ACTIONS(276),
    [anon_sym_PERCENT] = ACTIONS(266),
    [anon_sym_AMP_AMP] = ACTIONS(278),
    [anon_sym_STAR] = ACTIONS(266),
    [sym__not_is] = ACTIONS(276),
  },
  [143] = {
    [sym_control_structure_body] = STATE(145),
    [sym__block] = STATE(153),
    [anon_sym_RBRACE] = ACTIONS(467),
    [anon_sym_LBRACE] = ACTIONS(391),
    [aux_sym__semi_token1] = ACTIONS(469),
  },
  [144] = {
    [sym_control_structure_body] = STATE(146),
    [sym__block] = STATE(153),
    [anon_sym_RBRACE] = ACTIONS(471),
    [anon_sym_LBRACE] = ACTIONS(391),
    [aux_sym__semi_token1] = ACTIONS(473),
  },
  [145] = {
    [anon_sym_RBRACE] = ACTIONS(471),
    [aux_sym__semi_token1] = ACTIONS(473),
  },
  [146] = {
    [anon_sym_RBRACE] = ACTIONS(475),
    [aux_sym__semi_token1] = ACTIONS(477),
  },
  [147] = {
    [sym__lexical_identifier] = STATE(209),
    [sym_simple_identifier] = STATE(39),
    [aux_sym__lexical_identifier_token1] = ACTIONS(479),
    [aux_sym__lexical_identifier_token2] = ACTIONS(479),
  },
  [148] = {
    [sym_binary_expression] = STATE(155),
    [sym__lexical_identifier] = STATE(207),
    [sym__prefix_unary_operator] = STATE(150),
    [sym_annotation] = STATE(150),
    [sym_simple_identifier] = STATE(154),
    [sym__expression] = STATE(155),
    [sym_label] = STATE(150),
    [sym_unary_expression] = STATE(155),
    [anon_sym_DASH] = ACTIONS(105),
    [anon_sym_DASH_DASH] = ACTIONS(107),
    [aux_sym__lexical_identifier_token1] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(105),
    [aux_sym__lexical_identifier_token2] = ACTIONS(109),
    [anon_sym_BANG] = ACTIONS(107),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(111),
    [anon_sym_PLUS_PLUS] = ACTIONS(107),
  },
  [149] = {
    [anon_sym_while] = ACTIONS(57),
    [anon_sym_interface] = ACTIONS(57),
    [anon_sym_DASH_DASH] = ACTIONS(57),
    [anon_sym_import] = ACTIONS(57),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(57),
    [anon_sym_DOT] = ACTIONS(57),
    [aux_sym__lexical_identifier_token2] = ACTIONS(57),
    [anon_sym_AT] = ACTIONS(57),
    [anon_sym_do] = ACTIONS(57),
    [anon_sym_class] = ACTIONS(57),
    [anon_sym_fun] = ACTIONS(57),
    [anon_sym_PLUS_PLUS] = ACTIONS(57),
    [anon_sym_DOT_STAR] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(57),
    [aux_sym__lexical_identifier_token1] = ACTIONS(57),
    [ts_builtin_sym_end] = ACTIONS(59),
    [anon_sym_object] = ACTIONS(57),
    [anon_sym_BANG] = ACTIONS(57),
    [anon_sym_typealias] = ACTIONS(57),
    [anon_sym_STAR] = ACTIONS(57),
    [anon_sym_for] = ACTIONS(57),
    [aux_sym__semi_token1] = ACTIONS(59),
  },
  [150] = {
    [sym_binary_expression] = STATE(156),
    [sym__lexical_identifier] = STATE(207),
    [sym__prefix_unary_operator] = STATE(150),
    [sym_annotation] = STATE(150),
    [sym_simple_identifier] = STATE(154),
    [sym__expression] = STATE(156),
    [sym_label] = STATE(150),
    [sym_unary_expression] = STATE(156),
    [anon_sym_DASH] = ACTIONS(105),
    [anon_sym_DASH_DASH] = ACTIONS(107),
    [aux_sym__lexical_identifier_token1] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(105),
    [aux_sym__lexical_identifier_token2] = ACTIONS(109),
    [anon_sym_BANG] = ACTIONS(107),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(111),
    [anon_sym_PLUS_PLUS] = ACTIONS(107),
  },
  [151] = {
    [aux_sym_identifier_repeat1] = STATE(170),
    [anon_sym_while] = ACTIONS(119),
    [anon_sym_interface] = ACTIONS(119),
    [anon_sym_DASH_DASH] = ACTIONS(119),
    [anon_sym_import] = ACTIONS(119),
    [anon_sym_PLUS] = ACTIONS(119),
    [aux_sym__lexical_identifier_token2] = ACTIONS(119),
    [anon_sym_DOT] = ACTIONS(481),
    [anon_sym_AT] = ACTIONS(119),
    [anon_sym_do] = ACTIONS(119),
    [anon_sym_class] = ACTIONS(119),
    [anon_sym_fun] = ACTIONS(119),
    [anon_sym_PLUS_PLUS] = ACTIONS(119),
    [anon_sym_DASH] = ACTIONS(119),
    [aux_sym__lexical_identifier_token1] = ACTIONS(119),
    [ts_builtin_sym_end] = ACTIONS(123),
    [anon_sym_object] = ACTIONS(119),
    [anon_sym_BANG] = ACTIONS(119),
    [anon_sym_typealias] = ACTIONS(119),
    [anon_sym_STAR] = ACTIONS(119),
    [anon_sym_for] = ACTIONS(119),
    [aux_sym__semi_token1] = ACTIONS(123),
  },
  [152] = {
    [anon_sym_DASH] = ACTIONS(139),
    [anon_sym_DASH_DASH] = ACTIONS(141),
    [aux_sym__lexical_identifier_token1] = ACTIONS(141),
    [anon_sym_PLUS] = ACTIONS(139),
    [aux_sym__lexical_identifier_token2] = ACTIONS(141),
    [anon_sym_BANG] = ACTIONS(141),
    [anon_sym_AT] = ACTIONS(141),
    [anon_sym_STAR] = ACTIONS(141),
    [anon_sym_PLUS_PLUS] = ACTIONS(141),
  },
  [153] = {
    [anon_sym_RBRACE] = ACTIONS(483),
    [aux_sym__semi_token1] = ACTIONS(149),
  },
  [154] = {
    [anon_sym_GT] = ACTIONS(97),
    [aux_sym__lexical_identifier_token2] = ACTIONS(103),
    [anon_sym_LT_EQ] = ACTIONS(103),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(103),
    [anon_sym_BANG_BANG] = ACTIONS(103),
    [anon_sym_PLUS_PLUS] = ACTIONS(103),
    [anon_sym_is] = ACTIONS(97),
    [anon_sym_as_QMARK] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(97),
    [anon_sym_DOT_DOT] = ACTIONS(103),
    [anon_sym_in] = ACTIONS(97),
    [anon_sym_BANG_EQ] = ACTIONS(97),
    [anon_sym_EQ_EQ] = ACTIONS(97),
    [anon_sym_DASH_DASH] = ACTIONS(103),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_GT_EQ] = ACTIONS(103),
    [anon_sym_as] = ACTIONS(97),
    [anon_sym_QMARK_COLON] = ACTIONS(103),
    [anon_sym_SLASH] = ACTIONS(103),
    [anon_sym_PIPE_PIPE] = ACTIONS(103),
    [anon_sym_AT] = ACTIONS(485),
    [anon_sym_LT] = ACTIONS(97),
    [aux_sym__lexical_identifier_token1] = ACTIONS(97),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(103),
    [anon_sym_RPAREN] = ACTIONS(103),
    [anon_sym_BANGin] = ACTIONS(103),
    [anon_sym_PERCENT] = ACTIONS(103),
    [anon_sym_AMP_AMP] = ACTIONS(103),
    [anon_sym_STAR] = ACTIONS(103),
    [sym__not_is] = ACTIONS(103),
  },
  [155] = {
    [sym__lexical_identifier] = STATE(206),
    [sym__additive_operator] = STATE(161),
    [sym__multiplicative_operator] = STATE(162),
    [sym__equality_operator] = STATE(163),
    [sym__comparison_operator] = STATE(164),
    [sym__as_operator] = STATE(166),
    [sym__postfix_unary_suffix] = STATE(165),
    [sym_simple_identifier] = STATE(167),
    [sym__in_operator] = STATE(168),
    [sym__is_operator] = STATE(168),
    [sym__postfix_unary_operator] = STATE(165),
    [anon_sym_GT] = ACTIONS(246),
    [aux_sym__lexical_identifier_token2] = ACTIONS(248),
    [anon_sym_LT_EQ] = ACTIONS(250),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(252),
    [anon_sym_BANG_BANG] = ACTIONS(254),
    [anon_sym_PLUS_PLUS] = ACTIONS(254),
    [anon_sym_is] = ACTIONS(256),
    [anon_sym_as_QMARK] = ACTIONS(258),
    [anon_sym_DASH] = ACTIONS(260),
    [anon_sym_DOT_DOT] = ACTIONS(262),
    [anon_sym_in] = ACTIONS(256),
    [anon_sym_BANG_EQ] = ACTIONS(264),
    [anon_sym_EQ_EQ] = ACTIONS(264),
    [anon_sym_DASH_DASH] = ACTIONS(254),
    [anon_sym_PLUS] = ACTIONS(260),
    [anon_sym_GT_EQ] = ACTIONS(250),
    [anon_sym_as] = ACTIONS(268),
    [anon_sym_QMARK_COLON] = ACTIONS(270),
    [anon_sym_SLASH] = ACTIONS(266),
    [anon_sym_PIPE_PIPE] = ACTIONS(272),
    [anon_sym_LT] = ACTIONS(246),
    [aux_sym__lexical_identifier_token1] = ACTIONS(65),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(252),
    [anon_sym_RPAREN] = ACTIONS(169),
    [anon_sym_BANGin] = ACTIONS(276),
    [anon_sym_PERCENT] = ACTIONS(266),
    [anon_sym_AMP_AMP] = ACTIONS(278),
    [anon_sym_STAR] = ACTIONS(266),
    [sym__not_is] = ACTIONS(276),
  },
  [156] = {
    [sym__lexical_identifier] = STATE(206),
    [sym__additive_operator] = STATE(161),
    [sym__multiplicative_operator] = STATE(162),
    [sym__equality_operator] = STATE(163),
    [sym__comparison_operator] = STATE(164),
    [sym__as_operator] = STATE(166),
    [sym__postfix_unary_suffix] = STATE(165),
    [sym_simple_identifier] = STATE(167),
    [sym__in_operator] = STATE(168),
    [sym__is_operator] = STATE(168),
    [sym__postfix_unary_operator] = STATE(165),
    [anon_sym_GT] = ACTIONS(167),
    [aux_sym__lexical_identifier_token2] = ACTIONS(169),
    [anon_sym_LT_EQ] = ACTIONS(169),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(169),
    [anon_sym_BANG_BANG] = ACTIONS(254),
    [anon_sym_PLUS_PLUS] = ACTIONS(254),
    [anon_sym_is] = ACTIONS(167),
    [anon_sym_as_QMARK] = ACTIONS(169),
    [anon_sym_DASH] = ACTIONS(167),
    [anon_sym_DOT_DOT] = ACTIONS(169),
    [anon_sym_in] = ACTIONS(167),
    [anon_sym_BANG_EQ] = ACTIONS(167),
    [anon_sym_EQ_EQ] = ACTIONS(167),
    [anon_sym_DASH_DASH] = ACTIONS(254),
    [anon_sym_PLUS] = ACTIONS(167),
    [anon_sym_GT_EQ] = ACTIONS(169),
    [anon_sym_as] = ACTIONS(167),
    [anon_sym_QMARK_COLON] = ACTIONS(169),
    [anon_sym_SLASH] = ACTIONS(169),
    [anon_sym_PIPE_PIPE] = ACTIONS(169),
    [anon_sym_LT] = ACTIONS(167),
    [aux_sym__lexical_identifier_token1] = ACTIONS(167),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(169),
    [anon_sym_RPAREN] = ACTIONS(169),
    [anon_sym_BANGin] = ACTIONS(169),
    [anon_sym_PERCENT] = ACTIONS(169),
    [anon_sym_AMP_AMP] = ACTIONS(169),
    [anon_sym_STAR] = ACTIONS(169),
    [sym__not_is] = ACTIONS(169),
  },
  [157] = {
    [sym_binary_expression] = STATE(173),
    [sym__lexical_identifier] = STATE(207),
    [sym__prefix_unary_operator] = STATE(150),
    [sym_annotation] = STATE(150),
    [sym_simple_identifier] = STATE(154),
    [sym__expression] = STATE(173),
    [sym_label] = STATE(150),
    [sym_unary_expression] = STATE(173),
    [anon_sym_DASH] = ACTIONS(105),
    [anon_sym_DASH_DASH] = ACTIONS(107),
    [aux_sym__lexical_identifier_token1] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(105),
    [aux_sym__lexical_identifier_token2] = ACTIONS(109),
    [anon_sym_BANG] = ACTIONS(107),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(111),
    [anon_sym_PLUS_PLUS] = ACTIONS(107),
  },
  [158] = {
    [sym_binary_expression] = STATE(174),
    [sym__lexical_identifier] = STATE(207),
    [sym__prefix_unary_operator] = STATE(150),
    [sym_annotation] = STATE(150),
    [sym_simple_identifier] = STATE(154),
    [sym__expression] = STATE(174),
    [sym_label] = STATE(150),
    [sym_unary_expression] = STATE(174),
    [anon_sym_DASH] = ACTIONS(105),
    [anon_sym_DASH_DASH] = ACTIONS(107),
    [aux_sym__lexical_identifier_token1] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(105),
    [aux_sym__lexical_identifier_token2] = ACTIONS(109),
    [anon_sym_BANG] = ACTIONS(107),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(111),
    [anon_sym_PLUS_PLUS] = ACTIONS(107),
  },
  [159] = {
    [sym_binary_expression] = STATE(175),
    [sym__lexical_identifier] = STATE(207),
    [sym__prefix_unary_operator] = STATE(150),
    [sym_annotation] = STATE(150),
    [sym_simple_identifier] = STATE(154),
    [sym__expression] = STATE(175),
    [sym_label] = STATE(150),
    [sym_unary_expression] = STATE(175),
    [anon_sym_DASH] = ACTIONS(105),
    [anon_sym_DASH_DASH] = ACTIONS(107),
    [aux_sym__lexical_identifier_token1] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(105),
    [aux_sym__lexical_identifier_token2] = ACTIONS(109),
    [anon_sym_BANG] = ACTIONS(107),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(111),
    [anon_sym_PLUS_PLUS] = ACTIONS(107),
  },
  [160] = {
    [sym_binary_expression] = STATE(176),
    [sym__lexical_identifier] = STATE(207),
    [sym__prefix_unary_operator] = STATE(150),
    [sym_annotation] = STATE(150),
    [sym_simple_identifier] = STATE(154),
    [sym__expression] = STATE(176),
    [sym_label] = STATE(150),
    [sym_unary_expression] = STATE(176),
    [anon_sym_DASH] = ACTIONS(105),
    [anon_sym_DASH_DASH] = ACTIONS(107),
    [aux_sym__lexical_identifier_token1] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(105),
    [aux_sym__lexical_identifier_token2] = ACTIONS(109),
    [anon_sym_BANG] = ACTIONS(107),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(111),
    [anon_sym_PLUS_PLUS] = ACTIONS(107),
  },
  [161] = {
    [sym_binary_expression] = STATE(177),
    [sym__lexical_identifier] = STATE(207),
    [sym__prefix_unary_operator] = STATE(150),
    [sym_annotation] = STATE(150),
    [sym_simple_identifier] = STATE(154),
    [sym__expression] = STATE(177),
    [sym_label] = STATE(150),
    [sym_unary_expression] = STATE(177),
    [anon_sym_DASH] = ACTIONS(105),
    [anon_sym_DASH_DASH] = ACTIONS(107),
    [aux_sym__lexical_identifier_token1] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(105),
    [aux_sym__lexical_identifier_token2] = ACTIONS(109),
    [anon_sym_BANG] = ACTIONS(107),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(111),
    [anon_sym_PLUS_PLUS] = ACTIONS(107),
  },
  [162] = {
    [sym_binary_expression] = STATE(178),
    [sym__lexical_identifier] = STATE(207),
    [sym__prefix_unary_operator] = STATE(150),
    [sym_annotation] = STATE(150),
    [sym_simple_identifier] = STATE(154),
    [sym__expression] = STATE(178),
    [sym_label] = STATE(150),
    [sym_unary_expression] = STATE(178),
    [anon_sym_DASH] = ACTIONS(105),
    [anon_sym_DASH_DASH] = ACTIONS(107),
    [aux_sym__lexical_identifier_token1] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(105),
    [aux_sym__lexical_identifier_token2] = ACTIONS(109),
    [anon_sym_BANG] = ACTIONS(107),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(111),
    [anon_sym_PLUS_PLUS] = ACTIONS(107),
  },
  [163] = {
    [sym_binary_expression] = STATE(179),
    [sym__lexical_identifier] = STATE(207),
    [sym__prefix_unary_operator] = STATE(150),
    [sym_annotation] = STATE(150),
    [sym_simple_identifier] = STATE(154),
    [sym__expression] = STATE(179),
    [sym_label] = STATE(150),
    [sym_unary_expression] = STATE(179),
    [anon_sym_DASH] = ACTIONS(105),
    [anon_sym_DASH_DASH] = ACTIONS(107),
    [aux_sym__lexical_identifier_token1] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(105),
    [aux_sym__lexical_identifier_token2] = ACTIONS(109),
    [anon_sym_BANG] = ACTIONS(107),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(111),
    [anon_sym_PLUS_PLUS] = ACTIONS(107),
  },
  [164] = {
    [sym_binary_expression] = STATE(180),
    [sym__lexical_identifier] = STATE(207),
    [sym__prefix_unary_operator] = STATE(150),
    [sym_annotation] = STATE(150),
    [sym_simple_identifier] = STATE(154),
    [sym__expression] = STATE(180),
    [sym_label] = STATE(150),
    [sym_unary_expression] = STATE(180),
    [anon_sym_DASH] = ACTIONS(105),
    [anon_sym_DASH_DASH] = ACTIONS(107),
    [aux_sym__lexical_identifier_token1] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(105),
    [aux_sym__lexical_identifier_token2] = ACTIONS(109),
    [anon_sym_BANG] = ACTIONS(107),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(111),
    [anon_sym_PLUS_PLUS] = ACTIONS(107),
  },
  [165] = {
    [anon_sym_GT] = ACTIONS(167),
    [aux_sym__lexical_identifier_token2] = ACTIONS(169),
    [anon_sym_LT_EQ] = ACTIONS(169),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(169),
    [anon_sym_BANG_BANG] = ACTIONS(169),
    [anon_sym_PLUS_PLUS] = ACTIONS(169),
    [anon_sym_is] = ACTIONS(167),
    [anon_sym_as_QMARK] = ACTIONS(169),
    [anon_sym_DASH] = ACTIONS(167),
    [anon_sym_DOT_DOT] = ACTIONS(169),
    [anon_sym_in] = ACTIONS(167),
    [anon_sym_BANG_EQ] = ACTIONS(167),
    [anon_sym_EQ_EQ] = ACTIONS(167),
    [anon_sym_DASH_DASH] = ACTIONS(169),
    [anon_sym_PLUS] = ACTIONS(167),
    [anon_sym_GT_EQ] = ACTIONS(169),
    [anon_sym_as] = ACTIONS(167),
    [anon_sym_QMARK_COLON] = ACTIONS(169),
    [anon_sym_SLASH] = ACTIONS(169),
    [anon_sym_PIPE_PIPE] = ACTIONS(169),
    [anon_sym_LT] = ACTIONS(167),
    [aux_sym__lexical_identifier_token1] = ACTIONS(167),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(169),
    [anon_sym_RPAREN] = ACTIONS(169),
    [anon_sym_BANGin] = ACTIONS(169),
    [anon_sym_PERCENT] = ACTIONS(169),
    [anon_sym_AMP_AMP] = ACTIONS(169),
    [anon_sym_STAR] = ACTIONS(169),
    [sym__not_is] = ACTIONS(169),
  },
  [166] = {
    [sym__lexical_identifier] = STATE(207),
    [sym_simple_identifier] = STATE(181),
    [sym__type] = STATE(181),
    [aux_sym__lexical_identifier_token1] = ACTIONS(109),
    [aux_sym__lexical_identifier_token2] = ACTIONS(109),
  },
  [167] = {
    [sym_binary_expression] = STATE(182),
    [sym__lexical_identifier] = STATE(207),
    [sym__prefix_unary_operator] = STATE(150),
    [sym_annotation] = STATE(150),
    [sym_simple_identifier] = STATE(154),
    [sym__expression] = STATE(182),
    [sym_label] = STATE(150),
    [sym_unary_expression] = STATE(182),
    [anon_sym_DASH] = ACTIONS(105),
    [anon_sym_DASH_DASH] = ACTIONS(107),
    [aux_sym__lexical_identifier_token1] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(105),
    [aux_sym__lexical_identifier_token2] = ACTIONS(109),
    [anon_sym_BANG] = ACTIONS(107),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(111),
    [anon_sym_PLUS_PLUS] = ACTIONS(107),
  },
  [168] = {
    [sym_binary_expression] = STATE(183),
    [sym__lexical_identifier] = STATE(207),
    [sym__prefix_unary_operator] = STATE(150),
    [sym_annotation] = STATE(150),
    [sym_simple_identifier] = STATE(154),
    [sym__expression] = STATE(183),
    [sym_label] = STATE(150),
    [sym_unary_expression] = STATE(183),
    [anon_sym_DASH] = ACTIONS(105),
    [anon_sym_DASH_DASH] = ACTIONS(107),
    [aux_sym__lexical_identifier_token1] = ACTIONS(109),
    [anon_sym_PLUS] = ACTIONS(105),
    [aux_sym__lexical_identifier_token2] = ACTIONS(109),
    [anon_sym_BANG] = ACTIONS(107),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(111),
    [anon_sym_PLUS_PLUS] = ACTIONS(107),
  },
  [169] = {
    [anon_sym_DASH] = ACTIONS(235),
    [anon_sym_DASH_DASH] = ACTIONS(237),
    [aux_sym__lexical_identifier_token1] = ACTIONS(237),
    [anon_sym_PLUS] = ACTIONS(235),
    [aux_sym__lexical_identifier_token2] = ACTIONS(237),
    [anon_sym_BANG] = ACTIONS(237),
    [anon_sym_AT] = ACTIONS(237),
    [anon_sym_STAR] = ACTIONS(237),
    [anon_sym_PLUS_PLUS] = ACTIONS(237),
  },
  [170] = {
    [aux_sym_identifier_repeat1] = STATE(185),
    [anon_sym_while] = ACTIONS(294),
    [anon_sym_interface] = ACTIONS(294),
    [anon_sym_DASH_DASH] = ACTIONS(294),
    [anon_sym_import] = ACTIONS(294),
    [anon_sym_PLUS] = ACTIONS(294),
    [aux_sym__lexical_identifier_token2] = ACTIONS(294),
    [anon_sym_DOT] = ACTIONS(481),
    [anon_sym_AT] = ACTIONS(294),
    [anon_sym_do] = ACTIONS(294),
    [anon_sym_class] = ACTIONS(294),
    [anon_sym_fun] = ACTIONS(294),
    [anon_sym_PLUS_PLUS] = ACTIONS(294),
    [anon_sym_DASH] = ACTIONS(294),
    [aux_sym__lexical_identifier_token1] = ACTIONS(294),
    [ts_builtin_sym_end] = ACTIONS(296),
    [anon_sym_object] = ACTIONS(294),
    [anon_sym_BANG] = ACTIONS(294),
    [anon_sym_typealias] = ACTIONS(294),
    [anon_sym_STAR] = ACTIONS(294),
    [anon_sym_for] = ACTIONS(294),
    [aux_sym__semi_token1] = ACTIONS(296),
  },
  [171] = {
    [anon_sym_interface] = ACTIONS(487),
    [anon_sym_typealias] = ACTIONS(487),
    [anon_sym_RBRACE] = ACTIONS(487),
    [anon_sym_class] = ACTIONS(487),
    [anon_sym_fun] = ACTIONS(487),
    [anon_sym_object] = ACTIONS(487),
    [aux_sym__semi_token1] = ACTIONS(304),
  },
  [172] = {
    [sym__lexical_identifier] = STATE(209),
    [sym_simple_identifier] = STATE(118),
    [sym__type] = STATE(118),
    [aux_sym__lexical_identifier_token1] = ACTIONS(479),
    [aux_sym__lexical_identifier_token2] = ACTIONS(479),
  },
  [173] = {
    [sym__lexical_identifier] = STATE(206),
    [sym__additive_operator] = STATE(161),
    [sym__multiplicative_operator] = STATE(162),
    [sym__equality_operator] = STATE(163),
    [sym__comparison_operator] = STATE(164),
    [sym__as_operator] = STATE(166),
    [sym__postfix_unary_suffix] = STATE(165),
    [sym_simple_identifier] = STATE(167),
    [sym__in_operator] = STATE(168),
    [sym__is_operator] = STATE(168),
    [sym__postfix_unary_operator] = STATE(165),
    [anon_sym_GT] = ACTIONS(246),
    [aux_sym__lexical_identifier_token2] = ACTIONS(248),
    [anon_sym_LT_EQ] = ACTIONS(250),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(252),
    [anon_sym_BANG_BANG] = ACTIONS(254),
    [anon_sym_PLUS_PLUS] = ACTIONS(254),
    [anon_sym_is] = ACTIONS(256),
    [anon_sym_as_QMARK] = ACTIONS(258),
    [anon_sym_DASH] = ACTIONS(260),
    [anon_sym_DOT_DOT] = ACTIONS(262),
    [anon_sym_in] = ACTIONS(256),
    [anon_sym_BANG_EQ] = ACTIONS(264),
    [anon_sym_EQ_EQ] = ACTIONS(264),
    [anon_sym_DASH_DASH] = ACTIONS(254),
    [anon_sym_PLUS] = ACTIONS(260),
    [anon_sym_GT_EQ] = ACTIONS(250),
    [anon_sym_as] = ACTIONS(268),
    [anon_sym_QMARK_COLON] = ACTIONS(270),
    [anon_sym_SLASH] = ACTIONS(266),
    [anon_sym_PIPE_PIPE] = ACTIONS(338),
    [anon_sym_LT] = ACTIONS(246),
    [aux_sym__lexical_identifier_token1] = ACTIONS(65),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(252),
    [anon_sym_RPAREN] = ACTIONS(338),
    [anon_sym_BANGin] = ACTIONS(276),
    [anon_sym_PERCENT] = ACTIONS(266),
    [anon_sym_AMP_AMP] = ACTIONS(278),
    [anon_sym_STAR] = ACTIONS(266),
    [sym__not_is] = ACTIONS(276),
  },
  [174] = {
    [sym__lexical_identifier] = STATE(206),
    [sym__additive_operator] = STATE(161),
    [sym__multiplicative_operator] = STATE(162),
    [sym__equality_operator] = STATE(163),
    [sym__comparison_operator] = STATE(164),
    [sym__as_operator] = STATE(166),
    [sym__postfix_unary_suffix] = STATE(165),
    [sym_simple_identifier] = STATE(167),
    [sym__in_operator] = STATE(168),
    [sym__is_operator] = STATE(168),
    [sym__postfix_unary_operator] = STATE(165),
    [anon_sym_GT] = ACTIONS(336),
    [aux_sym__lexical_identifier_token2] = ACTIONS(248),
    [anon_sym_LT_EQ] = ACTIONS(338),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(338),
    [anon_sym_BANG_BANG] = ACTIONS(254),
    [anon_sym_PLUS_PLUS] = ACTIONS(254),
    [anon_sym_is] = ACTIONS(336),
    [anon_sym_as_QMARK] = ACTIONS(258),
    [anon_sym_DASH] = ACTIONS(260),
    [anon_sym_DOT_DOT] = ACTIONS(262),
    [anon_sym_in] = ACTIONS(336),
    [anon_sym_BANG_EQ] = ACTIONS(336),
    [anon_sym_EQ_EQ] = ACTIONS(336),
    [anon_sym_DASH_DASH] = ACTIONS(254),
    [anon_sym_PLUS] = ACTIONS(260),
    [anon_sym_GT_EQ] = ACTIONS(338),
    [anon_sym_as] = ACTIONS(268),
    [anon_sym_QMARK_COLON] = ACTIONS(338),
    [anon_sym_SLASH] = ACTIONS(266),
    [anon_sym_PIPE_PIPE] = ACTIONS(338),
    [anon_sym_LT] = ACTIONS(336),
    [aux_sym__lexical_identifier_token1] = ACTIONS(65),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(338),
    [anon_sym_RPAREN] = ACTIONS(338),
    [anon_sym_BANGin] = ACTIONS(338),
    [anon_sym_PERCENT] = ACTIONS(266),
    [anon_sym_AMP_AMP] = ACTIONS(338),
    [anon_sym_STAR] = ACTIONS(266),
    [sym__not_is] = ACTIONS(338),
  },
  [175] = {
    [sym__lexical_identifier] = STATE(206),
    [sym__additive_operator] = STATE(161),
    [sym__multiplicative_operator] = STATE(162),
    [sym__equality_operator] = STATE(163),
    [sym__comparison_operator] = STATE(164),
    [sym__as_operator] = STATE(166),
    [sym__postfix_unary_suffix] = STATE(165),
    [sym_simple_identifier] = STATE(167),
    [sym__in_operator] = STATE(168),
    [sym__is_operator] = STATE(168),
    [sym__postfix_unary_operator] = STATE(165),
    [anon_sym_GT] = ACTIONS(336),
    [aux_sym__lexical_identifier_token2] = ACTIONS(338),
    [anon_sym_LT_EQ] = ACTIONS(338),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(338),
    [anon_sym_BANG_BANG] = ACTIONS(254),
    [anon_sym_PLUS_PLUS] = ACTIONS(254),
    [anon_sym_is] = ACTIONS(336),
    [anon_sym_as_QMARK] = ACTIONS(258),
    [anon_sym_DASH] = ACTIONS(260),
    [anon_sym_DOT_DOT] = ACTIONS(338),
    [anon_sym_in] = ACTIONS(336),
    [anon_sym_BANG_EQ] = ACTIONS(336),
    [anon_sym_EQ_EQ] = ACTIONS(336),
    [anon_sym_DASH_DASH] = ACTIONS(254),
    [anon_sym_PLUS] = ACTIONS(260),
    [anon_sym_GT_EQ] = ACTIONS(338),
    [anon_sym_as] = ACTIONS(268),
    [anon_sym_QMARK_COLON] = ACTIONS(338),
    [anon_sym_SLASH] = ACTIONS(266),
    [anon_sym_PIPE_PIPE] = ACTIONS(338),
    [anon_sym_LT] = ACTIONS(336),
    [aux_sym__lexical_identifier_token1] = ACTIONS(336),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(338),
    [anon_sym_RPAREN] = ACTIONS(338),
    [anon_sym_BANGin] = ACTIONS(338),
    [anon_sym_PERCENT] = ACTIONS(266),
    [anon_sym_AMP_AMP] = ACTIONS(338),
    [anon_sym_STAR] = ACTIONS(266),
    [sym__not_is] = ACTIONS(338),
  },
  [176] = {
    [sym__lexical_identifier] = STATE(206),
    [sym__additive_operator] = STATE(161),
    [sym__multiplicative_operator] = STATE(162),
    [sym__equality_operator] = STATE(163),
    [sym__comparison_operator] = STATE(164),
    [sym__as_operator] = STATE(166),
    [sym__postfix_unary_suffix] = STATE(165),
    [sym_simple_identifier] = STATE(167),
    [sym__in_operator] = STATE(168),
    [sym__is_operator] = STATE(168),
    [sym__postfix_unary_operator] = STATE(165),
    [anon_sym_GT] = ACTIONS(246),
    [aux_sym__lexical_identifier_token2] = ACTIONS(248),
    [anon_sym_LT_EQ] = ACTIONS(250),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(252),
    [anon_sym_BANG_BANG] = ACTIONS(254),
    [anon_sym_PLUS_PLUS] = ACTIONS(254),
    [anon_sym_is] = ACTIONS(256),
    [anon_sym_as_QMARK] = ACTIONS(258),
    [anon_sym_DASH] = ACTIONS(260),
    [anon_sym_DOT_DOT] = ACTIONS(262),
    [anon_sym_in] = ACTIONS(256),
    [anon_sym_BANG_EQ] = ACTIONS(264),
    [anon_sym_EQ_EQ] = ACTIONS(264),
    [anon_sym_DASH_DASH] = ACTIONS(254),
    [anon_sym_PLUS] = ACTIONS(260),
    [anon_sym_GT_EQ] = ACTIONS(250),
    [anon_sym_as] = ACTIONS(268),
    [anon_sym_QMARK_COLON] = ACTIONS(270),
    [anon_sym_SLASH] = ACTIONS(266),
    [anon_sym_PIPE_PIPE] = ACTIONS(338),
    [anon_sym_LT] = ACTIONS(246),
    [aux_sym__lexical_identifier_token1] = ACTIONS(65),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(252),
    [anon_sym_RPAREN] = ACTIONS(338),
    [anon_sym_BANGin] = ACTIONS(276),
    [anon_sym_PERCENT] = ACTIONS(266),
    [anon_sym_AMP_AMP] = ACTIONS(338),
    [anon_sym_STAR] = ACTIONS(266),
    [sym__not_is] = ACTIONS(276),
  },
  [177] = {
    [sym__lexical_identifier] = STATE(206),
    [sym__additive_operator] = STATE(161),
    [sym__multiplicative_operator] = STATE(162),
    [sym__equality_operator] = STATE(163),
    [sym__comparison_operator] = STATE(164),
    [sym__as_operator] = STATE(166),
    [sym__postfix_unary_suffix] = STATE(165),
    [sym_simple_identifier] = STATE(167),
    [sym__in_operator] = STATE(168),
    [sym__is_operator] = STATE(168),
    [sym__postfix_unary_operator] = STATE(165),
    [anon_sym_GT] = ACTIONS(336),
    [aux_sym__lexical_identifier_token2] = ACTIONS(338),
    [anon_sym_LT_EQ] = ACTIONS(338),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(338),
    [anon_sym_BANG_BANG] = ACTIONS(254),
    [anon_sym_PLUS_PLUS] = ACTIONS(254),
    [anon_sym_is] = ACTIONS(336),
    [anon_sym_as_QMARK] = ACTIONS(258),
    [anon_sym_DASH] = ACTIONS(336),
    [anon_sym_DOT_DOT] = ACTIONS(338),
    [anon_sym_in] = ACTIONS(336),
    [anon_sym_BANG_EQ] = ACTIONS(336),
    [anon_sym_EQ_EQ] = ACTIONS(336),
    [anon_sym_DASH_DASH] = ACTIONS(254),
    [anon_sym_PLUS] = ACTIONS(336),
    [anon_sym_GT_EQ] = ACTIONS(338),
    [anon_sym_as] = ACTIONS(268),
    [anon_sym_QMARK_COLON] = ACTIONS(338),
    [anon_sym_SLASH] = ACTIONS(266),
    [anon_sym_PIPE_PIPE] = ACTIONS(338),
    [anon_sym_LT] = ACTIONS(336),
    [aux_sym__lexical_identifier_token1] = ACTIONS(336),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(338),
    [anon_sym_RPAREN] = ACTIONS(338),
    [anon_sym_BANGin] = ACTIONS(338),
    [anon_sym_PERCENT] = ACTIONS(266),
    [anon_sym_AMP_AMP] = ACTIONS(338),
    [anon_sym_STAR] = ACTIONS(266),
    [sym__not_is] = ACTIONS(338),
  },
  [178] = {
    [sym__lexical_identifier] = STATE(206),
    [sym__additive_operator] = STATE(161),
    [sym__multiplicative_operator] = STATE(162),
    [sym__equality_operator] = STATE(163),
    [sym__comparison_operator] = STATE(164),
    [sym__as_operator] = STATE(166),
    [sym__postfix_unary_suffix] = STATE(165),
    [sym_simple_identifier] = STATE(167),
    [sym__in_operator] = STATE(168),
    [sym__is_operator] = STATE(168),
    [sym__postfix_unary_operator] = STATE(165),
    [anon_sym_GT] = ACTIONS(336),
    [aux_sym__lexical_identifier_token2] = ACTIONS(338),
    [anon_sym_LT_EQ] = ACTIONS(338),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(338),
    [anon_sym_BANG_BANG] = ACTIONS(254),
    [anon_sym_PLUS_PLUS] = ACTIONS(254),
    [anon_sym_is] = ACTIONS(336),
    [anon_sym_as_QMARK] = ACTIONS(258),
    [anon_sym_DASH] = ACTIONS(336),
    [anon_sym_DOT_DOT] = ACTIONS(338),
    [anon_sym_in] = ACTIONS(336),
    [anon_sym_BANG_EQ] = ACTIONS(336),
    [anon_sym_EQ_EQ] = ACTIONS(336),
    [anon_sym_DASH_DASH] = ACTIONS(254),
    [anon_sym_PLUS] = ACTIONS(336),
    [anon_sym_GT_EQ] = ACTIONS(338),
    [anon_sym_as] = ACTIONS(268),
    [anon_sym_QMARK_COLON] = ACTIONS(338),
    [anon_sym_SLASH] = ACTIONS(338),
    [anon_sym_PIPE_PIPE] = ACTIONS(338),
    [anon_sym_LT] = ACTIONS(336),
    [aux_sym__lexical_identifier_token1] = ACTIONS(336),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(338),
    [anon_sym_RPAREN] = ACTIONS(338),
    [anon_sym_BANGin] = ACTIONS(338),
    [anon_sym_PERCENT] = ACTIONS(338),
    [anon_sym_AMP_AMP] = ACTIONS(338),
    [anon_sym_STAR] = ACTIONS(338),
    [sym__not_is] = ACTIONS(338),
  },
  [179] = {
    [sym__lexical_identifier] = STATE(206),
    [sym__additive_operator] = STATE(161),
    [sym__multiplicative_operator] = STATE(162),
    [sym__equality_operator] = STATE(163),
    [sym__comparison_operator] = STATE(164),
    [sym__as_operator] = STATE(166),
    [sym__postfix_unary_suffix] = STATE(165),
    [sym_simple_identifier] = STATE(167),
    [sym__in_operator] = STATE(168),
    [sym__is_operator] = STATE(168),
    [sym__postfix_unary_operator] = STATE(165),
    [anon_sym_GT] = ACTIONS(246),
    [aux_sym__lexical_identifier_token2] = ACTIONS(248),
    [anon_sym_LT_EQ] = ACTIONS(250),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(338),
    [anon_sym_BANG_BANG] = ACTIONS(254),
    [anon_sym_PLUS_PLUS] = ACTIONS(254),
    [anon_sym_is] = ACTIONS(256),
    [anon_sym_as_QMARK] = ACTIONS(258),
    [anon_sym_DASH] = ACTIONS(260),
    [anon_sym_DOT_DOT] = ACTIONS(262),
    [anon_sym_in] = ACTIONS(256),
    [anon_sym_BANG_EQ] = ACTIONS(336),
    [anon_sym_EQ_EQ] = ACTIONS(336),
    [anon_sym_DASH_DASH] = ACTIONS(254),
    [anon_sym_PLUS] = ACTIONS(260),
    [anon_sym_GT_EQ] = ACTIONS(250),
    [anon_sym_as] = ACTIONS(268),
    [anon_sym_QMARK_COLON] = ACTIONS(270),
    [anon_sym_SLASH] = ACTIONS(266),
    [anon_sym_PIPE_PIPE] = ACTIONS(338),
    [anon_sym_LT] = ACTIONS(246),
    [aux_sym__lexical_identifier_token1] = ACTIONS(65),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(338),
    [anon_sym_RPAREN] = ACTIONS(338),
    [anon_sym_BANGin] = ACTIONS(276),
    [anon_sym_PERCENT] = ACTIONS(266),
    [anon_sym_AMP_AMP] = ACTIONS(338),
    [anon_sym_STAR] = ACTIONS(266),
    [sym__not_is] = ACTIONS(276),
  },
  [180] = {
    [sym__lexical_identifier] = STATE(206),
    [sym__additive_operator] = STATE(161),
    [sym__multiplicative_operator] = STATE(162),
    [sym__equality_operator] = STATE(163),
    [sym__comparison_operator] = STATE(164),
    [sym__as_operator] = STATE(166),
    [sym__postfix_unary_suffix] = STATE(165),
    [sym_simple_identifier] = STATE(167),
    [sym__in_operator] = STATE(168),
    [sym__is_operator] = STATE(168),
    [sym__postfix_unary_operator] = STATE(165),
    [anon_sym_GT] = ACTIONS(336),
    [aux_sym__lexical_identifier_token2] = ACTIONS(248),
    [anon_sym_LT_EQ] = ACTIONS(338),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(338),
    [anon_sym_BANG_BANG] = ACTIONS(254),
    [anon_sym_PLUS_PLUS] = ACTIONS(254),
    [anon_sym_is] = ACTIONS(256),
    [anon_sym_as_QMARK] = ACTIONS(258),
    [anon_sym_DASH] = ACTIONS(260),
    [anon_sym_DOT_DOT] = ACTIONS(262),
    [anon_sym_in] = ACTIONS(256),
    [anon_sym_BANG_EQ] = ACTIONS(336),
    [anon_sym_EQ_EQ] = ACTIONS(336),
    [anon_sym_DASH_DASH] = ACTIONS(254),
    [anon_sym_PLUS] = ACTIONS(260),
    [anon_sym_GT_EQ] = ACTIONS(338),
    [anon_sym_as] = ACTIONS(268),
    [anon_sym_QMARK_COLON] = ACTIONS(270),
    [anon_sym_SLASH] = ACTIONS(266),
    [anon_sym_PIPE_PIPE] = ACTIONS(338),
    [anon_sym_LT] = ACTIONS(336),
    [aux_sym__lexical_identifier_token1] = ACTIONS(65),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(338),
    [anon_sym_RPAREN] = ACTIONS(338),
    [anon_sym_BANGin] = ACTIONS(276),
    [anon_sym_PERCENT] = ACTIONS(266),
    [anon_sym_AMP_AMP] = ACTIONS(338),
    [anon_sym_STAR] = ACTIONS(266),
    [sym__not_is] = ACTIONS(276),
  },
  [181] = {
    [anon_sym_GT] = ACTIONS(340),
    [aux_sym__lexical_identifier_token2] = ACTIONS(342),
    [anon_sym_LT_EQ] = ACTIONS(342),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(342),
    [anon_sym_BANG_BANG] = ACTIONS(342),
    [anon_sym_PLUS_PLUS] = ACTIONS(342),
    [anon_sym_is] = ACTIONS(340),
    [anon_sym_as_QMARK] = ACTIONS(342),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_DOT_DOT] = ACTIONS(342),
    [anon_sym_in] = ACTIONS(340),
    [anon_sym_BANG_EQ] = ACTIONS(340),
    [anon_sym_EQ_EQ] = ACTIONS(340),
    [anon_sym_DASH_DASH] = ACTIONS(342),
    [anon_sym_PLUS] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(342),
    [anon_sym_as] = ACTIONS(340),
    [anon_sym_QMARK_COLON] = ACTIONS(342),
    [anon_sym_SLASH] = ACTIONS(342),
    [anon_sym_PIPE_PIPE] = ACTIONS(342),
    [anon_sym_LT] = ACTIONS(340),
    [aux_sym__lexical_identifier_token1] = ACTIONS(340),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(342),
    [anon_sym_RPAREN] = ACTIONS(342),
    [anon_sym_BANGin] = ACTIONS(342),
    [anon_sym_PERCENT] = ACTIONS(342),
    [anon_sym_AMP_AMP] = ACTIONS(342),
    [anon_sym_STAR] = ACTIONS(342),
    [sym__not_is] = ACTIONS(342),
  },
  [182] = {
    [sym__lexical_identifier] = STATE(206),
    [sym__additive_operator] = STATE(161),
    [sym__multiplicative_operator] = STATE(162),
    [sym__equality_operator] = STATE(163),
    [sym__comparison_operator] = STATE(164),
    [sym__as_operator] = STATE(166),
    [sym__postfix_unary_suffix] = STATE(165),
    [sym_simple_identifier] = STATE(167),
    [sym__in_operator] = STATE(168),
    [sym__is_operator] = STATE(168),
    [sym__postfix_unary_operator] = STATE(165),
    [anon_sym_GT] = ACTIONS(336),
    [aux_sym__lexical_identifier_token2] = ACTIONS(338),
    [anon_sym_LT_EQ] = ACTIONS(338),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(338),
    [anon_sym_BANG_BANG] = ACTIONS(254),
    [anon_sym_PLUS_PLUS] = ACTIONS(254),
    [anon_sym_is] = ACTIONS(336),
    [anon_sym_as_QMARK] = ACTIONS(258),
    [anon_sym_DASH] = ACTIONS(260),
    [anon_sym_DOT_DOT] = ACTIONS(262),
    [anon_sym_in] = ACTIONS(336),
    [anon_sym_BANG_EQ] = ACTIONS(336),
    [anon_sym_EQ_EQ] = ACTIONS(336),
    [anon_sym_DASH_DASH] = ACTIONS(254),
    [anon_sym_PLUS] = ACTIONS(260),
    [anon_sym_GT_EQ] = ACTIONS(338),
    [anon_sym_as] = ACTIONS(268),
    [anon_sym_QMARK_COLON] = ACTIONS(338),
    [anon_sym_SLASH] = ACTIONS(266),
    [anon_sym_PIPE_PIPE] = ACTIONS(338),
    [anon_sym_LT] = ACTIONS(336),
    [aux_sym__lexical_identifier_token1] = ACTIONS(336),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(338),
    [anon_sym_RPAREN] = ACTIONS(338),
    [anon_sym_BANGin] = ACTIONS(338),
    [anon_sym_PERCENT] = ACTIONS(266),
    [anon_sym_AMP_AMP] = ACTIONS(338),
    [anon_sym_STAR] = ACTIONS(266),
    [sym__not_is] = ACTIONS(338),
  },
  [183] = {
    [sym__lexical_identifier] = STATE(206),
    [sym__additive_operator] = STATE(161),
    [sym__multiplicative_operator] = STATE(162),
    [sym__equality_operator] = STATE(163),
    [sym__comparison_operator] = STATE(164),
    [sym__as_operator] = STATE(166),
    [sym__postfix_unary_suffix] = STATE(165),
    [sym_simple_identifier] = STATE(167),
    [sym__in_operator] = STATE(168),
    [sym__is_operator] = STATE(168),
    [sym__postfix_unary_operator] = STATE(165),
    [anon_sym_GT] = ACTIONS(336),
    [aux_sym__lexical_identifier_token2] = ACTIONS(248),
    [anon_sym_LT_EQ] = ACTIONS(338),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(338),
    [anon_sym_BANG_BANG] = ACTIONS(254),
    [anon_sym_PLUS_PLUS] = ACTIONS(254),
    [anon_sym_is] = ACTIONS(336),
    [anon_sym_as_QMARK] = ACTIONS(258),
    [anon_sym_DASH] = ACTIONS(260),
    [anon_sym_DOT_DOT] = ACTIONS(262),
    [anon_sym_in] = ACTIONS(336),
    [anon_sym_BANG_EQ] = ACTIONS(336),
    [anon_sym_EQ_EQ] = ACTIONS(336),
    [anon_sym_DASH_DASH] = ACTIONS(254),
    [anon_sym_PLUS] = ACTIONS(260),
    [anon_sym_GT_EQ] = ACTIONS(338),
    [anon_sym_as] = ACTIONS(268),
    [anon_sym_QMARK_COLON] = ACTIONS(270),
    [anon_sym_SLASH] = ACTIONS(266),
    [anon_sym_PIPE_PIPE] = ACTIONS(338),
    [anon_sym_LT] = ACTIONS(336),
    [aux_sym__lexical_identifier_token1] = ACTIONS(65),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(338),
    [anon_sym_RPAREN] = ACTIONS(338),
    [anon_sym_BANGin] = ACTIONS(338),
    [anon_sym_PERCENT] = ACTIONS(266),
    [anon_sym_AMP_AMP] = ACTIONS(338),
    [anon_sym_STAR] = ACTIONS(266),
    [sym__not_is] = ACTIONS(338),
  },
  [184] = {
    [anon_sym_while] = ACTIONS(362),
    [anon_sym_interface] = ACTIONS(362),
    [anon_sym_DASH_DASH] = ACTIONS(362),
    [anon_sym_import] = ACTIONS(362),
    [anon_sym_PLUS] = ACTIONS(362),
    [anon_sym_DOT] = ACTIONS(362),
    [aux_sym__lexical_identifier_token2] = ACTIONS(362),
    [anon_sym_AT] = ACTIONS(362),
    [anon_sym_do] = ACTIONS(362),
    [anon_sym_class] = ACTIONS(362),
    [anon_sym_fun] = ACTIONS(362),
    [anon_sym_PLUS_PLUS] = ACTIONS(362),
    [anon_sym_DASH] = ACTIONS(362),
    [aux_sym__lexical_identifier_token1] = ACTIONS(362),
    [ts_builtin_sym_end] = ACTIONS(364),
    [anon_sym_object] = ACTIONS(362),
    [anon_sym_BANG] = ACTIONS(362),
    [anon_sym_typealias] = ACTIONS(362),
    [anon_sym_STAR] = ACTIONS(362),
    [anon_sym_for] = ACTIONS(362),
    [aux_sym__semi_token1] = ACTIONS(364),
  },
  [185] = {
    [aux_sym_identifier_repeat1] = STATE(185),
    [anon_sym_while] = ACTIONS(362),
    [anon_sym_interface] = ACTIONS(362),
    [anon_sym_DASH_DASH] = ACTIONS(362),
    [anon_sym_import] = ACTIONS(362),
    [anon_sym_PLUS] = ACTIONS(362),
    [anon_sym_DOT] = ACTIONS(489),
    [aux_sym__lexical_identifier_token2] = ACTIONS(362),
    [anon_sym_AT] = ACTIONS(362),
    [anon_sym_do] = ACTIONS(362),
    [anon_sym_class] = ACTIONS(362),
    [anon_sym_fun] = ACTIONS(362),
    [anon_sym_PLUS_PLUS] = ACTIONS(362),
    [anon_sym_DASH] = ACTIONS(362),
    [aux_sym__lexical_identifier_token1] = ACTIONS(362),
    [ts_builtin_sym_end] = ACTIONS(364),
    [anon_sym_object] = ACTIONS(362),
    [anon_sym_BANG] = ACTIONS(362),
    [anon_sym_typealias] = ACTIONS(362),
    [anon_sym_STAR] = ACTIONS(362),
    [anon_sym_for] = ACTIONS(362),
    [aux_sym__semi_token1] = ACTIONS(364),
  },
  [186] = {
    [anon_sym_interface] = ACTIONS(492),
    [anon_sym_typealias] = ACTIONS(492),
    [anon_sym_RBRACE] = ACTIONS(492),
    [anon_sym_class] = ACTIONS(492),
    [anon_sym_fun] = ACTIONS(492),
    [anon_sym_object] = ACTIONS(492),
    [aux_sym__semi_token1] = ACTIONS(379),
  },
  [187] = {
    [sym_binary_expression] = STATE(188),
    [sym__lexical_identifier] = STATE(210),
    [sym__prefix_unary_operator] = STATE(219),
    [sym_annotation] = STATE(219),
    [sym_simple_identifier] = STATE(190),
    [sym__expression] = STATE(188),
    [sym_label] = STATE(219),
    [sym_unary_expression] = STATE(188),
    [anon_sym_DASH] = ACTIONS(494),
    [anon_sym_DASH_DASH] = ACTIONS(496),
    [aux_sym__lexical_identifier_token1] = ACTIONS(498),
    [anon_sym_PLUS] = ACTIONS(494),
    [aux_sym__lexical_identifier_token2] = ACTIONS(498),
    [anon_sym_BANG] = ACTIONS(496),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(500),
    [anon_sym_PLUS_PLUS] = ACTIONS(496),
  },
  [188] = {
    [sym__lexical_identifier] = STATE(206),
    [sym__additive_operator] = STATE(224),
    [sym__multiplicative_operator] = STATE(225),
    [sym__equality_operator] = STATE(226),
    [sym__comparison_operator] = STATE(227),
    [sym__as_operator] = STATE(228),
    [sym__postfix_unary_suffix] = STATE(193),
    [sym_simple_identifier] = STATE(229),
    [sym__in_operator] = STATE(230),
    [sym__is_operator] = STATE(230),
    [sym__postfix_unary_operator] = STATE(193),
    [anon_sym_GT] = ACTIONS(502),
    [aux_sym__lexical_identifier_token2] = ACTIONS(65),
    [anon_sym_LT_EQ] = ACTIONS(502),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(504),
    [anon_sym_RBRACE] = ACTIONS(461),
    [anon_sym_class] = ACTIONS(461),
    [anon_sym_fun] = ACTIONS(461),
    [anon_sym_BANG_BANG] = ACTIONS(506),
    [anon_sym_PLUS_PLUS] = ACTIONS(506),
    [anon_sym_is] = ACTIONS(508),
    [anon_sym_as_QMARK] = ACTIONS(510),
    [anon_sym_DASH] = ACTIONS(512),
    [anon_sym_in] = ACTIONS(508),
    [anon_sym_object] = ACTIONS(461),
    [anon_sym_DOT_DOT] = ACTIONS(514),
    [anon_sym_BANG_EQ] = ACTIONS(504),
    [anon_sym_EQ_EQ] = ACTIONS(504),
    [anon_sym_interface] = ACTIONS(461),
    [anon_sym_DASH_DASH] = ACTIONS(506),
    [anon_sym_PLUS] = ACTIONS(512),
    [anon_sym_GT_EQ] = ACTIONS(502),
    [anon_sym_SLASH] = ACTIONS(516),
    [anon_sym_as] = ACTIONS(510),
    [anon_sym_QMARK_COLON] = ACTIONS(518),
    [anon_sym_PIPE_PIPE] = ACTIONS(520),
    [anon_sym_LT] = ACTIONS(502),
    [aux_sym__lexical_identifier_token1] = ACTIONS(65),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(504),
    [anon_sym_BANGin] = ACTIONS(508),
    [anon_sym_typealias] = ACTIONS(461),
    [anon_sym_PERCENT] = ACTIONS(516),
    [anon_sym_STAR] = ACTIONS(516),
    [anon_sym_AMP_AMP] = ACTIONS(522),
    [sym__not_is] = ACTIONS(508),
    [aux_sym__semi_token1] = ACTIONS(463),
  },
  [189] = {
    [anon_sym_while] = ACTIONS(57),
    [anon_sym_interface] = ACTIONS(57),
    [anon_sym_DASH_DASH] = ACTIONS(59),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_LPAREN] = ACTIONS(59),
    [aux_sym__lexical_identifier_token2] = ACTIONS(59),
    [anon_sym_AT] = ACTIONS(59),
    [anon_sym_do] = ACTIONS(57),
    [anon_sym_PLUS_PLUS] = ACTIONS(59),
    [anon_sym_class] = ACTIONS(57),
    [anon_sym_fun] = ACTIONS(57),
    [anon_sym_EQ] = ACTIONS(59),
    [anon_sym_DASH] = ACTIONS(57),
    [aux_sym__lexical_identifier_token1] = ACTIONS(57),
    [anon_sym_object] = ACTIONS(57),
    [anon_sym_BANG] = ACTIONS(59),
    [anon_sym_typealias] = ACTIONS(57),
    [anon_sym_STAR] = ACTIONS(59),
    [anon_sym_for] = ACTIONS(57),
  },
  [190] = {
    [anon_sym_GT] = ACTIONS(97),
    [aux_sym__lexical_identifier_token2] = ACTIONS(97),
    [anon_sym_LT_EQ] = ACTIONS(97),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(97),
    [anon_sym_RBRACE] = ACTIONS(97),
    [anon_sym_class] = ACTIONS(97),
    [anon_sym_fun] = ACTIONS(97),
    [anon_sym_is] = ACTIONS(97),
    [anon_sym_as_QMARK] = ACTIONS(97),
    [anon_sym_DASH] = ACTIONS(97),
    [anon_sym_DOT_DOT] = ACTIONS(97),
    [anon_sym_PLUS_PLUS] = ACTIONS(97),
    [anon_sym_in] = ACTIONS(97),
    [anon_sym_object] = ACTIONS(97),
    [anon_sym_BANG_BANG] = ACTIONS(97),
    [anon_sym_BANG_EQ] = ACTIONS(97),
    [anon_sym_EQ_EQ] = ACTIONS(97),
    [anon_sym_interface] = ACTIONS(97),
    [anon_sym_DASH_DASH] = ACTIONS(97),
    [anon_sym_PLUS] = ACTIONS(97),
    [anon_sym_GT_EQ] = ACTIONS(97),
    [anon_sym_as] = ACTIONS(97),
    [anon_sym_QMARK_COLON] = ACTIONS(97),
    [anon_sym_SLASH] = ACTIONS(97),
    [anon_sym_PIPE_PIPE] = ACTIONS(97),
    [anon_sym_AT] = ACTIONS(165),
    [anon_sym_LT] = ACTIONS(97),
    [aux_sym__lexical_identifier_token1] = ACTIONS(97),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(97),
    [anon_sym_BANGin] = ACTIONS(97),
    [anon_sym_PERCENT] = ACTIONS(97),
    [anon_sym_typealias] = ACTIONS(97),
    [anon_sym_AMP_AMP] = ACTIONS(97),
    [anon_sym_STAR] = ACTIONS(97),
    [sym__not_is] = ACTIONS(97),
    [aux_sym__semi_token1] = ACTIONS(103),
  },
  [191] = {
    [sym__lexical_identifier] = STATE(206),
    [sym__additive_operator] = STATE(224),
    [sym__multiplicative_operator] = STATE(225),
    [sym__equality_operator] = STATE(226),
    [sym__comparison_operator] = STATE(227),
    [sym__as_operator] = STATE(228),
    [sym__postfix_unary_suffix] = STATE(193),
    [sym_simple_identifier] = STATE(229),
    [sym__in_operator] = STATE(230),
    [sym__is_operator] = STATE(230),
    [sym__postfix_unary_operator] = STATE(193),
    [anon_sym_GT] = ACTIONS(502),
    [aux_sym__lexical_identifier_token2] = ACTIONS(65),
    [anon_sym_LT_EQ] = ACTIONS(502),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(504),
    [anon_sym_RBRACE] = ACTIONS(167),
    [anon_sym_class] = ACTIONS(167),
    [anon_sym_fun] = ACTIONS(167),
    [anon_sym_is] = ACTIONS(508),
    [anon_sym_as_QMARK] = ACTIONS(510),
    [anon_sym_DASH] = ACTIONS(512),
    [anon_sym_DOT_DOT] = ACTIONS(514),
    [anon_sym_PLUS_PLUS] = ACTIONS(506),
    [anon_sym_in] = ACTIONS(508),
    [anon_sym_object] = ACTIONS(167),
    [anon_sym_BANG_BANG] = ACTIONS(506),
    [anon_sym_BANG_EQ] = ACTIONS(504),
    [anon_sym_EQ_EQ] = ACTIONS(504),
    [anon_sym_interface] = ACTIONS(167),
    [anon_sym_DASH_DASH] = ACTIONS(506),
    [anon_sym_PLUS] = ACTIONS(512),
    [anon_sym_GT_EQ] = ACTIONS(502),
    [anon_sym_as] = ACTIONS(510),
    [anon_sym_QMARK_COLON] = ACTIONS(518),
    [anon_sym_SLASH] = ACTIONS(516),
    [anon_sym_PIPE_PIPE] = ACTIONS(520),
    [anon_sym_LT] = ACTIONS(502),
    [aux_sym__lexical_identifier_token1] = ACTIONS(65),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(504),
    [anon_sym_BANGin] = ACTIONS(508),
    [anon_sym_PERCENT] = ACTIONS(516),
    [anon_sym_typealias] = ACTIONS(167),
    [anon_sym_AMP_AMP] = ACTIONS(522),
    [anon_sym_STAR] = ACTIONS(516),
    [sym__not_is] = ACTIONS(508),
    [aux_sym__semi_token1] = ACTIONS(169),
  },
  [192] = {
    [sym__lexical_identifier] = STATE(206),
    [sym__additive_operator] = STATE(224),
    [sym__multiplicative_operator] = STATE(225),
    [sym__equality_operator] = STATE(226),
    [sym__comparison_operator] = STATE(227),
    [sym__as_operator] = STATE(228),
    [sym__postfix_unary_suffix] = STATE(193),
    [sym_simple_identifier] = STATE(229),
    [sym__in_operator] = STATE(230),
    [sym__is_operator] = STATE(230),
    [sym__postfix_unary_operator] = STATE(193),
    [anon_sym_GT] = ACTIONS(167),
    [aux_sym__lexical_identifier_token2] = ACTIONS(167),
    [anon_sym_LT_EQ] = ACTIONS(167),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(167),
    [anon_sym_RBRACE] = ACTIONS(167),
    [anon_sym_class] = ACTIONS(167),
    [anon_sym_fun] = ACTIONS(167),
    [anon_sym_is] = ACTIONS(167),
    [anon_sym_as_QMARK] = ACTIONS(167),
    [anon_sym_DASH] = ACTIONS(167),
    [anon_sym_DOT_DOT] = ACTIONS(167),
    [anon_sym_PLUS_PLUS] = ACTIONS(506),
    [anon_sym_in] = ACTIONS(167),
    [anon_sym_object] = ACTIONS(167),
    [anon_sym_BANG_BANG] = ACTIONS(506),
    [anon_sym_BANG_EQ] = ACTIONS(167),
    [anon_sym_EQ_EQ] = ACTIONS(167),
    [anon_sym_interface] = ACTIONS(167),
    [anon_sym_DASH_DASH] = ACTIONS(506),
    [anon_sym_PLUS] = ACTIONS(167),
    [anon_sym_GT_EQ] = ACTIONS(167),
    [anon_sym_as] = ACTIONS(167),
    [anon_sym_QMARK_COLON] = ACTIONS(167),
    [anon_sym_SLASH] = ACTIONS(167),
    [anon_sym_PIPE_PIPE] = ACTIONS(167),
    [anon_sym_LT] = ACTIONS(167),
    [aux_sym__lexical_identifier_token1] = ACTIONS(167),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(167),
    [anon_sym_BANGin] = ACTIONS(167),
    [anon_sym_PERCENT] = ACTIONS(167),
    [anon_sym_typealias] = ACTIONS(167),
    [anon_sym_AMP_AMP] = ACTIONS(167),
    [anon_sym_STAR] = ACTIONS(167),
    [sym__not_is] = ACTIONS(167),
    [aux_sym__semi_token1] = ACTIONS(169),
  },
  [193] = {
    [anon_sym_GT] = ACTIONS(167),
    [aux_sym__lexical_identifier_token2] = ACTIONS(167),
    [anon_sym_LT_EQ] = ACTIONS(167),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(167),
    [anon_sym_RBRACE] = ACTIONS(167),
    [anon_sym_class] = ACTIONS(167),
    [anon_sym_fun] = ACTIONS(167),
    [anon_sym_is] = ACTIONS(167),
    [anon_sym_as_QMARK] = ACTIONS(167),
    [anon_sym_DASH] = ACTIONS(167),
    [anon_sym_DOT_DOT] = ACTIONS(167),
    [anon_sym_PLUS_PLUS] = ACTIONS(167),
    [anon_sym_in] = ACTIONS(167),
    [anon_sym_object] = ACTIONS(167),
    [anon_sym_BANG_BANG] = ACTIONS(167),
    [anon_sym_BANG_EQ] = ACTIONS(167),
    [anon_sym_EQ_EQ] = ACTIONS(167),
    [anon_sym_interface] = ACTIONS(167),
    [anon_sym_DASH_DASH] = ACTIONS(167),
    [anon_sym_PLUS] = ACTIONS(167),
    [anon_sym_GT_EQ] = ACTIONS(167),
    [anon_sym_as] = ACTIONS(167),
    [anon_sym_QMARK_COLON] = ACTIONS(167),
    [anon_sym_SLASH] = ACTIONS(167),
    [anon_sym_PIPE_PIPE] = ACTIONS(167),
    [anon_sym_LT] = ACTIONS(167),
    [aux_sym__lexical_identifier_token1] = ACTIONS(167),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(167),
    [anon_sym_BANGin] = ACTIONS(167),
    [anon_sym_PERCENT] = ACTIONS(167),
    [anon_sym_typealias] = ACTIONS(167),
    [anon_sym_AMP_AMP] = ACTIONS(167),
    [anon_sym_STAR] = ACTIONS(167),
    [sym__not_is] = ACTIONS(167),
    [aux_sym__semi_token1] = ACTIONS(169),
  },
  [194] = {
    [sym__lexical_identifier] = STATE(206),
    [sym__additive_operator] = STATE(224),
    [sym__multiplicative_operator] = STATE(225),
    [sym__equality_operator] = STATE(226),
    [sym__comparison_operator] = STATE(227),
    [sym__as_operator] = STATE(228),
    [sym__postfix_unary_suffix] = STATE(193),
    [sym_simple_identifier] = STATE(229),
    [sym__in_operator] = STATE(230),
    [sym__is_operator] = STATE(230),
    [sym__postfix_unary_operator] = STATE(193),
    [anon_sym_GT] = ACTIONS(502),
    [aux_sym__lexical_identifier_token2] = ACTIONS(65),
    [anon_sym_LT_EQ] = ACTIONS(502),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(504),
    [anon_sym_RBRACE] = ACTIONS(336),
    [anon_sym_class] = ACTIONS(336),
    [anon_sym_fun] = ACTIONS(336),
    [anon_sym_is] = ACTIONS(508),
    [anon_sym_as_QMARK] = ACTIONS(510),
    [anon_sym_DASH] = ACTIONS(512),
    [anon_sym_DOT_DOT] = ACTIONS(514),
    [anon_sym_PLUS_PLUS] = ACTIONS(506),
    [anon_sym_in] = ACTIONS(508),
    [anon_sym_object] = ACTIONS(336),
    [anon_sym_BANG_BANG] = ACTIONS(506),
    [anon_sym_BANG_EQ] = ACTIONS(504),
    [anon_sym_EQ_EQ] = ACTIONS(504),
    [anon_sym_interface] = ACTIONS(336),
    [anon_sym_DASH_DASH] = ACTIONS(506),
    [anon_sym_PLUS] = ACTIONS(512),
    [anon_sym_GT_EQ] = ACTIONS(502),
    [anon_sym_as] = ACTIONS(510),
    [anon_sym_QMARK_COLON] = ACTIONS(518),
    [anon_sym_SLASH] = ACTIONS(516),
    [anon_sym_PIPE_PIPE] = ACTIONS(336),
    [anon_sym_LT] = ACTIONS(502),
    [aux_sym__lexical_identifier_token1] = ACTIONS(65),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(504),
    [anon_sym_BANGin] = ACTIONS(508),
    [anon_sym_PERCENT] = ACTIONS(516),
    [anon_sym_typealias] = ACTIONS(336),
    [anon_sym_AMP_AMP] = ACTIONS(522),
    [anon_sym_STAR] = ACTIONS(516),
    [sym__not_is] = ACTIONS(508),
    [aux_sym__semi_token1] = ACTIONS(338),
  },
  [195] = {
    [sym__lexical_identifier] = STATE(206),
    [sym__additive_operator] = STATE(224),
    [sym__multiplicative_operator] = STATE(225),
    [sym__equality_operator] = STATE(226),
    [sym__comparison_operator] = STATE(227),
    [sym__as_operator] = STATE(228),
    [sym__postfix_unary_suffix] = STATE(193),
    [sym_simple_identifier] = STATE(229),
    [sym__in_operator] = STATE(230),
    [sym__is_operator] = STATE(230),
    [sym__postfix_unary_operator] = STATE(193),
    [anon_sym_GT] = ACTIONS(336),
    [aux_sym__lexical_identifier_token2] = ACTIONS(65),
    [anon_sym_LT_EQ] = ACTIONS(336),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(336),
    [anon_sym_RBRACE] = ACTIONS(336),
    [anon_sym_class] = ACTIONS(336),
    [anon_sym_fun] = ACTIONS(336),
    [anon_sym_is] = ACTIONS(336),
    [anon_sym_as_QMARK] = ACTIONS(510),
    [anon_sym_DASH] = ACTIONS(512),
    [anon_sym_DOT_DOT] = ACTIONS(514),
    [anon_sym_PLUS_PLUS] = ACTIONS(506),
    [anon_sym_in] = ACTIONS(336),
    [anon_sym_object] = ACTIONS(336),
    [anon_sym_BANG_BANG] = ACTIONS(506),
    [anon_sym_BANG_EQ] = ACTIONS(336),
    [anon_sym_EQ_EQ] = ACTIONS(336),
    [anon_sym_interface] = ACTIONS(336),
    [anon_sym_DASH_DASH] = ACTIONS(506),
    [anon_sym_PLUS] = ACTIONS(512),
    [anon_sym_GT_EQ] = ACTIONS(336),
    [anon_sym_as] = ACTIONS(510),
    [anon_sym_QMARK_COLON] = ACTIONS(336),
    [anon_sym_SLASH] = ACTIONS(516),
    [anon_sym_PIPE_PIPE] = ACTIONS(336),
    [anon_sym_LT] = ACTIONS(336),
    [aux_sym__lexical_identifier_token1] = ACTIONS(65),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(336),
    [anon_sym_BANGin] = ACTIONS(336),
    [anon_sym_PERCENT] = ACTIONS(516),
    [anon_sym_typealias] = ACTIONS(336),
    [anon_sym_AMP_AMP] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(516),
    [sym__not_is] = ACTIONS(336),
    [aux_sym__semi_token1] = ACTIONS(338),
  },
  [196] = {
    [sym__lexical_identifier] = STATE(206),
    [sym__additive_operator] = STATE(224),
    [sym__multiplicative_operator] = STATE(225),
    [sym__equality_operator] = STATE(226),
    [sym__comparison_operator] = STATE(227),
    [sym__as_operator] = STATE(228),
    [sym__postfix_unary_suffix] = STATE(193),
    [sym_simple_identifier] = STATE(229),
    [sym__in_operator] = STATE(230),
    [sym__is_operator] = STATE(230),
    [sym__postfix_unary_operator] = STATE(193),
    [anon_sym_GT] = ACTIONS(336),
    [aux_sym__lexical_identifier_token2] = ACTIONS(336),
    [anon_sym_LT_EQ] = ACTIONS(336),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(336),
    [anon_sym_RBRACE] = ACTIONS(336),
    [anon_sym_class] = ACTIONS(336),
    [anon_sym_fun] = ACTIONS(336),
    [anon_sym_is] = ACTIONS(336),
    [anon_sym_as_QMARK] = ACTIONS(510),
    [anon_sym_DASH] = ACTIONS(512),
    [anon_sym_DOT_DOT] = ACTIONS(336),
    [anon_sym_PLUS_PLUS] = ACTIONS(506),
    [anon_sym_in] = ACTIONS(336),
    [anon_sym_object] = ACTIONS(336),
    [anon_sym_BANG_BANG] = ACTIONS(506),
    [anon_sym_BANG_EQ] = ACTIONS(336),
    [anon_sym_EQ_EQ] = ACTIONS(336),
    [anon_sym_interface] = ACTIONS(336),
    [anon_sym_DASH_DASH] = ACTIONS(506),
    [anon_sym_PLUS] = ACTIONS(512),
    [anon_sym_GT_EQ] = ACTIONS(336),
    [anon_sym_as] = ACTIONS(510),
    [anon_sym_QMARK_COLON] = ACTIONS(336),
    [anon_sym_SLASH] = ACTIONS(516),
    [anon_sym_PIPE_PIPE] = ACTIONS(336),
    [anon_sym_LT] = ACTIONS(336),
    [aux_sym__lexical_identifier_token1] = ACTIONS(336),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(336),
    [anon_sym_BANGin] = ACTIONS(336),
    [anon_sym_PERCENT] = ACTIONS(516),
    [anon_sym_typealias] = ACTIONS(336),
    [anon_sym_AMP_AMP] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(516),
    [sym__not_is] = ACTIONS(336),
    [aux_sym__semi_token1] = ACTIONS(338),
  },
  [197] = {
    [sym__lexical_identifier] = STATE(206),
    [sym__additive_operator] = STATE(224),
    [sym__multiplicative_operator] = STATE(225),
    [sym__equality_operator] = STATE(226),
    [sym__comparison_operator] = STATE(227),
    [sym__as_operator] = STATE(228),
    [sym__postfix_unary_suffix] = STATE(193),
    [sym_simple_identifier] = STATE(229),
    [sym__in_operator] = STATE(230),
    [sym__is_operator] = STATE(230),
    [sym__postfix_unary_operator] = STATE(193),
    [anon_sym_GT] = ACTIONS(502),
    [aux_sym__lexical_identifier_token2] = ACTIONS(65),
    [anon_sym_LT_EQ] = ACTIONS(502),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(504),
    [anon_sym_RBRACE] = ACTIONS(336),
    [anon_sym_class] = ACTIONS(336),
    [anon_sym_fun] = ACTIONS(336),
    [anon_sym_is] = ACTIONS(508),
    [anon_sym_as_QMARK] = ACTIONS(510),
    [anon_sym_DASH] = ACTIONS(512),
    [anon_sym_DOT_DOT] = ACTIONS(514),
    [anon_sym_PLUS_PLUS] = ACTIONS(506),
    [anon_sym_in] = ACTIONS(508),
    [anon_sym_object] = ACTIONS(336),
    [anon_sym_BANG_BANG] = ACTIONS(506),
    [anon_sym_BANG_EQ] = ACTIONS(504),
    [anon_sym_EQ_EQ] = ACTIONS(504),
    [anon_sym_interface] = ACTIONS(336),
    [anon_sym_DASH_DASH] = ACTIONS(506),
    [anon_sym_PLUS] = ACTIONS(512),
    [anon_sym_GT_EQ] = ACTIONS(502),
    [anon_sym_as] = ACTIONS(510),
    [anon_sym_QMARK_COLON] = ACTIONS(518),
    [anon_sym_SLASH] = ACTIONS(516),
    [anon_sym_PIPE_PIPE] = ACTIONS(336),
    [anon_sym_LT] = ACTIONS(502),
    [aux_sym__lexical_identifier_token1] = ACTIONS(65),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(504),
    [anon_sym_BANGin] = ACTIONS(508),
    [anon_sym_PERCENT] = ACTIONS(516),
    [anon_sym_typealias] = ACTIONS(336),
    [anon_sym_AMP_AMP] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(516),
    [sym__not_is] = ACTIONS(508),
    [aux_sym__semi_token1] = ACTIONS(338),
  },
  [198] = {
    [sym__lexical_identifier] = STATE(206),
    [sym__additive_operator] = STATE(224),
    [sym__multiplicative_operator] = STATE(225),
    [sym__equality_operator] = STATE(226),
    [sym__comparison_operator] = STATE(227),
    [sym__as_operator] = STATE(228),
    [sym__postfix_unary_suffix] = STATE(193),
    [sym_simple_identifier] = STATE(229),
    [sym__in_operator] = STATE(230),
    [sym__is_operator] = STATE(230),
    [sym__postfix_unary_operator] = STATE(193),
    [anon_sym_GT] = ACTIONS(336),
    [aux_sym__lexical_identifier_token2] = ACTIONS(336),
    [anon_sym_LT_EQ] = ACTIONS(336),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(336),
    [anon_sym_RBRACE] = ACTIONS(336),
    [anon_sym_class] = ACTIONS(336),
    [anon_sym_fun] = ACTIONS(336),
    [anon_sym_is] = ACTIONS(336),
    [anon_sym_as_QMARK] = ACTIONS(510),
    [anon_sym_DASH] = ACTIONS(336),
    [anon_sym_DOT_DOT] = ACTIONS(336),
    [anon_sym_PLUS_PLUS] = ACTIONS(506),
    [anon_sym_in] = ACTIONS(336),
    [anon_sym_object] = ACTIONS(336),
    [anon_sym_BANG_BANG] = ACTIONS(506),
    [anon_sym_BANG_EQ] = ACTIONS(336),
    [anon_sym_EQ_EQ] = ACTIONS(336),
    [anon_sym_interface] = ACTIONS(336),
    [anon_sym_DASH_DASH] = ACTIONS(506),
    [anon_sym_PLUS] = ACTIONS(336),
    [anon_sym_GT_EQ] = ACTIONS(336),
    [anon_sym_as] = ACTIONS(510),
    [anon_sym_QMARK_COLON] = ACTIONS(336),
    [anon_sym_SLASH] = ACTIONS(516),
    [anon_sym_PIPE_PIPE] = ACTIONS(336),
    [anon_sym_LT] = ACTIONS(336),
    [aux_sym__lexical_identifier_token1] = ACTIONS(336),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(336),
    [anon_sym_BANGin] = ACTIONS(336),
    [anon_sym_PERCENT] = ACTIONS(516),
    [anon_sym_typealias] = ACTIONS(336),
    [anon_sym_AMP_AMP] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(516),
    [sym__not_is] = ACTIONS(336),
    [aux_sym__semi_token1] = ACTIONS(338),
  },
  [199] = {
    [sym__lexical_identifier] = STATE(206),
    [sym__additive_operator] = STATE(224),
    [sym__multiplicative_operator] = STATE(225),
    [sym__equality_operator] = STATE(226),
    [sym__comparison_operator] = STATE(227),
    [sym__as_operator] = STATE(228),
    [sym__postfix_unary_suffix] = STATE(193),
    [sym_simple_identifier] = STATE(229),
    [sym__in_operator] = STATE(230),
    [sym__is_operator] = STATE(230),
    [sym__postfix_unary_operator] = STATE(193),
    [anon_sym_GT] = ACTIONS(336),
    [aux_sym__lexical_identifier_token2] = ACTIONS(336),
    [anon_sym_LT_EQ] = ACTIONS(336),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(336),
    [anon_sym_RBRACE] = ACTIONS(336),
    [anon_sym_class] = ACTIONS(336),
    [anon_sym_fun] = ACTIONS(336),
    [anon_sym_is] = ACTIONS(336),
    [anon_sym_as_QMARK] = ACTIONS(510),
    [anon_sym_DASH] = ACTIONS(336),
    [anon_sym_DOT_DOT] = ACTIONS(336),
    [anon_sym_PLUS_PLUS] = ACTIONS(506),
    [anon_sym_in] = ACTIONS(336),
    [anon_sym_object] = ACTIONS(336),
    [anon_sym_BANG_BANG] = ACTIONS(506),
    [anon_sym_BANG_EQ] = ACTIONS(336),
    [anon_sym_EQ_EQ] = ACTIONS(336),
    [anon_sym_interface] = ACTIONS(336),
    [anon_sym_DASH_DASH] = ACTIONS(506),
    [anon_sym_PLUS] = ACTIONS(336),
    [anon_sym_GT_EQ] = ACTIONS(336),
    [anon_sym_as] = ACTIONS(510),
    [anon_sym_QMARK_COLON] = ACTIONS(336),
    [anon_sym_SLASH] = ACTIONS(336),
    [anon_sym_PIPE_PIPE] = ACTIONS(336),
    [anon_sym_LT] = ACTIONS(336),
    [aux_sym__lexical_identifier_token1] = ACTIONS(336),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(336),
    [anon_sym_BANGin] = ACTIONS(336),
    [anon_sym_PERCENT] = ACTIONS(336),
    [anon_sym_typealias] = ACTIONS(336),
    [anon_sym_AMP_AMP] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(336),
    [sym__not_is] = ACTIONS(336),
    [aux_sym__semi_token1] = ACTIONS(338),
  },
  [200] = {
    [sym__lexical_identifier] = STATE(206),
    [sym__additive_operator] = STATE(224),
    [sym__multiplicative_operator] = STATE(225),
    [sym__equality_operator] = STATE(226),
    [sym__comparison_operator] = STATE(227),
    [sym__as_operator] = STATE(228),
    [sym__postfix_unary_suffix] = STATE(193),
    [sym_simple_identifier] = STATE(229),
    [sym__in_operator] = STATE(230),
    [sym__is_operator] = STATE(230),
    [sym__postfix_unary_operator] = STATE(193),
    [anon_sym_GT] = ACTIONS(502),
    [aux_sym__lexical_identifier_token2] = ACTIONS(65),
    [anon_sym_LT_EQ] = ACTIONS(502),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(336),
    [anon_sym_RBRACE] = ACTIONS(336),
    [anon_sym_class] = ACTIONS(336),
    [anon_sym_fun] = ACTIONS(336),
    [anon_sym_is] = ACTIONS(508),
    [anon_sym_as_QMARK] = ACTIONS(510),
    [anon_sym_DASH] = ACTIONS(512),
    [anon_sym_DOT_DOT] = ACTIONS(514),
    [anon_sym_PLUS_PLUS] = ACTIONS(506),
    [anon_sym_in] = ACTIONS(508),
    [anon_sym_object] = ACTIONS(336),
    [anon_sym_BANG_BANG] = ACTIONS(506),
    [anon_sym_BANG_EQ] = ACTIONS(336),
    [anon_sym_EQ_EQ] = ACTIONS(336),
    [anon_sym_interface] = ACTIONS(336),
    [anon_sym_DASH_DASH] = ACTIONS(506),
    [anon_sym_PLUS] = ACTIONS(512),
    [anon_sym_GT_EQ] = ACTIONS(502),
    [anon_sym_as] = ACTIONS(510),
    [anon_sym_QMARK_COLON] = ACTIONS(518),
    [anon_sym_SLASH] = ACTIONS(516),
    [anon_sym_PIPE_PIPE] = ACTIONS(336),
    [anon_sym_LT] = ACTIONS(502),
    [aux_sym__lexical_identifier_token1] = ACTIONS(65),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(336),
    [anon_sym_BANGin] = ACTIONS(508),
    [anon_sym_PERCENT] = ACTIONS(516),
    [anon_sym_typealias] = ACTIONS(336),
    [anon_sym_AMP_AMP] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(516),
    [sym__not_is] = ACTIONS(508),
    [aux_sym__semi_token1] = ACTIONS(338),
  },
  [201] = {
    [sym__lexical_identifier] = STATE(206),
    [sym__additive_operator] = STATE(224),
    [sym__multiplicative_operator] = STATE(225),
    [sym__equality_operator] = STATE(226),
    [sym__comparison_operator] = STATE(227),
    [sym__as_operator] = STATE(228),
    [sym__postfix_unary_suffix] = STATE(193),
    [sym_simple_identifier] = STATE(229),
    [sym__in_operator] = STATE(230),
    [sym__is_operator] = STATE(230),
    [sym__postfix_unary_operator] = STATE(193),
    [anon_sym_GT] = ACTIONS(336),
    [aux_sym__lexical_identifier_token2] = ACTIONS(65),
    [anon_sym_LT_EQ] = ACTIONS(336),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(336),
    [anon_sym_RBRACE] = ACTIONS(336),
    [anon_sym_class] = ACTIONS(336),
    [anon_sym_fun] = ACTIONS(336),
    [anon_sym_is] = ACTIONS(508),
    [anon_sym_as_QMARK] = ACTIONS(510),
    [anon_sym_DASH] = ACTIONS(512),
    [anon_sym_DOT_DOT] = ACTIONS(514),
    [anon_sym_PLUS_PLUS] = ACTIONS(506),
    [anon_sym_in] = ACTIONS(508),
    [anon_sym_object] = ACTIONS(336),
    [anon_sym_BANG_BANG] = ACTIONS(506),
    [anon_sym_BANG_EQ] = ACTIONS(336),
    [anon_sym_EQ_EQ] = ACTIONS(336),
    [anon_sym_interface] = ACTIONS(336),
    [anon_sym_DASH_DASH] = ACTIONS(506),
    [anon_sym_PLUS] = ACTIONS(512),
    [anon_sym_GT_EQ] = ACTIONS(336),
    [anon_sym_as] = ACTIONS(510),
    [anon_sym_QMARK_COLON] = ACTIONS(518),
    [anon_sym_SLASH] = ACTIONS(516),
    [anon_sym_PIPE_PIPE] = ACTIONS(336),
    [anon_sym_LT] = ACTIONS(336),
    [aux_sym__lexical_identifier_token1] = ACTIONS(65),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(336),
    [anon_sym_BANGin] = ACTIONS(508),
    [anon_sym_PERCENT] = ACTIONS(516),
    [anon_sym_typealias] = ACTIONS(336),
    [anon_sym_AMP_AMP] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(516),
    [sym__not_is] = ACTIONS(508),
    [aux_sym__semi_token1] = ACTIONS(338),
  },
  [202] = {
    [anon_sym_GT] = ACTIONS(340),
    [aux_sym__lexical_identifier_token2] = ACTIONS(340),
    [anon_sym_LT_EQ] = ACTIONS(340),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(340),
    [anon_sym_RBRACE] = ACTIONS(340),
    [anon_sym_class] = ACTIONS(340),
    [anon_sym_fun] = ACTIONS(340),
    [anon_sym_is] = ACTIONS(340),
    [anon_sym_as_QMARK] = ACTIONS(340),
    [anon_sym_DASH] = ACTIONS(340),
    [anon_sym_DOT_DOT] = ACTIONS(340),
    [anon_sym_PLUS_PLUS] = ACTIONS(340),
    [anon_sym_in] = ACTIONS(340),
    [anon_sym_object] = ACTIONS(340),
    [anon_sym_BANG_BANG] = ACTIONS(340),
    [anon_sym_BANG_EQ] = ACTIONS(340),
    [anon_sym_EQ_EQ] = ACTIONS(340),
    [anon_sym_interface] = ACTIONS(340),
    [anon_sym_DASH_DASH] = ACTIONS(340),
    [anon_sym_PLUS] = ACTIONS(340),
    [anon_sym_GT_EQ] = ACTIONS(340),
    [anon_sym_as] = ACTIONS(340),
    [anon_sym_QMARK_COLON] = ACTIONS(340),
    [anon_sym_SLASH] = ACTIONS(340),
    [anon_sym_PIPE_PIPE] = ACTIONS(340),
    [anon_sym_LT] = ACTIONS(340),
    [aux_sym__lexical_identifier_token1] = ACTIONS(340),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(340),
    [anon_sym_BANGin] = ACTIONS(340),
    [anon_sym_PERCENT] = ACTIONS(340),
    [anon_sym_typealias] = ACTIONS(340),
    [anon_sym_AMP_AMP] = ACTIONS(340),
    [anon_sym_STAR] = ACTIONS(340),
    [sym__not_is] = ACTIONS(340),
    [aux_sym__semi_token1] = ACTIONS(342),
  },
  [203] = {
    [sym__lexical_identifier] = STATE(206),
    [sym__additive_operator] = STATE(224),
    [sym__multiplicative_operator] = STATE(225),
    [sym__equality_operator] = STATE(226),
    [sym__comparison_operator] = STATE(227),
    [sym__as_operator] = STATE(228),
    [sym__postfix_unary_suffix] = STATE(193),
    [sym_simple_identifier] = STATE(229),
    [sym__in_operator] = STATE(230),
    [sym__is_operator] = STATE(230),
    [sym__postfix_unary_operator] = STATE(193),
    [anon_sym_GT] = ACTIONS(336),
    [aux_sym__lexical_identifier_token2] = ACTIONS(336),
    [anon_sym_LT_EQ] = ACTIONS(336),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(336),
    [anon_sym_RBRACE] = ACTIONS(336),
    [anon_sym_class] = ACTIONS(336),
    [anon_sym_fun] = ACTIONS(336),
    [anon_sym_is] = ACTIONS(336),
    [anon_sym_as_QMARK] = ACTIONS(510),
    [anon_sym_DASH] = ACTIONS(512),
    [anon_sym_DOT_DOT] = ACTIONS(514),
    [anon_sym_PLUS_PLUS] = ACTIONS(506),
    [anon_sym_in] = ACTIONS(336),
    [anon_sym_object] = ACTIONS(336),
    [anon_sym_BANG_BANG] = ACTIONS(506),
    [anon_sym_BANG_EQ] = ACTIONS(336),
    [anon_sym_EQ_EQ] = ACTIONS(336),
    [anon_sym_interface] = ACTIONS(336),
    [anon_sym_DASH_DASH] = ACTIONS(506),
    [anon_sym_PLUS] = ACTIONS(512),
    [anon_sym_GT_EQ] = ACTIONS(336),
    [anon_sym_as] = ACTIONS(510),
    [anon_sym_QMARK_COLON] = ACTIONS(336),
    [anon_sym_SLASH] = ACTIONS(516),
    [anon_sym_PIPE_PIPE] = ACTIONS(336),
    [anon_sym_LT] = ACTIONS(336),
    [aux_sym__lexical_identifier_token1] = ACTIONS(336),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(336),
    [anon_sym_BANGin] = ACTIONS(336),
    [anon_sym_PERCENT] = ACTIONS(516),
    [anon_sym_typealias] = ACTIONS(336),
    [anon_sym_AMP_AMP] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(516),
    [sym__not_is] = ACTIONS(336),
    [aux_sym__semi_token1] = ACTIONS(338),
  },
  [204] = {
    [sym__lexical_identifier] = STATE(206),
    [sym__additive_operator] = STATE(224),
    [sym__multiplicative_operator] = STATE(225),
    [sym__equality_operator] = STATE(226),
    [sym__comparison_operator] = STATE(227),
    [sym__as_operator] = STATE(228),
    [sym__postfix_unary_suffix] = STATE(193),
    [sym_simple_identifier] = STATE(229),
    [sym__in_operator] = STATE(230),
    [sym__is_operator] = STATE(230),
    [sym__postfix_unary_operator] = STATE(193),
    [anon_sym_GT] = ACTIONS(336),
    [aux_sym__lexical_identifier_token2] = ACTIONS(65),
    [anon_sym_LT_EQ] = ACTIONS(336),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(336),
    [anon_sym_RBRACE] = ACTIONS(336),
    [anon_sym_class] = ACTIONS(336),
    [anon_sym_fun] = ACTIONS(336),
    [anon_sym_is] = ACTIONS(336),
    [anon_sym_as_QMARK] = ACTIONS(510),
    [anon_sym_DASH] = ACTIONS(512),
    [anon_sym_DOT_DOT] = ACTIONS(514),
    [anon_sym_PLUS_PLUS] = ACTIONS(506),
    [anon_sym_in] = ACTIONS(336),
    [anon_sym_object] = ACTIONS(336),
    [anon_sym_BANG_BANG] = ACTIONS(506),
    [anon_sym_BANG_EQ] = ACTIONS(336),
    [anon_sym_EQ_EQ] = ACTIONS(336),
    [anon_sym_interface] = ACTIONS(336),
    [anon_sym_DASH_DASH] = ACTIONS(506),
    [anon_sym_PLUS] = ACTIONS(512),
    [anon_sym_GT_EQ] = ACTIONS(336),
    [anon_sym_as] = ACTIONS(510),
    [anon_sym_QMARK_COLON] = ACTIONS(518),
    [anon_sym_SLASH] = ACTIONS(516),
    [anon_sym_PIPE_PIPE] = ACTIONS(336),
    [anon_sym_LT] = ACTIONS(336),
    [aux_sym__lexical_identifier_token1] = ACTIONS(65),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(336),
    [anon_sym_BANGin] = ACTIONS(336),
    [anon_sym_PERCENT] = ACTIONS(516),
    [anon_sym_typealias] = ACTIONS(336),
    [anon_sym_AMP_AMP] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(516),
    [sym__not_is] = ACTIONS(336),
    [aux_sym__semi_token1] = ACTIONS(338),
  },
  [205] = {
    [anon_sym_while] = ACTIONS(57),
    [anon_sym_DOT] = ACTIONS(57),
    [aux_sym__lexical_identifier_token2] = ACTIONS(57),
    [anon_sym_class] = ACTIONS(57),
    [anon_sym_fun] = ACTIONS(57),
    [anon_sym_PLUS_PLUS] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(57),
    [anon_sym_object] = ACTIONS(57),
    [anon_sym_interface] = ACTIONS(57),
    [anon_sym_DASH_DASH] = ACTIONS(57),
    [anon_sym_import] = ACTIONS(57),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_AT] = ACTIONS(57),
    [anon_sym_do] = ACTIONS(57),
    [aux_sym__lexical_identifier_token1] = ACTIONS(57),
    [ts_builtin_sym_end] = ACTIONS(59),
    [anon_sym_BANG] = ACTIONS(57),
    [anon_sym_typealias] = ACTIONS(57),
    [anon_sym_STAR] = ACTIONS(57),
    [anon_sym_for] = ACTIONS(57),
    [aux_sym__semi_token1] = ACTIONS(59),
  },
  [206] = {
    [anon_sym_DASH] = ACTIONS(57),
    [anon_sym_DASH_DASH] = ACTIONS(59),
    [aux_sym__lexical_identifier_token1] = ACTIONS(59),
    [anon_sym_PLUS] = ACTIONS(57),
    [aux_sym__lexical_identifier_token2] = ACTIONS(59),
    [anon_sym_BANG] = ACTIONS(59),
    [anon_sym_AT] = ACTIONS(59),
    [anon_sym_STAR] = ACTIONS(59),
    [anon_sym_PLUS_PLUS] = ACTIONS(59),
  },
  [207] = {
    [anon_sym_GT] = ACTIONS(57),
    [aux_sym__lexical_identifier_token2] = ACTIONS(59),
    [anon_sym_LT_EQ] = ACTIONS(59),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(59),
    [anon_sym_BANG_BANG] = ACTIONS(59),
    [anon_sym_PLUS_PLUS] = ACTIONS(59),
    [anon_sym_is] = ACTIONS(57),
    [anon_sym_as_QMARK] = ACTIONS(59),
    [anon_sym_DASH] = ACTIONS(57),
    [anon_sym_DOT_DOT] = ACTIONS(59),
    [anon_sym_in] = ACTIONS(57),
    [anon_sym_BANG_EQ] = ACTIONS(57),
    [anon_sym_EQ_EQ] = ACTIONS(57),
    [anon_sym_DASH_DASH] = ACTIONS(59),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_GT_EQ] = ACTIONS(59),
    [anon_sym_as] = ACTIONS(57),
    [anon_sym_QMARK_COLON] = ACTIONS(59),
    [anon_sym_SLASH] = ACTIONS(59),
    [anon_sym_PIPE_PIPE] = ACTIONS(59),
    [anon_sym_AT] = ACTIONS(59),
    [anon_sym_LT] = ACTIONS(57),
    [aux_sym__lexical_identifier_token1] = ACTIONS(57),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(59),
    [anon_sym_RPAREN] = ACTIONS(59),
    [anon_sym_BANGin] = ACTIONS(59),
    [anon_sym_PERCENT] = ACTIONS(59),
    [anon_sym_AMP_AMP] = ACTIONS(59),
    [anon_sym_STAR] = ACTIONS(59),
    [sym__not_is] = ACTIONS(59),
  },
  [208] = {
    [anon_sym_COLON] = ACTIONS(59),
    [anon_sym_in] = ACTIONS(59),
  },
  [209] = {
    [anon_sym_interface] = ACTIONS(57),
    [anon_sym_object] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_typealias] = ACTIONS(57),
    [anon_sym_RBRACE] = ACTIONS(57),
    [anon_sym_class] = ACTIONS(57),
    [anon_sym_fun] = ACTIONS(57),
    [aux_sym__semi_token1] = ACTIONS(59),
  },
  [210] = {
    [anon_sym_GT] = ACTIONS(57),
    [aux_sym__lexical_identifier_token2] = ACTIONS(57),
    [anon_sym_LT_EQ] = ACTIONS(57),
    [anon_sym_BANG_EQ_EQ] = ACTIONS(57),
    [anon_sym_RBRACE] = ACTIONS(57),
    [anon_sym_class] = ACTIONS(57),
    [anon_sym_fun] = ACTIONS(57),
    [anon_sym_is] = ACTIONS(57),
    [anon_sym_as_QMARK] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(57),
    [anon_sym_DOT_DOT] = ACTIONS(57),
    [anon_sym_PLUS_PLUS] = ACTIONS(57),
    [anon_sym_in] = ACTIONS(57),
    [anon_sym_object] = ACTIONS(57),
    [anon_sym_BANG_BANG] = ACTIONS(57),
    [anon_sym_BANG_EQ] = ACTIONS(57),
    [anon_sym_EQ_EQ] = ACTIONS(57),
    [anon_sym_interface] = ACTIONS(57),
    [anon_sym_DASH_DASH] = ACTIONS(57),
    [anon_sym_PLUS] = ACTIONS(57),
    [anon_sym_GT_EQ] = ACTIONS(57),
    [anon_sym_as] = ACTIONS(57),
    [anon_sym_QMARK_COLON] = ACTIONS(57),
    [anon_sym_SLASH] = ACTIONS(57),
    [anon_sym_PIPE_PIPE] = ACTIONS(57),
    [anon_sym_AT] = ACTIONS(57),
    [anon_sym_LT] = ACTIONS(57),
    [aux_sym__lexical_identifier_token1] = ACTIONS(57),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(57),
    [anon_sym_BANGin] = ACTIONS(57),
    [anon_sym_typealias] = ACTIONS(57),
    [anon_sym_AMP_AMP] = ACTIONS(57),
    [anon_sym_STAR] = ACTIONS(57),
    [anon_sym_PERCENT] = ACTIONS(57),
    [sym__not_is] = ACTIONS(57),
    [aux_sym__semi_token1] = ACTIONS(59),
  },
  [211] = {
    [sym__lexical_identifier] = STATE(209),
    [sym_simple_identifier] = STATE(28),
    [aux_sym__lexical_identifier_token1] = ACTIONS(479),
    [aux_sym__lexical_identifier_token2] = ACTIONS(479),
  },
  [212] = {
    [sym__lexical_identifier] = STATE(206),
    [sym_simple_identifier] = STATE(152),
    [aux_sym__lexical_identifier_token1] = ACTIONS(248),
    [aux_sym__lexical_identifier_token2] = ACTIONS(248),
  },
  [213] = {
    [sym_directly_assignable_expression] = STATE(16),
    [sym_statements] = STATE(216),
    [sym__loop_statement] = STATE(79),
    [sym_for_statement] = STATE(79),
    [sym_assignment] = STATE(79),
    [sym__expression] = STATE(18),
    [sym_type_alias] = STATE(79),
    [sym_annotation] = STATE(14),
    [sym__prefix_unary_operator] = STATE(24),
    [sym_function_declaration] = STATE(79),
    [sym_label] = STATE(14),
    [sym__statement] = STATE(79),
    [sym_do_while_statement] = STATE(79),
    [sym_unary_expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [sym__lexical_identifier] = STATE(15),
    [sym_simple_identifier] = STATE(25),
    [sym_while_statement] = STATE(79),
    [aux_sym__statement_repeat1] = STATE(17),
    [sym__declaration] = STATE(79),
    [sym_class_declaration] = STATE(79),
    [sym_object_declaration] = STATE(79),
    [anon_sym_while] = ACTIONS(3),
    [anon_sym_interface] = ACTIONS(5),
    [anon_sym_DASH_DASH] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(13),
    [aux_sym__lexical_identifier_token2] = ACTIONS(15),
    [anon_sym_AT] = ACTIONS(17),
    [anon_sym_do] = ACTIONS(19),
    [anon_sym_RBRACE] = ACTIONS(524),
    [anon_sym_PLUS_PLUS] = ACTIONS(7),
    [anon_sym_class] = ACTIONS(5),
    [anon_sym_fun] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym__lexical_identifier_token1] = ACTIONS(25),
    [anon_sym_object] = ACTIONS(29),
    [anon_sym_BANG] = ACTIONS(7),
    [anon_sym_typealias] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(33),
    [anon_sym_for] = ACTIONS(35),
  },
  [214] = {
    [anon_sym_EQ] = ACTIONS(526),
  },
  [215] = {
    [sym__lexical_identifier] = STATE(205),
    [sym_simple_identifier] = STATE(184),
    [aux_sym__lexical_identifier_token1] = ACTIONS(49),
    [aux_sym__lexical_identifier_token2] = ACTIONS(49),
  },
  [216] = {
    [anon_sym_RBRACE] = ACTIONS(528),
  },
  [217] = {
    [sym__block] = STATE(134),
    [sym_function_body] = STATE(135),
    [anon_sym_EQ] = ACTIONS(530),
    [anon_sym_interface] = ACTIONS(389),
    [anon_sym_object] = ACTIONS(389),
    [anon_sym_LBRACE] = ACTIONS(391),
    [anon_sym_typealias] = ACTIONS(389),
    [anon_sym_RBRACE] = ACTIONS(389),
    [anon_sym_class] = ACTIONS(389),
    [anon_sym_fun] = ACTIONS(389),
    [aux_sym__semi_token1] = ACTIONS(387),
  },
  [218] = {
    [sym_binary_expression] = STATE(191),
    [sym__lexical_identifier] = STATE(210),
    [sym__prefix_unary_operator] = STATE(219),
    [sym_annotation] = STATE(219),
    [sym_simple_identifier] = STATE(190),
    [sym__expression] = STATE(191),
    [sym_label] = STATE(219),
    [sym_unary_expression] = STATE(191),
    [anon_sym_DASH] = ACTIONS(494),
    [anon_sym_DASH_DASH] = ACTIONS(496),
    [aux_sym__lexical_identifier_token1] = ACTIONS(498),
    [anon_sym_PLUS] = ACTIONS(494),
    [aux_sym__lexical_identifier_token2] = ACTIONS(498),
    [anon_sym_BANG] = ACTIONS(496),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(500),
    [anon_sym_PLUS_PLUS] = ACTIONS(496),
  },
  [219] = {
    [sym_binary_expression] = STATE(192),
    [sym__lexical_identifier] = STATE(210),
    [sym__prefix_unary_operator] = STATE(219),
    [sym_annotation] = STATE(219),
    [sym_simple_identifier] = STATE(190),
    [sym__expression] = STATE(192),
    [sym_label] = STATE(219),
    [sym_unary_expression] = STATE(192),
    [anon_sym_DASH] = ACTIONS(494),
    [anon_sym_DASH_DASH] = ACTIONS(496),
    [aux_sym__lexical_identifier_token1] = ACTIONS(498),
    [anon_sym_PLUS] = ACTIONS(494),
    [aux_sym__lexical_identifier_token2] = ACTIONS(498),
    [anon_sym_BANG] = ACTIONS(496),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(500),
    [anon_sym_PLUS_PLUS] = ACTIONS(496),
  },
  [220] = {
    [sym_binary_expression] = STATE(194),
    [sym__lexical_identifier] = STATE(210),
    [sym__prefix_unary_operator] = STATE(219),
    [sym_annotation] = STATE(219),
    [sym_simple_identifier] = STATE(190),
    [sym__expression] = STATE(194),
    [sym_label] = STATE(219),
    [sym_unary_expression] = STATE(194),
    [anon_sym_DASH] = ACTIONS(494),
    [anon_sym_DASH_DASH] = ACTIONS(496),
    [aux_sym__lexical_identifier_token1] = ACTIONS(498),
    [anon_sym_PLUS] = ACTIONS(494),
    [aux_sym__lexical_identifier_token2] = ACTIONS(498),
    [anon_sym_BANG] = ACTIONS(496),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(500),
    [anon_sym_PLUS_PLUS] = ACTIONS(496),
  },
  [221] = {
    [sym_binary_expression] = STATE(195),
    [sym__lexical_identifier] = STATE(210),
    [sym__prefix_unary_operator] = STATE(219),
    [sym_annotation] = STATE(219),
    [sym_simple_identifier] = STATE(190),
    [sym__expression] = STATE(195),
    [sym_label] = STATE(219),
    [sym_unary_expression] = STATE(195),
    [anon_sym_DASH] = ACTIONS(494),
    [anon_sym_DASH_DASH] = ACTIONS(496),
    [aux_sym__lexical_identifier_token1] = ACTIONS(498),
    [anon_sym_PLUS] = ACTIONS(494),
    [aux_sym__lexical_identifier_token2] = ACTIONS(498),
    [anon_sym_BANG] = ACTIONS(496),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(500),
    [anon_sym_PLUS_PLUS] = ACTIONS(496),
  },
  [222] = {
    [sym_binary_expression] = STATE(196),
    [sym__lexical_identifier] = STATE(210),
    [sym__prefix_unary_operator] = STATE(219),
    [sym_annotation] = STATE(219),
    [sym_simple_identifier] = STATE(190),
    [sym__expression] = STATE(196),
    [sym_label] = STATE(219),
    [sym_unary_expression] = STATE(196),
    [anon_sym_DASH] = ACTIONS(494),
    [anon_sym_DASH_DASH] = ACTIONS(496),
    [aux_sym__lexical_identifier_token1] = ACTIONS(498),
    [anon_sym_PLUS] = ACTIONS(494),
    [aux_sym__lexical_identifier_token2] = ACTIONS(498),
    [anon_sym_BANG] = ACTIONS(496),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(500),
    [anon_sym_PLUS_PLUS] = ACTIONS(496),
  },
  [223] = {
    [sym_binary_expression] = STATE(197),
    [sym__lexical_identifier] = STATE(210),
    [sym__prefix_unary_operator] = STATE(219),
    [sym_annotation] = STATE(219),
    [sym_simple_identifier] = STATE(190),
    [sym__expression] = STATE(197),
    [sym_label] = STATE(219),
    [sym_unary_expression] = STATE(197),
    [anon_sym_DASH] = ACTIONS(494),
    [anon_sym_DASH_DASH] = ACTIONS(496),
    [aux_sym__lexical_identifier_token1] = ACTIONS(498),
    [anon_sym_PLUS] = ACTIONS(494),
    [aux_sym__lexical_identifier_token2] = ACTIONS(498),
    [anon_sym_BANG] = ACTIONS(496),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(500),
    [anon_sym_PLUS_PLUS] = ACTIONS(496),
  },
  [224] = {
    [sym_binary_expression] = STATE(198),
    [sym__lexical_identifier] = STATE(210),
    [sym__prefix_unary_operator] = STATE(219),
    [sym_annotation] = STATE(219),
    [sym_simple_identifier] = STATE(190),
    [sym__expression] = STATE(198),
    [sym_label] = STATE(219),
    [sym_unary_expression] = STATE(198),
    [anon_sym_DASH] = ACTIONS(494),
    [anon_sym_DASH_DASH] = ACTIONS(496),
    [aux_sym__lexical_identifier_token1] = ACTIONS(498),
    [anon_sym_PLUS] = ACTIONS(494),
    [aux_sym__lexical_identifier_token2] = ACTIONS(498),
    [anon_sym_BANG] = ACTIONS(496),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(500),
    [anon_sym_PLUS_PLUS] = ACTIONS(496),
  },
  [225] = {
    [sym_binary_expression] = STATE(199),
    [sym__lexical_identifier] = STATE(210),
    [sym__prefix_unary_operator] = STATE(219),
    [sym_annotation] = STATE(219),
    [sym_simple_identifier] = STATE(190),
    [sym__expression] = STATE(199),
    [sym_label] = STATE(219),
    [sym_unary_expression] = STATE(199),
    [anon_sym_DASH] = ACTIONS(494),
    [anon_sym_DASH_DASH] = ACTIONS(496),
    [aux_sym__lexical_identifier_token1] = ACTIONS(498),
    [anon_sym_PLUS] = ACTIONS(494),
    [aux_sym__lexical_identifier_token2] = ACTIONS(498),
    [anon_sym_BANG] = ACTIONS(496),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(500),
    [anon_sym_PLUS_PLUS] = ACTIONS(496),
  },
  [226] = {
    [sym_binary_expression] = STATE(200),
    [sym__lexical_identifier] = STATE(210),
    [sym__prefix_unary_operator] = STATE(219),
    [sym_annotation] = STATE(219),
    [sym_simple_identifier] = STATE(190),
    [sym__expression] = STATE(200),
    [sym_label] = STATE(219),
    [sym_unary_expression] = STATE(200),
    [anon_sym_DASH] = ACTIONS(494),
    [anon_sym_DASH_DASH] = ACTIONS(496),
    [aux_sym__lexical_identifier_token1] = ACTIONS(498),
    [anon_sym_PLUS] = ACTIONS(494),
    [aux_sym__lexical_identifier_token2] = ACTIONS(498),
    [anon_sym_BANG] = ACTIONS(496),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(500),
    [anon_sym_PLUS_PLUS] = ACTIONS(496),
  },
  [227] = {
    [sym_binary_expression] = STATE(201),
    [sym__lexical_identifier] = STATE(210),
    [sym__prefix_unary_operator] = STATE(219),
    [sym_annotation] = STATE(219),
    [sym_simple_identifier] = STATE(190),
    [sym__expression] = STATE(201),
    [sym_label] = STATE(219),
    [sym_unary_expression] = STATE(201),
    [anon_sym_DASH] = ACTIONS(494),
    [anon_sym_DASH_DASH] = ACTIONS(496),
    [aux_sym__lexical_identifier_token1] = ACTIONS(498),
    [anon_sym_PLUS] = ACTIONS(494),
    [aux_sym__lexical_identifier_token2] = ACTIONS(498),
    [anon_sym_BANG] = ACTIONS(496),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(500),
    [anon_sym_PLUS_PLUS] = ACTIONS(496),
  },
  [228] = {
    [sym__lexical_identifier] = STATE(210),
    [sym_simple_identifier] = STATE(202),
    [sym__type] = STATE(202),
    [aux_sym__lexical_identifier_token1] = ACTIONS(498),
    [aux_sym__lexical_identifier_token2] = ACTIONS(498),
  },
  [229] = {
    [sym_binary_expression] = STATE(203),
    [sym__lexical_identifier] = STATE(210),
    [sym__prefix_unary_operator] = STATE(219),
    [sym_annotation] = STATE(219),
    [sym_simple_identifier] = STATE(190),
    [sym__expression] = STATE(203),
    [sym_label] = STATE(219),
    [sym_unary_expression] = STATE(203),
    [anon_sym_DASH] = ACTIONS(494),
    [anon_sym_DASH_DASH] = ACTIONS(496),
    [aux_sym__lexical_identifier_token1] = ACTIONS(498),
    [anon_sym_PLUS] = ACTIONS(494),
    [aux_sym__lexical_identifier_token2] = ACTIONS(498),
    [anon_sym_BANG] = ACTIONS(496),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(500),
    [anon_sym_PLUS_PLUS] = ACTIONS(496),
  },
  [230] = {
    [sym_binary_expression] = STATE(204),
    [sym__lexical_identifier] = STATE(210),
    [sym__prefix_unary_operator] = STATE(219),
    [sym_annotation] = STATE(219),
    [sym_simple_identifier] = STATE(190),
    [sym__expression] = STATE(204),
    [sym_label] = STATE(219),
    [sym_unary_expression] = STATE(204),
    [anon_sym_DASH] = ACTIONS(494),
    [anon_sym_DASH_DASH] = ACTIONS(496),
    [aux_sym__lexical_identifier_token1] = ACTIONS(498),
    [anon_sym_PLUS] = ACTIONS(494),
    [aux_sym__lexical_identifier_token2] = ACTIONS(498),
    [anon_sym_BANG] = ACTIONS(496),
    [anon_sym_AT] = ACTIONS(51),
    [anon_sym_STAR] = ACTIONS(500),
    [anon_sym_PLUS_PLUS] = ACTIONS(496),
  },
  [231] = {
    [sym__lexical_identifier] = STATE(189),
    [sym_simple_identifier] = STATE(214),
    [aux_sym__lexical_identifier_token1] = ACTIONS(43),
    [aux_sym__lexical_identifier_token2] = ACTIONS(43),
  },
  [232] = {
    [anon_sym_RPAREN] = ACTIONS(532),
  },
  [233] = {
    [anon_sym_LPAREN] = ACTIONS(534),
  },
  [234] = {
    [sym__lexical_identifier] = STATE(189),
    [sym_simple_identifier] = STATE(233),
    [aux_sym__lexical_identifier_token1] = ACTIONS(43),
    [aux_sym__lexical_identifier_token2] = ACTIONS(43),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, SHIFT(2),
  [5] = {.count = 1, .reusable = false}, SHIFT(3),
  [7] = {.count = 1, .reusable = true}, SHIFT(24),
  [9] = {.count = 1, .reusable = false}, SHIFT(4),
  [11] = {.count = 1, .reusable = true}, SHIFT(5),
  [13] = {.count = 1, .reusable = false}, SHIFT(24),
  [15] = {.count = 1, .reusable = true}, SHIFT(15),
  [17] = {.count = 1, .reusable = true}, SHIFT(6),
  [19] = {.count = 1, .reusable = false}, SHIFT(7),
  [21] = {.count = 1, .reusable = false}, SHIFT(8),
  [23] = {.count = 1, .reusable = false}, SHIFT(9),
  [25] = {.count = 1, .reusable = false}, SHIFT(15),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [29] = {.count = 1, .reusable = false}, SHIFT(10),
  [31] = {.count = 1, .reusable = false}, SHIFT(11),
  [33] = {.count = 1, .reusable = true}, SHIFT(12),
  [35] = {.count = 1, .reusable = false}, SHIFT(13),
  [37] = {.count = 1, .reusable = true}, SHIFT(27),
  [39] = {.count = 1, .reusable = true}, SHIFT(149),
  [41] = {.count = 1, .reusable = true}, SHIFT(31),
  [43] = {.count = 1, .reusable = true}, SHIFT(189),
  [45] = {.count = 1, .reusable = true}, SHIFT(33),
  [47] = {.count = 1, .reusable = true}, SHIFT(34),
  [49] = {.count = 1, .reusable = true}, SHIFT(205),
  [51] = {.count = 1, .reusable = true}, SHIFT(212),
  [53] = {.count = 1, .reusable = true}, SHIFT(43),
  [55] = {.count = 1, .reusable = false}, REDUCE(aux_sym__statement_repeat1, 1),
  [57] = {.count = 1, .reusable = false}, REDUCE(sym_simple_identifier, 1),
  [59] = {.count = 1, .reusable = true}, REDUCE(sym_simple_identifier, 1),
  [61] = {.count = 1, .reusable = true}, SHIFT(45),
  [63] = {.count = 1, .reusable = false}, SHIFT(56),
  [65] = {.count = 1, .reusable = false}, SHIFT(206),
  [67] = {.count = 1, .reusable = false}, SHIFT(55),
  [69] = {.count = 1, .reusable = false}, SHIFT(57),
  [71] = {.count = 1, .reusable = false}, REDUCE(sym__statement, 1),
  [73] = {.count = 1, .reusable = false}, SHIFT(60),
  [75] = {.count = 1, .reusable = false}, SHIFT(58),
  [77] = {.count = 1, .reusable = false}, SHIFT(53),
  [79] = {.count = 1, .reusable = false}, SHIFT(51),
  [81] = {.count = 1, .reusable = false}, SHIFT(54),
  [83] = {.count = 1, .reusable = false}, SHIFT(50),
  [85] = {.count = 1, .reusable = false}, SHIFT(49),
  [87] = {.count = 1, .reusable = false}, SHIFT(52),
  [89] = {.count = 1, .reusable = true}, REDUCE(sym__statement, 1),
  [91] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [93] = {.count = 1, .reusable = true}, SHIFT(65),
  [95] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [97] = {.count = 1, .reusable = false}, REDUCE(sym__expression, 1),
  [99] = {.count = 1, .reusable = false}, REDUCE(sym_directly_assignable_expression, 1),
  [101] = {.count = 1, .reusable = false}, SHIFT(66),
  [103] = {.count = 1, .reusable = true}, REDUCE(sym__expression, 1),
  [105] = {.count = 1, .reusable = false}, SHIFT(150),
  [107] = {.count = 1, .reusable = true}, SHIFT(150),
  [109] = {.count = 1, .reusable = true}, SHIFT(207),
  [111] = {.count = 1, .reusable = true}, SHIFT(148),
  [113] = {.count = 1, .reusable = false}, REDUCE(sym_class_declaration, 2),
  [115] = {.count = 1, .reusable = false}, SHIFT(69),
  [117] = {.count = 1, .reusable = true}, REDUCE(sym_class_declaration, 2),
  [119] = {.count = 1, .reusable = false}, REDUCE(sym_identifier, 1),
  [121] = {.count = 1, .reusable = false}, SHIFT(71),
  [123] = {.count = 1, .reusable = true}, REDUCE(sym_identifier, 1),
  [125] = {.count = 1, .reusable = false}, REDUCE(sym_import_header, 2),
  [127] = {.count = 1, .reusable = false}, SHIFT(74),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym_import_header, 2),
  [131] = {.count = 1, .reusable = false}, SHIFT(73),
  [133] = {.count = 1, .reusable = true}, SHIFT(75),
  [135] = {.count = 1, .reusable = false}, REDUCE(sym_shebang_line, 2),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym_shebang_line, 2),
  [139] = {.count = 1, .reusable = false}, REDUCE(sym_annotation, 2),
  [141] = {.count = 1, .reusable = true}, REDUCE(sym_annotation, 2),
  [143] = {.count = 1, .reusable = true}, SHIFT(76),
  [145] = {.count = 1, .reusable = true}, SHIFT(77),
  [147] = {.count = 1, .reusable = true}, SHIFT(80),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym_control_structure_body, 1),
  [151] = {.count = 1, .reusable = true}, SHIFT(81),
  [153] = {.count = 1, .reusable = false}, REDUCE(sym_package_header, 2),
  [155] = {.count = 1, .reusable = true}, REDUCE(sym_package_header, 2),
  [157] = {.count = 1, .reusable = true}, SHIFT(82),
  [159] = {.count = 1, .reusable = false}, REDUCE(sym_object_declaration, 2),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym_object_declaration, 2),
  [163] = {.count = 1, .reusable = true}, SHIFT(84),
  [165] = {.count = 1, .reusable = false}, SHIFT(169),
  [167] = {.count = 1, .reusable = false}, REDUCE(sym_unary_expression, 2),
  [169] = {.count = 1, .reusable = true}, REDUCE(sym_unary_expression, 2),
  [171] = {.count = 1, .reusable = true}, SHIFT(208),
  [173] = {.count = 1, .reusable = false}, REDUCE(aux_sym__statement_repeat1, 2),
  [175] = {.count = 1, .reusable = true}, REDUCE(aux_sym__statement_repeat1, 2),
  [177] = {.count = 2, .reusable = true}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(189),
  [180] = {.count = 2, .reusable = true}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(6),
  [183] = {.count = 2, .reusable = false}, REDUCE(aux_sym__statement_repeat1, 2), SHIFT_REPEAT(189),
  [186] = {.count = 1, .reusable = false}, REDUCE(sym__statement, 2),
  [188] = {.count = 1, .reusable = true}, REDUCE(sym__statement, 2),
  [190] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 2),
  [192] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(2),
  [195] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(3),
  [198] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(24),
  [201] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(24),
  [204] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(15),
  [207] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(6),
  [210] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(7),
  [213] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(8),
  [216] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(15),
  [219] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2),
  [221] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(10),
  [224] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(11),
  [227] = {.count = 2, .reusable = true}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(12),
  [230] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(13),
  [233] = {.count = 1, .reusable = false}, REDUCE(aux_sym_source_file_repeat2, 2),
  [235] = {.count = 1, .reusable = false}, REDUCE(sym_label, 2),
  [237] = {.count = 1, .reusable = true}, REDUCE(sym_label, 2),
  [239] = {.count = 1, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2),
  [241] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [243] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [246] = {.count = 1, .reusable = false}, SHIFT(164),
  [248] = {.count = 1, .reusable = true}, SHIFT(206),
  [250] = {.count = 1, .reusable = true}, SHIFT(164),
  [252] = {.count = 1, .reusable = true}, SHIFT(163),
  [254] = {.count = 1, .reusable = true}, SHIFT(165),
  [256] = {.count = 1, .reusable = false}, SHIFT(168),
  [258] = {.count = 1, .reusable = true}, SHIFT(166),
  [260] = {.count = 1, .reusable = false}, SHIFT(161),
  [262] = {.count = 1, .reusable = true}, SHIFT(159),
  [264] = {.count = 1, .reusable = false}, SHIFT(163),
  [266] = {.count = 1, .reusable = true}, SHIFT(162),
  [268] = {.count = 1, .reusable = false}, SHIFT(166),
  [270] = {.count = 1, .reusable = true}, SHIFT(158),
  [272] = {.count = 1, .reusable = true}, SHIFT(157),
  [274] = {.count = 1, .reusable = true}, SHIFT(103),
  [276] = {.count = 1, .reusable = true}, SHIFT(168),
  [278] = {.count = 1, .reusable = true}, SHIFT(160),
  [280] = {.count = 1, .reusable = true}, SHIFT(211),
  [282] = {.count = 1, .reusable = true}, SHIFT(147),
  [284] = {.count = 1, .reusable = true}, SHIFT(231),
  [286] = {.count = 1, .reusable = true}, SHIFT(104),
  [288] = {.count = 1, .reusable = true}, SHIFT(234),
  [290] = {.count = 1, .reusable = false}, REDUCE(sym_class_declaration, 3),
  [292] = {.count = 1, .reusable = true}, REDUCE(sym_class_declaration, 3),
  [294] = {.count = 1, .reusable = false}, REDUCE(sym_identifier, 2),
  [296] = {.count = 1, .reusable = true}, REDUCE(sym_identifier, 2),
  [298] = {.count = 1, .reusable = false}, REDUCE(sym_import_header, 3),
  [300] = {.count = 1, .reusable = true}, REDUCE(sym_import_header, 3),
  [302] = {.count = 1, .reusable = true}, SHIFT(110),
  [304] = {.count = 1, .reusable = true}, REDUCE(sym__block, 2),
  [306] = {.count = 1, .reusable = true}, SHIFT(113),
  [308] = {.count = 1, .reusable = true}, SHIFT(114),
  [310] = {.count = 1, .reusable = false}, REDUCE(sym_statements, 1),
  [312] = {.count = 1, .reusable = true}, SHIFT(116),
  [314] = {.count = 1, .reusable = true}, SHIFT(117),
  [316] = {.count = 1, .reusable = false}, REDUCE(sym_package_header, 3),
  [318] = {.count = 1, .reusable = true}, REDUCE(sym_package_header, 3),
  [320] = {.count = 1, .reusable = false}, REDUCE(sym_object_declaration, 3),
  [322] = {.count = 1, .reusable = true}, REDUCE(sym_object_declaration, 3),
  [324] = {.count = 1, .reusable = true}, SHIFT(119),
  [326] = {.count = 1, .reusable = true}, REDUCE(sym_variable_declaration, 1),
  [328] = {.count = 1, .reusable = true}, SHIFT(122),
  [330] = {.count = 1, .reusable = false}, REDUCE(sym_assignment, 3),
  [332] = {.count = 1, .reusable = true}, REDUCE(sym_assignment, 3),
  [334] = {.count = 1, .reusable = true}, SHIFT(66),
  [336] = {.count = 1, .reusable = false}, REDUCE(sym_binary_expression, 3),
  [338] = {.count = 1, .reusable = true}, REDUCE(sym_binary_expression, 3),
  [340] = {.count = 1, .reusable = false}, REDUCE(sym_unary_expression, 3),
  [342] = {.count = 1, .reusable = true}, REDUCE(sym_unary_expression, 3),
  [344] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 3),
  [346] = {.count = 1, .reusable = true}, SHIFT(124),
  [348] = {.count = 1, .reusable = true}, SHIFT(213),
  [350] = {.count = 1, .reusable = false}, REDUCE(sym_class_body, 2),
  [352] = {.count = 1, .reusable = true}, REDUCE(sym_class_body, 2),
  [354] = {.count = 1, .reusable = true}, REDUCE(sym_class_member_declarations, 1),
  [356] = {.count = 1, .reusable = true}, SHIFT(126),
  [358] = {.count = 1, .reusable = false}, REDUCE(aux_sym_class_member_declarations_repeat1, 1),
  [360] = {.count = 1, .reusable = true}, SHIFT(127),
  [362] = {.count = 1, .reusable = false}, REDUCE(aux_sym_identifier_repeat1, 2),
  [364] = {.count = 1, .reusable = true}, REDUCE(aux_sym_identifier_repeat1, 2),
  [366] = {.count = 2, .reusable = false}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(71),
  [369] = {.count = 1, .reusable = false}, REDUCE(sym_import_header, 4),
  [371] = {.count = 1, .reusable = true}, REDUCE(sym_import_header, 4),
  [373] = {.count = 1, .reusable = false}, REDUCE(sym_import_alias, 2),
  [375] = {.count = 1, .reusable = true}, REDUCE(sym_import_alias, 2),
  [377] = {.count = 1, .reusable = true}, SHIFT(128),
  [379] = {.count = 1, .reusable = true}, REDUCE(sym__block, 3),
  [381] = {.count = 1, .reusable = true}, REDUCE(sym_statements, 2),
  [383] = {.count = 1, .reusable = true}, SHIFT(130),
  [385] = {.count = 1, .reusable = false}, REDUCE(sym_statements, 2),
  [387] = {.count = 1, .reusable = true}, REDUCE(sym_function_declaration, 4),
  [389] = {.count = 1, .reusable = false}, REDUCE(sym_function_declaration, 4),
  [391] = {.count = 1, .reusable = false}, SHIFT(213),
  [393] = {.count = 1, .reusable = false}, SHIFT(133),
  [395] = {.count = 1, .reusable = false}, REDUCE(sym_type_alias, 4),
  [397] = {.count = 1, .reusable = true}, REDUCE(sym_type_alias, 4),
  [399] = {.count = 1, .reusable = true}, REDUCE(aux_sym_for_statement_repeat1, 2),
  [401] = {.count = 2, .reusable = true}, REDUCE(aux_sym_for_statement_repeat1, 2), SHIFT_REPEAT(212),
  [404] = {.count = 1, .reusable = true}, SHIFT(137),
  [406] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 4),
  [408] = {.count = 1, .reusable = false}, REDUCE(sym_while_statement, 5),
  [410] = {.count = 1, .reusable = true}, REDUCE(sym_while_statement, 5),
  [412] = {.count = 2, .reusable = true}, REDUCE(aux_sym_class_member_declarations_repeat1, 2), SHIFT_REPEAT(211),
  [415] = {.count = 2, .reusable = true}, REDUCE(aux_sym_class_member_declarations_repeat1, 2), SHIFT_REPEAT(231),
  [418] = {.count = 1, .reusable = true}, REDUCE(aux_sym_class_member_declarations_repeat1, 2),
  [420] = {.count = 2, .reusable = true}, REDUCE(aux_sym_class_member_declarations_repeat1, 2), SHIFT_REPEAT(234),
  [423] = {.count = 2, .reusable = true}, REDUCE(aux_sym_class_member_declarations_repeat1, 2), SHIFT_REPEAT(147),
  [426] = {.count = 1, .reusable = false}, REDUCE(sym_class_body, 3),
  [428] = {.count = 1, .reusable = true}, REDUCE(sym_class_body, 3),
  [430] = {.count = 1, .reusable = false}, REDUCE(sym_do_while_statement, 5),
  [432] = {.count = 1, .reusable = true}, REDUCE(sym_do_while_statement, 5),
  [434] = {.count = 1, .reusable = true}, REDUCE(aux_sym_statements_repeat1, 2),
  [436] = {.count = 1, .reusable = false}, REDUCE(aux_sym_statements_repeat1, 2),
  [438] = {.count = 1, .reusable = true}, REDUCE(sym_statements, 3),
  [440] = {.count = 2, .reusable = true}, REDUCE(aux_sym_statements_repeat1, 2), SHIFT_REPEAT(139),
  [443] = {.count = 1, .reusable = true}, SHIFT(140),
  [445] = {.count = 1, .reusable = false}, REDUCE(sym_function_body, 1),
  [447] = {.count = 1, .reusable = true}, REDUCE(sym_function_body, 1),
  [449] = {.count = 1, .reusable = false}, REDUCE(sym_function_declaration, 5),
  [451] = {.count = 1, .reusable = true}, REDUCE(sym_function_declaration, 5),
  [453] = {.count = 1, .reusable = true}, REDUCE(sym_variable_declaration, 3),
  [455] = {.count = 1, .reusable = true}, SHIFT(143),
  [457] = {.count = 1, .reusable = false}, REDUCE(sym_do_while_statement, 6),
  [459] = {.count = 1, .reusable = true}, REDUCE(sym_do_while_statement, 6),
  [461] = {.count = 1, .reusable = false}, REDUCE(sym_function_body, 2),
  [463] = {.count = 1, .reusable = true}, REDUCE(sym_function_body, 2),
  [465] = {.count = 1, .reusable = true}, SHIFT(144),
  [467] = {.count = 1, .reusable = false}, REDUCE(sym_for_statement, 6),
  [469] = {.count = 1, .reusable = true}, REDUCE(sym_for_statement, 6),
  [471] = {.count = 1, .reusable = false}, REDUCE(sym_for_statement, 7),
  [473] = {.count = 1, .reusable = true}, REDUCE(sym_for_statement, 7),
  [475] = {.count = 1, .reusable = false}, REDUCE(sym_for_statement, 8),
  [477] = {.count = 1, .reusable = true}, REDUCE(sym_for_statement, 8),
  [479] = {.count = 1, .reusable = true}, SHIFT(209),
  [481] = {.count = 1, .reusable = false}, SHIFT(215),
  [483] = {.count = 1, .reusable = false}, REDUCE(sym_control_structure_body, 1),
  [485] = {.count = 1, .reusable = true}, SHIFT(169),
  [487] = {.count = 1, .reusable = false}, REDUCE(sym__block, 2),
  [489] = {.count = 2, .reusable = false}, REDUCE(aux_sym_identifier_repeat1, 2), SHIFT_REPEAT(215),
  [492] = {.count = 1, .reusable = false}, REDUCE(sym__block, 3),
  [494] = {.count = 1, .reusable = false}, SHIFT(219),
  [496] = {.count = 1, .reusable = true}, SHIFT(219),
  [498] = {.count = 1, .reusable = true}, SHIFT(210),
  [500] = {.count = 1, .reusable = true}, SHIFT(218),
  [502] = {.count = 1, .reusable = false}, SHIFT(227),
  [504] = {.count = 1, .reusable = false}, SHIFT(226),
  [506] = {.count = 1, .reusable = false}, SHIFT(193),
  [508] = {.count = 1, .reusable = false}, SHIFT(230),
  [510] = {.count = 1, .reusable = false}, SHIFT(228),
  [512] = {.count = 1, .reusable = false}, SHIFT(224),
  [514] = {.count = 1, .reusable = false}, SHIFT(222),
  [516] = {.count = 1, .reusable = false}, SHIFT(225),
  [518] = {.count = 1, .reusable = false}, SHIFT(221),
  [520] = {.count = 1, .reusable = false}, SHIFT(220),
  [522] = {.count = 1, .reusable = false}, SHIFT(223),
  [524] = {.count = 1, .reusable = true}, SHIFT(171),
  [526] = {.count = 1, .reusable = true}, SHIFT(172),
  [528] = {.count = 1, .reusable = true}, SHIFT(186),
  [530] = {.count = 1, .reusable = false}, SHIFT(187),
  [532] = {.count = 1, .reusable = true}, SHIFT(217),
  [534] = {.count = 1, .reusable = true}, SHIFT(232),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_kotlin(void) {
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
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
