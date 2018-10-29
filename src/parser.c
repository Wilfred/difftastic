#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 221
#define SYMBOL_COUNT 100
#define ALIAS_COUNT 11
#define TOKEN_COUNT 50
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
  anon_sym_LBRACE = 9,
  anon_sym_RBRACE = 10,
  sym_from = 11,
  sym_to = 12,
  anon_sym_ATsupports = 13,
  sym_nesting_selector = 14,
  anon_sym_STAR = 15,
  anon_sym_DOT = 16,
  anon_sym_COLON = 17,
  anon_sym_COLON_COLON = 18,
  anon_sym_POUND = 19,
  anon_sym_LBRACK = 20,
  anon_sym_EQ = 21,
  anon_sym_TILDE_EQ = 22,
  anon_sym_CARET_EQ = 23,
  anon_sym_PIPE_EQ = 24,
  anon_sym_STAR_EQ = 25,
  anon_sym_DOLLAR_EQ = 26,
  anon_sym_RBRACK = 27,
  anon_sym_GT = 28,
  anon_sym_TILDE = 29,
  anon_sym_PLUS = 30,
  anon_sym_LPAREN = 31,
  anon_sym_RPAREN = 32,
  sym_important = 33,
  anon_sym_LPAREN2 = 34,
  anon_sym_and = 35,
  anon_sym_or = 36,
  anon_sym_not = 37,
  anon_sym_selector = 38,
  aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH = 39,
  sym_string_value = 40,
  aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH = 41,
  aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH = 42,
  sym_unit = 43,
  anon_sym_DASH = 44,
  anon_sym_SLASH = 45,
  sym_identifier = 46,
  sym_at_keyword = 47,
  sym_comment = 48,
  sym_plain_value = 49,
  sym_stylesheet = 50,
  sym_import_statement = 51,
  sym_media_statement = 52,
  sym_charset_statement = 53,
  sym_namespace_statement = 54,
  sym_keyframes_statement = 55,
  sym_keyframe_block_list = 56,
  sym_keyframe_block = 57,
  sym_supports_statement = 58,
  sym_at_rule = 59,
  sym_rule_set = 60,
  sym_selectors = 61,
  sym_block = 62,
  sym__selector = 63,
  sym_universal_selector = 64,
  sym_class_selector = 65,
  sym_pseudo_class_selector = 66,
  sym_pseudo_element_selector = 67,
  sym_id_selector = 68,
  sym_attribute_selector = 69,
  sym_child_selector = 70,
  sym_descendant_selector = 71,
  sym_sibling_selector = 72,
  sym_adjacent_sibling_selector = 73,
  sym_pseudo_class_arguments = 74,
  sym_declaration = 75,
  sym_last_declaration = 76,
  sym__query = 77,
  sym_feature_query = 78,
  sym_parenthesized_query = 79,
  sym_binary_query = 80,
  sym_negated_query = 81,
  sym_selector_query = 82,
  sym__value = 83,
  sym_parenthesized_value = 84,
  sym_color_value = 85,
  sym_integer_value = 86,
  sym_float_value = 87,
  sym_call_expression = 88,
  sym_binary_expression = 89,
  sym_arguments = 90,
  aux_sym_stylesheet_repeat1 = 91,
  aux_sym_import_statement_repeat1 = 92,
  aux_sym_keyframe_block_list_repeat1 = 93,
  aux_sym_selectors_repeat1 = 94,
  aux_sym_block_repeat1 = 95,
  aux_sym_pseudo_class_arguments_repeat1 = 96,
  aux_sym_pseudo_class_arguments_repeat2 = 97,
  aux_sym_declaration_repeat1 = 98,
  aux_sym_arguments_repeat1 = 99,
  alias_sym_attribute_name = 100,
  alias_sym_class_name = 101,
  alias_sym_feature_name = 102,
  alias_sym_function_name = 103,
  alias_sym_id_name = 104,
  alias_sym_keyframes_name = 105,
  alias_sym_keyword_query = 106,
  alias_sym_namespace_name = 107,
  alias_sym_plain_value = 108,
  alias_sym_property_name = 109,
  alias_sym_tag_name = 110,
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
  [sym_negated_query] = "negated_query",
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
  [sym_negated_query] = {
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
    [2] = alias_sym_attribute_name,
  },
  [15] = {
    [0] = alias_sym_property_name,
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
        ADVANCE(92);
      if (lookahead == ']')
        ADVANCE(93);
      if (lookahead == '^')
        ADVANCE(94);
      if (lookahead == 'a')
        ADVANCE(96);
      if (lookahead == 'f')
        ADVANCE(106);
      if (lookahead == 'n')
        ADVANCE(110);
      if (lookahead == 'o')
        ADVANCE(113);
      if (lookahead == 's')
        ADVANCE(115);
      if (lookahead == 't')
        ADVANCE(123);
      if (lookahead == '{')
        ADVANCE(125);
      if (lookahead == '|')
        ADVANCE(126);
      if (lookahead == '}')
        ADVANCE(128);
      if (lookahead == '~')
        ADVANCE(129);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(139);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'd'))
        ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(144);
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
        ADVANCE(55);
      if (lookahead == 'k')
        ADVANCE(61);
      if (lookahead == 'm')
        ADVANCE(70);
      if (lookahead == 'n')
        ADVANCE(75);
      if (lookahead == 's')
        ADVANCE(84);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'h')
        ADVANCE(48);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a')
        ADVANCE(49);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'r')
        ADVANCE(50);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 's')
        ADVANCE(51);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e')
        ADVANCE(52);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 't')
        ADVANCE(53);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_ATcharset);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'm')
        ADVANCE(56);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'p')
        ADVANCE(57);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'o')
        ADVANCE(58);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'r')
        ADVANCE(59);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 't')
        ADVANCE(60);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_ATimport);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e')
        ADVANCE(62);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'y')
        ADVANCE(63);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f')
        ADVANCE(64);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'r')
        ADVANCE(65);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a')
        ADVANCE(66);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'm')
        ADVANCE(67);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e')
        ADVANCE(68);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 's')
        ADVANCE(69);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_ATkeyframes);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e')
        ADVANCE(71);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd')
        ADVANCE(72);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i')
        ADVANCE(73);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a')
        ADVANCE(74);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_ATmedia);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a')
        ADVANCE(76);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'm')
        ADVANCE(77);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e')
        ADVANCE(78);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 's')
        ADVANCE(79);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'p')
        ADVANCE(80);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a')
        ADVANCE(81);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c')
        ADVANCE(82);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e')
        ADVANCE(83);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_ATnamespace);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'u')
        ADVANCE(85);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'p')
        ADVANCE(86);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'p')
        ADVANCE(87);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'o')
        ADVANCE(88);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'r')
        ADVANCE(89);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 't')
        ADVANCE(90);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 's')
        ADVANCE(91);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_ATsupports);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(54);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 94:
      if (lookahead == '=')
        ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 96:
      if (lookahead == 'n')
        ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(99);
      END_STATE();
    case 97:
      if (lookahead == 'd')
        ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 99:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(102);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(103);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(104);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      END_STATE();
    case 106:
      if (lookahead == 'r')
        ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(99);
      END_STATE();
    case 107:
      if (lookahead == 'o')
        ADVANCE(108);
      END_STATE();
    case 108:
      if (lookahead == 'm')
        ADVANCE(109);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_from);
      END_STATE();
    case 110:
      if (lookahead == 'o')
        ADVANCE(111);
      END_STATE();
    case 111:
      if (lookahead == 't')
        ADVANCE(112);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 113:
      if (lookahead == 'r')
        ADVANCE(114);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 115:
      if (lookahead == 'e')
        ADVANCE(116);
      END_STATE();
    case 116:
      if (lookahead == 'l')
        ADVANCE(117);
      END_STATE();
    case 117:
      if (lookahead == 'e')
        ADVANCE(118);
      END_STATE();
    case 118:
      if (lookahead == 'c')
        ADVANCE(119);
      END_STATE();
    case 119:
      if (lookahead == 't')
        ADVANCE(120);
      END_STATE();
    case 120:
      if (lookahead == 'o')
        ADVANCE(121);
      END_STATE();
    case 121:
      if (lookahead == 'r')
        ADVANCE(122);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_selector);
      END_STATE();
    case 123:
      if (lookahead == 'o')
        ADVANCE(124);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_to);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 126:
      if (lookahead == '=')
        ADVANCE(127);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '=')
        ADVANCE(130);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 131:
      if (lookahead == '-')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(99);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(100);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(101);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(102);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(103);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(104);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(105);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(32);
      END_STATE();
    case 139:
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
        ADVANCE(140);
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
        ADVANCE(92);
      if (lookahead == ']')
        ADVANCE(93);
      if (lookahead == '^')
        ADVANCE(94);
      if (lookahead == 'a')
        ADVANCE(141);
      if (lookahead == 'f')
        ADVANCE(142);
      if (lookahead == 'n')
        ADVANCE(110);
      if (lookahead == 'o')
        ADVANCE(113);
      if (lookahead == 's')
        ADVANCE(115);
      if (lookahead == 't')
        ADVANCE(123);
      if (lookahead == '{')
        ADVANCE(125);
      if (lookahead == '|')
        ADVANCE(126);
      if (lookahead == '}')
        ADVANCE(128);
      if (lookahead == '~')
        ADVANCE(129);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(139);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 141:
      if (lookahead == 'n')
        ADVANCE(97);
      END_STATE();
    case 142:
      if (lookahead == 'r')
        ADVANCE(107);
      END_STATE();
    case 143:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(99);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(99);
      END_STATE();
    case 145:
      if (lookahead == '-')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(100);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(100);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (lookahead == '-')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(101);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(101);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (lookahead == '-')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(102);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(102);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (lookahead == '-')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(103);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(103);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (lookahead == '-')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(104);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(104);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (lookahead == '-')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(105);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(105);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (lookahead == '-')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(32);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      END_STATE();
    case 159:
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
        ADVANCE(160);
      if (lookahead == '.')
        ADVANCE(161);
      if (lookahead == '/')
        ADVANCE(162);
      if (lookahead == ':')
        ADVANCE(41);
      if (lookahead == '@')
        ADVANCE(46);
      if (lookahead == '[')
        ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(159);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(163);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 162:
      if (lookahead == '*')
        ADVANCE(38);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(163);
      END_STATE();
    case 164:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(16);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == '(')
        ADVANCE(140);
      if (lookahead == '+')
        ADVANCE(165);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '-')
        ADVANCE(166);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == '/')
        ADVANCE(162);
      if (lookahead == ';')
        ADVANCE(43);
      if (lookahead == '_')
        ADVANCE(167);
      if (lookahead == '}')
        ADVANCE(128);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(164);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 165:
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == '-' ||
          lookahead == '_')
        ADVANCE(167);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          lookahead == '_')
        ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
        ADVANCE(169);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != ';' &&
          (lookahead < 'A' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(170);
      END_STATE();
    case 169:
      if (lookahead != 0 &&
          lookahead != '*')
        ADVANCE(170);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/')
        ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']')
        ADVANCE(170);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-')
        ADVANCE(172);
      if (lookahead == '/')
        ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != ';' &&
          (lookahead < 'A' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(170);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
        ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(173);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != ';' &&
          (lookahead < 'A' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(170);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH);
      if (lookahead == '/')
        ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(173);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != ';' &&
          (lookahead < 'A' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(170);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(174);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(163);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-')
        ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(177);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(163);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(177);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(163);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(177);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(163);
      END_STATE();
    case 178:
      if (lookahead == '(')
        ADVANCE(140);
      if (lookahead == '/')
        ADVANCE(162);
      if (lookahead == ';')
        ADVANCE(43);
      if (lookahead == 'n')
        ADVANCE(179);
      if (lookahead == 's')
        ADVANCE(182);
      if (lookahead == '{')
        ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(178);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(163);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(180);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(163);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(181);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(163);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(163);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(183);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(163);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(184);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(163);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(185);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(163);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(186);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(163);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(163);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(188);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(163);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(189);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(163);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(163);
      END_STATE();
    case 190:
      if (lookahead == '#')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '+')
        ADVANCE(191);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '.')
        ADVANCE(161);
      if (lookahead == '/')
        ADVANCE(162);
      if (lookahead == ':')
        ADVANCE(41);
      if (lookahead == '>')
        ADVANCE(45);
      if (lookahead == '[')
        ADVANCE(92);
      if (lookahead == '{')
        ADVANCE(125);
      if (lookahead == '~')
        ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 193:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '/')
        ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(193);
      END_STATE();
    case 194:
      if (lookahead == '#')
        ADVANCE(16);
      if (lookahead == '+')
        ADVANCE(191);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '.')
        ADVANCE(161);
      if (lookahead == '/')
        ADVANCE(162);
      if (lookahead == ':')
        ADVANCE(41);
      if (lookahead == '>')
        ADVANCE(45);
      if (lookahead == '[')
        ADVANCE(92);
      if (lookahead == '{')
        ADVANCE(125);
      if (lookahead == '~')
        ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(194);
      END_STATE();
    case 195:
      if (lookahead == '/')
        ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(143);
      END_STATE();
    case 196:
      if (lookahead == '/')
        ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(196);
      END_STATE();
    case 197:
      if (lookahead == '%')
        ADVANCE(198);
      if (lookahead == '(')
        ADVANCE(140);
      if (lookahead == '*')
        ADVANCE(160);
      if (lookahead == '+')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(199);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(43);
      if (lookahead == '_')
        ADVANCE(163);
      if (lookahead == 'n')
        ADVANCE(200);
      if (lookahead == 's')
        ADVANCE(204);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(212);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(203);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(163);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(198);
      if (lookahead == 'o')
        ADVANCE(201);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(203);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(198);
      if (lookahead == 't')
        ADVANCE(202);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(203);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '%')
        ADVANCE(198);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(203);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(198);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(198);
      if (lookahead == 'e')
        ADVANCE(205);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(203);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(198);
      if (lookahead == 'l')
        ADVANCE(206);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(203);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(198);
      if (lookahead == 'e')
        ADVANCE(207);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(203);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(198);
      if (lookahead == 'c')
        ADVANCE(208);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(203);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(198);
      if (lookahead == 't')
        ADVANCE(209);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(203);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(198);
      if (lookahead == 'o')
        ADVANCE(210);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(203);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(198);
      if (lookahead == 'r')
        ADVANCE(211);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(203);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '%')
        ADVANCE(198);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(203);
      END_STATE();
    case 212:
      if (lookahead == '(')
        ADVANCE(140);
      if (lookahead == '*')
        ADVANCE(160);
      if (lookahead == '+')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(199);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(43);
      if (lookahead == 'n')
        ADVANCE(179);
      if (lookahead == 's')
        ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(212);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(163);
      END_STATE();
    case 213:
      if (lookahead == '(')
        ADVANCE(23);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(160);
      if (lookahead == '+')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(199);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(43);
      if (lookahead == ']')
        ADVANCE(93);
      if (lookahead == 'n')
        ADVANCE(179);
      if (lookahead == 's')
        ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(214);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(163);
      END_STATE();
    case 214:
      if (lookahead == '(')
        ADVANCE(140);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(160);
      if (lookahead == '+')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(199);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(43);
      if (lookahead == ']')
        ADVANCE(93);
      if (lookahead == 'n')
        ADVANCE(179);
      if (lookahead == 's')
        ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(214);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(163);
      END_STATE();
    case 215:
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '/')
        ADVANCE(162);
      if (lookahead == ';')
        ADVANCE(43);
      if (lookahead == 'a')
        ADVANCE(141);
      if (lookahead == 'o')
        ADVANCE(113);
      if (lookahead == '{')
        ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(215);
      END_STATE();
    case 216:
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '/')
        ADVANCE(162);
      if (lookahead == ';')
        ADVANCE(43);
      if (lookahead == 'a')
        ADVANCE(141);
      if (lookahead == 'o')
        ADVANCE(113);
      if (lookahead == '{')
        ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(216);
      END_STATE();
    case 217:
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(160);
      if (lookahead == '+')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(218);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(43);
      if (lookahead == ']')
        ADVANCE(93);
      if (lookahead == '{')
        ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(219);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(198);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 219:
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(160);
      if (lookahead == '+')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(218);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(43);
      if (lookahead == ']')
        ADVANCE(93);
      if (lookahead == '{')
        ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(219);
      END_STATE();
    case 220:
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(160);
      if (lookahead == '+')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(218);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(43);
      if (lookahead == ']')
        ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(221);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(198);
      END_STATE();
    case 221:
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(160);
      if (lookahead == '+')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(218);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(43);
      if (lookahead == ']')
        ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(221);
      END_STATE();
    case 222:
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == '(')
        ADVANCE(23);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '/')
        ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(223);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(163);
      END_STATE();
    case 223:
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '/')
        ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(223);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(163);
      END_STATE();
    case 224:
      if (lookahead == '#')
        ADVANCE(16);
      if (lookahead == '(')
        ADVANCE(23);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '+')
        ADVANCE(191);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '.')
        ADVANCE(161);
      if (lookahead == '/')
        ADVANCE(162);
      if (lookahead == ':')
        ADVANCE(41);
      if (lookahead == '>')
        ADVANCE(45);
      if (lookahead == '[')
        ADVANCE(92);
      if (lookahead == '{')
        ADVANCE(125);
      if (lookahead == '~')
        ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(190);
      END_STATE();
    case 225:
      if (lookahead == '$')
        ADVANCE(17);
      if (lookahead == '*')
        ADVANCE(226);
      if (lookahead == '/')
        ADVANCE(162);
      if (lookahead == '=')
        ADVANCE(44);
      if (lookahead == ']')
        ADVANCE(93);
      if (lookahead == '^')
        ADVANCE(94);
      if (lookahead == '|')
        ADVANCE(126);
      if (lookahead == '~')
        ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(225);
      END_STATE();
    case 226:
      if (lookahead == '=')
        ADVANCE(26);
      END_STATE();
    case 227:
      if (lookahead == '=')
        ADVANCE(130);
      END_STATE();
    case 228:
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
        ADVANCE(160);
      if (lookahead == '.')
        ADVANCE(161);
      if (lookahead == '/')
        ADVANCE(162);
      if (lookahead == ':')
        ADVANCE(41);
      if (lookahead == '@')
        ADVANCE(46);
      if (lookahead == '[')
        ADVANCE(92);
      if (lookahead == '}')
        ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(228);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(163);
      END_STATE();
    case 229:
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(160);
      if (lookahead == '+')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(218);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(229);
      END_STATE();
    case 230:
      if (lookahead == '(')
        ADVANCE(140);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(160);
      if (lookahead == '+')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(199);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(43);
      if (lookahead == ']')
        ADVANCE(93);
      if (lookahead == 'n')
        ADVANCE(179);
      if (lookahead == 's')
        ADVANCE(182);
      if (lookahead == '{')
        ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(230);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(163);
      END_STATE();
    case 231:
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(16);
      if (lookahead == '&')
        ADVANCE(19);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == '(')
        ADVANCE(140);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(160);
      if (lookahead == '+')
        ADVANCE(165);
      if (lookahead == '-')
        ADVANCE(166);
      if (lookahead == '.')
        ADVANCE(36);
      if (lookahead == '/')
        ADVANCE(162);
      if (lookahead == ':')
        ADVANCE(41);
      if (lookahead == '[')
        ADVANCE(92);
      if (lookahead == '_')
        ADVANCE(167);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(231);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 232:
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '/')
        ADVANCE(162);
      if (lookahead == ':')
        ADVANCE(233);
      if (lookahead == 'a')
        ADVANCE(141);
      if (lookahead == 'o')
        ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(232);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 234:
      if (lookahead == '+')
        ADVANCE(235);
      if (lookahead == '-')
        ADVANCE(235);
      if (lookahead == '/')
        ADVANCE(162);
      if (lookahead == 'f')
        ADVANCE(142);
      if (lookahead == 't')
        ADVANCE(123);
      if (lookahead == '}')
        ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(234);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(236);
      END_STATE();
    case 235:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(236);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(236);
      END_STATE();
    case 237:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(16);
      if (lookahead == '%')
        ADVANCE(198);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == '(')
        ADVANCE(140);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(160);
      if (lookahead == '+')
        ADVANCE(27);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '-')
        ADVANCE(238);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(43);
      if (lookahead == '_')
        ADVANCE(167);
      if (lookahead == '}')
        ADVANCE(128);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(239);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(242);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(241);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == '-' ||
          lookahead == '_')
        ADVANCE(167);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(240);
      if (lookahead == '-')
        ADVANCE(172);
      if (lookahead == '/')
        ADVANCE(169);
      if (lookahead == '_')
        ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != ';' &&
          (lookahead < 'A' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(170);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '/')
        ADVANCE(169);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != ';' &&
          (lookahead < 'A' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(170);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(240);
      if (lookahead == '/')
        ADVANCE(169);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != ';' &&
          (lookahead < 'A' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(170);
      END_STATE();
    case 242:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(16);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == '(')
        ADVANCE(140);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(160);
      if (lookahead == '+')
        ADVANCE(27);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '-')
        ADVANCE(238);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(43);
      if (lookahead == '_')
        ADVANCE(167);
      if (lookahead == '}')
        ADVANCE(128);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(242);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 243:
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
        ADVANCE(160);
      if (lookahead == '+')
        ADVANCE(27);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '-')
        ADVANCE(238);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(43);
      if (lookahead == '_')
        ADVANCE(167);
      if (lookahead == '}')
        ADVANCE(128);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(242);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 244:
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(16);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == '(')
        ADVANCE(140);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(160);
      if (lookahead == '+')
        ADVANCE(27);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '-')
        ADVANCE(238);
      if (lookahead == '.')
        ADVANCE(36);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ':')
        ADVANCE(41);
      if (lookahead == '>')
        ADVANCE(45);
      if (lookahead == '[')
        ADVANCE(92);
      if (lookahead == '_')
        ADVANCE(167);
      if (lookahead == '~')
        ADVANCE(192);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(244);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 245:
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(16);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == '(')
        ADVANCE(140);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '+')
        ADVANCE(165);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '-')
        ADVANCE(166);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == '/')
        ADVANCE(162);
      if (lookahead == '_')
        ADVANCE(167);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(245);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 246:
      if (lookahead == '#')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '+')
        ADVANCE(191);
      if (lookahead == '.')
        ADVANCE(161);
      if (lookahead == '/')
        ADVANCE(162);
      if (lookahead == ':')
        ADVANCE(41);
      if (lookahead == '>')
        ADVANCE(45);
      if (lookahead == '[')
        ADVANCE(92);
      if (lookahead == '~')
        ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(246);
      END_STATE();
    case 247:
      if (lookahead == '/')
        ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(248);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(249);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(163);
      END_STATE();
    case 248:
      if (lookahead == '/')
        ADVANCE(162);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(248);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(163);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(250);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(163);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(251);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(163);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(252);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(163);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(253);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(163);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(254);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(163);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(255);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(163);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(256);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(163);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(163);
      END_STATE();
    case 257:
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
        ADVANCE(160);
      if (lookahead == '+')
        ADVANCE(27);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '-')
        ADVANCE(238);
      if (lookahead == '.')
        ADVANCE(36);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ':')
        ADVANCE(41);
      if (lookahead == '>')
        ADVANCE(45);
      if (lookahead == '[')
        ADVANCE(92);
      if (lookahead == '_')
        ADVANCE(167);
      if (lookahead == '~')
        ADVANCE(192);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(244);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    case 258:
      if (lookahead == '#')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '+')
        ADVANCE(191);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '.')
        ADVANCE(161);
      if (lookahead == '/')
        ADVANCE(162);
      if (lookahead == ':')
        ADVANCE(41);
      if (lookahead == '>')
        ADVANCE(45);
      if (lookahead == '[')
        ADVANCE(92);
      if (lookahead == '~')
        ADVANCE(192);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(258);
      END_STATE();
    case 259:
      if (lookahead == '*')
        ADVANCE(160);
      if (lookahead == '+')
        ADVANCE(191);
      if (lookahead == '-')
        ADVANCE(218);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ']')
        ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(259);
      END_STATE();
    case 260:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(16);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == '(')
        ADVANCE(140);
      if (lookahead == '*')
        ADVANCE(160);
      if (lookahead == '+')
        ADVANCE(27);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '-')
        ADVANCE(238);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(43);
      if (lookahead == '_')
        ADVANCE(167);
      if (lookahead == '}')
        ADVANCE(128);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(260);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(168);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 159},
  [2] = {.lex_state = 164},
  [3] = {.lex_state = 178},
  [4] = {.lex_state = 164},
  [5] = {.lex_state = 159},
  [6] = {.lex_state = 159},
  [7] = {.lex_state = 178},
  [8] = {.lex_state = 190, .external_lex_state = 1},
  [9] = {.lex_state = 159},
  [10] = {.lex_state = 159},
  [11] = {.lex_state = 159},
  [12] = {.lex_state = 159},
  [13] = {.lex_state = 159},
  [14] = {.lex_state = 190, .external_lex_state = 1},
  [15] = {.lex_state = 178},
  [16] = {.lex_state = 193},
  [17] = {.lex_state = 178},
  [18] = {.lex_state = 194, .external_lex_state = 1},
  [19] = {.lex_state = 159},
  [20] = {.lex_state = 195},
  [21] = {.lex_state = 164},
  [22] = {.lex_state = 197},
  [23] = {.lex_state = 197},
  [24] = {.lex_state = 213},
  [25] = {.lex_state = 212},
  [26] = {.lex_state = 178},
  [27] = {.lex_state = 178},
  [28] = {.lex_state = 164},
  [29] = {.lex_state = 215},
  [30] = {.lex_state = 216},
  [31] = {.lex_state = 217},
  [32] = {.lex_state = 220},
  [33] = {.lex_state = 197},
  [34] = {.lex_state = 164},
  [35] = {.lex_state = 222},
  [36] = {.lex_state = 178},
  [37] = {.lex_state = 178},
  [38] = {.lex_state = 216},
  [39] = {.lex_state = 190, .external_lex_state = 1},
  [40] = {.lex_state = 224, .external_lex_state = 1},
  [41] = {.lex_state = 190, .external_lex_state = 1},
  [42] = {.lex_state = 190, .external_lex_state = 1},
  [43] = {.lex_state = 225},
  [44] = {.lex_state = 228},
  [45] = {.lex_state = 228},
  [46] = {.lex_state = 178},
  [47] = {.lex_state = 216},
  [48] = {.lex_state = 228},
  [49] = {.lex_state = 159},
  [50] = {.lex_state = 159},
  [51] = {.lex_state = 159},
  [52] = {.lex_state = 159},
  [53] = {.lex_state = 159},
  [54] = {.lex_state = 159},
  [55] = {.lex_state = 159},
  [56] = {.lex_state = 159},
  [57] = {.lex_state = 159},
  [58] = {.lex_state = 159},
  [59] = {.lex_state = 194},
  [60] = {.lex_state = 159},
  [61] = {.lex_state = 214},
  [62] = {.lex_state = 229},
  [63] = {.lex_state = 230},
  [64] = {.lex_state = 214},
  [65] = {.lex_state = 231},
  [66] = {.lex_state = 214},
  [67] = {.lex_state = 228},
  [68] = {.lex_state = 164},
  [69] = {.lex_state = 178},
  [70] = {.lex_state = 216},
  [71] = {.lex_state = 178},
  [72] = {.lex_state = 232},
  [73] = {.lex_state = 232},
  [74] = {.lex_state = 215},
  [75] = {.lex_state = 159},
  [76] = {.lex_state = 178},
  [77] = {.lex_state = 178},
  [78] = {.lex_state = 228},
  [79] = {.lex_state = 194},
  [80] = {.lex_state = 228},
  [81] = {.lex_state = 164},
  [82] = {.lex_state = 228},
  [83] = {.lex_state = 164},
  [84] = {.lex_state = 213},
  [85] = {.lex_state = 234},
  [86] = {.lex_state = 228},
  [87] = {.lex_state = 178},
  [88] = {.lex_state = 228},
  [89] = {.lex_state = 231},
  [90] = {.lex_state = 190, .external_lex_state = 1},
  [91] = {.lex_state = 164},
  [92] = {.lex_state = 190, .external_lex_state = 1},
  [93] = {.lex_state = 228},
  [94] = {.lex_state = 194, .external_lex_state = 1},
  [95] = {.lex_state = 164},
  [96] = {.lex_state = 228},
  [97] = {.lex_state = 178},
  [98] = {.lex_state = 228},
  [99] = {.lex_state = 178},
  [100] = {.lex_state = 216},
  [101] = {.lex_state = 190, .external_lex_state = 1},
  [102] = {.lex_state = 194, .external_lex_state = 1},
  [103] = {.lex_state = 190, .external_lex_state = 1},
  [104] = {.lex_state = 224, .external_lex_state = 1},
  [105] = {.lex_state = 190, .external_lex_state = 1},
  [106] = {.lex_state = 190, .external_lex_state = 1},
  [107] = {.lex_state = 225},
  [108] = {.lex_state = 190, .external_lex_state = 1},
  [109] = {.lex_state = 190, .external_lex_state = 1},
  [110] = {.lex_state = 190, .external_lex_state = 1},
  [111] = {.lex_state = 194},
  [112] = {.lex_state = 214},
  [113] = {.lex_state = 195},
  [114] = {.lex_state = 214},
  [115] = {.lex_state = 164},
  [116] = {.lex_state = 237},
  [117] = {.lex_state = 237},
  [118] = {.lex_state = 243},
  [119] = {.lex_state = 244},
  [120] = {.lex_state = 245},
  [121] = {.lex_state = 214},
  [122] = {.lex_state = 178},
  [123] = {.lex_state = 228},
  [124] = {.lex_state = 178},
  [125] = {.lex_state = 164},
  [126] = {.lex_state = 164},
  [127] = {.lex_state = 215},
  [128] = {.lex_state = 178},
  [129] = {.lex_state = 246, .external_lex_state = 1},
  [130] = {.lex_state = 216},
  [131] = {.lex_state = 215},
  [132] = {.lex_state = 228},
  [133] = {.lex_state = 194},
  [134] = {.lex_state = 228},
  [135] = {.lex_state = 228},
  [136] = {.lex_state = 178},
  [137] = {.lex_state = 234},
  [138] = {.lex_state = 247},
  [139] = {.lex_state = 190, .external_lex_state = 1},
  [140] = {.lex_state = 244, .external_lex_state = 1},
  [141] = {.lex_state = 257, .external_lex_state = 1},
  [142] = {.lex_state = 258, .external_lex_state = 1},
  [143] = {.lex_state = 245},
  [144] = {.lex_state = 259},
  [145] = {.lex_state = 164},
  [146] = {.lex_state = 228},
  [147] = {.lex_state = 164},
  [148] = {.lex_state = 228},
  [149] = {.lex_state = 216},
  [150] = {.lex_state = 228},
  [151] = {.lex_state = 216},
  [152] = {.lex_state = 190, .external_lex_state = 1},
  [153] = {.lex_state = 164},
  [154] = {.lex_state = 190, .external_lex_state = 1},
  [155] = {.lex_state = 242},
  [156] = {.lex_state = 229},
  [157] = {.lex_state = 242},
  [158] = {.lex_state = 242},
  [159] = {.lex_state = 231},
  [160] = {.lex_state = 242},
  [161] = {.lex_state = 164},
  [162] = {.lex_state = 164},
  [163] = {.lex_state = 214},
  [164] = {.lex_state = 245},
  [165] = {.lex_state = 222},
  [166] = {.lex_state = 216},
  [167] = {.lex_state = 228},
  [168] = {.lex_state = 164},
  [169] = {.lex_state = 229},
  [170] = {.lex_state = 215},
  [171] = {.lex_state = 228},
  [172] = {.lex_state = 234},
  [173] = {.lex_state = 228},
  [174] = {.lex_state = 234},
  [175] = {.lex_state = 231},
  [176] = {.lex_state = 190, .external_lex_state = 1},
  [177] = {.lex_state = 222},
  [178] = {.lex_state = 190, .external_lex_state = 1},
  [179] = {.lex_state = 260},
  [180] = {.lex_state = 228},
  [181] = {.lex_state = 194, .external_lex_state = 1},
  [182] = {.lex_state = 259},
  [183] = {.lex_state = 242},
  [184] = {.lex_state = 242},
  [185] = {.lex_state = 245},
  [186] = {.lex_state = 242},
  [187] = {.lex_state = 245},
  [188] = {.lex_state = 214},
  [189] = {.lex_state = 222},
  [190] = {.lex_state = 215},
  [191] = {.lex_state = 234},
  [192] = {.lex_state = 164},
  [193] = {.lex_state = 228},
  [194] = {.lex_state = 258, .external_lex_state = 1},
  [195] = {.lex_state = 245},
  [196] = {.lex_state = 190, .external_lex_state = 1},
  [197] = {.lex_state = 222},
  [198] = {.lex_state = 164},
  [199] = {.lex_state = 228},
  [200] = {.lex_state = 164},
  [201] = {.lex_state = 260},
  [202] = {.lex_state = 164},
  [203] = {.lex_state = 164},
  [204] = {.lex_state = 190, .external_lex_state = 1},
  [205] = {.lex_state = 242},
  [206] = {.lex_state = 222},
  [207] = {.lex_state = 234},
  [208] = {.lex_state = 164},
  [209] = {.lex_state = 260},
  [210] = {.lex_state = 228},
  [211] = {.lex_state = 164},
  [212] = {.lex_state = 164},
  [213] = {.lex_state = 260},
  [214] = {.lex_state = 242},
  [215] = {.lex_state = 234},
  [216] = {.lex_state = 228},
  [217] = {.lex_state = 164},
  [218] = {.lex_state = 164},
  [219] = {.lex_state = 164},
  [220] = {.lex_state = 164},
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
    [aux_sym_stylesheet_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATmedia] = ACTIONS(9),
    [anon_sym_ATcharset] = ACTIONS(11),
    [anon_sym_ATnamespace] = ACTIONS(13),
    [anon_sym_ATkeyframes] = ACTIONS(15),
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
    [sym_negated_query] = STATE(30),
    [sym_selector_query] = STATE(30),
    [anon_sym_LPAREN2] = ACTIONS(53),
    [anon_sym_not] = ACTIONS(55),
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
    [sym_negated_query] = STATE(38),
    [sym_selector_query] = STATE(38),
    [anon_sym_LPAREN2] = ACTIONS(53),
    [anon_sym_not] = ACTIONS(75),
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
    [anon_sym_RPAREN] = ACTIONS(91),
    [sym_comment] = ACTIONS(37),
  },
  [15] = {
    [sym_block] = STATE(44),
    [sym__query] = STATE(47),
    [sym_feature_query] = STATE(47),
    [sym_parenthesized_query] = STATE(47),
    [sym_binary_query] = STATE(47),
    [sym_negated_query] = STATE(47),
    [sym_selector_query] = STATE(47),
    [anon_sym_SEMI] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(97),
    [anon_sym_LPAREN2] = ACTIONS(53),
    [anon_sym_not] = ACTIONS(99),
    [anon_sym_selector] = ACTIONS(57),
    [sym_identifier] = ACTIONS(59),
    [sym_comment] = ACTIONS(37),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(101),
    [sym_comment] = ACTIONS(37),
  },
  [17] = {
    [sym_block] = STATE(48),
    [anon_sym_LBRACE] = ACTIONS(97),
    [sym_comment] = ACTIONS(37),
  },
  [18] = {
    [aux_sym_selectors_repeat1] = STATE(59),
    [sym__descendant_operator] = ACTIONS(103),
    [anon_sym_COMMA] = ACTIONS(105),
    [anon_sym_LBRACE] = ACTIONS(107),
    [anon_sym_DOT] = ACTIONS(109),
    [anon_sym_COLON] = ACTIONS(111),
    [anon_sym_COLON_COLON] = ACTIONS(113),
    [anon_sym_POUND] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_GT] = ACTIONS(119),
    [anon_sym_TILDE] = ACTIONS(121),
    [anon_sym_PLUS] = ACTIONS(123),
    [sym_comment] = ACTIONS(37),
  },
  [19] = {
    [sym_import_statement] = STATE(60),
    [sym_media_statement] = STATE(60),
    [sym_charset_statement] = STATE(60),
    [sym_namespace_statement] = STATE(60),
    [sym_keyframes_statement] = STATE(60),
    [sym_supports_statement] = STATE(60),
    [sym_at_rule] = STATE(60),
    [sym_rule_set] = STATE(60),
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
    [aux_sym_stylesheet_repeat1] = STATE(60),
    [ts_builtin_sym_end] = ACTIONS(125),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATmedia] = ACTIONS(9),
    [anon_sym_ATcharset] = ACTIONS(11),
    [anon_sym_ATnamespace] = ACTIONS(13),
    [anon_sym_ATkeyframes] = ACTIONS(15),
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
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH] = ACTIONS(127),
    [sym_comment] = ACTIONS(37),
  },
  [21] = {
    [sym__value] = STATE(62),
    [sym_parenthesized_value] = STATE(62),
    [sym_color_value] = STATE(62),
    [sym_integer_value] = STATE(62),
    [sym_float_value] = STATE(62),
    [sym_call_expression] = STATE(62),
    [sym_binary_expression] = STATE(62),
    [anon_sym_POUND] = ACTIONS(39),
    [anon_sym_LPAREN2] = ACTIONS(41),
    [sym_string_value] = ACTIONS(129),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(63),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(65),
    [sym_identifier] = ACTIONS(49),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(131),
  },
  [22] = {
    [anon_sym_SEMI] = ACTIONS(133),
    [anon_sym_STAR] = ACTIONS(133),
    [anon_sym_PLUS] = ACTIONS(133),
    [anon_sym_LPAREN2] = ACTIONS(133),
    [anon_sym_not] = ACTIONS(135),
    [anon_sym_selector] = ACTIONS(135),
    [sym_unit] = ACTIONS(137),
    [anon_sym_DASH] = ACTIONS(135),
    [anon_sym_SLASH] = ACTIONS(135),
    [sym_identifier] = ACTIONS(135),
    [sym_comment] = ACTIONS(37),
  },
  [23] = {
    [anon_sym_SEMI] = ACTIONS(139),
    [anon_sym_STAR] = ACTIONS(139),
    [anon_sym_PLUS] = ACTIONS(139),
    [anon_sym_LPAREN2] = ACTIONS(139),
    [anon_sym_not] = ACTIONS(141),
    [anon_sym_selector] = ACTIONS(141),
    [sym_unit] = ACTIONS(143),
    [anon_sym_DASH] = ACTIONS(141),
    [anon_sym_SLASH] = ACTIONS(141),
    [sym_identifier] = ACTIONS(141),
    [sym_comment] = ACTIONS(37),
  },
  [24] = {
    [sym_arguments] = STATE(66),
    [anon_sym_SEMI] = ACTIONS(145),
    [anon_sym_STAR] = ACTIONS(145),
    [anon_sym_RBRACK] = ACTIONS(145),
    [anon_sym_PLUS] = ACTIONS(145),
    [anon_sym_LPAREN] = ACTIONS(147),
    [anon_sym_RPAREN] = ACTIONS(145),
    [anon_sym_LPAREN2] = ACTIONS(149),
    [anon_sym_not] = ACTIONS(149),
    [anon_sym_selector] = ACTIONS(149),
    [anon_sym_DASH] = ACTIONS(149),
    [anon_sym_SLASH] = ACTIONS(149),
    [sym_identifier] = ACTIONS(149),
    [sym_comment] = ACTIONS(37),
  },
  [25] = {
    [sym__query] = STATE(70),
    [sym_feature_query] = STATE(70),
    [sym_parenthesized_query] = STATE(70),
    [sym_binary_query] = STATE(70),
    [sym_negated_query] = STATE(70),
    [sym_selector_query] = STATE(70),
    [anon_sym_SEMI] = ACTIONS(151),
    [anon_sym_STAR] = ACTIONS(153),
    [anon_sym_PLUS] = ACTIONS(153),
    [anon_sym_LPAREN2] = ACTIONS(53),
    [anon_sym_not] = ACTIONS(155),
    [anon_sym_selector] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(157),
    [anon_sym_SLASH] = ACTIONS(157),
    [sym_identifier] = ACTIONS(59),
    [sym_comment] = ACTIONS(37),
  },
  [26] = {
    [sym__query] = STATE(73),
    [sym_feature_query] = STATE(73),
    [sym_parenthesized_query] = STATE(73),
    [sym_binary_query] = STATE(73),
    [sym_negated_query] = STATE(73),
    [sym_selector_query] = STATE(73),
    [anon_sym_LPAREN2] = ACTIONS(53),
    [anon_sym_not] = ACTIONS(159),
    [anon_sym_selector] = ACTIONS(57),
    [sym_identifier] = ACTIONS(161),
    [sym_comment] = ACTIONS(37),
  },
  [27] = {
    [sym__query] = STATE(74),
    [sym_feature_query] = STATE(74),
    [sym_parenthesized_query] = STATE(74),
    [sym_binary_query] = STATE(74),
    [sym_negated_query] = STATE(74),
    [sym_selector_query] = STATE(74),
    [anon_sym_LPAREN2] = ACTIONS(53),
    [anon_sym_not] = ACTIONS(55),
    [anon_sym_selector] = ACTIONS(57),
    [sym_identifier] = ACTIONS(59),
    [sym_comment] = ACTIONS(37),
  },
  [28] = {
    [anon_sym_LPAREN2] = ACTIONS(163),
    [sym_comment] = ACTIONS(37),
  },
  [29] = {
    [anon_sym_COMMA] = ACTIONS(165),
    [anon_sym_SEMI] = ACTIONS(165),
    [anon_sym_LBRACE] = ACTIONS(165),
    [anon_sym_RPAREN] = ACTIONS(165),
    [anon_sym_and] = ACTIONS(165),
    [anon_sym_or] = ACTIONS(165),
    [sym_comment] = ACTIONS(37),
  },
  [30] = {
    [sym_block] = STATE(78),
    [aux_sym_import_statement_repeat1] = STATE(79),
    [anon_sym_COMMA] = ACTIONS(167),
    [anon_sym_LBRACE] = ACTIONS(97),
    [anon_sym_and] = ACTIONS(169),
    [anon_sym_or] = ACTIONS(169),
    [sym_comment] = ACTIONS(37),
  },
  [31] = {
    [anon_sym_SEMI] = ACTIONS(133),
    [anon_sym_LBRACE] = ACTIONS(133),
    [anon_sym_STAR] = ACTIONS(133),
    [anon_sym_RBRACK] = ACTIONS(133),
    [anon_sym_PLUS] = ACTIONS(133),
    [anon_sym_RPAREN] = ACTIONS(133),
    [sym_unit] = ACTIONS(171),
    [anon_sym_DASH] = ACTIONS(133),
    [anon_sym_SLASH] = ACTIONS(135),
    [sym_comment] = ACTIONS(37),
  },
  [32] = {
    [anon_sym_SEMI] = ACTIONS(139),
    [anon_sym_STAR] = ACTIONS(139),
    [anon_sym_RBRACK] = ACTIONS(139),
    [anon_sym_PLUS] = ACTIONS(139),
    [anon_sym_RPAREN] = ACTIONS(139),
    [sym_unit] = ACTIONS(173),
    [anon_sym_DASH] = ACTIONS(139),
    [anon_sym_SLASH] = ACTIONS(141),
    [sym_comment] = ACTIONS(37),
  },
  [33] = {
    [anon_sym_SEMI] = ACTIONS(175),
    [anon_sym_STAR] = ACTIONS(177),
    [anon_sym_PLUS] = ACTIONS(177),
    [anon_sym_DASH] = ACTIONS(177),
    [anon_sym_SLASH] = ACTIONS(179),
    [sym_comment] = ACTIONS(37),
  },
  [34] = {
    [anon_sym_SEMI] = ACTIONS(181),
    [sym_comment] = ACTIONS(37),
  },
  [35] = {
    [sym_call_expression] = STATE(83),
    [sym_arguments] = STATE(66),
    [anon_sym_LPAREN] = ACTIONS(147),
    [sym_string_value] = ACTIONS(183),
    [sym_identifier] = ACTIONS(185),
    [sym_comment] = ACTIONS(37),
  },
  [36] = {
    [sym_keyframe_block_list] = STATE(86),
    [anon_sym_LBRACE] = ACTIONS(187),
    [sym_comment] = ACTIONS(37),
  },
  [37] = {
    [sym__query] = STATE(74),
    [sym_feature_query] = STATE(74),
    [sym_parenthesized_query] = STATE(74),
    [sym_binary_query] = STATE(74),
    [sym_negated_query] = STATE(74),
    [sym_selector_query] = STATE(74),
    [anon_sym_LPAREN2] = ACTIONS(53),
    [anon_sym_not] = ACTIONS(75),
    [anon_sym_selector] = ACTIONS(57),
    [sym_identifier] = ACTIONS(59),
    [sym_comment] = ACTIONS(37),
  },
  [38] = {
    [sym_block] = STATE(88),
    [anon_sym_LBRACE] = ACTIONS(97),
    [anon_sym_and] = ACTIONS(189),
    [anon_sym_or] = ACTIONS(189),
    [sym_comment] = ACTIONS(37),
  },
  [39] = {
    [sym__descendant_operator] = ACTIONS(191),
    [anon_sym_COMMA] = ACTIONS(191),
    [anon_sym_LBRACE] = ACTIONS(191),
    [anon_sym_DOT] = ACTIONS(191),
    [anon_sym_COLON] = ACTIONS(193),
    [anon_sym_COLON_COLON] = ACTIONS(191),
    [anon_sym_POUND] = ACTIONS(191),
    [anon_sym_LBRACK] = ACTIONS(191),
    [anon_sym_GT] = ACTIONS(191),
    [anon_sym_TILDE] = ACTIONS(191),
    [anon_sym_PLUS] = ACTIONS(191),
    [anon_sym_RPAREN] = ACTIONS(191),
    [sym_comment] = ACTIONS(37),
  },
  [40] = {
    [sym_pseudo_class_arguments] = STATE(90),
    [sym__descendant_operator] = ACTIONS(195),
    [anon_sym_COMMA] = ACTIONS(195),
    [anon_sym_LBRACE] = ACTIONS(195),
    [anon_sym_DOT] = ACTIONS(195),
    [anon_sym_COLON] = ACTIONS(197),
    [anon_sym_COLON_COLON] = ACTIONS(195),
    [anon_sym_POUND] = ACTIONS(195),
    [anon_sym_LBRACK] = ACTIONS(195),
    [anon_sym_GT] = ACTIONS(195),
    [anon_sym_TILDE] = ACTIONS(195),
    [anon_sym_PLUS] = ACTIONS(195),
    [anon_sym_LPAREN] = ACTIONS(199),
    [anon_sym_RPAREN] = ACTIONS(195),
    [sym_comment] = ACTIONS(37),
  },
  [41] = {
    [sym__descendant_operator] = ACTIONS(201),
    [anon_sym_COMMA] = ACTIONS(201),
    [anon_sym_LBRACE] = ACTIONS(201),
    [anon_sym_DOT] = ACTIONS(201),
    [anon_sym_COLON] = ACTIONS(203),
    [anon_sym_COLON_COLON] = ACTIONS(201),
    [anon_sym_POUND] = ACTIONS(201),
    [anon_sym_LBRACK] = ACTIONS(201),
    [anon_sym_GT] = ACTIONS(201),
    [anon_sym_TILDE] = ACTIONS(201),
    [anon_sym_PLUS] = ACTIONS(201),
    [anon_sym_RPAREN] = ACTIONS(201),
    [sym_comment] = ACTIONS(37),
  },
  [42] = {
    [sym__descendant_operator] = ACTIONS(205),
    [anon_sym_COMMA] = ACTIONS(205),
    [anon_sym_LBRACE] = ACTIONS(205),
    [anon_sym_DOT] = ACTIONS(205),
    [anon_sym_COLON] = ACTIONS(207),
    [anon_sym_COLON_COLON] = ACTIONS(205),
    [anon_sym_POUND] = ACTIONS(205),
    [anon_sym_LBRACK] = ACTIONS(205),
    [anon_sym_GT] = ACTIONS(205),
    [anon_sym_TILDE] = ACTIONS(205),
    [anon_sym_PLUS] = ACTIONS(205),
    [anon_sym_RPAREN] = ACTIONS(205),
    [sym_comment] = ACTIONS(37),
  },
  [43] = {
    [anon_sym_EQ] = ACTIONS(209),
    [anon_sym_TILDE_EQ] = ACTIONS(209),
    [anon_sym_CARET_EQ] = ACTIONS(209),
    [anon_sym_PIPE_EQ] = ACTIONS(209),
    [anon_sym_STAR_EQ] = ACTIONS(209),
    [anon_sym_DOLLAR_EQ] = ACTIONS(209),
    [anon_sym_RBRACK] = ACTIONS(211),
    [sym_comment] = ACTIONS(37),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(213),
    [anon_sym_ATimport] = ACTIONS(215),
    [anon_sym_ATmedia] = ACTIONS(215),
    [anon_sym_ATcharset] = ACTIONS(215),
    [anon_sym_ATnamespace] = ACTIONS(215),
    [anon_sym_ATkeyframes] = ACTIONS(215),
    [anon_sym_RBRACE] = ACTIONS(213),
    [anon_sym_ATsupports] = ACTIONS(215),
    [sym_nesting_selector] = ACTIONS(213),
    [anon_sym_STAR] = ACTIONS(213),
    [anon_sym_DOT] = ACTIONS(213),
    [anon_sym_COLON] = ACTIONS(215),
    [anon_sym_COLON_COLON] = ACTIONS(213),
    [anon_sym_POUND] = ACTIONS(213),
    [anon_sym_LBRACK] = ACTIONS(213),
    [sym_string_value] = ACTIONS(213),
    [sym_identifier] = ACTIONS(213),
    [sym_at_keyword] = ACTIONS(215),
    [sym_comment] = ACTIONS(37),
  },
  [45] = {
    [sym_import_statement] = STATE(96),
    [sym_media_statement] = STATE(96),
    [sym_charset_statement] = STATE(96),
    [sym_namespace_statement] = STATE(96),
    [sym_keyframes_statement] = STATE(96),
    [sym_supports_statement] = STATE(96),
    [sym_at_rule] = STATE(96),
    [sym_rule_set] = STATE(96),
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
    [sym_declaration] = STATE(96),
    [sym_last_declaration] = STATE(95),
    [aux_sym_block_repeat1] = STATE(96),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATmedia] = ACTIONS(9),
    [anon_sym_ATcharset] = ACTIONS(11),
    [anon_sym_ATnamespace] = ACTIONS(13),
    [anon_sym_ATkeyframes] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(217),
    [anon_sym_ATsupports] = ACTIONS(17),
    [sym_nesting_selector] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_string_value] = ACTIONS(19),
    [sym_identifier] = ACTIONS(219),
    [sym_at_keyword] = ACTIONS(35),
    [sym_comment] = ACTIONS(37),
  },
  [46] = {
    [sym__query] = STATE(74),
    [sym_feature_query] = STATE(74),
    [sym_parenthesized_query] = STATE(74),
    [sym_binary_query] = STATE(74),
    [sym_negated_query] = STATE(74),
    [sym_selector_query] = STATE(74),
    [anon_sym_LPAREN2] = ACTIONS(53),
    [anon_sym_not] = ACTIONS(99),
    [anon_sym_selector] = ACTIONS(57),
    [sym_identifier] = ACTIONS(59),
    [sym_comment] = ACTIONS(37),
  },
  [47] = {
    [sym_block] = STATE(98),
    [aux_sym_import_statement_repeat1] = STATE(100),
    [anon_sym_COMMA] = ACTIONS(221),
    [anon_sym_SEMI] = ACTIONS(223),
    [anon_sym_LBRACE] = ACTIONS(97),
    [anon_sym_and] = ACTIONS(225),
    [anon_sym_or] = ACTIONS(225),
    [sym_comment] = ACTIONS(37),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(227),
    [anon_sym_ATimport] = ACTIONS(229),
    [anon_sym_ATmedia] = ACTIONS(229),
    [anon_sym_ATcharset] = ACTIONS(229),
    [anon_sym_ATnamespace] = ACTIONS(229),
    [anon_sym_ATkeyframes] = ACTIONS(229),
    [anon_sym_RBRACE] = ACTIONS(227),
    [anon_sym_ATsupports] = ACTIONS(229),
    [sym_nesting_selector] = ACTIONS(227),
    [anon_sym_STAR] = ACTIONS(227),
    [anon_sym_DOT] = ACTIONS(227),
    [anon_sym_COLON] = ACTIONS(229),
    [anon_sym_COLON_COLON] = ACTIONS(227),
    [anon_sym_POUND] = ACTIONS(227),
    [anon_sym_LBRACK] = ACTIONS(227),
    [sym_string_value] = ACTIONS(227),
    [sym_identifier] = ACTIONS(227),
    [sym_at_keyword] = ACTIONS(229),
    [sym_comment] = ACTIONS(37),
  },
  [49] = {
    [sym__selector] = STATE(101),
    [sym_universal_selector] = STATE(101),
    [sym_class_selector] = STATE(101),
    [sym_pseudo_class_selector] = STATE(101),
    [sym_pseudo_element_selector] = STATE(101),
    [sym_id_selector] = STATE(101),
    [sym_attribute_selector] = STATE(101),
    [sym_child_selector] = STATE(101),
    [sym_descendant_selector] = STATE(101),
    [sym_sibling_selector] = STATE(101),
    [sym_adjacent_sibling_selector] = STATE(101),
    [sym_nesting_selector] = ACTIONS(231),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_string_value] = ACTIONS(231),
    [sym_identifier] = ACTIONS(33),
    [sym_comment] = ACTIONS(37),
  },
  [50] = {
    [sym__selector] = STATE(102),
    [sym_universal_selector] = STATE(102),
    [sym_class_selector] = STATE(102),
    [sym_pseudo_class_selector] = STATE(102),
    [sym_pseudo_element_selector] = STATE(102),
    [sym_id_selector] = STATE(102),
    [sym_attribute_selector] = STATE(102),
    [sym_child_selector] = STATE(102),
    [sym_descendant_selector] = STATE(102),
    [sym_sibling_selector] = STATE(102),
    [sym_adjacent_sibling_selector] = STATE(102),
    [sym_nesting_selector] = ACTIONS(233),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_string_value] = ACTIONS(233),
    [sym_identifier] = ACTIONS(33),
    [sym_comment] = ACTIONS(37),
  },
  [51] = {
    [sym_identifier] = ACTIONS(235),
    [sym_comment] = ACTIONS(37),
  },
  [52] = {
    [sym_identifier] = ACTIONS(237),
    [sym_comment] = ACTIONS(37),
  },
  [53] = {
    [sym_identifier] = ACTIONS(239),
    [sym_comment] = ACTIONS(37),
  },
  [54] = {
    [sym_identifier] = ACTIONS(241),
    [sym_comment] = ACTIONS(37),
  },
  [55] = {
    [sym_identifier] = ACTIONS(243),
    [sym_comment] = ACTIONS(37),
  },
  [56] = {
    [sym__selector] = STATE(108),
    [sym_universal_selector] = STATE(108),
    [sym_class_selector] = STATE(108),
    [sym_pseudo_class_selector] = STATE(108),
    [sym_pseudo_element_selector] = STATE(108),
    [sym_id_selector] = STATE(108),
    [sym_attribute_selector] = STATE(108),
    [sym_child_selector] = STATE(108),
    [sym_descendant_selector] = STATE(108),
    [sym_sibling_selector] = STATE(108),
    [sym_adjacent_sibling_selector] = STATE(108),
    [sym_nesting_selector] = ACTIONS(245),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_string_value] = ACTIONS(245),
    [sym_identifier] = ACTIONS(33),
    [sym_comment] = ACTIONS(37),
  },
  [57] = {
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
    [sym_nesting_selector] = ACTIONS(247),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_string_value] = ACTIONS(247),
    [sym_identifier] = ACTIONS(33),
    [sym_comment] = ACTIONS(37),
  },
  [58] = {
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
    [sym_nesting_selector] = ACTIONS(249),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_string_value] = ACTIONS(249),
    [sym_identifier] = ACTIONS(33),
    [sym_comment] = ACTIONS(37),
  },
  [59] = {
    [aux_sym_selectors_repeat1] = STATE(111),
    [anon_sym_COMMA] = ACTIONS(105),
    [anon_sym_LBRACE] = ACTIONS(251),
    [sym_comment] = ACTIONS(37),
  },
  [60] = {
    [sym_import_statement] = STATE(60),
    [sym_media_statement] = STATE(60),
    [sym_charset_statement] = STATE(60),
    [sym_namespace_statement] = STATE(60),
    [sym_keyframes_statement] = STATE(60),
    [sym_supports_statement] = STATE(60),
    [sym_at_rule] = STATE(60),
    [sym_rule_set] = STATE(60),
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
    [aux_sym_stylesheet_repeat1] = STATE(60),
    [ts_builtin_sym_end] = ACTIONS(253),
    [anon_sym_ATimport] = ACTIONS(255),
    [anon_sym_ATmedia] = ACTIONS(258),
    [anon_sym_ATcharset] = ACTIONS(261),
    [anon_sym_ATnamespace] = ACTIONS(264),
    [anon_sym_ATkeyframes] = ACTIONS(267),
    [anon_sym_ATsupports] = ACTIONS(270),
    [sym_nesting_selector] = ACTIONS(273),
    [anon_sym_STAR] = ACTIONS(276),
    [anon_sym_DOT] = ACTIONS(279),
    [anon_sym_COLON] = ACTIONS(282),
    [anon_sym_COLON_COLON] = ACTIONS(285),
    [anon_sym_POUND] = ACTIONS(288),
    [anon_sym_LBRACK] = ACTIONS(291),
    [sym_string_value] = ACTIONS(273),
    [sym_identifier] = ACTIONS(294),
    [sym_at_keyword] = ACTIONS(297),
    [sym_comment] = ACTIONS(37),
  },
  [61] = {
    [anon_sym_SEMI] = ACTIONS(300),
    [anon_sym_STAR] = ACTIONS(300),
    [anon_sym_RBRACK] = ACTIONS(300),
    [anon_sym_PLUS] = ACTIONS(300),
    [anon_sym_RPAREN] = ACTIONS(300),
    [anon_sym_LPAREN2] = ACTIONS(300),
    [anon_sym_not] = ACTIONS(302),
    [anon_sym_selector] = ACTIONS(302),
    [anon_sym_DASH] = ACTIONS(302),
    [anon_sym_SLASH] = ACTIONS(302),
    [sym_identifier] = ACTIONS(302),
    [sym_comment] = ACTIONS(37),
  },
  [62] = {
    [anon_sym_STAR] = ACTIONS(177),
    [anon_sym_PLUS] = ACTIONS(177),
    [anon_sym_RPAREN] = ACTIONS(304),
    [anon_sym_DASH] = ACTIONS(177),
    [anon_sym_SLASH] = ACTIONS(179),
    [sym_comment] = ACTIONS(37),
  },
  [63] = {
    [anon_sym_SEMI] = ACTIONS(306),
    [anon_sym_LBRACE] = ACTIONS(306),
    [anon_sym_STAR] = ACTIONS(306),
    [anon_sym_RBRACK] = ACTIONS(306),
    [anon_sym_PLUS] = ACTIONS(306),
    [anon_sym_RPAREN] = ACTIONS(306),
    [anon_sym_LPAREN2] = ACTIONS(306),
    [anon_sym_not] = ACTIONS(308),
    [anon_sym_selector] = ACTIONS(308),
    [anon_sym_DASH] = ACTIONS(308),
    [anon_sym_SLASH] = ACTIONS(308),
    [sym_identifier] = ACTIONS(308),
    [sym_comment] = ACTIONS(37),
  },
  [64] = {
    [anon_sym_SEMI] = ACTIONS(310),
    [anon_sym_STAR] = ACTIONS(310),
    [anon_sym_RBRACK] = ACTIONS(310),
    [anon_sym_PLUS] = ACTIONS(310),
    [anon_sym_RPAREN] = ACTIONS(310),
    [anon_sym_LPAREN2] = ACTIONS(310),
    [anon_sym_not] = ACTIONS(312),
    [anon_sym_selector] = ACTIONS(312),
    [anon_sym_DASH] = ACTIONS(312),
    [anon_sym_SLASH] = ACTIONS(312),
    [sym_identifier] = ACTIONS(312),
    [sym_comment] = ACTIONS(37),
  },
  [65] = {
    [sym__value] = STATE(119),
    [sym_parenthesized_value] = STATE(119),
    [sym_color_value] = STATE(119),
    [sym_integer_value] = STATE(119),
    [sym_float_value] = STATE(119),
    [sym_call_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(120),
    [anon_sym_POUND] = ACTIONS(314),
    [anon_sym_RPAREN] = ACTIONS(316),
    [anon_sym_LPAREN2] = ACTIONS(318),
    [sym_string_value] = ACTIONS(320),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(322),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(324),
    [sym_identifier] = ACTIONS(326),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(328),
  },
  [66] = {
    [anon_sym_SEMI] = ACTIONS(330),
    [anon_sym_STAR] = ACTIONS(330),
    [anon_sym_RBRACK] = ACTIONS(330),
    [anon_sym_PLUS] = ACTIONS(330),
    [anon_sym_RPAREN] = ACTIONS(330),
    [anon_sym_LPAREN2] = ACTIONS(330),
    [anon_sym_not] = ACTIONS(332),
    [anon_sym_selector] = ACTIONS(332),
    [anon_sym_DASH] = ACTIONS(332),
    [anon_sym_SLASH] = ACTIONS(332),
    [sym_identifier] = ACTIONS(332),
    [sym_comment] = ACTIONS(37),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(334),
    [anon_sym_ATimport] = ACTIONS(336),
    [anon_sym_ATmedia] = ACTIONS(336),
    [anon_sym_ATcharset] = ACTIONS(336),
    [anon_sym_ATnamespace] = ACTIONS(336),
    [anon_sym_ATkeyframes] = ACTIONS(336),
    [anon_sym_RBRACE] = ACTIONS(334),
    [anon_sym_ATsupports] = ACTIONS(336),
    [sym_nesting_selector] = ACTIONS(334),
    [anon_sym_STAR] = ACTIONS(334),
    [anon_sym_DOT] = ACTIONS(334),
    [anon_sym_COLON] = ACTIONS(336),
    [anon_sym_COLON_COLON] = ACTIONS(334),
    [anon_sym_POUND] = ACTIONS(334),
    [anon_sym_LBRACK] = ACTIONS(334),
    [sym_string_value] = ACTIONS(334),
    [sym_identifier] = ACTIONS(334),
    [sym_at_keyword] = ACTIONS(336),
    [sym_comment] = ACTIONS(37),
  },
  [68] = {
    [sym__value] = STATE(121),
    [sym_parenthesized_value] = STATE(121),
    [sym_color_value] = STATE(121),
    [sym_integer_value] = STATE(121),
    [sym_float_value] = STATE(121),
    [sym_call_expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [anon_sym_POUND] = ACTIONS(39),
    [anon_sym_LPAREN2] = ACTIONS(41),
    [sym_string_value] = ACTIONS(338),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(45),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(47),
    [sym_identifier] = ACTIONS(49),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(340),
  },
  [69] = {
    [sym__query] = STATE(74),
    [sym_feature_query] = STATE(74),
    [sym_parenthesized_query] = STATE(74),
    [sym_binary_query] = STATE(74),
    [sym_negated_query] = STATE(74),
    [sym_selector_query] = STATE(74),
    [anon_sym_LPAREN2] = ACTIONS(53),
    [anon_sym_not] = ACTIONS(155),
    [anon_sym_selector] = ACTIONS(57),
    [sym_identifier] = ACTIONS(59),
    [sym_comment] = ACTIONS(37),
  },
  [70] = {
    [aux_sym_import_statement_repeat1] = STATE(125),
    [anon_sym_COMMA] = ACTIONS(342),
    [anon_sym_SEMI] = ACTIONS(344),
    [anon_sym_and] = ACTIONS(346),
    [anon_sym_or] = ACTIONS(346),
    [sym_comment] = ACTIONS(37),
  },
  [71] = {
    [sym__query] = STATE(74),
    [sym_feature_query] = STATE(74),
    [sym_parenthesized_query] = STATE(74),
    [sym_binary_query] = STATE(74),
    [sym_negated_query] = STATE(74),
    [sym_selector_query] = STATE(74),
    [anon_sym_LPAREN2] = ACTIONS(53),
    [anon_sym_not] = ACTIONS(159),
    [anon_sym_selector] = ACTIONS(57),
    [sym_identifier] = ACTIONS(59),
    [sym_comment] = ACTIONS(37),
  },
  [72] = {
    [anon_sym_COLON] = ACTIONS(348),
    [anon_sym_RPAREN] = ACTIONS(165),
    [anon_sym_and] = ACTIONS(165),
    [anon_sym_or] = ACTIONS(165),
    [sym_comment] = ACTIONS(37),
  },
  [73] = {
    [anon_sym_RPAREN] = ACTIONS(350),
    [anon_sym_and] = ACTIONS(352),
    [anon_sym_or] = ACTIONS(352),
    [sym_comment] = ACTIONS(37),
  },
  [74] = {
    [anon_sym_COMMA] = ACTIONS(354),
    [anon_sym_SEMI] = ACTIONS(354),
    [anon_sym_LBRACE] = ACTIONS(354),
    [anon_sym_RPAREN] = ACTIONS(354),
    [anon_sym_and] = ACTIONS(354),
    [anon_sym_or] = ACTIONS(354),
    [sym_comment] = ACTIONS(37),
  },
  [75] = {
    [sym__selector] = STATE(129),
    [sym_universal_selector] = STATE(129),
    [sym_class_selector] = STATE(129),
    [sym_pseudo_class_selector] = STATE(129),
    [sym_pseudo_element_selector] = STATE(129),
    [sym_id_selector] = STATE(129),
    [sym_attribute_selector] = STATE(129),
    [sym_child_selector] = STATE(129),
    [sym_descendant_selector] = STATE(129),
    [sym_sibling_selector] = STATE(129),
    [sym_adjacent_sibling_selector] = STATE(129),
    [sym_nesting_selector] = ACTIONS(356),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_string_value] = ACTIONS(356),
    [sym_identifier] = ACTIONS(33),
    [sym_comment] = ACTIONS(37),
  },
  [76] = {
    [sym__query] = STATE(130),
    [sym_feature_query] = STATE(130),
    [sym_parenthesized_query] = STATE(130),
    [sym_binary_query] = STATE(130),
    [sym_negated_query] = STATE(130),
    [sym_selector_query] = STATE(130),
    [anon_sym_LPAREN2] = ACTIONS(53),
    [anon_sym_not] = ACTIONS(55),
    [anon_sym_selector] = ACTIONS(57),
    [sym_identifier] = ACTIONS(59),
    [sym_comment] = ACTIONS(37),
  },
  [77] = {
    [sym__query] = STATE(131),
    [sym_feature_query] = STATE(131),
    [sym_parenthesized_query] = STATE(131),
    [sym_binary_query] = STATE(131),
    [sym_negated_query] = STATE(131),
    [sym_selector_query] = STATE(131),
    [anon_sym_LPAREN2] = ACTIONS(53),
    [anon_sym_not] = ACTIONS(55),
    [anon_sym_selector] = ACTIONS(57),
    [sym_identifier] = ACTIONS(59),
    [sym_comment] = ACTIONS(37),
  },
  [78] = {
    [ts_builtin_sym_end] = ACTIONS(358),
    [anon_sym_ATimport] = ACTIONS(360),
    [anon_sym_ATmedia] = ACTIONS(360),
    [anon_sym_ATcharset] = ACTIONS(360),
    [anon_sym_ATnamespace] = ACTIONS(360),
    [anon_sym_ATkeyframes] = ACTIONS(360),
    [anon_sym_RBRACE] = ACTIONS(358),
    [anon_sym_ATsupports] = ACTIONS(360),
    [sym_nesting_selector] = ACTIONS(358),
    [anon_sym_STAR] = ACTIONS(358),
    [anon_sym_DOT] = ACTIONS(358),
    [anon_sym_COLON] = ACTIONS(360),
    [anon_sym_COLON_COLON] = ACTIONS(358),
    [anon_sym_POUND] = ACTIONS(358),
    [anon_sym_LBRACK] = ACTIONS(358),
    [sym_string_value] = ACTIONS(358),
    [sym_identifier] = ACTIONS(358),
    [sym_at_keyword] = ACTIONS(360),
    [sym_comment] = ACTIONS(37),
  },
  [79] = {
    [sym_block] = STATE(132),
    [aux_sym_import_statement_repeat1] = STATE(133),
    [anon_sym_COMMA] = ACTIONS(167),
    [anon_sym_LBRACE] = ACTIONS(97),
    [sym_comment] = ACTIONS(37),
  },
  [80] = {
    [ts_builtin_sym_end] = ACTIONS(362),
    [anon_sym_ATimport] = ACTIONS(364),
    [anon_sym_ATmedia] = ACTIONS(364),
    [anon_sym_ATcharset] = ACTIONS(364),
    [anon_sym_ATnamespace] = ACTIONS(364),
    [anon_sym_ATkeyframes] = ACTIONS(364),
    [anon_sym_RBRACE] = ACTIONS(362),
    [anon_sym_ATsupports] = ACTIONS(364),
    [sym_nesting_selector] = ACTIONS(362),
    [anon_sym_STAR] = ACTIONS(362),
    [anon_sym_DOT] = ACTIONS(362),
    [anon_sym_COLON] = ACTIONS(364),
    [anon_sym_COLON_COLON] = ACTIONS(362),
    [anon_sym_POUND] = ACTIONS(362),
    [anon_sym_LBRACK] = ACTIONS(362),
    [sym_string_value] = ACTIONS(362),
    [sym_identifier] = ACTIONS(362),
    [sym_at_keyword] = ACTIONS(364),
    [sym_comment] = ACTIONS(37),
  },
  [81] = {
    [sym__value] = STATE(121),
    [sym_parenthesized_value] = STATE(121),
    [sym_color_value] = STATE(121),
    [sym_integer_value] = STATE(121),
    [sym_float_value] = STATE(121),
    [sym_call_expression] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [anon_sym_POUND] = ACTIONS(39),
    [anon_sym_LPAREN2] = ACTIONS(41),
    [sym_string_value] = ACTIONS(338),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(63),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(65),
    [sym_identifier] = ACTIONS(49),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(340),
  },
  [82] = {
    [ts_builtin_sym_end] = ACTIONS(366),
    [anon_sym_ATimport] = ACTIONS(368),
    [anon_sym_ATmedia] = ACTIONS(368),
    [anon_sym_ATcharset] = ACTIONS(368),
    [anon_sym_ATnamespace] = ACTIONS(368),
    [anon_sym_ATkeyframes] = ACTIONS(368),
    [anon_sym_RBRACE] = ACTIONS(366),
    [anon_sym_ATsupports] = ACTIONS(368),
    [sym_nesting_selector] = ACTIONS(366),
    [anon_sym_STAR] = ACTIONS(366),
    [anon_sym_DOT] = ACTIONS(366),
    [anon_sym_COLON] = ACTIONS(368),
    [anon_sym_COLON_COLON] = ACTIONS(366),
    [anon_sym_POUND] = ACTIONS(366),
    [anon_sym_LBRACK] = ACTIONS(366),
    [sym_string_value] = ACTIONS(366),
    [sym_identifier] = ACTIONS(366),
    [sym_at_keyword] = ACTIONS(368),
    [sym_comment] = ACTIONS(37),
  },
  [83] = {
    [anon_sym_SEMI] = ACTIONS(370),
    [sym_comment] = ACTIONS(37),
  },
  [84] = {
    [sym_arguments] = STATE(66),
    [anon_sym_LPAREN] = ACTIONS(147),
    [sym_comment] = ACTIONS(37),
  },
  [85] = {
    [sym_keyframe_block] = STATE(137),
    [sym_integer_value] = STATE(136),
    [aux_sym_keyframe_block_list_repeat1] = STATE(137),
    [anon_sym_RBRACE] = ACTIONS(372),
    [sym_from] = ACTIONS(374),
    [sym_to] = ACTIONS(374),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(376),
    [sym_comment] = ACTIONS(37),
  },
  [86] = {
    [ts_builtin_sym_end] = ACTIONS(378),
    [anon_sym_ATimport] = ACTIONS(380),
    [anon_sym_ATmedia] = ACTIONS(380),
    [anon_sym_ATcharset] = ACTIONS(380),
    [anon_sym_ATnamespace] = ACTIONS(380),
    [anon_sym_ATkeyframes] = ACTIONS(380),
    [anon_sym_RBRACE] = ACTIONS(378),
    [anon_sym_ATsupports] = ACTIONS(380),
    [sym_nesting_selector] = ACTIONS(378),
    [anon_sym_STAR] = ACTIONS(378),
    [anon_sym_DOT] = ACTIONS(378),
    [anon_sym_COLON] = ACTIONS(380),
    [anon_sym_COLON_COLON] = ACTIONS(378),
    [anon_sym_POUND] = ACTIONS(378),
    [anon_sym_LBRACK] = ACTIONS(378),
    [sym_string_value] = ACTIONS(378),
    [sym_identifier] = ACTIONS(378),
    [sym_at_keyword] = ACTIONS(380),
    [sym_comment] = ACTIONS(37),
  },
  [87] = {
    [sym__query] = STATE(131),
    [sym_feature_query] = STATE(131),
    [sym_parenthesized_query] = STATE(131),
    [sym_binary_query] = STATE(131),
    [sym_negated_query] = STATE(131),
    [sym_selector_query] = STATE(131),
    [anon_sym_LPAREN2] = ACTIONS(53),
    [anon_sym_not] = ACTIONS(75),
    [anon_sym_selector] = ACTIONS(57),
    [sym_identifier] = ACTIONS(59),
    [sym_comment] = ACTIONS(37),
  },
  [88] = {
    [ts_builtin_sym_end] = ACTIONS(382),
    [anon_sym_ATimport] = ACTIONS(384),
    [anon_sym_ATmedia] = ACTIONS(384),
    [anon_sym_ATcharset] = ACTIONS(384),
    [anon_sym_ATnamespace] = ACTIONS(384),
    [anon_sym_ATkeyframes] = ACTIONS(384),
    [anon_sym_RBRACE] = ACTIONS(382),
    [anon_sym_ATsupports] = ACTIONS(384),
    [sym_nesting_selector] = ACTIONS(382),
    [anon_sym_STAR] = ACTIONS(382),
    [anon_sym_DOT] = ACTIONS(382),
    [anon_sym_COLON] = ACTIONS(384),
    [anon_sym_COLON_COLON] = ACTIONS(382),
    [anon_sym_POUND] = ACTIONS(382),
    [anon_sym_LBRACK] = ACTIONS(382),
    [sym_string_value] = ACTIONS(382),
    [sym_identifier] = ACTIONS(382),
    [sym_at_keyword] = ACTIONS(384),
    [sym_comment] = ACTIONS(37),
  },
  [89] = {
    [sym__selector] = STATE(142),
    [sym_universal_selector] = STATE(142),
    [sym_class_selector] = STATE(142),
    [sym_pseudo_class_selector] = STATE(142),
    [sym_pseudo_element_selector] = STATE(142),
    [sym_id_selector] = STATE(142),
    [sym_attribute_selector] = STATE(142),
    [sym_child_selector] = STATE(142),
    [sym_descendant_selector] = STATE(142),
    [sym_sibling_selector] = STATE(142),
    [sym_adjacent_sibling_selector] = STATE(142),
    [sym__value] = STATE(119),
    [sym_parenthesized_value] = STATE(119),
    [sym_color_value] = STATE(119),
    [sym_integer_value] = STATE(119),
    [sym_float_value] = STATE(119),
    [sym_call_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(143),
    [sym_nesting_selector] = ACTIONS(386),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(388),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(390),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(392),
    [anon_sym_LPAREN2] = ACTIONS(318),
    [sym_string_value] = ACTIONS(394),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(322),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(324),
    [sym_identifier] = ACTIONS(396),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(328),
  },
  [90] = {
    [sym__descendant_operator] = ACTIONS(398),
    [anon_sym_COMMA] = ACTIONS(398),
    [anon_sym_LBRACE] = ACTIONS(398),
    [anon_sym_DOT] = ACTIONS(398),
    [anon_sym_COLON] = ACTIONS(400),
    [anon_sym_COLON_COLON] = ACTIONS(398),
    [anon_sym_POUND] = ACTIONS(398),
    [anon_sym_LBRACK] = ACTIONS(398),
    [anon_sym_GT] = ACTIONS(398),
    [anon_sym_TILDE] = ACTIONS(398),
    [anon_sym_PLUS] = ACTIONS(398),
    [anon_sym_RPAREN] = ACTIONS(398),
    [sym_comment] = ACTIONS(37),
  },
  [91] = {
    [sym__value] = STATE(144),
    [sym_parenthesized_value] = STATE(144),
    [sym_color_value] = STATE(144),
    [sym_integer_value] = STATE(144),
    [sym_float_value] = STATE(144),
    [sym_call_expression] = STATE(144),
    [sym_binary_expression] = STATE(144),
    [anon_sym_POUND] = ACTIONS(39),
    [anon_sym_LPAREN2] = ACTIONS(41),
    [sym_string_value] = ACTIONS(402),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(63),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(65),
    [sym_identifier] = ACTIONS(49),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(404),
  },
  [92] = {
    [sym__descendant_operator] = ACTIONS(406),
    [anon_sym_COMMA] = ACTIONS(406),
    [anon_sym_LBRACE] = ACTIONS(406),
    [anon_sym_DOT] = ACTIONS(406),
    [anon_sym_COLON] = ACTIONS(408),
    [anon_sym_COLON_COLON] = ACTIONS(406),
    [anon_sym_POUND] = ACTIONS(406),
    [anon_sym_LBRACK] = ACTIONS(406),
    [anon_sym_GT] = ACTIONS(406),
    [anon_sym_TILDE] = ACTIONS(406),
    [anon_sym_PLUS] = ACTIONS(406),
    [anon_sym_RPAREN] = ACTIONS(406),
    [sym_comment] = ACTIONS(37),
  },
  [93] = {
    [ts_builtin_sym_end] = ACTIONS(410),
    [anon_sym_ATimport] = ACTIONS(412),
    [anon_sym_ATmedia] = ACTIONS(412),
    [anon_sym_ATcharset] = ACTIONS(412),
    [anon_sym_ATnamespace] = ACTIONS(412),
    [anon_sym_ATkeyframes] = ACTIONS(412),
    [anon_sym_RBRACE] = ACTIONS(410),
    [anon_sym_ATsupports] = ACTIONS(412),
    [sym_nesting_selector] = ACTIONS(410),
    [anon_sym_STAR] = ACTIONS(410),
    [anon_sym_DOT] = ACTIONS(410),
    [anon_sym_COLON] = ACTIONS(412),
    [anon_sym_COLON_COLON] = ACTIONS(410),
    [anon_sym_POUND] = ACTIONS(410),
    [anon_sym_LBRACK] = ACTIONS(410),
    [sym_string_value] = ACTIONS(410),
    [sym_identifier] = ACTIONS(410),
    [sym_at_keyword] = ACTIONS(412),
    [sym_comment] = ACTIONS(37),
  },
  [94] = {
    [sym__descendant_operator] = ACTIONS(91),
    [anon_sym_COMMA] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(91),
    [anon_sym_DOT] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(414),
    [anon_sym_COLON_COLON] = ACTIONS(91),
    [anon_sym_POUND] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_GT] = ACTIONS(91),
    [anon_sym_TILDE] = ACTIONS(91),
    [anon_sym_PLUS] = ACTIONS(91),
    [sym_comment] = ACTIONS(37),
  },
  [95] = {
    [anon_sym_RBRACE] = ACTIONS(416),
    [sym_comment] = ACTIONS(37),
  },
  [96] = {
    [sym_import_statement] = STATE(148),
    [sym_media_statement] = STATE(148),
    [sym_charset_statement] = STATE(148),
    [sym_namespace_statement] = STATE(148),
    [sym_keyframes_statement] = STATE(148),
    [sym_supports_statement] = STATE(148),
    [sym_at_rule] = STATE(148),
    [sym_rule_set] = STATE(148),
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
    [sym_declaration] = STATE(148),
    [sym_last_declaration] = STATE(147),
    [aux_sym_block_repeat1] = STATE(148),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATmedia] = ACTIONS(9),
    [anon_sym_ATcharset] = ACTIONS(11),
    [anon_sym_ATnamespace] = ACTIONS(13),
    [anon_sym_ATkeyframes] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(416),
    [anon_sym_ATsupports] = ACTIONS(17),
    [sym_nesting_selector] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_string_value] = ACTIONS(19),
    [sym_identifier] = ACTIONS(219),
    [sym_at_keyword] = ACTIONS(35),
    [sym_comment] = ACTIONS(37),
  },
  [97] = {
    [sym__query] = STATE(149),
    [sym_feature_query] = STATE(149),
    [sym_parenthesized_query] = STATE(149),
    [sym_binary_query] = STATE(149),
    [sym_negated_query] = STATE(149),
    [sym_selector_query] = STATE(149),
    [anon_sym_LPAREN2] = ACTIONS(53),
    [anon_sym_not] = ACTIONS(99),
    [anon_sym_selector] = ACTIONS(57),
    [sym_identifier] = ACTIONS(59),
    [sym_comment] = ACTIONS(37),
  },
  [98] = {
    [ts_builtin_sym_end] = ACTIONS(418),
    [anon_sym_ATimport] = ACTIONS(420),
    [anon_sym_ATmedia] = ACTIONS(420),
    [anon_sym_ATcharset] = ACTIONS(420),
    [anon_sym_ATnamespace] = ACTIONS(420),
    [anon_sym_ATkeyframes] = ACTIONS(420),
    [anon_sym_RBRACE] = ACTIONS(418),
    [anon_sym_ATsupports] = ACTIONS(420),
    [sym_nesting_selector] = ACTIONS(418),
    [anon_sym_STAR] = ACTIONS(418),
    [anon_sym_DOT] = ACTIONS(418),
    [anon_sym_COLON] = ACTIONS(420),
    [anon_sym_COLON_COLON] = ACTIONS(418),
    [anon_sym_POUND] = ACTIONS(418),
    [anon_sym_LBRACK] = ACTIONS(418),
    [sym_string_value] = ACTIONS(418),
    [sym_identifier] = ACTIONS(418),
    [sym_at_keyword] = ACTIONS(420),
    [sym_comment] = ACTIONS(37),
  },
  [99] = {
    [sym__query] = STATE(131),
    [sym_feature_query] = STATE(131),
    [sym_parenthesized_query] = STATE(131),
    [sym_binary_query] = STATE(131),
    [sym_negated_query] = STATE(131),
    [sym_selector_query] = STATE(131),
    [anon_sym_LPAREN2] = ACTIONS(53),
    [anon_sym_not] = ACTIONS(99),
    [anon_sym_selector] = ACTIONS(57),
    [sym_identifier] = ACTIONS(59),
    [sym_comment] = ACTIONS(37),
  },
  [100] = {
    [sym_block] = STATE(150),
    [aux_sym_import_statement_repeat1] = STATE(151),
    [anon_sym_COMMA] = ACTIONS(221),
    [anon_sym_SEMI] = ACTIONS(422),
    [anon_sym_LBRACE] = ACTIONS(97),
    [sym_comment] = ACTIONS(37),
  },
  [101] = {
    [sym__descendant_operator] = ACTIONS(424),
    [anon_sym_COMMA] = ACTIONS(424),
    [anon_sym_LBRACE] = ACTIONS(424),
    [anon_sym_DOT] = ACTIONS(109),
    [anon_sym_COLON] = ACTIONS(426),
    [anon_sym_COLON_COLON] = ACTIONS(424),
    [anon_sym_POUND] = ACTIONS(424),
    [anon_sym_LBRACK] = ACTIONS(424),
    [anon_sym_GT] = ACTIONS(424),
    [anon_sym_TILDE] = ACTIONS(424),
    [anon_sym_PLUS] = ACTIONS(424),
    [anon_sym_RPAREN] = ACTIONS(424),
    [sym_comment] = ACTIONS(37),
  },
  [102] = {
    [sym__descendant_operator] = ACTIONS(103),
    [anon_sym_COMMA] = ACTIONS(428),
    [anon_sym_LBRACE] = ACTIONS(428),
    [anon_sym_DOT] = ACTIONS(109),
    [anon_sym_COLON] = ACTIONS(111),
    [anon_sym_COLON_COLON] = ACTIONS(113),
    [anon_sym_POUND] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_GT] = ACTIONS(119),
    [anon_sym_TILDE] = ACTIONS(121),
    [anon_sym_PLUS] = ACTIONS(123),
    [sym_comment] = ACTIONS(37),
  },
  [103] = {
    [sym__descendant_operator] = ACTIONS(430),
    [anon_sym_COMMA] = ACTIONS(430),
    [anon_sym_LBRACE] = ACTIONS(430),
    [anon_sym_DOT] = ACTIONS(430),
    [anon_sym_COLON] = ACTIONS(432),
    [anon_sym_COLON_COLON] = ACTIONS(430),
    [anon_sym_POUND] = ACTIONS(430),
    [anon_sym_LBRACK] = ACTIONS(430),
    [anon_sym_GT] = ACTIONS(430),
    [anon_sym_TILDE] = ACTIONS(430),
    [anon_sym_PLUS] = ACTIONS(430),
    [anon_sym_RPAREN] = ACTIONS(430),
    [sym_comment] = ACTIONS(37),
  },
  [104] = {
    [sym_pseudo_class_arguments] = STATE(152),
    [sym__descendant_operator] = ACTIONS(434),
    [anon_sym_COMMA] = ACTIONS(434),
    [anon_sym_LBRACE] = ACTIONS(434),
    [anon_sym_DOT] = ACTIONS(434),
    [anon_sym_COLON] = ACTIONS(436),
    [anon_sym_COLON_COLON] = ACTIONS(434),
    [anon_sym_POUND] = ACTIONS(434),
    [anon_sym_LBRACK] = ACTIONS(434),
    [anon_sym_GT] = ACTIONS(434),
    [anon_sym_TILDE] = ACTIONS(434),
    [anon_sym_PLUS] = ACTIONS(434),
    [anon_sym_LPAREN] = ACTIONS(199),
    [anon_sym_RPAREN] = ACTIONS(434),
    [sym_comment] = ACTIONS(37),
  },
  [105] = {
    [sym__descendant_operator] = ACTIONS(438),
    [anon_sym_COMMA] = ACTIONS(438),
    [anon_sym_LBRACE] = ACTIONS(438),
    [anon_sym_DOT] = ACTIONS(438),
    [anon_sym_COLON] = ACTIONS(440),
    [anon_sym_COLON_COLON] = ACTIONS(438),
    [anon_sym_POUND] = ACTIONS(438),
    [anon_sym_LBRACK] = ACTIONS(438),
    [anon_sym_GT] = ACTIONS(438),
    [anon_sym_TILDE] = ACTIONS(438),
    [anon_sym_PLUS] = ACTIONS(438),
    [anon_sym_RPAREN] = ACTIONS(438),
    [sym_comment] = ACTIONS(37),
  },
  [106] = {
    [sym__descendant_operator] = ACTIONS(442),
    [anon_sym_COMMA] = ACTIONS(442),
    [anon_sym_LBRACE] = ACTIONS(442),
    [anon_sym_DOT] = ACTIONS(442),
    [anon_sym_COLON] = ACTIONS(444),
    [anon_sym_COLON_COLON] = ACTIONS(442),
    [anon_sym_POUND] = ACTIONS(442),
    [anon_sym_LBRACK] = ACTIONS(442),
    [anon_sym_GT] = ACTIONS(442),
    [anon_sym_TILDE] = ACTIONS(442),
    [anon_sym_PLUS] = ACTIONS(442),
    [anon_sym_RPAREN] = ACTIONS(442),
    [sym_comment] = ACTIONS(37),
  },
  [107] = {
    [anon_sym_EQ] = ACTIONS(446),
    [anon_sym_TILDE_EQ] = ACTIONS(446),
    [anon_sym_CARET_EQ] = ACTIONS(446),
    [anon_sym_PIPE_EQ] = ACTIONS(446),
    [anon_sym_STAR_EQ] = ACTIONS(446),
    [anon_sym_DOLLAR_EQ] = ACTIONS(446),
    [anon_sym_RBRACK] = ACTIONS(448),
    [sym_comment] = ACTIONS(37),
  },
  [108] = {
    [sym__descendant_operator] = ACTIONS(450),
    [anon_sym_COMMA] = ACTIONS(450),
    [anon_sym_LBRACE] = ACTIONS(450),
    [anon_sym_DOT] = ACTIONS(109),
    [anon_sym_COLON] = ACTIONS(452),
    [anon_sym_COLON_COLON] = ACTIONS(450),
    [anon_sym_POUND] = ACTIONS(450),
    [anon_sym_LBRACK] = ACTIONS(450),
    [anon_sym_GT] = ACTIONS(450),
    [anon_sym_TILDE] = ACTIONS(450),
    [anon_sym_PLUS] = ACTIONS(450),
    [anon_sym_RPAREN] = ACTIONS(450),
    [sym_comment] = ACTIONS(37),
  },
  [109] = {
    [sym__descendant_operator] = ACTIONS(454),
    [anon_sym_COMMA] = ACTIONS(454),
    [anon_sym_LBRACE] = ACTIONS(454),
    [anon_sym_DOT] = ACTIONS(109),
    [anon_sym_COLON] = ACTIONS(456),
    [anon_sym_COLON_COLON] = ACTIONS(454),
    [anon_sym_POUND] = ACTIONS(454),
    [anon_sym_LBRACK] = ACTIONS(454),
    [anon_sym_GT] = ACTIONS(454),
    [anon_sym_TILDE] = ACTIONS(454),
    [anon_sym_PLUS] = ACTIONS(454),
    [anon_sym_RPAREN] = ACTIONS(454),
    [sym_comment] = ACTIONS(37),
  },
  [110] = {
    [sym__descendant_operator] = ACTIONS(458),
    [anon_sym_COMMA] = ACTIONS(458),
    [anon_sym_LBRACE] = ACTIONS(458),
    [anon_sym_DOT] = ACTIONS(109),
    [anon_sym_COLON] = ACTIONS(460),
    [anon_sym_COLON_COLON] = ACTIONS(458),
    [anon_sym_POUND] = ACTIONS(458),
    [anon_sym_LBRACK] = ACTIONS(458),
    [anon_sym_GT] = ACTIONS(458),
    [anon_sym_TILDE] = ACTIONS(458),
    [anon_sym_PLUS] = ACTIONS(458),
    [anon_sym_RPAREN] = ACTIONS(458),
    [sym_comment] = ACTIONS(37),
  },
  [111] = {
    [aux_sym_selectors_repeat1] = STATE(111),
    [anon_sym_COMMA] = ACTIONS(462),
    [anon_sym_LBRACE] = ACTIONS(428),
    [sym_comment] = ACTIONS(37),
  },
  [112] = {
    [anon_sym_SEMI] = ACTIONS(465),
    [anon_sym_STAR] = ACTIONS(465),
    [anon_sym_RBRACK] = ACTIONS(465),
    [anon_sym_PLUS] = ACTIONS(465),
    [anon_sym_RPAREN] = ACTIONS(465),
    [anon_sym_LPAREN2] = ACTIONS(465),
    [anon_sym_not] = ACTIONS(467),
    [anon_sym_selector] = ACTIONS(467),
    [anon_sym_DASH] = ACTIONS(467),
    [anon_sym_SLASH] = ACTIONS(467),
    [sym_identifier] = ACTIONS(467),
    [sym_comment] = ACTIONS(37),
  },
  [113] = {
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH] = ACTIONS(469),
    [sym_comment] = ACTIONS(37),
  },
  [114] = {
    [anon_sym_SEMI] = ACTIONS(471),
    [anon_sym_STAR] = ACTIONS(471),
    [anon_sym_RBRACK] = ACTIONS(471),
    [anon_sym_PLUS] = ACTIONS(471),
    [anon_sym_RPAREN] = ACTIONS(471),
    [anon_sym_LPAREN2] = ACTIONS(471),
    [anon_sym_not] = ACTIONS(473),
    [anon_sym_selector] = ACTIONS(473),
    [anon_sym_DASH] = ACTIONS(473),
    [anon_sym_SLASH] = ACTIONS(473),
    [sym_identifier] = ACTIONS(473),
    [sym_comment] = ACTIONS(37),
  },
  [115] = {
    [sym__value] = STATE(156),
    [sym_parenthesized_value] = STATE(156),
    [sym_color_value] = STATE(156),
    [sym_integer_value] = STATE(156),
    [sym_float_value] = STATE(156),
    [sym_call_expression] = STATE(156),
    [sym_binary_expression] = STATE(156),
    [anon_sym_POUND] = ACTIONS(39),
    [anon_sym_LPAREN2] = ACTIONS(41),
    [sym_string_value] = ACTIONS(475),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(63),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(65),
    [sym_identifier] = ACTIONS(49),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(477),
  },
  [116] = {
    [anon_sym_COMMA] = ACTIONS(133),
    [anon_sym_SEMI] = ACTIONS(133),
    [anon_sym_RBRACE] = ACTIONS(133),
    [anon_sym_STAR] = ACTIONS(133),
    [anon_sym_POUND] = ACTIONS(133),
    [anon_sym_PLUS] = ACTIONS(135),
    [anon_sym_RPAREN] = ACTIONS(133),
    [sym_important] = ACTIONS(133),
    [anon_sym_LPAREN2] = ACTIONS(133),
    [sym_string_value] = ACTIONS(133),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(135),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(135),
    [sym_unit] = ACTIONS(479),
    [anon_sym_DASH] = ACTIONS(135),
    [anon_sym_SLASH] = ACTIONS(135),
    [sym_identifier] = ACTIONS(135),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(135),
  },
  [117] = {
    [anon_sym_COMMA] = ACTIONS(139),
    [anon_sym_SEMI] = ACTIONS(139),
    [anon_sym_RBRACE] = ACTIONS(139),
    [anon_sym_STAR] = ACTIONS(139),
    [anon_sym_POUND] = ACTIONS(139),
    [anon_sym_PLUS] = ACTIONS(141),
    [anon_sym_RPAREN] = ACTIONS(139),
    [sym_important] = ACTIONS(139),
    [anon_sym_LPAREN2] = ACTIONS(139),
    [sym_string_value] = ACTIONS(139),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(141),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(141),
    [sym_unit] = ACTIONS(481),
    [anon_sym_DASH] = ACTIONS(141),
    [anon_sym_SLASH] = ACTIONS(141),
    [sym_identifier] = ACTIONS(141),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(141),
  },
  [118] = {
    [sym_arguments] = STATE(160),
    [anon_sym_COMMA] = ACTIONS(145),
    [anon_sym_SEMI] = ACTIONS(145),
    [anon_sym_RBRACE] = ACTIONS(145),
    [anon_sym_STAR] = ACTIONS(145),
    [anon_sym_POUND] = ACTIONS(145),
    [anon_sym_PLUS] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(483),
    [anon_sym_RPAREN] = ACTIONS(145),
    [sym_important] = ACTIONS(145),
    [anon_sym_LPAREN2] = ACTIONS(149),
    [sym_string_value] = ACTIONS(145),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(149),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(149),
    [anon_sym_DASH] = ACTIONS(149),
    [anon_sym_SLASH] = ACTIONS(149),
    [sym_identifier] = ACTIONS(149),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(149),
  },
  [119] = {
    [anon_sym_COMMA] = ACTIONS(485),
    [anon_sym_STAR] = ACTIONS(487),
    [anon_sym_POUND] = ACTIONS(485),
    [anon_sym_PLUS] = ACTIONS(489),
    [anon_sym_RPAREN] = ACTIONS(485),
    [anon_sym_LPAREN2] = ACTIONS(485),
    [sym_string_value] = ACTIONS(485),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(491),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(491),
    [anon_sym_DASH] = ACTIONS(489),
    [anon_sym_SLASH] = ACTIONS(489),
    [sym_identifier] = ACTIONS(491),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(491),
  },
  [120] = {
    [sym__value] = STATE(119),
    [sym_parenthesized_value] = STATE(119),
    [sym_color_value] = STATE(119),
    [sym_integer_value] = STATE(119),
    [sym_float_value] = STATE(119),
    [sym_call_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(164),
    [aux_sym_arguments_repeat1] = STATE(165),
    [anon_sym_COMMA] = ACTIONS(493),
    [anon_sym_POUND] = ACTIONS(314),
    [anon_sym_RPAREN] = ACTIONS(495),
    [anon_sym_LPAREN2] = ACTIONS(318),
    [sym_string_value] = ACTIONS(320),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(322),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(324),
    [sym_identifier] = ACTIONS(326),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(328),
  },
  [121] = {
    [anon_sym_SEMI] = ACTIONS(497),
    [anon_sym_STAR] = ACTIONS(497),
    [anon_sym_RBRACK] = ACTIONS(497),
    [anon_sym_PLUS] = ACTIONS(497),
    [anon_sym_RPAREN] = ACTIONS(497),
    [anon_sym_LPAREN2] = ACTIONS(497),
    [anon_sym_not] = ACTIONS(499),
    [anon_sym_selector] = ACTIONS(499),
    [anon_sym_DASH] = ACTIONS(499),
    [anon_sym_SLASH] = ACTIONS(499),
    [sym_identifier] = ACTIONS(499),
    [sym_comment] = ACTIONS(37),
  },
  [122] = {
    [sym__query] = STATE(166),
    [sym_feature_query] = STATE(166),
    [sym_parenthesized_query] = STATE(166),
    [sym_binary_query] = STATE(166),
    [sym_negated_query] = STATE(166),
    [sym_selector_query] = STATE(166),
    [anon_sym_LPAREN2] = ACTIONS(53),
    [anon_sym_not] = ACTIONS(155),
    [anon_sym_selector] = ACTIONS(57),
    [sym_identifier] = ACTIONS(59),
    [sym_comment] = ACTIONS(37),
  },
  [123] = {
    [ts_builtin_sym_end] = ACTIONS(501),
    [anon_sym_ATimport] = ACTIONS(503),
    [anon_sym_ATmedia] = ACTIONS(503),
    [anon_sym_ATcharset] = ACTIONS(503),
    [anon_sym_ATnamespace] = ACTIONS(503),
    [anon_sym_ATkeyframes] = ACTIONS(503),
    [anon_sym_RBRACE] = ACTIONS(501),
    [anon_sym_ATsupports] = ACTIONS(503),
    [sym_nesting_selector] = ACTIONS(501),
    [anon_sym_STAR] = ACTIONS(501),
    [anon_sym_DOT] = ACTIONS(501),
    [anon_sym_COLON] = ACTIONS(503),
    [anon_sym_COLON_COLON] = ACTIONS(501),
    [anon_sym_POUND] = ACTIONS(501),
    [anon_sym_LBRACK] = ACTIONS(501),
    [sym_string_value] = ACTIONS(501),
    [sym_identifier] = ACTIONS(501),
    [sym_at_keyword] = ACTIONS(503),
    [sym_comment] = ACTIONS(37),
  },
  [124] = {
    [sym__query] = STATE(131),
    [sym_feature_query] = STATE(131),
    [sym_parenthesized_query] = STATE(131),
    [sym_binary_query] = STATE(131),
    [sym_negated_query] = STATE(131),
    [sym_selector_query] = STATE(131),
    [anon_sym_LPAREN2] = ACTIONS(53),
    [anon_sym_not] = ACTIONS(155),
    [anon_sym_selector] = ACTIONS(57),
    [sym_identifier] = ACTIONS(59),
    [sym_comment] = ACTIONS(37),
  },
  [125] = {
    [aux_sym_import_statement_repeat1] = STATE(168),
    [anon_sym_COMMA] = ACTIONS(342),
    [anon_sym_SEMI] = ACTIONS(505),
    [sym_comment] = ACTIONS(37),
  },
  [126] = {
    [sym__value] = STATE(169),
    [sym_parenthesized_value] = STATE(169),
    [sym_color_value] = STATE(169),
    [sym_integer_value] = STATE(169),
    [sym_float_value] = STATE(169),
    [sym_call_expression] = STATE(169),
    [sym_binary_expression] = STATE(169),
    [anon_sym_POUND] = ACTIONS(39),
    [anon_sym_LPAREN2] = ACTIONS(41),
    [sym_string_value] = ACTIONS(507),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(63),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(65),
    [sym_identifier] = ACTIONS(49),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(509),
  },
  [127] = {
    [anon_sym_COMMA] = ACTIONS(511),
    [anon_sym_SEMI] = ACTIONS(511),
    [anon_sym_LBRACE] = ACTIONS(511),
    [anon_sym_RPAREN] = ACTIONS(511),
    [anon_sym_and] = ACTIONS(511),
    [anon_sym_or] = ACTIONS(511),
    [sym_comment] = ACTIONS(37),
  },
  [128] = {
    [sym__query] = STATE(131),
    [sym_feature_query] = STATE(131),
    [sym_parenthesized_query] = STATE(131),
    [sym_binary_query] = STATE(131),
    [sym_negated_query] = STATE(131),
    [sym_selector_query] = STATE(131),
    [anon_sym_LPAREN2] = ACTIONS(53),
    [anon_sym_not] = ACTIONS(159),
    [anon_sym_selector] = ACTIONS(57),
    [sym_identifier] = ACTIONS(59),
    [sym_comment] = ACTIONS(37),
  },
  [129] = {
    [sym__descendant_operator] = ACTIONS(103),
    [anon_sym_DOT] = ACTIONS(109),
    [anon_sym_COLON] = ACTIONS(111),
    [anon_sym_COLON_COLON] = ACTIONS(113),
    [anon_sym_POUND] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_GT] = ACTIONS(119),
    [anon_sym_TILDE] = ACTIONS(121),
    [anon_sym_PLUS] = ACTIONS(123),
    [anon_sym_RPAREN] = ACTIONS(513),
    [sym_comment] = ACTIONS(37),
  },
  [130] = {
    [anon_sym_COMMA] = ACTIONS(515),
    [anon_sym_LBRACE] = ACTIONS(515),
    [anon_sym_and] = ACTIONS(169),
    [anon_sym_or] = ACTIONS(169),
    [sym_comment] = ACTIONS(37),
  },
  [131] = {
    [anon_sym_COMMA] = ACTIONS(517),
    [anon_sym_SEMI] = ACTIONS(517),
    [anon_sym_LBRACE] = ACTIONS(517),
    [anon_sym_RPAREN] = ACTIONS(517),
    [anon_sym_and] = ACTIONS(517),
    [anon_sym_or] = ACTIONS(517),
    [sym_comment] = ACTIONS(37),
  },
  [132] = {
    [ts_builtin_sym_end] = ACTIONS(519),
    [anon_sym_ATimport] = ACTIONS(521),
    [anon_sym_ATmedia] = ACTIONS(521),
    [anon_sym_ATcharset] = ACTIONS(521),
    [anon_sym_ATnamespace] = ACTIONS(521),
    [anon_sym_ATkeyframes] = ACTIONS(521),
    [anon_sym_RBRACE] = ACTIONS(519),
    [anon_sym_ATsupports] = ACTIONS(521),
    [sym_nesting_selector] = ACTIONS(519),
    [anon_sym_STAR] = ACTIONS(519),
    [anon_sym_DOT] = ACTIONS(519),
    [anon_sym_COLON] = ACTIONS(521),
    [anon_sym_COLON_COLON] = ACTIONS(519),
    [anon_sym_POUND] = ACTIONS(519),
    [anon_sym_LBRACK] = ACTIONS(519),
    [sym_string_value] = ACTIONS(519),
    [sym_identifier] = ACTIONS(519),
    [sym_at_keyword] = ACTIONS(521),
    [sym_comment] = ACTIONS(37),
  },
  [133] = {
    [aux_sym_import_statement_repeat1] = STATE(133),
    [anon_sym_COMMA] = ACTIONS(523),
    [anon_sym_LBRACE] = ACTIONS(515),
    [sym_comment] = ACTIONS(37),
  },
  [134] = {
    [ts_builtin_sym_end] = ACTIONS(526),
    [anon_sym_ATimport] = ACTIONS(528),
    [anon_sym_ATmedia] = ACTIONS(528),
    [anon_sym_ATcharset] = ACTIONS(528),
    [anon_sym_ATnamespace] = ACTIONS(528),
    [anon_sym_ATkeyframes] = ACTIONS(528),
    [anon_sym_RBRACE] = ACTIONS(526),
    [anon_sym_ATsupports] = ACTIONS(528),
    [sym_nesting_selector] = ACTIONS(526),
    [anon_sym_STAR] = ACTIONS(526),
    [anon_sym_DOT] = ACTIONS(526),
    [anon_sym_COLON] = ACTIONS(528),
    [anon_sym_COLON_COLON] = ACTIONS(526),
    [anon_sym_POUND] = ACTIONS(526),
    [anon_sym_LBRACK] = ACTIONS(526),
    [sym_string_value] = ACTIONS(526),
    [sym_identifier] = ACTIONS(526),
    [sym_at_keyword] = ACTIONS(528),
    [sym_comment] = ACTIONS(37),
  },
  [135] = {
    [ts_builtin_sym_end] = ACTIONS(530),
    [anon_sym_ATimport] = ACTIONS(532),
    [anon_sym_ATmedia] = ACTIONS(532),
    [anon_sym_ATcharset] = ACTIONS(532),
    [anon_sym_ATnamespace] = ACTIONS(532),
    [anon_sym_ATkeyframes] = ACTIONS(532),
    [anon_sym_RBRACE] = ACTIONS(530),
    [anon_sym_ATsupports] = ACTIONS(532),
    [sym_nesting_selector] = ACTIONS(530),
    [anon_sym_STAR] = ACTIONS(530),
    [anon_sym_DOT] = ACTIONS(530),
    [anon_sym_COLON] = ACTIONS(532),
    [anon_sym_COLON_COLON] = ACTIONS(530),
    [anon_sym_POUND] = ACTIONS(530),
    [anon_sym_LBRACK] = ACTIONS(530),
    [sym_string_value] = ACTIONS(530),
    [sym_identifier] = ACTIONS(530),
    [sym_at_keyword] = ACTIONS(532),
    [sym_comment] = ACTIONS(37),
  },
  [136] = {
    [sym_block] = STATE(172),
    [anon_sym_LBRACE] = ACTIONS(534),
    [sym_comment] = ACTIONS(37),
  },
  [137] = {
    [sym_keyframe_block] = STATE(174),
    [sym_integer_value] = STATE(136),
    [aux_sym_keyframe_block_list_repeat1] = STATE(174),
    [anon_sym_RBRACE] = ACTIONS(536),
    [sym_from] = ACTIONS(374),
    [sym_to] = ACTIONS(374),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(376),
    [sym_comment] = ACTIONS(37),
  },
  [138] = {
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH] = ACTIONS(538),
    [sym_identifier] = ACTIONS(540),
    [sym_comment] = ACTIONS(37),
  },
  [139] = {
    [sym__descendant_operator] = ACTIONS(542),
    [anon_sym_COMMA] = ACTIONS(542),
    [anon_sym_LBRACE] = ACTIONS(542),
    [anon_sym_DOT] = ACTIONS(542),
    [anon_sym_COLON] = ACTIONS(544),
    [anon_sym_COLON_COLON] = ACTIONS(542),
    [anon_sym_POUND] = ACTIONS(542),
    [anon_sym_LBRACK] = ACTIONS(542),
    [anon_sym_GT] = ACTIONS(542),
    [anon_sym_TILDE] = ACTIONS(542),
    [anon_sym_PLUS] = ACTIONS(542),
    [anon_sym_RPAREN] = ACTIONS(542),
    [sym_comment] = ACTIONS(37),
  },
  [140] = {
    [sym__descendant_operator] = ACTIONS(546),
    [anon_sym_COMMA] = ACTIONS(546),
    [anon_sym_STAR] = ACTIONS(548),
    [anon_sym_DOT] = ACTIONS(550),
    [anon_sym_COLON] = ACTIONS(550),
    [anon_sym_COLON_COLON] = ACTIONS(546),
    [anon_sym_POUND] = ACTIONS(546),
    [anon_sym_LBRACK] = ACTIONS(546),
    [anon_sym_GT] = ACTIONS(546),
    [anon_sym_TILDE] = ACTIONS(546),
    [anon_sym_PLUS] = ACTIONS(550),
    [anon_sym_RPAREN] = ACTIONS(546),
    [anon_sym_LPAREN2] = ACTIONS(548),
    [sym_string_value] = ACTIONS(548),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(552),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(552),
    [anon_sym_DASH] = ACTIONS(552),
    [anon_sym_SLASH] = ACTIONS(552),
    [sym_identifier] = ACTIONS(552),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(552),
  },
  [141] = {
    [sym_arguments] = STATE(160),
    [sym__descendant_operator] = ACTIONS(91),
    [anon_sym_COMMA] = ACTIONS(91),
    [anon_sym_STAR] = ACTIONS(145),
    [anon_sym_DOT] = ACTIONS(93),
    [anon_sym_COLON] = ACTIONS(93),
    [anon_sym_COLON_COLON] = ACTIONS(91),
    [anon_sym_POUND] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_GT] = ACTIONS(91),
    [anon_sym_TILDE] = ACTIONS(91),
    [anon_sym_PLUS] = ACTIONS(93),
    [anon_sym_LPAREN] = ACTIONS(483),
    [anon_sym_RPAREN] = ACTIONS(91),
    [anon_sym_LPAREN2] = ACTIONS(149),
    [sym_string_value] = ACTIONS(145),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(149),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(149),
    [anon_sym_DASH] = ACTIONS(149),
    [anon_sym_SLASH] = ACTIONS(149),
    [sym_identifier] = ACTIONS(149),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(149),
  },
  [142] = {
    [aux_sym_pseudo_class_arguments_repeat2] = STATE(177),
    [sym__descendant_operator] = ACTIONS(103),
    [anon_sym_COMMA] = ACTIONS(554),
    [anon_sym_DOT] = ACTIONS(109),
    [anon_sym_COLON] = ACTIONS(111),
    [anon_sym_COLON_COLON] = ACTIONS(113),
    [anon_sym_POUND] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_GT] = ACTIONS(119),
    [anon_sym_TILDE] = ACTIONS(121),
    [anon_sym_PLUS] = ACTIONS(123),
    [anon_sym_RPAREN] = ACTIONS(556),
    [sym_comment] = ACTIONS(37),
  },
  [143] = {
    [sym__value] = STATE(119),
    [sym_parenthesized_value] = STATE(119),
    [sym_color_value] = STATE(119),
    [sym_integer_value] = STATE(119),
    [sym_float_value] = STATE(119),
    [sym_call_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(164),
    [aux_sym_pseudo_class_arguments_repeat2] = STATE(177),
    [anon_sym_COMMA] = ACTIONS(554),
    [anon_sym_POUND] = ACTIONS(314),
    [anon_sym_RPAREN] = ACTIONS(556),
    [anon_sym_LPAREN2] = ACTIONS(318),
    [sym_string_value] = ACTIONS(320),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(322),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(324),
    [sym_identifier] = ACTIONS(326),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(328),
  },
  [144] = {
    [anon_sym_STAR] = ACTIONS(177),
    [anon_sym_RBRACK] = ACTIONS(558),
    [anon_sym_PLUS] = ACTIONS(177),
    [anon_sym_DASH] = ACTIONS(177),
    [anon_sym_SLASH] = ACTIONS(179),
    [sym_comment] = ACTIONS(37),
  },
  [145] = {
    [sym__value] = STATE(179),
    [sym_parenthesized_value] = STATE(179),
    [sym_color_value] = STATE(179),
    [sym_integer_value] = STATE(179),
    [sym_float_value] = STATE(179),
    [sym_call_expression] = STATE(179),
    [sym_binary_expression] = STATE(179),
    [anon_sym_POUND] = ACTIONS(314),
    [anon_sym_LPAREN2] = ACTIONS(318),
    [sym_string_value] = ACTIONS(560),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(322),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(324),
    [sym_identifier] = ACTIONS(326),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(562),
  },
  [146] = {
    [ts_builtin_sym_end] = ACTIONS(564),
    [anon_sym_ATimport] = ACTIONS(566),
    [anon_sym_ATmedia] = ACTIONS(566),
    [anon_sym_ATcharset] = ACTIONS(566),
    [anon_sym_ATnamespace] = ACTIONS(566),
    [anon_sym_ATkeyframes] = ACTIONS(566),
    [anon_sym_RBRACE] = ACTIONS(564),
    [anon_sym_ATsupports] = ACTIONS(566),
    [sym_nesting_selector] = ACTIONS(564),
    [anon_sym_STAR] = ACTIONS(564),
    [anon_sym_DOT] = ACTIONS(564),
    [anon_sym_COLON] = ACTIONS(566),
    [anon_sym_COLON_COLON] = ACTIONS(564),
    [anon_sym_POUND] = ACTIONS(564),
    [anon_sym_LBRACK] = ACTIONS(564),
    [sym_string_value] = ACTIONS(564),
    [sym_identifier] = ACTIONS(564),
    [sym_at_keyword] = ACTIONS(566),
    [sym_comment] = ACTIONS(37),
  },
  [147] = {
    [anon_sym_RBRACE] = ACTIONS(568),
    [sym_comment] = ACTIONS(37),
  },
  [148] = {
    [sym_import_statement] = STATE(148),
    [sym_media_statement] = STATE(148),
    [sym_charset_statement] = STATE(148),
    [sym_namespace_statement] = STATE(148),
    [sym_keyframes_statement] = STATE(148),
    [sym_supports_statement] = STATE(148),
    [sym_at_rule] = STATE(148),
    [sym_rule_set] = STATE(148),
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
    [sym_declaration] = STATE(148),
    [aux_sym_block_repeat1] = STATE(148),
    [anon_sym_ATimport] = ACTIONS(570),
    [anon_sym_ATmedia] = ACTIONS(573),
    [anon_sym_ATcharset] = ACTIONS(576),
    [anon_sym_ATnamespace] = ACTIONS(579),
    [anon_sym_ATkeyframes] = ACTIONS(582),
    [anon_sym_RBRACE] = ACTIONS(585),
    [anon_sym_ATsupports] = ACTIONS(587),
    [sym_nesting_selector] = ACTIONS(590),
    [anon_sym_STAR] = ACTIONS(593),
    [anon_sym_DOT] = ACTIONS(596),
    [anon_sym_COLON] = ACTIONS(599),
    [anon_sym_COLON_COLON] = ACTIONS(602),
    [anon_sym_POUND] = ACTIONS(605),
    [anon_sym_LBRACK] = ACTIONS(608),
    [sym_string_value] = ACTIONS(590),
    [sym_identifier] = ACTIONS(611),
    [sym_at_keyword] = ACTIONS(614),
    [sym_comment] = ACTIONS(37),
  },
  [149] = {
    [anon_sym_COMMA] = ACTIONS(515),
    [anon_sym_SEMI] = ACTIONS(515),
    [anon_sym_LBRACE] = ACTIONS(515),
    [anon_sym_and] = ACTIONS(225),
    [anon_sym_or] = ACTIONS(225),
    [sym_comment] = ACTIONS(37),
  },
  [150] = {
    [ts_builtin_sym_end] = ACTIONS(617),
    [anon_sym_ATimport] = ACTIONS(619),
    [anon_sym_ATmedia] = ACTIONS(619),
    [anon_sym_ATcharset] = ACTIONS(619),
    [anon_sym_ATnamespace] = ACTIONS(619),
    [anon_sym_ATkeyframes] = ACTIONS(619),
    [anon_sym_RBRACE] = ACTIONS(617),
    [anon_sym_ATsupports] = ACTIONS(619),
    [sym_nesting_selector] = ACTIONS(617),
    [anon_sym_STAR] = ACTIONS(617),
    [anon_sym_DOT] = ACTIONS(617),
    [anon_sym_COLON] = ACTIONS(619),
    [anon_sym_COLON_COLON] = ACTIONS(617),
    [anon_sym_POUND] = ACTIONS(617),
    [anon_sym_LBRACK] = ACTIONS(617),
    [sym_string_value] = ACTIONS(617),
    [sym_identifier] = ACTIONS(617),
    [sym_at_keyword] = ACTIONS(619),
    [sym_comment] = ACTIONS(37),
  },
  [151] = {
    [aux_sym_import_statement_repeat1] = STATE(151),
    [anon_sym_COMMA] = ACTIONS(621),
    [anon_sym_SEMI] = ACTIONS(515),
    [anon_sym_LBRACE] = ACTIONS(515),
    [sym_comment] = ACTIONS(37),
  },
  [152] = {
    [sym__descendant_operator] = ACTIONS(624),
    [anon_sym_COMMA] = ACTIONS(624),
    [anon_sym_LBRACE] = ACTIONS(624),
    [anon_sym_DOT] = ACTIONS(624),
    [anon_sym_COLON] = ACTIONS(626),
    [anon_sym_COLON_COLON] = ACTIONS(624),
    [anon_sym_POUND] = ACTIONS(624),
    [anon_sym_LBRACK] = ACTIONS(624),
    [anon_sym_GT] = ACTIONS(624),
    [anon_sym_TILDE] = ACTIONS(624),
    [anon_sym_PLUS] = ACTIONS(624),
    [anon_sym_RPAREN] = ACTIONS(624),
    [sym_comment] = ACTIONS(37),
  },
  [153] = {
    [sym__value] = STATE(182),
    [sym_parenthesized_value] = STATE(182),
    [sym_color_value] = STATE(182),
    [sym_integer_value] = STATE(182),
    [sym_float_value] = STATE(182),
    [sym_call_expression] = STATE(182),
    [sym_binary_expression] = STATE(182),
    [anon_sym_POUND] = ACTIONS(39),
    [anon_sym_LPAREN2] = ACTIONS(41),
    [sym_string_value] = ACTIONS(628),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(63),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(65),
    [sym_identifier] = ACTIONS(49),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(630),
  },
  [154] = {
    [sym__descendant_operator] = ACTIONS(632),
    [anon_sym_COMMA] = ACTIONS(632),
    [anon_sym_LBRACE] = ACTIONS(632),
    [anon_sym_DOT] = ACTIONS(632),
    [anon_sym_COLON] = ACTIONS(634),
    [anon_sym_COLON_COLON] = ACTIONS(632),
    [anon_sym_POUND] = ACTIONS(632),
    [anon_sym_LBRACK] = ACTIONS(632),
    [anon_sym_GT] = ACTIONS(632),
    [anon_sym_TILDE] = ACTIONS(632),
    [anon_sym_PLUS] = ACTIONS(632),
    [anon_sym_RPAREN] = ACTIONS(632),
    [sym_comment] = ACTIONS(37),
  },
  [155] = {
    [anon_sym_COMMA] = ACTIONS(300),
    [anon_sym_SEMI] = ACTIONS(300),
    [anon_sym_RBRACE] = ACTIONS(300),
    [anon_sym_STAR] = ACTIONS(300),
    [anon_sym_POUND] = ACTIONS(300),
    [anon_sym_PLUS] = ACTIONS(302),
    [anon_sym_RPAREN] = ACTIONS(300),
    [sym_important] = ACTIONS(300),
    [anon_sym_LPAREN2] = ACTIONS(300),
    [sym_string_value] = ACTIONS(300),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(302),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(302),
    [anon_sym_DASH] = ACTIONS(302),
    [anon_sym_SLASH] = ACTIONS(302),
    [sym_identifier] = ACTIONS(302),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(302),
  },
  [156] = {
    [anon_sym_STAR] = ACTIONS(177),
    [anon_sym_PLUS] = ACTIONS(177),
    [anon_sym_RPAREN] = ACTIONS(636),
    [anon_sym_DASH] = ACTIONS(177),
    [anon_sym_SLASH] = ACTIONS(179),
    [sym_comment] = ACTIONS(37),
  },
  [157] = {
    [anon_sym_COMMA] = ACTIONS(306),
    [anon_sym_SEMI] = ACTIONS(306),
    [anon_sym_RBRACE] = ACTIONS(306),
    [anon_sym_STAR] = ACTIONS(306),
    [anon_sym_POUND] = ACTIONS(306),
    [anon_sym_PLUS] = ACTIONS(308),
    [anon_sym_RPAREN] = ACTIONS(306),
    [sym_important] = ACTIONS(306),
    [anon_sym_LPAREN2] = ACTIONS(306),
    [sym_string_value] = ACTIONS(306),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(308),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(308),
    [anon_sym_DASH] = ACTIONS(308),
    [anon_sym_SLASH] = ACTIONS(308),
    [sym_identifier] = ACTIONS(308),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(308),
  },
  [158] = {
    [anon_sym_COMMA] = ACTIONS(310),
    [anon_sym_SEMI] = ACTIONS(310),
    [anon_sym_RBRACE] = ACTIONS(310),
    [anon_sym_STAR] = ACTIONS(310),
    [anon_sym_POUND] = ACTIONS(310),
    [anon_sym_PLUS] = ACTIONS(312),
    [anon_sym_RPAREN] = ACTIONS(310),
    [sym_important] = ACTIONS(310),
    [anon_sym_LPAREN2] = ACTIONS(310),
    [sym_string_value] = ACTIONS(310),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(312),
    [anon_sym_DASH] = ACTIONS(312),
    [anon_sym_SLASH] = ACTIONS(312),
    [sym_identifier] = ACTIONS(312),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(312),
  },
  [159] = {
    [sym__value] = STATE(119),
    [sym_parenthesized_value] = STATE(119),
    [sym_color_value] = STATE(119),
    [sym_integer_value] = STATE(119),
    [sym_float_value] = STATE(119),
    [sym_call_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(185),
    [anon_sym_POUND] = ACTIONS(314),
    [anon_sym_RPAREN] = ACTIONS(638),
    [anon_sym_LPAREN2] = ACTIONS(318),
    [sym_string_value] = ACTIONS(320),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(322),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(324),
    [sym_identifier] = ACTIONS(326),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(328),
  },
  [160] = {
    [anon_sym_COMMA] = ACTIONS(330),
    [anon_sym_SEMI] = ACTIONS(330),
    [anon_sym_RBRACE] = ACTIONS(330),
    [anon_sym_STAR] = ACTIONS(330),
    [anon_sym_POUND] = ACTIONS(330),
    [anon_sym_PLUS] = ACTIONS(332),
    [anon_sym_RPAREN] = ACTIONS(330),
    [sym_important] = ACTIONS(330),
    [anon_sym_LPAREN2] = ACTIONS(330),
    [sym_string_value] = ACTIONS(330),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(332),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(332),
    [anon_sym_DASH] = ACTIONS(332),
    [anon_sym_SLASH] = ACTIONS(332),
    [sym_identifier] = ACTIONS(332),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(332),
  },
  [161] = {
    [sym__value] = STATE(186),
    [sym_parenthesized_value] = STATE(186),
    [sym_color_value] = STATE(186),
    [sym_integer_value] = STATE(186),
    [sym_float_value] = STATE(186),
    [sym_call_expression] = STATE(186),
    [sym_binary_expression] = STATE(186),
    [anon_sym_POUND] = ACTIONS(314),
    [anon_sym_LPAREN2] = ACTIONS(318),
    [sym_string_value] = ACTIONS(640),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(322),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(324),
    [sym_identifier] = ACTIONS(326),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(642),
  },
  [162] = {
    [sym__value] = STATE(119),
    [sym_parenthesized_value] = STATE(119),
    [sym_color_value] = STATE(119),
    [sym_integer_value] = STATE(119),
    [sym_float_value] = STATE(119),
    [sym_call_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(187),
    [anon_sym_POUND] = ACTIONS(314),
    [anon_sym_LPAREN2] = ACTIONS(318),
    [sym_string_value] = ACTIONS(320),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(322),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(324),
    [sym_identifier] = ACTIONS(326),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(328),
  },
  [163] = {
    [anon_sym_SEMI] = ACTIONS(644),
    [anon_sym_STAR] = ACTIONS(644),
    [anon_sym_RBRACK] = ACTIONS(644),
    [anon_sym_PLUS] = ACTIONS(644),
    [anon_sym_RPAREN] = ACTIONS(644),
    [anon_sym_LPAREN2] = ACTIONS(644),
    [anon_sym_not] = ACTIONS(646),
    [anon_sym_selector] = ACTIONS(646),
    [anon_sym_DASH] = ACTIONS(646),
    [anon_sym_SLASH] = ACTIONS(646),
    [sym_identifier] = ACTIONS(646),
    [sym_comment] = ACTIONS(37),
  },
  [164] = {
    [sym__value] = STATE(119),
    [sym_parenthesized_value] = STATE(119),
    [sym_color_value] = STATE(119),
    [sym_integer_value] = STATE(119),
    [sym_float_value] = STATE(119),
    [sym_call_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(164),
    [anon_sym_COMMA] = ACTIONS(648),
    [anon_sym_POUND] = ACTIONS(650),
    [anon_sym_RPAREN] = ACTIONS(648),
    [anon_sym_LPAREN2] = ACTIONS(653),
    [sym_string_value] = ACTIONS(656),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(659),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(662),
    [sym_identifier] = ACTIONS(665),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(668),
  },
  [165] = {
    [aux_sym_arguments_repeat1] = STATE(189),
    [anon_sym_COMMA] = ACTIONS(493),
    [anon_sym_RPAREN] = ACTIONS(671),
    [sym_comment] = ACTIONS(37),
  },
  [166] = {
    [anon_sym_COMMA] = ACTIONS(515),
    [anon_sym_SEMI] = ACTIONS(515),
    [anon_sym_and] = ACTIONS(346),
    [anon_sym_or] = ACTIONS(346),
    [sym_comment] = ACTIONS(37),
  },
  [167] = {
    [ts_builtin_sym_end] = ACTIONS(673),
    [anon_sym_ATimport] = ACTIONS(675),
    [anon_sym_ATmedia] = ACTIONS(675),
    [anon_sym_ATcharset] = ACTIONS(675),
    [anon_sym_ATnamespace] = ACTIONS(675),
    [anon_sym_ATkeyframes] = ACTIONS(675),
    [anon_sym_RBRACE] = ACTIONS(673),
    [anon_sym_ATsupports] = ACTIONS(675),
    [sym_nesting_selector] = ACTIONS(673),
    [anon_sym_STAR] = ACTIONS(673),
    [anon_sym_DOT] = ACTIONS(673),
    [anon_sym_COLON] = ACTIONS(675),
    [anon_sym_COLON_COLON] = ACTIONS(673),
    [anon_sym_POUND] = ACTIONS(673),
    [anon_sym_LBRACK] = ACTIONS(673),
    [sym_string_value] = ACTIONS(673),
    [sym_identifier] = ACTIONS(673),
    [sym_at_keyword] = ACTIONS(675),
    [sym_comment] = ACTIONS(37),
  },
  [168] = {
    [aux_sym_import_statement_repeat1] = STATE(168),
    [anon_sym_COMMA] = ACTIONS(677),
    [anon_sym_SEMI] = ACTIONS(515),
    [sym_comment] = ACTIONS(37),
  },
  [169] = {
    [anon_sym_STAR] = ACTIONS(177),
    [anon_sym_PLUS] = ACTIONS(177),
    [anon_sym_RPAREN] = ACTIONS(680),
    [anon_sym_DASH] = ACTIONS(177),
    [anon_sym_SLASH] = ACTIONS(179),
    [sym_comment] = ACTIONS(37),
  },
  [170] = {
    [anon_sym_COMMA] = ACTIONS(682),
    [anon_sym_SEMI] = ACTIONS(682),
    [anon_sym_LBRACE] = ACTIONS(682),
    [anon_sym_RPAREN] = ACTIONS(682),
    [anon_sym_and] = ACTIONS(682),
    [anon_sym_or] = ACTIONS(682),
    [sym_comment] = ACTIONS(37),
  },
  [171] = {
    [sym_import_statement] = STATE(193),
    [sym_media_statement] = STATE(193),
    [sym_charset_statement] = STATE(193),
    [sym_namespace_statement] = STATE(193),
    [sym_keyframes_statement] = STATE(193),
    [sym_supports_statement] = STATE(193),
    [sym_at_rule] = STATE(193),
    [sym_rule_set] = STATE(193),
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
    [sym_declaration] = STATE(193),
    [sym_last_declaration] = STATE(192),
    [aux_sym_block_repeat1] = STATE(193),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATmedia] = ACTIONS(9),
    [anon_sym_ATcharset] = ACTIONS(11),
    [anon_sym_ATnamespace] = ACTIONS(13),
    [anon_sym_ATkeyframes] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(684),
    [anon_sym_ATsupports] = ACTIONS(17),
    [sym_nesting_selector] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_string_value] = ACTIONS(19),
    [sym_identifier] = ACTIONS(219),
    [sym_at_keyword] = ACTIONS(35),
    [sym_comment] = ACTIONS(37),
  },
  [172] = {
    [anon_sym_RBRACE] = ACTIONS(686),
    [sym_from] = ACTIONS(686),
    [sym_to] = ACTIONS(686),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(686),
    [sym_comment] = ACTIONS(37),
  },
  [173] = {
    [ts_builtin_sym_end] = ACTIONS(688),
    [anon_sym_ATimport] = ACTIONS(690),
    [anon_sym_ATmedia] = ACTIONS(690),
    [anon_sym_ATcharset] = ACTIONS(690),
    [anon_sym_ATnamespace] = ACTIONS(690),
    [anon_sym_ATkeyframes] = ACTIONS(690),
    [anon_sym_RBRACE] = ACTIONS(688),
    [anon_sym_ATsupports] = ACTIONS(690),
    [sym_nesting_selector] = ACTIONS(688),
    [anon_sym_STAR] = ACTIONS(688),
    [anon_sym_DOT] = ACTIONS(688),
    [anon_sym_COLON] = ACTIONS(690),
    [anon_sym_COLON_COLON] = ACTIONS(688),
    [anon_sym_POUND] = ACTIONS(688),
    [anon_sym_LBRACK] = ACTIONS(688),
    [sym_string_value] = ACTIONS(688),
    [sym_identifier] = ACTIONS(688),
    [sym_at_keyword] = ACTIONS(690),
    [sym_comment] = ACTIONS(37),
  },
  [174] = {
    [sym_keyframe_block] = STATE(174),
    [sym_integer_value] = STATE(136),
    [aux_sym_keyframe_block_list_repeat1] = STATE(174),
    [anon_sym_RBRACE] = ACTIONS(692),
    [sym_from] = ACTIONS(694),
    [sym_to] = ACTIONS(694),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(697),
    [sym_comment] = ACTIONS(37),
  },
  [175] = {
    [sym__selector] = STATE(194),
    [sym_universal_selector] = STATE(194),
    [sym_class_selector] = STATE(194),
    [sym_pseudo_class_selector] = STATE(194),
    [sym_pseudo_element_selector] = STATE(194),
    [sym_id_selector] = STATE(194),
    [sym_attribute_selector] = STATE(194),
    [sym_child_selector] = STATE(194),
    [sym_descendant_selector] = STATE(194),
    [sym_sibling_selector] = STATE(194),
    [sym_adjacent_sibling_selector] = STATE(194),
    [sym__value] = STATE(119),
    [sym_parenthesized_value] = STATE(119),
    [sym_color_value] = STATE(119),
    [sym_integer_value] = STATE(119),
    [sym_float_value] = STATE(119),
    [sym_call_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(195),
    [sym_nesting_selector] = ACTIONS(700),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(388),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(390),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LPAREN2] = ACTIONS(318),
    [sym_string_value] = ACTIONS(394),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(322),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(324),
    [sym_identifier] = ACTIONS(396),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(328),
  },
  [176] = {
    [sym__descendant_operator] = ACTIONS(702),
    [anon_sym_COMMA] = ACTIONS(702),
    [anon_sym_LBRACE] = ACTIONS(702),
    [anon_sym_DOT] = ACTIONS(702),
    [anon_sym_COLON] = ACTIONS(704),
    [anon_sym_COLON_COLON] = ACTIONS(702),
    [anon_sym_POUND] = ACTIONS(702),
    [anon_sym_LBRACK] = ACTIONS(702),
    [anon_sym_GT] = ACTIONS(702),
    [anon_sym_TILDE] = ACTIONS(702),
    [anon_sym_PLUS] = ACTIONS(702),
    [anon_sym_RPAREN] = ACTIONS(702),
    [sym_comment] = ACTIONS(37),
  },
  [177] = {
    [aux_sym_pseudo_class_arguments_repeat2] = STATE(197),
    [anon_sym_COMMA] = ACTIONS(554),
    [anon_sym_RPAREN] = ACTIONS(706),
    [sym_comment] = ACTIONS(37),
  },
  [178] = {
    [sym__descendant_operator] = ACTIONS(708),
    [anon_sym_COMMA] = ACTIONS(708),
    [anon_sym_LBRACE] = ACTIONS(708),
    [anon_sym_DOT] = ACTIONS(708),
    [anon_sym_COLON] = ACTIONS(710),
    [anon_sym_COLON_COLON] = ACTIONS(708),
    [anon_sym_POUND] = ACTIONS(708),
    [anon_sym_LBRACK] = ACTIONS(708),
    [anon_sym_GT] = ACTIONS(708),
    [anon_sym_TILDE] = ACTIONS(708),
    [anon_sym_PLUS] = ACTIONS(708),
    [anon_sym_RPAREN] = ACTIONS(708),
    [sym_comment] = ACTIONS(37),
  },
  [179] = {
    [sym__value] = STATE(201),
    [sym_parenthesized_value] = STATE(201),
    [sym_color_value] = STATE(201),
    [sym_integer_value] = STATE(201),
    [sym_float_value] = STATE(201),
    [sym_call_expression] = STATE(201),
    [sym_binary_expression] = STATE(201),
    [aux_sym_declaration_repeat1] = STATE(202),
    [anon_sym_COMMA] = ACTIONS(712),
    [anon_sym_SEMI] = ACTIONS(714),
    [anon_sym_RBRACE] = ACTIONS(716),
    [anon_sym_STAR] = ACTIONS(487),
    [anon_sym_POUND] = ACTIONS(314),
    [anon_sym_PLUS] = ACTIONS(489),
    [sym_important] = ACTIONS(718),
    [anon_sym_LPAREN2] = ACTIONS(318),
    [sym_string_value] = ACTIONS(720),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(322),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(324),
    [anon_sym_DASH] = ACTIONS(489),
    [anon_sym_SLASH] = ACTIONS(489),
    [sym_identifier] = ACTIONS(326),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(722),
  },
  [180] = {
    [ts_builtin_sym_end] = ACTIONS(724),
    [anon_sym_ATimport] = ACTIONS(726),
    [anon_sym_ATmedia] = ACTIONS(726),
    [anon_sym_ATcharset] = ACTIONS(726),
    [anon_sym_ATnamespace] = ACTIONS(726),
    [anon_sym_ATkeyframes] = ACTIONS(726),
    [anon_sym_RBRACE] = ACTIONS(724),
    [anon_sym_ATsupports] = ACTIONS(726),
    [sym_nesting_selector] = ACTIONS(724),
    [anon_sym_STAR] = ACTIONS(724),
    [anon_sym_DOT] = ACTIONS(724),
    [anon_sym_COLON] = ACTIONS(726),
    [anon_sym_COLON_COLON] = ACTIONS(724),
    [anon_sym_POUND] = ACTIONS(724),
    [anon_sym_LBRACK] = ACTIONS(724),
    [sym_string_value] = ACTIONS(724),
    [sym_identifier] = ACTIONS(724),
    [sym_at_keyword] = ACTIONS(726),
    [sym_comment] = ACTIONS(37),
  },
  [181] = {
    [sym__descendant_operator] = ACTIONS(91),
    [anon_sym_COMMA] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(91),
    [anon_sym_DOT] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(728),
    [anon_sym_COLON_COLON] = ACTIONS(91),
    [anon_sym_POUND] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_GT] = ACTIONS(91),
    [anon_sym_TILDE] = ACTIONS(91),
    [anon_sym_PLUS] = ACTIONS(91),
    [sym_comment] = ACTIONS(37),
  },
  [182] = {
    [anon_sym_STAR] = ACTIONS(177),
    [anon_sym_RBRACK] = ACTIONS(730),
    [anon_sym_PLUS] = ACTIONS(177),
    [anon_sym_DASH] = ACTIONS(177),
    [anon_sym_SLASH] = ACTIONS(179),
    [sym_comment] = ACTIONS(37),
  },
  [183] = {
    [anon_sym_COMMA] = ACTIONS(465),
    [anon_sym_SEMI] = ACTIONS(465),
    [anon_sym_RBRACE] = ACTIONS(465),
    [anon_sym_STAR] = ACTIONS(465),
    [anon_sym_POUND] = ACTIONS(465),
    [anon_sym_PLUS] = ACTIONS(467),
    [anon_sym_RPAREN] = ACTIONS(465),
    [sym_important] = ACTIONS(465),
    [anon_sym_LPAREN2] = ACTIONS(465),
    [sym_string_value] = ACTIONS(465),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(467),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(467),
    [anon_sym_DASH] = ACTIONS(467),
    [anon_sym_SLASH] = ACTIONS(467),
    [sym_identifier] = ACTIONS(467),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(467),
  },
  [184] = {
    [anon_sym_COMMA] = ACTIONS(471),
    [anon_sym_SEMI] = ACTIONS(471),
    [anon_sym_RBRACE] = ACTIONS(471),
    [anon_sym_STAR] = ACTIONS(471),
    [anon_sym_POUND] = ACTIONS(471),
    [anon_sym_PLUS] = ACTIONS(473),
    [anon_sym_RPAREN] = ACTIONS(471),
    [sym_important] = ACTIONS(471),
    [anon_sym_LPAREN2] = ACTIONS(471),
    [sym_string_value] = ACTIONS(471),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(473),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(473),
    [anon_sym_DASH] = ACTIONS(473),
    [anon_sym_SLASH] = ACTIONS(473),
    [sym_identifier] = ACTIONS(473),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(473),
  },
  [185] = {
    [sym__value] = STATE(119),
    [sym_parenthesized_value] = STATE(119),
    [sym_color_value] = STATE(119),
    [sym_integer_value] = STATE(119),
    [sym_float_value] = STATE(119),
    [sym_call_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(164),
    [aux_sym_arguments_repeat1] = STATE(206),
    [anon_sym_COMMA] = ACTIONS(493),
    [anon_sym_POUND] = ACTIONS(314),
    [anon_sym_RPAREN] = ACTIONS(732),
    [anon_sym_LPAREN2] = ACTIONS(318),
    [sym_string_value] = ACTIONS(320),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(322),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(324),
    [sym_identifier] = ACTIONS(326),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(328),
  },
  [186] = {
    [anon_sym_COMMA] = ACTIONS(497),
    [anon_sym_SEMI] = ACTIONS(497),
    [anon_sym_RBRACE] = ACTIONS(497),
    [anon_sym_STAR] = ACTIONS(497),
    [anon_sym_POUND] = ACTIONS(497),
    [anon_sym_PLUS] = ACTIONS(499),
    [anon_sym_RPAREN] = ACTIONS(497),
    [sym_important] = ACTIONS(497),
    [anon_sym_LPAREN2] = ACTIONS(497),
    [sym_string_value] = ACTIONS(497),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(499),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(499),
    [anon_sym_DASH] = ACTIONS(499),
    [anon_sym_SLASH] = ACTIONS(499),
    [sym_identifier] = ACTIONS(499),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(499),
  },
  [187] = {
    [sym__value] = STATE(119),
    [sym_parenthesized_value] = STATE(119),
    [sym_color_value] = STATE(119),
    [sym_integer_value] = STATE(119),
    [sym_float_value] = STATE(119),
    [sym_call_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(164),
    [anon_sym_COMMA] = ACTIONS(734),
    [anon_sym_POUND] = ACTIONS(314),
    [anon_sym_RPAREN] = ACTIONS(734),
    [anon_sym_LPAREN2] = ACTIONS(318),
    [sym_string_value] = ACTIONS(320),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(322),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(324),
    [sym_identifier] = ACTIONS(326),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(328),
  },
  [188] = {
    [anon_sym_SEMI] = ACTIONS(736),
    [anon_sym_STAR] = ACTIONS(736),
    [anon_sym_RBRACK] = ACTIONS(736),
    [anon_sym_PLUS] = ACTIONS(736),
    [anon_sym_RPAREN] = ACTIONS(736),
    [anon_sym_LPAREN2] = ACTIONS(736),
    [anon_sym_not] = ACTIONS(738),
    [anon_sym_selector] = ACTIONS(738),
    [anon_sym_DASH] = ACTIONS(738),
    [anon_sym_SLASH] = ACTIONS(738),
    [sym_identifier] = ACTIONS(738),
    [sym_comment] = ACTIONS(37),
  },
  [189] = {
    [aux_sym_arguments_repeat1] = STATE(189),
    [anon_sym_COMMA] = ACTIONS(740),
    [anon_sym_RPAREN] = ACTIONS(734),
    [sym_comment] = ACTIONS(37),
  },
  [190] = {
    [anon_sym_COMMA] = ACTIONS(743),
    [anon_sym_SEMI] = ACTIONS(743),
    [anon_sym_LBRACE] = ACTIONS(743),
    [anon_sym_RPAREN] = ACTIONS(743),
    [anon_sym_and] = ACTIONS(743),
    [anon_sym_or] = ACTIONS(743),
    [sym_comment] = ACTIONS(37),
  },
  [191] = {
    [anon_sym_RBRACE] = ACTIONS(410),
    [sym_from] = ACTIONS(410),
    [sym_to] = ACTIONS(410),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(410),
    [sym_comment] = ACTIONS(37),
  },
  [192] = {
    [anon_sym_RBRACE] = ACTIONS(745),
    [sym_comment] = ACTIONS(37),
  },
  [193] = {
    [sym_import_statement] = STATE(148),
    [sym_media_statement] = STATE(148),
    [sym_charset_statement] = STATE(148),
    [sym_namespace_statement] = STATE(148),
    [sym_keyframes_statement] = STATE(148),
    [sym_supports_statement] = STATE(148),
    [sym_at_rule] = STATE(148),
    [sym_rule_set] = STATE(148),
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
    [sym_declaration] = STATE(148),
    [sym_last_declaration] = STATE(208),
    [aux_sym_block_repeat1] = STATE(148),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATmedia] = ACTIONS(9),
    [anon_sym_ATcharset] = ACTIONS(11),
    [anon_sym_ATnamespace] = ACTIONS(13),
    [anon_sym_ATkeyframes] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(745),
    [anon_sym_ATsupports] = ACTIONS(17),
    [sym_nesting_selector] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_string_value] = ACTIONS(19),
    [sym_identifier] = ACTIONS(219),
    [sym_at_keyword] = ACTIONS(35),
    [sym_comment] = ACTIONS(37),
  },
  [194] = {
    [sym__descendant_operator] = ACTIONS(103),
    [anon_sym_COMMA] = ACTIONS(747),
    [anon_sym_DOT] = ACTIONS(109),
    [anon_sym_COLON] = ACTIONS(111),
    [anon_sym_COLON_COLON] = ACTIONS(113),
    [anon_sym_POUND] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(117),
    [anon_sym_GT] = ACTIONS(119),
    [anon_sym_TILDE] = ACTIONS(121),
    [anon_sym_PLUS] = ACTIONS(123),
    [anon_sym_RPAREN] = ACTIONS(747),
    [sym_comment] = ACTIONS(37),
  },
  [195] = {
    [sym__value] = STATE(119),
    [sym_parenthesized_value] = STATE(119),
    [sym_color_value] = STATE(119),
    [sym_integer_value] = STATE(119),
    [sym_float_value] = STATE(119),
    [sym_call_expression] = STATE(119),
    [sym_binary_expression] = STATE(119),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(164),
    [anon_sym_COMMA] = ACTIONS(747),
    [anon_sym_POUND] = ACTIONS(314),
    [anon_sym_RPAREN] = ACTIONS(747),
    [anon_sym_LPAREN2] = ACTIONS(318),
    [sym_string_value] = ACTIONS(320),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(322),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(324),
    [sym_identifier] = ACTIONS(326),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(328),
  },
  [196] = {
    [sym__descendant_operator] = ACTIONS(749),
    [anon_sym_COMMA] = ACTIONS(749),
    [anon_sym_LBRACE] = ACTIONS(749),
    [anon_sym_DOT] = ACTIONS(749),
    [anon_sym_COLON] = ACTIONS(751),
    [anon_sym_COLON_COLON] = ACTIONS(749),
    [anon_sym_POUND] = ACTIONS(749),
    [anon_sym_LBRACK] = ACTIONS(749),
    [anon_sym_GT] = ACTIONS(749),
    [anon_sym_TILDE] = ACTIONS(749),
    [anon_sym_PLUS] = ACTIONS(749),
    [anon_sym_RPAREN] = ACTIONS(749),
    [sym_comment] = ACTIONS(37),
  },
  [197] = {
    [aux_sym_pseudo_class_arguments_repeat2] = STATE(197),
    [anon_sym_COMMA] = ACTIONS(753),
    [anon_sym_RPAREN] = ACTIONS(747),
    [sym_comment] = ACTIONS(37),
  },
  [198] = {
    [sym__value] = STATE(209),
    [sym_parenthesized_value] = STATE(209),
    [sym_color_value] = STATE(209),
    [sym_integer_value] = STATE(209),
    [sym_float_value] = STATE(209),
    [sym_call_expression] = STATE(209),
    [sym_binary_expression] = STATE(209),
    [anon_sym_POUND] = ACTIONS(314),
    [anon_sym_LPAREN2] = ACTIONS(318),
    [sym_string_value] = ACTIONS(756),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(322),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(324),
    [sym_identifier] = ACTIONS(326),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(758),
  },
  [199] = {
    [anon_sym_ATimport] = ACTIONS(760),
    [anon_sym_ATmedia] = ACTIONS(760),
    [anon_sym_ATcharset] = ACTIONS(760),
    [anon_sym_ATnamespace] = ACTIONS(760),
    [anon_sym_ATkeyframes] = ACTIONS(760),
    [anon_sym_RBRACE] = ACTIONS(762),
    [anon_sym_ATsupports] = ACTIONS(760),
    [sym_nesting_selector] = ACTIONS(762),
    [anon_sym_STAR] = ACTIONS(762),
    [anon_sym_DOT] = ACTIONS(762),
    [anon_sym_COLON] = ACTIONS(760),
    [anon_sym_COLON_COLON] = ACTIONS(762),
    [anon_sym_POUND] = ACTIONS(762),
    [anon_sym_LBRACK] = ACTIONS(762),
    [sym_string_value] = ACTIONS(762),
    [sym_identifier] = ACTIONS(762),
    [sym_at_keyword] = ACTIONS(760),
    [sym_comment] = ACTIONS(37),
  },
  [200] = {
    [anon_sym_SEMI] = ACTIONS(764),
    [anon_sym_RBRACE] = ACTIONS(766),
    [sym_comment] = ACTIONS(37),
  },
  [201] = {
    [anon_sym_COMMA] = ACTIONS(768),
    [anon_sym_SEMI] = ACTIONS(768),
    [anon_sym_RBRACE] = ACTIONS(768),
    [anon_sym_STAR] = ACTIONS(487),
    [anon_sym_POUND] = ACTIONS(768),
    [anon_sym_PLUS] = ACTIONS(489),
    [sym_important] = ACTIONS(768),
    [anon_sym_LPAREN2] = ACTIONS(768),
    [sym_string_value] = ACTIONS(768),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(770),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(770),
    [anon_sym_DASH] = ACTIONS(489),
    [anon_sym_SLASH] = ACTIONS(489),
    [sym_identifier] = ACTIONS(770),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(770),
  },
  [202] = {
    [sym__value] = STATE(201),
    [sym_parenthesized_value] = STATE(201),
    [sym_color_value] = STATE(201),
    [sym_integer_value] = STATE(201),
    [sym_float_value] = STATE(201),
    [sym_call_expression] = STATE(201),
    [sym_binary_expression] = STATE(201),
    [aux_sym_declaration_repeat1] = STATE(212),
    [anon_sym_COMMA] = ACTIONS(712),
    [anon_sym_SEMI] = ACTIONS(764),
    [anon_sym_RBRACE] = ACTIONS(766),
    [anon_sym_POUND] = ACTIONS(314),
    [sym_important] = ACTIONS(772),
    [anon_sym_LPAREN2] = ACTIONS(318),
    [sym_string_value] = ACTIONS(720),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(322),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(324),
    [sym_identifier] = ACTIONS(326),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(722),
  },
  [203] = {
    [sym__value] = STATE(213),
    [sym_parenthesized_value] = STATE(213),
    [sym_color_value] = STATE(213),
    [sym_integer_value] = STATE(213),
    [sym_float_value] = STATE(213),
    [sym_call_expression] = STATE(213),
    [sym_binary_expression] = STATE(213),
    [anon_sym_POUND] = ACTIONS(314),
    [anon_sym_LPAREN2] = ACTIONS(318),
    [sym_string_value] = ACTIONS(774),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(322),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(324),
    [sym_identifier] = ACTIONS(326),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(776),
  },
  [204] = {
    [sym__descendant_operator] = ACTIONS(778),
    [anon_sym_COMMA] = ACTIONS(778),
    [anon_sym_LBRACE] = ACTIONS(778),
    [anon_sym_DOT] = ACTIONS(778),
    [anon_sym_COLON] = ACTIONS(780),
    [anon_sym_COLON_COLON] = ACTIONS(778),
    [anon_sym_POUND] = ACTIONS(778),
    [anon_sym_LBRACK] = ACTIONS(778),
    [anon_sym_GT] = ACTIONS(778),
    [anon_sym_TILDE] = ACTIONS(778),
    [anon_sym_PLUS] = ACTIONS(778),
    [anon_sym_RPAREN] = ACTIONS(778),
    [sym_comment] = ACTIONS(37),
  },
  [205] = {
    [anon_sym_COMMA] = ACTIONS(644),
    [anon_sym_SEMI] = ACTIONS(644),
    [anon_sym_RBRACE] = ACTIONS(644),
    [anon_sym_STAR] = ACTIONS(644),
    [anon_sym_POUND] = ACTIONS(644),
    [anon_sym_PLUS] = ACTIONS(646),
    [anon_sym_RPAREN] = ACTIONS(644),
    [sym_important] = ACTIONS(644),
    [anon_sym_LPAREN2] = ACTIONS(644),
    [sym_string_value] = ACTIONS(644),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(646),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(646),
    [anon_sym_DASH] = ACTIONS(646),
    [anon_sym_SLASH] = ACTIONS(646),
    [sym_identifier] = ACTIONS(646),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(646),
  },
  [206] = {
    [aux_sym_arguments_repeat1] = STATE(189),
    [anon_sym_COMMA] = ACTIONS(493),
    [anon_sym_RPAREN] = ACTIONS(782),
    [sym_comment] = ACTIONS(37),
  },
  [207] = {
    [anon_sym_RBRACE] = ACTIONS(564),
    [sym_from] = ACTIONS(564),
    [sym_to] = ACTIONS(564),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(564),
    [sym_comment] = ACTIONS(37),
  },
  [208] = {
    [anon_sym_RBRACE] = ACTIONS(784),
    [sym_comment] = ACTIONS(37),
  },
  [209] = {
    [anon_sym_COMMA] = ACTIONS(786),
    [anon_sym_SEMI] = ACTIONS(786),
    [anon_sym_RBRACE] = ACTIONS(786),
    [anon_sym_STAR] = ACTIONS(487),
    [anon_sym_POUND] = ACTIONS(786),
    [anon_sym_PLUS] = ACTIONS(489),
    [sym_important] = ACTIONS(786),
    [anon_sym_LPAREN2] = ACTIONS(786),
    [sym_string_value] = ACTIONS(786),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(788),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(788),
    [anon_sym_DASH] = ACTIONS(489),
    [anon_sym_SLASH] = ACTIONS(489),
    [sym_identifier] = ACTIONS(788),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(788),
  },
  [210] = {
    [anon_sym_ATimport] = ACTIONS(790),
    [anon_sym_ATmedia] = ACTIONS(790),
    [anon_sym_ATcharset] = ACTIONS(790),
    [anon_sym_ATnamespace] = ACTIONS(790),
    [anon_sym_ATkeyframes] = ACTIONS(790),
    [anon_sym_RBRACE] = ACTIONS(792),
    [anon_sym_ATsupports] = ACTIONS(790),
    [sym_nesting_selector] = ACTIONS(792),
    [anon_sym_STAR] = ACTIONS(792),
    [anon_sym_DOT] = ACTIONS(792),
    [anon_sym_COLON] = ACTIONS(790),
    [anon_sym_COLON_COLON] = ACTIONS(792),
    [anon_sym_POUND] = ACTIONS(792),
    [anon_sym_LBRACK] = ACTIONS(792),
    [sym_string_value] = ACTIONS(792),
    [sym_identifier] = ACTIONS(792),
    [sym_at_keyword] = ACTIONS(790),
    [sym_comment] = ACTIONS(37),
  },
  [211] = {
    [anon_sym_SEMI] = ACTIONS(794),
    [anon_sym_RBRACE] = ACTIONS(796),
    [sym_comment] = ACTIONS(37),
  },
  [212] = {
    [sym__value] = STATE(201),
    [sym_parenthesized_value] = STATE(201),
    [sym_color_value] = STATE(201),
    [sym_integer_value] = STATE(201),
    [sym_float_value] = STATE(201),
    [sym_call_expression] = STATE(201),
    [sym_binary_expression] = STATE(201),
    [aux_sym_declaration_repeat1] = STATE(212),
    [anon_sym_COMMA] = ACTIONS(798),
    [anon_sym_SEMI] = ACTIONS(786),
    [anon_sym_RBRACE] = ACTIONS(786),
    [anon_sym_POUND] = ACTIONS(801),
    [sym_important] = ACTIONS(786),
    [anon_sym_LPAREN2] = ACTIONS(804),
    [sym_string_value] = ACTIONS(807),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(810),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(813),
    [sym_identifier] = ACTIONS(816),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(819),
  },
  [213] = {
    [sym__value] = STATE(201),
    [sym_parenthesized_value] = STATE(201),
    [sym_color_value] = STATE(201),
    [sym_integer_value] = STATE(201),
    [sym_float_value] = STATE(201),
    [sym_call_expression] = STATE(201),
    [sym_binary_expression] = STATE(201),
    [aux_sym_declaration_repeat1] = STATE(218),
    [anon_sym_COMMA] = ACTIONS(712),
    [anon_sym_SEMI] = ACTIONS(714),
    [anon_sym_STAR] = ACTIONS(487),
    [anon_sym_POUND] = ACTIONS(314),
    [anon_sym_PLUS] = ACTIONS(489),
    [sym_important] = ACTIONS(822),
    [anon_sym_LPAREN2] = ACTIONS(318),
    [sym_string_value] = ACTIONS(720),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(322),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(324),
    [anon_sym_DASH] = ACTIONS(489),
    [anon_sym_SLASH] = ACTIONS(489),
    [sym_identifier] = ACTIONS(326),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(722),
  },
  [214] = {
    [anon_sym_COMMA] = ACTIONS(736),
    [anon_sym_SEMI] = ACTIONS(736),
    [anon_sym_RBRACE] = ACTIONS(736),
    [anon_sym_STAR] = ACTIONS(736),
    [anon_sym_POUND] = ACTIONS(736),
    [anon_sym_PLUS] = ACTIONS(738),
    [anon_sym_RPAREN] = ACTIONS(736),
    [sym_important] = ACTIONS(736),
    [anon_sym_LPAREN2] = ACTIONS(736),
    [sym_string_value] = ACTIONS(736),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(738),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(738),
    [anon_sym_DASH] = ACTIONS(738),
    [anon_sym_SLASH] = ACTIONS(738),
    [sym_identifier] = ACTIONS(738),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(738),
  },
  [215] = {
    [anon_sym_RBRACE] = ACTIONS(724),
    [sym_from] = ACTIONS(724),
    [sym_to] = ACTIONS(724),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(724),
    [sym_comment] = ACTIONS(37),
  },
  [216] = {
    [anon_sym_ATimport] = ACTIONS(824),
    [anon_sym_ATmedia] = ACTIONS(824),
    [anon_sym_ATcharset] = ACTIONS(824),
    [anon_sym_ATnamespace] = ACTIONS(824),
    [anon_sym_ATkeyframes] = ACTIONS(824),
    [anon_sym_RBRACE] = ACTIONS(826),
    [anon_sym_ATsupports] = ACTIONS(824),
    [sym_nesting_selector] = ACTIONS(826),
    [anon_sym_STAR] = ACTIONS(826),
    [anon_sym_DOT] = ACTIONS(826),
    [anon_sym_COLON] = ACTIONS(824),
    [anon_sym_COLON_COLON] = ACTIONS(826),
    [anon_sym_POUND] = ACTIONS(826),
    [anon_sym_LBRACK] = ACTIONS(826),
    [sym_string_value] = ACTIONS(826),
    [sym_identifier] = ACTIONS(826),
    [sym_at_keyword] = ACTIONS(824),
    [sym_comment] = ACTIONS(37),
  },
  [217] = {
    [anon_sym_SEMI] = ACTIONS(764),
    [sym_comment] = ACTIONS(37),
  },
  [218] = {
    [sym__value] = STATE(201),
    [sym_parenthesized_value] = STATE(201),
    [sym_color_value] = STATE(201),
    [sym_integer_value] = STATE(201),
    [sym_float_value] = STATE(201),
    [sym_call_expression] = STATE(201),
    [sym_binary_expression] = STATE(201),
    [aux_sym_declaration_repeat1] = STATE(220),
    [anon_sym_COMMA] = ACTIONS(712),
    [anon_sym_SEMI] = ACTIONS(764),
    [anon_sym_POUND] = ACTIONS(314),
    [sym_important] = ACTIONS(828),
    [anon_sym_LPAREN2] = ACTIONS(318),
    [sym_string_value] = ACTIONS(720),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(322),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(324),
    [sym_identifier] = ACTIONS(326),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(722),
  },
  [219] = {
    [anon_sym_SEMI] = ACTIONS(794),
    [sym_comment] = ACTIONS(37),
  },
  [220] = {
    [sym__value] = STATE(201),
    [sym_parenthesized_value] = STATE(201),
    [sym_color_value] = STATE(201),
    [sym_integer_value] = STATE(201),
    [sym_float_value] = STATE(201),
    [sym_call_expression] = STATE(201),
    [sym_binary_expression] = STATE(201),
    [aux_sym_declaration_repeat1] = STATE(220),
    [anon_sym_COMMA] = ACTIONS(798),
    [anon_sym_SEMI] = ACTIONS(786),
    [anon_sym_POUND] = ACTIONS(801),
    [sym_important] = ACTIONS(786),
    [anon_sym_LPAREN2] = ACTIONS(804),
    [sym_string_value] = ACTIONS(807),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(810),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(813),
    [sym_identifier] = ACTIONS(816),
    [sym_comment] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(819),
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
  [93] = {.count = 1, .reusable = false}, REDUCE(sym__selector, 1, .alias_sequence_id = 1),
  [95] = {.count = 1, .reusable = true}, SHIFT(44),
  [97] = {.count = 1, .reusable = true}, SHIFT(45),
  [99] = {.count = 1, .reusable = false}, SHIFT(46),
  [101] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [103] = {.count = 1, .reusable = true}, SHIFT(49),
  [105] = {.count = 1, .reusable = true}, SHIFT(50),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_selectors, 1),
  [109] = {.count = 1, .reusable = true}, SHIFT(51),
  [111] = {.count = 1, .reusable = false}, SHIFT(52),
  [113] = {.count = 1, .reusable = true}, SHIFT(53),
  [115] = {.count = 1, .reusable = true}, SHIFT(54),
  [117] = {.count = 1, .reusable = true}, SHIFT(55),
  [119] = {.count = 1, .reusable = true}, SHIFT(56),
  [121] = {.count = 1, .reusable = true}, SHIFT(57),
  [123] = {.count = 1, .reusable = true}, SHIFT(58),
  [125] = {.count = 1, .reusable = true}, REDUCE(sym_stylesheet, 1),
  [127] = {.count = 1, .reusable = true}, SHIFT(61),
  [129] = {.count = 1, .reusable = true}, SHIFT(62),
  [131] = {.count = 1, .reusable = false}, SHIFT(62),
  [133] = {.count = 1, .reusable = true}, REDUCE(sym_integer_value, 1),
  [135] = {.count = 1, .reusable = false}, REDUCE(sym_integer_value, 1),
  [137] = {.count = 1, .reusable = false}, SHIFT(63),
  [139] = {.count = 1, .reusable = true}, REDUCE(sym_float_value, 1),
  [141] = {.count = 1, .reusable = false}, REDUCE(sym_float_value, 1),
  [143] = {.count = 1, .reusable = false}, SHIFT(64),
  [145] = {.count = 1, .reusable = true}, REDUCE(sym__value, 1, .alias_sequence_id = 2),
  [147] = {.count = 1, .reusable = true}, SHIFT(65),
  [149] = {.count = 1, .reusable = false}, REDUCE(sym__value, 1, .alias_sequence_id = 2),
  [151] = {.count = 1, .reusable = true}, SHIFT(67),
  [153] = {.count = 1, .reusable = true}, SHIFT(68),
  [155] = {.count = 1, .reusable = false}, SHIFT(69),
  [157] = {.count = 1, .reusable = false}, SHIFT(68),
  [159] = {.count = 1, .reusable = false}, SHIFT(71),
  [161] = {.count = 1, .reusable = false}, SHIFT(72),
  [163] = {.count = 1, .reusable = true}, SHIFT(75),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym__query, 1, .alias_sequence_id = 3),
  [167] = {.count = 1, .reusable = true}, SHIFT(76),
  [169] = {.count = 1, .reusable = true}, SHIFT(77),
  [171] = {.count = 1, .reusable = true}, SHIFT(63),
  [173] = {.count = 1, .reusable = true}, SHIFT(64),
  [175] = {.count = 1, .reusable = true}, SHIFT(80),
  [177] = {.count = 1, .reusable = true}, SHIFT(81),
  [179] = {.count = 1, .reusable = false}, SHIFT(81),
  [181] = {.count = 1, .reusable = true}, SHIFT(82),
  [183] = {.count = 1, .reusable = true}, SHIFT(83),
  [185] = {.count = 1, .reusable = true}, SHIFT(84),
  [187] = {.count = 1, .reusable = true}, SHIFT(85),
  [189] = {.count = 1, .reusable = true}, SHIFT(87),
  [191] = {.count = 1, .reusable = true}, REDUCE(sym_class_selector, 2, .alias_sequence_id = 4),
  [193] = {.count = 1, .reusable = false}, REDUCE(sym_class_selector, 2, .alias_sequence_id = 4),
  [195] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_selector, 2, .alias_sequence_id = 4),
  [197] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_selector, 2, .alias_sequence_id = 4),
  [199] = {.count = 1, .reusable = true}, SHIFT(89),
  [201] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_element_selector, 2, .alias_sequence_id = 5),
  [203] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_element_selector, 2, .alias_sequence_id = 5),
  [205] = {.count = 1, .reusable = true}, REDUCE(sym_id_selector, 2, .alias_sequence_id = 6),
  [207] = {.count = 1, .reusable = false}, REDUCE(sym_id_selector, 2, .alias_sequence_id = 6),
  [209] = {.count = 1, .reusable = true}, SHIFT(91),
  [211] = {.count = 1, .reusable = true}, SHIFT(92),
  [213] = {.count = 1, .reusable = true}, REDUCE(sym_at_rule, 2),
  [215] = {.count = 1, .reusable = false}, REDUCE(sym_at_rule, 2),
  [217] = {.count = 1, .reusable = true}, SHIFT(93),
  [219] = {.count = 1, .reusable = true}, SHIFT(94),
  [221] = {.count = 1, .reusable = true}, SHIFT(97),
  [223] = {.count = 1, .reusable = true}, SHIFT(98),
  [225] = {.count = 1, .reusable = true}, SHIFT(99),
  [227] = {.count = 1, .reusable = true}, REDUCE(sym_rule_set, 2),
  [229] = {.count = 1, .reusable = false}, REDUCE(sym_rule_set, 2),
  [231] = {.count = 1, .reusable = true}, SHIFT(101),
  [233] = {.count = 1, .reusable = true}, SHIFT(102),
  [235] = {.count = 1, .reusable = true}, SHIFT(103),
  [237] = {.count = 1, .reusable = true}, SHIFT(104),
  [239] = {.count = 1, .reusable = true}, SHIFT(105),
  [241] = {.count = 1, .reusable = true}, SHIFT(106),
  [243] = {.count = 1, .reusable = true}, SHIFT(107),
  [245] = {.count = 1, .reusable = true}, SHIFT(108),
  [247] = {.count = 1, .reusable = true}, SHIFT(109),
  [249] = {.count = 1, .reusable = true}, SHIFT(110),
  [251] = {.count = 1, .reusable = true}, REDUCE(sym_selectors, 2),
  [253] = {.count = 1, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2),
  [255] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(2),
  [258] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(3),
  [261] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(4),
  [264] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(5),
  [267] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(6),
  [270] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(7),
  [273] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(18),
  [276] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(8),
  [279] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(9),
  [282] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(10),
  [285] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(11),
  [288] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(12),
  [291] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(13),
  [294] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(14),
  [297] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(15),
  [300] = {.count = 1, .reusable = true}, REDUCE(sym_color_value, 2),
  [302] = {.count = 1, .reusable = false}, REDUCE(sym_color_value, 2),
  [304] = {.count = 1, .reusable = true}, SHIFT(112),
  [306] = {.count = 1, .reusable = true}, REDUCE(sym_integer_value, 2),
  [308] = {.count = 1, .reusable = false}, REDUCE(sym_integer_value, 2),
  [310] = {.count = 1, .reusable = true}, REDUCE(sym_float_value, 2),
  [312] = {.count = 1, .reusable = false}, REDUCE(sym_float_value, 2),
  [314] = {.count = 1, .reusable = true}, SHIFT(113),
  [316] = {.count = 1, .reusable = true}, SHIFT(114),
  [318] = {.count = 1, .reusable = true}, SHIFT(115),
  [320] = {.count = 1, .reusable = true}, SHIFT(119),
  [322] = {.count = 1, .reusable = false}, SHIFT(116),
  [324] = {.count = 1, .reusable = false}, SHIFT(117),
  [326] = {.count = 1, .reusable = false}, SHIFT(118),
  [328] = {.count = 1, .reusable = false}, SHIFT(119),
  [330] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 2, .alias_sequence_id = 7),
  [332] = {.count = 1, .reusable = false}, REDUCE(sym_call_expression, 2, .alias_sequence_id = 7),
  [334] = {.count = 1, .reusable = true}, REDUCE(sym_import_statement, 3),
  [336] = {.count = 1, .reusable = false}, REDUCE(sym_import_statement, 3),
  [338] = {.count = 1, .reusable = true}, SHIFT(121),
  [340] = {.count = 1, .reusable = false}, SHIFT(121),
  [342] = {.count = 1, .reusable = true}, SHIFT(122),
  [344] = {.count = 1, .reusable = true}, SHIFT(123),
  [346] = {.count = 1, .reusable = true}, SHIFT(124),
  [348] = {.count = 1, .reusable = true}, SHIFT(126),
  [350] = {.count = 1, .reusable = true}, SHIFT(127),
  [352] = {.count = 1, .reusable = true}, SHIFT(128),
  [354] = {.count = 1, .reusable = true}, REDUCE(sym_negated_query, 2),
  [356] = {.count = 1, .reusable = true}, SHIFT(129),
  [358] = {.count = 1, .reusable = true}, REDUCE(sym_media_statement, 3),
  [360] = {.count = 1, .reusable = false}, REDUCE(sym_media_statement, 3),
  [362] = {.count = 1, .reusable = true}, REDUCE(sym_charset_statement, 3),
  [364] = {.count = 1, .reusable = false}, REDUCE(sym_charset_statement, 3),
  [366] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_statement, 3),
  [368] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_statement, 3),
  [370] = {.count = 1, .reusable = true}, SHIFT(134),
  [372] = {.count = 1, .reusable = true}, SHIFT(135),
  [374] = {.count = 1, .reusable = true}, SHIFT(136),
  [376] = {.count = 1, .reusable = true}, SHIFT(31),
  [378] = {.count = 1, .reusable = true}, REDUCE(sym_keyframes_statement, 3, .alias_sequence_id = 8),
  [380] = {.count = 1, .reusable = false}, REDUCE(sym_keyframes_statement, 3, .alias_sequence_id = 8),
  [382] = {.count = 1, .reusable = true}, REDUCE(sym_supports_statement, 3),
  [384] = {.count = 1, .reusable = false}, REDUCE(sym_supports_statement, 3),
  [386] = {.count = 1, .reusable = true}, SHIFT(142),
  [388] = {.count = 1, .reusable = false}, SHIFT(9),
  [390] = {.count = 1, .reusable = true}, SHIFT(138),
  [392] = {.count = 1, .reusable = true}, SHIFT(139),
  [394] = {.count = 1, .reusable = true}, SHIFT(140),
  [396] = {.count = 1, .reusable = false}, SHIFT(141),
  [398] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_selector, 3, .alias_sequence_id = 4),
  [400] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_selector, 3, .alias_sequence_id = 4),
  [402] = {.count = 1, .reusable = true}, SHIFT(144),
  [404] = {.count = 1, .reusable = false}, SHIFT(144),
  [406] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_selector, 3, .alias_sequence_id = 9),
  [408] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_selector, 3, .alias_sequence_id = 9),
  [410] = {.count = 1, .reusable = true}, REDUCE(sym_block, 2),
  [412] = {.count = 1, .reusable = false}, REDUCE(sym_block, 2),
  [414] = {.count = 1, .reusable = false}, SHIFT(145),
  [416] = {.count = 1, .reusable = true}, SHIFT(146),
  [418] = {.count = 1, .reusable = true}, REDUCE(sym_at_rule, 3),
  [420] = {.count = 1, .reusable = false}, REDUCE(sym_at_rule, 3),
  [422] = {.count = 1, .reusable = true}, SHIFT(150),
  [424] = {.count = 1, .reusable = true}, REDUCE(sym_descendant_selector, 3),
  [426] = {.count = 1, .reusable = false}, REDUCE(sym_descendant_selector, 3),
  [428] = {.count = 1, .reusable = true}, REDUCE(aux_sym_selectors_repeat1, 2),
  [430] = {.count = 1, .reusable = true}, REDUCE(sym_class_selector, 3, .alias_sequence_id = 10),
  [432] = {.count = 1, .reusable = false}, REDUCE(sym_class_selector, 3, .alias_sequence_id = 10),
  [434] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_selector, 3, .alias_sequence_id = 10),
  [436] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_selector, 3, .alias_sequence_id = 10),
  [438] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_element_selector, 3, .alias_sequence_id = 11),
  [440] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_element_selector, 3, .alias_sequence_id = 11),
  [442] = {.count = 1, .reusable = true}, REDUCE(sym_id_selector, 3, .alias_sequence_id = 12),
  [444] = {.count = 1, .reusable = false}, REDUCE(sym_id_selector, 3, .alias_sequence_id = 12),
  [446] = {.count = 1, .reusable = true}, SHIFT(153),
  [448] = {.count = 1, .reusable = true}, SHIFT(154),
  [450] = {.count = 1, .reusable = true}, REDUCE(sym_child_selector, 3),
  [452] = {.count = 1, .reusable = false}, REDUCE(sym_child_selector, 3),
  [454] = {.count = 1, .reusable = true}, REDUCE(sym_sibling_selector, 3),
  [456] = {.count = 1, .reusable = false}, REDUCE(sym_sibling_selector, 3),
  [458] = {.count = 1, .reusable = true}, REDUCE(sym_adjacent_sibling_selector, 3),
  [460] = {.count = 1, .reusable = false}, REDUCE(sym_adjacent_sibling_selector, 3),
  [462] = {.count = 2, .reusable = true}, REDUCE(aux_sym_selectors_repeat1, 2), SHIFT_REPEAT(50),
  [465] = {.count = 1, .reusable = true}, REDUCE(sym_parenthesized_value, 3),
  [467] = {.count = 1, .reusable = false}, REDUCE(sym_parenthesized_value, 3),
  [469] = {.count = 1, .reusable = true}, SHIFT(155),
  [471] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 2),
  [473] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 2),
  [475] = {.count = 1, .reusable = true}, SHIFT(156),
  [477] = {.count = 1, .reusable = false}, SHIFT(156),
  [479] = {.count = 1, .reusable = false}, SHIFT(157),
  [481] = {.count = 1, .reusable = false}, SHIFT(158),
  [483] = {.count = 1, .reusable = true}, SHIFT(159),
  [485] = {.count = 1, .reusable = true}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 1),
  [487] = {.count = 1, .reusable = true}, SHIFT(161),
  [489] = {.count = 1, .reusable = false}, SHIFT(161),
  [491] = {.count = 1, .reusable = false}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 1),
  [493] = {.count = 1, .reusable = true}, SHIFT(162),
  [495] = {.count = 1, .reusable = true}, SHIFT(163),
  [497] = {.count = 1, .reusable = true}, REDUCE(sym_binary_expression, 3),
  [499] = {.count = 1, .reusable = false}, REDUCE(sym_binary_expression, 3),
  [501] = {.count = 1, .reusable = true}, REDUCE(sym_import_statement, 4),
  [503] = {.count = 1, .reusable = false}, REDUCE(sym_import_statement, 4),
  [505] = {.count = 1, .reusable = true}, SHIFT(167),
  [507] = {.count = 1, .reusable = true}, SHIFT(169),
  [509] = {.count = 1, .reusable = false}, SHIFT(169),
  [511] = {.count = 1, .reusable = true}, REDUCE(sym_parenthesized_query, 3),
  [513] = {.count = 1, .reusable = true}, SHIFT(170),
  [515] = {.count = 1, .reusable = true}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [517] = {.count = 1, .reusable = true}, REDUCE(sym_binary_query, 3),
  [519] = {.count = 1, .reusable = true}, REDUCE(sym_media_statement, 4),
  [521] = {.count = 1, .reusable = false}, REDUCE(sym_media_statement, 4),
  [523] = {.count = 2, .reusable = true}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(76),
  [526] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_statement, 4, .alias_sequence_id = 13),
  [528] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_statement, 4, .alias_sequence_id = 13),
  [530] = {.count = 1, .reusable = true}, REDUCE(sym_keyframe_block_list, 2),
  [532] = {.count = 1, .reusable = false}, REDUCE(sym_keyframe_block_list, 2),
  [534] = {.count = 1, .reusable = true}, SHIFT(171),
  [536] = {.count = 1, .reusable = true}, SHIFT(173),
  [538] = {.count = 1, .reusable = false}, SHIFT(155),
  [540] = {.count = 1, .reusable = false}, SHIFT(42),
  [542] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_arguments, 2),
  [544] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_arguments, 2),
  [546] = {.count = 1, .reusable = true}, REDUCE(sym__selector, 1),
  [548] = {.count = 1, .reusable = true}, REDUCE(sym__value, 1),
  [550] = {.count = 1, .reusable = false}, REDUCE(sym__selector, 1),
  [552] = {.count = 1, .reusable = false}, REDUCE(sym__value, 1),
  [554] = {.count = 1, .reusable = true}, SHIFT(175),
  [556] = {.count = 1, .reusable = true}, SHIFT(176),
  [558] = {.count = 1, .reusable = true}, SHIFT(178),
  [560] = {.count = 1, .reusable = true}, SHIFT(179),
  [562] = {.count = 1, .reusable = false}, SHIFT(179),
  [564] = {.count = 1, .reusable = true}, REDUCE(sym_block, 3),
  [566] = {.count = 1, .reusable = false}, REDUCE(sym_block, 3),
  [568] = {.count = 1, .reusable = true}, SHIFT(180),
  [570] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(2),
  [573] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(3),
  [576] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(4),
  [579] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(5),
  [582] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(6),
  [585] = {.count = 1, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2),
  [587] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(7),
  [590] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(18),
  [593] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(8),
  [596] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(9),
  [599] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(10),
  [602] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(11),
  [605] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(12),
  [608] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(13),
  [611] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(181),
  [614] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(15),
  [617] = {.count = 1, .reusable = true}, REDUCE(sym_at_rule, 4),
  [619] = {.count = 1, .reusable = false}, REDUCE(sym_at_rule, 4),
  [621] = {.count = 2, .reusable = true}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(97),
  [624] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_selector, 4, .alias_sequence_id = 10),
  [626] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_selector, 4, .alias_sequence_id = 10),
  [628] = {.count = 1, .reusable = true}, SHIFT(182),
  [630] = {.count = 1, .reusable = false}, SHIFT(182),
  [632] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_selector, 4, .alias_sequence_id = 14),
  [634] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_selector, 4, .alias_sequence_id = 14),
  [636] = {.count = 1, .reusable = true}, SHIFT(183),
  [638] = {.count = 1, .reusable = true}, SHIFT(184),
  [640] = {.count = 1, .reusable = true}, SHIFT(186),
  [642] = {.count = 1, .reusable = false}, SHIFT(186),
  [644] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 3),
  [646] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 3),
  [648] = {.count = 1, .reusable = true}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2),
  [650] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(113),
  [653] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(115),
  [656] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(119),
  [659] = {.count = 2, .reusable = false}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(116),
  [662] = {.count = 2, .reusable = false}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(117),
  [665] = {.count = 2, .reusable = false}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(118),
  [668] = {.count = 2, .reusable = false}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(119),
  [671] = {.count = 1, .reusable = true}, SHIFT(188),
  [673] = {.count = 1, .reusable = true}, REDUCE(sym_import_statement, 5),
  [675] = {.count = 1, .reusable = false}, REDUCE(sym_import_statement, 5),
  [677] = {.count = 2, .reusable = true}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(122),
  [680] = {.count = 1, .reusable = true}, SHIFT(190),
  [682] = {.count = 1, .reusable = true}, REDUCE(sym_selector_query, 4),
  [684] = {.count = 1, .reusable = true}, SHIFT(191),
  [686] = {.count = 1, .reusable = true}, REDUCE(sym_keyframe_block, 2),
  [688] = {.count = 1, .reusable = true}, REDUCE(sym_keyframe_block_list, 3),
  [690] = {.count = 1, .reusable = false}, REDUCE(sym_keyframe_block_list, 3),
  [692] = {.count = 1, .reusable = true}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2),
  [694] = {.count = 2, .reusable = true}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(136),
  [697] = {.count = 2, .reusable = true}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(31),
  [700] = {.count = 1, .reusable = true}, SHIFT(194),
  [702] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_arguments, 3),
  [704] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_arguments, 3),
  [706] = {.count = 1, .reusable = true}, SHIFT(196),
  [708] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_selector, 5, .alias_sequence_id = 9),
  [710] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_selector, 5, .alias_sequence_id = 9),
  [712] = {.count = 1, .reusable = true}, SHIFT(198),
  [714] = {.count = 1, .reusable = true}, SHIFT(199),
  [716] = {.count = 1, .reusable = true}, REDUCE(sym_last_declaration, 3, .alias_sequence_id = 15),
  [718] = {.count = 1, .reusable = true}, SHIFT(200),
  [720] = {.count = 1, .reusable = true}, SHIFT(201),
  [722] = {.count = 1, .reusable = false}, SHIFT(201),
  [724] = {.count = 1, .reusable = true}, REDUCE(sym_block, 4),
  [726] = {.count = 1, .reusable = false}, REDUCE(sym_block, 4),
  [728] = {.count = 1, .reusable = false}, SHIFT(203),
  [730] = {.count = 1, .reusable = true}, SHIFT(204),
  [732] = {.count = 1, .reusable = true}, SHIFT(205),
  [734] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2),
  [736] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 4),
  [738] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 4),
  [740] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(162),
  [743] = {.count = 1, .reusable = true}, REDUCE(sym_feature_query, 5, .alias_sequence_id = 16),
  [745] = {.count = 1, .reusable = true}, SHIFT(207),
  [747] = {.count = 1, .reusable = true}, REDUCE(aux_sym_pseudo_class_arguments_repeat2, 2),
  [749] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_arguments, 4),
  [751] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_arguments, 4),
  [753] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pseudo_class_arguments_repeat2, 2), SHIFT_REPEAT(175),
  [756] = {.count = 1, .reusable = true}, SHIFT(209),
  [758] = {.count = 1, .reusable = false}, SHIFT(209),
  [760] = {.count = 1, .reusable = false}, REDUCE(sym_declaration, 4, .alias_sequence_id = 15),
  [762] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 4, .alias_sequence_id = 15),
  [764] = {.count = 1, .reusable = true}, SHIFT(210),
  [766] = {.count = 1, .reusable = true}, REDUCE(sym_last_declaration, 4, .alias_sequence_id = 15),
  [768] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 1),
  [770] = {.count = 1, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 1),
  [772] = {.count = 1, .reusable = true}, SHIFT(211),
  [774] = {.count = 1, .reusable = true}, SHIFT(213),
  [776] = {.count = 1, .reusable = false}, SHIFT(213),
  [778] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_selector, 6, .alias_sequence_id = 14),
  [780] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_selector, 6, .alias_sequence_id = 14),
  [782] = {.count = 1, .reusable = true}, SHIFT(214),
  [784] = {.count = 1, .reusable = true}, SHIFT(215),
  [786] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2),
  [788] = {.count = 1, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2),
  [790] = {.count = 1, .reusable = false}, REDUCE(sym_declaration, 5, .alias_sequence_id = 15),
  [792] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 5, .alias_sequence_id = 15),
  [794] = {.count = 1, .reusable = true}, SHIFT(216),
  [796] = {.count = 1, .reusable = true}, REDUCE(sym_last_declaration, 5, .alias_sequence_id = 15),
  [798] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(198),
  [801] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(113),
  [804] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(115),
  [807] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(201),
  [810] = {.count = 2, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(116),
  [813] = {.count = 2, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(117),
  [816] = {.count = 2, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(118),
  [819] = {.count = 2, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(201),
  [822] = {.count = 1, .reusable = true}, SHIFT(217),
  [824] = {.count = 1, .reusable = false}, REDUCE(sym_declaration, 6, .alias_sequence_id = 15),
  [826] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 6, .alias_sequence_id = 15),
  [828] = {.count = 1, .reusable = true}, SHIFT(219),
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
