#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 207
#define SYMBOL_COUNT 127
#define ALIAS_COUNT 0
#define TOKEN_COUNT 77
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_SEMI = 1,
  sym_decimal_integer_literal = 2,
  sym_hex_integer_literal = 3,
  sym_octal_integer_literal = 4,
  sym_binary_integer_literal = 5,
  sym_decimal_floating_point_literal = 6,
  sym_hex_floating_point_literal = 7,
  anon_sym_true = 8,
  anon_sym_false = 9,
  anon_sym_SQUOTE = 10,
  aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH = 11,
  aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH = 12,
  aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH = 13,
  sym_string_literal = 14,
  sym_null_literal = 15,
  aux_sym_SLASH_BSLASH_BSLASH_SLASH = 16,
  anon_sym_DQUOTE = 17,
  anon_sym_EQ = 18,
  anon_sym_PLUS_EQ = 19,
  anon_sym_DASH_EQ = 20,
  anon_sym_STAR_EQ = 21,
  anon_sym_SLASH_EQ = 22,
  anon_sym_AMP_EQ = 23,
  anon_sym_PIPE_EQ = 24,
  anon_sym_CARET_EQ = 25,
  anon_sym_PERCENT_EQ = 26,
  anon_sym_LT_LT_EQ = 27,
  anon_sym_GT_GT_EQ = 28,
  anon_sym_GT_GT_GT_EQ = 29,
  anon_sym_GT = 30,
  anon_sym_LT = 31,
  anon_sym_EQ_EQ = 32,
  anon_sym_GT_EQ = 33,
  anon_sym_LT_EQ = 34,
  anon_sym_BANG_EQ = 35,
  anon_sym_AMP_AMP = 36,
  anon_sym_PIPE_PIPE = 37,
  anon_sym_PLUS = 38,
  anon_sym_DASH = 39,
  anon_sym_STAR = 40,
  anon_sym_SLASH = 41,
  anon_sym_AMP = 42,
  anon_sym_PIPE = 43,
  anon_sym_CARET = 44,
  anon_sym_PERCENT = 45,
  anon_sym_LT_LT = 46,
  anon_sym_GT_GT = 47,
  anon_sym_GT_GT_GT = 48,
  anon_sym_QMARK = 49,
  anon_sym_COLON = 50,
  anon_sym_BANG = 51,
  anon_sym_TILDE = 52,
  anon_sym_PLUS_PLUS = 53,
  anon_sym_DASH_DASH = 54,
  anon_sym_LPAREN = 55,
  anon_sym_RPAREN = 56,
  anon_sym_LBRACE = 57,
  anon_sym_RBRACE = 58,
  anon_sym_AT = 59,
  anon_sym_COMMA = 60,
  anon_sym_open = 61,
  anon_sym_module = 62,
  anon_sym_DOT = 63,
  anon_sym_requires = 64,
  anon_sym_exports = 65,
  anon_sym_to = 66,
  anon_sym_opens = 67,
  anon_sym_uses = 68,
  anon_sym_provides = 69,
  anon_sym_with = 70,
  anon_sym_transitive = 71,
  anon_sym_static = 72,
  anon_sym_package = 73,
  anon_sym_import = 74,
  sym_identifier = 75,
  sym_comment = 76,
  sym_program = 77,
  sym__statement = 78,
  sym__semicolon = 79,
  sym__literal = 80,
  sym_integer_literal = 81,
  sym_floating_point_literal = 82,
  sym_boolean_literal = 83,
  sym_character_literal = 84,
  sym__expression = 85,
  sym_assignment_expression = 86,
  sym_binary_expression = 87,
  sym_ternary_expression = 88,
  sym_unary_expression = 89,
  sym_update_expression = 90,
  sym__annotation = 91,
  sym_normal_annotation = 92,
  sym_marker_annotation = 93,
  sym_single_element_annotation = 94,
  sym_element_value_pair_list = 95,
  sym_element_value_pair = 96,
  sym_element_value = 97,
  sym_element_value_array_initializer = 98,
  sym_conditional_expression = 99,
  sym_conditional_or_expression = 100,
  sym_conditional_and_expression = 101,
  sym_inclusive_or_expression = 102,
  sym_exclusive_or_expression = 103,
  sym_and_expression = 104,
  sym_relational_expression = 105,
  sym_equality_expression = 106,
  sym_shift_expression = 107,
  sym_additive_expression = 108,
  sym_multiplicative_expression = 109,
  sym__declaration = 110,
  sym_module_declaration = 111,
  sym_module_identifier = 112,
  sym_module_directive = 113,
  sym_requires_modifier = 114,
  sym_module_name = 115,
  sym_package_declaration = 116,
  sym_package_or_type_name = 117,
  sym_single_type_import_declaration = 118,
  aux_sym_program_repeat1 = 119,
  aux_sym_character_literal_repeat1 = 120,
  aux_sym_element_value_pair_list_repeat1 = 121,
  aux_sym_module_declaration_repeat1 = 122,
  aux_sym_module_declaration_repeat2 = 123,
  aux_sym_module_identifier_repeat1 = 124,
  aux_sym_module_directive_repeat1 = 125,
  aux_sym_module_directive_repeat2 = 126,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_SEMI] = ";",
  [sym_decimal_integer_literal] = "decimal_integer_literal",
  [sym_hex_integer_literal] = "hex_integer_literal",
  [sym_octal_integer_literal] = "octal_integer_literal",
  [sym_binary_integer_literal] = "binary_integer_literal",
  [sym_decimal_floating_point_literal] = "decimal_floating_point_literal",
  [sym_hex_floating_point_literal] = "hex_floating_point_literal",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = "/[^\\'\\n]/",
  [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = "/\\\\./",
  [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH] = "/\\\\\\n/",
  [sym_string_literal] = "string_literal",
  [sym_null_literal] = "null_literal",
  [aux_sym_SLASH_BSLASH_BSLASH_SLASH] = "/\\\\/",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_EQ] = "=",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_SLASH_EQ] = "/=",
  [anon_sym_AMP_EQ] = "&=",
  [anon_sym_PIPE_EQ] = "|=",
  [anon_sym_CARET_EQ] = "^=",
  [anon_sym_PERCENT_EQ] = "%=",
  [anon_sym_LT_LT_EQ] = "<<=",
  [anon_sym_GT_GT_EQ] = ">>=",
  [anon_sym_GT_GT_GT_EQ] = ">>>=",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_AMP] = "&",
  [anon_sym_PIPE] = "|",
  [anon_sym_CARET] = "^",
  [anon_sym_PERCENT] = "%",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_GT_GT_GT] = ">>>",
  [anon_sym_QMARK] = "?",
  [anon_sym_COLON] = ":",
  [anon_sym_BANG] = "!",
  [anon_sym_TILDE] = "~",
  [anon_sym_PLUS_PLUS] = "++",
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_AT] = "@",
  [anon_sym_COMMA] = ",",
  [anon_sym_open] = "open",
  [anon_sym_module] = "module",
  [anon_sym_DOT] = ".",
  [anon_sym_requires] = "requires",
  [anon_sym_exports] = "exports",
  [anon_sym_to] = "to",
  [anon_sym_opens] = "opens",
  [anon_sym_uses] = "uses",
  [anon_sym_provides] = "provides",
  [anon_sym_with] = "with",
  [anon_sym_transitive] = "transitive",
  [anon_sym_static] = "static",
  [anon_sym_package] = "package",
  [anon_sym_import] = "import",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
  [sym_program] = "program",
  [sym__statement] = "_statement",
  [sym__semicolon] = "_semicolon",
  [sym__literal] = "_literal",
  [sym_integer_literal] = "integer_literal",
  [sym_floating_point_literal] = "floating_point_literal",
  [sym_boolean_literal] = "boolean_literal",
  [sym_character_literal] = "character_literal",
  [sym__expression] = "_expression",
  [sym_assignment_expression] = "assignment_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_ternary_expression] = "ternary_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_update_expression] = "update_expression",
  [sym__annotation] = "_annotation",
  [sym_normal_annotation] = "normal_annotation",
  [sym_marker_annotation] = "marker_annotation",
  [sym_single_element_annotation] = "single_element_annotation",
  [sym_element_value_pair_list] = "element_value_pair_list",
  [sym_element_value_pair] = "element_value_pair",
  [sym_element_value] = "element_value",
  [sym_element_value_array_initializer] = "element_value_array_initializer",
  [sym_conditional_expression] = "conditional_expression",
  [sym_conditional_or_expression] = "conditional_or_expression",
  [sym_conditional_and_expression] = "conditional_and_expression",
  [sym_inclusive_or_expression] = "inclusive_or_expression",
  [sym_exclusive_or_expression] = "exclusive_or_expression",
  [sym_and_expression] = "and_expression",
  [sym_relational_expression] = "relational_expression",
  [sym_equality_expression] = "equality_expression",
  [sym_shift_expression] = "shift_expression",
  [sym_additive_expression] = "additive_expression",
  [sym_multiplicative_expression] = "multiplicative_expression",
  [sym__declaration] = "_declaration",
  [sym_module_declaration] = "module_declaration",
  [sym_module_identifier] = "module_identifier",
  [sym_module_directive] = "module_directive",
  [sym_requires_modifier] = "requires_modifier",
  [sym_module_name] = "module_name",
  [sym_package_declaration] = "package_declaration",
  [sym_package_or_type_name] = "package_or_type_name",
  [sym_single_type_import_declaration] = "single_type_import_declaration",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_character_literal_repeat1] = "character_literal_repeat1",
  [aux_sym_element_value_pair_list_repeat1] = "element_value_pair_list_repeat1",
  [aux_sym_module_declaration_repeat1] = "module_declaration_repeat1",
  [aux_sym_module_declaration_repeat2] = "module_declaration_repeat2",
  [aux_sym_module_identifier_repeat1] = "module_identifier_repeat1",
  [aux_sym_module_directive_repeat1] = "module_directive_repeat1",
  [aux_sym_module_directive_repeat2] = "module_directive_repeat2",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_decimal_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_octal_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_decimal_floating_point_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_floating_point_literal] = {
    .visible = true,
    .named = true,
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
  [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_null_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_SLASH_BSLASH_BSLASH_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
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
  [anon_sym_AMP_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
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
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_open] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_requires] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exports] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_opens] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uses] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_provides] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_transitive] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_static] = {
    .visible = true,
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
  [sym_identifier] = {
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
  [sym__semicolon] = {
    .visible = false,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_floating_point_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_character_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_assignment_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_ternary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_update_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__annotation] = {
    .visible = false,
    .named = true,
  },
  [sym_normal_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_marker_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_single_element_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_element_value_pair_list] = {
    .visible = true,
    .named = true,
  },
  [sym_element_value_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_element_value] = {
    .visible = true,
    .named = true,
  },
  [sym_element_value_array_initializer] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional_or_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_conditional_and_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_inclusive_or_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_exclusive_or_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_and_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_relational_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_equality_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_shift_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_additive_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_multiplicative_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_module_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_module_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_module_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_requires_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_module_name] = {
    .visible = true,
    .named = true,
  },
  [sym_package_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_package_or_type_name] = {
    .visible = true,
    .named = true,
  },
  [sym_single_type_import_declaration] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_character_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_element_value_pair_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_module_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_module_declaration_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_module_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_module_directive_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_module_directive_repeat2] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(7);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(13);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == ',')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(19);
      if (lookahead == '.')
        ADVANCE(22);
      if (lookahead == '/')
        ADVANCE(23);
      if (lookahead == '0')
        ADVANCE(29);
      if (lookahead == ':')
        ADVANCE(55);
      if (lookahead == ';')
        ADVANCE(56);
      if (lookahead == '<')
        ADVANCE(57);
      if (lookahead == '=')
        ADVANCE(61);
      if (lookahead == '>')
        ADVANCE(63);
      if (lookahead == '?')
        ADVANCE(69);
      if (lookahead == '@')
        ADVANCE(70);
      if (lookahead == '\\')
        ADVANCE(71);
      if (lookahead == '^')
        ADVANCE(72);
      if (lookahead == 'f')
        ADVANCE(74);
      if (lookahead == 'n')
        ADVANCE(79);
      if (lookahead == 's')
        ADVANCE(83);
      if (lookahead == 't')
        ADVANCE(89);
      if (lookahead == '{')
        ADVANCE(101);
      if (lookahead == '|')
        ADVANCE(102);
      if (lookahead == '}')
        ADVANCE(105);
      if (lookahead == '~')
        ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('1' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=')
        ADVANCE(3);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '=')
        ADVANCE(6);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&')
        ADVANCE(8);
      if (lookahead == '=')
        ADVANCE(9);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=')
        ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+')
        ADVANCE(16);
      if (lookahead == '=')
        ADVANCE(17);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-')
        ADVANCE(20);
      if (lookahead == '=')
        ADVANCE(21);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*')
        ADVANCE(24);
      if (lookahead == '/')
        ADVANCE(27);
      if (lookahead == '=')
        ADVANCE(28);
      END_STATE();
    case 24:
      if (lookahead == '*')
        ADVANCE(25);
      if (lookahead != 0)
        ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '*')
        ADVANCE(25);
      if (lookahead == '/')
        ADVANCE(26);
      if (lookahead != 0)
        ADVANCE(24);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O')
        ADVANCE(30);
      if (lookahead == 'X')
        ADVANCE(35);
      if (lookahead == 'o')
        ADVANCE(30);
      if (lookahead == 'x')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(31);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_octal_integer_literal);
      if (lookahead == '_')
        ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(31);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_octal_integer_literal);
      if (lookahead == '_')
        ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(46);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == '_')
        ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == '+')
        ADVANCE(39);
      if (lookahead == '-')
        ADVANCE(39);
      if (lookahead == '_')
        ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(37);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_hex_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(41);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f')
        ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(40);
      END_STATE();
    case 41:
      if (lookahead == '_')
        ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(40);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_hex_floating_point_literal);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_hex_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(44);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(38);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(45);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c'))
        ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(43);
      END_STATE();
    case 44:
      if (lookahead == '_')
        ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(37);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_hex_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(37);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_hex_integer_literal);
      if (lookahead == '.')
        ADVANCE(47);
      if (lookahead == '_')
        ADVANCE(48);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(46);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 47:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(37);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_hex_integer_literal);
      if (lookahead == '.')
        ADVANCE(47);
      if (lookahead == '_')
        ADVANCE(48);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_hex_integer_literal);
      if (lookahead == '+')
        ADVANCE(39);
      if (lookahead == '-')
        ADVANCE(39);
      if (lookahead == '.')
        ADVANCE(47);
      if (lookahead == '_')
        ADVANCE(48);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(49);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_hex_integer_literal);
      if (lookahead == '.')
        ADVANCE(47);
      if (lookahead == '_')
        ADVANCE(52);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(50);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c'))
        ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(51);
      END_STATE();
    case 52:
      if (lookahead == '_')
        ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(49);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_hex_integer_literal);
      if (lookahead == '+')
        ADVANCE(39);
      if (lookahead == '-')
        ADVANCE(39);
      if (lookahead == '.')
        ADVANCE(47);
      if (lookahead == '_')
        ADVANCE(48);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(46);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_hex_integer_literal);
      if (lookahead == '.')
        ADVANCE(47);
      if (lookahead == '_')
        ADVANCE(52);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(53);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c'))
        ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(54);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<')
        ADVANCE(58);
      if (lookahead == '=')
        ADVANCE(60);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      if (lookahead == '=')
        ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LT_LT_EQ);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=')
        ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=')
        ADVANCE(64);
      if (lookahead == '>')
        ADVANCE(65);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '=')
        ADVANCE(66);
      if (lookahead == '>')
        ADVANCE(67);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_GT_GT_EQ);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT);
      if (lookahead == '=')
        ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT_EQ);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_SLASH);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '=')
        ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_null_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_static);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(91);
      if (lookahead == 'u')
        ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v')
        ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_transitive);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=')
        ADVANCE(103);
      if (lookahead == '|')
        ADVANCE(104);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 107:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(108);
      if (lookahead == '\"')
        ADVANCE(109);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(113);
      if (lookahead == '.')
        ADVANCE(114);
      if (lookahead == '/')
        ADVANCE(122);
      if (lookahead == '0')
        ADVANCE(123);
      if (lookahead == '@')
        ADVANCE(70);
      if (lookahead == 'f')
        ADVANCE(130);
      if (lookahead == 'i')
        ADVANCE(135);
      if (lookahead == 'm')
        ADVANCE(141);
      if (lookahead == 'n')
        ADVANCE(147);
      if (lookahead == 'o')
        ADVANCE(151);
      if (lookahead == 'p')
        ADVANCE(155);
      if (lookahead == 't')
        ADVANCE(162);
      if (lookahead == '~')
        ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(107);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(129);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 109:
      if (lookahead == '\"')
        ADVANCE(110);
      if (lookahead == '\\')
        ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 111:
      if (lookahead == '\n')
        ADVANCE(109);
      if (lookahead != 0)
        ADVANCE(109);
      END_STATE();
    case 112:
      if (lookahead == '+')
        ADVANCE(16);
      END_STATE();
    case 113:
      if (lookahead == '-')
        ADVANCE(20);
      END_STATE();
    case 114:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(116);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(117);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(115);
      END_STATE();
    case 116:
      if (lookahead == '_')
        ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(115);
      END_STATE();
    case 117:
      if (lookahead == '+')
        ADVANCE(118);
      if (lookahead == '-')
        ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(119);
      END_STATE();
    case 118:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(120);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f')
        ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(119);
      END_STATE();
    case 120:
      if (lookahead == '_')
        ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(119);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      END_STATE();
    case 122:
      if (lookahead == '*')
        ADVANCE(24);
      if (lookahead == '/')
        ADVANCE(27);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_decimal_integer_literal);
      if (lookahead == '.')
        ADVANCE(124);
      if (lookahead == 'B')
        ADVANCE(125);
      if (lookahead == 'O')
        ADVANCE(32);
      if (lookahead == 'X')
        ADVANCE(127);
      if (lookahead == '_')
        ADVANCE(128);
      if (lookahead == 'b')
        ADVANCE(125);
      if (lookahead == 'o')
        ADVANCE(32);
      if (lookahead == 'x')
        ADVANCE(127);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(117);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(129);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(117);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(115);
      END_STATE();
    case 125:
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_binary_integer_literal);
      if (lookahead == '_')
        ADVANCE(125);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(126);
      END_STATE();
    case 127:
      if (lookahead == '.')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(49);
      END_STATE();
    case 128:
      if (lookahead == '_')
        ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(129);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_decimal_integer_literal);
      if (lookahead == '.')
        ADVANCE(124);
      if (lookahead == '_')
        ADVANCE(128);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(117);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(129);
      END_STATE();
    case 130:
      if (lookahead == 'a')
        ADVANCE(131);
      END_STATE();
    case 131:
      if (lookahead == 'l')
        ADVANCE(132);
      END_STATE();
    case 132:
      if (lookahead == 's')
        ADVANCE(133);
      END_STATE();
    case 133:
      if (lookahead == 'e')
        ADVANCE(134);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 135:
      if (lookahead == 'm')
        ADVANCE(136);
      END_STATE();
    case 136:
      if (lookahead == 'p')
        ADVANCE(137);
      END_STATE();
    case 137:
      if (lookahead == 'o')
        ADVANCE(138);
      END_STATE();
    case 138:
      if (lookahead == 'r')
        ADVANCE(139);
      END_STATE();
    case 139:
      if (lookahead == 't')
        ADVANCE(140);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 141:
      if (lookahead == 'o')
        ADVANCE(142);
      END_STATE();
    case 142:
      if (lookahead == 'd')
        ADVANCE(143);
      END_STATE();
    case 143:
      if (lookahead == 'u')
        ADVANCE(144);
      END_STATE();
    case 144:
      if (lookahead == 'l')
        ADVANCE(145);
      END_STATE();
    case 145:
      if (lookahead == 'e')
        ADVANCE(146);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 147:
      if (lookahead == 'u')
        ADVANCE(148);
      END_STATE();
    case 148:
      if (lookahead == 'l')
        ADVANCE(149);
      END_STATE();
    case 149:
      if (lookahead == 'l')
        ADVANCE(150);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_null_literal);
      END_STATE();
    case 151:
      if (lookahead == 'p')
        ADVANCE(152);
      END_STATE();
    case 152:
      if (lookahead == 'e')
        ADVANCE(153);
      END_STATE();
    case 153:
      if (lookahead == 'n')
        ADVANCE(154);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_open);
      END_STATE();
    case 155:
      if (lookahead == 'a')
        ADVANCE(156);
      END_STATE();
    case 156:
      if (lookahead == 'c')
        ADVANCE(157);
      END_STATE();
    case 157:
      if (lookahead == 'k')
        ADVANCE(158);
      END_STATE();
    case 158:
      if (lookahead == 'a')
        ADVANCE(159);
      END_STATE();
    case 159:
      if (lookahead == 'g')
        ADVANCE(160);
      END_STATE();
    case 160:
      if (lookahead == 'e')
        ADVANCE(161);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 162:
      if (lookahead == 'r')
        ADVANCE(163);
      END_STATE();
    case 163:
      if (lookahead == 'u')
        ADVANCE(164);
      END_STATE();
    case 164:
      if (lookahead == 'e')
        ADVANCE(165);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 166:
      if (lookahead == '!')
        ADVANCE(167);
      if (lookahead == '%')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(7);
      if (lookahead == '(')
        ADVANCE(11);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(13);
      if (lookahead == '+')
        ADVANCE(15);
      if (lookahead == ',')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(19);
      if (lookahead == '.')
        ADVANCE(22);
      if (lookahead == '/')
        ADVANCE(23);
      if (lookahead == ':')
        ADVANCE(55);
      if (lookahead == ';')
        ADVANCE(56);
      if (lookahead == '<')
        ADVANCE(57);
      if (lookahead == '=')
        ADVANCE(61);
      if (lookahead == '>')
        ADVANCE(63);
      if (lookahead == '?')
        ADVANCE(69);
      if (lookahead == '@')
        ADVANCE(70);
      if (lookahead == '^')
        ADVANCE(72);
      if (lookahead == 'e')
        ADVANCE(168);
      if (lookahead == 'm')
        ADVANCE(141);
      if (lookahead == 'o')
        ADVANCE(175);
      if (lookahead == 'p')
        ADVANCE(180);
      if (lookahead == 'r')
        ADVANCE(188);
      if (lookahead == 't')
        ADVANCE(196);
      if (lookahead == 'u')
        ADVANCE(198);
      if (lookahead == 'w')
        ADVANCE(202);
      if (lookahead == '{')
        ADVANCE(101);
      if (lookahead == '|')
        ADVANCE(102);
      if (lookahead == '}')
        ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(166);
      END_STATE();
    case 167:
      if (lookahead == '=')
        ADVANCE(3);
      END_STATE();
    case 168:
      if (lookahead == 'x')
        ADVANCE(169);
      END_STATE();
    case 169:
      if (lookahead == 'p')
        ADVANCE(170);
      END_STATE();
    case 170:
      if (lookahead == 'o')
        ADVANCE(171);
      END_STATE();
    case 171:
      if (lookahead == 'r')
        ADVANCE(172);
      END_STATE();
    case 172:
      if (lookahead == 't')
        ADVANCE(173);
      END_STATE();
    case 173:
      if (lookahead == 's')
        ADVANCE(174);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_exports);
      END_STATE();
    case 175:
      if (lookahead == 'p')
        ADVANCE(176);
      END_STATE();
    case 176:
      if (lookahead == 'e')
        ADVANCE(177);
      END_STATE();
    case 177:
      if (lookahead == 'n')
        ADVANCE(178);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_open);
      if (lookahead == 's')
        ADVANCE(179);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_opens);
      END_STATE();
    case 180:
      if (lookahead == 'a')
        ADVANCE(156);
      if (lookahead == 'r')
        ADVANCE(181);
      END_STATE();
    case 181:
      if (lookahead == 'o')
        ADVANCE(182);
      END_STATE();
    case 182:
      if (lookahead == 'v')
        ADVANCE(183);
      END_STATE();
    case 183:
      if (lookahead == 'i')
        ADVANCE(184);
      END_STATE();
    case 184:
      if (lookahead == 'd')
        ADVANCE(185);
      END_STATE();
    case 185:
      if (lookahead == 'e')
        ADVANCE(186);
      END_STATE();
    case 186:
      if (lookahead == 's')
        ADVANCE(187);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_provides);
      END_STATE();
    case 188:
      if (lookahead == 'e')
        ADVANCE(189);
      END_STATE();
    case 189:
      if (lookahead == 'q')
        ADVANCE(190);
      END_STATE();
    case 190:
      if (lookahead == 'u')
        ADVANCE(191);
      END_STATE();
    case 191:
      if (lookahead == 'i')
        ADVANCE(192);
      END_STATE();
    case 192:
      if (lookahead == 'r')
        ADVANCE(193);
      END_STATE();
    case 193:
      if (lookahead == 'e')
        ADVANCE(194);
      END_STATE();
    case 194:
      if (lookahead == 's')
        ADVANCE(195);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_requires);
      END_STATE();
    case 196:
      if (lookahead == 'o')
        ADVANCE(197);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 198:
      if (lookahead == 's')
        ADVANCE(199);
      END_STATE();
    case 199:
      if (lookahead == 'e')
        ADVANCE(200);
      END_STATE();
    case 200:
      if (lookahead == 's')
        ADVANCE(201);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_uses);
      END_STATE();
    case 202:
      if (lookahead == 'i')
        ADVANCE(203);
      END_STATE();
    case 203:
      if (lookahead == 't')
        ADVANCE(204);
      END_STATE();
    case 204:
      if (lookahead == 'h')
        ADVANCE(205);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 206:
      if (lookahead == '\n')
        SKIP(206);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(207);
      if (lookahead == '\\')
        ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(211);
      if (lookahead != 0)
        ADVANCE(211);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH);
      if (lookahead == '*')
        ADVANCE(24);
      if (lookahead == '/')
        ADVANCE(27);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH);
      if (lookahead == '\n')
        ADVANCE(209);
      if (lookahead != 0)
        ADVANCE(210);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
        ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 213:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(108);
      if (lookahead == '\"')
        ADVANCE(109);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '+')
        ADVANCE(112);
      if (lookahead == '-')
        ADVANCE(113);
      if (lookahead == '.')
        ADVANCE(114);
      if (lookahead == '/')
        ADVANCE(122);
      if (lookahead == '0')
        ADVANCE(123);
      if (lookahead == '@')
        ADVANCE(70);
      if (lookahead == 'e')
        ADVANCE(168);
      if (lookahead == 'f')
        ADVANCE(130);
      if (lookahead == 'i')
        ADVANCE(135);
      if (lookahead == 'm')
        ADVANCE(141);
      if (lookahead == 'n')
        ADVANCE(147);
      if (lookahead == 'o')
        ADVANCE(175);
      if (lookahead == 'p')
        ADVANCE(180);
      if (lookahead == 'r')
        ADVANCE(188);
      if (lookahead == 't')
        ADVANCE(162);
      if (lookahead == 'u')
        ADVANCE(198);
      if (lookahead == '}')
        ADVANCE(105);
      if (lookahead == '~')
        ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(213);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(129);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\"')
        ADVANCE(109);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(114);
      if (lookahead == '/')
        ADVANCE(122);
      if (lookahead == '0')
        ADVANCE(215);
      if (lookahead == 'f')
        ADVANCE(74);
      if (lookahead == 'n')
        ADVANCE(79);
      if (lookahead == 't')
        ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(214);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_decimal_integer_literal);
      if (lookahead == '.')
        ADVANCE(124);
      if (lookahead == 'B')
        ADVANCE(216);
      if (lookahead == 'O')
        ADVANCE(30);
      if (lookahead == 'X')
        ADVANCE(35);
      if (lookahead == '_')
        ADVANCE(128);
      if (lookahead == 'b')
        ADVANCE(216);
      if (lookahead == 'o')
        ADVANCE(30);
      if (lookahead == 'x')
        ADVANCE(35);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(218);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(217);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_binary_integer_literal);
      if (lookahead == '_')
        ADVANCE(125);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(217);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+')
        ADVANCE(118);
      if (lookahead == '-')
        ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(120);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f')
        ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_decimal_integer_literal);
      if (lookahead == '.')
        ADVANCE(124);
      if (lookahead == '_')
        ADVANCE(128);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(218);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
        ADVANCE(122);
      if (lookahead == 's')
        ADVANCE(83);
      if (lookahead == 't')
        ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 227:
      if (lookahead == '!')
        ADVANCE(167);
      if (lookahead == '%')
        ADVANCE(228);
      if (lookahead == '&')
        ADVANCE(229);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '*')
        ADVANCE(230);
      if (lookahead == '+')
        ADVANCE(231);
      if (lookahead == ',')
        ADVANCE(18);
      if (lookahead == '-')
        ADVANCE(232);
      if (lookahead == '/')
        ADVANCE(233);
      if (lookahead == '<')
        ADVANCE(234);
      if (lookahead == '=')
        ADVANCE(236);
      if (lookahead == '>')
        ADVANCE(237);
      if (lookahead == '?')
        ADVANCE(69);
      if (lookahead == '^')
        ADVANCE(240);
      if (lookahead == '|')
        ADVANCE(241);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 229:
      if (lookahead == '&')
        ADVANCE(8);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*')
        ADVANCE(24);
      if (lookahead == '/')
        ADVANCE(27);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<')
        ADVANCE(235);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 236:
      if (lookahead == '=')
        ADVANCE(62);
      END_STATE();
    case 237:
      if (lookahead == '>')
        ADVANCE(238);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '>')
        ADVANCE(239);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|')
        ADVANCE(104);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 107},
  [2] = {.lex_state = 166},
  [3] = {.lex_state = 166},
  [4] = {.lex_state = 166},
  [5] = {.lex_state = 206},
  [6] = {.lex_state = 166},
  [7] = {.lex_state = 107},
  [8] = {.lex_state = 107},
  [9] = {.lex_state = 212},
  [10] = {.lex_state = 107},
  [11] = {.lex_state = 212},
  [12] = {.lex_state = 212},
  [13] = {.lex_state = 212},
  [14] = {.lex_state = 107},
  [15] = {.lex_state = 107},
  [16] = {.lex_state = 166},
  [17] = {.lex_state = 166},
  [18] = {.lex_state = 166},
  [19] = {.lex_state = 166},
  [20] = {.lex_state = 107},
  [21] = {.lex_state = 166},
  [22] = {.lex_state = 107},
  [23] = {.lex_state = 107},
  [24] = {.lex_state = 107},
  [25] = {.lex_state = 107},
  [26] = {.lex_state = 166},
  [27] = {.lex_state = 206},
  [28] = {.lex_state = 206},
  [29] = {.lex_state = 166},
  [30] = {.lex_state = 166},
  [31] = {.lex_state = 166},
  [32] = {.lex_state = 166},
  [33] = {.lex_state = 212},
  [34] = {.lex_state = 166},
  [35] = {.lex_state = 166},
  [36] = {.lex_state = 166},
  [37] = {.lex_state = 166},
  [38] = {.lex_state = 213},
  [39] = {.lex_state = 107},
  [40] = {.lex_state = 107},
  [41] = {.lex_state = 107},
  [42] = {.lex_state = 107},
  [43] = {.lex_state = 107},
  [44] = {.lex_state = 107},
  [45] = {.lex_state = 107},
  [46] = {.lex_state = 107},
  [47] = {.lex_state = 166},
  [48] = {.lex_state = 107},
  [49] = {.lex_state = 107},
  [50] = {.lex_state = 212},
  [51] = {.lex_state = 107},
  [52] = {.lex_state = 166},
  [53] = {.lex_state = 206},
  [54] = {.lex_state = 214},
  [55] = {.lex_state = 212},
  [56] = {.lex_state = 166},
  [57] = {.lex_state = 212},
  [58] = {.lex_state = 166},
  [59] = {.lex_state = 166},
  [60] = {.lex_state = 107},
  [61] = {.lex_state = 166},
  [62] = {.lex_state = 107},
  [63] = {.lex_state = 166},
  [64] = {.lex_state = 166},
  [65] = {.lex_state = 166},
  [66] = {.lex_state = 166},
  [67] = {.lex_state = 166},
  [68] = {.lex_state = 166},
  [69] = {.lex_state = 107},
  [70] = {.lex_state = 107},
  [71] = {.lex_state = 166},
  [72] = {.lex_state = 212},
  [73] = {.lex_state = 166},
  [74] = {.lex_state = 166},
  [75] = {.lex_state = 166},
  [76] = {.lex_state = 107},
  [77] = {.lex_state = 107},
  [78] = {.lex_state = 166},
  [79] = {.lex_state = 166},
  [80] = {.lex_state = 166},
  [81] = {.lex_state = 166},
  [82] = {.lex_state = 212},
  [83] = {.lex_state = 107},
  [84] = {.lex_state = 224},
  [85] = {.lex_state = 212},
  [86] = {.lex_state = 212},
  [87] = {.lex_state = 212},
  [88] = {.lex_state = 166},
  [89] = {.lex_state = 166},
  [90] = {.lex_state = 107},
  [91] = {.lex_state = 107},
  [92] = {.lex_state = 107},
  [93] = {.lex_state = 107},
  [94] = {.lex_state = 107},
  [95] = {.lex_state = 107},
  [96] = {.lex_state = 107},
  [97] = {.lex_state = 107},
  [98] = {.lex_state = 107},
  [99] = {.lex_state = 166},
  [100] = {.lex_state = 166},
  [101] = {.lex_state = 107},
  [102] = {.lex_state = 166},
  [103] = {.lex_state = 166},
  [104] = {.lex_state = 212},
  [105] = {.lex_state = 166},
  [106] = {.lex_state = 107},
  [107] = {.lex_state = 166},
  [108] = {.lex_state = 166},
  [109] = {.lex_state = 224},
  [110] = {.lex_state = 166},
  [111] = {.lex_state = 224},
  [112] = {.lex_state = 166},
  [113] = {.lex_state = 224},
  [114] = {.lex_state = 166},
  [115] = {.lex_state = 166},
  [116] = {.lex_state = 166},
  [117] = {.lex_state = 166},
  [118] = {.lex_state = 166},
  [119] = {.lex_state = 166},
  [120] = {.lex_state = 166},
  [121] = {.lex_state = 166},
  [122] = {.lex_state = 166},
  [123] = {.lex_state = 166},
  [124] = {.lex_state = 166},
  [125] = {.lex_state = 166},
  [126] = {.lex_state = 107},
  [127] = {.lex_state = 107},
  [128] = {.lex_state = 166},
  [129] = {.lex_state = 227},
  [130] = {.lex_state = 166},
  [131] = {.lex_state = 166},
  [132] = {.lex_state = 166},
  [133] = {.lex_state = 166},
  [134] = {.lex_state = 166},
  [135] = {.lex_state = 166},
  [136] = {.lex_state = 166},
  [137] = {.lex_state = 166},
  [138] = {.lex_state = 166},
  [139] = {.lex_state = 227},
  [140] = {.lex_state = 227},
  [141] = {.lex_state = 166},
  [142] = {.lex_state = 166},
  [143] = {.lex_state = 212},
  [144] = {.lex_state = 107},
  [145] = {.lex_state = 212},
  [146] = {.lex_state = 166},
  [147] = {.lex_state = 224},
  [148] = {.lex_state = 166},
  [149] = {.lex_state = 166},
  [150] = {.lex_state = 212},
  [151] = {.lex_state = 107},
  [152] = {.lex_state = 166},
  [153] = {.lex_state = 107},
  [154] = {.lex_state = 107},
  [155] = {.lex_state = 166},
  [156] = {.lex_state = 166},
  [157] = {.lex_state = 107},
  [158] = {.lex_state = 107},
  [159] = {.lex_state = 107},
  [160] = {.lex_state = 107},
  [161] = {.lex_state = 107},
  [162] = {.lex_state = 107},
  [163] = {.lex_state = 107},
  [164] = {.lex_state = 107},
  [165] = {.lex_state = 107},
  [166] = {.lex_state = 107},
  [167] = {.lex_state = 166},
  [168] = {.lex_state = 166},
  [169] = {.lex_state = 166},
  [170] = {.lex_state = 166},
  [171] = {.lex_state = 166},
  [172] = {.lex_state = 107},
  [173] = {.lex_state = 107},
  [174] = {.lex_state = 107},
  [175] = {.lex_state = 107},
  [176] = {.lex_state = 107},
  [177] = {.lex_state = 107},
  [178] = {.lex_state = 107},
  [179] = {.lex_state = 107},
  [180] = {.lex_state = 166},
  [181] = {.lex_state = 166},
  [182] = {.lex_state = 166},
  [183] = {.lex_state = 166},
  [184] = {.lex_state = 166},
  [185] = {.lex_state = 166},
  [186] = {.lex_state = 166},
  [187] = {.lex_state = 227},
  [188] = {.lex_state = 227},
  [189] = {.lex_state = 227},
  [190] = {.lex_state = 212},
  [191] = {.lex_state = 166},
  [192] = {.lex_state = 166},
  [193] = {.lex_state = 166},
  [194] = {.lex_state = 166},
  [195] = {.lex_state = 166},
  [196] = {.lex_state = 166},
  [197] = {.lex_state = 166},
  [198] = {.lex_state = 166},
  [199] = {.lex_state = 107},
  [200] = {.lex_state = 166},
  [201] = {.lex_state = 212},
  [202] = {.lex_state = 166},
  [203] = {.lex_state = 107},
  [204] = {.lex_state = 166},
  [205] = {.lex_state = 166},
  [206] = {.lex_state = 166},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_hex_integer_literal] = ACTIONS(3),
    [sym_octal_integer_literal] = ACTIONS(3),
    [sym_hex_floating_point_literal] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(3),
    [anon_sym_false] = ACTIONS(3),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_null_literal] = ACTIONS(3),
    [aux_sym_SLASH_BSLASH_BSLASH_SLASH] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(3),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_AMP_EQ] = ACTIONS(1),
    [anon_sym_PIPE_EQ] = ACTIONS(1),
    [anon_sym_CARET_EQ] = ACTIONS(1),
    [anon_sym_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_LT_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_GT_EQ] = ACTIONS(1),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(3),
    [anon_sym_LT] = ACTIONS(3),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_STAR] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(3),
    [anon_sym_AMP] = ACTIONS(3),
    [anon_sym_PIPE] = ACTIONS(3),
    [anon_sym_CARET] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(3),
    [anon_sym_LT_LT] = ACTIONS(3),
    [anon_sym_GT_GT] = ACTIONS(3),
    [anon_sym_GT_GT_GT] = ACTIONS(3),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(3),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_transitive] = ACTIONS(3),
    [anon_sym_static] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
  },
  [1] = {
    [sym_program] = STATE(14),
    [sym__statement] = STATE(15),
    [sym__literal] = STATE(16),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym__expression] = STATE(17),
    [sym_assignment_expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [sym_ternary_expression] = STATE(18),
    [sym_unary_expression] = STATE(19),
    [sym_update_expression] = STATE(18),
    [sym__annotation] = STATE(20),
    [sym_normal_annotation] = STATE(21),
    [sym_marker_annotation] = STATE(21),
    [sym_single_element_annotation] = STATE(21),
    [sym__declaration] = STATE(22),
    [sym_module_declaration] = STATE(23),
    [sym_package_declaration] = STATE(23),
    [sym_single_type_import_declaration] = STATE(23),
    [aux_sym_program_repeat1] = STATE(24),
    [aux_sym_module_declaration_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(10),
    [sym_decimal_integer_literal] = ACTIONS(12),
    [sym_hex_integer_literal] = ACTIONS(12),
    [sym_octal_integer_literal] = ACTIONS(12),
    [sym_binary_integer_literal] = ACTIONS(12),
    [sym_decimal_floating_point_literal] = ACTIONS(14),
    [sym_hex_floating_point_literal] = ACTIONS(16),
    [anon_sym_true] = ACTIONS(18),
    [anon_sym_false] = ACTIONS(18),
    [anon_sym_SQUOTE] = ACTIONS(20),
    [sym_string_literal] = ACTIONS(22),
    [sym_null_literal] = ACTIONS(22),
    [anon_sym_BANG] = ACTIONS(24),
    [anon_sym_TILDE] = ACTIONS(24),
    [anon_sym_PLUS_PLUS] = ACTIONS(26),
    [anon_sym_DASH_DASH] = ACTIONS(26),
    [anon_sym_AT] = ACTIONS(28),
    [anon_sym_open] = ACTIONS(30),
    [anon_sym_module] = ACTIONS(32),
    [anon_sym_package] = ACTIONS(34),
    [anon_sym_import] = ACTIONS(36),
    [sym_comment] = ACTIONS(38),
  },
  [2] = {
    [anon_sym_SEMI] = ACTIONS(40),
    [anon_sym_RPAREN] = ACTIONS(40),
    [anon_sym_COMMA] = ACTIONS(40),
    [sym_comment] = ACTIONS(38),
  },
  [3] = {
    [anon_sym_SEMI] = ACTIONS(42),
    [anon_sym_RPAREN] = ACTIONS(42),
    [anon_sym_COMMA] = ACTIONS(42),
    [sym_comment] = ACTIONS(38),
  },
  [4] = {
    [anon_sym_SEMI] = ACTIONS(44),
    [anon_sym_RPAREN] = ACTIONS(44),
    [anon_sym_COMMA] = ACTIONS(44),
    [sym_comment] = ACTIONS(38),
  },
  [5] = {
    [aux_sym_character_literal_repeat1] = STATE(28),
    [anon_sym_SQUOTE] = ACTIONS(46),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(48),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH] = ACTIONS(48),
    [sym_comment] = ACTIONS(50),
  },
  [6] = {
    [anon_sym_SEMI] = ACTIONS(52),
    [anon_sym_RPAREN] = ACTIONS(52),
    [anon_sym_COMMA] = ACTIONS(52),
    [sym_comment] = ACTIONS(38),
  },
  [7] = {
    [sym__expression] = STATE(29),
    [sym_assignment_expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [sym_ternary_expression] = STATE(18),
    [sym_unary_expression] = STATE(19),
    [sym_update_expression] = STATE(18),
    [anon_sym_BANG] = ACTIONS(24),
    [anon_sym_TILDE] = ACTIONS(24),
    [anon_sym_PLUS_PLUS] = ACTIONS(26),
    [anon_sym_DASH_DASH] = ACTIONS(26),
    [sym_comment] = ACTIONS(38),
  },
  [8] = {
    [sym__expression] = STATE(30),
    [sym_assignment_expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [sym_ternary_expression] = STATE(18),
    [sym_unary_expression] = STATE(19),
    [sym_update_expression] = STATE(18),
    [anon_sym_BANG] = ACTIONS(24),
    [anon_sym_TILDE] = ACTIONS(24),
    [anon_sym_PLUS_PLUS] = ACTIONS(26),
    [anon_sym_DASH_DASH] = ACTIONS(26),
    [sym_comment] = ACTIONS(38),
  },
  [9] = {
    [sym_package_or_type_name] = STATE(32),
    [sym_identifier] = ACTIONS(54),
    [sym_comment] = ACTIONS(38),
  },
  [10] = {
    [anon_sym_module] = ACTIONS(56),
    [sym_comment] = ACTIONS(38),
  },
  [11] = {
    [sym_module_identifier] = STATE(35),
    [sym_identifier] = ACTIONS(58),
    [sym_comment] = ACTIONS(38),
  },
  [12] = {
    [sym_identifier] = ACTIONS(60),
    [sym_comment] = ACTIONS(38),
  },
  [13] = {
    [sym_package_or_type_name] = STATE(37),
    [sym_identifier] = ACTIONS(54),
    [sym_comment] = ACTIONS(38),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(62),
    [sym_comment] = ACTIONS(38),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(64),
    [sym_decimal_integer_literal] = ACTIONS(66),
    [sym_hex_integer_literal] = ACTIONS(66),
    [sym_octal_integer_literal] = ACTIONS(66),
    [sym_binary_integer_literal] = ACTIONS(66),
    [sym_decimal_floating_point_literal] = ACTIONS(66),
    [sym_hex_floating_point_literal] = ACTIONS(68),
    [anon_sym_true] = ACTIONS(64),
    [anon_sym_false] = ACTIONS(64),
    [anon_sym_SQUOTE] = ACTIONS(64),
    [sym_string_literal] = ACTIONS(64),
    [sym_null_literal] = ACTIONS(64),
    [anon_sym_BANG] = ACTIONS(64),
    [anon_sym_TILDE] = ACTIONS(64),
    [anon_sym_PLUS_PLUS] = ACTIONS(64),
    [anon_sym_DASH_DASH] = ACTIONS(64),
    [anon_sym_AT] = ACTIONS(64),
    [anon_sym_open] = ACTIONS(64),
    [anon_sym_module] = ACTIONS(64),
    [anon_sym_package] = ACTIONS(64),
    [anon_sym_import] = ACTIONS(64),
    [sym_comment] = ACTIONS(38),
  },
  [16] = {
    [sym__semicolon] = STATE(39),
    [anon_sym_SEMI] = ACTIONS(70),
    [sym_comment] = ACTIONS(38),
  },
  [17] = {
    [sym__semicolon] = STATE(39),
    [anon_sym_SEMI] = ACTIONS(70),
    [anon_sym_EQ] = ACTIONS(72),
    [anon_sym_PLUS_EQ] = ACTIONS(74),
    [anon_sym_DASH_EQ] = ACTIONS(74),
    [anon_sym_STAR_EQ] = ACTIONS(74),
    [anon_sym_SLASH_EQ] = ACTIONS(74),
    [anon_sym_AMP_EQ] = ACTIONS(74),
    [anon_sym_PIPE_EQ] = ACTIONS(74),
    [anon_sym_CARET_EQ] = ACTIONS(74),
    [anon_sym_PERCENT_EQ] = ACTIONS(74),
    [anon_sym_LT_LT_EQ] = ACTIONS(74),
    [anon_sym_GT_GT_EQ] = ACTIONS(74),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(74),
    [anon_sym_GT] = ACTIONS(76),
    [anon_sym_LT] = ACTIONS(76),
    [anon_sym_EQ_EQ] = ACTIONS(78),
    [anon_sym_GT_EQ] = ACTIONS(78),
    [anon_sym_LT_EQ] = ACTIONS(78),
    [anon_sym_BANG_EQ] = ACTIONS(78),
    [anon_sym_AMP_AMP] = ACTIONS(80),
    [anon_sym_PIPE_PIPE] = ACTIONS(82),
    [anon_sym_PLUS] = ACTIONS(84),
    [anon_sym_DASH] = ACTIONS(84),
    [anon_sym_STAR] = ACTIONS(86),
    [anon_sym_SLASH] = ACTIONS(86),
    [anon_sym_AMP] = ACTIONS(88),
    [anon_sym_PIPE] = ACTIONS(90),
    [anon_sym_CARET] = ACTIONS(90),
    [anon_sym_PERCENT] = ACTIONS(86),
    [anon_sym_LT_LT] = ACTIONS(86),
    [anon_sym_GT_GT] = ACTIONS(86),
    [anon_sym_GT_GT_GT] = ACTIONS(86),
    [anon_sym_QMARK] = ACTIONS(92),
    [anon_sym_PLUS_PLUS] = ACTIONS(94),
    [anon_sym_DASH_DASH] = ACTIONS(94),
    [sym_comment] = ACTIONS(38),
  },
  [18] = {
    [anon_sym_SEMI] = ACTIONS(96),
    [anon_sym_EQ] = ACTIONS(98),
    [anon_sym_PLUS_EQ] = ACTIONS(96),
    [anon_sym_DASH_EQ] = ACTIONS(96),
    [anon_sym_STAR_EQ] = ACTIONS(96),
    [anon_sym_SLASH_EQ] = ACTIONS(96),
    [anon_sym_AMP_EQ] = ACTIONS(96),
    [anon_sym_PIPE_EQ] = ACTIONS(96),
    [anon_sym_CARET_EQ] = ACTIONS(96),
    [anon_sym_PERCENT_EQ] = ACTIONS(96),
    [anon_sym_LT_LT_EQ] = ACTIONS(96),
    [anon_sym_GT_GT_EQ] = ACTIONS(96),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(96),
    [anon_sym_GT] = ACTIONS(98),
    [anon_sym_LT] = ACTIONS(98),
    [anon_sym_EQ_EQ] = ACTIONS(96),
    [anon_sym_GT_EQ] = ACTIONS(96),
    [anon_sym_LT_EQ] = ACTIONS(96),
    [anon_sym_BANG_EQ] = ACTIONS(96),
    [anon_sym_AMP_AMP] = ACTIONS(96),
    [anon_sym_PIPE_PIPE] = ACTIONS(96),
    [anon_sym_PLUS] = ACTIONS(98),
    [anon_sym_DASH] = ACTIONS(98),
    [anon_sym_STAR] = ACTIONS(98),
    [anon_sym_SLASH] = ACTIONS(98),
    [anon_sym_AMP] = ACTIONS(98),
    [anon_sym_PIPE] = ACTIONS(98),
    [anon_sym_CARET] = ACTIONS(98),
    [anon_sym_PERCENT] = ACTIONS(98),
    [anon_sym_LT_LT] = ACTIONS(98),
    [anon_sym_GT_GT] = ACTIONS(98),
    [anon_sym_GT_GT_GT] = ACTIONS(98),
    [anon_sym_QMARK] = ACTIONS(96),
    [anon_sym_COLON] = ACTIONS(96),
    [anon_sym_PLUS_PLUS] = ACTIONS(96),
    [anon_sym_DASH_DASH] = ACTIONS(96),
    [anon_sym_RPAREN] = ACTIONS(96),
    [anon_sym_COMMA] = ACTIONS(96),
    [sym_comment] = ACTIONS(38),
  },
  [19] = {
    [anon_sym_SEMI] = ACTIONS(100),
    [anon_sym_EQ] = ACTIONS(102),
    [anon_sym_PLUS_EQ] = ACTIONS(100),
    [anon_sym_DASH_EQ] = ACTIONS(100),
    [anon_sym_STAR_EQ] = ACTIONS(100),
    [anon_sym_SLASH_EQ] = ACTIONS(100),
    [anon_sym_AMP_EQ] = ACTIONS(100),
    [anon_sym_PIPE_EQ] = ACTIONS(100),
    [anon_sym_CARET_EQ] = ACTIONS(100),
    [anon_sym_PERCENT_EQ] = ACTIONS(100),
    [anon_sym_LT_LT_EQ] = ACTIONS(100),
    [anon_sym_GT_GT_EQ] = ACTIONS(100),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(100),
    [anon_sym_GT] = ACTIONS(102),
    [anon_sym_LT] = ACTIONS(102),
    [anon_sym_EQ_EQ] = ACTIONS(100),
    [anon_sym_GT_EQ] = ACTIONS(100),
    [anon_sym_LT_EQ] = ACTIONS(100),
    [anon_sym_BANG_EQ] = ACTIONS(100),
    [anon_sym_AMP_AMP] = ACTIONS(100),
    [anon_sym_PIPE_PIPE] = ACTIONS(100),
    [anon_sym_PLUS] = ACTIONS(102),
    [anon_sym_DASH] = ACTIONS(102),
    [anon_sym_STAR] = ACTIONS(102),
    [anon_sym_SLASH] = ACTIONS(102),
    [anon_sym_AMP] = ACTIONS(102),
    [anon_sym_PIPE] = ACTIONS(102),
    [anon_sym_CARET] = ACTIONS(102),
    [anon_sym_PERCENT] = ACTIONS(102),
    [anon_sym_LT_LT] = ACTIONS(102),
    [anon_sym_GT_GT] = ACTIONS(102),
    [anon_sym_GT_GT_GT] = ACTIONS(102),
    [anon_sym_QMARK] = ACTIONS(100),
    [anon_sym_COLON] = ACTIONS(100),
    [anon_sym_PLUS_PLUS] = ACTIONS(100),
    [anon_sym_DASH_DASH] = ACTIONS(100),
    [anon_sym_RPAREN] = ACTIONS(100),
    [anon_sym_COMMA] = ACTIONS(100),
    [sym_comment] = ACTIONS(38),
  },
  [20] = {
    [anon_sym_AT] = ACTIONS(104),
    [anon_sym_open] = ACTIONS(104),
    [anon_sym_module] = ACTIONS(104),
    [anon_sym_package] = ACTIONS(104),
    [sym_comment] = ACTIONS(38),
  },
  [21] = {
    [anon_sym_RPAREN] = ACTIONS(106),
    [anon_sym_AT] = ACTIONS(106),
    [anon_sym_COMMA] = ACTIONS(106),
    [anon_sym_open] = ACTIONS(106),
    [anon_sym_module] = ACTIONS(106),
    [anon_sym_package] = ACTIONS(106),
    [sym_comment] = ACTIONS(38),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(108),
    [sym_decimal_integer_literal] = ACTIONS(110),
    [sym_hex_integer_literal] = ACTIONS(110),
    [sym_octal_integer_literal] = ACTIONS(110),
    [sym_binary_integer_literal] = ACTIONS(110),
    [sym_decimal_floating_point_literal] = ACTIONS(110),
    [sym_hex_floating_point_literal] = ACTIONS(112),
    [anon_sym_true] = ACTIONS(108),
    [anon_sym_false] = ACTIONS(108),
    [anon_sym_SQUOTE] = ACTIONS(108),
    [sym_string_literal] = ACTIONS(108),
    [sym_null_literal] = ACTIONS(108),
    [anon_sym_BANG] = ACTIONS(108),
    [anon_sym_TILDE] = ACTIONS(108),
    [anon_sym_PLUS_PLUS] = ACTIONS(108),
    [anon_sym_DASH_DASH] = ACTIONS(108),
    [anon_sym_AT] = ACTIONS(108),
    [anon_sym_open] = ACTIONS(108),
    [anon_sym_module] = ACTIONS(108),
    [anon_sym_package] = ACTIONS(108),
    [anon_sym_import] = ACTIONS(108),
    [sym_comment] = ACTIONS(38),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(114),
    [sym_decimal_integer_literal] = ACTIONS(116),
    [sym_hex_integer_literal] = ACTIONS(116),
    [sym_octal_integer_literal] = ACTIONS(116),
    [sym_binary_integer_literal] = ACTIONS(116),
    [sym_decimal_floating_point_literal] = ACTIONS(116),
    [sym_hex_floating_point_literal] = ACTIONS(118),
    [anon_sym_true] = ACTIONS(114),
    [anon_sym_false] = ACTIONS(114),
    [anon_sym_SQUOTE] = ACTIONS(114),
    [sym_string_literal] = ACTIONS(114),
    [sym_null_literal] = ACTIONS(114),
    [anon_sym_BANG] = ACTIONS(114),
    [anon_sym_TILDE] = ACTIONS(114),
    [anon_sym_PLUS_PLUS] = ACTIONS(114),
    [anon_sym_DASH_DASH] = ACTIONS(114),
    [anon_sym_AT] = ACTIONS(114),
    [anon_sym_open] = ACTIONS(114),
    [anon_sym_module] = ACTIONS(114),
    [anon_sym_package] = ACTIONS(114),
    [anon_sym_import] = ACTIONS(114),
    [sym_comment] = ACTIONS(38),
  },
  [24] = {
    [sym__statement] = STATE(48),
    [sym__literal] = STATE(16),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym__expression] = STATE(17),
    [sym_assignment_expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [sym_ternary_expression] = STATE(18),
    [sym_unary_expression] = STATE(19),
    [sym_update_expression] = STATE(18),
    [sym__annotation] = STATE(20),
    [sym_normal_annotation] = STATE(21),
    [sym_marker_annotation] = STATE(21),
    [sym_single_element_annotation] = STATE(21),
    [sym__declaration] = STATE(22),
    [sym_module_declaration] = STATE(23),
    [sym_package_declaration] = STATE(23),
    [sym_single_type_import_declaration] = STATE(23),
    [aux_sym_module_declaration_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(120),
    [sym_decimal_integer_literal] = ACTIONS(12),
    [sym_hex_integer_literal] = ACTIONS(12),
    [sym_octal_integer_literal] = ACTIONS(12),
    [sym_binary_integer_literal] = ACTIONS(12),
    [sym_decimal_floating_point_literal] = ACTIONS(14),
    [sym_hex_floating_point_literal] = ACTIONS(16),
    [anon_sym_true] = ACTIONS(18),
    [anon_sym_false] = ACTIONS(18),
    [anon_sym_SQUOTE] = ACTIONS(20),
    [sym_string_literal] = ACTIONS(22),
    [sym_null_literal] = ACTIONS(22),
    [anon_sym_BANG] = ACTIONS(24),
    [anon_sym_TILDE] = ACTIONS(24),
    [anon_sym_PLUS_PLUS] = ACTIONS(26),
    [anon_sym_DASH_DASH] = ACTIONS(26),
    [anon_sym_AT] = ACTIONS(28),
    [anon_sym_open] = ACTIONS(30),
    [anon_sym_module] = ACTIONS(32),
    [anon_sym_package] = ACTIONS(34),
    [anon_sym_import] = ACTIONS(36),
    [sym_comment] = ACTIONS(38),
  },
  [25] = {
    [sym__annotation] = STATE(51),
    [sym_normal_annotation] = STATE(21),
    [sym_marker_annotation] = STATE(21),
    [sym_single_element_annotation] = STATE(21),
    [anon_sym_AT] = ACTIONS(28),
    [anon_sym_open] = ACTIONS(122),
    [anon_sym_module] = ACTIONS(56),
    [anon_sym_package] = ACTIONS(124),
    [sym_comment] = ACTIONS(38),
  },
  [26] = {
    [anon_sym_SEMI] = ACTIONS(126),
    [anon_sym_RPAREN] = ACTIONS(126),
    [anon_sym_COMMA] = ACTIONS(126),
    [sym_comment] = ACTIONS(38),
  },
  [27] = {
    [anon_sym_SQUOTE] = ACTIONS(128),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(128),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH] = ACTIONS(128),
    [sym_comment] = ACTIONS(50),
  },
  [28] = {
    [anon_sym_SQUOTE] = ACTIONS(130),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(132),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(132),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH] = ACTIONS(132),
    [sym_comment] = ACTIONS(50),
  },
  [29] = {
    [anon_sym_SEMI] = ACTIONS(134),
    [anon_sym_EQ] = ACTIONS(136),
    [anon_sym_PLUS_EQ] = ACTIONS(134),
    [anon_sym_DASH_EQ] = ACTIONS(134),
    [anon_sym_STAR_EQ] = ACTIONS(134),
    [anon_sym_SLASH_EQ] = ACTIONS(134),
    [anon_sym_AMP_EQ] = ACTIONS(134),
    [anon_sym_PIPE_EQ] = ACTIONS(134),
    [anon_sym_CARET_EQ] = ACTIONS(134),
    [anon_sym_PERCENT_EQ] = ACTIONS(134),
    [anon_sym_LT_LT_EQ] = ACTIONS(134),
    [anon_sym_GT_GT_EQ] = ACTIONS(134),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(134),
    [anon_sym_GT] = ACTIONS(136),
    [anon_sym_LT] = ACTIONS(136),
    [anon_sym_EQ_EQ] = ACTIONS(134),
    [anon_sym_GT_EQ] = ACTIONS(134),
    [anon_sym_LT_EQ] = ACTIONS(134),
    [anon_sym_BANG_EQ] = ACTIONS(134),
    [anon_sym_AMP_AMP] = ACTIONS(134),
    [anon_sym_PIPE_PIPE] = ACTIONS(134),
    [anon_sym_PLUS] = ACTIONS(136),
    [anon_sym_DASH] = ACTIONS(136),
    [anon_sym_STAR] = ACTIONS(136),
    [anon_sym_SLASH] = ACTIONS(136),
    [anon_sym_AMP] = ACTIONS(136),
    [anon_sym_PIPE] = ACTIONS(136),
    [anon_sym_CARET] = ACTIONS(136),
    [anon_sym_PERCENT] = ACTIONS(136),
    [anon_sym_LT_LT] = ACTIONS(136),
    [anon_sym_GT_GT] = ACTIONS(136),
    [anon_sym_GT_GT_GT] = ACTIONS(136),
    [anon_sym_QMARK] = ACTIONS(134),
    [anon_sym_COLON] = ACTIONS(134),
    [anon_sym_PLUS_PLUS] = ACTIONS(94),
    [anon_sym_DASH_DASH] = ACTIONS(94),
    [anon_sym_RPAREN] = ACTIONS(134),
    [anon_sym_COMMA] = ACTIONS(134),
    [sym_comment] = ACTIONS(38),
  },
  [30] = {
    [anon_sym_SEMI] = ACTIONS(138),
    [anon_sym_EQ] = ACTIONS(140),
    [anon_sym_PLUS_EQ] = ACTIONS(138),
    [anon_sym_DASH_EQ] = ACTIONS(138),
    [anon_sym_STAR_EQ] = ACTIONS(138),
    [anon_sym_SLASH_EQ] = ACTIONS(138),
    [anon_sym_AMP_EQ] = ACTIONS(138),
    [anon_sym_PIPE_EQ] = ACTIONS(138),
    [anon_sym_CARET_EQ] = ACTIONS(138),
    [anon_sym_PERCENT_EQ] = ACTIONS(138),
    [anon_sym_LT_LT_EQ] = ACTIONS(138),
    [anon_sym_GT_GT_EQ] = ACTIONS(138),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(138),
    [anon_sym_GT] = ACTIONS(140),
    [anon_sym_LT] = ACTIONS(140),
    [anon_sym_EQ_EQ] = ACTIONS(138),
    [anon_sym_GT_EQ] = ACTIONS(138),
    [anon_sym_LT_EQ] = ACTIONS(138),
    [anon_sym_BANG_EQ] = ACTIONS(138),
    [anon_sym_AMP_AMP] = ACTIONS(138),
    [anon_sym_PIPE_PIPE] = ACTIONS(138),
    [anon_sym_PLUS] = ACTIONS(140),
    [anon_sym_DASH] = ACTIONS(140),
    [anon_sym_STAR] = ACTIONS(140),
    [anon_sym_SLASH] = ACTIONS(140),
    [anon_sym_AMP] = ACTIONS(140),
    [anon_sym_PIPE] = ACTIONS(140),
    [anon_sym_CARET] = ACTIONS(140),
    [anon_sym_PERCENT] = ACTIONS(140),
    [anon_sym_LT_LT] = ACTIONS(140),
    [anon_sym_GT_GT] = ACTIONS(140),
    [anon_sym_GT_GT_GT] = ACTIONS(140),
    [anon_sym_QMARK] = ACTIONS(138),
    [anon_sym_COLON] = ACTIONS(138),
    [anon_sym_PLUS_PLUS] = ACTIONS(138),
    [anon_sym_DASH_DASH] = ACTIONS(138),
    [anon_sym_RPAREN] = ACTIONS(138),
    [anon_sym_COMMA] = ACTIONS(138),
    [sym_comment] = ACTIONS(38),
  },
  [31] = {
    [anon_sym_SEMI] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(142),
    [anon_sym_RPAREN] = ACTIONS(142),
    [anon_sym_AT] = ACTIONS(142),
    [anon_sym_COMMA] = ACTIONS(142),
    [anon_sym_open] = ACTIONS(142),
    [anon_sym_module] = ACTIONS(142),
    [anon_sym_DOT] = ACTIONS(142),
    [anon_sym_to] = ACTIONS(142),
    [anon_sym_with] = ACTIONS(142),
    [anon_sym_package] = ACTIONS(142),
    [sym_comment] = ACTIONS(38),
  },
  [32] = {
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_RPAREN] = ACTIONS(146),
    [anon_sym_AT] = ACTIONS(146),
    [anon_sym_COMMA] = ACTIONS(146),
    [anon_sym_open] = ACTIONS(146),
    [anon_sym_module] = ACTIONS(146),
    [anon_sym_DOT] = ACTIONS(148),
    [anon_sym_package] = ACTIONS(146),
    [sym_comment] = ACTIONS(38),
  },
  [33] = {
    [sym_module_identifier] = STATE(56),
    [sym_identifier] = ACTIONS(58),
    [sym_comment] = ACTIONS(38),
  },
  [34] = {
    [aux_sym_module_identifier_repeat1] = STATE(58),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_DOT] = ACTIONS(152),
    [sym_comment] = ACTIONS(38),
  },
  [35] = {
    [anon_sym_LBRACE] = ACTIONS(154),
    [sym_comment] = ACTIONS(38),
  },
  [36] = {
    [sym__semicolon] = STATE(60),
    [aux_sym_module_identifier_repeat1] = STATE(61),
    [anon_sym_SEMI] = ACTIONS(70),
    [anon_sym_DOT] = ACTIONS(152),
    [sym_comment] = ACTIONS(38),
  },
  [37] = {
    [sym__semicolon] = STATE(62),
    [anon_sym_SEMI] = ACTIONS(70),
    [anon_sym_DOT] = ACTIONS(148),
    [sym_comment] = ACTIONS(38),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(156),
    [sym_decimal_integer_literal] = ACTIONS(158),
    [sym_hex_integer_literal] = ACTIONS(158),
    [sym_octal_integer_literal] = ACTIONS(158),
    [sym_binary_integer_literal] = ACTIONS(158),
    [sym_decimal_floating_point_literal] = ACTIONS(158),
    [sym_hex_floating_point_literal] = ACTIONS(160),
    [anon_sym_true] = ACTIONS(156),
    [anon_sym_false] = ACTIONS(156),
    [anon_sym_SQUOTE] = ACTIONS(156),
    [sym_string_literal] = ACTIONS(156),
    [sym_null_literal] = ACTIONS(156),
    [anon_sym_BANG] = ACTIONS(156),
    [anon_sym_TILDE] = ACTIONS(156),
    [anon_sym_PLUS_PLUS] = ACTIONS(156),
    [anon_sym_DASH_DASH] = ACTIONS(156),
    [anon_sym_RBRACE] = ACTIONS(156),
    [anon_sym_AT] = ACTIONS(156),
    [anon_sym_open] = ACTIONS(158),
    [anon_sym_module] = ACTIONS(156),
    [anon_sym_requires] = ACTIONS(156),
    [anon_sym_exports] = ACTIONS(156),
    [anon_sym_opens] = ACTIONS(156),
    [anon_sym_uses] = ACTIONS(156),
    [anon_sym_provides] = ACTIONS(156),
    [anon_sym_package] = ACTIONS(156),
    [anon_sym_import] = ACTIONS(156),
    [sym_comment] = ACTIONS(38),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(162),
    [sym_decimal_integer_literal] = ACTIONS(164),
    [sym_hex_integer_literal] = ACTIONS(164),
    [sym_octal_integer_literal] = ACTIONS(164),
    [sym_binary_integer_literal] = ACTIONS(164),
    [sym_decimal_floating_point_literal] = ACTIONS(164),
    [sym_hex_floating_point_literal] = ACTIONS(166),
    [anon_sym_true] = ACTIONS(162),
    [anon_sym_false] = ACTIONS(162),
    [anon_sym_SQUOTE] = ACTIONS(162),
    [sym_string_literal] = ACTIONS(162),
    [sym_null_literal] = ACTIONS(162),
    [anon_sym_BANG] = ACTIONS(162),
    [anon_sym_TILDE] = ACTIONS(162),
    [anon_sym_PLUS_PLUS] = ACTIONS(162),
    [anon_sym_DASH_DASH] = ACTIONS(162),
    [anon_sym_AT] = ACTIONS(162),
    [anon_sym_open] = ACTIONS(162),
    [anon_sym_module] = ACTIONS(162),
    [anon_sym_package] = ACTIONS(162),
    [anon_sym_import] = ACTIONS(162),
    [sym_comment] = ACTIONS(38),
  },
  [40] = {
    [sym__expression] = STATE(63),
    [sym_assignment_expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [sym_ternary_expression] = STATE(18),
    [sym_unary_expression] = STATE(19),
    [sym_update_expression] = STATE(18),
    [anon_sym_BANG] = ACTIONS(24),
    [anon_sym_TILDE] = ACTIONS(24),
    [anon_sym_PLUS_PLUS] = ACTIONS(26),
    [anon_sym_DASH_DASH] = ACTIONS(26),
    [sym_comment] = ACTIONS(38),
  },
  [41] = {
    [sym__expression] = STATE(64),
    [sym_assignment_expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [sym_ternary_expression] = STATE(18),
    [sym_unary_expression] = STATE(19),
    [sym_update_expression] = STATE(18),
    [anon_sym_BANG] = ACTIONS(24),
    [anon_sym_TILDE] = ACTIONS(24),
    [anon_sym_PLUS_PLUS] = ACTIONS(26),
    [anon_sym_DASH_DASH] = ACTIONS(26),
    [sym_comment] = ACTIONS(38),
  },
  [42] = {
    [sym__expression] = STATE(65),
    [sym_assignment_expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [sym_ternary_expression] = STATE(18),
    [sym_unary_expression] = STATE(19),
    [sym_update_expression] = STATE(18),
    [anon_sym_BANG] = ACTIONS(24),
    [anon_sym_TILDE] = ACTIONS(24),
    [anon_sym_PLUS_PLUS] = ACTIONS(26),
    [anon_sym_DASH_DASH] = ACTIONS(26),
    [sym_comment] = ACTIONS(38),
  },
  [43] = {
    [sym__expression] = STATE(66),
    [sym_assignment_expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [sym_ternary_expression] = STATE(18),
    [sym_unary_expression] = STATE(19),
    [sym_update_expression] = STATE(18),
    [anon_sym_BANG] = ACTIONS(24),
    [anon_sym_TILDE] = ACTIONS(24),
    [anon_sym_PLUS_PLUS] = ACTIONS(26),
    [anon_sym_DASH_DASH] = ACTIONS(26),
    [sym_comment] = ACTIONS(38),
  },
  [44] = {
    [sym__expression] = STATE(67),
    [sym_assignment_expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [sym_ternary_expression] = STATE(18),
    [sym_unary_expression] = STATE(19),
    [sym_update_expression] = STATE(18),
    [anon_sym_BANG] = ACTIONS(24),
    [anon_sym_TILDE] = ACTIONS(24),
    [anon_sym_PLUS_PLUS] = ACTIONS(26),
    [anon_sym_DASH_DASH] = ACTIONS(26),
    [sym_comment] = ACTIONS(38),
  },
  [45] = {
    [sym__expression] = STATE(68),
    [sym_assignment_expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [sym_ternary_expression] = STATE(18),
    [sym_unary_expression] = STATE(19),
    [sym_update_expression] = STATE(18),
    [anon_sym_BANG] = ACTIONS(24),
    [anon_sym_TILDE] = ACTIONS(24),
    [anon_sym_PLUS_PLUS] = ACTIONS(26),
    [anon_sym_DASH_DASH] = ACTIONS(26),
    [sym_comment] = ACTIONS(38),
  },
  [46] = {
    [sym__expression] = STATE(71),
    [sym_assignment_expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [sym_ternary_expression] = STATE(18),
    [sym_unary_expression] = STATE(19),
    [sym_update_expression] = STATE(18),
    [anon_sym_BANG] = ACTIONS(168),
    [anon_sym_TILDE] = ACTIONS(168),
    [anon_sym_PLUS_PLUS] = ACTIONS(170),
    [anon_sym_DASH_DASH] = ACTIONS(170),
    [sym_comment] = ACTIONS(38),
  },
  [47] = {
    [anon_sym_SEMI] = ACTIONS(138),
    [anon_sym_EQ] = ACTIONS(140),
    [anon_sym_PLUS_EQ] = ACTIONS(138),
    [anon_sym_DASH_EQ] = ACTIONS(138),
    [anon_sym_STAR_EQ] = ACTIONS(138),
    [anon_sym_SLASH_EQ] = ACTIONS(138),
    [anon_sym_AMP_EQ] = ACTIONS(138),
    [anon_sym_PIPE_EQ] = ACTIONS(138),
    [anon_sym_CARET_EQ] = ACTIONS(138),
    [anon_sym_PERCENT_EQ] = ACTIONS(138),
    [anon_sym_LT_LT_EQ] = ACTIONS(138),
    [anon_sym_GT_GT_EQ] = ACTIONS(138),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(138),
    [anon_sym_GT] = ACTIONS(140),
    [anon_sym_LT] = ACTIONS(140),
    [anon_sym_EQ_EQ] = ACTIONS(138),
    [anon_sym_GT_EQ] = ACTIONS(138),
    [anon_sym_LT_EQ] = ACTIONS(138),
    [anon_sym_BANG_EQ] = ACTIONS(138),
    [anon_sym_AMP_AMP] = ACTIONS(138),
    [anon_sym_PIPE_PIPE] = ACTIONS(138),
    [anon_sym_PLUS] = ACTIONS(140),
    [anon_sym_DASH] = ACTIONS(140),
    [anon_sym_STAR] = ACTIONS(140),
    [anon_sym_SLASH] = ACTIONS(140),
    [anon_sym_AMP] = ACTIONS(140),
    [anon_sym_PIPE] = ACTIONS(140),
    [anon_sym_CARET] = ACTIONS(140),
    [anon_sym_PERCENT] = ACTIONS(140),
    [anon_sym_LT_LT] = ACTIONS(140),
    [anon_sym_GT_GT] = ACTIONS(140),
    [anon_sym_GT_GT_GT] = ACTIONS(140),
    [anon_sym_QMARK] = ACTIONS(138),
    [anon_sym_COLON] = ACTIONS(138),
    [anon_sym_PLUS_PLUS] = ACTIONS(138),
    [anon_sym_DASH_DASH] = ACTIONS(138),
    [anon_sym_RPAREN] = ACTIONS(138),
    [anon_sym_COMMA] = ACTIONS(138),
    [sym_comment] = ACTIONS(38),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(172),
    [sym_decimal_integer_literal] = ACTIONS(174),
    [sym_hex_integer_literal] = ACTIONS(174),
    [sym_octal_integer_literal] = ACTIONS(174),
    [sym_binary_integer_literal] = ACTIONS(174),
    [sym_decimal_floating_point_literal] = ACTIONS(174),
    [sym_hex_floating_point_literal] = ACTIONS(176),
    [anon_sym_true] = ACTIONS(172),
    [anon_sym_false] = ACTIONS(172),
    [anon_sym_SQUOTE] = ACTIONS(172),
    [sym_string_literal] = ACTIONS(172),
    [sym_null_literal] = ACTIONS(172),
    [anon_sym_BANG] = ACTIONS(172),
    [anon_sym_TILDE] = ACTIONS(172),
    [anon_sym_PLUS_PLUS] = ACTIONS(172),
    [anon_sym_DASH_DASH] = ACTIONS(172),
    [anon_sym_AT] = ACTIONS(172),
    [anon_sym_open] = ACTIONS(172),
    [anon_sym_module] = ACTIONS(172),
    [anon_sym_package] = ACTIONS(172),
    [anon_sym_import] = ACTIONS(172),
    [sym_comment] = ACTIONS(38),
  },
  [49] = {
    [anon_sym_module] = ACTIONS(178),
    [sym_comment] = ACTIONS(38),
  },
  [50] = {
    [sym_identifier] = ACTIONS(180),
    [sym_comment] = ACTIONS(38),
  },
  [51] = {
    [anon_sym_AT] = ACTIONS(182),
    [anon_sym_open] = ACTIONS(182),
    [anon_sym_module] = ACTIONS(182),
    [anon_sym_package] = ACTIONS(182),
    [sym_comment] = ACTIONS(38),
  },
  [52] = {
    [anon_sym_SEMI] = ACTIONS(184),
    [anon_sym_RPAREN] = ACTIONS(184),
    [anon_sym_COMMA] = ACTIONS(184),
    [sym_comment] = ACTIONS(38),
  },
  [53] = {
    [anon_sym_SQUOTE] = ACTIONS(186),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(186),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(186),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH] = ACTIONS(186),
    [sym_comment] = ACTIONS(50),
  },
  [54] = {
    [sym__literal] = STATE(76),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_element_value_pair_list] = STATE(77),
    [sym_element_value_pair] = STATE(78),
    [sym_decimal_integer_literal] = ACTIONS(12),
    [sym_hex_integer_literal] = ACTIONS(12),
    [sym_octal_integer_literal] = ACTIONS(12),
    [sym_binary_integer_literal] = ACTIONS(12),
    [sym_decimal_floating_point_literal] = ACTIONS(14),
    [sym_hex_floating_point_literal] = ACTIONS(16),
    [anon_sym_true] = ACTIONS(188),
    [anon_sym_false] = ACTIONS(188),
    [anon_sym_SQUOTE] = ACTIONS(20),
    [sym_string_literal] = ACTIONS(22),
    [sym_null_literal] = ACTIONS(190),
    [anon_sym_RPAREN] = ACTIONS(192),
    [sym_identifier] = ACTIONS(194),
    [sym_comment] = ACTIONS(38),
  },
  [55] = {
    [sym_identifier] = ACTIONS(196),
    [sym_comment] = ACTIONS(38),
  },
  [56] = {
    [anon_sym_LBRACE] = ACTIONS(198),
    [sym_comment] = ACTIONS(38),
  },
  [57] = {
    [sym_identifier] = ACTIONS(200),
    [sym_comment] = ACTIONS(38),
  },
  [58] = {
    [anon_sym_LBRACE] = ACTIONS(202),
    [anon_sym_DOT] = ACTIONS(204),
    [sym_comment] = ACTIONS(38),
  },
  [59] = {
    [sym_module_directive] = STATE(88),
    [aux_sym_module_declaration_repeat2] = STATE(89),
    [anon_sym_RBRACE] = ACTIONS(206),
    [anon_sym_requires] = ACTIONS(208),
    [anon_sym_exports] = ACTIONS(210),
    [anon_sym_opens] = ACTIONS(210),
    [anon_sym_uses] = ACTIONS(212),
    [anon_sym_provides] = ACTIONS(214),
    [sym_comment] = ACTIONS(38),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(216),
    [sym_decimal_integer_literal] = ACTIONS(218),
    [sym_hex_integer_literal] = ACTIONS(218),
    [sym_octal_integer_literal] = ACTIONS(218),
    [sym_binary_integer_literal] = ACTIONS(218),
    [sym_decimal_floating_point_literal] = ACTIONS(218),
    [sym_hex_floating_point_literal] = ACTIONS(220),
    [anon_sym_true] = ACTIONS(216),
    [anon_sym_false] = ACTIONS(216),
    [anon_sym_SQUOTE] = ACTIONS(216),
    [sym_string_literal] = ACTIONS(216),
    [sym_null_literal] = ACTIONS(216),
    [anon_sym_BANG] = ACTIONS(216),
    [anon_sym_TILDE] = ACTIONS(216),
    [anon_sym_PLUS_PLUS] = ACTIONS(216),
    [anon_sym_DASH_DASH] = ACTIONS(216),
    [anon_sym_AT] = ACTIONS(216),
    [anon_sym_open] = ACTIONS(216),
    [anon_sym_module] = ACTIONS(216),
    [anon_sym_package] = ACTIONS(216),
    [anon_sym_import] = ACTIONS(216),
    [sym_comment] = ACTIONS(38),
  },
  [61] = {
    [sym__semicolon] = STATE(90),
    [anon_sym_SEMI] = ACTIONS(70),
    [anon_sym_DOT] = ACTIONS(204),
    [sym_comment] = ACTIONS(38),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(222),
    [sym_decimal_integer_literal] = ACTIONS(224),
    [sym_hex_integer_literal] = ACTIONS(224),
    [sym_octal_integer_literal] = ACTIONS(224),
    [sym_binary_integer_literal] = ACTIONS(224),
    [sym_decimal_floating_point_literal] = ACTIONS(224),
    [sym_hex_floating_point_literal] = ACTIONS(226),
    [anon_sym_true] = ACTIONS(222),
    [anon_sym_false] = ACTIONS(222),
    [anon_sym_SQUOTE] = ACTIONS(222),
    [sym_string_literal] = ACTIONS(222),
    [sym_null_literal] = ACTIONS(222),
    [anon_sym_BANG] = ACTIONS(222),
    [anon_sym_TILDE] = ACTIONS(222),
    [anon_sym_PLUS_PLUS] = ACTIONS(222),
    [anon_sym_DASH_DASH] = ACTIONS(222),
    [anon_sym_AT] = ACTIONS(222),
    [anon_sym_open] = ACTIONS(222),
    [anon_sym_module] = ACTIONS(222),
    [anon_sym_package] = ACTIONS(222),
    [anon_sym_import] = ACTIONS(222),
    [sym_comment] = ACTIONS(38),
  },
  [63] = {
    [anon_sym_SEMI] = ACTIONS(228),
    [anon_sym_EQ] = ACTIONS(72),
    [anon_sym_PLUS_EQ] = ACTIONS(74),
    [anon_sym_DASH_EQ] = ACTIONS(74),
    [anon_sym_STAR_EQ] = ACTIONS(74),
    [anon_sym_SLASH_EQ] = ACTIONS(74),
    [anon_sym_AMP_EQ] = ACTIONS(74),
    [anon_sym_PIPE_EQ] = ACTIONS(74),
    [anon_sym_CARET_EQ] = ACTIONS(74),
    [anon_sym_PERCENT_EQ] = ACTIONS(74),
    [anon_sym_LT_LT_EQ] = ACTIONS(74),
    [anon_sym_GT_GT_EQ] = ACTIONS(74),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(74),
    [anon_sym_GT] = ACTIONS(76),
    [anon_sym_LT] = ACTIONS(76),
    [anon_sym_EQ_EQ] = ACTIONS(78),
    [anon_sym_GT_EQ] = ACTIONS(78),
    [anon_sym_LT_EQ] = ACTIONS(78),
    [anon_sym_BANG_EQ] = ACTIONS(78),
    [anon_sym_AMP_AMP] = ACTIONS(80),
    [anon_sym_PIPE_PIPE] = ACTIONS(82),
    [anon_sym_PLUS] = ACTIONS(84),
    [anon_sym_DASH] = ACTIONS(84),
    [anon_sym_STAR] = ACTIONS(86),
    [anon_sym_SLASH] = ACTIONS(86),
    [anon_sym_AMP] = ACTIONS(88),
    [anon_sym_PIPE] = ACTIONS(90),
    [anon_sym_CARET] = ACTIONS(90),
    [anon_sym_PERCENT] = ACTIONS(86),
    [anon_sym_LT_LT] = ACTIONS(86),
    [anon_sym_GT_GT] = ACTIONS(86),
    [anon_sym_GT_GT_GT] = ACTIONS(86),
    [anon_sym_QMARK] = ACTIONS(92),
    [anon_sym_PLUS_PLUS] = ACTIONS(94),
    [anon_sym_DASH_DASH] = ACTIONS(94),
    [sym_comment] = ACTIONS(38),
  },
  [64] = {
    [anon_sym_SEMI] = ACTIONS(230),
    [anon_sym_EQ] = ACTIONS(232),
    [anon_sym_PLUS_EQ] = ACTIONS(230),
    [anon_sym_DASH_EQ] = ACTIONS(230),
    [anon_sym_STAR_EQ] = ACTIONS(230),
    [anon_sym_SLASH_EQ] = ACTIONS(230),
    [anon_sym_AMP_EQ] = ACTIONS(230),
    [anon_sym_PIPE_EQ] = ACTIONS(230),
    [anon_sym_CARET_EQ] = ACTIONS(230),
    [anon_sym_PERCENT_EQ] = ACTIONS(230),
    [anon_sym_LT_LT_EQ] = ACTIONS(230),
    [anon_sym_GT_GT_EQ] = ACTIONS(230),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(230),
    [anon_sym_GT] = ACTIONS(232),
    [anon_sym_LT] = ACTIONS(232),
    [anon_sym_EQ_EQ] = ACTIONS(230),
    [anon_sym_GT_EQ] = ACTIONS(230),
    [anon_sym_LT_EQ] = ACTIONS(230),
    [anon_sym_BANG_EQ] = ACTIONS(230),
    [anon_sym_AMP_AMP] = ACTIONS(230),
    [anon_sym_PIPE_PIPE] = ACTIONS(230),
    [anon_sym_PLUS] = ACTIONS(232),
    [anon_sym_DASH] = ACTIONS(232),
    [anon_sym_STAR] = ACTIONS(86),
    [anon_sym_SLASH] = ACTIONS(86),
    [anon_sym_AMP] = ACTIONS(232),
    [anon_sym_PIPE] = ACTIONS(232),
    [anon_sym_CARET] = ACTIONS(232),
    [anon_sym_PERCENT] = ACTIONS(86),
    [anon_sym_LT_LT] = ACTIONS(86),
    [anon_sym_GT_GT] = ACTIONS(86),
    [anon_sym_GT_GT_GT] = ACTIONS(86),
    [anon_sym_QMARK] = ACTIONS(230),
    [anon_sym_PLUS_PLUS] = ACTIONS(94),
    [anon_sym_DASH_DASH] = ACTIONS(94),
    [sym_comment] = ACTIONS(38),
  },
  [65] = {
    [anon_sym_SEMI] = ACTIONS(230),
    [anon_sym_EQ] = ACTIONS(232),
    [anon_sym_PLUS_EQ] = ACTIONS(230),
    [anon_sym_DASH_EQ] = ACTIONS(230),
    [anon_sym_STAR_EQ] = ACTIONS(230),
    [anon_sym_SLASH_EQ] = ACTIONS(230),
    [anon_sym_AMP_EQ] = ACTIONS(230),
    [anon_sym_PIPE_EQ] = ACTIONS(230),
    [anon_sym_CARET_EQ] = ACTIONS(230),
    [anon_sym_PERCENT_EQ] = ACTIONS(230),
    [anon_sym_LT_LT_EQ] = ACTIONS(230),
    [anon_sym_GT_GT_EQ] = ACTIONS(230),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(230),
    [anon_sym_GT] = ACTIONS(76),
    [anon_sym_LT] = ACTIONS(76),
    [anon_sym_EQ_EQ] = ACTIONS(78),
    [anon_sym_GT_EQ] = ACTIONS(78),
    [anon_sym_LT_EQ] = ACTIONS(78),
    [anon_sym_BANG_EQ] = ACTIONS(78),
    [anon_sym_AMP_AMP] = ACTIONS(230),
    [anon_sym_PIPE_PIPE] = ACTIONS(230),
    [anon_sym_PLUS] = ACTIONS(84),
    [anon_sym_DASH] = ACTIONS(84),
    [anon_sym_STAR] = ACTIONS(86),
    [anon_sym_SLASH] = ACTIONS(86),
    [anon_sym_AMP] = ACTIONS(232),
    [anon_sym_PIPE] = ACTIONS(232),
    [anon_sym_CARET] = ACTIONS(232),
    [anon_sym_PERCENT] = ACTIONS(86),
    [anon_sym_LT_LT] = ACTIONS(86),
    [anon_sym_GT_GT] = ACTIONS(86),
    [anon_sym_GT_GT_GT] = ACTIONS(86),
    [anon_sym_QMARK] = ACTIONS(230),
    [anon_sym_PLUS_PLUS] = ACTIONS(94),
    [anon_sym_DASH_DASH] = ACTIONS(94),
    [sym_comment] = ACTIONS(38),
  },
  [66] = {
    [anon_sym_SEMI] = ACTIONS(230),
    [anon_sym_EQ] = ACTIONS(232),
    [anon_sym_PLUS_EQ] = ACTIONS(230),
    [anon_sym_DASH_EQ] = ACTIONS(230),
    [anon_sym_STAR_EQ] = ACTIONS(230),
    [anon_sym_SLASH_EQ] = ACTIONS(230),
    [anon_sym_AMP_EQ] = ACTIONS(230),
    [anon_sym_PIPE_EQ] = ACTIONS(230),
    [anon_sym_CARET_EQ] = ACTIONS(230),
    [anon_sym_PERCENT_EQ] = ACTIONS(230),
    [anon_sym_LT_LT_EQ] = ACTIONS(230),
    [anon_sym_GT_GT_EQ] = ACTIONS(230),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(230),
    [anon_sym_GT] = ACTIONS(76),
    [anon_sym_LT] = ACTIONS(76),
    [anon_sym_EQ_EQ] = ACTIONS(78),
    [anon_sym_GT_EQ] = ACTIONS(78),
    [anon_sym_LT_EQ] = ACTIONS(78),
    [anon_sym_BANG_EQ] = ACTIONS(78),
    [anon_sym_AMP_AMP] = ACTIONS(80),
    [anon_sym_PIPE_PIPE] = ACTIONS(230),
    [anon_sym_PLUS] = ACTIONS(84),
    [anon_sym_DASH] = ACTIONS(84),
    [anon_sym_STAR] = ACTIONS(86),
    [anon_sym_SLASH] = ACTIONS(86),
    [anon_sym_AMP] = ACTIONS(88),
    [anon_sym_PIPE] = ACTIONS(232),
    [anon_sym_CARET] = ACTIONS(232),
    [anon_sym_PERCENT] = ACTIONS(86),
    [anon_sym_LT_LT] = ACTIONS(86),
    [anon_sym_GT_GT] = ACTIONS(86),
    [anon_sym_GT_GT_GT] = ACTIONS(86),
    [anon_sym_QMARK] = ACTIONS(230),
    [anon_sym_PLUS_PLUS] = ACTIONS(94),
    [anon_sym_DASH_DASH] = ACTIONS(94),
    [sym_comment] = ACTIONS(38),
  },
  [67] = {
    [anon_sym_SEMI] = ACTIONS(230),
    [anon_sym_EQ] = ACTIONS(232),
    [anon_sym_PLUS_EQ] = ACTIONS(230),
    [anon_sym_DASH_EQ] = ACTIONS(230),
    [anon_sym_STAR_EQ] = ACTIONS(230),
    [anon_sym_SLASH_EQ] = ACTIONS(230),
    [anon_sym_AMP_EQ] = ACTIONS(230),
    [anon_sym_PIPE_EQ] = ACTIONS(230),
    [anon_sym_CARET_EQ] = ACTIONS(230),
    [anon_sym_PERCENT_EQ] = ACTIONS(230),
    [anon_sym_LT_LT_EQ] = ACTIONS(230),
    [anon_sym_GT_GT_EQ] = ACTIONS(230),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(230),
    [anon_sym_GT] = ACTIONS(76),
    [anon_sym_LT] = ACTIONS(76),
    [anon_sym_EQ_EQ] = ACTIONS(78),
    [anon_sym_GT_EQ] = ACTIONS(78),
    [anon_sym_LT_EQ] = ACTIONS(78),
    [anon_sym_BANG_EQ] = ACTIONS(78),
    [anon_sym_AMP_AMP] = ACTIONS(230),
    [anon_sym_PIPE_PIPE] = ACTIONS(230),
    [anon_sym_PLUS] = ACTIONS(232),
    [anon_sym_DASH] = ACTIONS(232),
    [anon_sym_STAR] = ACTIONS(86),
    [anon_sym_SLASH] = ACTIONS(86),
    [anon_sym_AMP] = ACTIONS(232),
    [anon_sym_PIPE] = ACTIONS(232),
    [anon_sym_CARET] = ACTIONS(232),
    [anon_sym_PERCENT] = ACTIONS(86),
    [anon_sym_LT_LT] = ACTIONS(86),
    [anon_sym_GT_GT] = ACTIONS(86),
    [anon_sym_GT_GT_GT] = ACTIONS(86),
    [anon_sym_QMARK] = ACTIONS(230),
    [anon_sym_PLUS_PLUS] = ACTIONS(94),
    [anon_sym_DASH_DASH] = ACTIONS(94),
    [sym_comment] = ACTIONS(38),
  },
  [68] = {
    [anon_sym_SEMI] = ACTIONS(230),
    [anon_sym_EQ] = ACTIONS(232),
    [anon_sym_PLUS_EQ] = ACTIONS(230),
    [anon_sym_DASH_EQ] = ACTIONS(230),
    [anon_sym_STAR_EQ] = ACTIONS(230),
    [anon_sym_SLASH_EQ] = ACTIONS(230),
    [anon_sym_AMP_EQ] = ACTIONS(230),
    [anon_sym_PIPE_EQ] = ACTIONS(230),
    [anon_sym_CARET_EQ] = ACTIONS(230),
    [anon_sym_PERCENT_EQ] = ACTIONS(230),
    [anon_sym_LT_LT_EQ] = ACTIONS(230),
    [anon_sym_GT_GT_EQ] = ACTIONS(230),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(230),
    [anon_sym_GT] = ACTIONS(232),
    [anon_sym_LT] = ACTIONS(232),
    [anon_sym_EQ_EQ] = ACTIONS(230),
    [anon_sym_GT_EQ] = ACTIONS(230),
    [anon_sym_LT_EQ] = ACTIONS(230),
    [anon_sym_BANG_EQ] = ACTIONS(230),
    [anon_sym_AMP_AMP] = ACTIONS(230),
    [anon_sym_PIPE_PIPE] = ACTIONS(230),
    [anon_sym_PLUS] = ACTIONS(232),
    [anon_sym_DASH] = ACTIONS(232),
    [anon_sym_STAR] = ACTIONS(232),
    [anon_sym_SLASH] = ACTIONS(232),
    [anon_sym_AMP] = ACTIONS(232),
    [anon_sym_PIPE] = ACTIONS(232),
    [anon_sym_CARET] = ACTIONS(232),
    [anon_sym_PERCENT] = ACTIONS(232),
    [anon_sym_LT_LT] = ACTIONS(232),
    [anon_sym_GT_GT] = ACTIONS(232),
    [anon_sym_GT_GT_GT] = ACTIONS(232),
    [anon_sym_QMARK] = ACTIONS(230),
    [anon_sym_COLON] = ACTIONS(230),
    [anon_sym_PLUS_PLUS] = ACTIONS(94),
    [anon_sym_DASH_DASH] = ACTIONS(94),
    [anon_sym_RPAREN] = ACTIONS(230),
    [anon_sym_COMMA] = ACTIONS(230),
    [sym_comment] = ACTIONS(38),
  },
  [69] = {
    [sym__expression] = STATE(29),
    [sym_assignment_expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [sym_ternary_expression] = STATE(18),
    [sym_unary_expression] = STATE(19),
    [sym_update_expression] = STATE(18),
    [anon_sym_BANG] = ACTIONS(168),
    [anon_sym_TILDE] = ACTIONS(168),
    [anon_sym_PLUS_PLUS] = ACTIONS(170),
    [anon_sym_DASH_DASH] = ACTIONS(170),
    [sym_comment] = ACTIONS(38),
  },
  [70] = {
    [sym__expression] = STATE(30),
    [sym_assignment_expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [sym_ternary_expression] = STATE(18),
    [sym_unary_expression] = STATE(19),
    [sym_update_expression] = STATE(18),
    [anon_sym_BANG] = ACTIONS(168),
    [anon_sym_TILDE] = ACTIONS(168),
    [anon_sym_PLUS_PLUS] = ACTIONS(170),
    [anon_sym_DASH_DASH] = ACTIONS(170),
    [sym_comment] = ACTIONS(38),
  },
  [71] = {
    [anon_sym_EQ] = ACTIONS(234),
    [anon_sym_PLUS_EQ] = ACTIONS(236),
    [anon_sym_DASH_EQ] = ACTIONS(236),
    [anon_sym_STAR_EQ] = ACTIONS(236),
    [anon_sym_SLASH_EQ] = ACTIONS(236),
    [anon_sym_AMP_EQ] = ACTIONS(236),
    [anon_sym_PIPE_EQ] = ACTIONS(236),
    [anon_sym_CARET_EQ] = ACTIONS(236),
    [anon_sym_PERCENT_EQ] = ACTIONS(236),
    [anon_sym_LT_LT_EQ] = ACTIONS(236),
    [anon_sym_GT_GT_EQ] = ACTIONS(236),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(236),
    [anon_sym_GT] = ACTIONS(238),
    [anon_sym_LT] = ACTIONS(238),
    [anon_sym_EQ_EQ] = ACTIONS(240),
    [anon_sym_GT_EQ] = ACTIONS(240),
    [anon_sym_LT_EQ] = ACTIONS(240),
    [anon_sym_BANG_EQ] = ACTIONS(240),
    [anon_sym_AMP_AMP] = ACTIONS(242),
    [anon_sym_PIPE_PIPE] = ACTIONS(244),
    [anon_sym_PLUS] = ACTIONS(246),
    [anon_sym_DASH] = ACTIONS(246),
    [anon_sym_STAR] = ACTIONS(248),
    [anon_sym_SLASH] = ACTIONS(248),
    [anon_sym_AMP] = ACTIONS(250),
    [anon_sym_PIPE] = ACTIONS(252),
    [anon_sym_CARET] = ACTIONS(252),
    [anon_sym_PERCENT] = ACTIONS(248),
    [anon_sym_LT_LT] = ACTIONS(248),
    [anon_sym_GT_GT] = ACTIONS(248),
    [anon_sym_GT_GT_GT] = ACTIONS(248),
    [anon_sym_QMARK] = ACTIONS(254),
    [anon_sym_COLON] = ACTIONS(256),
    [anon_sym_PLUS_PLUS] = ACTIONS(94),
    [anon_sym_DASH_DASH] = ACTIONS(94),
    [sym_comment] = ACTIONS(38),
  },
  [72] = {
    [sym_module_identifier] = STATE(99),
    [sym_identifier] = ACTIONS(58),
    [sym_comment] = ACTIONS(38),
  },
  [73] = {
    [sym__semicolon] = STATE(90),
    [aux_sym_module_identifier_repeat1] = STATE(100),
    [anon_sym_SEMI] = ACTIONS(70),
    [anon_sym_DOT] = ACTIONS(152),
    [sym_comment] = ACTIONS(38),
  },
  [74] = {
    [anon_sym_RPAREN] = ACTIONS(258),
    [anon_sym_AT] = ACTIONS(258),
    [anon_sym_COMMA] = ACTIONS(258),
    [anon_sym_open] = ACTIONS(258),
    [anon_sym_module] = ACTIONS(258),
    [anon_sym_package] = ACTIONS(258),
    [sym_comment] = ACTIONS(38),
  },
  [75] = {
    [anon_sym_EQ] = ACTIONS(260),
    [anon_sym_RPAREN] = ACTIONS(262),
    [sym_comment] = ACTIONS(38),
  },
  [76] = {
    [anon_sym_RPAREN] = ACTIONS(262),
    [sym_comment] = ACTIONS(38),
  },
  [77] = {
    [anon_sym_RPAREN] = ACTIONS(264),
    [sym_comment] = ACTIONS(38),
  },
  [78] = {
    [aux_sym_element_value_pair_list_repeat1] = STATE(105),
    [anon_sym_RPAREN] = ACTIONS(266),
    [anon_sym_COMMA] = ACTIONS(268),
    [sym_comment] = ACTIONS(38),
  },
  [79] = {
    [anon_sym_SEMI] = ACTIONS(270),
    [anon_sym_LPAREN] = ACTIONS(270),
    [anon_sym_RPAREN] = ACTIONS(270),
    [anon_sym_AT] = ACTIONS(270),
    [anon_sym_COMMA] = ACTIONS(270),
    [anon_sym_open] = ACTIONS(270),
    [anon_sym_module] = ACTIONS(270),
    [anon_sym_DOT] = ACTIONS(270),
    [anon_sym_to] = ACTIONS(270),
    [anon_sym_with] = ACTIONS(270),
    [anon_sym_package] = ACTIONS(270),
    [sym_comment] = ACTIONS(38),
  },
  [80] = {
    [sym_module_directive] = STATE(88),
    [aux_sym_module_declaration_repeat2] = STATE(107),
    [anon_sym_RBRACE] = ACTIONS(272),
    [anon_sym_requires] = ACTIONS(208),
    [anon_sym_exports] = ACTIONS(210),
    [anon_sym_opens] = ACTIONS(210),
    [anon_sym_uses] = ACTIONS(212),
    [anon_sym_provides] = ACTIONS(214),
    [sym_comment] = ACTIONS(38),
  },
  [81] = {
    [anon_sym_SEMI] = ACTIONS(274),
    [anon_sym_LBRACE] = ACTIONS(274),
    [anon_sym_DOT] = ACTIONS(274),
    [sym_comment] = ACTIONS(38),
  },
  [82] = {
    [sym_identifier] = ACTIONS(276),
    [sym_comment] = ACTIONS(38),
  },
  [83] = {
    [ts_builtin_sym_end] = ACTIONS(278),
    [sym_decimal_integer_literal] = ACTIONS(280),
    [sym_hex_integer_literal] = ACTIONS(280),
    [sym_octal_integer_literal] = ACTIONS(280),
    [sym_binary_integer_literal] = ACTIONS(280),
    [sym_decimal_floating_point_literal] = ACTIONS(280),
    [sym_hex_floating_point_literal] = ACTIONS(282),
    [anon_sym_true] = ACTIONS(278),
    [anon_sym_false] = ACTIONS(278),
    [anon_sym_SQUOTE] = ACTIONS(278),
    [sym_string_literal] = ACTIONS(278),
    [sym_null_literal] = ACTIONS(278),
    [anon_sym_BANG] = ACTIONS(278),
    [anon_sym_TILDE] = ACTIONS(278),
    [anon_sym_PLUS_PLUS] = ACTIONS(278),
    [anon_sym_DASH_DASH] = ACTIONS(278),
    [anon_sym_AT] = ACTIONS(278),
    [anon_sym_open] = ACTIONS(278),
    [anon_sym_module] = ACTIONS(278),
    [anon_sym_package] = ACTIONS(278),
    [anon_sym_import] = ACTIONS(278),
    [sym_comment] = ACTIONS(38),
  },
  [84] = {
    [sym_requires_modifier] = STATE(111),
    [sym_module_name] = STATE(112),
    [aux_sym_module_directive_repeat1] = STATE(113),
    [anon_sym_transitive] = ACTIONS(284),
    [anon_sym_static] = ACTIONS(284),
    [sym_identifier] = ACTIONS(286),
    [sym_comment] = ACTIONS(38),
  },
  [85] = {
    [sym_package_or_type_name] = STATE(114),
    [sym_identifier] = ACTIONS(54),
    [sym_comment] = ACTIONS(38),
  },
  [86] = {
    [sym_package_or_type_name] = STATE(115),
    [sym_identifier] = ACTIONS(54),
    [sym_comment] = ACTIONS(38),
  },
  [87] = {
    [sym_package_or_type_name] = STATE(116),
    [sym_identifier] = ACTIONS(54),
    [sym_comment] = ACTIONS(38),
  },
  [88] = {
    [anon_sym_RBRACE] = ACTIONS(288),
    [anon_sym_requires] = ACTIONS(288),
    [anon_sym_exports] = ACTIONS(288),
    [anon_sym_opens] = ACTIONS(288),
    [anon_sym_uses] = ACTIONS(288),
    [anon_sym_provides] = ACTIONS(288),
    [sym_comment] = ACTIONS(38),
  },
  [89] = {
    [sym_module_directive] = STATE(117),
    [anon_sym_RBRACE] = ACTIONS(272),
    [anon_sym_requires] = ACTIONS(208),
    [anon_sym_exports] = ACTIONS(210),
    [anon_sym_opens] = ACTIONS(210),
    [anon_sym_uses] = ACTIONS(212),
    [anon_sym_provides] = ACTIONS(214),
    [sym_comment] = ACTIONS(38),
  },
  [90] = {
    [ts_builtin_sym_end] = ACTIONS(290),
    [sym_decimal_integer_literal] = ACTIONS(292),
    [sym_hex_integer_literal] = ACTIONS(292),
    [sym_octal_integer_literal] = ACTIONS(292),
    [sym_binary_integer_literal] = ACTIONS(292),
    [sym_decimal_floating_point_literal] = ACTIONS(292),
    [sym_hex_floating_point_literal] = ACTIONS(294),
    [anon_sym_true] = ACTIONS(290),
    [anon_sym_false] = ACTIONS(290),
    [anon_sym_SQUOTE] = ACTIONS(290),
    [sym_string_literal] = ACTIONS(290),
    [sym_null_literal] = ACTIONS(290),
    [anon_sym_BANG] = ACTIONS(290),
    [anon_sym_TILDE] = ACTIONS(290),
    [anon_sym_PLUS_PLUS] = ACTIONS(290),
    [anon_sym_DASH_DASH] = ACTIONS(290),
    [anon_sym_AT] = ACTIONS(290),
    [anon_sym_open] = ACTIONS(290),
    [anon_sym_module] = ACTIONS(290),
    [anon_sym_package] = ACTIONS(290),
    [anon_sym_import] = ACTIONS(290),
    [sym_comment] = ACTIONS(38),
  },
  [91] = {
    [sym__expression] = STATE(118),
    [sym_assignment_expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [sym_ternary_expression] = STATE(18),
    [sym_unary_expression] = STATE(19),
    [sym_update_expression] = STATE(18),
    [anon_sym_BANG] = ACTIONS(168),
    [anon_sym_TILDE] = ACTIONS(168),
    [anon_sym_PLUS_PLUS] = ACTIONS(170),
    [anon_sym_DASH_DASH] = ACTIONS(170),
    [sym_comment] = ACTIONS(38),
  },
  [92] = {
    [sym__expression] = STATE(119),
    [sym_assignment_expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [sym_ternary_expression] = STATE(18),
    [sym_unary_expression] = STATE(19),
    [sym_update_expression] = STATE(18),
    [anon_sym_BANG] = ACTIONS(168),
    [anon_sym_TILDE] = ACTIONS(168),
    [anon_sym_PLUS_PLUS] = ACTIONS(170),
    [anon_sym_DASH_DASH] = ACTIONS(170),
    [sym_comment] = ACTIONS(38),
  },
  [93] = {
    [sym__expression] = STATE(120),
    [sym_assignment_expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [sym_ternary_expression] = STATE(18),
    [sym_unary_expression] = STATE(19),
    [sym_update_expression] = STATE(18),
    [anon_sym_BANG] = ACTIONS(168),
    [anon_sym_TILDE] = ACTIONS(168),
    [anon_sym_PLUS_PLUS] = ACTIONS(170),
    [anon_sym_DASH_DASH] = ACTIONS(170),
    [sym_comment] = ACTIONS(38),
  },
  [94] = {
    [sym__expression] = STATE(121),
    [sym_assignment_expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [sym_ternary_expression] = STATE(18),
    [sym_unary_expression] = STATE(19),
    [sym_update_expression] = STATE(18),
    [anon_sym_BANG] = ACTIONS(168),
    [anon_sym_TILDE] = ACTIONS(168),
    [anon_sym_PLUS_PLUS] = ACTIONS(170),
    [anon_sym_DASH_DASH] = ACTIONS(170),
    [sym_comment] = ACTIONS(38),
  },
  [95] = {
    [sym__expression] = STATE(122),
    [sym_assignment_expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [sym_ternary_expression] = STATE(18),
    [sym_unary_expression] = STATE(19),
    [sym_update_expression] = STATE(18),
    [anon_sym_BANG] = ACTIONS(168),
    [anon_sym_TILDE] = ACTIONS(168),
    [anon_sym_PLUS_PLUS] = ACTIONS(170),
    [anon_sym_DASH_DASH] = ACTIONS(170),
    [sym_comment] = ACTIONS(38),
  },
  [96] = {
    [sym__expression] = STATE(68),
    [sym_assignment_expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [sym_ternary_expression] = STATE(18),
    [sym_unary_expression] = STATE(19),
    [sym_update_expression] = STATE(18),
    [anon_sym_BANG] = ACTIONS(168),
    [anon_sym_TILDE] = ACTIONS(168),
    [anon_sym_PLUS_PLUS] = ACTIONS(170),
    [anon_sym_DASH_DASH] = ACTIONS(170),
    [sym_comment] = ACTIONS(38),
  },
  [97] = {
    [sym__expression] = STATE(123),
    [sym_assignment_expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [sym_ternary_expression] = STATE(18),
    [sym_unary_expression] = STATE(19),
    [sym_update_expression] = STATE(18),
    [anon_sym_BANG] = ACTIONS(168),
    [anon_sym_TILDE] = ACTIONS(168),
    [anon_sym_PLUS_PLUS] = ACTIONS(170),
    [anon_sym_DASH_DASH] = ACTIONS(170),
    [sym_comment] = ACTIONS(38),
  },
  [98] = {
    [sym__expression] = STATE(124),
    [sym_assignment_expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [sym_ternary_expression] = STATE(18),
    [sym_unary_expression] = STATE(19),
    [sym_update_expression] = STATE(18),
    [anon_sym_BANG] = ACTIONS(24),
    [anon_sym_TILDE] = ACTIONS(24),
    [anon_sym_PLUS_PLUS] = ACTIONS(26),
    [anon_sym_DASH_DASH] = ACTIONS(26),
    [sym_comment] = ACTIONS(38),
  },
  [99] = {
    [anon_sym_LBRACE] = ACTIONS(296),
    [sym_comment] = ACTIONS(38),
  },
  [100] = {
    [sym__semicolon] = STATE(126),
    [anon_sym_SEMI] = ACTIONS(70),
    [anon_sym_DOT] = ACTIONS(204),
    [sym_comment] = ACTIONS(38),
  },
  [101] = {
    [sym__literal] = STATE(128),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_unary_expression] = STATE(129),
    [sym__annotation] = STATE(128),
    [sym_normal_annotation] = STATE(21),
    [sym_marker_annotation] = STATE(21),
    [sym_single_element_annotation] = STATE(21),
    [sym_element_value] = STATE(130),
    [sym_element_value_array_initializer] = STATE(128),
    [sym_conditional_expression] = STATE(128),
    [sym_conditional_or_expression] = STATE(131),
    [sym_conditional_and_expression] = STATE(132),
    [sym_inclusive_or_expression] = STATE(133),
    [sym_exclusive_or_expression] = STATE(134),
    [sym_and_expression] = STATE(135),
    [sym_relational_expression] = STATE(136),
    [sym_equality_expression] = STATE(137),
    [sym_shift_expression] = STATE(138),
    [sym_additive_expression] = STATE(139),
    [sym_multiplicative_expression] = STATE(140),
    [sym_decimal_integer_literal] = ACTIONS(12),
    [sym_hex_integer_literal] = ACTIONS(12),
    [sym_octal_integer_literal] = ACTIONS(12),
    [sym_binary_integer_literal] = ACTIONS(12),
    [sym_decimal_floating_point_literal] = ACTIONS(14),
    [sym_hex_floating_point_literal] = ACTIONS(16),
    [anon_sym_true] = ACTIONS(18),
    [anon_sym_false] = ACTIONS(18),
    [anon_sym_SQUOTE] = ACTIONS(20),
    [sym_string_literal] = ACTIONS(22),
    [sym_null_literal] = ACTIONS(22),
    [anon_sym_BANG] = ACTIONS(298),
    [anon_sym_TILDE] = ACTIONS(298),
    [anon_sym_AT] = ACTIONS(28),
    [sym_comment] = ACTIONS(38),
  },
  [102] = {
    [anon_sym_RPAREN] = ACTIONS(300),
    [anon_sym_AT] = ACTIONS(300),
    [anon_sym_COMMA] = ACTIONS(300),
    [anon_sym_open] = ACTIONS(300),
    [anon_sym_module] = ACTIONS(300),
    [anon_sym_package] = ACTIONS(300),
    [sym_comment] = ACTIONS(38),
  },
  [103] = {
    [anon_sym_RPAREN] = ACTIONS(302),
    [anon_sym_AT] = ACTIONS(302),
    [anon_sym_COMMA] = ACTIONS(302),
    [anon_sym_open] = ACTIONS(302),
    [anon_sym_module] = ACTIONS(302),
    [anon_sym_package] = ACTIONS(302),
    [sym_comment] = ACTIONS(38),
  },
  [104] = {
    [sym_element_value_pair] = STATE(142),
    [sym_identifier] = ACTIONS(304),
    [sym_comment] = ACTIONS(38),
  },
  [105] = {
    [anon_sym_RPAREN] = ACTIONS(306),
    [anon_sym_COMMA] = ACTIONS(308),
    [sym_comment] = ACTIONS(38),
  },
  [106] = {
    [ts_builtin_sym_end] = ACTIONS(310),
    [sym_decimal_integer_literal] = ACTIONS(312),
    [sym_hex_integer_literal] = ACTIONS(312),
    [sym_octal_integer_literal] = ACTIONS(312),
    [sym_binary_integer_literal] = ACTIONS(312),
    [sym_decimal_floating_point_literal] = ACTIONS(312),
    [sym_hex_floating_point_literal] = ACTIONS(314),
    [anon_sym_true] = ACTIONS(310),
    [anon_sym_false] = ACTIONS(310),
    [anon_sym_SQUOTE] = ACTIONS(310),
    [sym_string_literal] = ACTIONS(310),
    [sym_null_literal] = ACTIONS(310),
    [anon_sym_BANG] = ACTIONS(310),
    [anon_sym_TILDE] = ACTIONS(310),
    [anon_sym_PLUS_PLUS] = ACTIONS(310),
    [anon_sym_DASH_DASH] = ACTIONS(310),
    [anon_sym_AT] = ACTIONS(310),
    [anon_sym_open] = ACTIONS(310),
    [anon_sym_module] = ACTIONS(310),
    [anon_sym_package] = ACTIONS(310),
    [anon_sym_import] = ACTIONS(310),
    [sym_comment] = ACTIONS(38),
  },
  [107] = {
    [sym_module_directive] = STATE(117),
    [anon_sym_RBRACE] = ACTIONS(316),
    [anon_sym_requires] = ACTIONS(208),
    [anon_sym_exports] = ACTIONS(210),
    [anon_sym_opens] = ACTIONS(210),
    [anon_sym_uses] = ACTIONS(212),
    [anon_sym_provides] = ACTIONS(214),
    [sym_comment] = ACTIONS(38),
  },
  [108] = {
    [anon_sym_SEMI] = ACTIONS(318),
    [anon_sym_LBRACE] = ACTIONS(318),
    [anon_sym_DOT] = ACTIONS(318),
    [sym_comment] = ACTIONS(38),
  },
  [109] = {
    [anon_sym_transitive] = ACTIONS(320),
    [anon_sym_static] = ACTIONS(320),
    [sym_identifier] = ACTIONS(322),
    [sym_comment] = ACTIONS(38),
  },
  [110] = {
    [anon_sym_SEMI] = ACTIONS(324),
    [anon_sym_DOT] = ACTIONS(324),
    [sym_comment] = ACTIONS(38),
  },
  [111] = {
    [anon_sym_transitive] = ACTIONS(326),
    [anon_sym_static] = ACTIONS(326),
    [sym_identifier] = ACTIONS(328),
    [sym_comment] = ACTIONS(38),
  },
  [112] = {
    [sym__semicolon] = STATE(146),
    [anon_sym_SEMI] = ACTIONS(70),
    [anon_sym_DOT] = ACTIONS(330),
    [sym_comment] = ACTIONS(38),
  },
  [113] = {
    [sym_requires_modifier] = STATE(147),
    [sym_module_name] = STATE(148),
    [anon_sym_transitive] = ACTIONS(284),
    [anon_sym_static] = ACTIONS(284),
    [sym_identifier] = ACTIONS(286),
    [sym_comment] = ACTIONS(38),
  },
  [114] = {
    [sym__semicolon] = STATE(146),
    [anon_sym_SEMI] = ACTIONS(70),
    [anon_sym_DOT] = ACTIONS(148),
    [anon_sym_to] = ACTIONS(332),
    [sym_comment] = ACTIONS(38),
  },
  [115] = {
    [anon_sym_SEMI] = ACTIONS(332),
    [anon_sym_DOT] = ACTIONS(148),
    [sym_comment] = ACTIONS(38),
  },
  [116] = {
    [anon_sym_DOT] = ACTIONS(148),
    [anon_sym_with] = ACTIONS(334),
    [sym_comment] = ACTIONS(38),
  },
  [117] = {
    [anon_sym_RBRACE] = ACTIONS(336),
    [anon_sym_requires] = ACTIONS(336),
    [anon_sym_exports] = ACTIONS(336),
    [anon_sym_opens] = ACTIONS(336),
    [anon_sym_uses] = ACTIONS(336),
    [anon_sym_provides] = ACTIONS(336),
    [sym_comment] = ACTIONS(38),
  },
  [118] = {
    [anon_sym_EQ] = ACTIONS(234),
    [anon_sym_PLUS_EQ] = ACTIONS(236),
    [anon_sym_DASH_EQ] = ACTIONS(236),
    [anon_sym_STAR_EQ] = ACTIONS(236),
    [anon_sym_SLASH_EQ] = ACTIONS(236),
    [anon_sym_AMP_EQ] = ACTIONS(236),
    [anon_sym_PIPE_EQ] = ACTIONS(236),
    [anon_sym_CARET_EQ] = ACTIONS(236),
    [anon_sym_PERCENT_EQ] = ACTIONS(236),
    [anon_sym_LT_LT_EQ] = ACTIONS(236),
    [anon_sym_GT_GT_EQ] = ACTIONS(236),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(236),
    [anon_sym_GT] = ACTIONS(238),
    [anon_sym_LT] = ACTIONS(238),
    [anon_sym_EQ_EQ] = ACTIONS(240),
    [anon_sym_GT_EQ] = ACTIONS(240),
    [anon_sym_LT_EQ] = ACTIONS(240),
    [anon_sym_BANG_EQ] = ACTIONS(240),
    [anon_sym_AMP_AMP] = ACTIONS(242),
    [anon_sym_PIPE_PIPE] = ACTIONS(244),
    [anon_sym_PLUS] = ACTIONS(246),
    [anon_sym_DASH] = ACTIONS(246),
    [anon_sym_STAR] = ACTIONS(248),
    [anon_sym_SLASH] = ACTIONS(248),
    [anon_sym_AMP] = ACTIONS(250),
    [anon_sym_PIPE] = ACTIONS(252),
    [anon_sym_CARET] = ACTIONS(252),
    [anon_sym_PERCENT] = ACTIONS(248),
    [anon_sym_LT_LT] = ACTIONS(248),
    [anon_sym_GT_GT] = ACTIONS(248),
    [anon_sym_GT_GT_GT] = ACTIONS(248),
    [anon_sym_QMARK] = ACTIONS(254),
    [anon_sym_COLON] = ACTIONS(228),
    [anon_sym_PLUS_PLUS] = ACTIONS(94),
    [anon_sym_DASH_DASH] = ACTIONS(94),
    [sym_comment] = ACTIONS(38),
  },
  [119] = {
    [anon_sym_EQ] = ACTIONS(232),
    [anon_sym_PLUS_EQ] = ACTIONS(230),
    [anon_sym_DASH_EQ] = ACTIONS(230),
    [anon_sym_STAR_EQ] = ACTIONS(230),
    [anon_sym_SLASH_EQ] = ACTIONS(230),
    [anon_sym_AMP_EQ] = ACTIONS(230),
    [anon_sym_PIPE_EQ] = ACTIONS(230),
    [anon_sym_CARET_EQ] = ACTIONS(230),
    [anon_sym_PERCENT_EQ] = ACTIONS(230),
    [anon_sym_LT_LT_EQ] = ACTIONS(230),
    [anon_sym_GT_GT_EQ] = ACTIONS(230),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(230),
    [anon_sym_GT] = ACTIONS(232),
    [anon_sym_LT] = ACTIONS(232),
    [anon_sym_EQ_EQ] = ACTIONS(230),
    [anon_sym_GT_EQ] = ACTIONS(230),
    [anon_sym_LT_EQ] = ACTIONS(230),
    [anon_sym_BANG_EQ] = ACTIONS(230),
    [anon_sym_AMP_AMP] = ACTIONS(230),
    [anon_sym_PIPE_PIPE] = ACTIONS(230),
    [anon_sym_PLUS] = ACTIONS(232),
    [anon_sym_DASH] = ACTIONS(232),
    [anon_sym_STAR] = ACTIONS(248),
    [anon_sym_SLASH] = ACTIONS(248),
    [anon_sym_AMP] = ACTIONS(232),
    [anon_sym_PIPE] = ACTIONS(232),
    [anon_sym_CARET] = ACTIONS(232),
    [anon_sym_PERCENT] = ACTIONS(248),
    [anon_sym_LT_LT] = ACTIONS(248),
    [anon_sym_GT_GT] = ACTIONS(248),
    [anon_sym_GT_GT_GT] = ACTIONS(248),
    [anon_sym_QMARK] = ACTIONS(230),
    [anon_sym_COLON] = ACTIONS(230),
    [anon_sym_PLUS_PLUS] = ACTIONS(94),
    [anon_sym_DASH_DASH] = ACTIONS(94),
    [sym_comment] = ACTIONS(38),
  },
  [120] = {
    [anon_sym_EQ] = ACTIONS(232),
    [anon_sym_PLUS_EQ] = ACTIONS(230),
    [anon_sym_DASH_EQ] = ACTIONS(230),
    [anon_sym_STAR_EQ] = ACTIONS(230),
    [anon_sym_SLASH_EQ] = ACTIONS(230),
    [anon_sym_AMP_EQ] = ACTIONS(230),
    [anon_sym_PIPE_EQ] = ACTIONS(230),
    [anon_sym_CARET_EQ] = ACTIONS(230),
    [anon_sym_PERCENT_EQ] = ACTIONS(230),
    [anon_sym_LT_LT_EQ] = ACTIONS(230),
    [anon_sym_GT_GT_EQ] = ACTIONS(230),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(230),
    [anon_sym_GT] = ACTIONS(238),
    [anon_sym_LT] = ACTIONS(238),
    [anon_sym_EQ_EQ] = ACTIONS(240),
    [anon_sym_GT_EQ] = ACTIONS(240),
    [anon_sym_LT_EQ] = ACTIONS(240),
    [anon_sym_BANG_EQ] = ACTIONS(240),
    [anon_sym_AMP_AMP] = ACTIONS(230),
    [anon_sym_PIPE_PIPE] = ACTIONS(230),
    [anon_sym_PLUS] = ACTIONS(246),
    [anon_sym_DASH] = ACTIONS(246),
    [anon_sym_STAR] = ACTIONS(248),
    [anon_sym_SLASH] = ACTIONS(248),
    [anon_sym_AMP] = ACTIONS(232),
    [anon_sym_PIPE] = ACTIONS(232),
    [anon_sym_CARET] = ACTIONS(232),
    [anon_sym_PERCENT] = ACTIONS(248),
    [anon_sym_LT_LT] = ACTIONS(248),
    [anon_sym_GT_GT] = ACTIONS(248),
    [anon_sym_GT_GT_GT] = ACTIONS(248),
    [anon_sym_QMARK] = ACTIONS(230),
    [anon_sym_COLON] = ACTIONS(230),
    [anon_sym_PLUS_PLUS] = ACTIONS(94),
    [anon_sym_DASH_DASH] = ACTIONS(94),
    [sym_comment] = ACTIONS(38),
  },
  [121] = {
    [anon_sym_EQ] = ACTIONS(232),
    [anon_sym_PLUS_EQ] = ACTIONS(230),
    [anon_sym_DASH_EQ] = ACTIONS(230),
    [anon_sym_STAR_EQ] = ACTIONS(230),
    [anon_sym_SLASH_EQ] = ACTIONS(230),
    [anon_sym_AMP_EQ] = ACTIONS(230),
    [anon_sym_PIPE_EQ] = ACTIONS(230),
    [anon_sym_CARET_EQ] = ACTIONS(230),
    [anon_sym_PERCENT_EQ] = ACTIONS(230),
    [anon_sym_LT_LT_EQ] = ACTIONS(230),
    [anon_sym_GT_GT_EQ] = ACTIONS(230),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(230),
    [anon_sym_GT] = ACTIONS(238),
    [anon_sym_LT] = ACTIONS(238),
    [anon_sym_EQ_EQ] = ACTIONS(240),
    [anon_sym_GT_EQ] = ACTIONS(240),
    [anon_sym_LT_EQ] = ACTIONS(240),
    [anon_sym_BANG_EQ] = ACTIONS(240),
    [anon_sym_AMP_AMP] = ACTIONS(242),
    [anon_sym_PIPE_PIPE] = ACTIONS(230),
    [anon_sym_PLUS] = ACTIONS(246),
    [anon_sym_DASH] = ACTIONS(246),
    [anon_sym_STAR] = ACTIONS(248),
    [anon_sym_SLASH] = ACTIONS(248),
    [anon_sym_AMP] = ACTIONS(250),
    [anon_sym_PIPE] = ACTIONS(232),
    [anon_sym_CARET] = ACTIONS(232),
    [anon_sym_PERCENT] = ACTIONS(248),
    [anon_sym_LT_LT] = ACTIONS(248),
    [anon_sym_GT_GT] = ACTIONS(248),
    [anon_sym_GT_GT_GT] = ACTIONS(248),
    [anon_sym_QMARK] = ACTIONS(230),
    [anon_sym_COLON] = ACTIONS(230),
    [anon_sym_PLUS_PLUS] = ACTIONS(94),
    [anon_sym_DASH_DASH] = ACTIONS(94),
    [sym_comment] = ACTIONS(38),
  },
  [122] = {
    [anon_sym_EQ] = ACTIONS(232),
    [anon_sym_PLUS_EQ] = ACTIONS(230),
    [anon_sym_DASH_EQ] = ACTIONS(230),
    [anon_sym_STAR_EQ] = ACTIONS(230),
    [anon_sym_SLASH_EQ] = ACTIONS(230),
    [anon_sym_AMP_EQ] = ACTIONS(230),
    [anon_sym_PIPE_EQ] = ACTIONS(230),
    [anon_sym_CARET_EQ] = ACTIONS(230),
    [anon_sym_PERCENT_EQ] = ACTIONS(230),
    [anon_sym_LT_LT_EQ] = ACTIONS(230),
    [anon_sym_GT_GT_EQ] = ACTIONS(230),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(230),
    [anon_sym_GT] = ACTIONS(238),
    [anon_sym_LT] = ACTIONS(238),
    [anon_sym_EQ_EQ] = ACTIONS(240),
    [anon_sym_GT_EQ] = ACTIONS(240),
    [anon_sym_LT_EQ] = ACTIONS(240),
    [anon_sym_BANG_EQ] = ACTIONS(240),
    [anon_sym_AMP_AMP] = ACTIONS(230),
    [anon_sym_PIPE_PIPE] = ACTIONS(230),
    [anon_sym_PLUS] = ACTIONS(232),
    [anon_sym_DASH] = ACTIONS(232),
    [anon_sym_STAR] = ACTIONS(248),
    [anon_sym_SLASH] = ACTIONS(248),
    [anon_sym_AMP] = ACTIONS(232),
    [anon_sym_PIPE] = ACTIONS(232),
    [anon_sym_CARET] = ACTIONS(232),
    [anon_sym_PERCENT] = ACTIONS(248),
    [anon_sym_LT_LT] = ACTIONS(248),
    [anon_sym_GT_GT] = ACTIONS(248),
    [anon_sym_GT_GT_GT] = ACTIONS(248),
    [anon_sym_QMARK] = ACTIONS(230),
    [anon_sym_COLON] = ACTIONS(230),
    [anon_sym_PLUS_PLUS] = ACTIONS(94),
    [anon_sym_DASH_DASH] = ACTIONS(94),
    [sym_comment] = ACTIONS(38),
  },
  [123] = {
    [anon_sym_EQ] = ACTIONS(234),
    [anon_sym_PLUS_EQ] = ACTIONS(236),
    [anon_sym_DASH_EQ] = ACTIONS(236),
    [anon_sym_STAR_EQ] = ACTIONS(236),
    [anon_sym_SLASH_EQ] = ACTIONS(236),
    [anon_sym_AMP_EQ] = ACTIONS(236),
    [anon_sym_PIPE_EQ] = ACTIONS(236),
    [anon_sym_CARET_EQ] = ACTIONS(236),
    [anon_sym_PERCENT_EQ] = ACTIONS(236),
    [anon_sym_LT_LT_EQ] = ACTIONS(236),
    [anon_sym_GT_GT_EQ] = ACTIONS(236),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(236),
    [anon_sym_GT] = ACTIONS(238),
    [anon_sym_LT] = ACTIONS(238),
    [anon_sym_EQ_EQ] = ACTIONS(240),
    [anon_sym_GT_EQ] = ACTIONS(240),
    [anon_sym_LT_EQ] = ACTIONS(240),
    [anon_sym_BANG_EQ] = ACTIONS(240),
    [anon_sym_AMP_AMP] = ACTIONS(242),
    [anon_sym_PIPE_PIPE] = ACTIONS(244),
    [anon_sym_PLUS] = ACTIONS(246),
    [anon_sym_DASH] = ACTIONS(246),
    [anon_sym_STAR] = ACTIONS(248),
    [anon_sym_SLASH] = ACTIONS(248),
    [anon_sym_AMP] = ACTIONS(250),
    [anon_sym_PIPE] = ACTIONS(252),
    [anon_sym_CARET] = ACTIONS(252),
    [anon_sym_PERCENT] = ACTIONS(248),
    [anon_sym_LT_LT] = ACTIONS(248),
    [anon_sym_GT_GT] = ACTIONS(248),
    [anon_sym_GT_GT_GT] = ACTIONS(248),
    [anon_sym_QMARK] = ACTIONS(254),
    [anon_sym_COLON] = ACTIONS(338),
    [anon_sym_PLUS_PLUS] = ACTIONS(94),
    [anon_sym_DASH_DASH] = ACTIONS(94),
    [sym_comment] = ACTIONS(38),
  },
  [124] = {
    [anon_sym_SEMI] = ACTIONS(340),
    [anon_sym_EQ] = ACTIONS(342),
    [anon_sym_PLUS_EQ] = ACTIONS(340),
    [anon_sym_DASH_EQ] = ACTIONS(340),
    [anon_sym_STAR_EQ] = ACTIONS(340),
    [anon_sym_SLASH_EQ] = ACTIONS(340),
    [anon_sym_AMP_EQ] = ACTIONS(340),
    [anon_sym_PIPE_EQ] = ACTIONS(340),
    [anon_sym_CARET_EQ] = ACTIONS(340),
    [anon_sym_PERCENT_EQ] = ACTIONS(340),
    [anon_sym_LT_LT_EQ] = ACTIONS(340),
    [anon_sym_GT_GT_EQ] = ACTIONS(340),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(340),
    [anon_sym_GT] = ACTIONS(76),
    [anon_sym_LT] = ACTIONS(76),
    [anon_sym_EQ_EQ] = ACTIONS(78),
    [anon_sym_GT_EQ] = ACTIONS(78),
    [anon_sym_LT_EQ] = ACTIONS(78),
    [anon_sym_BANG_EQ] = ACTIONS(78),
    [anon_sym_AMP_AMP] = ACTIONS(80),
    [anon_sym_PIPE_PIPE] = ACTIONS(82),
    [anon_sym_PLUS] = ACTIONS(84),
    [anon_sym_DASH] = ACTIONS(84),
    [anon_sym_STAR] = ACTIONS(86),
    [anon_sym_SLASH] = ACTIONS(86),
    [anon_sym_AMP] = ACTIONS(88),
    [anon_sym_PIPE] = ACTIONS(90),
    [anon_sym_CARET] = ACTIONS(90),
    [anon_sym_PERCENT] = ACTIONS(86),
    [anon_sym_LT_LT] = ACTIONS(86),
    [anon_sym_GT_GT] = ACTIONS(86),
    [anon_sym_GT_GT_GT] = ACTIONS(86),
    [anon_sym_QMARK] = ACTIONS(92),
    [anon_sym_PLUS_PLUS] = ACTIONS(94),
    [anon_sym_DASH_DASH] = ACTIONS(94),
    [sym_comment] = ACTIONS(38),
  },
  [125] = {
    [sym_module_directive] = STATE(88),
    [aux_sym_module_declaration_repeat2] = STATE(152),
    [anon_sym_RBRACE] = ACTIONS(316),
    [anon_sym_requires] = ACTIONS(208),
    [anon_sym_exports] = ACTIONS(210),
    [anon_sym_opens] = ACTIONS(210),
    [anon_sym_uses] = ACTIONS(212),
    [anon_sym_provides] = ACTIONS(214),
    [sym_comment] = ACTIONS(38),
  },
  [126] = {
    [ts_builtin_sym_end] = ACTIONS(344),
    [sym_decimal_integer_literal] = ACTIONS(346),
    [sym_hex_integer_literal] = ACTIONS(346),
    [sym_octal_integer_literal] = ACTIONS(346),
    [sym_binary_integer_literal] = ACTIONS(346),
    [sym_decimal_floating_point_literal] = ACTIONS(346),
    [sym_hex_floating_point_literal] = ACTIONS(348),
    [anon_sym_true] = ACTIONS(344),
    [anon_sym_false] = ACTIONS(344),
    [anon_sym_SQUOTE] = ACTIONS(344),
    [sym_string_literal] = ACTIONS(344),
    [sym_null_literal] = ACTIONS(344),
    [anon_sym_BANG] = ACTIONS(344),
    [anon_sym_TILDE] = ACTIONS(344),
    [anon_sym_PLUS_PLUS] = ACTIONS(344),
    [anon_sym_DASH_DASH] = ACTIONS(344),
    [anon_sym_AT] = ACTIONS(344),
    [anon_sym_open] = ACTIONS(344),
    [anon_sym_module] = ACTIONS(344),
    [anon_sym_package] = ACTIONS(344),
    [anon_sym_import] = ACTIONS(344),
    [sym_comment] = ACTIONS(38),
  },
  [127] = {
    [sym__expression] = STATE(155),
    [sym_assignment_expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [sym_ternary_expression] = STATE(18),
    [sym_unary_expression] = STATE(19),
    [sym_update_expression] = STATE(18),
    [anon_sym_BANG] = ACTIONS(350),
    [anon_sym_TILDE] = ACTIONS(350),
    [anon_sym_PLUS_PLUS] = ACTIONS(352),
    [anon_sym_DASH_DASH] = ACTIONS(352),
    [sym_comment] = ACTIONS(38),
  },
  [128] = {
    [anon_sym_RPAREN] = ACTIONS(354),
    [anon_sym_COMMA] = ACTIONS(354),
    [sym_comment] = ACTIONS(38),
  },
  [129] = {
    [anon_sym_LT] = ACTIONS(356),
    [anon_sym_EQ_EQ] = ACTIONS(358),
    [anon_sym_BANG_EQ] = ACTIONS(358),
    [anon_sym_AMP_AMP] = ACTIONS(358),
    [anon_sym_PIPE_PIPE] = ACTIONS(358),
    [anon_sym_PLUS] = ACTIONS(358),
    [anon_sym_DASH] = ACTIONS(358),
    [anon_sym_STAR] = ACTIONS(358),
    [anon_sym_SLASH] = ACTIONS(356),
    [anon_sym_PIPE] = ACTIONS(356),
    [anon_sym_CARET] = ACTIONS(358),
    [anon_sym_PERCENT] = ACTIONS(358),
    [anon_sym_LT_LT] = ACTIONS(358),
    [anon_sym_GT_GT] = ACTIONS(356),
    [anon_sym_GT_GT_GT] = ACTIONS(358),
    [anon_sym_QMARK] = ACTIONS(358),
    [anon_sym_RPAREN] = ACTIONS(358),
    [anon_sym_COMMA] = ACTIONS(358),
    [sym_comment] = ACTIONS(38),
  },
  [130] = {
    [anon_sym_RPAREN] = ACTIONS(360),
    [anon_sym_COMMA] = ACTIONS(360),
    [sym_comment] = ACTIONS(38),
  },
  [131] = {
    [anon_sym_PIPE_PIPE] = ACTIONS(362),
    [anon_sym_QMARK] = ACTIONS(364),
    [anon_sym_RPAREN] = ACTIONS(366),
    [anon_sym_COMMA] = ACTIONS(366),
    [sym_comment] = ACTIONS(38),
  },
  [132] = {
    [anon_sym_AMP_AMP] = ACTIONS(368),
    [anon_sym_PIPE_PIPE] = ACTIONS(370),
    [anon_sym_QMARK] = ACTIONS(370),
    [anon_sym_RPAREN] = ACTIONS(370),
    [anon_sym_COMMA] = ACTIONS(370),
    [sym_comment] = ACTIONS(38),
  },
  [133] = {
    [anon_sym_AMP_AMP] = ACTIONS(372),
    [anon_sym_PIPE_PIPE] = ACTIONS(372),
    [anon_sym_PIPE] = ACTIONS(374),
    [anon_sym_QMARK] = ACTIONS(372),
    [anon_sym_RPAREN] = ACTIONS(372),
    [anon_sym_COMMA] = ACTIONS(372),
    [sym_comment] = ACTIONS(38),
  },
  [134] = {
    [anon_sym_AMP_AMP] = ACTIONS(376),
    [anon_sym_PIPE_PIPE] = ACTIONS(376),
    [anon_sym_PIPE] = ACTIONS(378),
    [anon_sym_CARET] = ACTIONS(380),
    [anon_sym_QMARK] = ACTIONS(376),
    [anon_sym_RPAREN] = ACTIONS(376),
    [anon_sym_COMMA] = ACTIONS(376),
    [sym_comment] = ACTIONS(38),
  },
  [135] = {
    [anon_sym_AMP_AMP] = ACTIONS(382),
    [anon_sym_PIPE_PIPE] = ACTIONS(382),
    [anon_sym_PIPE] = ACTIONS(384),
    [anon_sym_CARET] = ACTIONS(382),
    [anon_sym_QMARK] = ACTIONS(382),
    [anon_sym_RPAREN] = ACTIONS(382),
    [anon_sym_COMMA] = ACTIONS(382),
    [sym_comment] = ACTIONS(38),
  },
  [136] = {
    [anon_sym_LT] = ACTIONS(386),
    [anon_sym_EQ_EQ] = ACTIONS(388),
    [anon_sym_BANG_EQ] = ACTIONS(388),
    [anon_sym_AMP_AMP] = ACTIONS(390),
    [anon_sym_PIPE_PIPE] = ACTIONS(390),
    [anon_sym_PIPE] = ACTIONS(392),
    [anon_sym_CARET] = ACTIONS(390),
    [anon_sym_QMARK] = ACTIONS(390),
    [anon_sym_RPAREN] = ACTIONS(390),
    [anon_sym_COMMA] = ACTIONS(390),
    [sym_comment] = ACTIONS(38),
  },
  [137] = {
    [anon_sym_EQ_EQ] = ACTIONS(394),
    [anon_sym_BANG_EQ] = ACTIONS(394),
    [sym_comment] = ACTIONS(38),
  },
  [138] = {
    [anon_sym_LT] = ACTIONS(396),
    [anon_sym_EQ_EQ] = ACTIONS(398),
    [anon_sym_BANG_EQ] = ACTIONS(398),
    [anon_sym_AMP_AMP] = ACTIONS(398),
    [anon_sym_PIPE_PIPE] = ACTIONS(398),
    [anon_sym_PIPE] = ACTIONS(396),
    [anon_sym_CARET] = ACTIONS(398),
    [anon_sym_LT_LT] = ACTIONS(400),
    [anon_sym_GT_GT] = ACTIONS(402),
    [anon_sym_GT_GT_GT] = ACTIONS(400),
    [anon_sym_QMARK] = ACTIONS(398),
    [anon_sym_RPAREN] = ACTIONS(398),
    [anon_sym_COMMA] = ACTIONS(398),
    [sym_comment] = ACTIONS(38),
  },
  [139] = {
    [anon_sym_LT] = ACTIONS(404),
    [anon_sym_EQ_EQ] = ACTIONS(406),
    [anon_sym_BANG_EQ] = ACTIONS(406),
    [anon_sym_AMP_AMP] = ACTIONS(406),
    [anon_sym_PIPE_PIPE] = ACTIONS(406),
    [anon_sym_PLUS] = ACTIONS(408),
    [anon_sym_DASH] = ACTIONS(408),
    [anon_sym_PIPE] = ACTIONS(404),
    [anon_sym_CARET] = ACTIONS(406),
    [anon_sym_LT_LT] = ACTIONS(406),
    [anon_sym_GT_GT] = ACTIONS(404),
    [anon_sym_GT_GT_GT] = ACTIONS(406),
    [anon_sym_QMARK] = ACTIONS(406),
    [anon_sym_RPAREN] = ACTIONS(406),
    [anon_sym_COMMA] = ACTIONS(406),
    [sym_comment] = ACTIONS(38),
  },
  [140] = {
    [anon_sym_LT] = ACTIONS(410),
    [anon_sym_EQ_EQ] = ACTIONS(412),
    [anon_sym_BANG_EQ] = ACTIONS(412),
    [anon_sym_AMP_AMP] = ACTIONS(412),
    [anon_sym_PIPE_PIPE] = ACTIONS(412),
    [anon_sym_PLUS] = ACTIONS(412),
    [anon_sym_DASH] = ACTIONS(412),
    [anon_sym_STAR] = ACTIONS(414),
    [anon_sym_SLASH] = ACTIONS(416),
    [anon_sym_PIPE] = ACTIONS(410),
    [anon_sym_CARET] = ACTIONS(412),
    [anon_sym_PERCENT] = ACTIONS(414),
    [anon_sym_LT_LT] = ACTIONS(412),
    [anon_sym_GT_GT] = ACTIONS(410),
    [anon_sym_GT_GT_GT] = ACTIONS(412),
    [anon_sym_QMARK] = ACTIONS(412),
    [anon_sym_RPAREN] = ACTIONS(412),
    [anon_sym_COMMA] = ACTIONS(412),
    [sym_comment] = ACTIONS(38),
  },
  [141] = {
    [anon_sym_EQ] = ACTIONS(260),
    [sym_comment] = ACTIONS(38),
  },
  [142] = {
    [anon_sym_RPAREN] = ACTIONS(418),
    [anon_sym_COMMA] = ACTIONS(418),
    [sym_comment] = ACTIONS(38),
  },
  [143] = {
    [sym_element_value_pair] = STATE(167),
    [sym_identifier] = ACTIONS(304),
    [sym_comment] = ACTIONS(38),
  },
  [144] = {
    [ts_builtin_sym_end] = ACTIONS(420),
    [sym_decimal_integer_literal] = ACTIONS(422),
    [sym_hex_integer_literal] = ACTIONS(422),
    [sym_octal_integer_literal] = ACTIONS(422),
    [sym_binary_integer_literal] = ACTIONS(422),
    [sym_decimal_floating_point_literal] = ACTIONS(422),
    [sym_hex_floating_point_literal] = ACTIONS(424),
    [anon_sym_true] = ACTIONS(420),
    [anon_sym_false] = ACTIONS(420),
    [anon_sym_SQUOTE] = ACTIONS(420),
    [sym_string_literal] = ACTIONS(420),
    [sym_null_literal] = ACTIONS(420),
    [anon_sym_BANG] = ACTIONS(420),
    [anon_sym_TILDE] = ACTIONS(420),
    [anon_sym_PLUS_PLUS] = ACTIONS(420),
    [anon_sym_DASH_DASH] = ACTIONS(420),
    [anon_sym_AT] = ACTIONS(420),
    [anon_sym_open] = ACTIONS(420),
    [anon_sym_module] = ACTIONS(420),
    [anon_sym_package] = ACTIONS(420),
    [anon_sym_import] = ACTIONS(420),
    [sym_comment] = ACTIONS(38),
  },
  [145] = {
    [sym_identifier] = ACTIONS(426),
    [sym_comment] = ACTIONS(38),
  },
  [146] = {
    [anon_sym_RBRACE] = ACTIONS(428),
    [anon_sym_requires] = ACTIONS(428),
    [anon_sym_exports] = ACTIONS(428),
    [anon_sym_opens] = ACTIONS(428),
    [anon_sym_uses] = ACTIONS(428),
    [anon_sym_provides] = ACTIONS(428),
    [sym_comment] = ACTIONS(38),
  },
  [147] = {
    [anon_sym_transitive] = ACTIONS(430),
    [anon_sym_static] = ACTIONS(430),
    [sym_identifier] = ACTIONS(432),
    [sym_comment] = ACTIONS(38),
  },
  [148] = {
    [sym__semicolon] = STATE(169),
    [anon_sym_SEMI] = ACTIONS(70),
    [anon_sym_DOT] = ACTIONS(330),
    [sym_comment] = ACTIONS(38),
  },
  [149] = {
    [sym__semicolon] = STATE(169),
    [anon_sym_SEMI] = ACTIONS(70),
    [sym_comment] = ACTIONS(38),
  },
  [150] = {
    [sym_package_or_type_name] = STATE(170),
    [sym_identifier] = ACTIONS(54),
    [sym_comment] = ACTIONS(38),
  },
  [151] = {
    [sym__expression] = STATE(171),
    [sym_assignment_expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [sym_ternary_expression] = STATE(18),
    [sym_unary_expression] = STATE(19),
    [sym_update_expression] = STATE(18),
    [anon_sym_BANG] = ACTIONS(168),
    [anon_sym_TILDE] = ACTIONS(168),
    [anon_sym_PLUS_PLUS] = ACTIONS(170),
    [anon_sym_DASH_DASH] = ACTIONS(170),
    [sym_comment] = ACTIONS(38),
  },
  [152] = {
    [sym_module_directive] = STATE(117),
    [anon_sym_RBRACE] = ACTIONS(434),
    [anon_sym_requires] = ACTIONS(208),
    [anon_sym_exports] = ACTIONS(210),
    [anon_sym_opens] = ACTIONS(210),
    [anon_sym_uses] = ACTIONS(212),
    [anon_sym_provides] = ACTIONS(214),
    [sym_comment] = ACTIONS(38),
  },
  [153] = {
    [sym__expression] = STATE(29),
    [sym_assignment_expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [sym_ternary_expression] = STATE(18),
    [sym_unary_expression] = STATE(19),
    [sym_update_expression] = STATE(18),
    [anon_sym_BANG] = ACTIONS(350),
    [anon_sym_TILDE] = ACTIONS(350),
    [anon_sym_PLUS_PLUS] = ACTIONS(352),
    [anon_sym_DASH_DASH] = ACTIONS(352),
    [sym_comment] = ACTIONS(38),
  },
  [154] = {
    [sym__expression] = STATE(30),
    [sym_assignment_expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [sym_ternary_expression] = STATE(18),
    [sym_unary_expression] = STATE(19),
    [sym_update_expression] = STATE(18),
    [anon_sym_BANG] = ACTIONS(350),
    [anon_sym_TILDE] = ACTIONS(350),
    [anon_sym_PLUS_PLUS] = ACTIONS(352),
    [anon_sym_DASH_DASH] = ACTIONS(352),
    [sym_comment] = ACTIONS(38),
  },
  [155] = {
    [anon_sym_EQ] = ACTIONS(436),
    [anon_sym_PLUS_EQ] = ACTIONS(438),
    [anon_sym_DASH_EQ] = ACTIONS(438),
    [anon_sym_STAR_EQ] = ACTIONS(438),
    [anon_sym_SLASH_EQ] = ACTIONS(438),
    [anon_sym_AMP_EQ] = ACTIONS(438),
    [anon_sym_PIPE_EQ] = ACTIONS(438),
    [anon_sym_CARET_EQ] = ACTIONS(438),
    [anon_sym_PERCENT_EQ] = ACTIONS(438),
    [anon_sym_LT_LT_EQ] = ACTIONS(438),
    [anon_sym_GT_GT_EQ] = ACTIONS(438),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(438),
    [anon_sym_GT] = ACTIONS(440),
    [anon_sym_LT] = ACTIONS(136),
    [anon_sym_EQ_EQ] = ACTIONS(134),
    [anon_sym_GT_EQ] = ACTIONS(442),
    [anon_sym_LT_EQ] = ACTIONS(442),
    [anon_sym_BANG_EQ] = ACTIONS(134),
    [anon_sym_AMP_AMP] = ACTIONS(134),
    [anon_sym_PIPE_PIPE] = ACTIONS(134),
    [anon_sym_PLUS] = ACTIONS(136),
    [anon_sym_DASH] = ACTIONS(136),
    [anon_sym_STAR] = ACTIONS(136),
    [anon_sym_SLASH] = ACTIONS(136),
    [anon_sym_AMP] = ACTIONS(444),
    [anon_sym_PIPE] = ACTIONS(136),
    [anon_sym_CARET] = ACTIONS(136),
    [anon_sym_PERCENT] = ACTIONS(136),
    [anon_sym_LT_LT] = ACTIONS(136),
    [anon_sym_GT_GT] = ACTIONS(136),
    [anon_sym_GT_GT_GT] = ACTIONS(136),
    [anon_sym_QMARK] = ACTIONS(134),
    [anon_sym_PLUS_PLUS] = ACTIONS(94),
    [anon_sym_DASH_DASH] = ACTIONS(94),
    [anon_sym_RPAREN] = ACTIONS(134),
    [anon_sym_COMMA] = ACTIONS(134),
    [sym_comment] = ACTIONS(38),
  },
  [156] = {
    [anon_sym_RPAREN] = ACTIONS(446),
    [anon_sym_COMMA] = ACTIONS(446),
    [sym_comment] = ACTIONS(38),
  },
  [157] = {
    [sym_unary_expression] = STATE(129),
    [sym_conditional_and_expression] = STATE(180),
    [sym_inclusive_or_expression] = STATE(133),
    [sym_exclusive_or_expression] = STATE(134),
    [sym_and_expression] = STATE(135),
    [sym_relational_expression] = STATE(136),
    [sym_equality_expression] = STATE(137),
    [sym_shift_expression] = STATE(138),
    [sym_additive_expression] = STATE(139),
    [sym_multiplicative_expression] = STATE(140),
    [anon_sym_BANG] = ACTIONS(298),
    [anon_sym_TILDE] = ACTIONS(298),
    [sym_comment] = ACTIONS(38),
  },
  [158] = {
    [sym__expression] = STATE(181),
    [sym_assignment_expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [sym_ternary_expression] = STATE(18),
    [sym_unary_expression] = STATE(19),
    [sym_update_expression] = STATE(18),
    [anon_sym_BANG] = ACTIONS(168),
    [anon_sym_TILDE] = ACTIONS(168),
    [anon_sym_PLUS_PLUS] = ACTIONS(170),
    [anon_sym_DASH_DASH] = ACTIONS(170),
    [sym_comment] = ACTIONS(38),
  },
  [159] = {
    [sym_unary_expression] = STATE(129),
    [sym_inclusive_or_expression] = STATE(182),
    [sym_exclusive_or_expression] = STATE(134),
    [sym_and_expression] = STATE(135),
    [sym_relational_expression] = STATE(136),
    [sym_equality_expression] = STATE(137),
    [sym_shift_expression] = STATE(138),
    [sym_additive_expression] = STATE(139),
    [sym_multiplicative_expression] = STATE(140),
    [anon_sym_BANG] = ACTIONS(298),
    [anon_sym_TILDE] = ACTIONS(298),
    [sym_comment] = ACTIONS(38),
  },
  [160] = {
    [sym_unary_expression] = STATE(129),
    [sym_exclusive_or_expression] = STATE(183),
    [sym_and_expression] = STATE(135),
    [sym_relational_expression] = STATE(136),
    [sym_equality_expression] = STATE(137),
    [sym_shift_expression] = STATE(138),
    [sym_additive_expression] = STATE(139),
    [sym_multiplicative_expression] = STATE(140),
    [anon_sym_BANG] = ACTIONS(298),
    [anon_sym_TILDE] = ACTIONS(298),
    [sym_comment] = ACTIONS(38),
  },
  [161] = {
    [sym_unary_expression] = STATE(129),
    [sym_and_expression] = STATE(184),
    [sym_relational_expression] = STATE(136),
    [sym_equality_expression] = STATE(137),
    [sym_shift_expression] = STATE(138),
    [sym_additive_expression] = STATE(139),
    [sym_multiplicative_expression] = STATE(140),
    [anon_sym_BANG] = ACTIONS(298),
    [anon_sym_TILDE] = ACTIONS(298),
    [sym_comment] = ACTIONS(38),
  },
  [162] = {
    [sym_unary_expression] = STATE(129),
    [sym_shift_expression] = STATE(185),
    [sym_additive_expression] = STATE(139),
    [sym_multiplicative_expression] = STATE(140),
    [anon_sym_BANG] = ACTIONS(298),
    [anon_sym_TILDE] = ACTIONS(298),
    [sym_comment] = ACTIONS(38),
  },
  [163] = {
    [sym_unary_expression] = STATE(129),
    [sym_relational_expression] = STATE(186),
    [sym_shift_expression] = STATE(138),
    [sym_additive_expression] = STATE(139),
    [sym_multiplicative_expression] = STATE(140),
    [anon_sym_BANG] = ACTIONS(298),
    [anon_sym_TILDE] = ACTIONS(298),
    [sym_comment] = ACTIONS(38),
  },
  [164] = {
    [sym_unary_expression] = STATE(129),
    [sym_additive_expression] = STATE(187),
    [sym_multiplicative_expression] = STATE(140),
    [anon_sym_BANG] = ACTIONS(298),
    [anon_sym_TILDE] = ACTIONS(298),
    [sym_comment] = ACTIONS(38),
  },
  [165] = {
    [sym_unary_expression] = STATE(129),
    [sym_multiplicative_expression] = STATE(188),
    [anon_sym_BANG] = ACTIONS(298),
    [anon_sym_TILDE] = ACTIONS(298),
    [sym_comment] = ACTIONS(38),
  },
  [166] = {
    [sym_unary_expression] = STATE(189),
    [anon_sym_BANG] = ACTIONS(298),
    [anon_sym_TILDE] = ACTIONS(298),
    [sym_comment] = ACTIONS(38),
  },
  [167] = {
    [anon_sym_RPAREN] = ACTIONS(448),
    [anon_sym_COMMA] = ACTIONS(448),
    [sym_comment] = ACTIONS(38),
  },
  [168] = {
    [anon_sym_SEMI] = ACTIONS(450),
    [anon_sym_DOT] = ACTIONS(450),
    [sym_comment] = ACTIONS(38),
  },
  [169] = {
    [anon_sym_RBRACE] = ACTIONS(452),
    [anon_sym_requires] = ACTIONS(452),
    [anon_sym_exports] = ACTIONS(452),
    [anon_sym_opens] = ACTIONS(452),
    [anon_sym_uses] = ACTIONS(452),
    [anon_sym_provides] = ACTIONS(452),
    [sym_comment] = ACTIONS(38),
  },
  [170] = {
    [sym__semicolon] = STATE(191),
    [aux_sym_module_directive_repeat2] = STATE(192),
    [anon_sym_SEMI] = ACTIONS(70),
    [anon_sym_COMMA] = ACTIONS(454),
    [anon_sym_DOT] = ACTIONS(148),
    [sym_comment] = ACTIONS(38),
  },
  [171] = {
    [anon_sym_EQ] = ACTIONS(342),
    [anon_sym_PLUS_EQ] = ACTIONS(340),
    [anon_sym_DASH_EQ] = ACTIONS(340),
    [anon_sym_STAR_EQ] = ACTIONS(340),
    [anon_sym_SLASH_EQ] = ACTIONS(340),
    [anon_sym_AMP_EQ] = ACTIONS(340),
    [anon_sym_PIPE_EQ] = ACTIONS(340),
    [anon_sym_CARET_EQ] = ACTIONS(340),
    [anon_sym_PERCENT_EQ] = ACTIONS(340),
    [anon_sym_LT_LT_EQ] = ACTIONS(340),
    [anon_sym_GT_GT_EQ] = ACTIONS(340),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(340),
    [anon_sym_GT] = ACTIONS(238),
    [anon_sym_LT] = ACTIONS(238),
    [anon_sym_EQ_EQ] = ACTIONS(240),
    [anon_sym_GT_EQ] = ACTIONS(240),
    [anon_sym_LT_EQ] = ACTIONS(240),
    [anon_sym_BANG_EQ] = ACTIONS(240),
    [anon_sym_AMP_AMP] = ACTIONS(242),
    [anon_sym_PIPE_PIPE] = ACTIONS(244),
    [anon_sym_PLUS] = ACTIONS(246),
    [anon_sym_DASH] = ACTIONS(246),
    [anon_sym_STAR] = ACTIONS(248),
    [anon_sym_SLASH] = ACTIONS(248),
    [anon_sym_AMP] = ACTIONS(250),
    [anon_sym_PIPE] = ACTIONS(252),
    [anon_sym_CARET] = ACTIONS(252),
    [anon_sym_PERCENT] = ACTIONS(248),
    [anon_sym_LT_LT] = ACTIONS(248),
    [anon_sym_GT_GT] = ACTIONS(248),
    [anon_sym_GT_GT_GT] = ACTIONS(248),
    [anon_sym_QMARK] = ACTIONS(254),
    [anon_sym_COLON] = ACTIONS(340),
    [anon_sym_PLUS_PLUS] = ACTIONS(94),
    [anon_sym_DASH_DASH] = ACTIONS(94),
    [sym_comment] = ACTIONS(38),
  },
  [172] = {
    [ts_builtin_sym_end] = ACTIONS(456),
    [sym_decimal_integer_literal] = ACTIONS(458),
    [sym_hex_integer_literal] = ACTIONS(458),
    [sym_octal_integer_literal] = ACTIONS(458),
    [sym_binary_integer_literal] = ACTIONS(458),
    [sym_decimal_floating_point_literal] = ACTIONS(458),
    [sym_hex_floating_point_literal] = ACTIONS(460),
    [anon_sym_true] = ACTIONS(456),
    [anon_sym_false] = ACTIONS(456),
    [anon_sym_SQUOTE] = ACTIONS(456),
    [sym_string_literal] = ACTIONS(456),
    [sym_null_literal] = ACTIONS(456),
    [anon_sym_BANG] = ACTIONS(456),
    [anon_sym_TILDE] = ACTIONS(456),
    [anon_sym_PLUS_PLUS] = ACTIONS(456),
    [anon_sym_DASH_DASH] = ACTIONS(456),
    [anon_sym_AT] = ACTIONS(456),
    [anon_sym_open] = ACTIONS(456),
    [anon_sym_module] = ACTIONS(456),
    [anon_sym_package] = ACTIONS(456),
    [anon_sym_import] = ACTIONS(456),
    [sym_comment] = ACTIONS(38),
  },
  [173] = {
    [sym__expression] = STATE(193),
    [sym_assignment_expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [sym_ternary_expression] = STATE(18),
    [sym_unary_expression] = STATE(19),
    [sym_update_expression] = STATE(18),
    [anon_sym_BANG] = ACTIONS(350),
    [anon_sym_TILDE] = ACTIONS(350),
    [anon_sym_PLUS_PLUS] = ACTIONS(352),
    [anon_sym_DASH_DASH] = ACTIONS(352),
    [sym_comment] = ACTIONS(38),
  },
  [174] = {
    [sym__expression] = STATE(194),
    [sym_assignment_expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [sym_ternary_expression] = STATE(18),
    [sym_unary_expression] = STATE(19),
    [sym_update_expression] = STATE(18),
    [anon_sym_BANG] = ACTIONS(350),
    [anon_sym_TILDE] = ACTIONS(350),
    [anon_sym_PLUS_PLUS] = ACTIONS(352),
    [anon_sym_DASH_DASH] = ACTIONS(352),
    [sym_comment] = ACTIONS(38),
  },
  [175] = {
    [sym__expression] = STATE(195),
    [sym_assignment_expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [sym_ternary_expression] = STATE(18),
    [sym_unary_expression] = STATE(19),
    [sym_update_expression] = STATE(18),
    [anon_sym_BANG] = ACTIONS(350),
    [anon_sym_TILDE] = ACTIONS(350),
    [anon_sym_PLUS_PLUS] = ACTIONS(352),
    [anon_sym_DASH_DASH] = ACTIONS(352),
    [sym_comment] = ACTIONS(38),
  },
  [176] = {
    [sym__expression] = STATE(196),
    [sym_assignment_expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [sym_ternary_expression] = STATE(18),
    [sym_unary_expression] = STATE(19),
    [sym_update_expression] = STATE(18),
    [anon_sym_BANG] = ACTIONS(350),
    [anon_sym_TILDE] = ACTIONS(350),
    [anon_sym_PLUS_PLUS] = ACTIONS(352),
    [anon_sym_DASH_DASH] = ACTIONS(352),
    [sym_comment] = ACTIONS(38),
  },
  [177] = {
    [sym__expression] = STATE(197),
    [sym_assignment_expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [sym_ternary_expression] = STATE(18),
    [sym_unary_expression] = STATE(19),
    [sym_update_expression] = STATE(18),
    [anon_sym_BANG] = ACTIONS(350),
    [anon_sym_TILDE] = ACTIONS(350),
    [anon_sym_PLUS_PLUS] = ACTIONS(352),
    [anon_sym_DASH_DASH] = ACTIONS(352),
    [sym_comment] = ACTIONS(38),
  },
  [178] = {
    [sym__expression] = STATE(68),
    [sym_assignment_expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [sym_ternary_expression] = STATE(18),
    [sym_unary_expression] = STATE(19),
    [sym_update_expression] = STATE(18),
    [anon_sym_BANG] = ACTIONS(350),
    [anon_sym_TILDE] = ACTIONS(350),
    [anon_sym_PLUS_PLUS] = ACTIONS(352),
    [anon_sym_DASH_DASH] = ACTIONS(352),
    [sym_comment] = ACTIONS(38),
  },
  [179] = {
    [sym__expression] = STATE(198),
    [sym_assignment_expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [sym_ternary_expression] = STATE(18),
    [sym_unary_expression] = STATE(19),
    [sym_update_expression] = STATE(18),
    [anon_sym_BANG] = ACTIONS(168),
    [anon_sym_TILDE] = ACTIONS(168),
    [anon_sym_PLUS_PLUS] = ACTIONS(170),
    [anon_sym_DASH_DASH] = ACTIONS(170),
    [sym_comment] = ACTIONS(38),
  },
  [180] = {
    [anon_sym_AMP_AMP] = ACTIONS(368),
    [anon_sym_PIPE_PIPE] = ACTIONS(462),
    [anon_sym_QMARK] = ACTIONS(462),
    [anon_sym_RPAREN] = ACTIONS(462),
    [anon_sym_COMMA] = ACTIONS(462),
    [sym_comment] = ACTIONS(38),
  },
  [181] = {
    [anon_sym_EQ] = ACTIONS(234),
    [anon_sym_PLUS_EQ] = ACTIONS(236),
    [anon_sym_DASH_EQ] = ACTIONS(236),
    [anon_sym_STAR_EQ] = ACTIONS(236),
    [anon_sym_SLASH_EQ] = ACTIONS(236),
    [anon_sym_AMP_EQ] = ACTIONS(236),
    [anon_sym_PIPE_EQ] = ACTIONS(236),
    [anon_sym_CARET_EQ] = ACTIONS(236),
    [anon_sym_PERCENT_EQ] = ACTIONS(236),
    [anon_sym_LT_LT_EQ] = ACTIONS(236),
    [anon_sym_GT_GT_EQ] = ACTIONS(236),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(236),
    [anon_sym_GT] = ACTIONS(238),
    [anon_sym_LT] = ACTIONS(238),
    [anon_sym_EQ_EQ] = ACTIONS(240),
    [anon_sym_GT_EQ] = ACTIONS(240),
    [anon_sym_LT_EQ] = ACTIONS(240),
    [anon_sym_BANG_EQ] = ACTIONS(240),
    [anon_sym_AMP_AMP] = ACTIONS(242),
    [anon_sym_PIPE_PIPE] = ACTIONS(244),
    [anon_sym_PLUS] = ACTIONS(246),
    [anon_sym_DASH] = ACTIONS(246),
    [anon_sym_STAR] = ACTIONS(248),
    [anon_sym_SLASH] = ACTIONS(248),
    [anon_sym_AMP] = ACTIONS(250),
    [anon_sym_PIPE] = ACTIONS(252),
    [anon_sym_CARET] = ACTIONS(252),
    [anon_sym_PERCENT] = ACTIONS(248),
    [anon_sym_LT_LT] = ACTIONS(248),
    [anon_sym_GT_GT] = ACTIONS(248),
    [anon_sym_GT_GT_GT] = ACTIONS(248),
    [anon_sym_QMARK] = ACTIONS(254),
    [anon_sym_COLON] = ACTIONS(464),
    [anon_sym_PLUS_PLUS] = ACTIONS(94),
    [anon_sym_DASH_DASH] = ACTIONS(94),
    [sym_comment] = ACTIONS(38),
  },
  [182] = {
    [anon_sym_AMP_AMP] = ACTIONS(466),
    [anon_sym_PIPE_PIPE] = ACTIONS(466),
    [anon_sym_PIPE] = ACTIONS(374),
    [anon_sym_QMARK] = ACTIONS(466),
    [anon_sym_RPAREN] = ACTIONS(466),
    [anon_sym_COMMA] = ACTIONS(466),
    [sym_comment] = ACTIONS(38),
  },
  [183] = {
    [anon_sym_AMP_AMP] = ACTIONS(468),
    [anon_sym_PIPE_PIPE] = ACTIONS(468),
    [anon_sym_PIPE] = ACTIONS(470),
    [anon_sym_CARET] = ACTIONS(380),
    [anon_sym_QMARK] = ACTIONS(468),
    [anon_sym_RPAREN] = ACTIONS(468),
    [anon_sym_COMMA] = ACTIONS(468),
    [sym_comment] = ACTIONS(38),
  },
  [184] = {
    [anon_sym_AMP_AMP] = ACTIONS(472),
    [anon_sym_PIPE_PIPE] = ACTIONS(472),
    [anon_sym_PIPE] = ACTIONS(474),
    [anon_sym_CARET] = ACTIONS(472),
    [anon_sym_QMARK] = ACTIONS(472),
    [anon_sym_RPAREN] = ACTIONS(472),
    [anon_sym_COMMA] = ACTIONS(472),
    [sym_comment] = ACTIONS(38),
  },
  [185] = {
    [anon_sym_LT] = ACTIONS(476),
    [anon_sym_EQ_EQ] = ACTIONS(478),
    [anon_sym_BANG_EQ] = ACTIONS(478),
    [anon_sym_AMP_AMP] = ACTIONS(478),
    [anon_sym_PIPE_PIPE] = ACTIONS(478),
    [anon_sym_PIPE] = ACTIONS(476),
    [anon_sym_CARET] = ACTIONS(478),
    [anon_sym_LT_LT] = ACTIONS(400),
    [anon_sym_GT_GT] = ACTIONS(402),
    [anon_sym_GT_GT_GT] = ACTIONS(400),
    [anon_sym_QMARK] = ACTIONS(478),
    [anon_sym_RPAREN] = ACTIONS(478),
    [anon_sym_COMMA] = ACTIONS(478),
    [sym_comment] = ACTIONS(38),
  },
  [186] = {
    [anon_sym_LT] = ACTIONS(386),
    [anon_sym_EQ_EQ] = ACTIONS(480),
    [anon_sym_BANG_EQ] = ACTIONS(480),
    [anon_sym_AMP_AMP] = ACTIONS(482),
    [anon_sym_PIPE_PIPE] = ACTIONS(482),
    [anon_sym_PIPE] = ACTIONS(484),
    [anon_sym_CARET] = ACTIONS(482),
    [anon_sym_QMARK] = ACTIONS(482),
    [anon_sym_RPAREN] = ACTIONS(482),
    [anon_sym_COMMA] = ACTIONS(482),
    [sym_comment] = ACTIONS(38),
  },
  [187] = {
    [anon_sym_LT] = ACTIONS(486),
    [anon_sym_EQ_EQ] = ACTIONS(488),
    [anon_sym_BANG_EQ] = ACTIONS(488),
    [anon_sym_AMP_AMP] = ACTIONS(488),
    [anon_sym_PIPE_PIPE] = ACTIONS(488),
    [anon_sym_PLUS] = ACTIONS(408),
    [anon_sym_DASH] = ACTIONS(408),
    [anon_sym_PIPE] = ACTIONS(486),
    [anon_sym_CARET] = ACTIONS(488),
    [anon_sym_LT_LT] = ACTIONS(488),
    [anon_sym_GT_GT] = ACTIONS(486),
    [anon_sym_GT_GT_GT] = ACTIONS(488),
    [anon_sym_QMARK] = ACTIONS(488),
    [anon_sym_RPAREN] = ACTIONS(488),
    [anon_sym_COMMA] = ACTIONS(488),
    [sym_comment] = ACTIONS(38),
  },
  [188] = {
    [anon_sym_LT] = ACTIONS(490),
    [anon_sym_EQ_EQ] = ACTIONS(492),
    [anon_sym_BANG_EQ] = ACTIONS(492),
    [anon_sym_AMP_AMP] = ACTIONS(492),
    [anon_sym_PIPE_PIPE] = ACTIONS(492),
    [anon_sym_PLUS] = ACTIONS(492),
    [anon_sym_DASH] = ACTIONS(492),
    [anon_sym_STAR] = ACTIONS(414),
    [anon_sym_SLASH] = ACTIONS(416),
    [anon_sym_PIPE] = ACTIONS(490),
    [anon_sym_CARET] = ACTIONS(492),
    [anon_sym_PERCENT] = ACTIONS(414),
    [anon_sym_LT_LT] = ACTIONS(492),
    [anon_sym_GT_GT] = ACTIONS(490),
    [anon_sym_GT_GT_GT] = ACTIONS(492),
    [anon_sym_QMARK] = ACTIONS(492),
    [anon_sym_RPAREN] = ACTIONS(492),
    [anon_sym_COMMA] = ACTIONS(492),
    [sym_comment] = ACTIONS(38),
  },
  [189] = {
    [anon_sym_LT] = ACTIONS(494),
    [anon_sym_EQ_EQ] = ACTIONS(496),
    [anon_sym_BANG_EQ] = ACTIONS(496),
    [anon_sym_AMP_AMP] = ACTIONS(496),
    [anon_sym_PIPE_PIPE] = ACTIONS(496),
    [anon_sym_PLUS] = ACTIONS(496),
    [anon_sym_DASH] = ACTIONS(496),
    [anon_sym_STAR] = ACTIONS(496),
    [anon_sym_SLASH] = ACTIONS(494),
    [anon_sym_PIPE] = ACTIONS(494),
    [anon_sym_CARET] = ACTIONS(496),
    [anon_sym_PERCENT] = ACTIONS(496),
    [anon_sym_LT_LT] = ACTIONS(496),
    [anon_sym_GT_GT] = ACTIONS(494),
    [anon_sym_GT_GT_GT] = ACTIONS(496),
    [anon_sym_QMARK] = ACTIONS(496),
    [anon_sym_RPAREN] = ACTIONS(496),
    [anon_sym_COMMA] = ACTIONS(496),
    [sym_comment] = ACTIONS(38),
  },
  [190] = {
    [sym_package_or_type_name] = STATE(200),
    [sym_identifier] = ACTIONS(54),
    [sym_comment] = ACTIONS(38),
  },
  [191] = {
    [anon_sym_RBRACE] = ACTIONS(498),
    [anon_sym_requires] = ACTIONS(498),
    [anon_sym_exports] = ACTIONS(498),
    [anon_sym_opens] = ACTIONS(498),
    [anon_sym_uses] = ACTIONS(498),
    [anon_sym_provides] = ACTIONS(498),
    [sym_comment] = ACTIONS(38),
  },
  [192] = {
    [sym__semicolon] = STATE(202),
    [anon_sym_SEMI] = ACTIONS(70),
    [anon_sym_COMMA] = ACTIONS(500),
    [sym_comment] = ACTIONS(38),
  },
  [193] = {
    [anon_sym_EQ] = ACTIONS(436),
    [anon_sym_PLUS_EQ] = ACTIONS(438),
    [anon_sym_DASH_EQ] = ACTIONS(438),
    [anon_sym_STAR_EQ] = ACTIONS(438),
    [anon_sym_SLASH_EQ] = ACTIONS(438),
    [anon_sym_AMP_EQ] = ACTIONS(438),
    [anon_sym_PIPE_EQ] = ACTIONS(438),
    [anon_sym_CARET_EQ] = ACTIONS(438),
    [anon_sym_PERCENT_EQ] = ACTIONS(438),
    [anon_sym_LT_LT_EQ] = ACTIONS(438),
    [anon_sym_GT_GT_EQ] = ACTIONS(438),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(438),
    [anon_sym_GT] = ACTIONS(440),
    [anon_sym_LT] = ACTIONS(440),
    [anon_sym_EQ_EQ] = ACTIONS(442),
    [anon_sym_GT_EQ] = ACTIONS(442),
    [anon_sym_LT_EQ] = ACTIONS(442),
    [anon_sym_BANG_EQ] = ACTIONS(442),
    [anon_sym_AMP_AMP] = ACTIONS(502),
    [anon_sym_PIPE_PIPE] = ACTIONS(504),
    [anon_sym_PLUS] = ACTIONS(506),
    [anon_sym_DASH] = ACTIONS(506),
    [anon_sym_STAR] = ACTIONS(508),
    [anon_sym_SLASH] = ACTIONS(508),
    [anon_sym_AMP] = ACTIONS(444),
    [anon_sym_PIPE] = ACTIONS(510),
    [anon_sym_CARET] = ACTIONS(510),
    [anon_sym_PERCENT] = ACTIONS(508),
    [anon_sym_LT_LT] = ACTIONS(508),
    [anon_sym_GT_GT] = ACTIONS(508),
    [anon_sym_GT_GT_GT] = ACTIONS(508),
    [anon_sym_QMARK] = ACTIONS(512),
    [anon_sym_PLUS_PLUS] = ACTIONS(94),
    [anon_sym_DASH_DASH] = ACTIONS(94),
    [anon_sym_RPAREN] = ACTIONS(228),
    [anon_sym_COMMA] = ACTIONS(228),
    [sym_comment] = ACTIONS(38),
  },
  [194] = {
    [anon_sym_EQ] = ACTIONS(232),
    [anon_sym_PLUS_EQ] = ACTIONS(230),
    [anon_sym_DASH_EQ] = ACTIONS(230),
    [anon_sym_STAR_EQ] = ACTIONS(230),
    [anon_sym_SLASH_EQ] = ACTIONS(230),
    [anon_sym_AMP_EQ] = ACTIONS(230),
    [anon_sym_PIPE_EQ] = ACTIONS(230),
    [anon_sym_CARET_EQ] = ACTIONS(230),
    [anon_sym_PERCENT_EQ] = ACTIONS(230),
    [anon_sym_LT_LT_EQ] = ACTIONS(230),
    [anon_sym_GT_GT_EQ] = ACTIONS(230),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(230),
    [anon_sym_GT] = ACTIONS(232),
    [anon_sym_LT] = ACTIONS(232),
    [anon_sym_EQ_EQ] = ACTIONS(230),
    [anon_sym_GT_EQ] = ACTIONS(230),
    [anon_sym_LT_EQ] = ACTIONS(230),
    [anon_sym_BANG_EQ] = ACTIONS(230),
    [anon_sym_AMP_AMP] = ACTIONS(230),
    [anon_sym_PIPE_PIPE] = ACTIONS(230),
    [anon_sym_PLUS] = ACTIONS(232),
    [anon_sym_DASH] = ACTIONS(232),
    [anon_sym_STAR] = ACTIONS(508),
    [anon_sym_SLASH] = ACTIONS(508),
    [anon_sym_AMP] = ACTIONS(232),
    [anon_sym_PIPE] = ACTIONS(232),
    [anon_sym_CARET] = ACTIONS(232),
    [anon_sym_PERCENT] = ACTIONS(508),
    [anon_sym_LT_LT] = ACTIONS(508),
    [anon_sym_GT_GT] = ACTIONS(508),
    [anon_sym_GT_GT_GT] = ACTIONS(508),
    [anon_sym_QMARK] = ACTIONS(230),
    [anon_sym_PLUS_PLUS] = ACTIONS(94),
    [anon_sym_DASH_DASH] = ACTIONS(94),
    [anon_sym_RPAREN] = ACTIONS(230),
    [anon_sym_COMMA] = ACTIONS(230),
    [sym_comment] = ACTIONS(38),
  },
  [195] = {
    [anon_sym_EQ] = ACTIONS(232),
    [anon_sym_PLUS_EQ] = ACTIONS(230),
    [anon_sym_DASH_EQ] = ACTIONS(230),
    [anon_sym_STAR_EQ] = ACTIONS(230),
    [anon_sym_SLASH_EQ] = ACTIONS(230),
    [anon_sym_AMP_EQ] = ACTIONS(230),
    [anon_sym_PIPE_EQ] = ACTIONS(230),
    [anon_sym_CARET_EQ] = ACTIONS(230),
    [anon_sym_PERCENT_EQ] = ACTIONS(230),
    [anon_sym_LT_LT_EQ] = ACTIONS(230),
    [anon_sym_GT_GT_EQ] = ACTIONS(230),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(230),
    [anon_sym_GT] = ACTIONS(440),
    [anon_sym_LT] = ACTIONS(440),
    [anon_sym_EQ_EQ] = ACTIONS(442),
    [anon_sym_GT_EQ] = ACTIONS(442),
    [anon_sym_LT_EQ] = ACTIONS(442),
    [anon_sym_BANG_EQ] = ACTIONS(442),
    [anon_sym_AMP_AMP] = ACTIONS(230),
    [anon_sym_PIPE_PIPE] = ACTIONS(230),
    [anon_sym_PLUS] = ACTIONS(506),
    [anon_sym_DASH] = ACTIONS(506),
    [anon_sym_STAR] = ACTIONS(508),
    [anon_sym_SLASH] = ACTIONS(508),
    [anon_sym_AMP] = ACTIONS(232),
    [anon_sym_PIPE] = ACTIONS(232),
    [anon_sym_CARET] = ACTIONS(232),
    [anon_sym_PERCENT] = ACTIONS(508),
    [anon_sym_LT_LT] = ACTIONS(508),
    [anon_sym_GT_GT] = ACTIONS(508),
    [anon_sym_GT_GT_GT] = ACTIONS(508),
    [anon_sym_QMARK] = ACTIONS(230),
    [anon_sym_PLUS_PLUS] = ACTIONS(94),
    [anon_sym_DASH_DASH] = ACTIONS(94),
    [anon_sym_RPAREN] = ACTIONS(230),
    [anon_sym_COMMA] = ACTIONS(230),
    [sym_comment] = ACTIONS(38),
  },
  [196] = {
    [anon_sym_EQ] = ACTIONS(232),
    [anon_sym_PLUS_EQ] = ACTIONS(230),
    [anon_sym_DASH_EQ] = ACTIONS(230),
    [anon_sym_STAR_EQ] = ACTIONS(230),
    [anon_sym_SLASH_EQ] = ACTIONS(230),
    [anon_sym_AMP_EQ] = ACTIONS(230),
    [anon_sym_PIPE_EQ] = ACTIONS(230),
    [anon_sym_CARET_EQ] = ACTIONS(230),
    [anon_sym_PERCENT_EQ] = ACTIONS(230),
    [anon_sym_LT_LT_EQ] = ACTIONS(230),
    [anon_sym_GT_GT_EQ] = ACTIONS(230),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(230),
    [anon_sym_GT] = ACTIONS(440),
    [anon_sym_LT] = ACTIONS(440),
    [anon_sym_EQ_EQ] = ACTIONS(442),
    [anon_sym_GT_EQ] = ACTIONS(442),
    [anon_sym_LT_EQ] = ACTIONS(442),
    [anon_sym_BANG_EQ] = ACTIONS(442),
    [anon_sym_AMP_AMP] = ACTIONS(502),
    [anon_sym_PIPE_PIPE] = ACTIONS(230),
    [anon_sym_PLUS] = ACTIONS(506),
    [anon_sym_DASH] = ACTIONS(506),
    [anon_sym_STAR] = ACTIONS(508),
    [anon_sym_SLASH] = ACTIONS(508),
    [anon_sym_AMP] = ACTIONS(444),
    [anon_sym_PIPE] = ACTIONS(232),
    [anon_sym_CARET] = ACTIONS(232),
    [anon_sym_PERCENT] = ACTIONS(508),
    [anon_sym_LT_LT] = ACTIONS(508),
    [anon_sym_GT_GT] = ACTIONS(508),
    [anon_sym_GT_GT_GT] = ACTIONS(508),
    [anon_sym_QMARK] = ACTIONS(230),
    [anon_sym_PLUS_PLUS] = ACTIONS(94),
    [anon_sym_DASH_DASH] = ACTIONS(94),
    [anon_sym_RPAREN] = ACTIONS(230),
    [anon_sym_COMMA] = ACTIONS(230),
    [sym_comment] = ACTIONS(38),
  },
  [197] = {
    [anon_sym_EQ] = ACTIONS(232),
    [anon_sym_PLUS_EQ] = ACTIONS(230),
    [anon_sym_DASH_EQ] = ACTIONS(230),
    [anon_sym_STAR_EQ] = ACTIONS(230),
    [anon_sym_SLASH_EQ] = ACTIONS(230),
    [anon_sym_AMP_EQ] = ACTIONS(230),
    [anon_sym_PIPE_EQ] = ACTIONS(230),
    [anon_sym_CARET_EQ] = ACTIONS(230),
    [anon_sym_PERCENT_EQ] = ACTIONS(230),
    [anon_sym_LT_LT_EQ] = ACTIONS(230),
    [anon_sym_GT_GT_EQ] = ACTIONS(230),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(230),
    [anon_sym_GT] = ACTIONS(440),
    [anon_sym_LT] = ACTIONS(440),
    [anon_sym_EQ_EQ] = ACTIONS(442),
    [anon_sym_GT_EQ] = ACTIONS(442),
    [anon_sym_LT_EQ] = ACTIONS(442),
    [anon_sym_BANG_EQ] = ACTIONS(442),
    [anon_sym_AMP_AMP] = ACTIONS(230),
    [anon_sym_PIPE_PIPE] = ACTIONS(230),
    [anon_sym_PLUS] = ACTIONS(232),
    [anon_sym_DASH] = ACTIONS(232),
    [anon_sym_STAR] = ACTIONS(508),
    [anon_sym_SLASH] = ACTIONS(508),
    [anon_sym_AMP] = ACTIONS(232),
    [anon_sym_PIPE] = ACTIONS(232),
    [anon_sym_CARET] = ACTIONS(232),
    [anon_sym_PERCENT] = ACTIONS(508),
    [anon_sym_LT_LT] = ACTIONS(508),
    [anon_sym_GT_GT] = ACTIONS(508),
    [anon_sym_GT_GT_GT] = ACTIONS(508),
    [anon_sym_QMARK] = ACTIONS(230),
    [anon_sym_PLUS_PLUS] = ACTIONS(94),
    [anon_sym_DASH_DASH] = ACTIONS(94),
    [anon_sym_RPAREN] = ACTIONS(230),
    [anon_sym_COMMA] = ACTIONS(230),
    [sym_comment] = ACTIONS(38),
  },
  [198] = {
    [anon_sym_EQ] = ACTIONS(234),
    [anon_sym_PLUS_EQ] = ACTIONS(236),
    [anon_sym_DASH_EQ] = ACTIONS(236),
    [anon_sym_STAR_EQ] = ACTIONS(236),
    [anon_sym_SLASH_EQ] = ACTIONS(236),
    [anon_sym_AMP_EQ] = ACTIONS(236),
    [anon_sym_PIPE_EQ] = ACTIONS(236),
    [anon_sym_CARET_EQ] = ACTIONS(236),
    [anon_sym_PERCENT_EQ] = ACTIONS(236),
    [anon_sym_LT_LT_EQ] = ACTIONS(236),
    [anon_sym_GT_GT_EQ] = ACTIONS(236),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(236),
    [anon_sym_GT] = ACTIONS(238),
    [anon_sym_LT] = ACTIONS(238),
    [anon_sym_EQ_EQ] = ACTIONS(240),
    [anon_sym_GT_EQ] = ACTIONS(240),
    [anon_sym_LT_EQ] = ACTIONS(240),
    [anon_sym_BANG_EQ] = ACTIONS(240),
    [anon_sym_AMP_AMP] = ACTIONS(242),
    [anon_sym_PIPE_PIPE] = ACTIONS(244),
    [anon_sym_PLUS] = ACTIONS(246),
    [anon_sym_DASH] = ACTIONS(246),
    [anon_sym_STAR] = ACTIONS(248),
    [anon_sym_SLASH] = ACTIONS(248),
    [anon_sym_AMP] = ACTIONS(250),
    [anon_sym_PIPE] = ACTIONS(252),
    [anon_sym_CARET] = ACTIONS(252),
    [anon_sym_PERCENT] = ACTIONS(248),
    [anon_sym_LT_LT] = ACTIONS(248),
    [anon_sym_GT_GT] = ACTIONS(248),
    [anon_sym_GT_GT_GT] = ACTIONS(248),
    [anon_sym_QMARK] = ACTIONS(254),
    [anon_sym_COLON] = ACTIONS(514),
    [anon_sym_PLUS_PLUS] = ACTIONS(94),
    [anon_sym_DASH_DASH] = ACTIONS(94),
    [sym_comment] = ACTIONS(38),
  },
  [199] = {
    [sym_unary_expression] = STATE(129),
    [sym_conditional_expression] = STATE(204),
    [sym_conditional_or_expression] = STATE(131),
    [sym_conditional_and_expression] = STATE(132),
    [sym_inclusive_or_expression] = STATE(133),
    [sym_exclusive_or_expression] = STATE(134),
    [sym_and_expression] = STATE(135),
    [sym_relational_expression] = STATE(136),
    [sym_equality_expression] = STATE(137),
    [sym_shift_expression] = STATE(138),
    [sym_additive_expression] = STATE(139),
    [sym_multiplicative_expression] = STATE(140),
    [anon_sym_BANG] = ACTIONS(298),
    [anon_sym_TILDE] = ACTIONS(298),
    [sym_comment] = ACTIONS(38),
  },
  [200] = {
    [anon_sym_SEMI] = ACTIONS(516),
    [anon_sym_COMMA] = ACTIONS(516),
    [anon_sym_DOT] = ACTIONS(148),
    [sym_comment] = ACTIONS(38),
  },
  [201] = {
    [sym_package_or_type_name] = STATE(205),
    [sym_identifier] = ACTIONS(54),
    [sym_comment] = ACTIONS(38),
  },
  [202] = {
    [anon_sym_RBRACE] = ACTIONS(518),
    [anon_sym_requires] = ACTIONS(518),
    [anon_sym_exports] = ACTIONS(518),
    [anon_sym_opens] = ACTIONS(518),
    [anon_sym_uses] = ACTIONS(518),
    [anon_sym_provides] = ACTIONS(518),
    [sym_comment] = ACTIONS(38),
  },
  [203] = {
    [sym__expression] = STATE(206),
    [sym_assignment_expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [sym_ternary_expression] = STATE(18),
    [sym_unary_expression] = STATE(19),
    [sym_update_expression] = STATE(18),
    [anon_sym_BANG] = ACTIONS(350),
    [anon_sym_TILDE] = ACTIONS(350),
    [anon_sym_PLUS_PLUS] = ACTIONS(352),
    [anon_sym_DASH_DASH] = ACTIONS(352),
    [sym_comment] = ACTIONS(38),
  },
  [204] = {
    [anon_sym_RPAREN] = ACTIONS(520),
    [anon_sym_COMMA] = ACTIONS(520),
    [sym_comment] = ACTIONS(38),
  },
  [205] = {
    [anon_sym_SEMI] = ACTIONS(522),
    [anon_sym_COMMA] = ACTIONS(522),
    [anon_sym_DOT] = ACTIONS(148),
    [sym_comment] = ACTIONS(38),
  },
  [206] = {
    [anon_sym_EQ] = ACTIONS(342),
    [anon_sym_PLUS_EQ] = ACTIONS(340),
    [anon_sym_DASH_EQ] = ACTIONS(340),
    [anon_sym_STAR_EQ] = ACTIONS(340),
    [anon_sym_SLASH_EQ] = ACTIONS(340),
    [anon_sym_AMP_EQ] = ACTIONS(340),
    [anon_sym_PIPE_EQ] = ACTIONS(340),
    [anon_sym_CARET_EQ] = ACTIONS(340),
    [anon_sym_PERCENT_EQ] = ACTIONS(340),
    [anon_sym_LT_LT_EQ] = ACTIONS(340),
    [anon_sym_GT_GT_EQ] = ACTIONS(340),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(340),
    [anon_sym_GT] = ACTIONS(440),
    [anon_sym_LT] = ACTIONS(440),
    [anon_sym_EQ_EQ] = ACTIONS(442),
    [anon_sym_GT_EQ] = ACTIONS(442),
    [anon_sym_LT_EQ] = ACTIONS(442),
    [anon_sym_BANG_EQ] = ACTIONS(442),
    [anon_sym_AMP_AMP] = ACTIONS(502),
    [anon_sym_PIPE_PIPE] = ACTIONS(504),
    [anon_sym_PLUS] = ACTIONS(506),
    [anon_sym_DASH] = ACTIONS(506),
    [anon_sym_STAR] = ACTIONS(508),
    [anon_sym_SLASH] = ACTIONS(508),
    [anon_sym_AMP] = ACTIONS(444),
    [anon_sym_PIPE] = ACTIONS(510),
    [anon_sym_CARET] = ACTIONS(510),
    [anon_sym_PERCENT] = ACTIONS(508),
    [anon_sym_LT_LT] = ACTIONS(508),
    [anon_sym_GT_GT] = ACTIONS(508),
    [anon_sym_GT_GT_GT] = ACTIONS(508),
    [anon_sym_QMARK] = ACTIONS(512),
    [anon_sym_PLUS_PLUS] = ACTIONS(94),
    [anon_sym_DASH_DASH] = ACTIONS(94),
    [anon_sym_RPAREN] = ACTIONS(340),
    [anon_sym_COMMA] = ACTIONS(340),
    [sym_comment] = ACTIONS(38),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(),
  [5] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(),
  [7] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(), RECOVER(),
  [10] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 0),
  [12] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(2),
  [14] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
  [16] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(3),
  [18] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(4),
  [20] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(5),
  [22] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(6),
  [24] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(7),
  [26] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(8),
  [28] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(9),
  [30] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(10),
  [32] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(11),
  [34] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(12),
  [36] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(13),
  [38] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [40] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer_literal, 1),
  [42] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_floating_point_literal, 1),
  [44] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_boolean_literal, 1),
  [46] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(26),
  [48] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(27),
  [50] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [52] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [54] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(31),
  [56] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(33),
  [58] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(34),
  [60] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(36),
  [62] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [64] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [66] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 1),
  [68] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 1),
  [70] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(38),
  [72] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(40),
  [74] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(40),
  [76] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(41),
  [78] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(41),
  [80] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(42),
  [82] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(43),
  [84] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(44),
  [86] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(45),
  [88] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(42),
  [90] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(43),
  [92] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(46),
  [94] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(47),
  [96] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__expression, 1, .fragile = true),
  [98] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__expression, 1, .fragile = true),
  [100] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_binary_expression, 1),
  [102] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_binary_expression, 1),
  [104] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_declaration_repeat1, 1),
  [106] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__annotation, 1),
  [108] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [110] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 1),
  [112] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [114] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__declaration, 1),
  [116] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__declaration, 1),
  [118] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__declaration, 1),
  [120] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 1),
  [122] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(49),
  [124] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(50),
  [126] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_character_literal, 2),
  [128] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_character_literal_repeat1, 1),
  [130] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(52),
  [132] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(53),
  [134] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_unary_expression, 2),
  [136] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_unary_expression, 2),
  [138] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_update_expression, 2),
  [140] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_update_expression, 2),
  [142] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_package_or_type_name, 1),
  [144] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(54),
  [146] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_marker_annotation, 2),
  [148] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(55),
  [150] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_identifier, 1),
  [152] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(57),
  [154] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(59),
  [156] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__semicolon, 1),
  [158] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__semicolon, 1),
  [160] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__semicolon, 1),
  [162] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
  [164] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2),
  [166] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
  [168] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(69),
  [170] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(70),
  [172] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [174] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2),
  [176] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [178] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(72),
  [180] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(73),
  [182] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_declaration_repeat1, 2),
  [184] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_character_literal, 3),
  [186] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_character_literal_repeat1, 2),
  [188] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
  [190] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(6),
  [192] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(74),
  [194] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(75),
  [196] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(79),
  [198] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(80),
  [200] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(81),
  [202] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_identifier, 2),
  [204] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(82),
  [206] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(83),
  [208] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(84),
  [210] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(85),
  [212] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(86),
  [214] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(87),
  [216] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_package_declaration, 3),
  [218] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_package_declaration, 3),
  [220] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_package_declaration, 3),
  [222] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_single_type_import_declaration, 3),
  [224] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_single_type_import_declaration, 3),
  [226] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_single_type_import_declaration, 3),
  [228] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_assignment_expression, 3, .fragile = true),
  [230] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_binary_expression, 3),
  [232] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_binary_expression, 3),
  [234] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(91),
  [236] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(91),
  [238] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(92),
  [240] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(92),
  [242] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(93),
  [244] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(94),
  [246] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(95),
  [248] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(96),
  [250] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(93),
  [252] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(94),
  [254] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(97),
  [256] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(98),
  [258] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_annotation, 4),
  [260] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(101),
  [262] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(102),
  [264] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(103),
  [266] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_pair_list, 1),
  [268] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(104),
  [270] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_package_or_type_name, 3),
  [272] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(106),
  [274] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_identifier_repeat1, 2),
  [276] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(108),
  [278] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 4),
  [280] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_declaration, 4),
  [282] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 4),
  [284] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(109),
  [286] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(110),
  [288] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_declaration_repeat2, 1),
  [290] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_package_declaration, 4),
  [292] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_package_declaration, 4),
  [294] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_package_declaration, 4),
  [296] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(125),
  [298] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(127),
  [300] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_single_element_annotation, 5),
  [302] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_annotation, 5),
  [304] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(141),
  [306] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_pair_list, 2),
  [308] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(143),
  [310] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 5),
  [312] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_declaration, 5),
  [314] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 5),
  [316] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(144),
  [318] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_identifier_repeat1, 3),
  [320] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_requires_modifier, 1),
  [322] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_requires_modifier, 1),
  [324] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_name, 1),
  [326] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_directive_repeat1, 1),
  [328] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_directive_repeat1, 1),
  [330] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(145),
  [332] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(149),
  [334] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(150),
  [336] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_declaration_repeat2, 2),
  [338] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(151),
  [340] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_ternary_expression, 5, .fragile = true),
  [342] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_ternary_expression, 5, .fragile = true),
  [344] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_package_declaration, 5),
  [346] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_package_declaration, 5),
  [348] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_package_declaration, 5),
  [350] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(153),
  [352] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(154),
  [354] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value, 1),
  [356] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_multiplicative_expression, 1),
  [358] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_multiplicative_expression, 1),
  [360] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_pair, 3),
  [362] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(157),
  [364] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(158),
  [366] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_expression, 1),
  [368] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(159),
  [370] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_or_expression, 1),
  [372] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_and_expression, 1),
  [374] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(160),
  [376] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_inclusive_or_expression, 1),
  [378] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_inclusive_or_expression, 1),
  [380] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(161),
  [382] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_exclusive_or_expression, 1),
  [384] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_exclusive_or_expression, 1),
  [386] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(162),
  [388] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_equality_expression, 1),
  [390] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_and_expression, 1),
  [392] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_and_expression, 1),
  [394] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(163),
  [396] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_relational_expression, 1),
  [398] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_relational_expression, 1),
  [400] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(164),
  [402] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(164),
  [404] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_shift_expression, 1),
  [406] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_shift_expression, 1),
  [408] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(165),
  [410] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_additive_expression, 1),
  [412] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_additive_expression, 1),
  [414] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(166),
  [416] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(166),
  [418] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_element_value_pair_list_repeat1, 2),
  [420] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 6),
  [422] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_declaration, 6),
  [424] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 6),
  [426] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(168),
  [428] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_directive, 3),
  [430] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_directive_repeat1, 2),
  [432] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_directive_repeat1, 2),
  [434] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(172),
  [436] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(173),
  [438] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(173),
  [440] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(174),
  [442] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(174),
  [444] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(175),
  [446] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_array_initializer, 2),
  [448] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_element_value_pair_list_repeat1, 3),
  [450] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_name, 3),
  [452] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_directive, 4),
  [454] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(190),
  [456] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 7),
  [458] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_declaration, 7),
  [460] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 7),
  [462] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_or_expression, 3),
  [464] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(199),
  [466] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_and_expression, 3),
  [468] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_inclusive_or_expression, 3),
  [470] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_inclusive_or_expression, 3),
  [472] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_exclusive_or_expression, 3),
  [474] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_exclusive_or_expression, 3),
  [476] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_relational_expression, 3),
  [478] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_relational_expression, 3),
  [480] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_equality_expression, 3),
  [482] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_and_expression, 3),
  [484] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_and_expression, 3),
  [486] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_shift_expression, 3),
  [488] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_shift_expression, 3),
  [490] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_additive_expression, 3),
  [492] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_additive_expression, 3),
  [494] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_multiplicative_expression, 3),
  [496] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_multiplicative_expression, 3),
  [498] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_directive, 5),
  [500] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(201),
  [502] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(175),
  [504] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(176),
  [506] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(177),
  [508] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(178),
  [510] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(176),
  [512] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(179),
  [514] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(203),
  [516] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_directive_repeat2, 2),
  [518] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_directive, 6),
  [520] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_expression, 5),
  [522] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_directive_repeat2, 3),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_java() {
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
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
