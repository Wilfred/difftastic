#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 223
#define SYMBOL_COUNT 102
#define ALIAS_COUNT 11
#define TOKEN_COUNT 52
#define EXTERNAL_TOKEN_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 6

enum {
  sym__descendant_operator = 1,
  anon_sym_ATimport = 2,
  anon_sym_COMMA = 3,
  anon_sym_SEMI = 4,
  anon_sym_ATmedia = 5,
  anon_sym_ATcharset = 6,
  anon_sym_ATnamespace = 7,
  anon_sym_ATkeyframes = 8,
  aux_sym_SLASH_AT_LBRACK_DASHa_DASHz_RBRACK_PLUSkeyframes_SLASH = 9,
  anon_sym_LBRACE = 10,
  anon_sym_RBRACE = 11,
  sym_from = 12,
  sym_to = 13,
  anon_sym_ATsupports = 14,
  sym_nesting_selector = 15,
  anon_sym_STAR = 16,
  anon_sym_DOT = 17,
  anon_sym_COLON = 18,
  anon_sym_COLON_COLON = 19,
  anon_sym_POUND = 20,
  anon_sym_LBRACK = 21,
  anon_sym_EQ = 22,
  anon_sym_TILDE_EQ = 23,
  anon_sym_CARET_EQ = 24,
  anon_sym_PIPE_EQ = 25,
  anon_sym_STAR_EQ = 26,
  anon_sym_DOLLAR_EQ = 27,
  anon_sym_RBRACK = 28,
  anon_sym_GT = 29,
  anon_sym_TILDE = 30,
  anon_sym_PLUS = 31,
  anon_sym_LPAREN = 32,
  anon_sym_RPAREN = 33,
  sym_important = 34,
  anon_sym_LPAREN2 = 35,
  anon_sym_and = 36,
  anon_sym_or = 37,
  anon_sym_not = 38,
  anon_sym_only = 39,
  anon_sym_selector = 40,
  aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH = 41,
  sym_string_value = 42,
  aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH = 43,
  aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH = 44,
  sym_unit = 45,
  anon_sym_DASH = 46,
  anon_sym_SLASH = 47,
  sym_identifier = 48,
  sym_at_keyword = 49,
  sym_comment = 50,
  sym_plain_value = 51,
  sym_stylesheet = 52,
  sym_import_statement = 53,
  sym_media_statement = 54,
  sym_charset_statement = 55,
  sym_namespace_statement = 56,
  sym_keyframes_statement = 57,
  sym_keyframe_block_list = 58,
  sym_keyframe_block = 59,
  sym_supports_statement = 60,
  sym_at_rule = 61,
  sym_rule_set = 62,
  sym_selectors = 63,
  sym_block = 64,
  sym__selector = 65,
  sym_universal_selector = 66,
  sym_class_selector = 67,
  sym_pseudo_class_selector = 68,
  sym_pseudo_element_selector = 69,
  sym_id_selector = 70,
  sym_attribute_selector = 71,
  sym_child_selector = 72,
  sym_descendant_selector = 73,
  sym_sibling_selector = 74,
  sym_adjacent_sibling_selector = 75,
  sym_pseudo_class_arguments = 76,
  sym_declaration = 77,
  sym_last_declaration = 78,
  sym__query = 79,
  sym_feature_query = 80,
  sym_parenthesized_query = 81,
  sym_binary_query = 82,
  sym_unary_query = 83,
  sym_selector_query = 84,
  sym__value = 85,
  sym_parenthesized_value = 86,
  sym_color_value = 87,
  sym_integer_value = 88,
  sym_float_value = 89,
  sym_call_expression = 90,
  sym_binary_expression = 91,
  sym_arguments = 92,
  aux_sym_stylesheet_repeat1 = 93,
  aux_sym_import_statement_repeat1 = 94,
  aux_sym_keyframe_block_list_repeat1 = 95,
  aux_sym_selectors_repeat1 = 96,
  aux_sym_block_repeat1 = 97,
  aux_sym_pseudo_class_arguments_repeat1 = 98,
  aux_sym_pseudo_class_arguments_repeat2 = 99,
  aux_sym_declaration_repeat1 = 100,
  aux_sym_arguments_repeat1 = 101,
  alias_sym_attribute_name = 102,
  alias_sym_class_name = 103,
  alias_sym_feature_name = 104,
  alias_sym_function_name = 105,
  alias_sym_id_name = 106,
  alias_sym_keyframes_name = 107,
  alias_sym_keyword_query = 108,
  alias_sym_namespace_name = 109,
  alias_sym_plain_value = 110,
  alias_sym_property_name = 111,
  alias_sym_tag_name = 112,
};

static const char *ts_symbol_names[] = {
  [sym__descendant_operator] = "_descendant_operator",
  [ts_builtin_sym_end] = "END",
  [anon_sym_ATimport] = "@import",
  [anon_sym_COMMA] = ",",
  [anon_sym_SEMI] = ";",
  [anon_sym_ATmedia] = "@media",
  [anon_sym_ATcharset] = "@charset",
  [anon_sym_ATnamespace] = "@namespace",
  [anon_sym_ATkeyframes] = "@keyframes",
  [aux_sym_SLASH_AT_LBRACK_DASHa_DASHz_RBRACK_PLUSkeyframes_SLASH] = "at_keyword",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_from] = "from",
  [sym_to] = "to",
  [anon_sym_ATsupports] = "@supports",
  [sym_nesting_selector] = "nesting_selector",
  [anon_sym_STAR] = "*",
  [anon_sym_DOT] = ".",
  [anon_sym_COLON] = ":",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_POUND] = "#",
  [anon_sym_LBRACK] = "[",
  [anon_sym_EQ] = "=",
  [anon_sym_TILDE_EQ] = "~=",
  [anon_sym_CARET_EQ] = "^=",
  [anon_sym_PIPE_EQ] = "|=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_DOLLAR_EQ] = "$=",
  [anon_sym_RBRACK] = "]",
  [anon_sym_GT] = ">",
  [anon_sym_TILDE] = "~",
  [anon_sym_PLUS] = "+",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_important] = "important",
  [anon_sym_LPAREN2] = "(",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_not] = "not",
  [anon_sym_only] = "only",
  [anon_sym_selector] = "selector",
  [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH] = "/[0-9a-fA-F]{3,8}/",
  [sym_string_value] = "string_value",
  [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = "/(+|-|)\\d+/",
  [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = "/(+|-|)\\d*(.\\d+|[eE](-|)\\d+|.\\d+[eE](-|)\\d+)/",
  [sym_unit] = "unit",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [sym_identifier] = "identifier",
  [sym_at_keyword] = "at_keyword",
  [sym_comment] = "comment",
  [sym_plain_value] = "plain_value",
  [sym_stylesheet] = "stylesheet",
  [sym_import_statement] = "import_statement",
  [sym_media_statement] = "media_statement",
  [sym_charset_statement] = "charset_statement",
  [sym_namespace_statement] = "namespace_statement",
  [sym_keyframes_statement] = "keyframes_statement",
  [sym_keyframe_block_list] = "keyframe_block_list",
  [sym_keyframe_block] = "keyframe_block",
  [sym_supports_statement] = "supports_statement",
  [sym_at_rule] = "at_rule",
  [sym_rule_set] = "rule_set",
  [sym_selectors] = "selectors",
  [sym_block] = "block",
  [sym__selector] = "_selector",
  [sym_universal_selector] = "universal_selector",
  [sym_class_selector] = "class_selector",
  [sym_pseudo_class_selector] = "pseudo_class_selector",
  [sym_pseudo_element_selector] = "pseudo_element_selector",
  [sym_id_selector] = "id_selector",
  [sym_attribute_selector] = "attribute_selector",
  [sym_child_selector] = "child_selector",
  [sym_descendant_selector] = "descendant_selector",
  [sym_sibling_selector] = "sibling_selector",
  [sym_adjacent_sibling_selector] = "adjacent_sibling_selector",
  [sym_pseudo_class_arguments] = "arguments",
  [sym_declaration] = "declaration",
  [sym_last_declaration] = "declaration",
  [sym__query] = "_query",
  [sym_feature_query] = "feature_query",
  [sym_parenthesized_query] = "parenthesized_query",
  [sym_binary_query] = "binary_query",
  [sym_unary_query] = "unary_query",
  [sym_selector_query] = "selector_query",
  [sym__value] = "_value",
  [sym_parenthesized_value] = "parenthesized_value",
  [sym_color_value] = "color_value",
  [sym_integer_value] = "integer_value",
  [sym_float_value] = "float_value",
  [sym_call_expression] = "call_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_arguments] = "arguments",
  [aux_sym_stylesheet_repeat1] = "stylesheet_repeat1",
  [aux_sym_import_statement_repeat1] = "import_statement_repeat1",
  [aux_sym_keyframe_block_list_repeat1] = "keyframe_block_list_repeat1",
  [aux_sym_selectors_repeat1] = "selectors_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_pseudo_class_arguments_repeat1] = "pseudo_class_arguments_repeat1",
  [aux_sym_pseudo_class_arguments_repeat2] = "pseudo_class_arguments_repeat2",
  [aux_sym_declaration_repeat1] = "declaration_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [alias_sym_attribute_name] = "attribute_name",
  [alias_sym_class_name] = "class_name",
  [alias_sym_feature_name] = "feature_name",
  [alias_sym_function_name] = "function_name",
  [alias_sym_id_name] = "id_name",
  [alias_sym_keyframes_name] = "keyframes_name",
  [alias_sym_keyword_query] = "keyword_query",
  [alias_sym_namespace_name] = "namespace_name",
  [alias_sym_plain_value] = "plain_value",
  [alias_sym_property_name] = "property_name",
  [alias_sym_tag_name] = "tag_name",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [sym__descendant_operator] = {
    .visible = false,
    .named = true,
  },
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_ATimport] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATmedia] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATcharset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATnamespace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATkeyframes] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_AT_LBRACK_DASHa_DASHz_RBRACK_PLUSkeyframes_SLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_from] = {
    .visible = true,
    .named = true,
  },
  [sym_to] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATsupports] = {
    .visible = true,
    .named = false,
  },
  [sym_nesting_selector] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
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
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
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
  [sym_important] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_only] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_selector] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym_string_value] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym_unit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_at_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_plain_value] = {
    .visible = true,
    .named = true,
  },
  [sym_stylesheet] = {
    .visible = true,
    .named = true,
  },
  [sym_import_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_media_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_charset_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_keyframes_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_keyframe_block_list] = {
    .visible = true,
    .named = true,
  },
  [sym_keyframe_block] = {
    .visible = true,
    .named = true,
  },
  [sym_supports_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_at_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_rule_set] = {
    .visible = true,
    .named = true,
  },
  [sym_selectors] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__selector] = {
    .visible = false,
    .named = true,
  },
  [sym_universal_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_class_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_class_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_element_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_id_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_child_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_descendant_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_sibling_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_adjacent_sibling_selector] = {
    .visible = true,
    .named = true,
  },
  [sym_pseudo_class_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_last_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__query] = {
    .visible = false,
    .named = true,
  },
  [sym_feature_query] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_query] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_query] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_query] = {
    .visible = true,
    .named = true,
  },
  [sym_selector_query] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_parenthesized_value] = {
    .visible = true,
    .named = true,
  },
  [sym_color_value] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_value] = {
    .visible = true,
    .named = true,
  },
  [sym_float_value] = {
    .visible = true,
    .named = true,
  },
  [sym_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_stylesheet_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_import_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_keyframe_block_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_selectors_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pseudo_class_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pseudo_class_arguments_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_class_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_feature_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_function_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_id_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_keyframes_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_keyword_query] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_namespace_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_plain_value] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_property_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_tag_name] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[17][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [0] = alias_sym_tag_name,
  },
  [2] = {
    [0] = alias_sym_plain_value,
  },
  [3] = {
    [0] = alias_sym_keyword_query,
  },
  [4] = {
    [1] = alias_sym_class_name,
  },
  [5] = {
    [1] = alias_sym_tag_name,
  },
  [6] = {
    [1] = alias_sym_id_name,
  },
  [7] = {
    [0] = alias_sym_function_name,
  },
  [8] = {
    [1] = alias_sym_keyframes_name,
  },
  [9] = {
    [1] = alias_sym_attribute_name,
  },
  [10] = {
    [2] = alias_sym_class_name,
  },
  [11] = {
    [2] = alias_sym_tag_name,
  },
  [12] = {
    [2] = alias_sym_id_name,
  },
  [13] = {
    [1] = alias_sym_namespace_name,
  },
  [14] = {
    [0] = alias_sym_property_name,
  },
  [15] = {
    [2] = alias_sym_attribute_name,
  },
  [16] = {
    [1] = alias_sym_feature_name,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(16);
      if (lookahead == '$')
        ADVANCE(17);
      if (lookahead == '&')
        ADVANCE(19);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == '(')
        ADVANCE(23);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(25);
      if (lookahead == '+')
        ADVANCE(27);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == '.')
        ADVANCE(36);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ':')
        ADVANCE(41);
      if (lookahead == ';')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(44);
      if (lookahead == '>')
        ADVANCE(45);
      if (lookahead == '@')
        ADVANCE(46);
      if (lookahead == '[')
        ADVANCE(102);
      if (lookahead == ']')
        ADVANCE(103);
      if (lookahead == '^')
        ADVANCE(104);
      if (lookahead == 'a')
        ADVANCE(106);
      if (lookahead == 'f')
        ADVANCE(116);
      if (lookahead == 'n')
        ADVANCE(120);
      if (lookahead == 'o')
        ADVANCE(123);
      if (lookahead == 's')
        ADVANCE(128);
      if (lookahead == 't')
        ADVANCE(136);
      if (lookahead == '{')
        ADVANCE(138);
      if (lookahead == '|')
        ADVANCE(139);
      if (lookahead == '}')
        ADVANCE(141);
      if (lookahead == '~')
        ADVANCE(142);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(152);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'd'))
        ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(157);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == 'i')
        ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == 'm')
        ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == 'p')
        ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == 'o')
        ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == 'r')
        ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == 't')
        ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == 'a')
        ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == 'n')
        ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == 't')
        ADVANCE(11);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_important);
      END_STATE();
    case 12:
      if (lookahead == '\"')
        ADVANCE(13);
      if (lookahead == '\\')
        ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_string_value);
      END_STATE();
    case 14:
      if (lookahead == '\n')
        ADVANCE(12);
      if (lookahead == '\"')
        ADVANCE(15);
      if (lookahead == '\\')
        ADVANCE(14);
      if (lookahead != 0)
        ADVANCE(12);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == '\"')
        ADVANCE(13);
      if (lookahead == '\\')
        ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(12);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 17:
      if (lookahead == '=')
        ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_DOLLAR_EQ);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_nesting_selector);
      END_STATE();
    case 20:
      if (lookahead == '\'')
        ADVANCE(13);
      if (lookahead == '\\')
        ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '\n')
        ADVANCE(20);
      if (lookahead == '\'')
        ADVANCE(22);
      if (lookahead == '\\')
        ADVANCE(21);
      if (lookahead != 0)
        ADVANCE(20);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == '\'')
        ADVANCE(13);
      if (lookahead == '\\')
        ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(20);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=')
        ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(29);
      END_STATE();
    case 30:
      if (lookahead == '-')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(32);
      END_STATE();
    case 31:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(32);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(29);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*')
        ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == '*')
        ADVANCE(39);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == '*')
        ADVANCE(39);
      if (lookahead == '/')
        ADVANCE(40);
      if (lookahead != 0)
        ADVANCE(38);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':')
        ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 46:
      if (lookahead == 'c')
        ADVANCE(47);
      if (lookahead == 'i')
        ADVANCE(65);
      if (lookahead == 'k')
        ADVANCE(71);
      if (lookahead == 'm')
        ADVANCE(80);
      if (lookahead == 'n')
        ADVANCE(85);
      if (lookahead == 's')
        ADVANCE(94);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(60);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'h')
        ADVANCE(48);
      if (lookahead == 'k')
        ADVANCE(50);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(60);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a')
        ADVANCE(49);
      if (lookahead == 'k')
        ADVANCE(50);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(60);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(50);
      if (lookahead == 'r')
        ADVANCE(61);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(60);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e')
        ADVANCE(51);
      if (lookahead == 'k')
        ADVANCE(50);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(60);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(50);
      if (lookahead == 'y')
        ADVANCE(52);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(60);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f')
        ADVANCE(53);
      if (lookahead == 'k')
        ADVANCE(50);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(60);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(50);
      if (lookahead == 'r')
        ADVANCE(54);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(60);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a')
        ADVANCE(55);
      if (lookahead == 'k')
        ADVANCE(50);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(60);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(50);
      if (lookahead == 'm')
        ADVANCE(56);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(60);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e')
        ADVANCE(57);
      if (lookahead == 'k')
        ADVANCE(50);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(60);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(50);
      if (lookahead == 's')
        ADVANCE(58);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(60);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_SLASH_AT_LBRACK_DASHa_DASHz_RBRACK_PLUSkeyframes_SLASH);
      if (lookahead == 'k')
        ADVANCE(50);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(60);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(50);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(50);
      if (lookahead == 's')
        ADVANCE(62);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(60);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e')
        ADVANCE(63);
      if (lookahead == 'k')
        ADVANCE(50);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(60);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(50);
      if (lookahead == 't')
        ADVANCE(64);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(60);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_ATcharset);
      if (lookahead == 'k')
        ADVANCE(50);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(60);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(50);
      if (lookahead == 'm')
        ADVANCE(66);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(60);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(50);
      if (lookahead == 'p')
        ADVANCE(67);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(60);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(50);
      if (lookahead == 'o')
        ADVANCE(68);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(60);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(50);
      if (lookahead == 'r')
        ADVANCE(69);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(60);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(50);
      if (lookahead == 't')
        ADVANCE(70);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(60);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_ATimport);
      if (lookahead == 'k')
        ADVANCE(50);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(60);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e')
        ADVANCE(72);
      if (lookahead == 'k')
        ADVANCE(50);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(60);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(50);
      if (lookahead == 'y')
        ADVANCE(73);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(60);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f')
        ADVANCE(74);
      if (lookahead == 'k')
        ADVANCE(50);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(60);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(50);
      if (lookahead == 'r')
        ADVANCE(75);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(60);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a')
        ADVANCE(76);
      if (lookahead == 'k')
        ADVANCE(50);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(60);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(50);
      if (lookahead == 'm')
        ADVANCE(77);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(60);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e')
        ADVANCE(78);
      if (lookahead == 'k')
        ADVANCE(50);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(60);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(50);
      if (lookahead == 's')
        ADVANCE(79);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(60);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_ATkeyframes);
      if (lookahead == 'k')
        ADVANCE(50);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(60);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e')
        ADVANCE(81);
      if (lookahead == 'k')
        ADVANCE(50);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(60);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd')
        ADVANCE(82);
      if (lookahead == 'k')
        ADVANCE(50);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(60);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i')
        ADVANCE(83);
      if (lookahead == 'k')
        ADVANCE(50);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(60);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a')
        ADVANCE(84);
      if (lookahead == 'k')
        ADVANCE(50);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(60);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_ATmedia);
      if (lookahead == 'k')
        ADVANCE(50);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(60);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a')
        ADVANCE(86);
      if (lookahead == 'k')
        ADVANCE(50);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(60);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(50);
      if (lookahead == 'm')
        ADVANCE(87);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(60);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e')
        ADVANCE(88);
      if (lookahead == 'k')
        ADVANCE(50);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(60);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(50);
      if (lookahead == 's')
        ADVANCE(89);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(60);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(50);
      if (lookahead == 'p')
        ADVANCE(90);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(60);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a')
        ADVANCE(91);
      if (lookahead == 'k')
        ADVANCE(50);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(60);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c')
        ADVANCE(92);
      if (lookahead == 'k')
        ADVANCE(50);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(60);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e')
        ADVANCE(93);
      if (lookahead == 'k')
        ADVANCE(50);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(60);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_ATnamespace);
      if (lookahead == 'k')
        ADVANCE(50);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(60);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(50);
      if (lookahead == 'u')
        ADVANCE(95);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(60);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(50);
      if (lookahead == 'p')
        ADVANCE(96);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(60);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(50);
      if (lookahead == 'p')
        ADVANCE(97);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(60);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(50);
      if (lookahead == 'o')
        ADVANCE(98);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(60);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(50);
      if (lookahead == 'r')
        ADVANCE(99);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(60);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(50);
      if (lookahead == 't')
        ADVANCE(100);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(60);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(50);
      if (lookahead == 's')
        ADVANCE(101);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(60);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_ATsupports);
      if (lookahead == 'k')
        ADVANCE(50);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(60);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 104:
      if (lookahead == '=')
        ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 106:
      if (lookahead == 'n')
        ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(109);
      END_STATE();
    case 107:
      if (lookahead == 'd')
        ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 109:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(110);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(111);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(112);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(113);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(114);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      END_STATE();
    case 116:
      if (lookahead == 'r')
        ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(109);
      END_STATE();
    case 117:
      if (lookahead == 'o')
        ADVANCE(118);
      END_STATE();
    case 118:
      if (lookahead == 'm')
        ADVANCE(119);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_from);
      END_STATE();
    case 120:
      if (lookahead == 'o')
        ADVANCE(121);
      END_STATE();
    case 121:
      if (lookahead == 't')
        ADVANCE(122);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 123:
      if (lookahead == 'n')
        ADVANCE(124);
      if (lookahead == 'r')
        ADVANCE(127);
      END_STATE();
    case 124:
      if (lookahead == 'l')
        ADVANCE(125);
      END_STATE();
    case 125:
      if (lookahead == 'y')
        ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_only);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 128:
      if (lookahead == 'e')
        ADVANCE(129);
      END_STATE();
    case 129:
      if (lookahead == 'l')
        ADVANCE(130);
      END_STATE();
    case 130:
      if (lookahead == 'e')
        ADVANCE(131);
      END_STATE();
    case 131:
      if (lookahead == 'c')
        ADVANCE(132);
      END_STATE();
    case 132:
      if (lookahead == 't')
        ADVANCE(133);
      END_STATE();
    case 133:
      if (lookahead == 'o')
        ADVANCE(134);
      END_STATE();
    case 134:
      if (lookahead == 'r')
        ADVANCE(135);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_selector);
      END_STATE();
    case 136:
      if (lookahead == 'o')
        ADVANCE(137);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_to);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 139:
      if (lookahead == '=')
        ADVANCE(140);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '=')
        ADVANCE(143);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 144:
      if (lookahead == '-')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(109);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(110);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(111);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(112);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(113);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(114);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(115);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(32);
      END_STATE();
    case 152:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(16);
      if (lookahead == '$')
        ADVANCE(17);
      if (lookahead == '&')
        ADVANCE(19);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == '(')
        ADVANCE(153);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(25);
      if (lookahead == '+')
        ADVANCE(27);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '-')
        ADVANCE(35);
      if (lookahead == '.')
        ADVANCE(36);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ':')
        ADVANCE(41);
      if (lookahead == ';')
        ADVANCE(43);
      if (lookahead == '=')
        ADVANCE(44);
      if (lookahead == '>')
        ADVANCE(45);
      if (lookahead == '@')
        ADVANCE(46);
      if (lookahead == '[')
        ADVANCE(102);
      if (lookahead == ']')
        ADVANCE(103);
      if (lookahead == '^')
        ADVANCE(104);
      if (lookahead == 'a')
        ADVANCE(154);
      if (lookahead == 'f')
        ADVANCE(155);
      if (lookahead == 'n')
        ADVANCE(120);
      if (lookahead == 'o')
        ADVANCE(123);
      if (lookahead == 's')
        ADVANCE(128);
      if (lookahead == 't')
        ADVANCE(136);
      if (lookahead == '{')
        ADVANCE(138);
      if (lookahead == '|')
        ADVANCE(139);
      if (lookahead == '}')
        ADVANCE(141);
      if (lookahead == '~')
        ADVANCE(142);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(152);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 154:
      if (lookahead == 'n')
        ADVANCE(107);
      END_STATE();
    case 155:
      if (lookahead == 'r')
        ADVANCE(117);
      END_STATE();
    case 156:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(109);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(109);
      END_STATE();
    case 158:
      if (lookahead == '-')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(110);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(161);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(110);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (lookahead == '-')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(111);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(111);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (lookahead == '-')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(112);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(112);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (lookahead == '-')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(113);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(113);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (lookahead == '-')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(114);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(114);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (lookahead == '-')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(115);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(115);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (lookahead == '-')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(32);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      END_STATE();
    case 172:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(16);
      if (lookahead == '&')
        ADVANCE(19);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == '*')
        ADVANCE(173);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '/')
        ADVANCE(175);
      if (lookahead == ':')
        ADVANCE(41);
      if (lookahead == '@')
        ADVANCE(46);
      if (lookahead == '[')
        ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(172);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 175:
      if (lookahead == '*')
        ADVANCE(38);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
      END_STATE();
    case 177:
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(16);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == '(')
        ADVANCE(153);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '+')
        ADVANCE(178);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '-')
        ADVANCE(179);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == '/')
        ADVANCE(193);
      if (lookahead == ';')
        ADVANCE(43);
      if (lookahead == '_')
        ADVANCE(184);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(186);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(177);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      END_STATE();
    case 178:
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == '/')
        ADVANCE(180);
      if (lookahead == '-' ||
          lookahead == '_')
        ADVANCE(184);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      END_STATE();
    case 180:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          (lookahead < '(' || lookahead > '*') &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(181);
      END_STATE();
    case 181:
      if (lookahead == '/')
        ADVANCE(180);
      if (lookahead == '-' ||
          lookahead == '_')
        ADVANCE(181);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(182);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/')
        ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(182);
      END_STATE();
    case 183:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          (lookahead < '(' || lookahead > '*') &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(182);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
        ADVANCE(180);
      if (lookahead == '-' ||
          lookahead == '_')
        ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
        ADVANCE(183);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != ';' &&
          (lookahead < 'A' || lookahead > '[') &&
          lookahead != ']' &&
          (lookahead < 'a' || lookahead > '{') &&
          lookahead != '}')
        ADVANCE(182);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-')
        ADVANCE(187);
      if (lookahead == '/')
        ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != ';' &&
          (lookahead < 'A' || lookahead > '[') &&
          lookahead != ']' &&
          (lookahead < 'a' || lookahead > '{') &&
          lookahead != '}')
        ADVANCE(182);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
        ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(188);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != ';' &&
          (lookahead < 'A' || lookahead > '[') &&
          lookahead != ']' &&
          (lookahead < 'a' || lookahead > '{') &&
          lookahead != '}')
        ADVANCE(182);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH);
      if (lookahead == '/')
        ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(188);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != ';' &&
          (lookahead < 'A' || lookahead > '[') &&
          lookahead != ']' &&
          (lookahead < 'a' || lookahead > '{') &&
          lookahead != '}')
        ADVANCE(182);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(189);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-')
        ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(192);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(192);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
      END_STATE();
    case 193:
      if (lookahead == '*')
        ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          (lookahead < '(' || lookahead > '*') &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(181);
      END_STATE();
    case 194:
      if (lookahead == '(')
        ADVANCE(153);
      if (lookahead == '/')
        ADVANCE(175);
      if (lookahead == ';')
        ADVANCE(43);
      if (lookahead == 'n')
        ADVANCE(195);
      if (lookahead == 'o')
        ADVANCE(198);
      if (lookahead == 's')
        ADVANCE(202);
      if (lookahead == '{')
        ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(194);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(196);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(197);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(199);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(200);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y')
        ADVANCE(201);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(203);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(204);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(205);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(206);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(207);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(208);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(209);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
      END_STATE();
    case 210:
      if (lookahead == '#')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '+')
        ADVANCE(211);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '/')
        ADVANCE(175);
      if (lookahead == ':')
        ADVANCE(41);
      if (lookahead == '>')
        ADVANCE(45);
      if (lookahead == '[')
        ADVANCE(102);
      if (lookahead == '{')
        ADVANCE(138);
      if (lookahead == '~')
        ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 213:
      if (lookahead == '#')
        ADVANCE(16);
      if (lookahead == '+')
        ADVANCE(211);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '/')
        ADVANCE(175);
      if (lookahead == ':')
        ADVANCE(41);
      if (lookahead == '>')
        ADVANCE(45);
      if (lookahead == '[')
        ADVANCE(102);
      if (lookahead == '{')
        ADVANCE(138);
      if (lookahead == '~')
        ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(213);
      END_STATE();
    case 214:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '/')
        ADVANCE(175);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(214);
      END_STATE();
    case 215:
      if (lookahead == '/')
        ADVANCE(175);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(156);
      END_STATE();
    case 216:
      if (lookahead == '/')
        ADVANCE(175);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(216);
      END_STATE();
    case 217:
      if (lookahead == '%')
        ADVANCE(218);
      if (lookahead == '(')
        ADVANCE(153);
      if (lookahead == '*')
        ADVANCE(173);
      if (lookahead == '+')
        ADVANCE(211);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(43);
      if (lookahead == '_')
        ADVANCE(176);
      if (lookahead == 'n')
        ADVANCE(220);
      if (lookahead == 'o')
        ADVANCE(224);
      if (lookahead == 's')
        ADVANCE(228);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(236);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(223);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(218);
      if (lookahead == 'o')
        ADVANCE(221);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(223);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(218);
      if (lookahead == 't')
        ADVANCE(222);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(223);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '%')
        ADVANCE(218);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(223);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(218);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(218);
      if (lookahead == 'n')
        ADVANCE(225);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(223);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(218);
      if (lookahead == 'l')
        ADVANCE(226);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(223);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(218);
      if (lookahead == 'y')
        ADVANCE(227);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(223);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '%')
        ADVANCE(218);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(223);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(218);
      if (lookahead == 'e')
        ADVANCE(229);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(223);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(218);
      if (lookahead == 'l')
        ADVANCE(230);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(223);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(218);
      if (lookahead == 'e')
        ADVANCE(231);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(223);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(218);
      if (lookahead == 'c')
        ADVANCE(232);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(223);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(218);
      if (lookahead == 't')
        ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(223);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(218);
      if (lookahead == 'o')
        ADVANCE(234);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(223);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(218);
      if (lookahead == 'r')
        ADVANCE(235);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(223);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '%')
        ADVANCE(218);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(223);
      END_STATE();
    case 236:
      if (lookahead == '(')
        ADVANCE(153);
      if (lookahead == '*')
        ADVANCE(173);
      if (lookahead == '+')
        ADVANCE(211);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(43);
      if (lookahead == 'n')
        ADVANCE(195);
      if (lookahead == 'o')
        ADVANCE(198);
      if (lookahead == 's')
        ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(236);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
      END_STATE();
    case 237:
      if (lookahead == '(')
        ADVANCE(23);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(173);
      if (lookahead == '+')
        ADVANCE(211);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(43);
      if (lookahead == ']')
        ADVANCE(103);
      if (lookahead == 'n')
        ADVANCE(195);
      if (lookahead == 'o')
        ADVANCE(198);
      if (lookahead == 's')
        ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(238);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
      END_STATE();
    case 238:
      if (lookahead == '(')
        ADVANCE(153);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(173);
      if (lookahead == '+')
        ADVANCE(211);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(43);
      if (lookahead == ']')
        ADVANCE(103);
      if (lookahead == 'n')
        ADVANCE(195);
      if (lookahead == 'o')
        ADVANCE(198);
      if (lookahead == 's')
        ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(238);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
      END_STATE();
    case 239:
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '/')
        ADVANCE(175);
      if (lookahead == ';')
        ADVANCE(43);
      if (lookahead == 'a')
        ADVANCE(154);
      if (lookahead == 'o')
        ADVANCE(240);
      if (lookahead == '{')
        ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(239);
      END_STATE();
    case 240:
      if (lookahead == 'r')
        ADVANCE(127);
      END_STATE();
    case 241:
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '/')
        ADVANCE(175);
      if (lookahead == ';')
        ADVANCE(43);
      if (lookahead == 'a')
        ADVANCE(154);
      if (lookahead == 'o')
        ADVANCE(240);
      if (lookahead == '{')
        ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(241);
      END_STATE();
    case 242:
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(173);
      if (lookahead == '+')
        ADVANCE(211);
      if (lookahead == '-')
        ADVANCE(243);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(43);
      if (lookahead == ']')
        ADVANCE(103);
      if (lookahead == '{')
        ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(244);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 244:
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(173);
      if (lookahead == '+')
        ADVANCE(211);
      if (lookahead == '-')
        ADVANCE(243);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(43);
      if (lookahead == ']')
        ADVANCE(103);
      if (lookahead == '{')
        ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(244);
      END_STATE();
    case 245:
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(173);
      if (lookahead == '+')
        ADVANCE(211);
      if (lookahead == '-')
        ADVANCE(243);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(43);
      if (lookahead == ']')
        ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(246);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(218);
      END_STATE();
    case 246:
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(173);
      if (lookahead == '+')
        ADVANCE(211);
      if (lookahead == '-')
        ADVANCE(243);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(43);
      if (lookahead == ']')
        ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(246);
      END_STATE();
    case 247:
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == '(')
        ADVANCE(23);
      if (lookahead == '/')
        ADVANCE(175);
      if (lookahead == ';')
        ADVANCE(43);
      if (lookahead == '}')
        ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(248);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
      END_STATE();
    case 248:
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == '/')
        ADVANCE(175);
      if (lookahead == ';')
        ADVANCE(43);
      if (lookahead == '}')
        ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(248);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
      END_STATE();
    case 249:
      if (lookahead == '#')
        ADVANCE(16);
      if (lookahead == '(')
        ADVANCE(23);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '+')
        ADVANCE(211);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '/')
        ADVANCE(175);
      if (lookahead == ':')
        ADVANCE(41);
      if (lookahead == '>')
        ADVANCE(45);
      if (lookahead == '[')
        ADVANCE(102);
      if (lookahead == '{')
        ADVANCE(138);
      if (lookahead == '~')
        ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(210);
      END_STATE();
    case 250:
      if (lookahead == '$')
        ADVANCE(17);
      if (lookahead == '*')
        ADVANCE(251);
      if (lookahead == '/')
        ADVANCE(175);
      if (lookahead == '=')
        ADVANCE(44);
      if (lookahead == ']')
        ADVANCE(103);
      if (lookahead == '^')
        ADVANCE(104);
      if (lookahead == '|')
        ADVANCE(139);
      if (lookahead == '~')
        ADVANCE(252);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(250);
      END_STATE();
    case 251:
      if (lookahead == '=')
        ADVANCE(26);
      END_STATE();
    case 252:
      if (lookahead == '=')
        ADVANCE(143);
      END_STATE();
    case 253:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(16);
      if (lookahead == '&')
        ADVANCE(19);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == '*')
        ADVANCE(173);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '/')
        ADVANCE(175);
      if (lookahead == ':')
        ADVANCE(41);
      if (lookahead == '@')
        ADVANCE(46);
      if (lookahead == '[')
        ADVANCE(102);
      if (lookahead == '}')
        ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(253);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
      END_STATE();
    case 254:
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(173);
      if (lookahead == '+')
        ADVANCE(211);
      if (lookahead == '-')
        ADVANCE(243);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(254);
      END_STATE();
    case 255:
      if (lookahead == '(')
        ADVANCE(153);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(173);
      if (lookahead == '+')
        ADVANCE(211);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(43);
      if (lookahead == ']')
        ADVANCE(103);
      if (lookahead == 'n')
        ADVANCE(195);
      if (lookahead == 'o')
        ADVANCE(198);
      if (lookahead == 's')
        ADVANCE(202);
      if (lookahead == '{')
        ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
      END_STATE();
    case 256:
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '/')
        ADVANCE(175);
      if (lookahead == ':')
        ADVANCE(257);
      if (lookahead == 'a')
        ADVANCE(154);
      if (lookahead == 'o')
        ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 258:
      if (lookahead == '+')
        ADVANCE(259);
      if (lookahead == '-')
        ADVANCE(259);
      if (lookahead == '/')
        ADVANCE(175);
      if (lookahead == 'f')
        ADVANCE(155);
      if (lookahead == 't')
        ADVANCE(136);
      if (lookahead == '}')
        ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(258);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(260);
      END_STATE();
    case 259:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(260);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(260);
      END_STATE();
    case 261:
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(16);
      if (lookahead == '&')
        ADVANCE(19);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == '(')
        ADVANCE(153);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(173);
      if (lookahead == '+')
        ADVANCE(178);
      if (lookahead == '-')
        ADVANCE(179);
      if (lookahead == '.')
        ADVANCE(36);
      if (lookahead == '/')
        ADVANCE(193);
      if (lookahead == ':')
        ADVANCE(41);
      if (lookahead == '[')
        ADVANCE(102);
      if (lookahead == '_')
        ADVANCE(184);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(186);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(261);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      END_STATE();
    case 262:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(16);
      if (lookahead == '%')
        ADVANCE(218);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == '(')
        ADVANCE(153);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(173);
      if (lookahead == '+')
        ADVANCE(27);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '-')
        ADVANCE(263);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == '/')
        ADVANCE(264);
      if (lookahead == ';')
        ADVANCE(43);
      if (lookahead == '_')
        ADVANCE(184);
      if (lookahead == '}')
        ADVANCE(141);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(265);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(268);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == '/')
        ADVANCE(180);
      if (lookahead == '-' ||
          lookahead == '_')
        ADVANCE(184);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*')
        ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          (lookahead < '(' || lookahead > '*') &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(181);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(266);
      if (lookahead == '-')
        ADVANCE(187);
      if (lookahead == '/')
        ADVANCE(183);
      if (lookahead == '_')
        ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != ';' &&
          (lookahead < 'A' || lookahead > '[') &&
          lookahead != ']' &&
          (lookahead < 'a' || lookahead > '{') &&
          lookahead != '}')
        ADVANCE(182);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '/')
        ADVANCE(183);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ';' &&
          (lookahead < 'A' || lookahead > '[') &&
          lookahead != ']' &&
          (lookahead < 'a' || lookahead > '{') &&
          lookahead != '}')
        ADVANCE(182);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(266);
      if (lookahead == '/')
        ADVANCE(183);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != ';' &&
          (lookahead < 'A' || lookahead > '[') &&
          lookahead != ']' &&
          (lookahead < 'a' || lookahead > '{') &&
          lookahead != '}')
        ADVANCE(182);
      END_STATE();
    case 268:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(16);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == '(')
        ADVANCE(153);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(173);
      if (lookahead == '+')
        ADVANCE(27);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '-')
        ADVANCE(263);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == '/')
        ADVANCE(264);
      if (lookahead == ';')
        ADVANCE(43);
      if (lookahead == '_')
        ADVANCE(184);
      if (lookahead == '}')
        ADVANCE(141);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(186);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(268);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      END_STATE();
    case 269:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(16);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == '(')
        ADVANCE(23);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(173);
      if (lookahead == '+')
        ADVANCE(27);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '-')
        ADVANCE(263);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == '/')
        ADVANCE(264);
      if (lookahead == ';')
        ADVANCE(43);
      if (lookahead == '_')
        ADVANCE(184);
      if (lookahead == '}')
        ADVANCE(141);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(186);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(268);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      END_STATE();
    case 270:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(16);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == '(')
        ADVANCE(153);
      if (lookahead == '*')
        ADVANCE(173);
      if (lookahead == '+')
        ADVANCE(27);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '-')
        ADVANCE(263);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == '/')
        ADVANCE(264);
      if (lookahead == ';')
        ADVANCE(43);
      if (lookahead == '_')
        ADVANCE(184);
      if (lookahead == '}')
        ADVANCE(141);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(186);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(270);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      END_STATE();
    case 271:
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(16);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == '(')
        ADVANCE(153);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(173);
      if (lookahead == '+')
        ADVANCE(27);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '-')
        ADVANCE(263);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == '/')
        ADVANCE(264);
      if (lookahead == ';')
        ADVANCE(43);
      if (lookahead == '_')
        ADVANCE(184);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(186);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(271);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      END_STATE();
    case 272:
      if (lookahead == '#')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '+')
        ADVANCE(211);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '/')
        ADVANCE(175);
      if (lookahead == ':')
        ADVANCE(41);
      if (lookahead == '>')
        ADVANCE(45);
      if (lookahead == '[')
        ADVANCE(102);
      if (lookahead == '~')
        ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(272);
      END_STATE();
    case 273:
      if (lookahead == '/')
        ADVANCE(175);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(274);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(275);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
      END_STATE();
    case 274:
      if (lookahead == '/')
        ADVANCE(175);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(274);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(276);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(277);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(278);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(279);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(280);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(281);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(282);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
      END_STATE();
    case 283:
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(16);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == '(')
        ADVANCE(153);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(173);
      if (lookahead == '+')
        ADVANCE(27);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '-')
        ADVANCE(263);
      if (lookahead == '.')
        ADVANCE(36);
      if (lookahead == '/')
        ADVANCE(264);
      if (lookahead == ':')
        ADVANCE(41);
      if (lookahead == '>')
        ADVANCE(45);
      if (lookahead == '[')
        ADVANCE(102);
      if (lookahead == '_')
        ADVANCE(184);
      if (lookahead == '~')
        ADVANCE(212);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(186);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(283);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      END_STATE();
    case 284:
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(16);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == '(')
        ADVANCE(23);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(173);
      if (lookahead == '+')
        ADVANCE(27);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '-')
        ADVANCE(263);
      if (lookahead == '.')
        ADVANCE(36);
      if (lookahead == '/')
        ADVANCE(264);
      if (lookahead == ':')
        ADVANCE(41);
      if (lookahead == '>')
        ADVANCE(45);
      if (lookahead == '[')
        ADVANCE(102);
      if (lookahead == '_')
        ADVANCE(184);
      if (lookahead == '~')
        ADVANCE(212);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(186);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(283);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      END_STATE();
    case 285:
      if (lookahead == '#')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '+')
        ADVANCE(211);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '/')
        ADVANCE(175);
      if (lookahead == ':')
        ADVANCE(41);
      if (lookahead == '>')
        ADVANCE(45);
      if (lookahead == '[')
        ADVANCE(102);
      if (lookahead == '~')
        ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(285);
      END_STATE();
    case 286:
      if (lookahead == '*')
        ADVANCE(173);
      if (lookahead == '+')
        ADVANCE(211);
      if (lookahead == '-')
        ADVANCE(243);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ']')
        ADVANCE(103);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(286);
      END_STATE();
    case 287:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(16);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == '(')
        ADVANCE(153);
      if (lookahead == '+')
        ADVANCE(178);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '-')
        ADVANCE(179);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == '/')
        ADVANCE(193);
      if (lookahead == ';')
        ADVANCE(43);
      if (lookahead == '_')
        ADVANCE(184);
      if (lookahead == '}')
        ADVANCE(141);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(186);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(287);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(185);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 172},
  [2] = {.lex_state = 177},
  [3] = {.lex_state = 194},
  [4] = {.lex_state = 177},
  [5] = {.lex_state = 172},
  [6] = {.lex_state = 172},
  [7] = {.lex_state = 194},
  [8] = {.lex_state = 210, .external_lex_state = 1},
  [9] = {.lex_state = 172},
  [10] = {.lex_state = 172},
  [11] = {.lex_state = 172},
  [12] = {.lex_state = 172},
  [13] = {.lex_state = 172},
  [14] = {.lex_state = 213, .external_lex_state = 1},
  [15] = {.lex_state = 194},
  [16] = {.lex_state = 214},
  [17] = {.lex_state = 194},
  [18] = {.lex_state = 213, .external_lex_state = 1},
  [19] = {.lex_state = 172},
  [20] = {.lex_state = 215},
  [21] = {.lex_state = 177},
  [22] = {.lex_state = 217},
  [23] = {.lex_state = 217},
  [24] = {.lex_state = 237},
  [25] = {.lex_state = 236},
  [26] = {.lex_state = 194},
  [27] = {.lex_state = 194},
  [28] = {.lex_state = 177},
  [29] = {.lex_state = 239},
  [30] = {.lex_state = 241},
  [31] = {.lex_state = 242},
  [32] = {.lex_state = 245},
  [33] = {.lex_state = 217},
  [34] = {.lex_state = 177},
  [35] = {.lex_state = 247},
  [36] = {.lex_state = 194},
  [37] = {.lex_state = 194},
  [38] = {.lex_state = 241},
  [39] = {.lex_state = 210, .external_lex_state = 1},
  [40] = {.lex_state = 249, .external_lex_state = 1},
  [41] = {.lex_state = 210, .external_lex_state = 1},
  [42] = {.lex_state = 210, .external_lex_state = 1},
  [43] = {.lex_state = 250},
  [44] = {.lex_state = 177},
  [45] = {.lex_state = 253},
  [46] = {.lex_state = 253},
  [47] = {.lex_state = 194},
  [48] = {.lex_state = 241},
  [49] = {.lex_state = 253},
  [50] = {.lex_state = 172},
  [51] = {.lex_state = 172},
  [52] = {.lex_state = 172},
  [53] = {.lex_state = 172},
  [54] = {.lex_state = 172},
  [55] = {.lex_state = 172},
  [56] = {.lex_state = 172},
  [57] = {.lex_state = 172},
  [58] = {.lex_state = 172},
  [59] = {.lex_state = 172},
  [60] = {.lex_state = 213},
  [61] = {.lex_state = 172},
  [62] = {.lex_state = 238},
  [63] = {.lex_state = 254},
  [64] = {.lex_state = 255},
  [65] = {.lex_state = 238},
  [66] = {.lex_state = 177},
  [67] = {.lex_state = 238},
  [68] = {.lex_state = 253},
  [69] = {.lex_state = 177},
  [70] = {.lex_state = 194},
  [71] = {.lex_state = 239},
  [72] = {.lex_state = 194},
  [73] = {.lex_state = 256},
  [74] = {.lex_state = 256},
  [75] = {.lex_state = 239},
  [76] = {.lex_state = 172},
  [77] = {.lex_state = 194},
  [78] = {.lex_state = 194},
  [79] = {.lex_state = 253},
  [80] = {.lex_state = 213},
  [81] = {.lex_state = 253},
  [82] = {.lex_state = 177},
  [83] = {.lex_state = 253},
  [84] = {.lex_state = 177},
  [85] = {.lex_state = 237},
  [86] = {.lex_state = 258},
  [87] = {.lex_state = 253},
  [88] = {.lex_state = 194},
  [89] = {.lex_state = 253},
  [90] = {.lex_state = 261},
  [91] = {.lex_state = 210, .external_lex_state = 1},
  [92] = {.lex_state = 177},
  [93] = {.lex_state = 210, .external_lex_state = 1},
  [94] = {.lex_state = 215},
  [95] = {.lex_state = 177},
  [96] = {.lex_state = 262},
  [97] = {.lex_state = 262},
  [98] = {.lex_state = 269},
  [99] = {.lex_state = 270},
  [100] = {.lex_state = 253},
  [101] = {.lex_state = 213, .external_lex_state = 1},
  [102] = {.lex_state = 247},
  [103] = {.lex_state = 253},
  [104] = {.lex_state = 194},
  [105] = {.lex_state = 253},
  [106] = {.lex_state = 194},
  [107] = {.lex_state = 241},
  [108] = {.lex_state = 210, .external_lex_state = 1},
  [109] = {.lex_state = 210, .external_lex_state = 1},
  [110] = {.lex_state = 213, .external_lex_state = 1},
  [111] = {.lex_state = 210, .external_lex_state = 1},
  [112] = {.lex_state = 249, .external_lex_state = 1},
  [113] = {.lex_state = 210, .external_lex_state = 1},
  [114] = {.lex_state = 210, .external_lex_state = 1},
  [115] = {.lex_state = 250},
  [116] = {.lex_state = 210, .external_lex_state = 1},
  [117] = {.lex_state = 210, .external_lex_state = 1},
  [118] = {.lex_state = 210, .external_lex_state = 1},
  [119] = {.lex_state = 213},
  [120] = {.lex_state = 238},
  [121] = {.lex_state = 238},
  [122] = {.lex_state = 271},
  [123] = {.lex_state = 177},
  [124] = {.lex_state = 238},
  [125] = {.lex_state = 194},
  [126] = {.lex_state = 253},
  [127] = {.lex_state = 194},
  [128] = {.lex_state = 177},
  [129] = {.lex_state = 177},
  [130] = {.lex_state = 239},
  [131] = {.lex_state = 194},
  [132] = {.lex_state = 272, .external_lex_state = 1},
  [133] = {.lex_state = 241},
  [134] = {.lex_state = 239},
  [135] = {.lex_state = 253},
  [136] = {.lex_state = 213},
  [137] = {.lex_state = 253},
  [138] = {.lex_state = 253},
  [139] = {.lex_state = 194},
  [140] = {.lex_state = 258},
  [141] = {.lex_state = 273},
  [142] = {.lex_state = 210, .external_lex_state = 1},
  [143] = {.lex_state = 283, .external_lex_state = 1},
  [144] = {.lex_state = 284, .external_lex_state = 1},
  [145] = {.lex_state = 285, .external_lex_state = 1},
  [146] = {.lex_state = 177},
  [147] = {.lex_state = 286},
  [148] = {.lex_state = 268},
  [149] = {.lex_state = 254},
  [150] = {.lex_state = 268},
  [151] = {.lex_state = 268},
  [152] = {.lex_state = 177},
  [153] = {.lex_state = 268},
  [154] = {.lex_state = 177},
  [155] = {.lex_state = 253},
  [156] = {.lex_state = 177},
  [157] = {.lex_state = 177},
  [158] = {.lex_state = 270},
  [159] = {.lex_state = 287},
  [160] = {.lex_state = 177},
  [161] = {.lex_state = 253},
  [162] = {.lex_state = 247},
  [163] = {.lex_state = 253},
  [164] = {.lex_state = 241},
  [165] = {.lex_state = 253},
  [166] = {.lex_state = 241},
  [167] = {.lex_state = 210, .external_lex_state = 1},
  [168] = {.lex_state = 177},
  [169] = {.lex_state = 210, .external_lex_state = 1},
  [170] = {.lex_state = 177},
  [171] = {.lex_state = 238},
  [172] = {.lex_state = 177},
  [173] = {.lex_state = 177},
  [174] = {.lex_state = 239},
  [175] = {.lex_state = 253},
  [176] = {.lex_state = 177},
  [177] = {.lex_state = 177},
  [178] = {.lex_state = 239},
  [179] = {.lex_state = 253},
  [180] = {.lex_state = 258},
  [181] = {.lex_state = 253},
  [182] = {.lex_state = 258},
  [183] = {.lex_state = 261},
  [184] = {.lex_state = 210, .external_lex_state = 1},
  [185] = {.lex_state = 177},
  [186] = {.lex_state = 177},
  [187] = {.lex_state = 210, .external_lex_state = 1},
  [188] = {.lex_state = 268},
  [189] = {.lex_state = 268},
  [190] = {.lex_state = 177},
  [191] = {.lex_state = 270},
  [192] = {.lex_state = 268},
  [193] = {.lex_state = 253},
  [194] = {.lex_state = 177},
  [195] = {.lex_state = 287},
  [196] = {.lex_state = 270},
  [197] = {.lex_state = 253},
  [198] = {.lex_state = 286},
  [199] = {.lex_state = 177},
  [200] = {.lex_state = 238},
  [201] = {.lex_state = 177},
  [202] = {.lex_state = 239},
  [203] = {.lex_state = 177},
  [204] = {.lex_state = 258},
  [205] = {.lex_state = 247},
  [206] = {.lex_state = 253},
  [207] = {.lex_state = 285, .external_lex_state = 1},
  [208] = {.lex_state = 177},
  [209] = {.lex_state = 210, .external_lex_state = 1},
  [210] = {.lex_state = 177},
  [211] = {.lex_state = 268},
  [212] = {.lex_state = 177},
  [213] = {.lex_state = 253},
  [214] = {.lex_state = 247},
  [215] = {.lex_state = 287},
  [216] = {.lex_state = 210, .external_lex_state = 1},
  [217] = {.lex_state = 258},
  [218] = {.lex_state = 247},
  [219] = {.lex_state = 268},
  [220] = {.lex_state = 247},
  [221] = {.lex_state = 287},
  [222] = {.lex_state = 258},
};

enum {
  ts_external_token__descendant_operator,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__descendant_operator] = sym__descendant_operator,
};

static bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__descendant_operator] = true,
  },
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym__descendant_operator] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_ATimport] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_ATmedia] = ACTIONS(3),
    [anon_sym_ATcharset] = ACTIONS(3),
    [anon_sym_ATnamespace] = ACTIONS(3),
    [anon_sym_ATkeyframes] = ACTIONS(3),
    [aux_sym_SLASH_AT_LBRACK_DASHa_DASHz_RBRACK_PLUSkeyframes_SLASH] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_from] = ACTIONS(1),
    [sym_to] = ACTIONS(1),
    [anon_sym_ATsupports] = ACTIONS(3),
    [sym_nesting_selector] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(3),
    [anon_sym_COLON] = ACTIONS(3),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_TILDE_EQ] = ACTIONS(1),
    [anon_sym_CARET_EQ] = ACTIONS(1),
    [anon_sym_PIPE_EQ] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_DOLLAR_EQ] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(3),
    [anon_sym_PLUS] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_important] = ACTIONS(1),
    [anon_sym_LPAREN2] = ACTIONS(3),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_only] = ACTIONS(1),
    [anon_sym_selector] = ACTIONS(1),
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH] = ACTIONS(3),
    [sym_string_value] = ACTIONS(1),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(3),
    [sym_at_keyword] = ACTIONS(3),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_stylesheet] = STATE(16),
    [sym_import_statement] = STATE(19),
    [sym_media_statement] = STATE(19),
    [sym_charset_statement] = STATE(19),
    [sym_namespace_statement] = STATE(19),
    [sym_keyframes_statement] = STATE(19),
    [sym_supports_statement] = STATE(19),
    [sym_at_rule] = STATE(19),
    [sym_rule_set] = STATE(19),
    [sym_selectors] = STATE(17),
    [sym__selector] = STATE(18),
    [sym_universal_selector] = STATE(18),
    [sym_class_selector] = STATE(18),
    [sym_pseudo_class_selector] = STATE(18),
    [sym_pseudo_element_selector] = STATE(18),
    [sym_id_selector] = STATE(18),
    [sym_attribute_selector] = STATE(18),
    [sym_child_selector] = STATE(18),
    [sym_descendant_selector] = STATE(18),
    [sym_sibling_selector] = STATE(18),
    [sym_adjacent_sibling_selector] = STATE(18),
    [sym_declaration] = STATE(19),
    [aux_sym_stylesheet_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATmedia] = ACTIONS(9),
    [anon_sym_ATcharset] = ACTIONS(11),
    [anon_sym_ATnamespace] = ACTIONS(13),
    [anon_sym_ATkeyframes] = ACTIONS(15),
    [aux_sym_SLASH_AT_LBRACK_DASHa_DASHz_RBRACK_PLUSkeyframes_SLASH] = ACTIONS(15),
    [anon_sym_ATsupports] = ACTIONS(17),
    [sym_nesting_selector] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_string_value] = ACTIONS(19),
    [sym_identifier] = ACTIONS(33),
    [sym_at_keyword] = ACTIONS(35),
    [sym_comment] = ACTIONS(37),
  },
  [2] = {
    [sym__value] = STATE(25),
    [sym_parenthesized_value] = STATE(25),
    [sym_color_value] = STATE(25),
    [sym_integer_value] = STATE(25),
    [sym_float_value] = STATE(25),
    [sym_call_expression] = STATE(25),
    [sym_binary_expression] = STATE(25),
    [anon_sym_POUND] = ACTIONS(39),
    [anon_sym_LPAREN2] = ACTIONS(41),
    [sym_string_value] = ACTIONS(43),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(45),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(47),
    [sym_identifier] = ACTIONS(49),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(51),
  },
  [3] = {
    [sym__query] = STATE(30),
    [sym_feature_query] = STATE(30),
    [sym_parenthesized_query] = STATE(30),
    [sym_binary_query] = STATE(30),
    [sym_unary_query] = STATE(30),
    [sym_selector_query] = STATE(30),
    [anon_sym_LPAREN2] = ACTIONS(53),
    [anon_sym_not] = ACTIONS(55),
    [anon_sym_only] = ACTIONS(55),
    [anon_sym_selector] = ACTIONS(57),
    [sym_identifier] = ACTIONS(59),
    [sym_comment] = ACTIONS(37),
  },
  [4] = {
    [sym__value] = STATE(33),
    [sym_parenthesized_value] = STATE(33),
    [sym_color_value] = STATE(33),
    [sym_integer_value] = STATE(33),
    [sym_float_value] = STATE(33),
    [sym_call_expression] = STATE(33),
    [sym_binary_expression] = STATE(33),
    [anon_sym_POUND] = ACTIONS(39),
    [anon_sym_LPAREN2] = ACTIONS(41),
    [sym_string_value] = ACTIONS(61),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(63),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(65),
    [sym_identifier] = ACTIONS(49),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(67),
  },
  [5] = {
    [sym_call_expression] = STATE(34),
    [sym_string_value] = ACTIONS(69),
    [sym_identifier] = ACTIONS(71),
    [sym_comment] = ACTIONS(37),
  },
  [6] = {
    [sym_identifier] = ACTIONS(73),
    [sym_comment] = ACTIONS(37),
  },
  [7] = {
    [sym__query] = STATE(38),
    [sym_feature_query] = STATE(38),
    [sym_parenthesized_query] = STATE(38),
    [sym_binary_query] = STATE(38),
    [sym_unary_query] = STATE(38),
    [sym_selector_query] = STATE(38),
    [anon_sym_LPAREN2] = ACTIONS(53),
    [anon_sym_not] = ACTIONS(75),
    [anon_sym_only] = ACTIONS(75),
    [anon_sym_selector] = ACTIONS(57),
    [sym_identifier] = ACTIONS(59),
    [sym_comment] = ACTIONS(37),
  },
  [8] = {
    [sym__descendant_operator] = ACTIONS(77),
    [anon_sym_COMMA] = ACTIONS(77),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_DOT] = ACTIONS(77),
    [anon_sym_COLON] = ACTIONS(79),
    [anon_sym_COLON_COLON] = ACTIONS(77),
    [anon_sym_POUND] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_GT] = ACTIONS(77),
    [anon_sym_TILDE] = ACTIONS(77),
    [anon_sym_PLUS] = ACTIONS(77),
    [anon_sym_RPAREN] = ACTIONS(77),
    [sym_comment] = ACTIONS(37),
  },
  [9] = {
    [sym_identifier] = ACTIONS(81),
    [sym_comment] = ACTIONS(37),
  },
  [10] = {
    [sym_identifier] = ACTIONS(83),
    [sym_comment] = ACTIONS(37),
  },
  [11] = {
    [sym_identifier] = ACTIONS(85),
    [sym_comment] = ACTIONS(37),
  },
  [12] = {
    [sym_identifier] = ACTIONS(87),
    [sym_comment] = ACTIONS(37),
  },
  [13] = {
    [sym_identifier] = ACTIONS(89),
    [sym_comment] = ACTIONS(37),
  },
  [14] = {
    [sym__descendant_operator] = ACTIONS(91),
    [anon_sym_COMMA] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(91),
    [anon_sym_DOT] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(93),
    [anon_sym_COLON_COLON] = ACTIONS(91),
    [anon_sym_POUND] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_GT] = ACTIONS(91),
    [anon_sym_TILDE] = ACTIONS(91),
    [anon_sym_PLUS] = ACTIONS(91),
    [sym_comment] = ACTIONS(37),
  },
  [15] = {
    [sym_block] = STATE(45),
    [sym__query] = STATE(48),
    [sym_feature_query] = STATE(48),
    [sym_parenthesized_query] = STATE(48),
    [sym_binary_query] = STATE(48),
    [sym_unary_query] = STATE(48),
    [sym_selector_query] = STATE(48),
    [anon_sym_SEMI] = ACTIONS(96),
    [anon_sym_LBRACE] = ACTIONS(98),
    [anon_sym_LPAREN2] = ACTIONS(53),
    [anon_sym_not] = ACTIONS(100),
    [anon_sym_only] = ACTIONS(100),
    [anon_sym_selector] = ACTIONS(57),
    [sym_identifier] = ACTIONS(59),
    [sym_comment] = ACTIONS(37),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(102),
    [sym_comment] = ACTIONS(37),
  },
  [17] = {
    [sym_block] = STATE(49),
    [anon_sym_LBRACE] = ACTIONS(98),
    [sym_comment] = ACTIONS(37),
  },
  [18] = {
    [aux_sym_selectors_repeat1] = STATE(60),
    [sym__descendant_operator] = ACTIONS(104),
    [anon_sym_COMMA] = ACTIONS(106),
    [anon_sym_LBRACE] = ACTIONS(108),
    [anon_sym_DOT] = ACTIONS(110),
    [anon_sym_COLON] = ACTIONS(112),
    [anon_sym_COLON_COLON] = ACTIONS(114),
    [anon_sym_POUND] = ACTIONS(116),
    [anon_sym_LBRACK] = ACTIONS(118),
    [anon_sym_GT] = ACTIONS(120),
    [anon_sym_TILDE] = ACTIONS(122),
    [anon_sym_PLUS] = ACTIONS(124),
    [sym_comment] = ACTIONS(37),
  },
  [19] = {
    [sym_import_statement] = STATE(61),
    [sym_media_statement] = STATE(61),
    [sym_charset_statement] = STATE(61),
    [sym_namespace_statement] = STATE(61),
    [sym_keyframes_statement] = STATE(61),
    [sym_supports_statement] = STATE(61),
    [sym_at_rule] = STATE(61),
    [sym_rule_set] = STATE(61),
    [sym_selectors] = STATE(17),
    [sym__selector] = STATE(18),
    [sym_universal_selector] = STATE(18),
    [sym_class_selector] = STATE(18),
    [sym_pseudo_class_selector] = STATE(18),
    [sym_pseudo_element_selector] = STATE(18),
    [sym_id_selector] = STATE(18),
    [sym_attribute_selector] = STATE(18),
    [sym_child_selector] = STATE(18),
    [sym_descendant_selector] = STATE(18),
    [sym_sibling_selector] = STATE(18),
    [sym_adjacent_sibling_selector] = STATE(18),
    [sym_declaration] = STATE(61),
    [aux_sym_stylesheet_repeat1] = STATE(61),
    [ts_builtin_sym_end] = ACTIONS(126),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATmedia] = ACTIONS(9),
    [anon_sym_ATcharset] = ACTIONS(11),
    [anon_sym_ATnamespace] = ACTIONS(13),
    [anon_sym_ATkeyframes] = ACTIONS(15),
    [aux_sym_SLASH_AT_LBRACK_DASHa_DASHz_RBRACK_PLUSkeyframes_SLASH] = ACTIONS(15),
    [anon_sym_ATsupports] = ACTIONS(17),
    [sym_nesting_selector] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_string_value] = ACTIONS(19),
    [sym_identifier] = ACTIONS(33),
    [sym_at_keyword] = ACTIONS(35),
    [sym_comment] = ACTIONS(37),
  },
  [20] = {
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH] = ACTIONS(128),
    [sym_comment] = ACTIONS(37),
  },
  [21] = {
    [sym__value] = STATE(63),
    [sym_parenthesized_value] = STATE(63),
    [sym_color_value] = STATE(63),
    [sym_integer_value] = STATE(63),
    [sym_float_value] = STATE(63),
    [sym_call_expression] = STATE(63),
    [sym_binary_expression] = STATE(63),
    [anon_sym_POUND] = ACTIONS(39),
    [anon_sym_LPAREN2] = ACTIONS(41),
    [sym_string_value] = ACTIONS(130),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(63),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(65),
    [sym_identifier] = ACTIONS(49),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(132),
  },
  [22] = {
    [anon_sym_SEMI] = ACTIONS(134),
    [anon_sym_STAR] = ACTIONS(134),
    [anon_sym_PLUS] = ACTIONS(134),
    [anon_sym_LPAREN2] = ACTIONS(134),
    [anon_sym_not] = ACTIONS(136),
    [anon_sym_only] = ACTIONS(136),
    [anon_sym_selector] = ACTIONS(136),
    [sym_unit] = ACTIONS(138),
    [anon_sym_DASH] = ACTIONS(136),
    [anon_sym_SLASH] = ACTIONS(136),
    [sym_identifier] = ACTIONS(136),
    [sym_comment] = ACTIONS(37),
  },
  [23] = {
    [anon_sym_SEMI] = ACTIONS(140),
    [anon_sym_STAR] = ACTIONS(140),
    [anon_sym_PLUS] = ACTIONS(140),
    [anon_sym_LPAREN2] = ACTIONS(140),
    [anon_sym_not] = ACTIONS(142),
    [anon_sym_only] = ACTIONS(142),
    [anon_sym_selector] = ACTIONS(142),
    [sym_unit] = ACTIONS(144),
    [anon_sym_DASH] = ACTIONS(142),
    [anon_sym_SLASH] = ACTIONS(142),
    [sym_identifier] = ACTIONS(142),
    [sym_comment] = ACTIONS(37),
  },
  [24] = {
    [sym_arguments] = STATE(67),
    [anon_sym_SEMI] = ACTIONS(146),
    [anon_sym_STAR] = ACTIONS(146),
    [anon_sym_RBRACK] = ACTIONS(146),
    [anon_sym_PLUS] = ACTIONS(146),
    [anon_sym_LPAREN] = ACTIONS(148),
    [anon_sym_RPAREN] = ACTIONS(146),
    [anon_sym_LPAREN2] = ACTIONS(150),
    [anon_sym_not] = ACTIONS(150),
    [anon_sym_only] = ACTIONS(150),
    [anon_sym_selector] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(150),
    [anon_sym_SLASH] = ACTIONS(150),
    [sym_identifier] = ACTIONS(150),
    [sym_comment] = ACTIONS(37),
  },
  [25] = {
    [sym__query] = STATE(71),
    [sym_feature_query] = STATE(71),
    [sym_parenthesized_query] = STATE(71),
    [sym_binary_query] = STATE(71),
    [sym_unary_query] = STATE(71),
    [sym_selector_query] = STATE(71),
    [anon_sym_SEMI] = ACTIONS(152),
    [anon_sym_STAR] = ACTIONS(154),
    [anon_sym_PLUS] = ACTIONS(154),
    [anon_sym_LPAREN2] = ACTIONS(53),
    [anon_sym_not] = ACTIONS(156),
    [anon_sym_only] = ACTIONS(156),
    [anon_sym_selector] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(158),
    [anon_sym_SLASH] = ACTIONS(158),
    [sym_identifier] = ACTIONS(59),
    [sym_comment] = ACTIONS(37),
  },
  [26] = {
    [sym__query] = STATE(74),
    [sym_feature_query] = STATE(74),
    [sym_parenthesized_query] = STATE(74),
    [sym_binary_query] = STATE(74),
    [sym_unary_query] = STATE(74),
    [sym_selector_query] = STATE(74),
    [anon_sym_LPAREN2] = ACTIONS(53),
    [anon_sym_not] = ACTIONS(160),
    [anon_sym_only] = ACTIONS(160),
    [anon_sym_selector] = ACTIONS(57),
    [sym_identifier] = ACTIONS(162),
    [sym_comment] = ACTIONS(37),
  },
  [27] = {
    [sym__query] = STATE(75),
    [sym_feature_query] = STATE(75),
    [sym_parenthesized_query] = STATE(75),
    [sym_binary_query] = STATE(75),
    [sym_unary_query] = STATE(75),
    [sym_selector_query] = STATE(75),
    [anon_sym_LPAREN2] = ACTIONS(53),
    [anon_sym_not] = ACTIONS(55),
    [anon_sym_only] = ACTIONS(55),
    [anon_sym_selector] = ACTIONS(57),
    [sym_identifier] = ACTIONS(59),
    [sym_comment] = ACTIONS(37),
  },
  [28] = {
    [anon_sym_LPAREN2] = ACTIONS(164),
    [sym_comment] = ACTIONS(37),
  },
  [29] = {
    [anon_sym_COMMA] = ACTIONS(166),
    [anon_sym_SEMI] = ACTIONS(166),
    [anon_sym_LBRACE] = ACTIONS(166),
    [anon_sym_RPAREN] = ACTIONS(166),
    [anon_sym_and] = ACTIONS(166),
    [anon_sym_or] = ACTIONS(166),
    [sym_comment] = ACTIONS(37),
  },
  [30] = {
    [sym_block] = STATE(79),
    [aux_sym_import_statement_repeat1] = STATE(80),
    [anon_sym_COMMA] = ACTIONS(168),
    [anon_sym_LBRACE] = ACTIONS(98),
    [anon_sym_and] = ACTIONS(170),
    [anon_sym_or] = ACTIONS(170),
    [sym_comment] = ACTIONS(37),
  },
  [31] = {
    [anon_sym_SEMI] = ACTIONS(134),
    [anon_sym_LBRACE] = ACTIONS(134),
    [anon_sym_STAR] = ACTIONS(134),
    [anon_sym_RBRACK] = ACTIONS(134),
    [anon_sym_PLUS] = ACTIONS(134),
    [anon_sym_RPAREN] = ACTIONS(134),
    [sym_unit] = ACTIONS(172),
    [anon_sym_DASH] = ACTIONS(134),
    [anon_sym_SLASH] = ACTIONS(136),
    [sym_comment] = ACTIONS(37),
  },
  [32] = {
    [anon_sym_SEMI] = ACTIONS(140),
    [anon_sym_STAR] = ACTIONS(140),
    [anon_sym_RBRACK] = ACTIONS(140),
    [anon_sym_PLUS] = ACTIONS(140),
    [anon_sym_RPAREN] = ACTIONS(140),
    [sym_unit] = ACTIONS(174),
    [anon_sym_DASH] = ACTIONS(140),
    [anon_sym_SLASH] = ACTIONS(142),
    [sym_comment] = ACTIONS(37),
  },
  [33] = {
    [anon_sym_SEMI] = ACTIONS(176),
    [anon_sym_STAR] = ACTIONS(178),
    [anon_sym_PLUS] = ACTIONS(178),
    [anon_sym_DASH] = ACTIONS(178),
    [anon_sym_SLASH] = ACTIONS(180),
    [sym_comment] = ACTIONS(37),
  },
  [34] = {
    [anon_sym_SEMI] = ACTIONS(182),
    [sym_comment] = ACTIONS(37),
  },
  [35] = {
    [sym_call_expression] = STATE(84),
    [sym_arguments] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(148),
    [sym_string_value] = ACTIONS(184),
    [sym_identifier] = ACTIONS(186),
    [sym_comment] = ACTIONS(37),
  },
  [36] = {
    [sym_keyframe_block_list] = STATE(87),
    [anon_sym_LBRACE] = ACTIONS(188),
    [sym_comment] = ACTIONS(37),
  },
  [37] = {
    [sym__query] = STATE(75),
    [sym_feature_query] = STATE(75),
    [sym_parenthesized_query] = STATE(75),
    [sym_binary_query] = STATE(75),
    [sym_unary_query] = STATE(75),
    [sym_selector_query] = STATE(75),
    [anon_sym_LPAREN2] = ACTIONS(53),
    [anon_sym_not] = ACTIONS(75),
    [anon_sym_only] = ACTIONS(75),
    [anon_sym_selector] = ACTIONS(57),
    [sym_identifier] = ACTIONS(59),
    [sym_comment] = ACTIONS(37),
  },
  [38] = {
    [sym_block] = STATE(89),
    [anon_sym_LBRACE] = ACTIONS(98),
    [anon_sym_and] = ACTIONS(190),
    [anon_sym_or] = ACTIONS(190),
    [sym_comment] = ACTIONS(37),
  },
  [39] = {
    [sym__descendant_operator] = ACTIONS(192),
    [anon_sym_COMMA] = ACTIONS(192),
    [anon_sym_LBRACE] = ACTIONS(192),
    [anon_sym_DOT] = ACTIONS(192),
    [anon_sym_COLON] = ACTIONS(194),
    [anon_sym_COLON_COLON] = ACTIONS(192),
    [anon_sym_POUND] = ACTIONS(192),
    [anon_sym_LBRACK] = ACTIONS(192),
    [anon_sym_GT] = ACTIONS(192),
    [anon_sym_TILDE] = ACTIONS(192),
    [anon_sym_PLUS] = ACTIONS(192),
    [anon_sym_RPAREN] = ACTIONS(192),
    [sym_comment] = ACTIONS(37),
  },
  [40] = {
    [sym_pseudo_class_arguments] = STATE(91),
    [sym__descendant_operator] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(196),
    [anon_sym_LBRACE] = ACTIONS(196),
    [anon_sym_DOT] = ACTIONS(196),
    [anon_sym_COLON] = ACTIONS(198),
    [anon_sym_COLON_COLON] = ACTIONS(196),
    [anon_sym_POUND] = ACTIONS(196),
    [anon_sym_LBRACK] = ACTIONS(196),
    [anon_sym_GT] = ACTIONS(196),
    [anon_sym_TILDE] = ACTIONS(196),
    [anon_sym_PLUS] = ACTIONS(196),
    [anon_sym_LPAREN] = ACTIONS(200),
    [anon_sym_RPAREN] = ACTIONS(196),
    [sym_comment] = ACTIONS(37),
  },
  [41] = {
    [sym__descendant_operator] = ACTIONS(202),
    [anon_sym_COMMA] = ACTIONS(202),
    [anon_sym_LBRACE] = ACTIONS(202),
    [anon_sym_DOT] = ACTIONS(202),
    [anon_sym_COLON] = ACTIONS(204),
    [anon_sym_COLON_COLON] = ACTIONS(202),
    [anon_sym_POUND] = ACTIONS(202),
    [anon_sym_LBRACK] = ACTIONS(202),
    [anon_sym_GT] = ACTIONS(202),
    [anon_sym_TILDE] = ACTIONS(202),
    [anon_sym_PLUS] = ACTIONS(202),
    [anon_sym_RPAREN] = ACTIONS(202),
    [sym_comment] = ACTIONS(37),
  },
  [42] = {
    [sym__descendant_operator] = ACTIONS(206),
    [anon_sym_COMMA] = ACTIONS(206),
    [anon_sym_LBRACE] = ACTIONS(206),
    [anon_sym_DOT] = ACTIONS(206),
    [anon_sym_COLON] = ACTIONS(208),
    [anon_sym_COLON_COLON] = ACTIONS(206),
    [anon_sym_POUND] = ACTIONS(206),
    [anon_sym_LBRACK] = ACTIONS(206),
    [anon_sym_GT] = ACTIONS(206),
    [anon_sym_TILDE] = ACTIONS(206),
    [anon_sym_PLUS] = ACTIONS(206),
    [anon_sym_RPAREN] = ACTIONS(206),
    [sym_comment] = ACTIONS(37),
  },
  [43] = {
    [anon_sym_EQ] = ACTIONS(210),
    [anon_sym_TILDE_EQ] = ACTIONS(210),
    [anon_sym_CARET_EQ] = ACTIONS(210),
    [anon_sym_PIPE_EQ] = ACTIONS(210),
    [anon_sym_STAR_EQ] = ACTIONS(210),
    [anon_sym_DOLLAR_EQ] = ACTIONS(210),
    [anon_sym_RBRACK] = ACTIONS(212),
    [sym_comment] = ACTIONS(37),
  },
  [44] = {
    [sym__value] = STATE(99),
    [sym_parenthesized_value] = STATE(99),
    [sym_color_value] = STATE(99),
    [sym_integer_value] = STATE(99),
    [sym_float_value] = STATE(99),
    [sym_call_expression] = STATE(99),
    [sym_binary_expression] = STATE(99),
    [anon_sym_POUND] = ACTIONS(214),
    [anon_sym_LPAREN2] = ACTIONS(216),
    [sym_string_value] = ACTIONS(218),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(220),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(222),
    [sym_identifier] = ACTIONS(224),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(226),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(228),
    [anon_sym_ATimport] = ACTIONS(230),
    [anon_sym_ATmedia] = ACTIONS(230),
    [anon_sym_ATcharset] = ACTIONS(230),
    [anon_sym_ATnamespace] = ACTIONS(230),
    [anon_sym_ATkeyframes] = ACTIONS(230),
    [aux_sym_SLASH_AT_LBRACK_DASHa_DASHz_RBRACK_PLUSkeyframes_SLASH] = ACTIONS(230),
    [anon_sym_RBRACE] = ACTIONS(228),
    [anon_sym_ATsupports] = ACTIONS(230),
    [sym_nesting_selector] = ACTIONS(228),
    [anon_sym_STAR] = ACTIONS(228),
    [anon_sym_DOT] = ACTIONS(228),
    [anon_sym_COLON] = ACTIONS(230),
    [anon_sym_COLON_COLON] = ACTIONS(228),
    [anon_sym_POUND] = ACTIONS(228),
    [anon_sym_LBRACK] = ACTIONS(228),
    [sym_string_value] = ACTIONS(228),
    [sym_identifier] = ACTIONS(228),
    [sym_at_keyword] = ACTIONS(230),
    [sym_comment] = ACTIONS(37),
  },
  [46] = {
    [sym_import_statement] = STATE(103),
    [sym_media_statement] = STATE(103),
    [sym_charset_statement] = STATE(103),
    [sym_namespace_statement] = STATE(103),
    [sym_keyframes_statement] = STATE(103),
    [sym_supports_statement] = STATE(103),
    [sym_at_rule] = STATE(103),
    [sym_rule_set] = STATE(103),
    [sym_selectors] = STATE(17),
    [sym__selector] = STATE(18),
    [sym_universal_selector] = STATE(18),
    [sym_class_selector] = STATE(18),
    [sym_pseudo_class_selector] = STATE(18),
    [sym_pseudo_element_selector] = STATE(18),
    [sym_id_selector] = STATE(18),
    [sym_attribute_selector] = STATE(18),
    [sym_child_selector] = STATE(18),
    [sym_descendant_selector] = STATE(18),
    [sym_sibling_selector] = STATE(18),
    [sym_adjacent_sibling_selector] = STATE(18),
    [sym_declaration] = STATE(103),
    [sym_last_declaration] = STATE(102),
    [aux_sym_block_repeat1] = STATE(103),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATmedia] = ACTIONS(9),
    [anon_sym_ATcharset] = ACTIONS(11),
    [anon_sym_ATnamespace] = ACTIONS(13),
    [anon_sym_ATkeyframes] = ACTIONS(15),
    [aux_sym_SLASH_AT_LBRACK_DASHa_DASHz_RBRACK_PLUSkeyframes_SLASH] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(232),
    [anon_sym_ATsupports] = ACTIONS(17),
    [sym_nesting_selector] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_string_value] = ACTIONS(19),
    [sym_identifier] = ACTIONS(234),
    [sym_at_keyword] = ACTIONS(35),
    [sym_comment] = ACTIONS(37),
  },
  [47] = {
    [sym__query] = STATE(75),
    [sym_feature_query] = STATE(75),
    [sym_parenthesized_query] = STATE(75),
    [sym_binary_query] = STATE(75),
    [sym_unary_query] = STATE(75),
    [sym_selector_query] = STATE(75),
    [anon_sym_LPAREN2] = ACTIONS(53),
    [anon_sym_not] = ACTIONS(100),
    [anon_sym_only] = ACTIONS(100),
    [anon_sym_selector] = ACTIONS(57),
    [sym_identifier] = ACTIONS(59),
    [sym_comment] = ACTIONS(37),
  },
  [48] = {
    [sym_block] = STATE(105),
    [aux_sym_import_statement_repeat1] = STATE(107),
    [anon_sym_COMMA] = ACTIONS(236),
    [anon_sym_SEMI] = ACTIONS(238),
    [anon_sym_LBRACE] = ACTIONS(98),
    [anon_sym_and] = ACTIONS(240),
    [anon_sym_or] = ACTIONS(240),
    [sym_comment] = ACTIONS(37),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(242),
    [anon_sym_ATimport] = ACTIONS(244),
    [anon_sym_ATmedia] = ACTIONS(244),
    [anon_sym_ATcharset] = ACTIONS(244),
    [anon_sym_ATnamespace] = ACTIONS(244),
    [anon_sym_ATkeyframes] = ACTIONS(244),
    [aux_sym_SLASH_AT_LBRACK_DASHa_DASHz_RBRACK_PLUSkeyframes_SLASH] = ACTIONS(244),
    [anon_sym_RBRACE] = ACTIONS(242),
    [anon_sym_ATsupports] = ACTIONS(244),
    [sym_nesting_selector] = ACTIONS(242),
    [anon_sym_STAR] = ACTIONS(242),
    [anon_sym_DOT] = ACTIONS(242),
    [anon_sym_COLON] = ACTIONS(244),
    [anon_sym_COLON_COLON] = ACTIONS(242),
    [anon_sym_POUND] = ACTIONS(242),
    [anon_sym_LBRACK] = ACTIONS(242),
    [sym_string_value] = ACTIONS(242),
    [sym_identifier] = ACTIONS(242),
    [sym_at_keyword] = ACTIONS(244),
    [sym_comment] = ACTIONS(37),
  },
  [50] = {
    [sym__selector] = STATE(109),
    [sym_universal_selector] = STATE(109),
    [sym_class_selector] = STATE(109),
    [sym_pseudo_class_selector] = STATE(109),
    [sym_pseudo_element_selector] = STATE(109),
    [sym_id_selector] = STATE(109),
    [sym_attribute_selector] = STATE(109),
    [sym_child_selector] = STATE(109),
    [sym_descendant_selector] = STATE(109),
    [sym_sibling_selector] = STATE(109),
    [sym_adjacent_sibling_selector] = STATE(109),
    [sym_nesting_selector] = ACTIONS(246),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_string_value] = ACTIONS(246),
    [sym_identifier] = ACTIONS(248),
    [sym_comment] = ACTIONS(37),
  },
  [51] = {
    [sym__selector] = STATE(110),
    [sym_universal_selector] = STATE(110),
    [sym_class_selector] = STATE(110),
    [sym_pseudo_class_selector] = STATE(110),
    [sym_pseudo_element_selector] = STATE(110),
    [sym_id_selector] = STATE(110),
    [sym_attribute_selector] = STATE(110),
    [sym_child_selector] = STATE(110),
    [sym_descendant_selector] = STATE(110),
    [sym_sibling_selector] = STATE(110),
    [sym_adjacent_sibling_selector] = STATE(110),
    [sym_nesting_selector] = ACTIONS(250),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_string_value] = ACTIONS(250),
    [sym_identifier] = ACTIONS(248),
    [sym_comment] = ACTIONS(37),
  },
  [52] = {
    [sym_identifier] = ACTIONS(252),
    [sym_comment] = ACTIONS(37),
  },
  [53] = {
    [sym_identifier] = ACTIONS(254),
    [sym_comment] = ACTIONS(37),
  },
  [54] = {
    [sym_identifier] = ACTIONS(256),
    [sym_comment] = ACTIONS(37),
  },
  [55] = {
    [sym_identifier] = ACTIONS(258),
    [sym_comment] = ACTIONS(37),
  },
  [56] = {
    [sym_identifier] = ACTIONS(260),
    [sym_comment] = ACTIONS(37),
  },
  [57] = {
    [sym__selector] = STATE(116),
    [sym_universal_selector] = STATE(116),
    [sym_class_selector] = STATE(116),
    [sym_pseudo_class_selector] = STATE(116),
    [sym_pseudo_element_selector] = STATE(116),
    [sym_id_selector] = STATE(116),
    [sym_attribute_selector] = STATE(116),
    [sym_child_selector] = STATE(116),
    [sym_descendant_selector] = STATE(116),
    [sym_sibling_selector] = STATE(116),
    [sym_adjacent_sibling_selector] = STATE(116),
    [sym_nesting_selector] = ACTIONS(262),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_string_value] = ACTIONS(262),
    [sym_identifier] = ACTIONS(248),
    [sym_comment] = ACTIONS(37),
  },
  [58] = {
    [sym__selector] = STATE(117),
    [sym_universal_selector] = STATE(117),
    [sym_class_selector] = STATE(117),
    [sym_pseudo_class_selector] = STATE(117),
    [sym_pseudo_element_selector] = STATE(117),
    [sym_id_selector] = STATE(117),
    [sym_attribute_selector] = STATE(117),
    [sym_child_selector] = STATE(117),
    [sym_descendant_selector] = STATE(117),
    [sym_sibling_selector] = STATE(117),
    [sym_adjacent_sibling_selector] = STATE(117),
    [sym_nesting_selector] = ACTIONS(264),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_string_value] = ACTIONS(264),
    [sym_identifier] = ACTIONS(248),
    [sym_comment] = ACTIONS(37),
  },
  [59] = {
    [sym__selector] = STATE(118),
    [sym_universal_selector] = STATE(118),
    [sym_class_selector] = STATE(118),
    [sym_pseudo_class_selector] = STATE(118),
    [sym_pseudo_element_selector] = STATE(118),
    [sym_id_selector] = STATE(118),
    [sym_attribute_selector] = STATE(118),
    [sym_child_selector] = STATE(118),
    [sym_descendant_selector] = STATE(118),
    [sym_sibling_selector] = STATE(118),
    [sym_adjacent_sibling_selector] = STATE(118),
    [sym_nesting_selector] = ACTIONS(266),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_string_value] = ACTIONS(266),
    [sym_identifier] = ACTIONS(248),
    [sym_comment] = ACTIONS(37),
  },
  [60] = {
    [aux_sym_selectors_repeat1] = STATE(119),
    [anon_sym_COMMA] = ACTIONS(106),
    [anon_sym_LBRACE] = ACTIONS(268),
    [sym_comment] = ACTIONS(37),
  },
  [61] = {
    [sym_import_statement] = STATE(61),
    [sym_media_statement] = STATE(61),
    [sym_charset_statement] = STATE(61),
    [sym_namespace_statement] = STATE(61),
    [sym_keyframes_statement] = STATE(61),
    [sym_supports_statement] = STATE(61),
    [sym_at_rule] = STATE(61),
    [sym_rule_set] = STATE(61),
    [sym_selectors] = STATE(17),
    [sym__selector] = STATE(18),
    [sym_universal_selector] = STATE(18),
    [sym_class_selector] = STATE(18),
    [sym_pseudo_class_selector] = STATE(18),
    [sym_pseudo_element_selector] = STATE(18),
    [sym_id_selector] = STATE(18),
    [sym_attribute_selector] = STATE(18),
    [sym_child_selector] = STATE(18),
    [sym_descendant_selector] = STATE(18),
    [sym_sibling_selector] = STATE(18),
    [sym_adjacent_sibling_selector] = STATE(18),
    [sym_declaration] = STATE(61),
    [aux_sym_stylesheet_repeat1] = STATE(61),
    [ts_builtin_sym_end] = ACTIONS(270),
    [anon_sym_ATimport] = ACTIONS(272),
    [anon_sym_ATmedia] = ACTIONS(275),
    [anon_sym_ATcharset] = ACTIONS(278),
    [anon_sym_ATnamespace] = ACTIONS(281),
    [anon_sym_ATkeyframes] = ACTIONS(284),
    [aux_sym_SLASH_AT_LBRACK_DASHa_DASHz_RBRACK_PLUSkeyframes_SLASH] = ACTIONS(284),
    [anon_sym_ATsupports] = ACTIONS(287),
    [sym_nesting_selector] = ACTIONS(290),
    [anon_sym_STAR] = ACTIONS(293),
    [anon_sym_DOT] = ACTIONS(296),
    [anon_sym_COLON] = ACTIONS(299),
    [anon_sym_COLON_COLON] = ACTIONS(302),
    [anon_sym_POUND] = ACTIONS(305),
    [anon_sym_LBRACK] = ACTIONS(308),
    [sym_string_value] = ACTIONS(290),
    [sym_identifier] = ACTIONS(311),
    [sym_at_keyword] = ACTIONS(314),
    [sym_comment] = ACTIONS(37),
  },
  [62] = {
    [anon_sym_SEMI] = ACTIONS(317),
    [anon_sym_STAR] = ACTIONS(317),
    [anon_sym_RBRACK] = ACTIONS(317),
    [anon_sym_PLUS] = ACTIONS(317),
    [anon_sym_RPAREN] = ACTIONS(317),
    [anon_sym_LPAREN2] = ACTIONS(317),
    [anon_sym_not] = ACTIONS(319),
    [anon_sym_only] = ACTIONS(319),
    [anon_sym_selector] = ACTIONS(319),
    [anon_sym_DASH] = ACTIONS(319),
    [anon_sym_SLASH] = ACTIONS(319),
    [sym_identifier] = ACTIONS(319),
    [sym_comment] = ACTIONS(37),
  },
  [63] = {
    [anon_sym_STAR] = ACTIONS(178),
    [anon_sym_PLUS] = ACTIONS(178),
    [anon_sym_RPAREN] = ACTIONS(321),
    [anon_sym_DASH] = ACTIONS(178),
    [anon_sym_SLASH] = ACTIONS(180),
    [sym_comment] = ACTIONS(37),
  },
  [64] = {
    [anon_sym_SEMI] = ACTIONS(323),
    [anon_sym_LBRACE] = ACTIONS(323),
    [anon_sym_STAR] = ACTIONS(323),
    [anon_sym_RBRACK] = ACTIONS(323),
    [anon_sym_PLUS] = ACTIONS(323),
    [anon_sym_RPAREN] = ACTIONS(323),
    [anon_sym_LPAREN2] = ACTIONS(323),
    [anon_sym_not] = ACTIONS(325),
    [anon_sym_only] = ACTIONS(325),
    [anon_sym_selector] = ACTIONS(325),
    [anon_sym_DASH] = ACTIONS(325),
    [anon_sym_SLASH] = ACTIONS(325),
    [sym_identifier] = ACTIONS(325),
    [sym_comment] = ACTIONS(37),
  },
  [65] = {
    [anon_sym_SEMI] = ACTIONS(327),
    [anon_sym_STAR] = ACTIONS(327),
    [anon_sym_RBRACK] = ACTIONS(327),
    [anon_sym_PLUS] = ACTIONS(327),
    [anon_sym_RPAREN] = ACTIONS(327),
    [anon_sym_LPAREN2] = ACTIONS(327),
    [anon_sym_not] = ACTIONS(329),
    [anon_sym_only] = ACTIONS(329),
    [anon_sym_selector] = ACTIONS(329),
    [anon_sym_DASH] = ACTIONS(329),
    [anon_sym_SLASH] = ACTIONS(329),
    [sym_identifier] = ACTIONS(329),
    [sym_comment] = ACTIONS(37),
  },
  [66] = {
    [sym__value] = STATE(122),
    [sym_parenthesized_value] = STATE(122),
    [sym_color_value] = STATE(122),
    [sym_integer_value] = STATE(122),
    [sym_float_value] = STATE(122),
    [sym_call_expression] = STATE(122),
    [sym_binary_expression] = STATE(122),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(123),
    [anon_sym_POUND] = ACTIONS(214),
    [anon_sym_RPAREN] = ACTIONS(331),
    [anon_sym_LPAREN2] = ACTIONS(216),
    [sym_string_value] = ACTIONS(333),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(220),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(222),
    [sym_identifier] = ACTIONS(224),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(335),
  },
  [67] = {
    [anon_sym_SEMI] = ACTIONS(337),
    [anon_sym_STAR] = ACTIONS(337),
    [anon_sym_RBRACK] = ACTIONS(337),
    [anon_sym_PLUS] = ACTIONS(337),
    [anon_sym_RPAREN] = ACTIONS(337),
    [anon_sym_LPAREN2] = ACTIONS(337),
    [anon_sym_not] = ACTIONS(339),
    [anon_sym_only] = ACTIONS(339),
    [anon_sym_selector] = ACTIONS(339),
    [anon_sym_DASH] = ACTIONS(339),
    [anon_sym_SLASH] = ACTIONS(339),
    [sym_identifier] = ACTIONS(339),
    [sym_comment] = ACTIONS(37),
  },
  [68] = {
    [ts_builtin_sym_end] = ACTIONS(341),
    [anon_sym_ATimport] = ACTIONS(343),
    [anon_sym_ATmedia] = ACTIONS(343),
    [anon_sym_ATcharset] = ACTIONS(343),
    [anon_sym_ATnamespace] = ACTIONS(343),
    [anon_sym_ATkeyframes] = ACTIONS(343),
    [aux_sym_SLASH_AT_LBRACK_DASHa_DASHz_RBRACK_PLUSkeyframes_SLASH] = ACTIONS(343),
    [anon_sym_RBRACE] = ACTIONS(341),
    [anon_sym_ATsupports] = ACTIONS(343),
    [sym_nesting_selector] = ACTIONS(341),
    [anon_sym_STAR] = ACTIONS(341),
    [anon_sym_DOT] = ACTIONS(341),
    [anon_sym_COLON] = ACTIONS(343),
    [anon_sym_COLON_COLON] = ACTIONS(341),
    [anon_sym_POUND] = ACTIONS(341),
    [anon_sym_LBRACK] = ACTIONS(341),
    [sym_string_value] = ACTIONS(341),
    [sym_identifier] = ACTIONS(341),
    [sym_at_keyword] = ACTIONS(343),
    [sym_comment] = ACTIONS(37),
  },
  [69] = {
    [sym__value] = STATE(124),
    [sym_parenthesized_value] = STATE(124),
    [sym_color_value] = STATE(124),
    [sym_integer_value] = STATE(124),
    [sym_float_value] = STATE(124),
    [sym_call_expression] = STATE(124),
    [sym_binary_expression] = STATE(124),
    [anon_sym_POUND] = ACTIONS(39),
    [anon_sym_LPAREN2] = ACTIONS(41),
    [sym_string_value] = ACTIONS(345),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(45),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(47),
    [sym_identifier] = ACTIONS(49),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(347),
  },
  [70] = {
    [sym__query] = STATE(75),
    [sym_feature_query] = STATE(75),
    [sym_parenthesized_query] = STATE(75),
    [sym_binary_query] = STATE(75),
    [sym_unary_query] = STATE(75),
    [sym_selector_query] = STATE(75),
    [anon_sym_LPAREN2] = ACTIONS(53),
    [anon_sym_not] = ACTIONS(156),
    [anon_sym_only] = ACTIONS(156),
    [anon_sym_selector] = ACTIONS(57),
    [sym_identifier] = ACTIONS(59),
    [sym_comment] = ACTIONS(37),
  },
  [71] = {
    [aux_sym_import_statement_repeat1] = STATE(128),
    [anon_sym_COMMA] = ACTIONS(349),
    [anon_sym_SEMI] = ACTIONS(351),
    [anon_sym_and] = ACTIONS(353),
    [anon_sym_or] = ACTIONS(353),
    [sym_comment] = ACTIONS(37),
  },
  [72] = {
    [sym__query] = STATE(75),
    [sym_feature_query] = STATE(75),
    [sym_parenthesized_query] = STATE(75),
    [sym_binary_query] = STATE(75),
    [sym_unary_query] = STATE(75),
    [sym_selector_query] = STATE(75),
    [anon_sym_LPAREN2] = ACTIONS(53),
    [anon_sym_not] = ACTIONS(160),
    [anon_sym_only] = ACTIONS(160),
    [anon_sym_selector] = ACTIONS(57),
    [sym_identifier] = ACTIONS(59),
    [sym_comment] = ACTIONS(37),
  },
  [73] = {
    [anon_sym_COLON] = ACTIONS(355),
    [anon_sym_RPAREN] = ACTIONS(166),
    [anon_sym_and] = ACTIONS(166),
    [anon_sym_or] = ACTIONS(166),
    [sym_comment] = ACTIONS(37),
  },
  [74] = {
    [anon_sym_RPAREN] = ACTIONS(357),
    [anon_sym_and] = ACTIONS(359),
    [anon_sym_or] = ACTIONS(359),
    [sym_comment] = ACTIONS(37),
  },
  [75] = {
    [anon_sym_COMMA] = ACTIONS(361),
    [anon_sym_SEMI] = ACTIONS(361),
    [anon_sym_LBRACE] = ACTIONS(361),
    [anon_sym_RPAREN] = ACTIONS(361),
    [anon_sym_and] = ACTIONS(361),
    [anon_sym_or] = ACTIONS(361),
    [sym_comment] = ACTIONS(37),
  },
  [76] = {
    [sym__selector] = STATE(132),
    [sym_universal_selector] = STATE(132),
    [sym_class_selector] = STATE(132),
    [sym_pseudo_class_selector] = STATE(132),
    [sym_pseudo_element_selector] = STATE(132),
    [sym_id_selector] = STATE(132),
    [sym_attribute_selector] = STATE(132),
    [sym_child_selector] = STATE(132),
    [sym_descendant_selector] = STATE(132),
    [sym_sibling_selector] = STATE(132),
    [sym_adjacent_sibling_selector] = STATE(132),
    [sym_nesting_selector] = ACTIONS(363),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_string_value] = ACTIONS(363),
    [sym_identifier] = ACTIONS(248),
    [sym_comment] = ACTIONS(37),
  },
  [77] = {
    [sym__query] = STATE(133),
    [sym_feature_query] = STATE(133),
    [sym_parenthesized_query] = STATE(133),
    [sym_binary_query] = STATE(133),
    [sym_unary_query] = STATE(133),
    [sym_selector_query] = STATE(133),
    [anon_sym_LPAREN2] = ACTIONS(53),
    [anon_sym_not] = ACTIONS(55),
    [anon_sym_only] = ACTIONS(55),
    [anon_sym_selector] = ACTIONS(57),
    [sym_identifier] = ACTIONS(59),
    [sym_comment] = ACTIONS(37),
  },
  [78] = {
    [sym__query] = STATE(134),
    [sym_feature_query] = STATE(134),
    [sym_parenthesized_query] = STATE(134),
    [sym_binary_query] = STATE(134),
    [sym_unary_query] = STATE(134),
    [sym_selector_query] = STATE(134),
    [anon_sym_LPAREN2] = ACTIONS(53),
    [anon_sym_not] = ACTIONS(55),
    [anon_sym_only] = ACTIONS(55),
    [anon_sym_selector] = ACTIONS(57),
    [sym_identifier] = ACTIONS(59),
    [sym_comment] = ACTIONS(37),
  },
  [79] = {
    [ts_builtin_sym_end] = ACTIONS(365),
    [anon_sym_ATimport] = ACTIONS(367),
    [anon_sym_ATmedia] = ACTIONS(367),
    [anon_sym_ATcharset] = ACTIONS(367),
    [anon_sym_ATnamespace] = ACTIONS(367),
    [anon_sym_ATkeyframes] = ACTIONS(367),
    [aux_sym_SLASH_AT_LBRACK_DASHa_DASHz_RBRACK_PLUSkeyframes_SLASH] = ACTIONS(367),
    [anon_sym_RBRACE] = ACTIONS(365),
    [anon_sym_ATsupports] = ACTIONS(367),
    [sym_nesting_selector] = ACTIONS(365),
    [anon_sym_STAR] = ACTIONS(365),
    [anon_sym_DOT] = ACTIONS(365),
    [anon_sym_COLON] = ACTIONS(367),
    [anon_sym_COLON_COLON] = ACTIONS(365),
    [anon_sym_POUND] = ACTIONS(365),
    [anon_sym_LBRACK] = ACTIONS(365),
    [sym_string_value] = ACTIONS(365),
    [sym_identifier] = ACTIONS(365),
    [sym_at_keyword] = ACTIONS(367),
    [sym_comment] = ACTIONS(37),
  },
  [80] = {
    [sym_block] = STATE(135),
    [aux_sym_import_statement_repeat1] = STATE(136),
    [anon_sym_COMMA] = ACTIONS(168),
    [anon_sym_LBRACE] = ACTIONS(98),
    [sym_comment] = ACTIONS(37),
  },
  [81] = {
    [ts_builtin_sym_end] = ACTIONS(369),
    [anon_sym_ATimport] = ACTIONS(371),
    [anon_sym_ATmedia] = ACTIONS(371),
    [anon_sym_ATcharset] = ACTIONS(371),
    [anon_sym_ATnamespace] = ACTIONS(371),
    [anon_sym_ATkeyframes] = ACTIONS(371),
    [aux_sym_SLASH_AT_LBRACK_DASHa_DASHz_RBRACK_PLUSkeyframes_SLASH] = ACTIONS(371),
    [anon_sym_RBRACE] = ACTIONS(369),
    [anon_sym_ATsupports] = ACTIONS(371),
    [sym_nesting_selector] = ACTIONS(369),
    [anon_sym_STAR] = ACTIONS(369),
    [anon_sym_DOT] = ACTIONS(369),
    [anon_sym_COLON] = ACTIONS(371),
    [anon_sym_COLON_COLON] = ACTIONS(369),
    [anon_sym_POUND] = ACTIONS(369),
    [anon_sym_LBRACK] = ACTIONS(369),
    [sym_string_value] = ACTIONS(369),
    [sym_identifier] = ACTIONS(369),
    [sym_at_keyword] = ACTIONS(371),
    [sym_comment] = ACTIONS(37),
  },
  [82] = {
    [sym__value] = STATE(124),
    [sym_parenthesized_value] = STATE(124),
    [sym_color_value] = STATE(124),
    [sym_integer_value] = STATE(124),
    [sym_float_value] = STATE(124),
    [sym_call_expression] = STATE(124),
    [sym_binary_expression] = STATE(124),
    [anon_sym_POUND] = ACTIONS(39),
    [anon_sym_LPAREN2] = ACTIONS(41),
    [sym_string_value] = ACTIONS(345),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(63),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(65),
    [sym_identifier] = ACTIONS(49),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(347),
  },
  [83] = {
    [ts_builtin_sym_end] = ACTIONS(373),
    [anon_sym_ATimport] = ACTIONS(375),
    [anon_sym_ATmedia] = ACTIONS(375),
    [anon_sym_ATcharset] = ACTIONS(375),
    [anon_sym_ATnamespace] = ACTIONS(375),
    [anon_sym_ATkeyframes] = ACTIONS(375),
    [aux_sym_SLASH_AT_LBRACK_DASHa_DASHz_RBRACK_PLUSkeyframes_SLASH] = ACTIONS(375),
    [anon_sym_RBRACE] = ACTIONS(373),
    [anon_sym_ATsupports] = ACTIONS(375),
    [sym_nesting_selector] = ACTIONS(373),
    [anon_sym_STAR] = ACTIONS(373),
    [anon_sym_DOT] = ACTIONS(373),
    [anon_sym_COLON] = ACTIONS(375),
    [anon_sym_COLON_COLON] = ACTIONS(373),
    [anon_sym_POUND] = ACTIONS(373),
    [anon_sym_LBRACK] = ACTIONS(373),
    [sym_string_value] = ACTIONS(373),
    [sym_identifier] = ACTIONS(373),
    [sym_at_keyword] = ACTIONS(375),
    [sym_comment] = ACTIONS(37),
  },
  [84] = {
    [anon_sym_SEMI] = ACTIONS(377),
    [sym_comment] = ACTIONS(37),
  },
  [85] = {
    [sym_arguments] = STATE(67),
    [anon_sym_LPAREN] = ACTIONS(148),
    [sym_comment] = ACTIONS(37),
  },
  [86] = {
    [sym_keyframe_block] = STATE(140),
    [sym_integer_value] = STATE(139),
    [aux_sym_keyframe_block_list_repeat1] = STATE(140),
    [anon_sym_RBRACE] = ACTIONS(379),
    [sym_from] = ACTIONS(381),
    [sym_to] = ACTIONS(381),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(383),
    [sym_comment] = ACTIONS(37),
  },
  [87] = {
    [ts_builtin_sym_end] = ACTIONS(385),
    [anon_sym_ATimport] = ACTIONS(387),
    [anon_sym_ATmedia] = ACTIONS(387),
    [anon_sym_ATcharset] = ACTIONS(387),
    [anon_sym_ATnamespace] = ACTIONS(387),
    [anon_sym_ATkeyframes] = ACTIONS(387),
    [aux_sym_SLASH_AT_LBRACK_DASHa_DASHz_RBRACK_PLUSkeyframes_SLASH] = ACTIONS(387),
    [anon_sym_RBRACE] = ACTIONS(385),
    [anon_sym_ATsupports] = ACTIONS(387),
    [sym_nesting_selector] = ACTIONS(385),
    [anon_sym_STAR] = ACTIONS(385),
    [anon_sym_DOT] = ACTIONS(385),
    [anon_sym_COLON] = ACTIONS(387),
    [anon_sym_COLON_COLON] = ACTIONS(385),
    [anon_sym_POUND] = ACTIONS(385),
    [anon_sym_LBRACK] = ACTIONS(385),
    [sym_string_value] = ACTIONS(385),
    [sym_identifier] = ACTIONS(385),
    [sym_at_keyword] = ACTIONS(387),
    [sym_comment] = ACTIONS(37),
  },
  [88] = {
    [sym__query] = STATE(134),
    [sym_feature_query] = STATE(134),
    [sym_parenthesized_query] = STATE(134),
    [sym_binary_query] = STATE(134),
    [sym_unary_query] = STATE(134),
    [sym_selector_query] = STATE(134),
    [anon_sym_LPAREN2] = ACTIONS(53),
    [anon_sym_not] = ACTIONS(75),
    [anon_sym_only] = ACTIONS(75),
    [anon_sym_selector] = ACTIONS(57),
    [sym_identifier] = ACTIONS(59),
    [sym_comment] = ACTIONS(37),
  },
  [89] = {
    [ts_builtin_sym_end] = ACTIONS(389),
    [anon_sym_ATimport] = ACTIONS(391),
    [anon_sym_ATmedia] = ACTIONS(391),
    [anon_sym_ATcharset] = ACTIONS(391),
    [anon_sym_ATnamespace] = ACTIONS(391),
    [anon_sym_ATkeyframes] = ACTIONS(391),
    [aux_sym_SLASH_AT_LBRACK_DASHa_DASHz_RBRACK_PLUSkeyframes_SLASH] = ACTIONS(391),
    [anon_sym_RBRACE] = ACTIONS(389),
    [anon_sym_ATsupports] = ACTIONS(391),
    [sym_nesting_selector] = ACTIONS(389),
    [anon_sym_STAR] = ACTIONS(389),
    [anon_sym_DOT] = ACTIONS(389),
    [anon_sym_COLON] = ACTIONS(391),
    [anon_sym_COLON_COLON] = ACTIONS(389),
    [anon_sym_POUND] = ACTIONS(389),
    [anon_sym_LBRACK] = ACTIONS(389),
    [sym_string_value] = ACTIONS(389),
    [sym_identifier] = ACTIONS(389),
    [sym_at_keyword] = ACTIONS(391),
    [sym_comment] = ACTIONS(37),
  },
  [90] = {
    [sym__selector] = STATE(145),
    [sym_universal_selector] = STATE(145),
    [sym_class_selector] = STATE(145),
    [sym_pseudo_class_selector] = STATE(145),
    [sym_pseudo_element_selector] = STATE(145),
    [sym_id_selector] = STATE(145),
    [sym_attribute_selector] = STATE(145),
    [sym_child_selector] = STATE(145),
    [sym_descendant_selector] = STATE(145),
    [sym_sibling_selector] = STATE(145),
    [sym_adjacent_sibling_selector] = STATE(145),
    [sym__value] = STATE(122),
    [sym_parenthesized_value] = STATE(122),
    [sym_color_value] = STATE(122),
    [sym_integer_value] = STATE(122),
    [sym_float_value] = STATE(122),
    [sym_call_expression] = STATE(122),
    [sym_binary_expression] = STATE(122),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(146),
    [sym_nesting_selector] = ACTIONS(393),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(395),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(397),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(399),
    [anon_sym_LPAREN2] = ACTIONS(216),
    [sym_string_value] = ACTIONS(401),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(220),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(222),
    [sym_identifier] = ACTIONS(403),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(335),
  },
  [91] = {
    [sym__descendant_operator] = ACTIONS(405),
    [anon_sym_COMMA] = ACTIONS(405),
    [anon_sym_LBRACE] = ACTIONS(405),
    [anon_sym_DOT] = ACTIONS(405),
    [anon_sym_COLON] = ACTIONS(407),
    [anon_sym_COLON_COLON] = ACTIONS(405),
    [anon_sym_POUND] = ACTIONS(405),
    [anon_sym_LBRACK] = ACTIONS(405),
    [anon_sym_GT] = ACTIONS(405),
    [anon_sym_TILDE] = ACTIONS(405),
    [anon_sym_PLUS] = ACTIONS(405),
    [anon_sym_RPAREN] = ACTIONS(405),
    [sym_comment] = ACTIONS(37),
  },
  [92] = {
    [sym__value] = STATE(147),
    [sym_parenthesized_value] = STATE(147),
    [sym_color_value] = STATE(147),
    [sym_integer_value] = STATE(147),
    [sym_float_value] = STATE(147),
    [sym_call_expression] = STATE(147),
    [sym_binary_expression] = STATE(147),
    [anon_sym_POUND] = ACTIONS(39),
    [anon_sym_LPAREN2] = ACTIONS(41),
    [sym_string_value] = ACTIONS(409),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(63),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(65),
    [sym_identifier] = ACTIONS(49),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(411),
  },
  [93] = {
    [sym__descendant_operator] = ACTIONS(413),
    [anon_sym_COMMA] = ACTIONS(413),
    [anon_sym_LBRACE] = ACTIONS(413),
    [anon_sym_DOT] = ACTIONS(413),
    [anon_sym_COLON] = ACTIONS(415),
    [anon_sym_COLON_COLON] = ACTIONS(413),
    [anon_sym_POUND] = ACTIONS(413),
    [anon_sym_LBRACK] = ACTIONS(413),
    [anon_sym_GT] = ACTIONS(413),
    [anon_sym_TILDE] = ACTIONS(413),
    [anon_sym_PLUS] = ACTIONS(413),
    [anon_sym_RPAREN] = ACTIONS(413),
    [sym_comment] = ACTIONS(37),
  },
  [94] = {
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH] = ACTIONS(417),
    [sym_comment] = ACTIONS(37),
  },
  [95] = {
    [sym__value] = STATE(149),
    [sym_parenthesized_value] = STATE(149),
    [sym_color_value] = STATE(149),
    [sym_integer_value] = STATE(149),
    [sym_float_value] = STATE(149),
    [sym_call_expression] = STATE(149),
    [sym_binary_expression] = STATE(149),
    [anon_sym_POUND] = ACTIONS(39),
    [anon_sym_LPAREN2] = ACTIONS(41),
    [sym_string_value] = ACTIONS(419),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(63),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(65),
    [sym_identifier] = ACTIONS(49),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(421),
  },
  [96] = {
    [anon_sym_COMMA] = ACTIONS(134),
    [anon_sym_SEMI] = ACTIONS(134),
    [anon_sym_RBRACE] = ACTIONS(134),
    [anon_sym_STAR] = ACTIONS(134),
    [anon_sym_POUND] = ACTIONS(134),
    [anon_sym_PLUS] = ACTIONS(136),
    [anon_sym_RPAREN] = ACTIONS(134),
    [sym_important] = ACTIONS(134),
    [anon_sym_LPAREN2] = ACTIONS(134),
    [sym_string_value] = ACTIONS(134),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(136),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(136),
    [sym_unit] = ACTIONS(423),
    [anon_sym_DASH] = ACTIONS(136),
    [anon_sym_SLASH] = ACTIONS(136),
    [sym_identifier] = ACTIONS(136),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(136),
  },
  [97] = {
    [anon_sym_COMMA] = ACTIONS(140),
    [anon_sym_SEMI] = ACTIONS(140),
    [anon_sym_RBRACE] = ACTIONS(140),
    [anon_sym_STAR] = ACTIONS(140),
    [anon_sym_POUND] = ACTIONS(140),
    [anon_sym_PLUS] = ACTIONS(142),
    [anon_sym_RPAREN] = ACTIONS(140),
    [sym_important] = ACTIONS(140),
    [anon_sym_LPAREN2] = ACTIONS(140),
    [sym_string_value] = ACTIONS(140),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(142),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(142),
    [sym_unit] = ACTIONS(425),
    [anon_sym_DASH] = ACTIONS(142),
    [anon_sym_SLASH] = ACTIONS(142),
    [sym_identifier] = ACTIONS(142),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(142),
  },
  [98] = {
    [sym_arguments] = STATE(153),
    [anon_sym_COMMA] = ACTIONS(146),
    [anon_sym_SEMI] = ACTIONS(146),
    [anon_sym_RBRACE] = ACTIONS(146),
    [anon_sym_STAR] = ACTIONS(146),
    [anon_sym_POUND] = ACTIONS(146),
    [anon_sym_PLUS] = ACTIONS(150),
    [anon_sym_LPAREN] = ACTIONS(427),
    [anon_sym_RPAREN] = ACTIONS(146),
    [sym_important] = ACTIONS(146),
    [anon_sym_LPAREN2] = ACTIONS(150),
    [sym_string_value] = ACTIONS(146),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(150),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(150),
    [anon_sym_SLASH] = ACTIONS(150),
    [sym_identifier] = ACTIONS(150),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(150),
  },
  [99] = {
    [sym__value] = STATE(158),
    [sym_parenthesized_value] = STATE(158),
    [sym_color_value] = STATE(158),
    [sym_integer_value] = STATE(158),
    [sym_float_value] = STATE(158),
    [sym_call_expression] = STATE(158),
    [sym_binary_expression] = STATE(158),
    [aux_sym_declaration_repeat1] = STATE(159),
    [anon_sym_COMMA] = ACTIONS(429),
    [anon_sym_SEMI] = ACTIONS(431),
    [anon_sym_STAR] = ACTIONS(433),
    [anon_sym_POUND] = ACTIONS(214),
    [anon_sym_PLUS] = ACTIONS(435),
    [sym_important] = ACTIONS(437),
    [anon_sym_LPAREN2] = ACTIONS(216),
    [sym_string_value] = ACTIONS(439),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(220),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(222),
    [anon_sym_DASH] = ACTIONS(435),
    [anon_sym_SLASH] = ACTIONS(435),
    [sym_identifier] = ACTIONS(224),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(441),
  },
  [100] = {
    [ts_builtin_sym_end] = ACTIONS(443),
    [anon_sym_ATimport] = ACTIONS(445),
    [anon_sym_ATmedia] = ACTIONS(445),
    [anon_sym_ATcharset] = ACTIONS(445),
    [anon_sym_ATnamespace] = ACTIONS(445),
    [anon_sym_ATkeyframes] = ACTIONS(445),
    [aux_sym_SLASH_AT_LBRACK_DASHa_DASHz_RBRACK_PLUSkeyframes_SLASH] = ACTIONS(445),
    [anon_sym_RBRACE] = ACTIONS(443),
    [anon_sym_ATsupports] = ACTIONS(445),
    [sym_nesting_selector] = ACTIONS(443),
    [anon_sym_STAR] = ACTIONS(443),
    [anon_sym_DOT] = ACTIONS(443),
    [anon_sym_COLON] = ACTIONS(445),
    [anon_sym_COLON_COLON] = ACTIONS(443),
    [anon_sym_POUND] = ACTIONS(443),
    [anon_sym_LBRACK] = ACTIONS(443),
    [sym_string_value] = ACTIONS(443),
    [sym_identifier] = ACTIONS(443),
    [sym_at_keyword] = ACTIONS(445),
    [sym_comment] = ACTIONS(37),
  },
  [101] = {
    [sym__descendant_operator] = ACTIONS(91),
    [anon_sym_COMMA] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(91),
    [anon_sym_DOT] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(447),
    [anon_sym_COLON_COLON] = ACTIONS(91),
    [anon_sym_POUND] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_GT] = ACTIONS(91),
    [anon_sym_TILDE] = ACTIONS(91),
    [anon_sym_PLUS] = ACTIONS(91),
    [sym_comment] = ACTIONS(37),
  },
  [102] = {
    [anon_sym_RBRACE] = ACTIONS(449),
    [sym_comment] = ACTIONS(37),
  },
  [103] = {
    [sym_import_statement] = STATE(163),
    [sym_media_statement] = STATE(163),
    [sym_charset_statement] = STATE(163),
    [sym_namespace_statement] = STATE(163),
    [sym_keyframes_statement] = STATE(163),
    [sym_supports_statement] = STATE(163),
    [sym_at_rule] = STATE(163),
    [sym_rule_set] = STATE(163),
    [sym_selectors] = STATE(17),
    [sym__selector] = STATE(18),
    [sym_universal_selector] = STATE(18),
    [sym_class_selector] = STATE(18),
    [sym_pseudo_class_selector] = STATE(18),
    [sym_pseudo_element_selector] = STATE(18),
    [sym_id_selector] = STATE(18),
    [sym_attribute_selector] = STATE(18),
    [sym_child_selector] = STATE(18),
    [sym_descendant_selector] = STATE(18),
    [sym_sibling_selector] = STATE(18),
    [sym_adjacent_sibling_selector] = STATE(18),
    [sym_declaration] = STATE(163),
    [sym_last_declaration] = STATE(162),
    [aux_sym_block_repeat1] = STATE(163),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATmedia] = ACTIONS(9),
    [anon_sym_ATcharset] = ACTIONS(11),
    [anon_sym_ATnamespace] = ACTIONS(13),
    [anon_sym_ATkeyframes] = ACTIONS(15),
    [aux_sym_SLASH_AT_LBRACK_DASHa_DASHz_RBRACK_PLUSkeyframes_SLASH] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(449),
    [anon_sym_ATsupports] = ACTIONS(17),
    [sym_nesting_selector] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_string_value] = ACTIONS(19),
    [sym_identifier] = ACTIONS(234),
    [sym_at_keyword] = ACTIONS(35),
    [sym_comment] = ACTIONS(37),
  },
  [104] = {
    [sym__query] = STATE(164),
    [sym_feature_query] = STATE(164),
    [sym_parenthesized_query] = STATE(164),
    [sym_binary_query] = STATE(164),
    [sym_unary_query] = STATE(164),
    [sym_selector_query] = STATE(164),
    [anon_sym_LPAREN2] = ACTIONS(53),
    [anon_sym_not] = ACTIONS(100),
    [anon_sym_only] = ACTIONS(100),
    [anon_sym_selector] = ACTIONS(57),
    [sym_identifier] = ACTIONS(59),
    [sym_comment] = ACTIONS(37),
  },
  [105] = {
    [ts_builtin_sym_end] = ACTIONS(451),
    [anon_sym_ATimport] = ACTIONS(453),
    [anon_sym_ATmedia] = ACTIONS(453),
    [anon_sym_ATcharset] = ACTIONS(453),
    [anon_sym_ATnamespace] = ACTIONS(453),
    [anon_sym_ATkeyframes] = ACTIONS(453),
    [aux_sym_SLASH_AT_LBRACK_DASHa_DASHz_RBRACK_PLUSkeyframes_SLASH] = ACTIONS(453),
    [anon_sym_RBRACE] = ACTIONS(451),
    [anon_sym_ATsupports] = ACTIONS(453),
    [sym_nesting_selector] = ACTIONS(451),
    [anon_sym_STAR] = ACTIONS(451),
    [anon_sym_DOT] = ACTIONS(451),
    [anon_sym_COLON] = ACTIONS(453),
    [anon_sym_COLON_COLON] = ACTIONS(451),
    [anon_sym_POUND] = ACTIONS(451),
    [anon_sym_LBRACK] = ACTIONS(451),
    [sym_string_value] = ACTIONS(451),
    [sym_identifier] = ACTIONS(451),
    [sym_at_keyword] = ACTIONS(453),
    [sym_comment] = ACTIONS(37),
  },
  [106] = {
    [sym__query] = STATE(134),
    [sym_feature_query] = STATE(134),
    [sym_parenthesized_query] = STATE(134),
    [sym_binary_query] = STATE(134),
    [sym_unary_query] = STATE(134),
    [sym_selector_query] = STATE(134),
    [anon_sym_LPAREN2] = ACTIONS(53),
    [anon_sym_not] = ACTIONS(100),
    [anon_sym_only] = ACTIONS(100),
    [anon_sym_selector] = ACTIONS(57),
    [sym_identifier] = ACTIONS(59),
    [sym_comment] = ACTIONS(37),
  },
  [107] = {
    [sym_block] = STATE(165),
    [aux_sym_import_statement_repeat1] = STATE(166),
    [anon_sym_COMMA] = ACTIONS(236),
    [anon_sym_SEMI] = ACTIONS(455),
    [anon_sym_LBRACE] = ACTIONS(98),
    [sym_comment] = ACTIONS(37),
  },
  [108] = {
    [sym__descendant_operator] = ACTIONS(91),
    [anon_sym_COMMA] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(91),
    [anon_sym_DOT] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(457),
    [anon_sym_COLON_COLON] = ACTIONS(91),
    [anon_sym_POUND] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_GT] = ACTIONS(91),
    [anon_sym_TILDE] = ACTIONS(91),
    [anon_sym_PLUS] = ACTIONS(91),
    [anon_sym_RPAREN] = ACTIONS(91),
    [sym_comment] = ACTIONS(37),
  },
  [109] = {
    [sym__descendant_operator] = ACTIONS(459),
    [anon_sym_COMMA] = ACTIONS(459),
    [anon_sym_LBRACE] = ACTIONS(459),
    [anon_sym_DOT] = ACTIONS(110),
    [anon_sym_COLON] = ACTIONS(461),
    [anon_sym_COLON_COLON] = ACTIONS(459),
    [anon_sym_POUND] = ACTIONS(459),
    [anon_sym_LBRACK] = ACTIONS(459),
    [anon_sym_GT] = ACTIONS(459),
    [anon_sym_TILDE] = ACTIONS(459),
    [anon_sym_PLUS] = ACTIONS(459),
    [anon_sym_RPAREN] = ACTIONS(459),
    [sym_comment] = ACTIONS(37),
  },
  [110] = {
    [sym__descendant_operator] = ACTIONS(104),
    [anon_sym_COMMA] = ACTIONS(463),
    [anon_sym_LBRACE] = ACTIONS(463),
    [anon_sym_DOT] = ACTIONS(110),
    [anon_sym_COLON] = ACTIONS(112),
    [anon_sym_COLON_COLON] = ACTIONS(114),
    [anon_sym_POUND] = ACTIONS(116),
    [anon_sym_LBRACK] = ACTIONS(118),
    [anon_sym_GT] = ACTIONS(120),
    [anon_sym_TILDE] = ACTIONS(122),
    [anon_sym_PLUS] = ACTIONS(124),
    [sym_comment] = ACTIONS(37),
  },
  [111] = {
    [sym__descendant_operator] = ACTIONS(465),
    [anon_sym_COMMA] = ACTIONS(465),
    [anon_sym_LBRACE] = ACTIONS(465),
    [anon_sym_DOT] = ACTIONS(465),
    [anon_sym_COLON] = ACTIONS(467),
    [anon_sym_COLON_COLON] = ACTIONS(465),
    [anon_sym_POUND] = ACTIONS(465),
    [anon_sym_LBRACK] = ACTIONS(465),
    [anon_sym_GT] = ACTIONS(465),
    [anon_sym_TILDE] = ACTIONS(465),
    [anon_sym_PLUS] = ACTIONS(465),
    [anon_sym_RPAREN] = ACTIONS(465),
    [sym_comment] = ACTIONS(37),
  },
  [112] = {
    [sym_pseudo_class_arguments] = STATE(167),
    [sym__descendant_operator] = ACTIONS(469),
    [anon_sym_COMMA] = ACTIONS(469),
    [anon_sym_LBRACE] = ACTIONS(469),
    [anon_sym_DOT] = ACTIONS(469),
    [anon_sym_COLON] = ACTIONS(471),
    [anon_sym_COLON_COLON] = ACTIONS(469),
    [anon_sym_POUND] = ACTIONS(469),
    [anon_sym_LBRACK] = ACTIONS(469),
    [anon_sym_GT] = ACTIONS(469),
    [anon_sym_TILDE] = ACTIONS(469),
    [anon_sym_PLUS] = ACTIONS(469),
    [anon_sym_LPAREN] = ACTIONS(200),
    [anon_sym_RPAREN] = ACTIONS(469),
    [sym_comment] = ACTIONS(37),
  },
  [113] = {
    [sym__descendant_operator] = ACTIONS(473),
    [anon_sym_COMMA] = ACTIONS(473),
    [anon_sym_LBRACE] = ACTIONS(473),
    [anon_sym_DOT] = ACTIONS(473),
    [anon_sym_COLON] = ACTIONS(475),
    [anon_sym_COLON_COLON] = ACTIONS(473),
    [anon_sym_POUND] = ACTIONS(473),
    [anon_sym_LBRACK] = ACTIONS(473),
    [anon_sym_GT] = ACTIONS(473),
    [anon_sym_TILDE] = ACTIONS(473),
    [anon_sym_PLUS] = ACTIONS(473),
    [anon_sym_RPAREN] = ACTIONS(473),
    [sym_comment] = ACTIONS(37),
  },
  [114] = {
    [sym__descendant_operator] = ACTIONS(477),
    [anon_sym_COMMA] = ACTIONS(477),
    [anon_sym_LBRACE] = ACTIONS(477),
    [anon_sym_DOT] = ACTIONS(477),
    [anon_sym_COLON] = ACTIONS(479),
    [anon_sym_COLON_COLON] = ACTIONS(477),
    [anon_sym_POUND] = ACTIONS(477),
    [anon_sym_LBRACK] = ACTIONS(477),
    [anon_sym_GT] = ACTIONS(477),
    [anon_sym_TILDE] = ACTIONS(477),
    [anon_sym_PLUS] = ACTIONS(477),
    [anon_sym_RPAREN] = ACTIONS(477),
    [sym_comment] = ACTIONS(37),
  },
  [115] = {
    [anon_sym_EQ] = ACTIONS(481),
    [anon_sym_TILDE_EQ] = ACTIONS(481),
    [anon_sym_CARET_EQ] = ACTIONS(481),
    [anon_sym_PIPE_EQ] = ACTIONS(481),
    [anon_sym_STAR_EQ] = ACTIONS(481),
    [anon_sym_DOLLAR_EQ] = ACTIONS(481),
    [anon_sym_RBRACK] = ACTIONS(483),
    [sym_comment] = ACTIONS(37),
  },
  [116] = {
    [sym__descendant_operator] = ACTIONS(485),
    [anon_sym_COMMA] = ACTIONS(485),
    [anon_sym_LBRACE] = ACTIONS(485),
    [anon_sym_DOT] = ACTIONS(110),
    [anon_sym_COLON] = ACTIONS(487),
    [anon_sym_COLON_COLON] = ACTIONS(485),
    [anon_sym_POUND] = ACTIONS(485),
    [anon_sym_LBRACK] = ACTIONS(485),
    [anon_sym_GT] = ACTIONS(485),
    [anon_sym_TILDE] = ACTIONS(485),
    [anon_sym_PLUS] = ACTIONS(485),
    [anon_sym_RPAREN] = ACTIONS(485),
    [sym_comment] = ACTIONS(37),
  },
  [117] = {
    [sym__descendant_operator] = ACTIONS(489),
    [anon_sym_COMMA] = ACTIONS(489),
    [anon_sym_LBRACE] = ACTIONS(489),
    [anon_sym_DOT] = ACTIONS(110),
    [anon_sym_COLON] = ACTIONS(491),
    [anon_sym_COLON_COLON] = ACTIONS(489),
    [anon_sym_POUND] = ACTIONS(489),
    [anon_sym_LBRACK] = ACTIONS(489),
    [anon_sym_GT] = ACTIONS(489),
    [anon_sym_TILDE] = ACTIONS(489),
    [anon_sym_PLUS] = ACTIONS(489),
    [anon_sym_RPAREN] = ACTIONS(489),
    [sym_comment] = ACTIONS(37),
  },
  [118] = {
    [sym__descendant_operator] = ACTIONS(493),
    [anon_sym_COMMA] = ACTIONS(493),
    [anon_sym_LBRACE] = ACTIONS(493),
    [anon_sym_DOT] = ACTIONS(110),
    [anon_sym_COLON] = ACTIONS(495),
    [anon_sym_COLON_COLON] = ACTIONS(493),
    [anon_sym_POUND] = ACTIONS(493),
    [anon_sym_LBRACK] = ACTIONS(493),
    [anon_sym_GT] = ACTIONS(493),
    [anon_sym_TILDE] = ACTIONS(493),
    [anon_sym_PLUS] = ACTIONS(493),
    [anon_sym_RPAREN] = ACTIONS(493),
    [sym_comment] = ACTIONS(37),
  },
  [119] = {
    [aux_sym_selectors_repeat1] = STATE(119),
    [anon_sym_COMMA] = ACTIONS(497),
    [anon_sym_LBRACE] = ACTIONS(463),
    [sym_comment] = ACTIONS(37),
  },
  [120] = {
    [anon_sym_SEMI] = ACTIONS(500),
    [anon_sym_STAR] = ACTIONS(500),
    [anon_sym_RBRACK] = ACTIONS(500),
    [anon_sym_PLUS] = ACTIONS(500),
    [anon_sym_RPAREN] = ACTIONS(500),
    [anon_sym_LPAREN2] = ACTIONS(500),
    [anon_sym_not] = ACTIONS(502),
    [anon_sym_only] = ACTIONS(502),
    [anon_sym_selector] = ACTIONS(502),
    [anon_sym_DASH] = ACTIONS(502),
    [anon_sym_SLASH] = ACTIONS(502),
    [sym_identifier] = ACTIONS(502),
    [sym_comment] = ACTIONS(37),
  },
  [121] = {
    [anon_sym_SEMI] = ACTIONS(504),
    [anon_sym_STAR] = ACTIONS(504),
    [anon_sym_RBRACK] = ACTIONS(504),
    [anon_sym_PLUS] = ACTIONS(504),
    [anon_sym_RPAREN] = ACTIONS(504),
    [anon_sym_LPAREN2] = ACTIONS(504),
    [anon_sym_not] = ACTIONS(506),
    [anon_sym_only] = ACTIONS(506),
    [anon_sym_selector] = ACTIONS(506),
    [anon_sym_DASH] = ACTIONS(506),
    [anon_sym_SLASH] = ACTIONS(506),
    [sym_identifier] = ACTIONS(506),
    [sym_comment] = ACTIONS(37),
  },
  [122] = {
    [anon_sym_COMMA] = ACTIONS(508),
    [anon_sym_SEMI] = ACTIONS(508),
    [anon_sym_STAR] = ACTIONS(433),
    [anon_sym_POUND] = ACTIONS(508),
    [anon_sym_PLUS] = ACTIONS(435),
    [anon_sym_RPAREN] = ACTIONS(508),
    [anon_sym_LPAREN2] = ACTIONS(508),
    [sym_string_value] = ACTIONS(508),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(510),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(510),
    [anon_sym_DASH] = ACTIONS(435),
    [anon_sym_SLASH] = ACTIONS(435),
    [sym_identifier] = ACTIONS(510),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(510),
  },
  [123] = {
    [sym__value] = STATE(122),
    [sym_parenthesized_value] = STATE(122),
    [sym_color_value] = STATE(122),
    [sym_integer_value] = STATE(122),
    [sym_float_value] = STATE(122),
    [sym_call_expression] = STATE(122),
    [sym_binary_expression] = STATE(122),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(172),
    [aux_sym_arguments_repeat1] = STATE(173),
    [anon_sym_COMMA] = ACTIONS(512),
    [anon_sym_SEMI] = ACTIONS(512),
    [anon_sym_POUND] = ACTIONS(214),
    [anon_sym_RPAREN] = ACTIONS(514),
    [anon_sym_LPAREN2] = ACTIONS(216),
    [sym_string_value] = ACTIONS(333),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(220),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(222),
    [sym_identifier] = ACTIONS(224),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(335),
  },
  [124] = {
    [anon_sym_SEMI] = ACTIONS(516),
    [anon_sym_STAR] = ACTIONS(516),
    [anon_sym_RBRACK] = ACTIONS(516),
    [anon_sym_PLUS] = ACTIONS(516),
    [anon_sym_RPAREN] = ACTIONS(516),
    [anon_sym_LPAREN2] = ACTIONS(516),
    [anon_sym_not] = ACTIONS(518),
    [anon_sym_only] = ACTIONS(518),
    [anon_sym_selector] = ACTIONS(518),
    [anon_sym_DASH] = ACTIONS(518),
    [anon_sym_SLASH] = ACTIONS(518),
    [sym_identifier] = ACTIONS(518),
    [sym_comment] = ACTIONS(37),
  },
  [125] = {
    [sym__query] = STATE(174),
    [sym_feature_query] = STATE(174),
    [sym_parenthesized_query] = STATE(174),
    [sym_binary_query] = STATE(174),
    [sym_unary_query] = STATE(174),
    [sym_selector_query] = STATE(174),
    [anon_sym_LPAREN2] = ACTIONS(53),
    [anon_sym_not] = ACTIONS(156),
    [anon_sym_only] = ACTIONS(156),
    [anon_sym_selector] = ACTIONS(57),
    [sym_identifier] = ACTIONS(59),
    [sym_comment] = ACTIONS(37),
  },
  [126] = {
    [ts_builtin_sym_end] = ACTIONS(520),
    [anon_sym_ATimport] = ACTIONS(522),
    [anon_sym_ATmedia] = ACTIONS(522),
    [anon_sym_ATcharset] = ACTIONS(522),
    [anon_sym_ATnamespace] = ACTIONS(522),
    [anon_sym_ATkeyframes] = ACTIONS(522),
    [aux_sym_SLASH_AT_LBRACK_DASHa_DASHz_RBRACK_PLUSkeyframes_SLASH] = ACTIONS(522),
    [anon_sym_RBRACE] = ACTIONS(520),
    [anon_sym_ATsupports] = ACTIONS(522),
    [sym_nesting_selector] = ACTIONS(520),
    [anon_sym_STAR] = ACTIONS(520),
    [anon_sym_DOT] = ACTIONS(520),
    [anon_sym_COLON] = ACTIONS(522),
    [anon_sym_COLON_COLON] = ACTIONS(520),
    [anon_sym_POUND] = ACTIONS(520),
    [anon_sym_LBRACK] = ACTIONS(520),
    [sym_string_value] = ACTIONS(520),
    [sym_identifier] = ACTIONS(520),
    [sym_at_keyword] = ACTIONS(522),
    [sym_comment] = ACTIONS(37),
  },
  [127] = {
    [sym__query] = STATE(134),
    [sym_feature_query] = STATE(134),
    [sym_parenthesized_query] = STATE(134),
    [sym_binary_query] = STATE(134),
    [sym_unary_query] = STATE(134),
    [sym_selector_query] = STATE(134),
    [anon_sym_LPAREN2] = ACTIONS(53),
    [anon_sym_not] = ACTIONS(156),
    [anon_sym_only] = ACTIONS(156),
    [anon_sym_selector] = ACTIONS(57),
    [sym_identifier] = ACTIONS(59),
    [sym_comment] = ACTIONS(37),
  },
  [128] = {
    [aux_sym_import_statement_repeat1] = STATE(176),
    [anon_sym_COMMA] = ACTIONS(349),
    [anon_sym_SEMI] = ACTIONS(524),
    [sym_comment] = ACTIONS(37),
  },
  [129] = {
    [sym__value] = STATE(122),
    [sym_parenthesized_value] = STATE(122),
    [sym_color_value] = STATE(122),
    [sym_integer_value] = STATE(122),
    [sym_float_value] = STATE(122),
    [sym_call_expression] = STATE(122),
    [sym_binary_expression] = STATE(122),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(177),
    [anon_sym_POUND] = ACTIONS(214),
    [anon_sym_LPAREN2] = ACTIONS(216),
    [sym_string_value] = ACTIONS(333),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(220),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(222),
    [sym_identifier] = ACTIONS(224),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(335),
  },
  [130] = {
    [anon_sym_COMMA] = ACTIONS(526),
    [anon_sym_SEMI] = ACTIONS(526),
    [anon_sym_LBRACE] = ACTIONS(526),
    [anon_sym_RPAREN] = ACTIONS(526),
    [anon_sym_and] = ACTIONS(526),
    [anon_sym_or] = ACTIONS(526),
    [sym_comment] = ACTIONS(37),
  },
  [131] = {
    [sym__query] = STATE(134),
    [sym_feature_query] = STATE(134),
    [sym_parenthesized_query] = STATE(134),
    [sym_binary_query] = STATE(134),
    [sym_unary_query] = STATE(134),
    [sym_selector_query] = STATE(134),
    [anon_sym_LPAREN2] = ACTIONS(53),
    [anon_sym_not] = ACTIONS(160),
    [anon_sym_only] = ACTIONS(160),
    [anon_sym_selector] = ACTIONS(57),
    [sym_identifier] = ACTIONS(59),
    [sym_comment] = ACTIONS(37),
  },
  [132] = {
    [sym__descendant_operator] = ACTIONS(104),
    [anon_sym_DOT] = ACTIONS(110),
    [anon_sym_COLON] = ACTIONS(112),
    [anon_sym_COLON_COLON] = ACTIONS(114),
    [anon_sym_POUND] = ACTIONS(116),
    [anon_sym_LBRACK] = ACTIONS(118),
    [anon_sym_GT] = ACTIONS(120),
    [anon_sym_TILDE] = ACTIONS(122),
    [anon_sym_PLUS] = ACTIONS(124),
    [anon_sym_RPAREN] = ACTIONS(528),
    [sym_comment] = ACTIONS(37),
  },
  [133] = {
    [anon_sym_COMMA] = ACTIONS(530),
    [anon_sym_LBRACE] = ACTIONS(530),
    [anon_sym_and] = ACTIONS(170),
    [anon_sym_or] = ACTIONS(170),
    [sym_comment] = ACTIONS(37),
  },
  [134] = {
    [anon_sym_COMMA] = ACTIONS(532),
    [anon_sym_SEMI] = ACTIONS(532),
    [anon_sym_LBRACE] = ACTIONS(532),
    [anon_sym_RPAREN] = ACTIONS(532),
    [anon_sym_and] = ACTIONS(532),
    [anon_sym_or] = ACTIONS(532),
    [sym_comment] = ACTIONS(37),
  },
  [135] = {
    [ts_builtin_sym_end] = ACTIONS(534),
    [anon_sym_ATimport] = ACTIONS(536),
    [anon_sym_ATmedia] = ACTIONS(536),
    [anon_sym_ATcharset] = ACTIONS(536),
    [anon_sym_ATnamespace] = ACTIONS(536),
    [anon_sym_ATkeyframes] = ACTIONS(536),
    [aux_sym_SLASH_AT_LBRACK_DASHa_DASHz_RBRACK_PLUSkeyframes_SLASH] = ACTIONS(536),
    [anon_sym_RBRACE] = ACTIONS(534),
    [anon_sym_ATsupports] = ACTIONS(536),
    [sym_nesting_selector] = ACTIONS(534),
    [anon_sym_STAR] = ACTIONS(534),
    [anon_sym_DOT] = ACTIONS(534),
    [anon_sym_COLON] = ACTIONS(536),
    [anon_sym_COLON_COLON] = ACTIONS(534),
    [anon_sym_POUND] = ACTIONS(534),
    [anon_sym_LBRACK] = ACTIONS(534),
    [sym_string_value] = ACTIONS(534),
    [sym_identifier] = ACTIONS(534),
    [sym_at_keyword] = ACTIONS(536),
    [sym_comment] = ACTIONS(37),
  },
  [136] = {
    [aux_sym_import_statement_repeat1] = STATE(136),
    [anon_sym_COMMA] = ACTIONS(538),
    [anon_sym_LBRACE] = ACTIONS(530),
    [sym_comment] = ACTIONS(37),
  },
  [137] = {
    [ts_builtin_sym_end] = ACTIONS(541),
    [anon_sym_ATimport] = ACTIONS(543),
    [anon_sym_ATmedia] = ACTIONS(543),
    [anon_sym_ATcharset] = ACTIONS(543),
    [anon_sym_ATnamespace] = ACTIONS(543),
    [anon_sym_ATkeyframes] = ACTIONS(543),
    [aux_sym_SLASH_AT_LBRACK_DASHa_DASHz_RBRACK_PLUSkeyframes_SLASH] = ACTIONS(543),
    [anon_sym_RBRACE] = ACTIONS(541),
    [anon_sym_ATsupports] = ACTIONS(543),
    [sym_nesting_selector] = ACTIONS(541),
    [anon_sym_STAR] = ACTIONS(541),
    [anon_sym_DOT] = ACTIONS(541),
    [anon_sym_COLON] = ACTIONS(543),
    [anon_sym_COLON_COLON] = ACTIONS(541),
    [anon_sym_POUND] = ACTIONS(541),
    [anon_sym_LBRACK] = ACTIONS(541),
    [sym_string_value] = ACTIONS(541),
    [sym_identifier] = ACTIONS(541),
    [sym_at_keyword] = ACTIONS(543),
    [sym_comment] = ACTIONS(37),
  },
  [138] = {
    [ts_builtin_sym_end] = ACTIONS(545),
    [anon_sym_ATimport] = ACTIONS(547),
    [anon_sym_ATmedia] = ACTIONS(547),
    [anon_sym_ATcharset] = ACTIONS(547),
    [anon_sym_ATnamespace] = ACTIONS(547),
    [anon_sym_ATkeyframes] = ACTIONS(547),
    [aux_sym_SLASH_AT_LBRACK_DASHa_DASHz_RBRACK_PLUSkeyframes_SLASH] = ACTIONS(547),
    [anon_sym_RBRACE] = ACTIONS(545),
    [anon_sym_ATsupports] = ACTIONS(547),
    [sym_nesting_selector] = ACTIONS(545),
    [anon_sym_STAR] = ACTIONS(545),
    [anon_sym_DOT] = ACTIONS(545),
    [anon_sym_COLON] = ACTIONS(547),
    [anon_sym_COLON_COLON] = ACTIONS(545),
    [anon_sym_POUND] = ACTIONS(545),
    [anon_sym_LBRACK] = ACTIONS(545),
    [sym_string_value] = ACTIONS(545),
    [sym_identifier] = ACTIONS(545),
    [sym_at_keyword] = ACTIONS(547),
    [sym_comment] = ACTIONS(37),
  },
  [139] = {
    [sym_block] = STATE(180),
    [anon_sym_LBRACE] = ACTIONS(549),
    [sym_comment] = ACTIONS(37),
  },
  [140] = {
    [sym_keyframe_block] = STATE(182),
    [sym_integer_value] = STATE(139),
    [aux_sym_keyframe_block_list_repeat1] = STATE(182),
    [anon_sym_RBRACE] = ACTIONS(551),
    [sym_from] = ACTIONS(381),
    [sym_to] = ACTIONS(381),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(383),
    [sym_comment] = ACTIONS(37),
  },
  [141] = {
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH] = ACTIONS(553),
    [sym_identifier] = ACTIONS(555),
    [sym_comment] = ACTIONS(37),
  },
  [142] = {
    [sym__descendant_operator] = ACTIONS(557),
    [anon_sym_COMMA] = ACTIONS(557),
    [anon_sym_LBRACE] = ACTIONS(557),
    [anon_sym_DOT] = ACTIONS(557),
    [anon_sym_COLON] = ACTIONS(559),
    [anon_sym_COLON_COLON] = ACTIONS(557),
    [anon_sym_POUND] = ACTIONS(557),
    [anon_sym_LBRACK] = ACTIONS(557),
    [anon_sym_GT] = ACTIONS(557),
    [anon_sym_TILDE] = ACTIONS(557),
    [anon_sym_PLUS] = ACTIONS(557),
    [anon_sym_RPAREN] = ACTIONS(557),
    [sym_comment] = ACTIONS(37),
  },
  [143] = {
    [sym__descendant_operator] = ACTIONS(561),
    [anon_sym_COMMA] = ACTIONS(561),
    [anon_sym_STAR] = ACTIONS(563),
    [anon_sym_DOT] = ACTIONS(565),
    [anon_sym_COLON] = ACTIONS(565),
    [anon_sym_COLON_COLON] = ACTIONS(561),
    [anon_sym_POUND] = ACTIONS(561),
    [anon_sym_LBRACK] = ACTIONS(561),
    [anon_sym_GT] = ACTIONS(561),
    [anon_sym_TILDE] = ACTIONS(561),
    [anon_sym_PLUS] = ACTIONS(565),
    [anon_sym_RPAREN] = ACTIONS(561),
    [anon_sym_LPAREN2] = ACTIONS(563),
    [sym_string_value] = ACTIONS(563),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(567),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(567),
    [anon_sym_DASH] = ACTIONS(567),
    [anon_sym_SLASH] = ACTIONS(567),
    [sym_identifier] = ACTIONS(567),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(567),
  },
  [144] = {
    [sym_arguments] = STATE(153),
    [sym__descendant_operator] = ACTIONS(91),
    [anon_sym_COMMA] = ACTIONS(91),
    [anon_sym_STAR] = ACTIONS(146),
    [anon_sym_DOT] = ACTIONS(457),
    [anon_sym_COLON] = ACTIONS(457),
    [anon_sym_COLON_COLON] = ACTIONS(91),
    [anon_sym_POUND] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_GT] = ACTIONS(91),
    [anon_sym_TILDE] = ACTIONS(91),
    [anon_sym_PLUS] = ACTIONS(457),
    [anon_sym_LPAREN] = ACTIONS(427),
    [anon_sym_RPAREN] = ACTIONS(91),
    [anon_sym_LPAREN2] = ACTIONS(150),
    [sym_string_value] = ACTIONS(146),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(150),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(150),
    [anon_sym_DASH] = ACTIONS(150),
    [anon_sym_SLASH] = ACTIONS(150),
    [sym_identifier] = ACTIONS(150),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(150),
  },
  [145] = {
    [aux_sym_pseudo_class_arguments_repeat2] = STATE(185),
    [sym__descendant_operator] = ACTIONS(104),
    [anon_sym_COMMA] = ACTIONS(569),
    [anon_sym_DOT] = ACTIONS(110),
    [anon_sym_COLON] = ACTIONS(112),
    [anon_sym_COLON_COLON] = ACTIONS(114),
    [anon_sym_POUND] = ACTIONS(116),
    [anon_sym_LBRACK] = ACTIONS(118),
    [anon_sym_GT] = ACTIONS(120),
    [anon_sym_TILDE] = ACTIONS(122),
    [anon_sym_PLUS] = ACTIONS(124),
    [anon_sym_RPAREN] = ACTIONS(571),
    [sym_comment] = ACTIONS(37),
  },
  [146] = {
    [sym__value] = STATE(122),
    [sym_parenthesized_value] = STATE(122),
    [sym_color_value] = STATE(122),
    [sym_integer_value] = STATE(122),
    [sym_float_value] = STATE(122),
    [sym_call_expression] = STATE(122),
    [sym_binary_expression] = STATE(122),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(186),
    [aux_sym_pseudo_class_arguments_repeat2] = STATE(185),
    [anon_sym_COMMA] = ACTIONS(569),
    [anon_sym_POUND] = ACTIONS(214),
    [anon_sym_RPAREN] = ACTIONS(571),
    [anon_sym_LPAREN2] = ACTIONS(216),
    [sym_string_value] = ACTIONS(333),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(220),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(222),
    [sym_identifier] = ACTIONS(224),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(335),
  },
  [147] = {
    [anon_sym_STAR] = ACTIONS(178),
    [anon_sym_RBRACK] = ACTIONS(573),
    [anon_sym_PLUS] = ACTIONS(178),
    [anon_sym_DASH] = ACTIONS(178),
    [anon_sym_SLASH] = ACTIONS(180),
    [sym_comment] = ACTIONS(37),
  },
  [148] = {
    [anon_sym_COMMA] = ACTIONS(317),
    [anon_sym_SEMI] = ACTIONS(317),
    [anon_sym_RBRACE] = ACTIONS(317),
    [anon_sym_STAR] = ACTIONS(317),
    [anon_sym_POUND] = ACTIONS(317),
    [anon_sym_PLUS] = ACTIONS(319),
    [anon_sym_RPAREN] = ACTIONS(317),
    [sym_important] = ACTIONS(317),
    [anon_sym_LPAREN2] = ACTIONS(317),
    [sym_string_value] = ACTIONS(317),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(319),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(319),
    [anon_sym_DASH] = ACTIONS(319),
    [anon_sym_SLASH] = ACTIONS(319),
    [sym_identifier] = ACTIONS(319),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(319),
  },
  [149] = {
    [anon_sym_STAR] = ACTIONS(178),
    [anon_sym_PLUS] = ACTIONS(178),
    [anon_sym_RPAREN] = ACTIONS(575),
    [anon_sym_DASH] = ACTIONS(178),
    [anon_sym_SLASH] = ACTIONS(180),
    [sym_comment] = ACTIONS(37),
  },
  [150] = {
    [anon_sym_COMMA] = ACTIONS(323),
    [anon_sym_SEMI] = ACTIONS(323),
    [anon_sym_RBRACE] = ACTIONS(323),
    [anon_sym_STAR] = ACTIONS(323),
    [anon_sym_POUND] = ACTIONS(323),
    [anon_sym_PLUS] = ACTIONS(325),
    [anon_sym_RPAREN] = ACTIONS(323),
    [sym_important] = ACTIONS(323),
    [anon_sym_LPAREN2] = ACTIONS(323),
    [sym_string_value] = ACTIONS(323),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(325),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(325),
    [anon_sym_DASH] = ACTIONS(325),
    [anon_sym_SLASH] = ACTIONS(325),
    [sym_identifier] = ACTIONS(325),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(325),
  },
  [151] = {
    [anon_sym_COMMA] = ACTIONS(327),
    [anon_sym_SEMI] = ACTIONS(327),
    [anon_sym_RBRACE] = ACTIONS(327),
    [anon_sym_STAR] = ACTIONS(327),
    [anon_sym_POUND] = ACTIONS(327),
    [anon_sym_PLUS] = ACTIONS(329),
    [anon_sym_RPAREN] = ACTIONS(327),
    [sym_important] = ACTIONS(327),
    [anon_sym_LPAREN2] = ACTIONS(327),
    [sym_string_value] = ACTIONS(327),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(329),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(329),
    [anon_sym_DASH] = ACTIONS(329),
    [anon_sym_SLASH] = ACTIONS(329),
    [sym_identifier] = ACTIONS(329),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(329),
  },
  [152] = {
    [sym__value] = STATE(122),
    [sym_parenthesized_value] = STATE(122),
    [sym_color_value] = STATE(122),
    [sym_integer_value] = STATE(122),
    [sym_float_value] = STATE(122),
    [sym_call_expression] = STATE(122),
    [sym_binary_expression] = STATE(122),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(190),
    [anon_sym_POUND] = ACTIONS(214),
    [anon_sym_RPAREN] = ACTIONS(577),
    [anon_sym_LPAREN2] = ACTIONS(216),
    [sym_string_value] = ACTIONS(333),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(220),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(222),
    [sym_identifier] = ACTIONS(224),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(335),
  },
  [153] = {
    [anon_sym_COMMA] = ACTIONS(337),
    [anon_sym_SEMI] = ACTIONS(337),
    [anon_sym_RBRACE] = ACTIONS(337),
    [anon_sym_STAR] = ACTIONS(337),
    [anon_sym_POUND] = ACTIONS(337),
    [anon_sym_PLUS] = ACTIONS(339),
    [anon_sym_RPAREN] = ACTIONS(337),
    [sym_important] = ACTIONS(337),
    [anon_sym_LPAREN2] = ACTIONS(337),
    [sym_string_value] = ACTIONS(337),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(339),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(339),
    [anon_sym_DASH] = ACTIONS(339),
    [anon_sym_SLASH] = ACTIONS(339),
    [sym_identifier] = ACTIONS(339),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(339),
  },
  [154] = {
    [sym__value] = STATE(191),
    [sym_parenthesized_value] = STATE(191),
    [sym_color_value] = STATE(191),
    [sym_integer_value] = STATE(191),
    [sym_float_value] = STATE(191),
    [sym_call_expression] = STATE(191),
    [sym_binary_expression] = STATE(191),
    [anon_sym_POUND] = ACTIONS(214),
    [anon_sym_LPAREN2] = ACTIONS(216),
    [sym_string_value] = ACTIONS(579),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(220),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(222),
    [sym_identifier] = ACTIONS(224),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(581),
  },
  [155] = {
    [ts_builtin_sym_end] = ACTIONS(583),
    [anon_sym_ATimport] = ACTIONS(585),
    [anon_sym_ATmedia] = ACTIONS(585),
    [anon_sym_ATcharset] = ACTIONS(585),
    [anon_sym_ATnamespace] = ACTIONS(585),
    [anon_sym_ATkeyframes] = ACTIONS(585),
    [aux_sym_SLASH_AT_LBRACK_DASHa_DASHz_RBRACK_PLUSkeyframes_SLASH] = ACTIONS(585),
    [anon_sym_RBRACE] = ACTIONS(583),
    [anon_sym_ATsupports] = ACTIONS(585),
    [sym_nesting_selector] = ACTIONS(583),
    [anon_sym_STAR] = ACTIONS(583),
    [anon_sym_DOT] = ACTIONS(583),
    [anon_sym_COLON] = ACTIONS(585),
    [anon_sym_COLON_COLON] = ACTIONS(583),
    [anon_sym_POUND] = ACTIONS(583),
    [anon_sym_LBRACK] = ACTIONS(583),
    [sym_string_value] = ACTIONS(583),
    [sym_identifier] = ACTIONS(583),
    [sym_at_keyword] = ACTIONS(585),
    [sym_comment] = ACTIONS(37),
  },
  [156] = {
    [sym__value] = STATE(192),
    [sym_parenthesized_value] = STATE(192),
    [sym_color_value] = STATE(192),
    [sym_integer_value] = STATE(192),
    [sym_float_value] = STATE(192),
    [sym_call_expression] = STATE(192),
    [sym_binary_expression] = STATE(192),
    [anon_sym_POUND] = ACTIONS(214),
    [anon_sym_LPAREN2] = ACTIONS(216),
    [sym_string_value] = ACTIONS(587),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(220),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(222),
    [sym_identifier] = ACTIONS(224),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(589),
  },
  [157] = {
    [anon_sym_SEMI] = ACTIONS(591),
    [sym_comment] = ACTIONS(37),
  },
  [158] = {
    [anon_sym_COMMA] = ACTIONS(593),
    [anon_sym_SEMI] = ACTIONS(593),
    [anon_sym_RBRACE] = ACTIONS(593),
    [anon_sym_STAR] = ACTIONS(433),
    [anon_sym_POUND] = ACTIONS(593),
    [anon_sym_PLUS] = ACTIONS(435),
    [sym_important] = ACTIONS(593),
    [anon_sym_LPAREN2] = ACTIONS(593),
    [sym_string_value] = ACTIONS(593),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(595),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(595),
    [anon_sym_DASH] = ACTIONS(435),
    [anon_sym_SLASH] = ACTIONS(435),
    [sym_identifier] = ACTIONS(595),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(595),
  },
  [159] = {
    [sym__value] = STATE(158),
    [sym_parenthesized_value] = STATE(158),
    [sym_color_value] = STATE(158),
    [sym_integer_value] = STATE(158),
    [sym_float_value] = STATE(158),
    [sym_call_expression] = STATE(158),
    [sym_binary_expression] = STATE(158),
    [aux_sym_declaration_repeat1] = STATE(195),
    [anon_sym_COMMA] = ACTIONS(429),
    [anon_sym_SEMI] = ACTIONS(591),
    [anon_sym_POUND] = ACTIONS(214),
    [sym_important] = ACTIONS(597),
    [anon_sym_LPAREN2] = ACTIONS(216),
    [sym_string_value] = ACTIONS(439),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(220),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(222),
    [sym_identifier] = ACTIONS(224),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(441),
  },
  [160] = {
    [sym__value] = STATE(196),
    [sym_parenthesized_value] = STATE(196),
    [sym_color_value] = STATE(196),
    [sym_integer_value] = STATE(196),
    [sym_float_value] = STATE(196),
    [sym_call_expression] = STATE(196),
    [sym_binary_expression] = STATE(196),
    [anon_sym_POUND] = ACTIONS(214),
    [anon_sym_LPAREN2] = ACTIONS(216),
    [sym_string_value] = ACTIONS(599),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(220),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(222),
    [sym_identifier] = ACTIONS(224),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(601),
  },
  [161] = {
    [ts_builtin_sym_end] = ACTIONS(603),
    [anon_sym_ATimport] = ACTIONS(605),
    [anon_sym_ATmedia] = ACTIONS(605),
    [anon_sym_ATcharset] = ACTIONS(605),
    [anon_sym_ATnamespace] = ACTIONS(605),
    [anon_sym_ATkeyframes] = ACTIONS(605),
    [aux_sym_SLASH_AT_LBRACK_DASHa_DASHz_RBRACK_PLUSkeyframes_SLASH] = ACTIONS(605),
    [anon_sym_RBRACE] = ACTIONS(603),
    [anon_sym_ATsupports] = ACTIONS(605),
    [sym_nesting_selector] = ACTIONS(603),
    [anon_sym_STAR] = ACTIONS(603),
    [anon_sym_DOT] = ACTIONS(603),
    [anon_sym_COLON] = ACTIONS(605),
    [anon_sym_COLON_COLON] = ACTIONS(603),
    [anon_sym_POUND] = ACTIONS(603),
    [anon_sym_LBRACK] = ACTIONS(603),
    [sym_string_value] = ACTIONS(603),
    [sym_identifier] = ACTIONS(603),
    [sym_at_keyword] = ACTIONS(605),
    [sym_comment] = ACTIONS(37),
  },
  [162] = {
    [anon_sym_RBRACE] = ACTIONS(607),
    [sym_comment] = ACTIONS(37),
  },
  [163] = {
    [sym_import_statement] = STATE(163),
    [sym_media_statement] = STATE(163),
    [sym_charset_statement] = STATE(163),
    [sym_namespace_statement] = STATE(163),
    [sym_keyframes_statement] = STATE(163),
    [sym_supports_statement] = STATE(163),
    [sym_at_rule] = STATE(163),
    [sym_rule_set] = STATE(163),
    [sym_selectors] = STATE(17),
    [sym__selector] = STATE(18),
    [sym_universal_selector] = STATE(18),
    [sym_class_selector] = STATE(18),
    [sym_pseudo_class_selector] = STATE(18),
    [sym_pseudo_element_selector] = STATE(18),
    [sym_id_selector] = STATE(18),
    [sym_attribute_selector] = STATE(18),
    [sym_child_selector] = STATE(18),
    [sym_descendant_selector] = STATE(18),
    [sym_sibling_selector] = STATE(18),
    [sym_adjacent_sibling_selector] = STATE(18),
    [sym_declaration] = STATE(163),
    [aux_sym_block_repeat1] = STATE(163),
    [anon_sym_ATimport] = ACTIONS(609),
    [anon_sym_ATmedia] = ACTIONS(612),
    [anon_sym_ATcharset] = ACTIONS(615),
    [anon_sym_ATnamespace] = ACTIONS(618),
    [anon_sym_ATkeyframes] = ACTIONS(621),
    [aux_sym_SLASH_AT_LBRACK_DASHa_DASHz_RBRACK_PLUSkeyframes_SLASH] = ACTIONS(621),
    [anon_sym_RBRACE] = ACTIONS(624),
    [anon_sym_ATsupports] = ACTIONS(626),
    [sym_nesting_selector] = ACTIONS(629),
    [anon_sym_STAR] = ACTIONS(632),
    [anon_sym_DOT] = ACTIONS(635),
    [anon_sym_COLON] = ACTIONS(638),
    [anon_sym_COLON_COLON] = ACTIONS(641),
    [anon_sym_POUND] = ACTIONS(644),
    [anon_sym_LBRACK] = ACTIONS(647),
    [sym_string_value] = ACTIONS(629),
    [sym_identifier] = ACTIONS(650),
    [sym_at_keyword] = ACTIONS(653),
    [sym_comment] = ACTIONS(37),
  },
  [164] = {
    [anon_sym_COMMA] = ACTIONS(530),
    [anon_sym_SEMI] = ACTIONS(530),
    [anon_sym_LBRACE] = ACTIONS(530),
    [anon_sym_and] = ACTIONS(240),
    [anon_sym_or] = ACTIONS(240),
    [sym_comment] = ACTIONS(37),
  },
  [165] = {
    [ts_builtin_sym_end] = ACTIONS(656),
    [anon_sym_ATimport] = ACTIONS(658),
    [anon_sym_ATmedia] = ACTIONS(658),
    [anon_sym_ATcharset] = ACTIONS(658),
    [anon_sym_ATnamespace] = ACTIONS(658),
    [anon_sym_ATkeyframes] = ACTIONS(658),
    [aux_sym_SLASH_AT_LBRACK_DASHa_DASHz_RBRACK_PLUSkeyframes_SLASH] = ACTIONS(658),
    [anon_sym_RBRACE] = ACTIONS(656),
    [anon_sym_ATsupports] = ACTIONS(658),
    [sym_nesting_selector] = ACTIONS(656),
    [anon_sym_STAR] = ACTIONS(656),
    [anon_sym_DOT] = ACTIONS(656),
    [anon_sym_COLON] = ACTIONS(658),
    [anon_sym_COLON_COLON] = ACTIONS(656),
    [anon_sym_POUND] = ACTIONS(656),
    [anon_sym_LBRACK] = ACTIONS(656),
    [sym_string_value] = ACTIONS(656),
    [sym_identifier] = ACTIONS(656),
    [sym_at_keyword] = ACTIONS(658),
    [sym_comment] = ACTIONS(37),
  },
  [166] = {
    [aux_sym_import_statement_repeat1] = STATE(166),
    [anon_sym_COMMA] = ACTIONS(660),
    [anon_sym_SEMI] = ACTIONS(530),
    [anon_sym_LBRACE] = ACTIONS(530),
    [sym_comment] = ACTIONS(37),
  },
  [167] = {
    [sym__descendant_operator] = ACTIONS(663),
    [anon_sym_COMMA] = ACTIONS(663),
    [anon_sym_LBRACE] = ACTIONS(663),
    [anon_sym_DOT] = ACTIONS(663),
    [anon_sym_COLON] = ACTIONS(665),
    [anon_sym_COLON_COLON] = ACTIONS(663),
    [anon_sym_POUND] = ACTIONS(663),
    [anon_sym_LBRACK] = ACTIONS(663),
    [anon_sym_GT] = ACTIONS(663),
    [anon_sym_TILDE] = ACTIONS(663),
    [anon_sym_PLUS] = ACTIONS(663),
    [anon_sym_RPAREN] = ACTIONS(663),
    [sym_comment] = ACTIONS(37),
  },
  [168] = {
    [sym__value] = STATE(198),
    [sym_parenthesized_value] = STATE(198),
    [sym_color_value] = STATE(198),
    [sym_integer_value] = STATE(198),
    [sym_float_value] = STATE(198),
    [sym_call_expression] = STATE(198),
    [sym_binary_expression] = STATE(198),
    [anon_sym_POUND] = ACTIONS(39),
    [anon_sym_LPAREN2] = ACTIONS(41),
    [sym_string_value] = ACTIONS(667),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(63),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(65),
    [sym_identifier] = ACTIONS(49),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(669),
  },
  [169] = {
    [sym__descendant_operator] = ACTIONS(671),
    [anon_sym_COMMA] = ACTIONS(671),
    [anon_sym_LBRACE] = ACTIONS(671),
    [anon_sym_DOT] = ACTIONS(671),
    [anon_sym_COLON] = ACTIONS(673),
    [anon_sym_COLON_COLON] = ACTIONS(671),
    [anon_sym_POUND] = ACTIONS(671),
    [anon_sym_LBRACK] = ACTIONS(671),
    [anon_sym_GT] = ACTIONS(671),
    [anon_sym_TILDE] = ACTIONS(671),
    [anon_sym_PLUS] = ACTIONS(671),
    [anon_sym_RPAREN] = ACTIONS(671),
    [sym_comment] = ACTIONS(37),
  },
  [170] = {
    [sym__value] = STATE(122),
    [sym_parenthesized_value] = STATE(122),
    [sym_color_value] = STATE(122),
    [sym_integer_value] = STATE(122),
    [sym_float_value] = STATE(122),
    [sym_call_expression] = STATE(122),
    [sym_binary_expression] = STATE(122),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(199),
    [anon_sym_POUND] = ACTIONS(214),
    [anon_sym_LPAREN2] = ACTIONS(216),
    [sym_string_value] = ACTIONS(333),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(220),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(222),
    [sym_identifier] = ACTIONS(224),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(335),
  },
  [171] = {
    [anon_sym_SEMI] = ACTIONS(675),
    [anon_sym_STAR] = ACTIONS(675),
    [anon_sym_RBRACK] = ACTIONS(675),
    [anon_sym_PLUS] = ACTIONS(675),
    [anon_sym_RPAREN] = ACTIONS(675),
    [anon_sym_LPAREN2] = ACTIONS(675),
    [anon_sym_not] = ACTIONS(677),
    [anon_sym_only] = ACTIONS(677),
    [anon_sym_selector] = ACTIONS(677),
    [anon_sym_DASH] = ACTIONS(677),
    [anon_sym_SLASH] = ACTIONS(677),
    [sym_identifier] = ACTIONS(677),
    [sym_comment] = ACTIONS(37),
  },
  [172] = {
    [sym__value] = STATE(122),
    [sym_parenthesized_value] = STATE(122),
    [sym_color_value] = STATE(122),
    [sym_integer_value] = STATE(122),
    [sym_float_value] = STATE(122),
    [sym_call_expression] = STATE(122),
    [sym_binary_expression] = STATE(122),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(172),
    [anon_sym_COMMA] = ACTIONS(679),
    [anon_sym_SEMI] = ACTIONS(679),
    [anon_sym_POUND] = ACTIONS(681),
    [anon_sym_RPAREN] = ACTIONS(679),
    [anon_sym_LPAREN2] = ACTIONS(684),
    [sym_string_value] = ACTIONS(687),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(690),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(693),
    [sym_identifier] = ACTIONS(696),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(699),
  },
  [173] = {
    [aux_sym_arguments_repeat1] = STATE(201),
    [anon_sym_COMMA] = ACTIONS(512),
    [anon_sym_SEMI] = ACTIONS(512),
    [anon_sym_RPAREN] = ACTIONS(702),
    [sym_comment] = ACTIONS(37),
  },
  [174] = {
    [anon_sym_COMMA] = ACTIONS(530),
    [anon_sym_SEMI] = ACTIONS(530),
    [anon_sym_and] = ACTIONS(353),
    [anon_sym_or] = ACTIONS(353),
    [sym_comment] = ACTIONS(37),
  },
  [175] = {
    [ts_builtin_sym_end] = ACTIONS(704),
    [anon_sym_ATimport] = ACTIONS(706),
    [anon_sym_ATmedia] = ACTIONS(706),
    [anon_sym_ATcharset] = ACTIONS(706),
    [anon_sym_ATnamespace] = ACTIONS(706),
    [anon_sym_ATkeyframes] = ACTIONS(706),
    [aux_sym_SLASH_AT_LBRACK_DASHa_DASHz_RBRACK_PLUSkeyframes_SLASH] = ACTIONS(706),
    [anon_sym_RBRACE] = ACTIONS(704),
    [anon_sym_ATsupports] = ACTIONS(706),
    [sym_nesting_selector] = ACTIONS(704),
    [anon_sym_STAR] = ACTIONS(704),
    [anon_sym_DOT] = ACTIONS(704),
    [anon_sym_COLON] = ACTIONS(706),
    [anon_sym_COLON_COLON] = ACTIONS(704),
    [anon_sym_POUND] = ACTIONS(704),
    [anon_sym_LBRACK] = ACTIONS(704),
    [sym_string_value] = ACTIONS(704),
    [sym_identifier] = ACTIONS(704),
    [sym_at_keyword] = ACTIONS(706),
    [sym_comment] = ACTIONS(37),
  },
  [176] = {
    [aux_sym_import_statement_repeat1] = STATE(176),
    [anon_sym_COMMA] = ACTIONS(708),
    [anon_sym_SEMI] = ACTIONS(530),
    [sym_comment] = ACTIONS(37),
  },
  [177] = {
    [sym__value] = STATE(122),
    [sym_parenthesized_value] = STATE(122),
    [sym_color_value] = STATE(122),
    [sym_integer_value] = STATE(122),
    [sym_float_value] = STATE(122),
    [sym_call_expression] = STATE(122),
    [sym_binary_expression] = STATE(122),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(203),
    [anon_sym_POUND] = ACTIONS(214),
    [anon_sym_RPAREN] = ACTIONS(711),
    [anon_sym_LPAREN2] = ACTIONS(216),
    [sym_string_value] = ACTIONS(333),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(220),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(222),
    [sym_identifier] = ACTIONS(224),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(335),
  },
  [178] = {
    [anon_sym_COMMA] = ACTIONS(713),
    [anon_sym_SEMI] = ACTIONS(713),
    [anon_sym_LBRACE] = ACTIONS(713),
    [anon_sym_RPAREN] = ACTIONS(713),
    [anon_sym_and] = ACTIONS(713),
    [anon_sym_or] = ACTIONS(713),
    [sym_comment] = ACTIONS(37),
  },
  [179] = {
    [sym_import_statement] = STATE(206),
    [sym_media_statement] = STATE(206),
    [sym_charset_statement] = STATE(206),
    [sym_namespace_statement] = STATE(206),
    [sym_keyframes_statement] = STATE(206),
    [sym_supports_statement] = STATE(206),
    [sym_at_rule] = STATE(206),
    [sym_rule_set] = STATE(206),
    [sym_selectors] = STATE(17),
    [sym__selector] = STATE(18),
    [sym_universal_selector] = STATE(18),
    [sym_class_selector] = STATE(18),
    [sym_pseudo_class_selector] = STATE(18),
    [sym_pseudo_element_selector] = STATE(18),
    [sym_id_selector] = STATE(18),
    [sym_attribute_selector] = STATE(18),
    [sym_child_selector] = STATE(18),
    [sym_descendant_selector] = STATE(18),
    [sym_sibling_selector] = STATE(18),
    [sym_adjacent_sibling_selector] = STATE(18),
    [sym_declaration] = STATE(206),
    [sym_last_declaration] = STATE(205),
    [aux_sym_block_repeat1] = STATE(206),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATmedia] = ACTIONS(9),
    [anon_sym_ATcharset] = ACTIONS(11),
    [anon_sym_ATnamespace] = ACTIONS(13),
    [anon_sym_ATkeyframes] = ACTIONS(15),
    [aux_sym_SLASH_AT_LBRACK_DASHa_DASHz_RBRACK_PLUSkeyframes_SLASH] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(715),
    [anon_sym_ATsupports] = ACTIONS(17),
    [sym_nesting_selector] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_string_value] = ACTIONS(19),
    [sym_identifier] = ACTIONS(234),
    [sym_at_keyword] = ACTIONS(35),
    [sym_comment] = ACTIONS(37),
  },
  [180] = {
    [anon_sym_RBRACE] = ACTIONS(717),
    [sym_from] = ACTIONS(717),
    [sym_to] = ACTIONS(717),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(717),
    [sym_comment] = ACTIONS(37),
  },
  [181] = {
    [ts_builtin_sym_end] = ACTIONS(719),
    [anon_sym_ATimport] = ACTIONS(721),
    [anon_sym_ATmedia] = ACTIONS(721),
    [anon_sym_ATcharset] = ACTIONS(721),
    [anon_sym_ATnamespace] = ACTIONS(721),
    [anon_sym_ATkeyframes] = ACTIONS(721),
    [aux_sym_SLASH_AT_LBRACK_DASHa_DASHz_RBRACK_PLUSkeyframes_SLASH] = ACTIONS(721),
    [anon_sym_RBRACE] = ACTIONS(719),
    [anon_sym_ATsupports] = ACTIONS(721),
    [sym_nesting_selector] = ACTIONS(719),
    [anon_sym_STAR] = ACTIONS(719),
    [anon_sym_DOT] = ACTIONS(719),
    [anon_sym_COLON] = ACTIONS(721),
    [anon_sym_COLON_COLON] = ACTIONS(719),
    [anon_sym_POUND] = ACTIONS(719),
    [anon_sym_LBRACK] = ACTIONS(719),
    [sym_string_value] = ACTIONS(719),
    [sym_identifier] = ACTIONS(719),
    [sym_at_keyword] = ACTIONS(721),
    [sym_comment] = ACTIONS(37),
  },
  [182] = {
    [sym_keyframe_block] = STATE(182),
    [sym_integer_value] = STATE(139),
    [aux_sym_keyframe_block_list_repeat1] = STATE(182),
    [anon_sym_RBRACE] = ACTIONS(723),
    [sym_from] = ACTIONS(725),
    [sym_to] = ACTIONS(725),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(728),
    [sym_comment] = ACTIONS(37),
  },
  [183] = {
    [sym__selector] = STATE(207),
    [sym_universal_selector] = STATE(207),
    [sym_class_selector] = STATE(207),
    [sym_pseudo_class_selector] = STATE(207),
    [sym_pseudo_element_selector] = STATE(207),
    [sym_id_selector] = STATE(207),
    [sym_attribute_selector] = STATE(207),
    [sym_child_selector] = STATE(207),
    [sym_descendant_selector] = STATE(207),
    [sym_sibling_selector] = STATE(207),
    [sym_adjacent_sibling_selector] = STATE(207),
    [sym__value] = STATE(122),
    [sym_parenthesized_value] = STATE(122),
    [sym_color_value] = STATE(122),
    [sym_integer_value] = STATE(122),
    [sym_float_value] = STATE(122),
    [sym_call_expression] = STATE(122),
    [sym_binary_expression] = STATE(122),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(208),
    [sym_nesting_selector] = ACTIONS(731),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(395),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(397),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LPAREN2] = ACTIONS(216),
    [sym_string_value] = ACTIONS(401),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(220),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(222),
    [sym_identifier] = ACTIONS(403),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(335),
  },
  [184] = {
    [sym__descendant_operator] = ACTIONS(733),
    [anon_sym_COMMA] = ACTIONS(733),
    [anon_sym_LBRACE] = ACTIONS(733),
    [anon_sym_DOT] = ACTIONS(733),
    [anon_sym_COLON] = ACTIONS(735),
    [anon_sym_COLON_COLON] = ACTIONS(733),
    [anon_sym_POUND] = ACTIONS(733),
    [anon_sym_LBRACK] = ACTIONS(733),
    [anon_sym_GT] = ACTIONS(733),
    [anon_sym_TILDE] = ACTIONS(733),
    [anon_sym_PLUS] = ACTIONS(733),
    [anon_sym_RPAREN] = ACTIONS(733),
    [sym_comment] = ACTIONS(37),
  },
  [185] = {
    [aux_sym_pseudo_class_arguments_repeat2] = STATE(210),
    [anon_sym_COMMA] = ACTIONS(569),
    [anon_sym_RPAREN] = ACTIONS(737),
    [sym_comment] = ACTIONS(37),
  },
  [186] = {
    [sym__value] = STATE(122),
    [sym_parenthesized_value] = STATE(122),
    [sym_color_value] = STATE(122),
    [sym_integer_value] = STATE(122),
    [sym_float_value] = STATE(122),
    [sym_call_expression] = STATE(122),
    [sym_binary_expression] = STATE(122),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(186),
    [anon_sym_COMMA] = ACTIONS(679),
    [anon_sym_POUND] = ACTIONS(681),
    [anon_sym_RPAREN] = ACTIONS(679),
    [anon_sym_LPAREN2] = ACTIONS(684),
    [sym_string_value] = ACTIONS(687),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(690),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(693),
    [sym_identifier] = ACTIONS(696),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(699),
  },
  [187] = {
    [sym__descendant_operator] = ACTIONS(739),
    [anon_sym_COMMA] = ACTIONS(739),
    [anon_sym_LBRACE] = ACTIONS(739),
    [anon_sym_DOT] = ACTIONS(739),
    [anon_sym_COLON] = ACTIONS(741),
    [anon_sym_COLON_COLON] = ACTIONS(739),
    [anon_sym_POUND] = ACTIONS(739),
    [anon_sym_LBRACK] = ACTIONS(739),
    [anon_sym_GT] = ACTIONS(739),
    [anon_sym_TILDE] = ACTIONS(739),
    [anon_sym_PLUS] = ACTIONS(739),
    [anon_sym_RPAREN] = ACTIONS(739),
    [sym_comment] = ACTIONS(37),
  },
  [188] = {
    [anon_sym_COMMA] = ACTIONS(500),
    [anon_sym_SEMI] = ACTIONS(500),
    [anon_sym_RBRACE] = ACTIONS(500),
    [anon_sym_STAR] = ACTIONS(500),
    [anon_sym_POUND] = ACTIONS(500),
    [anon_sym_PLUS] = ACTIONS(502),
    [anon_sym_RPAREN] = ACTIONS(500),
    [sym_important] = ACTIONS(500),
    [anon_sym_LPAREN2] = ACTIONS(500),
    [sym_string_value] = ACTIONS(500),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(502),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(502),
    [anon_sym_DASH] = ACTIONS(502),
    [anon_sym_SLASH] = ACTIONS(502),
    [sym_identifier] = ACTIONS(502),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(502),
  },
  [189] = {
    [anon_sym_COMMA] = ACTIONS(504),
    [anon_sym_SEMI] = ACTIONS(504),
    [anon_sym_RBRACE] = ACTIONS(504),
    [anon_sym_STAR] = ACTIONS(504),
    [anon_sym_POUND] = ACTIONS(504),
    [anon_sym_PLUS] = ACTIONS(506),
    [anon_sym_RPAREN] = ACTIONS(504),
    [sym_important] = ACTIONS(504),
    [anon_sym_LPAREN2] = ACTIONS(504),
    [sym_string_value] = ACTIONS(504),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(506),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(506),
    [anon_sym_DASH] = ACTIONS(506),
    [anon_sym_SLASH] = ACTIONS(506),
    [sym_identifier] = ACTIONS(506),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(506),
  },
  [190] = {
    [sym__value] = STATE(122),
    [sym_parenthesized_value] = STATE(122),
    [sym_color_value] = STATE(122),
    [sym_integer_value] = STATE(122),
    [sym_float_value] = STATE(122),
    [sym_call_expression] = STATE(122),
    [sym_binary_expression] = STATE(122),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(172),
    [aux_sym_arguments_repeat1] = STATE(212),
    [anon_sym_COMMA] = ACTIONS(512),
    [anon_sym_SEMI] = ACTIONS(512),
    [anon_sym_POUND] = ACTIONS(214),
    [anon_sym_RPAREN] = ACTIONS(743),
    [anon_sym_LPAREN2] = ACTIONS(216),
    [sym_string_value] = ACTIONS(333),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(220),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(222),
    [sym_identifier] = ACTIONS(224),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(335),
  },
  [191] = {
    [anon_sym_COMMA] = ACTIONS(745),
    [anon_sym_SEMI] = ACTIONS(745),
    [anon_sym_RBRACE] = ACTIONS(745),
    [anon_sym_STAR] = ACTIONS(433),
    [anon_sym_POUND] = ACTIONS(745),
    [anon_sym_PLUS] = ACTIONS(435),
    [sym_important] = ACTIONS(745),
    [anon_sym_LPAREN2] = ACTIONS(745),
    [sym_string_value] = ACTIONS(745),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(747),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(747),
    [anon_sym_DASH] = ACTIONS(435),
    [anon_sym_SLASH] = ACTIONS(435),
    [sym_identifier] = ACTIONS(747),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(747),
  },
  [192] = {
    [anon_sym_COMMA] = ACTIONS(516),
    [anon_sym_SEMI] = ACTIONS(516),
    [anon_sym_RBRACE] = ACTIONS(516),
    [anon_sym_STAR] = ACTIONS(516),
    [anon_sym_POUND] = ACTIONS(516),
    [anon_sym_PLUS] = ACTIONS(518),
    [anon_sym_RPAREN] = ACTIONS(516),
    [sym_important] = ACTIONS(516),
    [anon_sym_LPAREN2] = ACTIONS(516),
    [sym_string_value] = ACTIONS(516),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(518),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(518),
    [anon_sym_DASH] = ACTIONS(518),
    [anon_sym_SLASH] = ACTIONS(518),
    [sym_identifier] = ACTIONS(518),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(518),
  },
  [193] = {
    [ts_builtin_sym_end] = ACTIONS(749),
    [anon_sym_ATimport] = ACTIONS(751),
    [anon_sym_ATmedia] = ACTIONS(751),
    [anon_sym_ATcharset] = ACTIONS(751),
    [anon_sym_ATnamespace] = ACTIONS(751),
    [anon_sym_ATkeyframes] = ACTIONS(751),
    [aux_sym_SLASH_AT_LBRACK_DASHa_DASHz_RBRACK_PLUSkeyframes_SLASH] = ACTIONS(751),
    [anon_sym_RBRACE] = ACTIONS(749),
    [anon_sym_ATsupports] = ACTIONS(751),
    [sym_nesting_selector] = ACTIONS(749),
    [anon_sym_STAR] = ACTIONS(749),
    [anon_sym_DOT] = ACTIONS(749),
    [anon_sym_COLON] = ACTIONS(751),
    [anon_sym_COLON_COLON] = ACTIONS(749),
    [anon_sym_POUND] = ACTIONS(749),
    [anon_sym_LBRACK] = ACTIONS(749),
    [sym_string_value] = ACTIONS(749),
    [sym_identifier] = ACTIONS(749),
    [sym_at_keyword] = ACTIONS(751),
    [sym_comment] = ACTIONS(37),
  },
  [194] = {
    [anon_sym_SEMI] = ACTIONS(753),
    [sym_comment] = ACTIONS(37),
  },
  [195] = {
    [sym__value] = STATE(158),
    [sym_parenthesized_value] = STATE(158),
    [sym_color_value] = STATE(158),
    [sym_integer_value] = STATE(158),
    [sym_float_value] = STATE(158),
    [sym_call_expression] = STATE(158),
    [sym_binary_expression] = STATE(158),
    [aux_sym_declaration_repeat1] = STATE(195),
    [anon_sym_COMMA] = ACTIONS(755),
    [anon_sym_SEMI] = ACTIONS(745),
    [anon_sym_POUND] = ACTIONS(758),
    [sym_important] = ACTIONS(745),
    [anon_sym_LPAREN2] = ACTIONS(761),
    [sym_string_value] = ACTIONS(764),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(767),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(770),
    [sym_identifier] = ACTIONS(773),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(776),
  },
  [196] = {
    [sym__value] = STATE(158),
    [sym_parenthesized_value] = STATE(158),
    [sym_color_value] = STATE(158),
    [sym_integer_value] = STATE(158),
    [sym_float_value] = STATE(158),
    [sym_call_expression] = STATE(158),
    [sym_binary_expression] = STATE(158),
    [aux_sym_declaration_repeat1] = STATE(215),
    [anon_sym_COMMA] = ACTIONS(429),
    [anon_sym_SEMI] = ACTIONS(431),
    [anon_sym_RBRACE] = ACTIONS(779),
    [anon_sym_STAR] = ACTIONS(433),
    [anon_sym_POUND] = ACTIONS(214),
    [anon_sym_PLUS] = ACTIONS(435),
    [sym_important] = ACTIONS(781),
    [anon_sym_LPAREN2] = ACTIONS(216),
    [sym_string_value] = ACTIONS(439),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(220),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(222),
    [anon_sym_DASH] = ACTIONS(435),
    [anon_sym_SLASH] = ACTIONS(435),
    [sym_identifier] = ACTIONS(224),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(441),
  },
  [197] = {
    [ts_builtin_sym_end] = ACTIONS(783),
    [anon_sym_ATimport] = ACTIONS(785),
    [anon_sym_ATmedia] = ACTIONS(785),
    [anon_sym_ATcharset] = ACTIONS(785),
    [anon_sym_ATnamespace] = ACTIONS(785),
    [anon_sym_ATkeyframes] = ACTIONS(785),
    [aux_sym_SLASH_AT_LBRACK_DASHa_DASHz_RBRACK_PLUSkeyframes_SLASH] = ACTIONS(785),
    [anon_sym_RBRACE] = ACTIONS(783),
    [anon_sym_ATsupports] = ACTIONS(785),
    [sym_nesting_selector] = ACTIONS(783),
    [anon_sym_STAR] = ACTIONS(783),
    [anon_sym_DOT] = ACTIONS(783),
    [anon_sym_COLON] = ACTIONS(785),
    [anon_sym_COLON_COLON] = ACTIONS(783),
    [anon_sym_POUND] = ACTIONS(783),
    [anon_sym_LBRACK] = ACTIONS(783),
    [sym_string_value] = ACTIONS(783),
    [sym_identifier] = ACTIONS(783),
    [sym_at_keyword] = ACTIONS(785),
    [sym_comment] = ACTIONS(37),
  },
  [198] = {
    [anon_sym_STAR] = ACTIONS(178),
    [anon_sym_RBRACK] = ACTIONS(787),
    [anon_sym_PLUS] = ACTIONS(178),
    [anon_sym_DASH] = ACTIONS(178),
    [anon_sym_SLASH] = ACTIONS(180),
    [sym_comment] = ACTIONS(37),
  },
  [199] = {
    [sym__value] = STATE(122),
    [sym_parenthesized_value] = STATE(122),
    [sym_color_value] = STATE(122),
    [sym_integer_value] = STATE(122),
    [sym_float_value] = STATE(122),
    [sym_call_expression] = STATE(122),
    [sym_binary_expression] = STATE(122),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(172),
    [anon_sym_COMMA] = ACTIONS(789),
    [anon_sym_SEMI] = ACTIONS(789),
    [anon_sym_POUND] = ACTIONS(214),
    [anon_sym_RPAREN] = ACTIONS(789),
    [anon_sym_LPAREN2] = ACTIONS(216),
    [sym_string_value] = ACTIONS(333),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(220),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(222),
    [sym_identifier] = ACTIONS(224),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(335),
  },
  [200] = {
    [anon_sym_SEMI] = ACTIONS(791),
    [anon_sym_STAR] = ACTIONS(791),
    [anon_sym_RBRACK] = ACTIONS(791),
    [anon_sym_PLUS] = ACTIONS(791),
    [anon_sym_RPAREN] = ACTIONS(791),
    [anon_sym_LPAREN2] = ACTIONS(791),
    [anon_sym_not] = ACTIONS(793),
    [anon_sym_only] = ACTIONS(793),
    [anon_sym_selector] = ACTIONS(793),
    [anon_sym_DASH] = ACTIONS(793),
    [anon_sym_SLASH] = ACTIONS(793),
    [sym_identifier] = ACTIONS(793),
    [sym_comment] = ACTIONS(37),
  },
  [201] = {
    [aux_sym_arguments_repeat1] = STATE(201),
    [anon_sym_COMMA] = ACTIONS(795),
    [anon_sym_SEMI] = ACTIONS(795),
    [anon_sym_RPAREN] = ACTIONS(789),
    [sym_comment] = ACTIONS(37),
  },
  [202] = {
    [anon_sym_COMMA] = ACTIONS(798),
    [anon_sym_SEMI] = ACTIONS(798),
    [anon_sym_LBRACE] = ACTIONS(798),
    [anon_sym_RPAREN] = ACTIONS(798),
    [anon_sym_and] = ACTIONS(798),
    [anon_sym_or] = ACTIONS(798),
    [sym_comment] = ACTIONS(37),
  },
  [203] = {
    [sym__value] = STATE(122),
    [sym_parenthesized_value] = STATE(122),
    [sym_color_value] = STATE(122),
    [sym_integer_value] = STATE(122),
    [sym_float_value] = STATE(122),
    [sym_call_expression] = STATE(122),
    [sym_binary_expression] = STATE(122),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(203),
    [anon_sym_POUND] = ACTIONS(681),
    [anon_sym_RPAREN] = ACTIONS(679),
    [anon_sym_LPAREN2] = ACTIONS(684),
    [sym_string_value] = ACTIONS(687),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(690),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(693),
    [sym_identifier] = ACTIONS(696),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(699),
  },
  [204] = {
    [anon_sym_RBRACE] = ACTIONS(443),
    [sym_from] = ACTIONS(443),
    [sym_to] = ACTIONS(443),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(443),
    [sym_comment] = ACTIONS(37),
  },
  [205] = {
    [anon_sym_RBRACE] = ACTIONS(800),
    [sym_comment] = ACTIONS(37),
  },
  [206] = {
    [sym_import_statement] = STATE(163),
    [sym_media_statement] = STATE(163),
    [sym_charset_statement] = STATE(163),
    [sym_namespace_statement] = STATE(163),
    [sym_keyframes_statement] = STATE(163),
    [sym_supports_statement] = STATE(163),
    [sym_at_rule] = STATE(163),
    [sym_rule_set] = STATE(163),
    [sym_selectors] = STATE(17),
    [sym__selector] = STATE(18),
    [sym_universal_selector] = STATE(18),
    [sym_class_selector] = STATE(18),
    [sym_pseudo_class_selector] = STATE(18),
    [sym_pseudo_element_selector] = STATE(18),
    [sym_id_selector] = STATE(18),
    [sym_attribute_selector] = STATE(18),
    [sym_child_selector] = STATE(18),
    [sym_descendant_selector] = STATE(18),
    [sym_sibling_selector] = STATE(18),
    [sym_adjacent_sibling_selector] = STATE(18),
    [sym_declaration] = STATE(163),
    [sym_last_declaration] = STATE(218),
    [aux_sym_block_repeat1] = STATE(163),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATmedia] = ACTIONS(9),
    [anon_sym_ATcharset] = ACTIONS(11),
    [anon_sym_ATnamespace] = ACTIONS(13),
    [anon_sym_ATkeyframes] = ACTIONS(15),
    [aux_sym_SLASH_AT_LBRACK_DASHa_DASHz_RBRACK_PLUSkeyframes_SLASH] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(800),
    [anon_sym_ATsupports] = ACTIONS(17),
    [sym_nesting_selector] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_string_value] = ACTIONS(19),
    [sym_identifier] = ACTIONS(234),
    [sym_at_keyword] = ACTIONS(35),
    [sym_comment] = ACTIONS(37),
  },
  [207] = {
    [sym__descendant_operator] = ACTIONS(104),
    [anon_sym_COMMA] = ACTIONS(802),
    [anon_sym_DOT] = ACTIONS(110),
    [anon_sym_COLON] = ACTIONS(112),
    [anon_sym_COLON_COLON] = ACTIONS(114),
    [anon_sym_POUND] = ACTIONS(116),
    [anon_sym_LBRACK] = ACTIONS(118),
    [anon_sym_GT] = ACTIONS(120),
    [anon_sym_TILDE] = ACTIONS(122),
    [anon_sym_PLUS] = ACTIONS(124),
    [anon_sym_RPAREN] = ACTIONS(802),
    [sym_comment] = ACTIONS(37),
  },
  [208] = {
    [sym__value] = STATE(122),
    [sym_parenthesized_value] = STATE(122),
    [sym_color_value] = STATE(122),
    [sym_integer_value] = STATE(122),
    [sym_float_value] = STATE(122),
    [sym_call_expression] = STATE(122),
    [sym_binary_expression] = STATE(122),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(186),
    [anon_sym_COMMA] = ACTIONS(802),
    [anon_sym_POUND] = ACTIONS(214),
    [anon_sym_RPAREN] = ACTIONS(802),
    [anon_sym_LPAREN2] = ACTIONS(216),
    [sym_string_value] = ACTIONS(333),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(220),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(222),
    [sym_identifier] = ACTIONS(224),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(335),
  },
  [209] = {
    [sym__descendant_operator] = ACTIONS(804),
    [anon_sym_COMMA] = ACTIONS(804),
    [anon_sym_LBRACE] = ACTIONS(804),
    [anon_sym_DOT] = ACTIONS(804),
    [anon_sym_COLON] = ACTIONS(806),
    [anon_sym_COLON_COLON] = ACTIONS(804),
    [anon_sym_POUND] = ACTIONS(804),
    [anon_sym_LBRACK] = ACTIONS(804),
    [anon_sym_GT] = ACTIONS(804),
    [anon_sym_TILDE] = ACTIONS(804),
    [anon_sym_PLUS] = ACTIONS(804),
    [anon_sym_RPAREN] = ACTIONS(804),
    [sym_comment] = ACTIONS(37),
  },
  [210] = {
    [aux_sym_pseudo_class_arguments_repeat2] = STATE(210),
    [anon_sym_COMMA] = ACTIONS(808),
    [anon_sym_RPAREN] = ACTIONS(802),
    [sym_comment] = ACTIONS(37),
  },
  [211] = {
    [anon_sym_COMMA] = ACTIONS(675),
    [anon_sym_SEMI] = ACTIONS(675),
    [anon_sym_RBRACE] = ACTIONS(675),
    [anon_sym_STAR] = ACTIONS(675),
    [anon_sym_POUND] = ACTIONS(675),
    [anon_sym_PLUS] = ACTIONS(677),
    [anon_sym_RPAREN] = ACTIONS(675),
    [sym_important] = ACTIONS(675),
    [anon_sym_LPAREN2] = ACTIONS(675),
    [sym_string_value] = ACTIONS(675),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(677),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(677),
    [anon_sym_DASH] = ACTIONS(677),
    [anon_sym_SLASH] = ACTIONS(677),
    [sym_identifier] = ACTIONS(677),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(677),
  },
  [212] = {
    [aux_sym_arguments_repeat1] = STATE(201),
    [anon_sym_COMMA] = ACTIONS(512),
    [anon_sym_SEMI] = ACTIONS(512),
    [anon_sym_RPAREN] = ACTIONS(811),
    [sym_comment] = ACTIONS(37),
  },
  [213] = {
    [ts_builtin_sym_end] = ACTIONS(813),
    [anon_sym_ATimport] = ACTIONS(815),
    [anon_sym_ATmedia] = ACTIONS(815),
    [anon_sym_ATcharset] = ACTIONS(815),
    [anon_sym_ATnamespace] = ACTIONS(815),
    [anon_sym_ATkeyframes] = ACTIONS(815),
    [aux_sym_SLASH_AT_LBRACK_DASHa_DASHz_RBRACK_PLUSkeyframes_SLASH] = ACTIONS(815),
    [anon_sym_RBRACE] = ACTIONS(813),
    [anon_sym_ATsupports] = ACTIONS(815),
    [sym_nesting_selector] = ACTIONS(813),
    [anon_sym_STAR] = ACTIONS(813),
    [anon_sym_DOT] = ACTIONS(813),
    [anon_sym_COLON] = ACTIONS(815),
    [anon_sym_COLON_COLON] = ACTIONS(813),
    [anon_sym_POUND] = ACTIONS(813),
    [anon_sym_LBRACK] = ACTIONS(813),
    [sym_string_value] = ACTIONS(813),
    [sym_identifier] = ACTIONS(813),
    [sym_at_keyword] = ACTIONS(815),
    [sym_comment] = ACTIONS(37),
  },
  [214] = {
    [anon_sym_SEMI] = ACTIONS(591),
    [anon_sym_RBRACE] = ACTIONS(817),
    [sym_comment] = ACTIONS(37),
  },
  [215] = {
    [sym__value] = STATE(158),
    [sym_parenthesized_value] = STATE(158),
    [sym_color_value] = STATE(158),
    [sym_integer_value] = STATE(158),
    [sym_float_value] = STATE(158),
    [sym_call_expression] = STATE(158),
    [sym_binary_expression] = STATE(158),
    [aux_sym_declaration_repeat1] = STATE(221),
    [anon_sym_COMMA] = ACTIONS(429),
    [anon_sym_SEMI] = ACTIONS(591),
    [anon_sym_RBRACE] = ACTIONS(817),
    [anon_sym_POUND] = ACTIONS(214),
    [sym_important] = ACTIONS(819),
    [anon_sym_LPAREN2] = ACTIONS(216),
    [sym_string_value] = ACTIONS(439),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(220),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(222),
    [sym_identifier] = ACTIONS(224),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(441),
  },
  [216] = {
    [sym__descendant_operator] = ACTIONS(821),
    [anon_sym_COMMA] = ACTIONS(821),
    [anon_sym_LBRACE] = ACTIONS(821),
    [anon_sym_DOT] = ACTIONS(821),
    [anon_sym_COLON] = ACTIONS(823),
    [anon_sym_COLON_COLON] = ACTIONS(821),
    [anon_sym_POUND] = ACTIONS(821),
    [anon_sym_LBRACK] = ACTIONS(821),
    [anon_sym_GT] = ACTIONS(821),
    [anon_sym_TILDE] = ACTIONS(821),
    [anon_sym_PLUS] = ACTIONS(821),
    [anon_sym_RPAREN] = ACTIONS(821),
    [sym_comment] = ACTIONS(37),
  },
  [217] = {
    [anon_sym_RBRACE] = ACTIONS(603),
    [sym_from] = ACTIONS(603),
    [sym_to] = ACTIONS(603),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(603),
    [sym_comment] = ACTIONS(37),
  },
  [218] = {
    [anon_sym_RBRACE] = ACTIONS(825),
    [sym_comment] = ACTIONS(37),
  },
  [219] = {
    [anon_sym_COMMA] = ACTIONS(791),
    [anon_sym_SEMI] = ACTIONS(791),
    [anon_sym_RBRACE] = ACTIONS(791),
    [anon_sym_STAR] = ACTIONS(791),
    [anon_sym_POUND] = ACTIONS(791),
    [anon_sym_PLUS] = ACTIONS(793),
    [anon_sym_RPAREN] = ACTIONS(791),
    [sym_important] = ACTIONS(791),
    [anon_sym_LPAREN2] = ACTIONS(791),
    [sym_string_value] = ACTIONS(791),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(793),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(793),
    [anon_sym_DASH] = ACTIONS(793),
    [anon_sym_SLASH] = ACTIONS(793),
    [sym_identifier] = ACTIONS(793),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(793),
  },
  [220] = {
    [anon_sym_SEMI] = ACTIONS(753),
    [anon_sym_RBRACE] = ACTIONS(827),
    [sym_comment] = ACTIONS(37),
  },
  [221] = {
    [sym__value] = STATE(158),
    [sym_parenthesized_value] = STATE(158),
    [sym_color_value] = STATE(158),
    [sym_integer_value] = STATE(158),
    [sym_float_value] = STATE(158),
    [sym_call_expression] = STATE(158),
    [sym_binary_expression] = STATE(158),
    [aux_sym_declaration_repeat1] = STATE(221),
    [anon_sym_COMMA] = ACTIONS(755),
    [anon_sym_SEMI] = ACTIONS(745),
    [anon_sym_RBRACE] = ACTIONS(745),
    [anon_sym_POUND] = ACTIONS(758),
    [sym_important] = ACTIONS(745),
    [anon_sym_LPAREN2] = ACTIONS(761),
    [sym_string_value] = ACTIONS(764),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(767),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(770),
    [sym_identifier] = ACTIONS(773),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(776),
  },
  [222] = {
    [anon_sym_RBRACE] = ACTIONS(783),
    [sym_from] = ACTIONS(783),
    [sym_to] = ACTIONS(783),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(783),
    [sym_comment] = ACTIONS(37),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_stylesheet, 0),
  [7] = {.count = 1, .reusable = false}, SHIFT(2),
  [9] = {.count = 1, .reusable = false}, SHIFT(3),
  [11] = {.count = 1, .reusable = false}, SHIFT(4),
  [13] = {.count = 1, .reusable = false}, SHIFT(5),
  [15] = {.count = 1, .reusable = false}, SHIFT(6),
  [17] = {.count = 1, .reusable = false}, SHIFT(7),
  [19] = {.count = 1, .reusable = true}, SHIFT(18),
  [21] = {.count = 1, .reusable = true}, SHIFT(8),
  [23] = {.count = 1, .reusable = true}, SHIFT(9),
  [25] = {.count = 1, .reusable = false}, SHIFT(10),
  [27] = {.count = 1, .reusable = true}, SHIFT(11),
  [29] = {.count = 1, .reusable = true}, SHIFT(12),
  [31] = {.count = 1, .reusable = true}, SHIFT(13),
  [33] = {.count = 1, .reusable = true}, SHIFT(14),
  [35] = {.count = 1, .reusable = false}, SHIFT(15),
  [37] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [39] = {.count = 1, .reusable = true}, SHIFT(20),
  [41] = {.count = 1, .reusable = true}, SHIFT(21),
  [43] = {.count = 1, .reusable = true}, SHIFT(25),
  [45] = {.count = 1, .reusable = false}, SHIFT(22),
  [47] = {.count = 1, .reusable = false}, SHIFT(23),
  [49] = {.count = 1, .reusable = false}, SHIFT(24),
  [51] = {.count = 1, .reusable = false}, SHIFT(25),
  [53] = {.count = 1, .reusable = true}, SHIFT(26),
  [55] = {.count = 1, .reusable = false}, SHIFT(27),
  [57] = {.count = 1, .reusable = false}, SHIFT(28),
  [59] = {.count = 1, .reusable = false}, SHIFT(29),
  [61] = {.count = 1, .reusable = true}, SHIFT(33),
  [63] = {.count = 1, .reusable = false}, SHIFT(31),
  [65] = {.count = 1, .reusable = false}, SHIFT(32),
  [67] = {.count = 1, .reusable = false}, SHIFT(33),
  [69] = {.count = 1, .reusable = true}, SHIFT(34),
  [71] = {.count = 1, .reusable = true}, SHIFT(35),
  [73] = {.count = 1, .reusable = true}, SHIFT(36),
  [75] = {.count = 1, .reusable = false}, SHIFT(37),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym_universal_selector, 1),
  [79] = {.count = 1, .reusable = false}, REDUCE(sym_universal_selector, 1),
  [81] = {.count = 1, .reusable = true}, SHIFT(39),
  [83] = {.count = 1, .reusable = true}, SHIFT(40),
  [85] = {.count = 1, .reusable = true}, SHIFT(41),
  [87] = {.count = 1, .reusable = true}, SHIFT(42),
  [89] = {.count = 1, .reusable = true}, SHIFT(43),
  [91] = {.count = 1, .reusable = true}, REDUCE(sym__selector, 1, .alias_sequence_id = 1),
  [93] = {.count = 2, .reusable = false}, REDUCE(sym__selector, 1, .alias_sequence_id = 1), SHIFT(44),
  [96] = {.count = 1, .reusable = true}, SHIFT(45),
  [98] = {.count = 1, .reusable = true}, SHIFT(46),
  [100] = {.count = 1, .reusable = false}, SHIFT(47),
  [102] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [104] = {.count = 1, .reusable = true}, SHIFT(50),
  [106] = {.count = 1, .reusable = true}, SHIFT(51),
  [108] = {.count = 1, .reusable = true}, REDUCE(sym_selectors, 1),
  [110] = {.count = 1, .reusable = true}, SHIFT(52),
  [112] = {.count = 1, .reusable = false}, SHIFT(53),
  [114] = {.count = 1, .reusable = true}, SHIFT(54),
  [116] = {.count = 1, .reusable = true}, SHIFT(55),
  [118] = {.count = 1, .reusable = true}, SHIFT(56),
  [120] = {.count = 1, .reusable = true}, SHIFT(57),
  [122] = {.count = 1, .reusable = true}, SHIFT(58),
  [124] = {.count = 1, .reusable = true}, SHIFT(59),
  [126] = {.count = 1, .reusable = true}, REDUCE(sym_stylesheet, 1),
  [128] = {.count = 1, .reusable = true}, SHIFT(62),
  [130] = {.count = 1, .reusable = true}, SHIFT(63),
  [132] = {.count = 1, .reusable = false}, SHIFT(63),
  [134] = {.count = 1, .reusable = true}, REDUCE(sym_integer_value, 1),
  [136] = {.count = 1, .reusable = false}, REDUCE(sym_integer_value, 1),
  [138] = {.count = 1, .reusable = false}, SHIFT(64),
  [140] = {.count = 1, .reusable = true}, REDUCE(sym_float_value, 1),
  [142] = {.count = 1, .reusable = false}, REDUCE(sym_float_value, 1),
  [144] = {.count = 1, .reusable = false}, SHIFT(65),
  [146] = {.count = 1, .reusable = true}, REDUCE(sym__value, 1, .alias_sequence_id = 2),
  [148] = {.count = 1, .reusable = true}, SHIFT(66),
  [150] = {.count = 1, .reusable = false}, REDUCE(sym__value, 1, .alias_sequence_id = 2),
  [152] = {.count = 1, .reusable = true}, SHIFT(68),
  [154] = {.count = 1, .reusable = true}, SHIFT(69),
  [156] = {.count = 1, .reusable = false}, SHIFT(70),
  [158] = {.count = 1, .reusable = false}, SHIFT(69),
  [160] = {.count = 1, .reusable = false}, SHIFT(72),
  [162] = {.count = 1, .reusable = false}, SHIFT(73),
  [164] = {.count = 1, .reusable = true}, SHIFT(76),
  [166] = {.count = 1, .reusable = true}, REDUCE(sym__query, 1, .alias_sequence_id = 3),
  [168] = {.count = 1, .reusable = true}, SHIFT(77),
  [170] = {.count = 1, .reusable = true}, SHIFT(78),
  [172] = {.count = 1, .reusable = true}, SHIFT(64),
  [174] = {.count = 1, .reusable = true}, SHIFT(65),
  [176] = {.count = 1, .reusable = true}, SHIFT(81),
  [178] = {.count = 1, .reusable = true}, SHIFT(82),
  [180] = {.count = 1, .reusable = false}, SHIFT(82),
  [182] = {.count = 1, .reusable = true}, SHIFT(83),
  [184] = {.count = 1, .reusable = true}, SHIFT(84),
  [186] = {.count = 1, .reusable = true}, SHIFT(85),
  [188] = {.count = 1, .reusable = true}, SHIFT(86),
  [190] = {.count = 1, .reusable = true}, SHIFT(88),
  [192] = {.count = 1, .reusable = true}, REDUCE(sym_class_selector, 2, .alias_sequence_id = 4),
  [194] = {.count = 1, .reusable = false}, REDUCE(sym_class_selector, 2, .alias_sequence_id = 4),
  [196] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_selector, 2, .alias_sequence_id = 4),
  [198] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_selector, 2, .alias_sequence_id = 4),
  [200] = {.count = 1, .reusable = true}, SHIFT(90),
  [202] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_element_selector, 2, .alias_sequence_id = 5),
  [204] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_element_selector, 2, .alias_sequence_id = 5),
  [206] = {.count = 1, .reusable = true}, REDUCE(sym_id_selector, 2, .alias_sequence_id = 6),
  [208] = {.count = 1, .reusable = false}, REDUCE(sym_id_selector, 2, .alias_sequence_id = 6),
  [210] = {.count = 1, .reusable = true}, SHIFT(92),
  [212] = {.count = 1, .reusable = true}, SHIFT(93),
  [214] = {.count = 1, .reusable = true}, SHIFT(94),
  [216] = {.count = 1, .reusable = true}, SHIFT(95),
  [218] = {.count = 1, .reusable = true}, SHIFT(99),
  [220] = {.count = 1, .reusable = false}, SHIFT(96),
  [222] = {.count = 1, .reusable = false}, SHIFT(97),
  [224] = {.count = 1, .reusable = false}, SHIFT(98),
  [226] = {.count = 1, .reusable = false}, SHIFT(99),
  [228] = {.count = 1, .reusable = true}, REDUCE(sym_at_rule, 2),
  [230] = {.count = 1, .reusable = false}, REDUCE(sym_at_rule, 2),
  [232] = {.count = 1, .reusable = true}, SHIFT(100),
  [234] = {.count = 1, .reusable = true}, SHIFT(101),
  [236] = {.count = 1, .reusable = true}, SHIFT(104),
  [238] = {.count = 1, .reusable = true}, SHIFT(105),
  [240] = {.count = 1, .reusable = true}, SHIFT(106),
  [242] = {.count = 1, .reusable = true}, REDUCE(sym_rule_set, 2),
  [244] = {.count = 1, .reusable = false}, REDUCE(sym_rule_set, 2),
  [246] = {.count = 1, .reusable = true}, SHIFT(109),
  [248] = {.count = 1, .reusable = true}, SHIFT(108),
  [250] = {.count = 1, .reusable = true}, SHIFT(110),
  [252] = {.count = 1, .reusable = true}, SHIFT(111),
  [254] = {.count = 1, .reusable = true}, SHIFT(112),
  [256] = {.count = 1, .reusable = true}, SHIFT(113),
  [258] = {.count = 1, .reusable = true}, SHIFT(114),
  [260] = {.count = 1, .reusable = true}, SHIFT(115),
  [262] = {.count = 1, .reusable = true}, SHIFT(116),
  [264] = {.count = 1, .reusable = true}, SHIFT(117),
  [266] = {.count = 1, .reusable = true}, SHIFT(118),
  [268] = {.count = 1, .reusable = true}, REDUCE(sym_selectors, 2),
  [270] = {.count = 1, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2),
  [272] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(2),
  [275] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(3),
  [278] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(4),
  [281] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(5),
  [284] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(6),
  [287] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(7),
  [290] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(18),
  [293] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(8),
  [296] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(9),
  [299] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(10),
  [302] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(11),
  [305] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(12),
  [308] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(13),
  [311] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(14),
  [314] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(15),
  [317] = {.count = 1, .reusable = true}, REDUCE(sym_color_value, 2),
  [319] = {.count = 1, .reusable = false}, REDUCE(sym_color_value, 2),
  [321] = {.count = 1, .reusable = true}, SHIFT(120),
  [323] = {.count = 1, .reusable = true}, REDUCE(sym_integer_value, 2),
  [325] = {.count = 1, .reusable = false}, REDUCE(sym_integer_value, 2),
  [327] = {.count = 1, .reusable = true}, REDUCE(sym_float_value, 2),
  [329] = {.count = 1, .reusable = false}, REDUCE(sym_float_value, 2),
  [331] = {.count = 1, .reusable = true}, SHIFT(121),
  [333] = {.count = 1, .reusable = true}, SHIFT(122),
  [335] = {.count = 1, .reusable = false}, SHIFT(122),
  [337] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 2, .alias_sequence_id = 7),
  [339] = {.count = 1, .reusable = false}, REDUCE(sym_call_expression, 2, .alias_sequence_id = 7),
  [341] = {.count = 1, .reusable = true}, REDUCE(sym_import_statement, 3),
  [343] = {.count = 1, .reusable = false}, REDUCE(sym_import_statement, 3),
  [345] = {.count = 1, .reusable = true}, SHIFT(124),
  [347] = {.count = 1, .reusable = false}, SHIFT(124),
  [349] = {.count = 1, .reusable = true}, SHIFT(125),
  [351] = {.count = 1, .reusable = true}, SHIFT(126),
  [353] = {.count = 1, .reusable = true}, SHIFT(127),
  [355] = {.count = 1, .reusable = true}, SHIFT(129),
  [357] = {.count = 1, .reusable = true}, SHIFT(130),
  [359] = {.count = 1, .reusable = true}, SHIFT(131),
  [361] = {.count = 1, .reusable = true}, REDUCE(sym_unary_query, 2),
  [363] = {.count = 1, .reusable = true}, SHIFT(132),
  [365] = {.count = 1, .reusable = true}, REDUCE(sym_media_statement, 3),
  [367] = {.count = 1, .reusable = false}, REDUCE(sym_media_statement, 3),
  [369] = {.count = 1, .reusable = true}, REDUCE(sym_charset_statement, 3),
  [371] = {.count = 1, .reusable = false}, REDUCE(sym_charset_statement, 3),
  [373] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_statement, 3),
  [375] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_statement, 3),
  [377] = {.count = 1, .reusable = true}, SHIFT(137),
  [379] = {.count = 1, .reusable = true}, SHIFT(138),
  [381] = {.count = 1, .reusable = true}, SHIFT(139),
  [383] = {.count = 1, .reusable = true}, SHIFT(31),
  [385] = {.count = 1, .reusable = true}, REDUCE(sym_keyframes_statement, 3, .alias_sequence_id = 8),
  [387] = {.count = 1, .reusable = false}, REDUCE(sym_keyframes_statement, 3, .alias_sequence_id = 8),
  [389] = {.count = 1, .reusable = true}, REDUCE(sym_supports_statement, 3),
  [391] = {.count = 1, .reusable = false}, REDUCE(sym_supports_statement, 3),
  [393] = {.count = 1, .reusable = true}, SHIFT(145),
  [395] = {.count = 1, .reusable = false}, SHIFT(9),
  [397] = {.count = 1, .reusable = true}, SHIFT(141),
  [399] = {.count = 1, .reusable = true}, SHIFT(142),
  [401] = {.count = 1, .reusable = true}, SHIFT(143),
  [403] = {.count = 1, .reusable = false}, SHIFT(144),
  [405] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_selector, 3, .alias_sequence_id = 4),
  [407] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_selector, 3, .alias_sequence_id = 4),
  [409] = {.count = 1, .reusable = true}, SHIFT(147),
  [411] = {.count = 1, .reusable = false}, SHIFT(147),
  [413] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_selector, 3, .alias_sequence_id = 9),
  [415] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_selector, 3, .alias_sequence_id = 9),
  [417] = {.count = 1, .reusable = true}, SHIFT(148),
  [419] = {.count = 1, .reusable = true}, SHIFT(149),
  [421] = {.count = 1, .reusable = false}, SHIFT(149),
  [423] = {.count = 1, .reusable = false}, SHIFT(150),
  [425] = {.count = 1, .reusable = false}, SHIFT(151),
  [427] = {.count = 1, .reusable = true}, SHIFT(152),
  [429] = {.count = 1, .reusable = true}, SHIFT(154),
  [431] = {.count = 1, .reusable = true}, SHIFT(155),
  [433] = {.count = 1, .reusable = true}, SHIFT(156),
  [435] = {.count = 1, .reusable = false}, SHIFT(156),
  [437] = {.count = 1, .reusable = true}, SHIFT(157),
  [439] = {.count = 1, .reusable = true}, SHIFT(158),
  [441] = {.count = 1, .reusable = false}, SHIFT(158),
  [443] = {.count = 1, .reusable = true}, REDUCE(sym_block, 2),
  [445] = {.count = 1, .reusable = false}, REDUCE(sym_block, 2),
  [447] = {.count = 1, .reusable = false}, SHIFT(160),
  [449] = {.count = 1, .reusable = true}, SHIFT(161),
  [451] = {.count = 1, .reusable = true}, REDUCE(sym_at_rule, 3),
  [453] = {.count = 1, .reusable = false}, REDUCE(sym_at_rule, 3),
  [455] = {.count = 1, .reusable = true}, SHIFT(165),
  [457] = {.count = 1, .reusable = false}, REDUCE(sym__selector, 1, .alias_sequence_id = 1),
  [459] = {.count = 1, .reusable = true}, REDUCE(sym_descendant_selector, 3),
  [461] = {.count = 1, .reusable = false}, REDUCE(sym_descendant_selector, 3),
  [463] = {.count = 1, .reusable = true}, REDUCE(aux_sym_selectors_repeat1, 2),
  [465] = {.count = 1, .reusable = true}, REDUCE(sym_class_selector, 3, .alias_sequence_id = 10),
  [467] = {.count = 1, .reusable = false}, REDUCE(sym_class_selector, 3, .alias_sequence_id = 10),
  [469] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_selector, 3, .alias_sequence_id = 10),
  [471] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_selector, 3, .alias_sequence_id = 10),
  [473] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_element_selector, 3, .alias_sequence_id = 11),
  [475] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_element_selector, 3, .alias_sequence_id = 11),
  [477] = {.count = 1, .reusable = true}, REDUCE(sym_id_selector, 3, .alias_sequence_id = 12),
  [479] = {.count = 1, .reusable = false}, REDUCE(sym_id_selector, 3, .alias_sequence_id = 12),
  [481] = {.count = 1, .reusable = true}, SHIFT(168),
  [483] = {.count = 1, .reusable = true}, SHIFT(169),
  [485] = {.count = 1, .reusable = true}, REDUCE(sym_child_selector, 3),
  [487] = {.count = 1, .reusable = false}, REDUCE(sym_child_selector, 3),
  [489] = {.count = 1, .reusable = true}, REDUCE(sym_sibling_selector, 3),
  [491] = {.count = 1, .reusable = false}, REDUCE(sym_sibling_selector, 3),
  [493] = {.count = 1, .reusable = true}, REDUCE(sym_adjacent_sibling_selector, 3),
  [495] = {.count = 1, .reusable = false}, REDUCE(sym_adjacent_sibling_selector, 3),
  [497] = {.count = 2, .reusable = true}, REDUCE(aux_sym_selectors_repeat1, 2), SHIFT_REPEAT(51),
  [500] = {.count = 1, .reusable = true}, REDUCE(sym_parenthesized_value, 3),
  [502] = {.count = 1, .reusable = false}, REDUCE(sym_parenthesized_value, 3),
  [504] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 2),
  [506] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 2),
  [508] = {.count = 1, .reusable = true}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 1),
  [510] = {.count = 1, .reusable = false}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 1),
  [512] = {.count = 1, .reusable = true}, SHIFT(170),
  [514] = {.count = 1, .reusable = true}, SHIFT(171),
  [516] = {.count = 1, .reusable = true}, REDUCE(sym_binary_expression, 3),
  [518] = {.count = 1, .reusable = false}, REDUCE(sym_binary_expression, 3),
  [520] = {.count = 1, .reusable = true}, REDUCE(sym_import_statement, 4),
  [522] = {.count = 1, .reusable = false}, REDUCE(sym_import_statement, 4),
  [524] = {.count = 1, .reusable = true}, SHIFT(175),
  [526] = {.count = 1, .reusable = true}, REDUCE(sym_parenthesized_query, 3),
  [528] = {.count = 1, .reusable = true}, SHIFT(178),
  [530] = {.count = 1, .reusable = true}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [532] = {.count = 1, .reusable = true}, REDUCE(sym_binary_query, 3),
  [534] = {.count = 1, .reusable = true}, REDUCE(sym_media_statement, 4),
  [536] = {.count = 1, .reusable = false}, REDUCE(sym_media_statement, 4),
  [538] = {.count = 2, .reusable = true}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(77),
  [541] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_statement, 4, .alias_sequence_id = 13),
  [543] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_statement, 4, .alias_sequence_id = 13),
  [545] = {.count = 1, .reusable = true}, REDUCE(sym_keyframe_block_list, 2),
  [547] = {.count = 1, .reusable = false}, REDUCE(sym_keyframe_block_list, 2),
  [549] = {.count = 1, .reusable = true}, SHIFT(179),
  [551] = {.count = 1, .reusable = true}, SHIFT(181),
  [553] = {.count = 1, .reusable = false}, SHIFT(148),
  [555] = {.count = 1, .reusable = false}, SHIFT(42),
  [557] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_arguments, 2),
  [559] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_arguments, 2),
  [561] = {.count = 1, .reusable = true}, REDUCE(sym__selector, 1),
  [563] = {.count = 1, .reusable = true}, REDUCE(sym__value, 1),
  [565] = {.count = 1, .reusable = false}, REDUCE(sym__selector, 1),
  [567] = {.count = 1, .reusable = false}, REDUCE(sym__value, 1),
  [569] = {.count = 1, .reusable = true}, SHIFT(183),
  [571] = {.count = 1, .reusable = true}, SHIFT(184),
  [573] = {.count = 1, .reusable = true}, SHIFT(187),
  [575] = {.count = 1, .reusable = true}, SHIFT(188),
  [577] = {.count = 1, .reusable = true}, SHIFT(189),
  [579] = {.count = 1, .reusable = true}, SHIFT(191),
  [581] = {.count = 1, .reusable = false}, SHIFT(191),
  [583] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 4, .alias_sequence_id = 14),
  [585] = {.count = 1, .reusable = false}, REDUCE(sym_declaration, 4, .alias_sequence_id = 14),
  [587] = {.count = 1, .reusable = true}, SHIFT(192),
  [589] = {.count = 1, .reusable = false}, SHIFT(192),
  [591] = {.count = 1, .reusable = true}, SHIFT(193),
  [593] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 1),
  [595] = {.count = 1, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 1),
  [597] = {.count = 1, .reusable = true}, SHIFT(194),
  [599] = {.count = 1, .reusable = true}, SHIFT(196),
  [601] = {.count = 1, .reusable = false}, SHIFT(196),
  [603] = {.count = 1, .reusable = true}, REDUCE(sym_block, 3),
  [605] = {.count = 1, .reusable = false}, REDUCE(sym_block, 3),
  [607] = {.count = 1, .reusable = true}, SHIFT(197),
  [609] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(2),
  [612] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(3),
  [615] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(4),
  [618] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(5),
  [621] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(6),
  [624] = {.count = 1, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2),
  [626] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(7),
  [629] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(18),
  [632] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(8),
  [635] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(9),
  [638] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(10),
  [641] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(11),
  [644] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(12),
  [647] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(13),
  [650] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(14),
  [653] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(15),
  [656] = {.count = 1, .reusable = true}, REDUCE(sym_at_rule, 4),
  [658] = {.count = 1, .reusable = false}, REDUCE(sym_at_rule, 4),
  [660] = {.count = 2, .reusable = true}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(104),
  [663] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_selector, 4, .alias_sequence_id = 10),
  [665] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_selector, 4, .alias_sequence_id = 10),
  [667] = {.count = 1, .reusable = true}, SHIFT(198),
  [669] = {.count = 1, .reusable = false}, SHIFT(198),
  [671] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_selector, 4, .alias_sequence_id = 15),
  [673] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_selector, 4, .alias_sequence_id = 15),
  [675] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 3),
  [677] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 3),
  [679] = {.count = 1, .reusable = true}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2),
  [681] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(94),
  [684] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(95),
  [687] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(122),
  [690] = {.count = 2, .reusable = false}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(96),
  [693] = {.count = 2, .reusable = false}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(97),
  [696] = {.count = 2, .reusable = false}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(98),
  [699] = {.count = 2, .reusable = false}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(122),
  [702] = {.count = 1, .reusable = true}, SHIFT(200),
  [704] = {.count = 1, .reusable = true}, REDUCE(sym_import_statement, 5),
  [706] = {.count = 1, .reusable = false}, REDUCE(sym_import_statement, 5),
  [708] = {.count = 2, .reusable = true}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(125),
  [711] = {.count = 1, .reusable = true}, SHIFT(202),
  [713] = {.count = 1, .reusable = true}, REDUCE(sym_selector_query, 4),
  [715] = {.count = 1, .reusable = true}, SHIFT(204),
  [717] = {.count = 1, .reusable = true}, REDUCE(sym_keyframe_block, 2),
  [719] = {.count = 1, .reusable = true}, REDUCE(sym_keyframe_block_list, 3),
  [721] = {.count = 1, .reusable = false}, REDUCE(sym_keyframe_block_list, 3),
  [723] = {.count = 1, .reusable = true}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2),
  [725] = {.count = 2, .reusable = true}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(139),
  [728] = {.count = 2, .reusable = true}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(31),
  [731] = {.count = 1, .reusable = true}, SHIFT(207),
  [733] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_arguments, 3),
  [735] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_arguments, 3),
  [737] = {.count = 1, .reusable = true}, SHIFT(209),
  [739] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_selector, 5, .alias_sequence_id = 9),
  [741] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_selector, 5, .alias_sequence_id = 9),
  [743] = {.count = 1, .reusable = true}, SHIFT(211),
  [745] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2),
  [747] = {.count = 1, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2),
  [749] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 5, .alias_sequence_id = 14),
  [751] = {.count = 1, .reusable = false}, REDUCE(sym_declaration, 5, .alias_sequence_id = 14),
  [753] = {.count = 1, .reusable = true}, SHIFT(213),
  [755] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(154),
  [758] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(94),
  [761] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(95),
  [764] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(158),
  [767] = {.count = 2, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(96),
  [770] = {.count = 2, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(97),
  [773] = {.count = 2, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(98),
  [776] = {.count = 2, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(158),
  [779] = {.count = 1, .reusable = true}, REDUCE(sym_last_declaration, 3, .alias_sequence_id = 14),
  [781] = {.count = 1, .reusable = true}, SHIFT(214),
  [783] = {.count = 1, .reusable = true}, REDUCE(sym_block, 4),
  [785] = {.count = 1, .reusable = false}, REDUCE(sym_block, 4),
  [787] = {.count = 1, .reusable = true}, SHIFT(216),
  [789] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2),
  [791] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 4),
  [793] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 4),
  [795] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(170),
  [798] = {.count = 1, .reusable = true}, REDUCE(sym_feature_query, 5, .alias_sequence_id = 16),
  [800] = {.count = 1, .reusable = true}, SHIFT(217),
  [802] = {.count = 1, .reusable = true}, REDUCE(aux_sym_pseudo_class_arguments_repeat2, 2),
  [804] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_arguments, 4),
  [806] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_arguments, 4),
  [808] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pseudo_class_arguments_repeat2, 2), SHIFT_REPEAT(183),
  [811] = {.count = 1, .reusable = true}, SHIFT(219),
  [813] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 6, .alias_sequence_id = 14),
  [815] = {.count = 1, .reusable = false}, REDUCE(sym_declaration, 6, .alias_sequence_id = 14),
  [817] = {.count = 1, .reusable = true}, REDUCE(sym_last_declaration, 4, .alias_sequence_id = 14),
  [819] = {.count = 1, .reusable = true}, SHIFT(220),
  [821] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_selector, 6, .alias_sequence_id = 15),
  [823] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_selector, 6, .alias_sequence_id = 15),
  [825] = {.count = 1, .reusable = true}, SHIFT(222),
  [827] = {.count = 1, .reusable = true}, REDUCE(sym_last_declaration, 5, .alias_sequence_id = 14),
};

void *tree_sitter_css_external_scanner_create();
void tree_sitter_css_external_scanner_destroy(void *);
bool tree_sitter_css_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_css_external_scanner_serialize(void *, char *);
void tree_sitter_css_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_css() {
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
      tree_sitter_css_external_scanner_create,
      tree_sitter_css_external_scanner_destroy,
      tree_sitter_css_external_scanner_scan,
      tree_sitter_css_external_scanner_serialize,
      tree_sitter_css_external_scanner_deserialize,
    },
  };
  return &language;
}
