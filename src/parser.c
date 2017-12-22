#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 218
#define SYMBOL_COUNT 127
#define ALIAS_COUNT 0
#define TOKEN_COUNT 77
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  sym__semicolon = 1,
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
  sym__literal = 79,
  sym_integer_literal = 80,
  sym_floating_point_literal = 81,
  sym_boolean_literal = 82,
  sym_character_literal = 83,
  sym__expression = 84,
  sym_assignment_expression = 85,
  sym_binary_expression = 86,
  sym_ternary_expression = 87,
  sym_unary_expression = 88,
  sym_update_expression = 89,
  sym__annotation = 90,
  sym_normal_annotation = 91,
  sym_marker_annotation = 92,
  sym_single_element_annotation = 93,
  sym_element_value_pair_list = 94,
  sym_element_value_pair = 95,
  sym_element_value = 96,
  sym_element_value_array_initializer = 97,
  sym_conditional_expression = 98,
  sym_conditional_or_expression = 99,
  sym_conditional_and_expression = 100,
  sym_inclusive_or_expression = 101,
  sym_exclusive_or_expression = 102,
  sym_and_expression = 103,
  sym_relational_expression = 104,
  sym_equality_expression = 105,
  sym_shift_expression = 106,
  sym_additive_expression = 107,
  sym_multiplicative_expression = 108,
  sym__declaration = 109,
  sym_module_declaration = 110,
  sym_module_identifier = 111,
  sym_module_directive = 112,
  sym_requires_modifier = 113,
  sym_module_name = 114,
  sym_package_declaration = 115,
  sym_package_or_type_name = 116,
  sym_single_type_import_declaration = 117,
  aux_sym_program_repeat1 = 118,
  aux_sym_character_literal_repeat1 = 119,
  aux_sym_element_value_pair_list_repeat1 = 120,
  aux_sym_module_declaration_repeat1 = 121,
  aux_sym_module_declaration_repeat2 = 122,
  aux_sym_module_identifier_repeat1 = 123,
  aux_sym_module_directive_repeat1 = 124,
  aux_sym_module_directive_repeat2 = 125,
  aux_sym_module_directive_repeat3 = 126,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [sym__semicolon] = "_semicolon",
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
  [aux_sym_module_directive_repeat3] = "module_directive_repeat3",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__semicolon] = {
    .visible = false,
    .named = true,
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
  [aux_sym_module_directive_repeat3] = {
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
        ADVANCE(102);
      if (lookahead == '|')
        ADVANCE(103);
      if (lookahead == '}')
        ADVANCE(106);
      if (lookahead == '~')
        ADVANCE(107);
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
      ACCEPT_TOKEN(sym__semicolon);
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
      if (lookahead == 'o')
        ADVANCE(90);
      if (lookahead == 'r')
        ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_to);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(92);
      if (lookahead == 'u')
        ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's')
        ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i')
        ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v')
        ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_transitive);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=')
        ADVANCE(104);
      if (lookahead == '|')
        ADVANCE(105);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 108:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(109);
      if (lookahead == '\"')
        ADVANCE(110);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '+')
        ADVANCE(113);
      if (lookahead == '-')
        ADVANCE(114);
      if (lookahead == '.')
        ADVANCE(115);
      if (lookahead == '/')
        ADVANCE(123);
      if (lookahead == '0')
        ADVANCE(124);
      if (lookahead == '@')
        ADVANCE(70);
      if (lookahead == 'f')
        ADVANCE(131);
      if (lookahead == 'i')
        ADVANCE(136);
      if (lookahead == 'm')
        ADVANCE(142);
      if (lookahead == 'n')
        ADVANCE(148);
      if (lookahead == 'o')
        ADVANCE(152);
      if (lookahead == 'p')
        ADVANCE(156);
      if (lookahead == 't')
        ADVANCE(163);
      if (lookahead == '~')
        ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(108);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(130);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 110:
      if (lookahead == '\"')
        ADVANCE(111);
      if (lookahead == '\\')
        ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 112:
      if (lookahead == '\n')
        ADVANCE(110);
      if (lookahead != 0)
        ADVANCE(110);
      END_STATE();
    case 113:
      if (lookahead == '+')
        ADVANCE(16);
      END_STATE();
    case 114:
      if (lookahead == '-')
        ADVANCE(20);
      END_STATE();
    case 115:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(116);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(117);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(118);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(116);
      END_STATE();
    case 117:
      if (lookahead == '_')
        ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(116);
      END_STATE();
    case 118:
      if (lookahead == '+')
        ADVANCE(119);
      if (lookahead == '-')
        ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(120);
      END_STATE();
    case 119:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(120);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(121);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f')
        ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(120);
      END_STATE();
    case 121:
      if (lookahead == '_')
        ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(120);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      END_STATE();
    case 123:
      if (lookahead == '*')
        ADVANCE(24);
      if (lookahead == '/')
        ADVANCE(27);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_decimal_integer_literal);
      if (lookahead == '.')
        ADVANCE(125);
      if (lookahead == 'B')
        ADVANCE(126);
      if (lookahead == 'O')
        ADVANCE(32);
      if (lookahead == 'X')
        ADVANCE(128);
      if (lookahead == '_')
        ADVANCE(129);
      if (lookahead == 'b')
        ADVANCE(126);
      if (lookahead == 'o')
        ADVANCE(32);
      if (lookahead == 'x')
        ADVANCE(128);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(118);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(130);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(118);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(116);
      END_STATE();
    case 126:
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(127);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_binary_integer_literal);
      if (lookahead == '_')
        ADVANCE(126);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(127);
      END_STATE();
    case 128:
      if (lookahead == '.')
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(49);
      END_STATE();
    case 129:
      if (lookahead == '_')
        ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(130);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_decimal_integer_literal);
      if (lookahead == '.')
        ADVANCE(125);
      if (lookahead == '_')
        ADVANCE(129);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(118);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(130);
      END_STATE();
    case 131:
      if (lookahead == 'a')
        ADVANCE(132);
      END_STATE();
    case 132:
      if (lookahead == 'l')
        ADVANCE(133);
      END_STATE();
    case 133:
      if (lookahead == 's')
        ADVANCE(134);
      END_STATE();
    case 134:
      if (lookahead == 'e')
        ADVANCE(135);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 136:
      if (lookahead == 'm')
        ADVANCE(137);
      END_STATE();
    case 137:
      if (lookahead == 'p')
        ADVANCE(138);
      END_STATE();
    case 138:
      if (lookahead == 'o')
        ADVANCE(139);
      END_STATE();
    case 139:
      if (lookahead == 'r')
        ADVANCE(140);
      END_STATE();
    case 140:
      if (lookahead == 't')
        ADVANCE(141);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 142:
      if (lookahead == 'o')
        ADVANCE(143);
      END_STATE();
    case 143:
      if (lookahead == 'd')
        ADVANCE(144);
      END_STATE();
    case 144:
      if (lookahead == 'u')
        ADVANCE(145);
      END_STATE();
    case 145:
      if (lookahead == 'l')
        ADVANCE(146);
      END_STATE();
    case 146:
      if (lookahead == 'e')
        ADVANCE(147);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 148:
      if (lookahead == 'u')
        ADVANCE(149);
      END_STATE();
    case 149:
      if (lookahead == 'l')
        ADVANCE(150);
      END_STATE();
    case 150:
      if (lookahead == 'l')
        ADVANCE(151);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_null_literal);
      END_STATE();
    case 152:
      if (lookahead == 'p')
        ADVANCE(153);
      END_STATE();
    case 153:
      if (lookahead == 'e')
        ADVANCE(154);
      END_STATE();
    case 154:
      if (lookahead == 'n')
        ADVANCE(155);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_open);
      END_STATE();
    case 156:
      if (lookahead == 'a')
        ADVANCE(157);
      END_STATE();
    case 157:
      if (lookahead == 'c')
        ADVANCE(158);
      END_STATE();
    case 158:
      if (lookahead == 'k')
        ADVANCE(159);
      END_STATE();
    case 159:
      if (lookahead == 'a')
        ADVANCE(160);
      END_STATE();
    case 160:
      if (lookahead == 'g')
        ADVANCE(161);
      END_STATE();
    case 161:
      if (lookahead == 'e')
        ADVANCE(162);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 163:
      if (lookahead == 'r')
        ADVANCE(164);
      END_STATE();
    case 164:
      if (lookahead == 'u')
        ADVANCE(165);
      END_STATE();
    case 165:
      if (lookahead == 'e')
        ADVANCE(166);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == ',')
        ADVANCE(18);
      if (lookahead == '.')
        ADVANCE(22);
      if (lookahead == '/')
        ADVANCE(123);
      if (lookahead == ';')
        ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 168:
      if (lookahead == '\n')
        SKIP(168);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == '/')
        ADVANCE(169);
      if (lookahead == '\\')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(173);
      if (lookahead != 0)
        ADVANCE(173);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH);
      if (lookahead == '*')
        ADVANCE(24);
      if (lookahead == '/')
        ADVANCE(27);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH);
      if (lookahead == '\n')
        ADVANCE(171);
      if (lookahead != 0)
        ADVANCE(172);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH);
      END_STATE();
    case 174:
      if (lookahead == '!')
        ADVANCE(175);
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
        ADVANCE(176);
      if (lookahead == 'm')
        ADVANCE(142);
      if (lookahead == 'o')
        ADVANCE(183);
      if (lookahead == 'p')
        ADVANCE(188);
      if (lookahead == 'r')
        ADVANCE(196);
      if (lookahead == 'u')
        ADVANCE(204);
      if (lookahead == 'w')
        ADVANCE(208);
      if (lookahead == '{')
        ADVANCE(102);
      if (lookahead == '|')
        ADVANCE(103);
      if (lookahead == '}')
        ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(174);
      END_STATE();
    case 175:
      if (lookahead == '=')
        ADVANCE(3);
      END_STATE();
    case 176:
      if (lookahead == 'x')
        ADVANCE(177);
      END_STATE();
    case 177:
      if (lookahead == 'p')
        ADVANCE(178);
      END_STATE();
    case 178:
      if (lookahead == 'o')
        ADVANCE(179);
      END_STATE();
    case 179:
      if (lookahead == 'r')
        ADVANCE(180);
      END_STATE();
    case 180:
      if (lookahead == 't')
        ADVANCE(181);
      END_STATE();
    case 181:
      if (lookahead == 's')
        ADVANCE(182);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_exports);
      END_STATE();
    case 183:
      if (lookahead == 'p')
        ADVANCE(184);
      END_STATE();
    case 184:
      if (lookahead == 'e')
        ADVANCE(185);
      END_STATE();
    case 185:
      if (lookahead == 'n')
        ADVANCE(186);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_open);
      if (lookahead == 's')
        ADVANCE(187);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_opens);
      END_STATE();
    case 188:
      if (lookahead == 'a')
        ADVANCE(157);
      if (lookahead == 'r')
        ADVANCE(189);
      END_STATE();
    case 189:
      if (lookahead == 'o')
        ADVANCE(190);
      END_STATE();
    case 190:
      if (lookahead == 'v')
        ADVANCE(191);
      END_STATE();
    case 191:
      if (lookahead == 'i')
        ADVANCE(192);
      END_STATE();
    case 192:
      if (lookahead == 'd')
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
      ACCEPT_TOKEN(anon_sym_provides);
      END_STATE();
    case 196:
      if (lookahead == 'e')
        ADVANCE(197);
      END_STATE();
    case 197:
      if (lookahead == 'q')
        ADVANCE(198);
      END_STATE();
    case 198:
      if (lookahead == 'u')
        ADVANCE(199);
      END_STATE();
    case 199:
      if (lookahead == 'i')
        ADVANCE(200);
      END_STATE();
    case 200:
      if (lookahead == 'r')
        ADVANCE(201);
      END_STATE();
    case 201:
      if (lookahead == 'e')
        ADVANCE(202);
      END_STATE();
    case 202:
      if (lookahead == 's')
        ADVANCE(203);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_requires);
      END_STATE();
    case 204:
      if (lookahead == 's')
        ADVANCE(205);
      END_STATE();
    case 205:
      if (lookahead == 'e')
        ADVANCE(206);
      END_STATE();
    case 206:
      if (lookahead == 's')
        ADVANCE(207);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_uses);
      END_STATE();
    case 208:
      if (lookahead == 'i')
        ADVANCE(209);
      END_STATE();
    case 209:
      if (lookahead == 't')
        ADVANCE(210);
      END_STATE();
    case 210:
      if (lookahead == 'h')
        ADVANCE(211);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\"')
        ADVANCE(110);
      if (lookahead == '\'')
        ADVANCE(10);
      if (lookahead == ')')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(115);
      if (lookahead == '/')
        ADVANCE(123);
      if (lookahead == '0')
        ADVANCE(213);
      if (lookahead == 'f')
        ADVANCE(74);
      if (lookahead == 'n')
        ADVANCE(79);
      if (lookahead == 't')
        ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(212);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_decimal_integer_literal);
      if (lookahead == '.')
        ADVANCE(125);
      if (lookahead == 'B')
        ADVANCE(214);
      if (lookahead == 'O')
        ADVANCE(30);
      if (lookahead == 'X')
        ADVANCE(35);
      if (lookahead == '_')
        ADVANCE(129);
      if (lookahead == 'b')
        ADVANCE(214);
      if (lookahead == 'o')
        ADVANCE(30);
      if (lookahead == 'x')
        ADVANCE(35);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(216);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(215);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_binary_integer_literal);
      if (lookahead == '_')
        ADVANCE(126);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(215);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '+')
        ADVANCE(119);
      if (lookahead == '-')
        ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(121);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f')
        ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_decimal_integer_literal);
      if (lookahead == '.')
        ADVANCE(125);
      if (lookahead == '_')
        ADVANCE(129);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(216);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u')
        ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
        ADVANCE(123);
      if (lookahead == 's')
        ADVANCE(83);
      if (lookahead == 't')
        ADVANCE(223);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a')
        ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ',')
        ADVANCE(18);
      if (lookahead == '.')
        ADVANCE(22);
      if (lookahead == '/')
        ADVANCE(123);
      if (lookahead == ';')
        ADVANCE(56);
      if (lookahead == 't')
        ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(34);
      END_STATE();
    case 227:
      if (lookahead == '!')
        ADVANCE(175);
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
        ADVANCE(105);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 108},
  [2] = {.lex_state = 167},
  [3] = {.lex_state = 167},
  [4] = {.lex_state = 167},
  [5] = {.lex_state = 168},
  [6] = {.lex_state = 167},
  [7] = {.lex_state = 108},
  [8] = {.lex_state = 108},
  [9] = {.lex_state = 167},
  [10] = {.lex_state = 108},
  [11] = {.lex_state = 167},
  [12] = {.lex_state = 167},
  [13] = {.lex_state = 167},
  [14] = {.lex_state = 108},
  [15] = {.lex_state = 108},
  [16] = {.lex_state = 167},
  [17] = {.lex_state = 174},
  [18] = {.lex_state = 174},
  [19] = {.lex_state = 174},
  [20] = {.lex_state = 108},
  [21] = {.lex_state = 174},
  [22] = {.lex_state = 108},
  [23] = {.lex_state = 108},
  [24] = {.lex_state = 108},
  [25] = {.lex_state = 108},
  [26] = {.lex_state = 167},
  [27] = {.lex_state = 168},
  [28] = {.lex_state = 168},
  [29] = {.lex_state = 174},
  [30] = {.lex_state = 174},
  [31] = {.lex_state = 174},
  [32] = {.lex_state = 174},
  [33] = {.lex_state = 167},
  [34] = {.lex_state = 174},
  [35] = {.lex_state = 174},
  [36] = {.lex_state = 167},
  [37] = {.lex_state = 167},
  [38] = {.lex_state = 108},
  [39] = {.lex_state = 108},
  [40] = {.lex_state = 108},
  [41] = {.lex_state = 108},
  [42] = {.lex_state = 108},
  [43] = {.lex_state = 108},
  [44] = {.lex_state = 108},
  [45] = {.lex_state = 108},
  [46] = {.lex_state = 174},
  [47] = {.lex_state = 108},
  [48] = {.lex_state = 108},
  [49] = {.lex_state = 167},
  [50] = {.lex_state = 108},
  [51] = {.lex_state = 167},
  [52] = {.lex_state = 168},
  [53] = {.lex_state = 212},
  [54] = {.lex_state = 167},
  [55] = {.lex_state = 174},
  [56] = {.lex_state = 167},
  [57] = {.lex_state = 174},
  [58] = {.lex_state = 174},
  [59] = {.lex_state = 108},
  [60] = {.lex_state = 167},
  [61] = {.lex_state = 108},
  [62] = {.lex_state = 174},
  [63] = {.lex_state = 174},
  [64] = {.lex_state = 174},
  [65] = {.lex_state = 174},
  [66] = {.lex_state = 174},
  [67] = {.lex_state = 174},
  [68] = {.lex_state = 108},
  [69] = {.lex_state = 108},
  [70] = {.lex_state = 174},
  [71] = {.lex_state = 167},
  [72] = {.lex_state = 167},
  [73] = {.lex_state = 174},
  [74] = {.lex_state = 174},
  [75] = {.lex_state = 108},
  [76] = {.lex_state = 108},
  [77] = {.lex_state = 167},
  [78] = {.lex_state = 174},
  [79] = {.lex_state = 174},
  [80] = {.lex_state = 174},
  [81] = {.lex_state = 167},
  [82] = {.lex_state = 108},
  [83] = {.lex_state = 222},
  [84] = {.lex_state = 167},
  [85] = {.lex_state = 167},
  [86] = {.lex_state = 167},
  [87] = {.lex_state = 174},
  [88] = {.lex_state = 174},
  [89] = {.lex_state = 108},
  [90] = {.lex_state = 108},
  [91] = {.lex_state = 108},
  [92] = {.lex_state = 108},
  [93] = {.lex_state = 108},
  [94] = {.lex_state = 108},
  [95] = {.lex_state = 108},
  [96] = {.lex_state = 108},
  [97] = {.lex_state = 108},
  [98] = {.lex_state = 174},
  [99] = {.lex_state = 167},
  [100] = {.lex_state = 108},
  [101] = {.lex_state = 174},
  [102] = {.lex_state = 174},
  [103] = {.lex_state = 167},
  [104] = {.lex_state = 167},
  [105] = {.lex_state = 108},
  [106] = {.lex_state = 174},
  [107] = {.lex_state = 174},
  [108] = {.lex_state = 222},
  [109] = {.lex_state = 167},
  [110] = {.lex_state = 222},
  [111] = {.lex_state = 167},
  [112] = {.lex_state = 222},
  [113] = {.lex_state = 225},
  [114] = {.lex_state = 225},
  [115] = {.lex_state = 167},
  [116] = {.lex_state = 174},
  [117] = {.lex_state = 174},
  [118] = {.lex_state = 174},
  [119] = {.lex_state = 174},
  [120] = {.lex_state = 174},
  [121] = {.lex_state = 174},
  [122] = {.lex_state = 174},
  [123] = {.lex_state = 174},
  [124] = {.lex_state = 174},
  [125] = {.lex_state = 174},
  [126] = {.lex_state = 108},
  [127] = {.lex_state = 108},
  [128] = {.lex_state = 167},
  [129] = {.lex_state = 227},
  [130] = {.lex_state = 167},
  [131] = {.lex_state = 174},
  [132] = {.lex_state = 174},
  [133] = {.lex_state = 174},
  [134] = {.lex_state = 174},
  [135] = {.lex_state = 174},
  [136] = {.lex_state = 174},
  [137] = {.lex_state = 174},
  [138] = {.lex_state = 174},
  [139] = {.lex_state = 227},
  [140] = {.lex_state = 227},
  [141] = {.lex_state = 174},
  [142] = {.lex_state = 167},
  [143] = {.lex_state = 167},
  [144] = {.lex_state = 108},
  [145] = {.lex_state = 174},
  [146] = {.lex_state = 167},
  [147] = {.lex_state = 222},
  [148] = {.lex_state = 167},
  [149] = {.lex_state = 167},
  [150] = {.lex_state = 167},
  [151] = {.lex_state = 167},
  [152] = {.lex_state = 167},
  [153] = {.lex_state = 167},
  [154] = {.lex_state = 167},
  [155] = {.lex_state = 108},
  [156] = {.lex_state = 174},
  [157] = {.lex_state = 108},
  [158] = {.lex_state = 108},
  [159] = {.lex_state = 174},
  [160] = {.lex_state = 167},
  [161] = {.lex_state = 108},
  [162] = {.lex_state = 108},
  [163] = {.lex_state = 108},
  [164] = {.lex_state = 108},
  [165] = {.lex_state = 108},
  [166] = {.lex_state = 108},
  [167] = {.lex_state = 108},
  [168] = {.lex_state = 108},
  [169] = {.lex_state = 108},
  [170] = {.lex_state = 108},
  [171] = {.lex_state = 167},
  [172] = {.lex_state = 167},
  [173] = {.lex_state = 174},
  [174] = {.lex_state = 167},
  [175] = {.lex_state = 225},
  [176] = {.lex_state = 167},
  [177] = {.lex_state = 167},
  [178] = {.lex_state = 167},
  [179] = {.lex_state = 167},
  [180] = {.lex_state = 174},
  [181] = {.lex_state = 108},
  [182] = {.lex_state = 108},
  [183] = {.lex_state = 108},
  [184] = {.lex_state = 108},
  [185] = {.lex_state = 108},
  [186] = {.lex_state = 108},
  [187] = {.lex_state = 108},
  [188] = {.lex_state = 108},
  [189] = {.lex_state = 174},
  [190] = {.lex_state = 174},
  [191] = {.lex_state = 174},
  [192] = {.lex_state = 174},
  [193] = {.lex_state = 174},
  [194] = {.lex_state = 174},
  [195] = {.lex_state = 174},
  [196] = {.lex_state = 227},
  [197] = {.lex_state = 227},
  [198] = {.lex_state = 227},
  [199] = {.lex_state = 174},
  [200] = {.lex_state = 167},
  [201] = {.lex_state = 167},
  [202] = {.lex_state = 167},
  [203] = {.lex_state = 167},
  [204] = {.lex_state = 174},
  [205] = {.lex_state = 174},
  [206] = {.lex_state = 174},
  [207] = {.lex_state = 174},
  [208] = {.lex_state = 174},
  [209] = {.lex_state = 174},
  [210] = {.lex_state = 108},
  [211] = {.lex_state = 174},
  [212] = {.lex_state = 167},
  [213] = {.lex_state = 167},
  [214] = {.lex_state = 108},
  [215] = {.lex_state = 167},
  [216] = {.lex_state = 167},
  [217] = {.lex_state = 174},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__semicolon] = ACTIONS(1),
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
    [anon_sym_to] = ACTIONS(3),
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
    [sym__semicolon] = ACTIONS(40),
    [anon_sym_RPAREN] = ACTIONS(40),
    [anon_sym_COMMA] = ACTIONS(40),
    [sym_comment] = ACTIONS(38),
  },
  [3] = {
    [sym__semicolon] = ACTIONS(42),
    [anon_sym_RPAREN] = ACTIONS(42),
    [anon_sym_COMMA] = ACTIONS(42),
    [sym_comment] = ACTIONS(38),
  },
  [4] = {
    [sym__semicolon] = ACTIONS(44),
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
    [sym__semicolon] = ACTIONS(52),
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
    [sym__semicolon] = ACTIONS(70),
    [sym_comment] = ACTIONS(38),
  },
  [17] = {
    [sym__semicolon] = ACTIONS(70),
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
    [sym__semicolon] = ACTIONS(96),
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
    [sym__semicolon] = ACTIONS(100),
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
    [sym__statement] = STATE(47),
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
    [sym__annotation] = STATE(50),
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
    [sym__semicolon] = ACTIONS(126),
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
    [sym__semicolon] = ACTIONS(134),
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
    [sym__semicolon] = ACTIONS(138),
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
    [sym__semicolon] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(142),
    [anon_sym_RPAREN] = ACTIONS(142),
    [anon_sym_AT] = ACTIONS(142),
    [anon_sym_COMMA] = ACTIONS(142),
    [anon_sym_open] = ACTIONS(142),
    [anon_sym_module] = ACTIONS(142),
    [anon_sym_DOT] = ACTIONS(142),
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
    [sym_module_identifier] = STATE(55),
    [sym_identifier] = ACTIONS(58),
    [sym_comment] = ACTIONS(38),
  },
  [34] = {
    [aux_sym_module_identifier_repeat1] = STATE(57),
    [anon_sym_LBRACE] = ACTIONS(150),
    [anon_sym_DOT] = ACTIONS(152),
    [sym_comment] = ACTIONS(38),
  },
  [35] = {
    [anon_sym_LBRACE] = ACTIONS(154),
    [sym_comment] = ACTIONS(38),
  },
  [36] = {
    [aux_sym_module_identifier_repeat1] = STATE(60),
    [sym__semicolon] = ACTIONS(156),
    [anon_sym_DOT] = ACTIONS(152),
    [sym_comment] = ACTIONS(38),
  },
  [37] = {
    [sym__semicolon] = ACTIONS(158),
    [anon_sym_DOT] = ACTIONS(148),
    [sym_comment] = ACTIONS(38),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(160),
    [sym_decimal_integer_literal] = ACTIONS(162),
    [sym_hex_integer_literal] = ACTIONS(162),
    [sym_octal_integer_literal] = ACTIONS(162),
    [sym_binary_integer_literal] = ACTIONS(162),
    [sym_decimal_floating_point_literal] = ACTIONS(162),
    [sym_hex_floating_point_literal] = ACTIONS(164),
    [anon_sym_true] = ACTIONS(160),
    [anon_sym_false] = ACTIONS(160),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [sym_string_literal] = ACTIONS(160),
    [sym_null_literal] = ACTIONS(160),
    [anon_sym_BANG] = ACTIONS(160),
    [anon_sym_TILDE] = ACTIONS(160),
    [anon_sym_PLUS_PLUS] = ACTIONS(160),
    [anon_sym_DASH_DASH] = ACTIONS(160),
    [anon_sym_AT] = ACTIONS(160),
    [anon_sym_open] = ACTIONS(160),
    [anon_sym_module] = ACTIONS(160),
    [anon_sym_package] = ACTIONS(160),
    [anon_sym_import] = ACTIONS(160),
    [sym_comment] = ACTIONS(38),
  },
  [39] = {
    [sym__expression] = STATE(62),
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
    [sym__expression] = STATE(70),
    [sym_assignment_expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [sym_ternary_expression] = STATE(18),
    [sym_unary_expression] = STATE(19),
    [sym_update_expression] = STATE(18),
    [anon_sym_BANG] = ACTIONS(166),
    [anon_sym_TILDE] = ACTIONS(166),
    [anon_sym_PLUS_PLUS] = ACTIONS(168),
    [anon_sym_DASH_DASH] = ACTIONS(168),
    [sym_comment] = ACTIONS(38),
  },
  [46] = {
    [sym__semicolon] = ACTIONS(138),
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
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(170),
    [sym_decimal_integer_literal] = ACTIONS(172),
    [sym_hex_integer_literal] = ACTIONS(172),
    [sym_octal_integer_literal] = ACTIONS(172),
    [sym_binary_integer_literal] = ACTIONS(172),
    [sym_decimal_floating_point_literal] = ACTIONS(172),
    [sym_hex_floating_point_literal] = ACTIONS(174),
    [anon_sym_true] = ACTIONS(170),
    [anon_sym_false] = ACTIONS(170),
    [anon_sym_SQUOTE] = ACTIONS(170),
    [sym_string_literal] = ACTIONS(170),
    [sym_null_literal] = ACTIONS(170),
    [anon_sym_BANG] = ACTIONS(170),
    [anon_sym_TILDE] = ACTIONS(170),
    [anon_sym_PLUS_PLUS] = ACTIONS(170),
    [anon_sym_DASH_DASH] = ACTIONS(170),
    [anon_sym_AT] = ACTIONS(170),
    [anon_sym_open] = ACTIONS(170),
    [anon_sym_module] = ACTIONS(170),
    [anon_sym_package] = ACTIONS(170),
    [anon_sym_import] = ACTIONS(170),
    [sym_comment] = ACTIONS(38),
  },
  [48] = {
    [anon_sym_module] = ACTIONS(176),
    [sym_comment] = ACTIONS(38),
  },
  [49] = {
    [sym_identifier] = ACTIONS(178),
    [sym_comment] = ACTIONS(38),
  },
  [50] = {
    [anon_sym_AT] = ACTIONS(180),
    [anon_sym_open] = ACTIONS(180),
    [anon_sym_module] = ACTIONS(180),
    [anon_sym_package] = ACTIONS(180),
    [sym_comment] = ACTIONS(38),
  },
  [51] = {
    [sym__semicolon] = ACTIONS(182),
    [anon_sym_RPAREN] = ACTIONS(182),
    [anon_sym_COMMA] = ACTIONS(182),
    [sym_comment] = ACTIONS(38),
  },
  [52] = {
    [anon_sym_SQUOTE] = ACTIONS(184),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(184),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH] = ACTIONS(184),
    [sym_comment] = ACTIONS(50),
  },
  [53] = {
    [sym__literal] = STATE(75),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [sym_element_value_pair_list] = STATE(76),
    [sym_element_value_pair] = STATE(77),
    [sym_decimal_integer_literal] = ACTIONS(12),
    [sym_hex_integer_literal] = ACTIONS(12),
    [sym_octal_integer_literal] = ACTIONS(12),
    [sym_binary_integer_literal] = ACTIONS(12),
    [sym_decimal_floating_point_literal] = ACTIONS(14),
    [sym_hex_floating_point_literal] = ACTIONS(16),
    [anon_sym_true] = ACTIONS(186),
    [anon_sym_false] = ACTIONS(186),
    [anon_sym_SQUOTE] = ACTIONS(20),
    [sym_string_literal] = ACTIONS(22),
    [sym_null_literal] = ACTIONS(188),
    [anon_sym_RPAREN] = ACTIONS(190),
    [sym_identifier] = ACTIONS(192),
    [sym_comment] = ACTIONS(38),
  },
  [54] = {
    [sym_identifier] = ACTIONS(194),
    [sym_comment] = ACTIONS(38),
  },
  [55] = {
    [anon_sym_LBRACE] = ACTIONS(196),
    [sym_comment] = ACTIONS(38),
  },
  [56] = {
    [sym_identifier] = ACTIONS(198),
    [sym_comment] = ACTIONS(38),
  },
  [57] = {
    [anon_sym_LBRACE] = ACTIONS(200),
    [anon_sym_DOT] = ACTIONS(202),
    [sym_comment] = ACTIONS(38),
  },
  [58] = {
    [sym_module_directive] = STATE(87),
    [aux_sym_module_declaration_repeat2] = STATE(88),
    [anon_sym_RBRACE] = ACTIONS(204),
    [anon_sym_requires] = ACTIONS(206),
    [anon_sym_exports] = ACTIONS(208),
    [anon_sym_opens] = ACTIONS(208),
    [anon_sym_uses] = ACTIONS(210),
    [anon_sym_provides] = ACTIONS(212),
    [sym_comment] = ACTIONS(38),
  },
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(214),
    [sym_decimal_integer_literal] = ACTIONS(216),
    [sym_hex_integer_literal] = ACTIONS(216),
    [sym_octal_integer_literal] = ACTIONS(216),
    [sym_binary_integer_literal] = ACTIONS(216),
    [sym_decimal_floating_point_literal] = ACTIONS(216),
    [sym_hex_floating_point_literal] = ACTIONS(218),
    [anon_sym_true] = ACTIONS(214),
    [anon_sym_false] = ACTIONS(214),
    [anon_sym_SQUOTE] = ACTIONS(214),
    [sym_string_literal] = ACTIONS(214),
    [sym_null_literal] = ACTIONS(214),
    [anon_sym_BANG] = ACTIONS(214),
    [anon_sym_TILDE] = ACTIONS(214),
    [anon_sym_PLUS_PLUS] = ACTIONS(214),
    [anon_sym_DASH_DASH] = ACTIONS(214),
    [anon_sym_AT] = ACTIONS(214),
    [anon_sym_open] = ACTIONS(214),
    [anon_sym_module] = ACTIONS(214),
    [anon_sym_package] = ACTIONS(214),
    [anon_sym_import] = ACTIONS(214),
    [sym_comment] = ACTIONS(38),
  },
  [60] = {
    [sym__semicolon] = ACTIONS(220),
    [anon_sym_DOT] = ACTIONS(202),
    [sym_comment] = ACTIONS(38),
  },
  [61] = {
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
  [62] = {
    [sym__semicolon] = ACTIONS(228),
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
  [63] = {
    [sym__semicolon] = ACTIONS(230),
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
  [64] = {
    [sym__semicolon] = ACTIONS(230),
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
  [65] = {
    [sym__semicolon] = ACTIONS(230),
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
  [66] = {
    [sym__semicolon] = ACTIONS(230),
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
  [67] = {
    [sym__semicolon] = ACTIONS(230),
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
  [68] = {
    [sym__expression] = STATE(29),
    [sym_assignment_expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [sym_ternary_expression] = STATE(18),
    [sym_unary_expression] = STATE(19),
    [sym_update_expression] = STATE(18),
    [anon_sym_BANG] = ACTIONS(166),
    [anon_sym_TILDE] = ACTIONS(166),
    [anon_sym_PLUS_PLUS] = ACTIONS(168),
    [anon_sym_DASH_DASH] = ACTIONS(168),
    [sym_comment] = ACTIONS(38),
  },
  [69] = {
    [sym__expression] = STATE(30),
    [sym_assignment_expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [sym_ternary_expression] = STATE(18),
    [sym_unary_expression] = STATE(19),
    [sym_update_expression] = STATE(18),
    [anon_sym_BANG] = ACTIONS(166),
    [anon_sym_TILDE] = ACTIONS(166),
    [anon_sym_PLUS_PLUS] = ACTIONS(168),
    [anon_sym_DASH_DASH] = ACTIONS(168),
    [sym_comment] = ACTIONS(38),
  },
  [70] = {
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
  [71] = {
    [sym_module_identifier] = STATE(98),
    [sym_identifier] = ACTIONS(58),
    [sym_comment] = ACTIONS(38),
  },
  [72] = {
    [aux_sym_module_identifier_repeat1] = STATE(99),
    [sym__semicolon] = ACTIONS(220),
    [anon_sym_DOT] = ACTIONS(152),
    [sym_comment] = ACTIONS(38),
  },
  [73] = {
    [anon_sym_RPAREN] = ACTIONS(258),
    [anon_sym_AT] = ACTIONS(258),
    [anon_sym_COMMA] = ACTIONS(258),
    [anon_sym_open] = ACTIONS(258),
    [anon_sym_module] = ACTIONS(258),
    [anon_sym_package] = ACTIONS(258),
    [sym_comment] = ACTIONS(38),
  },
  [74] = {
    [anon_sym_EQ] = ACTIONS(260),
    [anon_sym_RPAREN] = ACTIONS(262),
    [sym_comment] = ACTIONS(38),
  },
  [75] = {
    [anon_sym_RPAREN] = ACTIONS(262),
    [sym_comment] = ACTIONS(38),
  },
  [76] = {
    [anon_sym_RPAREN] = ACTIONS(264),
    [sym_comment] = ACTIONS(38),
  },
  [77] = {
    [aux_sym_element_value_pair_list_repeat1] = STATE(104),
    [anon_sym_RPAREN] = ACTIONS(266),
    [anon_sym_COMMA] = ACTIONS(268),
    [sym_comment] = ACTIONS(38),
  },
  [78] = {
    [sym__semicolon] = ACTIONS(270),
    [anon_sym_LPAREN] = ACTIONS(270),
    [anon_sym_RPAREN] = ACTIONS(270),
    [anon_sym_AT] = ACTIONS(270),
    [anon_sym_COMMA] = ACTIONS(270),
    [anon_sym_open] = ACTIONS(270),
    [anon_sym_module] = ACTIONS(270),
    [anon_sym_DOT] = ACTIONS(270),
    [anon_sym_with] = ACTIONS(270),
    [anon_sym_package] = ACTIONS(270),
    [sym_comment] = ACTIONS(38),
  },
  [79] = {
    [sym_module_directive] = STATE(87),
    [aux_sym_module_declaration_repeat2] = STATE(106),
    [anon_sym_RBRACE] = ACTIONS(272),
    [anon_sym_requires] = ACTIONS(206),
    [anon_sym_exports] = ACTIONS(208),
    [anon_sym_opens] = ACTIONS(208),
    [anon_sym_uses] = ACTIONS(210),
    [anon_sym_provides] = ACTIONS(212),
    [sym_comment] = ACTIONS(38),
  },
  [80] = {
    [sym__semicolon] = ACTIONS(274),
    [anon_sym_LBRACE] = ACTIONS(274),
    [anon_sym_DOT] = ACTIONS(274),
    [sym_comment] = ACTIONS(38),
  },
  [81] = {
    [sym_identifier] = ACTIONS(276),
    [sym_comment] = ACTIONS(38),
  },
  [82] = {
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
  [83] = {
    [sym_requires_modifier] = STATE(110),
    [sym_module_name] = STATE(111),
    [aux_sym_module_directive_repeat1] = STATE(112),
    [anon_sym_transitive] = ACTIONS(284),
    [anon_sym_static] = ACTIONS(284),
    [sym_identifier] = ACTIONS(286),
    [sym_comment] = ACTIONS(38),
  },
  [84] = {
    [sym_package_or_type_name] = STATE(114),
    [sym_identifier] = ACTIONS(288),
    [sym_comment] = ACTIONS(38),
  },
  [85] = {
    [sym_package_or_type_name] = STATE(115),
    [sym_identifier] = ACTIONS(54),
    [sym_comment] = ACTIONS(38),
  },
  [86] = {
    [sym_package_or_type_name] = STATE(116),
    [sym_identifier] = ACTIONS(54),
    [sym_comment] = ACTIONS(38),
  },
  [87] = {
    [anon_sym_RBRACE] = ACTIONS(290),
    [anon_sym_requires] = ACTIONS(290),
    [anon_sym_exports] = ACTIONS(290),
    [anon_sym_opens] = ACTIONS(290),
    [anon_sym_uses] = ACTIONS(290),
    [anon_sym_provides] = ACTIONS(290),
    [sym_comment] = ACTIONS(38),
  },
  [88] = {
    [sym_module_directive] = STATE(117),
    [anon_sym_RBRACE] = ACTIONS(272),
    [anon_sym_requires] = ACTIONS(206),
    [anon_sym_exports] = ACTIONS(208),
    [anon_sym_opens] = ACTIONS(208),
    [anon_sym_uses] = ACTIONS(210),
    [anon_sym_provides] = ACTIONS(212),
    [sym_comment] = ACTIONS(38),
  },
  [89] = {
    [ts_builtin_sym_end] = ACTIONS(292),
    [sym_decimal_integer_literal] = ACTIONS(294),
    [sym_hex_integer_literal] = ACTIONS(294),
    [sym_octal_integer_literal] = ACTIONS(294),
    [sym_binary_integer_literal] = ACTIONS(294),
    [sym_decimal_floating_point_literal] = ACTIONS(294),
    [sym_hex_floating_point_literal] = ACTIONS(296),
    [anon_sym_true] = ACTIONS(292),
    [anon_sym_false] = ACTIONS(292),
    [anon_sym_SQUOTE] = ACTIONS(292),
    [sym_string_literal] = ACTIONS(292),
    [sym_null_literal] = ACTIONS(292),
    [anon_sym_BANG] = ACTIONS(292),
    [anon_sym_TILDE] = ACTIONS(292),
    [anon_sym_PLUS_PLUS] = ACTIONS(292),
    [anon_sym_DASH_DASH] = ACTIONS(292),
    [anon_sym_AT] = ACTIONS(292),
    [anon_sym_open] = ACTIONS(292),
    [anon_sym_module] = ACTIONS(292),
    [anon_sym_package] = ACTIONS(292),
    [anon_sym_import] = ACTIONS(292),
    [sym_comment] = ACTIONS(38),
  },
  [90] = {
    [sym__expression] = STATE(118),
    [sym_assignment_expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [sym_ternary_expression] = STATE(18),
    [sym_unary_expression] = STATE(19),
    [sym_update_expression] = STATE(18),
    [anon_sym_BANG] = ACTIONS(166),
    [anon_sym_TILDE] = ACTIONS(166),
    [anon_sym_PLUS_PLUS] = ACTIONS(168),
    [anon_sym_DASH_DASH] = ACTIONS(168),
    [sym_comment] = ACTIONS(38),
  },
  [91] = {
    [sym__expression] = STATE(119),
    [sym_assignment_expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [sym_ternary_expression] = STATE(18),
    [sym_unary_expression] = STATE(19),
    [sym_update_expression] = STATE(18),
    [anon_sym_BANG] = ACTIONS(166),
    [anon_sym_TILDE] = ACTIONS(166),
    [anon_sym_PLUS_PLUS] = ACTIONS(168),
    [anon_sym_DASH_DASH] = ACTIONS(168),
    [sym_comment] = ACTIONS(38),
  },
  [92] = {
    [sym__expression] = STATE(120),
    [sym_assignment_expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [sym_ternary_expression] = STATE(18),
    [sym_unary_expression] = STATE(19),
    [sym_update_expression] = STATE(18),
    [anon_sym_BANG] = ACTIONS(166),
    [anon_sym_TILDE] = ACTIONS(166),
    [anon_sym_PLUS_PLUS] = ACTIONS(168),
    [anon_sym_DASH_DASH] = ACTIONS(168),
    [sym_comment] = ACTIONS(38),
  },
  [93] = {
    [sym__expression] = STATE(121),
    [sym_assignment_expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [sym_ternary_expression] = STATE(18),
    [sym_unary_expression] = STATE(19),
    [sym_update_expression] = STATE(18),
    [anon_sym_BANG] = ACTIONS(166),
    [anon_sym_TILDE] = ACTIONS(166),
    [anon_sym_PLUS_PLUS] = ACTIONS(168),
    [anon_sym_DASH_DASH] = ACTIONS(168),
    [sym_comment] = ACTIONS(38),
  },
  [94] = {
    [sym__expression] = STATE(122),
    [sym_assignment_expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [sym_ternary_expression] = STATE(18),
    [sym_unary_expression] = STATE(19),
    [sym_update_expression] = STATE(18),
    [anon_sym_BANG] = ACTIONS(166),
    [anon_sym_TILDE] = ACTIONS(166),
    [anon_sym_PLUS_PLUS] = ACTIONS(168),
    [anon_sym_DASH_DASH] = ACTIONS(168),
    [sym_comment] = ACTIONS(38),
  },
  [95] = {
    [sym__expression] = STATE(67),
    [sym_assignment_expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [sym_ternary_expression] = STATE(18),
    [sym_unary_expression] = STATE(19),
    [sym_update_expression] = STATE(18),
    [anon_sym_BANG] = ACTIONS(166),
    [anon_sym_TILDE] = ACTIONS(166),
    [anon_sym_PLUS_PLUS] = ACTIONS(168),
    [anon_sym_DASH_DASH] = ACTIONS(168),
    [sym_comment] = ACTIONS(38),
  },
  [96] = {
    [sym__expression] = STATE(123),
    [sym_assignment_expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [sym_ternary_expression] = STATE(18),
    [sym_unary_expression] = STATE(19),
    [sym_update_expression] = STATE(18),
    [anon_sym_BANG] = ACTIONS(166),
    [anon_sym_TILDE] = ACTIONS(166),
    [anon_sym_PLUS_PLUS] = ACTIONS(168),
    [anon_sym_DASH_DASH] = ACTIONS(168),
    [sym_comment] = ACTIONS(38),
  },
  [97] = {
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
  [98] = {
    [anon_sym_LBRACE] = ACTIONS(298),
    [sym_comment] = ACTIONS(38),
  },
  [99] = {
    [sym__semicolon] = ACTIONS(300),
    [anon_sym_DOT] = ACTIONS(202),
    [sym_comment] = ACTIONS(38),
  },
  [100] = {
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
    [anon_sym_BANG] = ACTIONS(302),
    [anon_sym_TILDE] = ACTIONS(302),
    [anon_sym_AT] = ACTIONS(28),
    [sym_comment] = ACTIONS(38),
  },
  [101] = {
    [anon_sym_RPAREN] = ACTIONS(304),
    [anon_sym_AT] = ACTIONS(304),
    [anon_sym_COMMA] = ACTIONS(304),
    [anon_sym_open] = ACTIONS(304),
    [anon_sym_module] = ACTIONS(304),
    [anon_sym_package] = ACTIONS(304),
    [sym_comment] = ACTIONS(38),
  },
  [102] = {
    [anon_sym_RPAREN] = ACTIONS(306),
    [anon_sym_AT] = ACTIONS(306),
    [anon_sym_COMMA] = ACTIONS(306),
    [anon_sym_open] = ACTIONS(306),
    [anon_sym_module] = ACTIONS(306),
    [anon_sym_package] = ACTIONS(306),
    [sym_comment] = ACTIONS(38),
  },
  [103] = {
    [sym_element_value_pair] = STATE(142),
    [sym_identifier] = ACTIONS(308),
    [sym_comment] = ACTIONS(38),
  },
  [104] = {
    [anon_sym_RPAREN] = ACTIONS(310),
    [anon_sym_COMMA] = ACTIONS(312),
    [sym_comment] = ACTIONS(38),
  },
  [105] = {
    [ts_builtin_sym_end] = ACTIONS(314),
    [sym_decimal_integer_literal] = ACTIONS(316),
    [sym_hex_integer_literal] = ACTIONS(316),
    [sym_octal_integer_literal] = ACTIONS(316),
    [sym_binary_integer_literal] = ACTIONS(316),
    [sym_decimal_floating_point_literal] = ACTIONS(316),
    [sym_hex_floating_point_literal] = ACTIONS(318),
    [anon_sym_true] = ACTIONS(314),
    [anon_sym_false] = ACTIONS(314),
    [anon_sym_SQUOTE] = ACTIONS(314),
    [sym_string_literal] = ACTIONS(314),
    [sym_null_literal] = ACTIONS(314),
    [anon_sym_BANG] = ACTIONS(314),
    [anon_sym_TILDE] = ACTIONS(314),
    [anon_sym_PLUS_PLUS] = ACTIONS(314),
    [anon_sym_DASH_DASH] = ACTIONS(314),
    [anon_sym_AT] = ACTIONS(314),
    [anon_sym_open] = ACTIONS(314),
    [anon_sym_module] = ACTIONS(314),
    [anon_sym_package] = ACTIONS(314),
    [anon_sym_import] = ACTIONS(314),
    [sym_comment] = ACTIONS(38),
  },
  [106] = {
    [sym_module_directive] = STATE(117),
    [anon_sym_RBRACE] = ACTIONS(320),
    [anon_sym_requires] = ACTIONS(206),
    [anon_sym_exports] = ACTIONS(208),
    [anon_sym_opens] = ACTIONS(208),
    [anon_sym_uses] = ACTIONS(210),
    [anon_sym_provides] = ACTIONS(212),
    [sym_comment] = ACTIONS(38),
  },
  [107] = {
    [sym__semicolon] = ACTIONS(322),
    [anon_sym_LBRACE] = ACTIONS(322),
    [anon_sym_DOT] = ACTIONS(322),
    [sym_comment] = ACTIONS(38),
  },
  [108] = {
    [anon_sym_transitive] = ACTIONS(324),
    [anon_sym_static] = ACTIONS(324),
    [sym_identifier] = ACTIONS(326),
    [sym_comment] = ACTIONS(38),
  },
  [109] = {
    [sym__semicolon] = ACTIONS(328),
    [anon_sym_COMMA] = ACTIONS(328),
    [anon_sym_DOT] = ACTIONS(328),
    [sym_comment] = ACTIONS(38),
  },
  [110] = {
    [anon_sym_transitive] = ACTIONS(330),
    [anon_sym_static] = ACTIONS(330),
    [sym_identifier] = ACTIONS(332),
    [sym_comment] = ACTIONS(38),
  },
  [111] = {
    [sym__semicolon] = ACTIONS(334),
    [anon_sym_DOT] = ACTIONS(336),
    [sym_comment] = ACTIONS(38),
  },
  [112] = {
    [sym_requires_modifier] = STATE(147),
    [sym_module_name] = STATE(148),
    [anon_sym_transitive] = ACTIONS(284),
    [anon_sym_static] = ACTIONS(284),
    [sym_identifier] = ACTIONS(286),
    [sym_comment] = ACTIONS(38),
  },
  [113] = {
    [sym__semicolon] = ACTIONS(142),
    [anon_sym_COMMA] = ACTIONS(142),
    [anon_sym_DOT] = ACTIONS(142),
    [anon_sym_to] = ACTIONS(338),
    [sym_identifier] = ACTIONS(340),
    [sym_comment] = ACTIONS(38),
  },
  [114] = {
    [sym_module_name] = STATE(152),
    [aux_sym_module_directive_repeat2] = STATE(153),
    [sym__semicolon] = ACTIONS(334),
    [anon_sym_COMMA] = ACTIONS(342),
    [anon_sym_DOT] = ACTIONS(344),
    [anon_sym_to] = ACTIONS(346),
    [sym_identifier] = ACTIONS(286),
    [sym_comment] = ACTIONS(38),
  },
  [115] = {
    [sym__semicolon] = ACTIONS(334),
    [anon_sym_DOT] = ACTIONS(148),
    [sym_comment] = ACTIONS(38),
  },
  [116] = {
    [anon_sym_DOT] = ACTIONS(148),
    [anon_sym_with] = ACTIONS(348),
    [sym_comment] = ACTIONS(38),
  },
  [117] = {
    [anon_sym_RBRACE] = ACTIONS(350),
    [anon_sym_requires] = ACTIONS(350),
    [anon_sym_exports] = ACTIONS(350),
    [anon_sym_opens] = ACTIONS(350),
    [anon_sym_uses] = ACTIONS(350),
    [anon_sym_provides] = ACTIONS(350),
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
    [anon_sym_COLON] = ACTIONS(352),
    [anon_sym_PLUS_PLUS] = ACTIONS(94),
    [anon_sym_DASH_DASH] = ACTIONS(94),
    [sym_comment] = ACTIONS(38),
  },
  [124] = {
    [sym__semicolon] = ACTIONS(354),
    [anon_sym_EQ] = ACTIONS(356),
    [anon_sym_PLUS_EQ] = ACTIONS(354),
    [anon_sym_DASH_EQ] = ACTIONS(354),
    [anon_sym_STAR_EQ] = ACTIONS(354),
    [anon_sym_SLASH_EQ] = ACTIONS(354),
    [anon_sym_AMP_EQ] = ACTIONS(354),
    [anon_sym_PIPE_EQ] = ACTIONS(354),
    [anon_sym_CARET_EQ] = ACTIONS(354),
    [anon_sym_PERCENT_EQ] = ACTIONS(354),
    [anon_sym_LT_LT_EQ] = ACTIONS(354),
    [anon_sym_GT_GT_EQ] = ACTIONS(354),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(354),
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
    [sym_module_directive] = STATE(87),
    [aux_sym_module_declaration_repeat2] = STATE(156),
    [anon_sym_RBRACE] = ACTIONS(320),
    [anon_sym_requires] = ACTIONS(206),
    [anon_sym_exports] = ACTIONS(208),
    [anon_sym_opens] = ACTIONS(208),
    [anon_sym_uses] = ACTIONS(210),
    [anon_sym_provides] = ACTIONS(212),
    [sym_comment] = ACTIONS(38),
  },
  [126] = {
    [ts_builtin_sym_end] = ACTIONS(358),
    [sym_decimal_integer_literal] = ACTIONS(360),
    [sym_hex_integer_literal] = ACTIONS(360),
    [sym_octal_integer_literal] = ACTIONS(360),
    [sym_binary_integer_literal] = ACTIONS(360),
    [sym_decimal_floating_point_literal] = ACTIONS(360),
    [sym_hex_floating_point_literal] = ACTIONS(362),
    [anon_sym_true] = ACTIONS(358),
    [anon_sym_false] = ACTIONS(358),
    [anon_sym_SQUOTE] = ACTIONS(358),
    [sym_string_literal] = ACTIONS(358),
    [sym_null_literal] = ACTIONS(358),
    [anon_sym_BANG] = ACTIONS(358),
    [anon_sym_TILDE] = ACTIONS(358),
    [anon_sym_PLUS_PLUS] = ACTIONS(358),
    [anon_sym_DASH_DASH] = ACTIONS(358),
    [anon_sym_AT] = ACTIONS(358),
    [anon_sym_open] = ACTIONS(358),
    [anon_sym_module] = ACTIONS(358),
    [anon_sym_package] = ACTIONS(358),
    [anon_sym_import] = ACTIONS(358),
    [sym_comment] = ACTIONS(38),
  },
  [127] = {
    [sym__expression] = STATE(159),
    [sym_assignment_expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [sym_ternary_expression] = STATE(18),
    [sym_unary_expression] = STATE(19),
    [sym_update_expression] = STATE(18),
    [anon_sym_BANG] = ACTIONS(364),
    [anon_sym_TILDE] = ACTIONS(364),
    [anon_sym_PLUS_PLUS] = ACTIONS(366),
    [anon_sym_DASH_DASH] = ACTIONS(366),
    [sym_comment] = ACTIONS(38),
  },
  [128] = {
    [anon_sym_RPAREN] = ACTIONS(368),
    [anon_sym_COMMA] = ACTIONS(368),
    [sym_comment] = ACTIONS(38),
  },
  [129] = {
    [anon_sym_LT] = ACTIONS(370),
    [anon_sym_EQ_EQ] = ACTIONS(372),
    [anon_sym_BANG_EQ] = ACTIONS(372),
    [anon_sym_AMP_AMP] = ACTIONS(372),
    [anon_sym_PIPE_PIPE] = ACTIONS(372),
    [anon_sym_PLUS] = ACTIONS(372),
    [anon_sym_DASH] = ACTIONS(372),
    [anon_sym_STAR] = ACTIONS(372),
    [anon_sym_SLASH] = ACTIONS(370),
    [anon_sym_PIPE] = ACTIONS(370),
    [anon_sym_CARET] = ACTIONS(372),
    [anon_sym_PERCENT] = ACTIONS(372),
    [anon_sym_LT_LT] = ACTIONS(372),
    [anon_sym_GT_GT] = ACTIONS(370),
    [anon_sym_GT_GT_GT] = ACTIONS(372),
    [anon_sym_QMARK] = ACTIONS(372),
    [anon_sym_RPAREN] = ACTIONS(372),
    [anon_sym_COMMA] = ACTIONS(372),
    [sym_comment] = ACTIONS(38),
  },
  [130] = {
    [anon_sym_RPAREN] = ACTIONS(374),
    [anon_sym_COMMA] = ACTIONS(374),
    [sym_comment] = ACTIONS(38),
  },
  [131] = {
    [anon_sym_PIPE_PIPE] = ACTIONS(376),
    [anon_sym_QMARK] = ACTIONS(378),
    [anon_sym_RPAREN] = ACTIONS(380),
    [anon_sym_COMMA] = ACTIONS(380),
    [sym_comment] = ACTIONS(38),
  },
  [132] = {
    [anon_sym_AMP_AMP] = ACTIONS(382),
    [anon_sym_PIPE_PIPE] = ACTIONS(384),
    [anon_sym_QMARK] = ACTIONS(384),
    [anon_sym_RPAREN] = ACTIONS(384),
    [anon_sym_COMMA] = ACTIONS(384),
    [sym_comment] = ACTIONS(38),
  },
  [133] = {
    [anon_sym_AMP_AMP] = ACTIONS(386),
    [anon_sym_PIPE_PIPE] = ACTIONS(386),
    [anon_sym_PIPE] = ACTIONS(388),
    [anon_sym_QMARK] = ACTIONS(386),
    [anon_sym_RPAREN] = ACTIONS(386),
    [anon_sym_COMMA] = ACTIONS(386),
    [sym_comment] = ACTIONS(38),
  },
  [134] = {
    [anon_sym_AMP_AMP] = ACTIONS(390),
    [anon_sym_PIPE_PIPE] = ACTIONS(390),
    [anon_sym_PIPE] = ACTIONS(392),
    [anon_sym_CARET] = ACTIONS(394),
    [anon_sym_QMARK] = ACTIONS(390),
    [anon_sym_RPAREN] = ACTIONS(390),
    [anon_sym_COMMA] = ACTIONS(390),
    [sym_comment] = ACTIONS(38),
  },
  [135] = {
    [anon_sym_AMP_AMP] = ACTIONS(396),
    [anon_sym_PIPE_PIPE] = ACTIONS(396),
    [anon_sym_PIPE] = ACTIONS(398),
    [anon_sym_CARET] = ACTIONS(396),
    [anon_sym_QMARK] = ACTIONS(396),
    [anon_sym_RPAREN] = ACTIONS(396),
    [anon_sym_COMMA] = ACTIONS(396),
    [sym_comment] = ACTIONS(38),
  },
  [136] = {
    [anon_sym_LT] = ACTIONS(400),
    [anon_sym_EQ_EQ] = ACTIONS(402),
    [anon_sym_BANG_EQ] = ACTIONS(402),
    [anon_sym_AMP_AMP] = ACTIONS(404),
    [anon_sym_PIPE_PIPE] = ACTIONS(404),
    [anon_sym_PIPE] = ACTIONS(406),
    [anon_sym_CARET] = ACTIONS(404),
    [anon_sym_QMARK] = ACTIONS(404),
    [anon_sym_RPAREN] = ACTIONS(404),
    [anon_sym_COMMA] = ACTIONS(404),
    [sym_comment] = ACTIONS(38),
  },
  [137] = {
    [anon_sym_EQ_EQ] = ACTIONS(408),
    [anon_sym_BANG_EQ] = ACTIONS(408),
    [sym_comment] = ACTIONS(38),
  },
  [138] = {
    [anon_sym_LT] = ACTIONS(410),
    [anon_sym_EQ_EQ] = ACTIONS(412),
    [anon_sym_BANG_EQ] = ACTIONS(412),
    [anon_sym_AMP_AMP] = ACTIONS(412),
    [anon_sym_PIPE_PIPE] = ACTIONS(412),
    [anon_sym_PIPE] = ACTIONS(410),
    [anon_sym_CARET] = ACTIONS(412),
    [anon_sym_LT_LT] = ACTIONS(414),
    [anon_sym_GT_GT] = ACTIONS(416),
    [anon_sym_GT_GT_GT] = ACTIONS(414),
    [anon_sym_QMARK] = ACTIONS(412),
    [anon_sym_RPAREN] = ACTIONS(412),
    [anon_sym_COMMA] = ACTIONS(412),
    [sym_comment] = ACTIONS(38),
  },
  [139] = {
    [anon_sym_LT] = ACTIONS(418),
    [anon_sym_EQ_EQ] = ACTIONS(420),
    [anon_sym_BANG_EQ] = ACTIONS(420),
    [anon_sym_AMP_AMP] = ACTIONS(420),
    [anon_sym_PIPE_PIPE] = ACTIONS(420),
    [anon_sym_PLUS] = ACTIONS(422),
    [anon_sym_DASH] = ACTIONS(422),
    [anon_sym_PIPE] = ACTIONS(418),
    [anon_sym_CARET] = ACTIONS(420),
    [anon_sym_LT_LT] = ACTIONS(420),
    [anon_sym_GT_GT] = ACTIONS(418),
    [anon_sym_GT_GT_GT] = ACTIONS(420),
    [anon_sym_QMARK] = ACTIONS(420),
    [anon_sym_RPAREN] = ACTIONS(420),
    [anon_sym_COMMA] = ACTIONS(420),
    [sym_comment] = ACTIONS(38),
  },
  [140] = {
    [anon_sym_LT] = ACTIONS(424),
    [anon_sym_EQ_EQ] = ACTIONS(426),
    [anon_sym_BANG_EQ] = ACTIONS(426),
    [anon_sym_AMP_AMP] = ACTIONS(426),
    [anon_sym_PIPE_PIPE] = ACTIONS(426),
    [anon_sym_PLUS] = ACTIONS(426),
    [anon_sym_DASH] = ACTIONS(426),
    [anon_sym_STAR] = ACTIONS(428),
    [anon_sym_SLASH] = ACTIONS(430),
    [anon_sym_PIPE] = ACTIONS(424),
    [anon_sym_CARET] = ACTIONS(426),
    [anon_sym_PERCENT] = ACTIONS(428),
    [anon_sym_LT_LT] = ACTIONS(426),
    [anon_sym_GT_GT] = ACTIONS(424),
    [anon_sym_GT_GT_GT] = ACTIONS(426),
    [anon_sym_QMARK] = ACTIONS(426),
    [anon_sym_RPAREN] = ACTIONS(426),
    [anon_sym_COMMA] = ACTIONS(426),
    [sym_comment] = ACTIONS(38),
  },
  [141] = {
    [anon_sym_EQ] = ACTIONS(260),
    [sym_comment] = ACTIONS(38),
  },
  [142] = {
    [anon_sym_RPAREN] = ACTIONS(432),
    [anon_sym_COMMA] = ACTIONS(432),
    [sym_comment] = ACTIONS(38),
  },
  [143] = {
    [sym_element_value_pair] = STATE(171),
    [sym_identifier] = ACTIONS(308),
    [sym_comment] = ACTIONS(38),
  },
  [144] = {
    [ts_builtin_sym_end] = ACTIONS(434),
    [sym_decimal_integer_literal] = ACTIONS(436),
    [sym_hex_integer_literal] = ACTIONS(436),
    [sym_octal_integer_literal] = ACTIONS(436),
    [sym_binary_integer_literal] = ACTIONS(436),
    [sym_decimal_floating_point_literal] = ACTIONS(436),
    [sym_hex_floating_point_literal] = ACTIONS(438),
    [anon_sym_true] = ACTIONS(434),
    [anon_sym_false] = ACTIONS(434),
    [anon_sym_SQUOTE] = ACTIONS(434),
    [sym_string_literal] = ACTIONS(434),
    [sym_null_literal] = ACTIONS(434),
    [anon_sym_BANG] = ACTIONS(434),
    [anon_sym_TILDE] = ACTIONS(434),
    [anon_sym_PLUS_PLUS] = ACTIONS(434),
    [anon_sym_DASH_DASH] = ACTIONS(434),
    [anon_sym_AT] = ACTIONS(434),
    [anon_sym_open] = ACTIONS(434),
    [anon_sym_module] = ACTIONS(434),
    [anon_sym_package] = ACTIONS(434),
    [anon_sym_import] = ACTIONS(434),
    [sym_comment] = ACTIONS(38),
  },
  [145] = {
    [anon_sym_RBRACE] = ACTIONS(440),
    [anon_sym_requires] = ACTIONS(440),
    [anon_sym_exports] = ACTIONS(440),
    [anon_sym_opens] = ACTIONS(440),
    [anon_sym_uses] = ACTIONS(440),
    [anon_sym_provides] = ACTIONS(440),
    [sym_comment] = ACTIONS(38),
  },
  [146] = {
    [sym_identifier] = ACTIONS(442),
    [sym_comment] = ACTIONS(38),
  },
  [147] = {
    [anon_sym_transitive] = ACTIONS(444),
    [anon_sym_static] = ACTIONS(444),
    [sym_identifier] = ACTIONS(446),
    [sym_comment] = ACTIONS(38),
  },
  [148] = {
    [sym__semicolon] = ACTIONS(448),
    [anon_sym_DOT] = ACTIONS(336),
    [sym_comment] = ACTIONS(38),
  },
  [149] = {
    [sym_module_name] = STATE(174),
    [sym_identifier] = ACTIONS(450),
    [sym_comment] = ACTIONS(38),
  },
  [150] = {
    [sym_identifier] = ACTIONS(452),
    [sym_comment] = ACTIONS(38),
  },
  [151] = {
    [sym_module_name] = STATE(176),
    [aux_sym_module_directive_repeat2] = STATE(177),
    [sym__semicolon] = ACTIONS(448),
    [anon_sym_COMMA] = ACTIONS(342),
    [sym_identifier] = ACTIONS(450),
    [sym_comment] = ACTIONS(38),
  },
  [152] = {
    [aux_sym_module_directive_repeat2] = STATE(177),
    [sym__semicolon] = ACTIONS(448),
    [anon_sym_COMMA] = ACTIONS(342),
    [anon_sym_DOT] = ACTIONS(336),
    [sym_comment] = ACTIONS(38),
  },
  [153] = {
    [sym__semicolon] = ACTIONS(448),
    [anon_sym_COMMA] = ACTIONS(454),
    [sym_comment] = ACTIONS(38),
  },
  [154] = {
    [sym_package_or_type_name] = STATE(179),
    [sym_identifier] = ACTIONS(54),
    [sym_comment] = ACTIONS(38),
  },
  [155] = {
    [sym__expression] = STATE(180),
    [sym_assignment_expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [sym_ternary_expression] = STATE(18),
    [sym_unary_expression] = STATE(19),
    [sym_update_expression] = STATE(18),
    [anon_sym_BANG] = ACTIONS(166),
    [anon_sym_TILDE] = ACTIONS(166),
    [anon_sym_PLUS_PLUS] = ACTIONS(168),
    [anon_sym_DASH_DASH] = ACTIONS(168),
    [sym_comment] = ACTIONS(38),
  },
  [156] = {
    [sym_module_directive] = STATE(117),
    [anon_sym_RBRACE] = ACTIONS(456),
    [anon_sym_requires] = ACTIONS(206),
    [anon_sym_exports] = ACTIONS(208),
    [anon_sym_opens] = ACTIONS(208),
    [anon_sym_uses] = ACTIONS(210),
    [anon_sym_provides] = ACTIONS(212),
    [sym_comment] = ACTIONS(38),
  },
  [157] = {
    [sym__expression] = STATE(29),
    [sym_assignment_expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [sym_ternary_expression] = STATE(18),
    [sym_unary_expression] = STATE(19),
    [sym_update_expression] = STATE(18),
    [anon_sym_BANG] = ACTIONS(364),
    [anon_sym_TILDE] = ACTIONS(364),
    [anon_sym_PLUS_PLUS] = ACTIONS(366),
    [anon_sym_DASH_DASH] = ACTIONS(366),
    [sym_comment] = ACTIONS(38),
  },
  [158] = {
    [sym__expression] = STATE(30),
    [sym_assignment_expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [sym_ternary_expression] = STATE(18),
    [sym_unary_expression] = STATE(19),
    [sym_update_expression] = STATE(18),
    [anon_sym_BANG] = ACTIONS(364),
    [anon_sym_TILDE] = ACTIONS(364),
    [anon_sym_PLUS_PLUS] = ACTIONS(366),
    [anon_sym_DASH_DASH] = ACTIONS(366),
    [sym_comment] = ACTIONS(38),
  },
  [159] = {
    [anon_sym_EQ] = ACTIONS(458),
    [anon_sym_PLUS_EQ] = ACTIONS(460),
    [anon_sym_DASH_EQ] = ACTIONS(460),
    [anon_sym_STAR_EQ] = ACTIONS(460),
    [anon_sym_SLASH_EQ] = ACTIONS(460),
    [anon_sym_AMP_EQ] = ACTIONS(460),
    [anon_sym_PIPE_EQ] = ACTIONS(460),
    [anon_sym_CARET_EQ] = ACTIONS(460),
    [anon_sym_PERCENT_EQ] = ACTIONS(460),
    [anon_sym_LT_LT_EQ] = ACTIONS(460),
    [anon_sym_GT_GT_EQ] = ACTIONS(460),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(460),
    [anon_sym_GT] = ACTIONS(462),
    [anon_sym_LT] = ACTIONS(136),
    [anon_sym_EQ_EQ] = ACTIONS(134),
    [anon_sym_GT_EQ] = ACTIONS(464),
    [anon_sym_LT_EQ] = ACTIONS(464),
    [anon_sym_BANG_EQ] = ACTIONS(134),
    [anon_sym_AMP_AMP] = ACTIONS(134),
    [anon_sym_PIPE_PIPE] = ACTIONS(134),
    [anon_sym_PLUS] = ACTIONS(136),
    [anon_sym_DASH] = ACTIONS(136),
    [anon_sym_STAR] = ACTIONS(136),
    [anon_sym_SLASH] = ACTIONS(136),
    [anon_sym_AMP] = ACTIONS(466),
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
  [160] = {
    [anon_sym_RPAREN] = ACTIONS(468),
    [anon_sym_COMMA] = ACTIONS(468),
    [sym_comment] = ACTIONS(38),
  },
  [161] = {
    [sym_unary_expression] = STATE(129),
    [sym_conditional_and_expression] = STATE(189),
    [sym_inclusive_or_expression] = STATE(133),
    [sym_exclusive_or_expression] = STATE(134),
    [sym_and_expression] = STATE(135),
    [sym_relational_expression] = STATE(136),
    [sym_equality_expression] = STATE(137),
    [sym_shift_expression] = STATE(138),
    [sym_additive_expression] = STATE(139),
    [sym_multiplicative_expression] = STATE(140),
    [anon_sym_BANG] = ACTIONS(302),
    [anon_sym_TILDE] = ACTIONS(302),
    [sym_comment] = ACTIONS(38),
  },
  [162] = {
    [sym__expression] = STATE(190),
    [sym_assignment_expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [sym_ternary_expression] = STATE(18),
    [sym_unary_expression] = STATE(19),
    [sym_update_expression] = STATE(18),
    [anon_sym_BANG] = ACTIONS(166),
    [anon_sym_TILDE] = ACTIONS(166),
    [anon_sym_PLUS_PLUS] = ACTIONS(168),
    [anon_sym_DASH_DASH] = ACTIONS(168),
    [sym_comment] = ACTIONS(38),
  },
  [163] = {
    [sym_unary_expression] = STATE(129),
    [sym_inclusive_or_expression] = STATE(191),
    [sym_exclusive_or_expression] = STATE(134),
    [sym_and_expression] = STATE(135),
    [sym_relational_expression] = STATE(136),
    [sym_equality_expression] = STATE(137),
    [sym_shift_expression] = STATE(138),
    [sym_additive_expression] = STATE(139),
    [sym_multiplicative_expression] = STATE(140),
    [anon_sym_BANG] = ACTIONS(302),
    [anon_sym_TILDE] = ACTIONS(302),
    [sym_comment] = ACTIONS(38),
  },
  [164] = {
    [sym_unary_expression] = STATE(129),
    [sym_exclusive_or_expression] = STATE(192),
    [sym_and_expression] = STATE(135),
    [sym_relational_expression] = STATE(136),
    [sym_equality_expression] = STATE(137),
    [sym_shift_expression] = STATE(138),
    [sym_additive_expression] = STATE(139),
    [sym_multiplicative_expression] = STATE(140),
    [anon_sym_BANG] = ACTIONS(302),
    [anon_sym_TILDE] = ACTIONS(302),
    [sym_comment] = ACTIONS(38),
  },
  [165] = {
    [sym_unary_expression] = STATE(129),
    [sym_and_expression] = STATE(193),
    [sym_relational_expression] = STATE(136),
    [sym_equality_expression] = STATE(137),
    [sym_shift_expression] = STATE(138),
    [sym_additive_expression] = STATE(139),
    [sym_multiplicative_expression] = STATE(140),
    [anon_sym_BANG] = ACTIONS(302),
    [anon_sym_TILDE] = ACTIONS(302),
    [sym_comment] = ACTIONS(38),
  },
  [166] = {
    [sym_unary_expression] = STATE(129),
    [sym_shift_expression] = STATE(194),
    [sym_additive_expression] = STATE(139),
    [sym_multiplicative_expression] = STATE(140),
    [anon_sym_BANG] = ACTIONS(302),
    [anon_sym_TILDE] = ACTIONS(302),
    [sym_comment] = ACTIONS(38),
  },
  [167] = {
    [sym_unary_expression] = STATE(129),
    [sym_relational_expression] = STATE(195),
    [sym_shift_expression] = STATE(138),
    [sym_additive_expression] = STATE(139),
    [sym_multiplicative_expression] = STATE(140),
    [anon_sym_BANG] = ACTIONS(302),
    [anon_sym_TILDE] = ACTIONS(302),
    [sym_comment] = ACTIONS(38),
  },
  [168] = {
    [sym_unary_expression] = STATE(129),
    [sym_additive_expression] = STATE(196),
    [sym_multiplicative_expression] = STATE(140),
    [anon_sym_BANG] = ACTIONS(302),
    [anon_sym_TILDE] = ACTIONS(302),
    [sym_comment] = ACTIONS(38),
  },
  [169] = {
    [sym_unary_expression] = STATE(129),
    [sym_multiplicative_expression] = STATE(197),
    [anon_sym_BANG] = ACTIONS(302),
    [anon_sym_TILDE] = ACTIONS(302),
    [sym_comment] = ACTIONS(38),
  },
  [170] = {
    [sym_unary_expression] = STATE(198),
    [anon_sym_BANG] = ACTIONS(302),
    [anon_sym_TILDE] = ACTIONS(302),
    [sym_comment] = ACTIONS(38),
  },
  [171] = {
    [anon_sym_RPAREN] = ACTIONS(470),
    [anon_sym_COMMA] = ACTIONS(470),
    [sym_comment] = ACTIONS(38),
  },
  [172] = {
    [sym__semicolon] = ACTIONS(472),
    [anon_sym_COMMA] = ACTIONS(472),
    [anon_sym_DOT] = ACTIONS(472),
    [sym_comment] = ACTIONS(38),
  },
  [173] = {
    [anon_sym_RBRACE] = ACTIONS(474),
    [anon_sym_requires] = ACTIONS(474),
    [anon_sym_exports] = ACTIONS(474),
    [anon_sym_opens] = ACTIONS(474),
    [anon_sym_uses] = ACTIONS(474),
    [anon_sym_provides] = ACTIONS(474),
    [sym_comment] = ACTIONS(38),
  },
  [174] = {
    [sym__semicolon] = ACTIONS(476),
    [anon_sym_COMMA] = ACTIONS(476),
    [anon_sym_DOT] = ACTIONS(336),
    [sym_comment] = ACTIONS(38),
  },
  [175] = {
    [sym__semicolon] = ACTIONS(270),
    [anon_sym_COMMA] = ACTIONS(270),
    [anon_sym_DOT] = ACTIONS(270),
    [anon_sym_to] = ACTIONS(478),
    [sym_identifier] = ACTIONS(480),
    [sym_comment] = ACTIONS(38),
  },
  [176] = {
    [aux_sym_module_directive_repeat2] = STATE(200),
    [sym__semicolon] = ACTIONS(482),
    [anon_sym_COMMA] = ACTIONS(342),
    [anon_sym_DOT] = ACTIONS(336),
    [sym_comment] = ACTIONS(38),
  },
  [177] = {
    [sym__semicolon] = ACTIONS(482),
    [anon_sym_COMMA] = ACTIONS(454),
    [sym_comment] = ACTIONS(38),
  },
  [178] = {
    [sym_module_name] = STATE(201),
    [sym_identifier] = ACTIONS(450),
    [sym_comment] = ACTIONS(38),
  },
  [179] = {
    [aux_sym_module_directive_repeat3] = STATE(203),
    [sym__semicolon] = ACTIONS(482),
    [anon_sym_COMMA] = ACTIONS(484),
    [anon_sym_DOT] = ACTIONS(148),
    [sym_comment] = ACTIONS(38),
  },
  [180] = {
    [anon_sym_EQ] = ACTIONS(356),
    [anon_sym_PLUS_EQ] = ACTIONS(354),
    [anon_sym_DASH_EQ] = ACTIONS(354),
    [anon_sym_STAR_EQ] = ACTIONS(354),
    [anon_sym_SLASH_EQ] = ACTIONS(354),
    [anon_sym_AMP_EQ] = ACTIONS(354),
    [anon_sym_PIPE_EQ] = ACTIONS(354),
    [anon_sym_CARET_EQ] = ACTIONS(354),
    [anon_sym_PERCENT_EQ] = ACTIONS(354),
    [anon_sym_LT_LT_EQ] = ACTIONS(354),
    [anon_sym_GT_GT_EQ] = ACTIONS(354),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(354),
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
    [anon_sym_COLON] = ACTIONS(354),
    [anon_sym_PLUS_PLUS] = ACTIONS(94),
    [anon_sym_DASH_DASH] = ACTIONS(94),
    [sym_comment] = ACTIONS(38),
  },
  [181] = {
    [ts_builtin_sym_end] = ACTIONS(486),
    [sym_decimal_integer_literal] = ACTIONS(488),
    [sym_hex_integer_literal] = ACTIONS(488),
    [sym_octal_integer_literal] = ACTIONS(488),
    [sym_binary_integer_literal] = ACTIONS(488),
    [sym_decimal_floating_point_literal] = ACTIONS(488),
    [sym_hex_floating_point_literal] = ACTIONS(490),
    [anon_sym_true] = ACTIONS(486),
    [anon_sym_false] = ACTIONS(486),
    [anon_sym_SQUOTE] = ACTIONS(486),
    [sym_string_literal] = ACTIONS(486),
    [sym_null_literal] = ACTIONS(486),
    [anon_sym_BANG] = ACTIONS(486),
    [anon_sym_TILDE] = ACTIONS(486),
    [anon_sym_PLUS_PLUS] = ACTIONS(486),
    [anon_sym_DASH_DASH] = ACTIONS(486),
    [anon_sym_AT] = ACTIONS(486),
    [anon_sym_open] = ACTIONS(486),
    [anon_sym_module] = ACTIONS(486),
    [anon_sym_package] = ACTIONS(486),
    [anon_sym_import] = ACTIONS(486),
    [sym_comment] = ACTIONS(38),
  },
  [182] = {
    [sym__expression] = STATE(204),
    [sym_assignment_expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [sym_ternary_expression] = STATE(18),
    [sym_unary_expression] = STATE(19),
    [sym_update_expression] = STATE(18),
    [anon_sym_BANG] = ACTIONS(364),
    [anon_sym_TILDE] = ACTIONS(364),
    [anon_sym_PLUS_PLUS] = ACTIONS(366),
    [anon_sym_DASH_DASH] = ACTIONS(366),
    [sym_comment] = ACTIONS(38),
  },
  [183] = {
    [sym__expression] = STATE(205),
    [sym_assignment_expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [sym_ternary_expression] = STATE(18),
    [sym_unary_expression] = STATE(19),
    [sym_update_expression] = STATE(18),
    [anon_sym_BANG] = ACTIONS(364),
    [anon_sym_TILDE] = ACTIONS(364),
    [anon_sym_PLUS_PLUS] = ACTIONS(366),
    [anon_sym_DASH_DASH] = ACTIONS(366),
    [sym_comment] = ACTIONS(38),
  },
  [184] = {
    [sym__expression] = STATE(206),
    [sym_assignment_expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [sym_ternary_expression] = STATE(18),
    [sym_unary_expression] = STATE(19),
    [sym_update_expression] = STATE(18),
    [anon_sym_BANG] = ACTIONS(364),
    [anon_sym_TILDE] = ACTIONS(364),
    [anon_sym_PLUS_PLUS] = ACTIONS(366),
    [anon_sym_DASH_DASH] = ACTIONS(366),
    [sym_comment] = ACTIONS(38),
  },
  [185] = {
    [sym__expression] = STATE(207),
    [sym_assignment_expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [sym_ternary_expression] = STATE(18),
    [sym_unary_expression] = STATE(19),
    [sym_update_expression] = STATE(18),
    [anon_sym_BANG] = ACTIONS(364),
    [anon_sym_TILDE] = ACTIONS(364),
    [anon_sym_PLUS_PLUS] = ACTIONS(366),
    [anon_sym_DASH_DASH] = ACTIONS(366),
    [sym_comment] = ACTIONS(38),
  },
  [186] = {
    [sym__expression] = STATE(208),
    [sym_assignment_expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [sym_ternary_expression] = STATE(18),
    [sym_unary_expression] = STATE(19),
    [sym_update_expression] = STATE(18),
    [anon_sym_BANG] = ACTIONS(364),
    [anon_sym_TILDE] = ACTIONS(364),
    [anon_sym_PLUS_PLUS] = ACTIONS(366),
    [anon_sym_DASH_DASH] = ACTIONS(366),
    [sym_comment] = ACTIONS(38),
  },
  [187] = {
    [sym__expression] = STATE(67),
    [sym_assignment_expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [sym_ternary_expression] = STATE(18),
    [sym_unary_expression] = STATE(19),
    [sym_update_expression] = STATE(18),
    [anon_sym_BANG] = ACTIONS(364),
    [anon_sym_TILDE] = ACTIONS(364),
    [anon_sym_PLUS_PLUS] = ACTIONS(366),
    [anon_sym_DASH_DASH] = ACTIONS(366),
    [sym_comment] = ACTIONS(38),
  },
  [188] = {
    [sym__expression] = STATE(209),
    [sym_assignment_expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [sym_ternary_expression] = STATE(18),
    [sym_unary_expression] = STATE(19),
    [sym_update_expression] = STATE(18),
    [anon_sym_BANG] = ACTIONS(166),
    [anon_sym_TILDE] = ACTIONS(166),
    [anon_sym_PLUS_PLUS] = ACTIONS(168),
    [anon_sym_DASH_DASH] = ACTIONS(168),
    [sym_comment] = ACTIONS(38),
  },
  [189] = {
    [anon_sym_AMP_AMP] = ACTIONS(382),
    [anon_sym_PIPE_PIPE] = ACTIONS(492),
    [anon_sym_QMARK] = ACTIONS(492),
    [anon_sym_RPAREN] = ACTIONS(492),
    [anon_sym_COMMA] = ACTIONS(492),
    [sym_comment] = ACTIONS(38),
  },
  [190] = {
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
    [anon_sym_COLON] = ACTIONS(494),
    [anon_sym_PLUS_PLUS] = ACTIONS(94),
    [anon_sym_DASH_DASH] = ACTIONS(94),
    [sym_comment] = ACTIONS(38),
  },
  [191] = {
    [anon_sym_AMP_AMP] = ACTIONS(496),
    [anon_sym_PIPE_PIPE] = ACTIONS(496),
    [anon_sym_PIPE] = ACTIONS(388),
    [anon_sym_QMARK] = ACTIONS(496),
    [anon_sym_RPAREN] = ACTIONS(496),
    [anon_sym_COMMA] = ACTIONS(496),
    [sym_comment] = ACTIONS(38),
  },
  [192] = {
    [anon_sym_AMP_AMP] = ACTIONS(498),
    [anon_sym_PIPE_PIPE] = ACTIONS(498),
    [anon_sym_PIPE] = ACTIONS(500),
    [anon_sym_CARET] = ACTIONS(394),
    [anon_sym_QMARK] = ACTIONS(498),
    [anon_sym_RPAREN] = ACTIONS(498),
    [anon_sym_COMMA] = ACTIONS(498),
    [sym_comment] = ACTIONS(38),
  },
  [193] = {
    [anon_sym_AMP_AMP] = ACTIONS(502),
    [anon_sym_PIPE_PIPE] = ACTIONS(502),
    [anon_sym_PIPE] = ACTIONS(504),
    [anon_sym_CARET] = ACTIONS(502),
    [anon_sym_QMARK] = ACTIONS(502),
    [anon_sym_RPAREN] = ACTIONS(502),
    [anon_sym_COMMA] = ACTIONS(502),
    [sym_comment] = ACTIONS(38),
  },
  [194] = {
    [anon_sym_LT] = ACTIONS(506),
    [anon_sym_EQ_EQ] = ACTIONS(508),
    [anon_sym_BANG_EQ] = ACTIONS(508),
    [anon_sym_AMP_AMP] = ACTIONS(508),
    [anon_sym_PIPE_PIPE] = ACTIONS(508),
    [anon_sym_PIPE] = ACTIONS(506),
    [anon_sym_CARET] = ACTIONS(508),
    [anon_sym_LT_LT] = ACTIONS(414),
    [anon_sym_GT_GT] = ACTIONS(416),
    [anon_sym_GT_GT_GT] = ACTIONS(414),
    [anon_sym_QMARK] = ACTIONS(508),
    [anon_sym_RPAREN] = ACTIONS(508),
    [anon_sym_COMMA] = ACTIONS(508),
    [sym_comment] = ACTIONS(38),
  },
  [195] = {
    [anon_sym_LT] = ACTIONS(400),
    [anon_sym_EQ_EQ] = ACTIONS(510),
    [anon_sym_BANG_EQ] = ACTIONS(510),
    [anon_sym_AMP_AMP] = ACTIONS(512),
    [anon_sym_PIPE_PIPE] = ACTIONS(512),
    [anon_sym_PIPE] = ACTIONS(514),
    [anon_sym_CARET] = ACTIONS(512),
    [anon_sym_QMARK] = ACTIONS(512),
    [anon_sym_RPAREN] = ACTIONS(512),
    [anon_sym_COMMA] = ACTIONS(512),
    [sym_comment] = ACTIONS(38),
  },
  [196] = {
    [anon_sym_LT] = ACTIONS(516),
    [anon_sym_EQ_EQ] = ACTIONS(518),
    [anon_sym_BANG_EQ] = ACTIONS(518),
    [anon_sym_AMP_AMP] = ACTIONS(518),
    [anon_sym_PIPE_PIPE] = ACTIONS(518),
    [anon_sym_PLUS] = ACTIONS(422),
    [anon_sym_DASH] = ACTIONS(422),
    [anon_sym_PIPE] = ACTIONS(516),
    [anon_sym_CARET] = ACTIONS(518),
    [anon_sym_LT_LT] = ACTIONS(518),
    [anon_sym_GT_GT] = ACTIONS(516),
    [anon_sym_GT_GT_GT] = ACTIONS(518),
    [anon_sym_QMARK] = ACTIONS(518),
    [anon_sym_RPAREN] = ACTIONS(518),
    [anon_sym_COMMA] = ACTIONS(518),
    [sym_comment] = ACTIONS(38),
  },
  [197] = {
    [anon_sym_LT] = ACTIONS(520),
    [anon_sym_EQ_EQ] = ACTIONS(522),
    [anon_sym_BANG_EQ] = ACTIONS(522),
    [anon_sym_AMP_AMP] = ACTIONS(522),
    [anon_sym_PIPE_PIPE] = ACTIONS(522),
    [anon_sym_PLUS] = ACTIONS(522),
    [anon_sym_DASH] = ACTIONS(522),
    [anon_sym_STAR] = ACTIONS(428),
    [anon_sym_SLASH] = ACTIONS(430),
    [anon_sym_PIPE] = ACTIONS(520),
    [anon_sym_CARET] = ACTIONS(522),
    [anon_sym_PERCENT] = ACTIONS(428),
    [anon_sym_LT_LT] = ACTIONS(522),
    [anon_sym_GT_GT] = ACTIONS(520),
    [anon_sym_GT_GT_GT] = ACTIONS(522),
    [anon_sym_QMARK] = ACTIONS(522),
    [anon_sym_RPAREN] = ACTIONS(522),
    [anon_sym_COMMA] = ACTIONS(522),
    [sym_comment] = ACTIONS(38),
  },
  [198] = {
    [anon_sym_LT] = ACTIONS(524),
    [anon_sym_EQ_EQ] = ACTIONS(526),
    [anon_sym_BANG_EQ] = ACTIONS(526),
    [anon_sym_AMP_AMP] = ACTIONS(526),
    [anon_sym_PIPE_PIPE] = ACTIONS(526),
    [anon_sym_PLUS] = ACTIONS(526),
    [anon_sym_DASH] = ACTIONS(526),
    [anon_sym_STAR] = ACTIONS(526),
    [anon_sym_SLASH] = ACTIONS(524),
    [anon_sym_PIPE] = ACTIONS(524),
    [anon_sym_CARET] = ACTIONS(526),
    [anon_sym_PERCENT] = ACTIONS(526),
    [anon_sym_LT_LT] = ACTIONS(526),
    [anon_sym_GT_GT] = ACTIONS(524),
    [anon_sym_GT_GT_GT] = ACTIONS(526),
    [anon_sym_QMARK] = ACTIONS(526),
    [anon_sym_RPAREN] = ACTIONS(526),
    [anon_sym_COMMA] = ACTIONS(526),
    [sym_comment] = ACTIONS(38),
  },
  [199] = {
    [anon_sym_RBRACE] = ACTIONS(528),
    [anon_sym_requires] = ACTIONS(528),
    [anon_sym_exports] = ACTIONS(528),
    [anon_sym_opens] = ACTIONS(528),
    [anon_sym_uses] = ACTIONS(528),
    [anon_sym_provides] = ACTIONS(528),
    [sym_comment] = ACTIONS(38),
  },
  [200] = {
    [sym__semicolon] = ACTIONS(530),
    [anon_sym_COMMA] = ACTIONS(454),
    [sym_comment] = ACTIONS(38),
  },
  [201] = {
    [sym__semicolon] = ACTIONS(532),
    [anon_sym_COMMA] = ACTIONS(532),
    [anon_sym_DOT] = ACTIONS(336),
    [sym_comment] = ACTIONS(38),
  },
  [202] = {
    [sym_package_or_type_name] = STATE(212),
    [sym_identifier] = ACTIONS(54),
    [sym_comment] = ACTIONS(38),
  },
  [203] = {
    [sym__semicolon] = ACTIONS(530),
    [anon_sym_COMMA] = ACTIONS(534),
    [sym_comment] = ACTIONS(38),
  },
  [204] = {
    [anon_sym_EQ] = ACTIONS(458),
    [anon_sym_PLUS_EQ] = ACTIONS(460),
    [anon_sym_DASH_EQ] = ACTIONS(460),
    [anon_sym_STAR_EQ] = ACTIONS(460),
    [anon_sym_SLASH_EQ] = ACTIONS(460),
    [anon_sym_AMP_EQ] = ACTIONS(460),
    [anon_sym_PIPE_EQ] = ACTIONS(460),
    [anon_sym_CARET_EQ] = ACTIONS(460),
    [anon_sym_PERCENT_EQ] = ACTIONS(460),
    [anon_sym_LT_LT_EQ] = ACTIONS(460),
    [anon_sym_GT_GT_EQ] = ACTIONS(460),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(460),
    [anon_sym_GT] = ACTIONS(462),
    [anon_sym_LT] = ACTIONS(462),
    [anon_sym_EQ_EQ] = ACTIONS(464),
    [anon_sym_GT_EQ] = ACTIONS(464),
    [anon_sym_LT_EQ] = ACTIONS(464),
    [anon_sym_BANG_EQ] = ACTIONS(464),
    [anon_sym_AMP_AMP] = ACTIONS(536),
    [anon_sym_PIPE_PIPE] = ACTIONS(538),
    [anon_sym_PLUS] = ACTIONS(540),
    [anon_sym_DASH] = ACTIONS(540),
    [anon_sym_STAR] = ACTIONS(542),
    [anon_sym_SLASH] = ACTIONS(542),
    [anon_sym_AMP] = ACTIONS(466),
    [anon_sym_PIPE] = ACTIONS(544),
    [anon_sym_CARET] = ACTIONS(544),
    [anon_sym_PERCENT] = ACTIONS(542),
    [anon_sym_LT_LT] = ACTIONS(542),
    [anon_sym_GT_GT] = ACTIONS(542),
    [anon_sym_GT_GT_GT] = ACTIONS(542),
    [anon_sym_QMARK] = ACTIONS(546),
    [anon_sym_PLUS_PLUS] = ACTIONS(94),
    [anon_sym_DASH_DASH] = ACTIONS(94),
    [anon_sym_RPAREN] = ACTIONS(228),
    [anon_sym_COMMA] = ACTIONS(228),
    [sym_comment] = ACTIONS(38),
  },
  [205] = {
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
    [anon_sym_STAR] = ACTIONS(542),
    [anon_sym_SLASH] = ACTIONS(542),
    [anon_sym_AMP] = ACTIONS(232),
    [anon_sym_PIPE] = ACTIONS(232),
    [anon_sym_CARET] = ACTIONS(232),
    [anon_sym_PERCENT] = ACTIONS(542),
    [anon_sym_LT_LT] = ACTIONS(542),
    [anon_sym_GT_GT] = ACTIONS(542),
    [anon_sym_GT_GT_GT] = ACTIONS(542),
    [anon_sym_QMARK] = ACTIONS(230),
    [anon_sym_PLUS_PLUS] = ACTIONS(94),
    [anon_sym_DASH_DASH] = ACTIONS(94),
    [anon_sym_RPAREN] = ACTIONS(230),
    [anon_sym_COMMA] = ACTIONS(230),
    [sym_comment] = ACTIONS(38),
  },
  [206] = {
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
    [anon_sym_GT] = ACTIONS(462),
    [anon_sym_LT] = ACTIONS(462),
    [anon_sym_EQ_EQ] = ACTIONS(464),
    [anon_sym_GT_EQ] = ACTIONS(464),
    [anon_sym_LT_EQ] = ACTIONS(464),
    [anon_sym_BANG_EQ] = ACTIONS(464),
    [anon_sym_AMP_AMP] = ACTIONS(230),
    [anon_sym_PIPE_PIPE] = ACTIONS(230),
    [anon_sym_PLUS] = ACTIONS(540),
    [anon_sym_DASH] = ACTIONS(540),
    [anon_sym_STAR] = ACTIONS(542),
    [anon_sym_SLASH] = ACTIONS(542),
    [anon_sym_AMP] = ACTIONS(232),
    [anon_sym_PIPE] = ACTIONS(232),
    [anon_sym_CARET] = ACTIONS(232),
    [anon_sym_PERCENT] = ACTIONS(542),
    [anon_sym_LT_LT] = ACTIONS(542),
    [anon_sym_GT_GT] = ACTIONS(542),
    [anon_sym_GT_GT_GT] = ACTIONS(542),
    [anon_sym_QMARK] = ACTIONS(230),
    [anon_sym_PLUS_PLUS] = ACTIONS(94),
    [anon_sym_DASH_DASH] = ACTIONS(94),
    [anon_sym_RPAREN] = ACTIONS(230),
    [anon_sym_COMMA] = ACTIONS(230),
    [sym_comment] = ACTIONS(38),
  },
  [207] = {
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
    [anon_sym_GT] = ACTIONS(462),
    [anon_sym_LT] = ACTIONS(462),
    [anon_sym_EQ_EQ] = ACTIONS(464),
    [anon_sym_GT_EQ] = ACTIONS(464),
    [anon_sym_LT_EQ] = ACTIONS(464),
    [anon_sym_BANG_EQ] = ACTIONS(464),
    [anon_sym_AMP_AMP] = ACTIONS(536),
    [anon_sym_PIPE_PIPE] = ACTIONS(230),
    [anon_sym_PLUS] = ACTIONS(540),
    [anon_sym_DASH] = ACTIONS(540),
    [anon_sym_STAR] = ACTIONS(542),
    [anon_sym_SLASH] = ACTIONS(542),
    [anon_sym_AMP] = ACTIONS(466),
    [anon_sym_PIPE] = ACTIONS(232),
    [anon_sym_CARET] = ACTIONS(232),
    [anon_sym_PERCENT] = ACTIONS(542),
    [anon_sym_LT_LT] = ACTIONS(542),
    [anon_sym_GT_GT] = ACTIONS(542),
    [anon_sym_GT_GT_GT] = ACTIONS(542),
    [anon_sym_QMARK] = ACTIONS(230),
    [anon_sym_PLUS_PLUS] = ACTIONS(94),
    [anon_sym_DASH_DASH] = ACTIONS(94),
    [anon_sym_RPAREN] = ACTIONS(230),
    [anon_sym_COMMA] = ACTIONS(230),
    [sym_comment] = ACTIONS(38),
  },
  [208] = {
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
    [anon_sym_GT] = ACTIONS(462),
    [anon_sym_LT] = ACTIONS(462),
    [anon_sym_EQ_EQ] = ACTIONS(464),
    [anon_sym_GT_EQ] = ACTIONS(464),
    [anon_sym_LT_EQ] = ACTIONS(464),
    [anon_sym_BANG_EQ] = ACTIONS(464),
    [anon_sym_AMP_AMP] = ACTIONS(230),
    [anon_sym_PIPE_PIPE] = ACTIONS(230),
    [anon_sym_PLUS] = ACTIONS(232),
    [anon_sym_DASH] = ACTIONS(232),
    [anon_sym_STAR] = ACTIONS(542),
    [anon_sym_SLASH] = ACTIONS(542),
    [anon_sym_AMP] = ACTIONS(232),
    [anon_sym_PIPE] = ACTIONS(232),
    [anon_sym_CARET] = ACTIONS(232),
    [anon_sym_PERCENT] = ACTIONS(542),
    [anon_sym_LT_LT] = ACTIONS(542),
    [anon_sym_GT_GT] = ACTIONS(542),
    [anon_sym_GT_GT_GT] = ACTIONS(542),
    [anon_sym_QMARK] = ACTIONS(230),
    [anon_sym_PLUS_PLUS] = ACTIONS(94),
    [anon_sym_DASH_DASH] = ACTIONS(94),
    [anon_sym_RPAREN] = ACTIONS(230),
    [anon_sym_COMMA] = ACTIONS(230),
    [sym_comment] = ACTIONS(38),
  },
  [209] = {
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
    [anon_sym_COLON] = ACTIONS(548),
    [anon_sym_PLUS_PLUS] = ACTIONS(94),
    [anon_sym_DASH_DASH] = ACTIONS(94),
    [sym_comment] = ACTIONS(38),
  },
  [210] = {
    [sym_unary_expression] = STATE(129),
    [sym_conditional_expression] = STATE(215),
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
    [anon_sym_BANG] = ACTIONS(302),
    [anon_sym_TILDE] = ACTIONS(302),
    [sym_comment] = ACTIONS(38),
  },
  [211] = {
    [anon_sym_RBRACE] = ACTIONS(550),
    [anon_sym_requires] = ACTIONS(550),
    [anon_sym_exports] = ACTIONS(550),
    [anon_sym_opens] = ACTIONS(550),
    [anon_sym_uses] = ACTIONS(550),
    [anon_sym_provides] = ACTIONS(550),
    [sym_comment] = ACTIONS(38),
  },
  [212] = {
    [sym__semicolon] = ACTIONS(552),
    [anon_sym_COMMA] = ACTIONS(552),
    [anon_sym_DOT] = ACTIONS(148),
    [sym_comment] = ACTIONS(38),
  },
  [213] = {
    [sym_package_or_type_name] = STATE(216),
    [sym_identifier] = ACTIONS(54),
    [sym_comment] = ACTIONS(38),
  },
  [214] = {
    [sym__expression] = STATE(217),
    [sym_assignment_expression] = STATE(18),
    [sym_binary_expression] = STATE(18),
    [sym_ternary_expression] = STATE(18),
    [sym_unary_expression] = STATE(19),
    [sym_update_expression] = STATE(18),
    [anon_sym_BANG] = ACTIONS(364),
    [anon_sym_TILDE] = ACTIONS(364),
    [anon_sym_PLUS_PLUS] = ACTIONS(366),
    [anon_sym_DASH_DASH] = ACTIONS(366),
    [sym_comment] = ACTIONS(38),
  },
  [215] = {
    [anon_sym_RPAREN] = ACTIONS(554),
    [anon_sym_COMMA] = ACTIONS(554),
    [sym_comment] = ACTIONS(38),
  },
  [216] = {
    [sym__semicolon] = ACTIONS(556),
    [anon_sym_COMMA] = ACTIONS(556),
    [anon_sym_DOT] = ACTIONS(148),
    [sym_comment] = ACTIONS(38),
  },
  [217] = {
    [anon_sym_EQ] = ACTIONS(356),
    [anon_sym_PLUS_EQ] = ACTIONS(354),
    [anon_sym_DASH_EQ] = ACTIONS(354),
    [anon_sym_STAR_EQ] = ACTIONS(354),
    [anon_sym_SLASH_EQ] = ACTIONS(354),
    [anon_sym_AMP_EQ] = ACTIONS(354),
    [anon_sym_PIPE_EQ] = ACTIONS(354),
    [anon_sym_CARET_EQ] = ACTIONS(354),
    [anon_sym_PERCENT_EQ] = ACTIONS(354),
    [anon_sym_LT_LT_EQ] = ACTIONS(354),
    [anon_sym_GT_GT_EQ] = ACTIONS(354),
    [anon_sym_GT_GT_GT_EQ] = ACTIONS(354),
    [anon_sym_GT] = ACTIONS(462),
    [anon_sym_LT] = ACTIONS(462),
    [anon_sym_EQ_EQ] = ACTIONS(464),
    [anon_sym_GT_EQ] = ACTIONS(464),
    [anon_sym_LT_EQ] = ACTIONS(464),
    [anon_sym_BANG_EQ] = ACTIONS(464),
    [anon_sym_AMP_AMP] = ACTIONS(536),
    [anon_sym_PIPE_PIPE] = ACTIONS(538),
    [anon_sym_PLUS] = ACTIONS(540),
    [anon_sym_DASH] = ACTIONS(540),
    [anon_sym_STAR] = ACTIONS(542),
    [anon_sym_SLASH] = ACTIONS(542),
    [anon_sym_AMP] = ACTIONS(466),
    [anon_sym_PIPE] = ACTIONS(544),
    [anon_sym_CARET] = ACTIONS(544),
    [anon_sym_PERCENT] = ACTIONS(542),
    [anon_sym_LT_LT] = ACTIONS(542),
    [anon_sym_GT_GT] = ACTIONS(542),
    [anon_sym_GT_GT_GT] = ACTIONS(542),
    [anon_sym_QMARK] = ACTIONS(546),
    [anon_sym_PLUS_PLUS] = ACTIONS(94),
    [anon_sym_DASH_DASH] = ACTIONS(94),
    [anon_sym_RPAREN] = ACTIONS(354),
    [anon_sym_COMMA] = ACTIONS(354),
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
  [72] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(39),
  [74] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(39),
  [76] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(40),
  [78] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(40),
  [80] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(41),
  [82] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(42),
  [84] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(43),
  [86] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(44),
  [88] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(41),
  [90] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(42),
  [92] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(45),
  [94] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(46),
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
  [122] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(48),
  [124] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(49),
  [126] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_character_literal, 2),
  [128] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_character_literal_repeat1, 1),
  [130] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(51),
  [132] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(52),
  [134] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_unary_expression, 2),
  [136] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_unary_expression, 2),
  [138] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_update_expression, 2),
  [140] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_update_expression, 2),
  [142] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_package_or_type_name, 1),
  [144] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(53),
  [146] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_marker_annotation, 2),
  [148] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(54),
  [150] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_identifier, 1),
  [152] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(56),
  [154] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(58),
  [156] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(59),
  [158] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(61),
  [160] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
  [162] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym__statement, 2),
  [164] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym__statement, 2),
  [166] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(68),
  [168] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(69),
  [170] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [172] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2),
  [174] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [176] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(71),
  [178] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(72),
  [180] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_declaration_repeat1, 2),
  [182] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_character_literal, 3),
  [184] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_character_literal_repeat1, 2),
  [186] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(4),
  [188] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(6),
  [190] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(73),
  [192] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(74),
  [194] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(78),
  [196] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(79),
  [198] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(80),
  [200] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_identifier, 2),
  [202] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(81),
  [204] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(82),
  [206] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(83),
  [208] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(84),
  [210] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(85),
  [212] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(86),
  [214] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_package_declaration, 3),
  [216] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_package_declaration, 3),
  [218] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_package_declaration, 3),
  [220] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(89),
  [222] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_single_type_import_declaration, 3),
  [224] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_single_type_import_declaration, 3),
  [226] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_single_type_import_declaration, 3),
  [228] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_assignment_expression, 3, .fragile = true),
  [230] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_binary_expression, 3),
  [232] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_binary_expression, 3),
  [234] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(90),
  [236] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(90),
  [238] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(91),
  [240] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(91),
  [242] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(92),
  [244] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(93),
  [246] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(94),
  [248] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(95),
  [250] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(92),
  [252] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(93),
  [254] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(96),
  [256] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(97),
  [258] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_annotation, 4),
  [260] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(100),
  [262] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(101),
  [264] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(102),
  [266] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_pair_list, 1),
  [268] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(103),
  [270] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_package_or_type_name, 3),
  [272] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(105),
  [274] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_identifier_repeat1, 2),
  [276] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(107),
  [278] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 4),
  [280] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_declaration, 4),
  [282] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 4),
  [284] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(108),
  [286] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(109),
  [288] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(113),
  [290] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_declaration_repeat2, 1),
  [292] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_package_declaration, 4),
  [294] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_package_declaration, 4),
  [296] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_package_declaration, 4),
  [298] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(125),
  [300] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(126),
  [302] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(127),
  [304] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_single_element_annotation, 5),
  [306] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_normal_annotation, 5),
  [308] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(141),
  [310] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_pair_list, 2),
  [312] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(143),
  [314] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 5),
  [316] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_declaration, 5),
  [318] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 5),
  [320] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(144),
  [322] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_identifier_repeat1, 3),
  [324] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_requires_modifier, 1),
  [326] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_requires_modifier, 1),
  [328] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_name, 1),
  [330] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_directive_repeat1, 1),
  [332] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_directive_repeat1, 1),
  [334] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(145),
  [336] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(146),
  [338] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_package_or_type_name, 1),
  [340] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_package_or_type_name, 1),
  [342] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(149),
  [344] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(150),
  [346] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(151),
  [348] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(154),
  [350] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_declaration_repeat2, 2),
  [352] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(155),
  [354] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_ternary_expression, 5, .fragile = true),
  [356] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_ternary_expression, 5, .fragile = true),
  [358] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_package_declaration, 5),
  [360] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_package_declaration, 5),
  [362] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_package_declaration, 5),
  [364] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(157),
  [366] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(158),
  [368] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value, 1),
  [370] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_multiplicative_expression, 1),
  [372] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_multiplicative_expression, 1),
  [374] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_pair, 3),
  [376] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(161),
  [378] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(162),
  [380] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_expression, 1),
  [382] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(163),
  [384] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_or_expression, 1),
  [386] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_and_expression, 1),
  [388] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(164),
  [390] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_inclusive_or_expression, 1),
  [392] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_inclusive_or_expression, 1),
  [394] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(165),
  [396] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_exclusive_or_expression, 1),
  [398] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_exclusive_or_expression, 1),
  [400] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(166),
  [402] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_equality_expression, 1),
  [404] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_and_expression, 1),
  [406] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_and_expression, 1),
  [408] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(167),
  [410] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_relational_expression, 1),
  [412] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_relational_expression, 1),
  [414] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(168),
  [416] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(168),
  [418] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_shift_expression, 1),
  [420] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_shift_expression, 1),
  [422] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(169),
  [424] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_additive_expression, 1),
  [426] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_additive_expression, 1),
  [428] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(170),
  [430] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(170),
  [432] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_element_value_pair_list_repeat1, 2),
  [434] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 6),
  [436] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_declaration, 6),
  [438] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 6),
  [440] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_directive, 3),
  [442] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(172),
  [444] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_module_directive_repeat1, 2),
  [446] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_module_directive_repeat1, 2),
  [448] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(173),
  [450] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(109),
  [452] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(175),
  [454] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(178),
  [456] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(181),
  [458] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(182),
  [460] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(182),
  [462] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(183),
  [464] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(183),
  [466] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(184),
  [468] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_element_value_array_initializer, 2),
  [470] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_element_value_pair_list_repeat1, 3),
  [472] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_name, 3),
  [474] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_directive, 4),
  [476] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_directive_repeat2, 2),
  [478] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_package_or_type_name, 3),
  [480] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_package_or_type_name, 3),
  [482] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(199),
  [484] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(202),
  [486] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 7),
  [488] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_module_declaration, 7),
  [490] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(sym_module_declaration, 7),
  [492] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_or_expression, 3),
  [494] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(210),
  [496] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_and_expression, 3),
  [498] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_inclusive_or_expression, 3),
  [500] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_inclusive_or_expression, 3),
  [502] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_exclusive_or_expression, 3),
  [504] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_exclusive_or_expression, 3),
  [506] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_relational_expression, 3),
  [508] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_relational_expression, 3),
  [510] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_equality_expression, 3),
  [512] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_and_expression, 3),
  [514] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_and_expression, 3),
  [516] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_shift_expression, 3),
  [518] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_shift_expression, 3),
  [520] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_additive_expression, 3),
  [522] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_additive_expression, 3),
  [524] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(sym_multiplicative_expression, 3),
  [526] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_multiplicative_expression, 3),
  [528] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_directive, 5),
  [530] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(211),
  [532] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_directive_repeat2, 3),
  [534] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(213),
  [536] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(184),
  [538] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(185),
  [540] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(186),
  [542] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(187),
  [544] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(185),
  [546] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(188),
  [548] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(214),
  [550] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_module_directive, 6),
  [552] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_directive_repeat3, 2),
  [554] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_conditional_expression, 5),
  [556] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_module_directive_repeat3, 3),
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
