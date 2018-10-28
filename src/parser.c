#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 202
#define SYMBOL_COUNT 98
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
  sym_plain_value = 47,
  sym_at_keyword = 48,
  sym_comment = 49,
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
  sym__query = 76,
  sym_feature_query = 77,
  sym_parenthesized_query = 78,
  sym_binary_query = 79,
  sym_negated_query = 80,
  sym_selector_query = 81,
  sym__value = 82,
  sym_color_value = 83,
  sym_integer_value = 84,
  sym_float_value = 85,
  sym_call_expression = 86,
  sym_binary_expression = 87,
  sym_arguments = 88,
  aux_sym_stylesheet_repeat1 = 89,
  aux_sym_import_statement_repeat1 = 90,
  aux_sym_keyframe_block_list_repeat1 = 91,
  aux_sym_selectors_repeat1 = 92,
  aux_sym_block_repeat1 = 93,
  aux_sym_pseudo_class_arguments_repeat1 = 94,
  aux_sym_pseudo_class_arguments_repeat2 = 95,
  aux_sym_declaration_repeat1 = 96,
  aux_sym_arguments_repeat1 = 97,
  alias_sym_attribute_name = 98,
  alias_sym_class_name = 99,
  alias_sym_feature_name = 100,
  alias_sym_function_name = 101,
  alias_sym_id_name = 102,
  alias_sym_keyframes_name = 103,
  alias_sym_keyword_query = 104,
  alias_sym_namespace_name = 105,
  alias_sym_plain_value = 106,
  alias_sym_property_name = 107,
  alias_sym_tag_name = 108,
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
  [sym_plain_value] = "plain_value",
  [sym_at_keyword] = "at_keyword",
  [sym_comment] = "comment",
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
  [sym__query] = "_query",
  [sym_feature_query] = "feature_query",
  [sym_parenthesized_query] = "parenthesized_query",
  [sym_binary_query] = "binary_query",
  [sym_negated_query] = "negated_query",
  [sym_selector_query] = "selector_query",
  [sym__value] = "_value",
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
  [sym_plain_value] = {
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
    [1] = alias_sym_feature_name,
  },
  [16] = {
    [0] = alias_sym_property_name,
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
        ADVANCE(42);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == '=')
        ADVANCE(45);
      if (lookahead == '>')
        ADVANCE(46);
      if (lookahead == '@')
        ADVANCE(47);
      if (lookahead == '[')
        ADVANCE(93);
      if (lookahead == ']')
        ADVANCE(94);
      if (lookahead == '^')
        ADVANCE(95);
      if (lookahead == 'a')
        ADVANCE(97);
      if (lookahead == 'f')
        ADVANCE(107);
      if (lookahead == 'n')
        ADVANCE(111);
      if (lookahead == 'o')
        ADVANCE(114);
      if (lookahead == 's')
        ADVANCE(116);
      if (lookahead == 't')
        ADVANCE(124);
      if (lookahead == '{')
        ADVANCE(126);
      if (lookahead == '|')
        ADVANCE(127);
      if (lookahead == '}')
        ADVANCE(129);
      if (lookahead == '~')
        ADVANCE(130);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(140);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'd'))
        ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(145);
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
      if (lookahead == '/')
        ADVANCE(41);
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
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':')
        ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 47:
      if (lookahead == 'c')
        ADVANCE(48);
      if (lookahead == 'i')
        ADVANCE(56);
      if (lookahead == 'k')
        ADVANCE(62);
      if (lookahead == 'm')
        ADVANCE(71);
      if (lookahead == 'n')
        ADVANCE(76);
      if (lookahead == 's')
        ADVANCE(85);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'h')
        ADVANCE(49);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a')
        ADVANCE(50);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'r')
        ADVANCE(51);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 's')
        ADVANCE(52);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e')
        ADVANCE(53);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 't')
        ADVANCE(54);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_ATcharset);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'm')
        ADVANCE(57);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'p')
        ADVANCE(58);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'o')
        ADVANCE(59);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'r')
        ADVANCE(60);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 't')
        ADVANCE(61);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_ATimport);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e')
        ADVANCE(63);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'y')
        ADVANCE(64);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f')
        ADVANCE(65);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'r')
        ADVANCE(66);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a')
        ADVANCE(67);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'm')
        ADVANCE(68);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e')
        ADVANCE(69);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 's')
        ADVANCE(70);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_ATkeyframes);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e')
        ADVANCE(72);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd')
        ADVANCE(73);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i')
        ADVANCE(74);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a')
        ADVANCE(75);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_ATmedia);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a')
        ADVANCE(77);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'm')
        ADVANCE(78);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e')
        ADVANCE(79);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 's')
        ADVANCE(80);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'p')
        ADVANCE(81);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a')
        ADVANCE(82);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c')
        ADVANCE(83);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e')
        ADVANCE(84);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_ATnamespace);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'u')
        ADVANCE(86);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'p')
        ADVANCE(87);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'p')
        ADVANCE(88);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'o')
        ADVANCE(89);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'r')
        ADVANCE(90);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 't')
        ADVANCE(91);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 's')
        ADVANCE(92);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_ATsupports);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(55);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 95:
      if (lookahead == '=')
        ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 97:
      if (lookahead == 'n')
        ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(100);
      END_STATE();
    case 98:
      if (lookahead == 'd')
        ADVANCE(99);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 100:
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(106);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      END_STATE();
    case 107:
      if (lookahead == 'r')
        ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(100);
      END_STATE();
    case 108:
      if (lookahead == 'o')
        ADVANCE(109);
      END_STATE();
    case 109:
      if (lookahead == 'm')
        ADVANCE(110);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_from);
      END_STATE();
    case 111:
      if (lookahead == 'o')
        ADVANCE(112);
      END_STATE();
    case 112:
      if (lookahead == 't')
        ADVANCE(113);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 114:
      if (lookahead == 'r')
        ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 116:
      if (lookahead == 'e')
        ADVANCE(117);
      END_STATE();
    case 117:
      if (lookahead == 'l')
        ADVANCE(118);
      END_STATE();
    case 118:
      if (lookahead == 'e')
        ADVANCE(119);
      END_STATE();
    case 119:
      if (lookahead == 'c')
        ADVANCE(120);
      END_STATE();
    case 120:
      if (lookahead == 't')
        ADVANCE(121);
      END_STATE();
    case 121:
      if (lookahead == 'o')
        ADVANCE(122);
      END_STATE();
    case 122:
      if (lookahead == 'r')
        ADVANCE(123);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_selector);
      END_STATE();
    case 124:
      if (lookahead == 'o')
        ADVANCE(125);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_to);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 127:
      if (lookahead == '=')
        ADVANCE(128);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '=')
        ADVANCE(131);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 132:
      if (lookahead == '-')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(100);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH);
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
        ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(106);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(32);
      END_STATE();
    case 140:
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
        ADVANCE(141);
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
        ADVANCE(42);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == '=')
        ADVANCE(45);
      if (lookahead == '>')
        ADVANCE(46);
      if (lookahead == '@')
        ADVANCE(47);
      if (lookahead == '[')
        ADVANCE(93);
      if (lookahead == ']')
        ADVANCE(94);
      if (lookahead == '^')
        ADVANCE(95);
      if (lookahead == 'a')
        ADVANCE(142);
      if (lookahead == 'f')
        ADVANCE(143);
      if (lookahead == 'n')
        ADVANCE(111);
      if (lookahead == 'o')
        ADVANCE(114);
      if (lookahead == 's')
        ADVANCE(116);
      if (lookahead == 't')
        ADVANCE(124);
      if (lookahead == '{')
        ADVANCE(126);
      if (lookahead == '|')
        ADVANCE(127);
      if (lookahead == '}')
        ADVANCE(129);
      if (lookahead == '~')
        ADVANCE(130);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(140);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 142:
      if (lookahead == 'n')
        ADVANCE(98);
      END_STATE();
    case 143:
      if (lookahead == 'r')
        ADVANCE(108);
      END_STATE();
    case 144:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(100);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(100);
      END_STATE();
    case 146:
      if (lookahead == '-')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(101);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(101);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (lookahead == '-')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(102);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(102);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (lookahead == '-')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(103);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(103);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (lookahead == '-')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(104);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(104);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (lookahead == '-')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(105);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(105);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (lookahead == '-')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(106);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(106);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (lookahead == '-')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(32);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      END_STATE();
    case 160:
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
        ADVANCE(161);
      if (lookahead == '.')
        ADVANCE(162);
      if (lookahead == '/')
        ADVANCE(163);
      if (lookahead == ':')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(47);
      if (lookahead == '[')
        ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(160);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(164);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 163:
      if (lookahead == '*')
        ADVANCE(38);
      if (lookahead == '/')
        ADVANCE(41);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(164);
      END_STATE();
    case 165:
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
      if (lookahead == '+')
        ADVANCE(166);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '-')
        ADVANCE(167);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == '/')
        ADVANCE(163);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(179);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(177);
      END_STATE();
    case 166:
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.')
        ADVANCE(168);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          (lookahead < 'A' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(173);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_plain_value);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']')
        ADVANCE(173);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']')
        ADVANCE(173);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '-')
        ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']')
        ADVANCE(173);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_plain_value);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']')
        ADVANCE(173);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']')
        ADVANCE(173);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']')
        ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-')
        ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          (lookahead < 'A' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(173);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(176);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          (lookahead < 'A' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(173);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(176);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          (lookahead < 'A' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(173);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          (lookahead < 'A' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(173);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH);
      if (lookahead == '.')
        ADVANCE(168);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          (lookahead < 'A' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(173);
      END_STATE();
    case 179:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(16);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == '+')
        ADVANCE(166);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '-')
        ADVANCE(167);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == '/')
        ADVANCE(163);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(179);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(177);
      END_STATE();
    case 180:
      if (lookahead == '(')
        ADVANCE(141);
      if (lookahead == '/')
        ADVANCE(163);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == 'n')
        ADVANCE(181);
      if (lookahead == 's')
        ADVANCE(184);
      if (lookahead == '{')
        ADVANCE(126);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(180);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(164);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(182);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(164);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(183);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(164);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(164);
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
        ADVANCE(164);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(186);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(164);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(164);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(188);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(164);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(189);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(164);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(190);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(164);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(191);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(164);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(164);
      END_STATE();
    case 192:
      if (lookahead == '#')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '+')
        ADVANCE(193);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '.')
        ADVANCE(162);
      if (lookahead == '/')
        ADVANCE(163);
      if (lookahead == ':')
        ADVANCE(42);
      if (lookahead == '>')
        ADVANCE(46);
      if (lookahead == '[')
        ADVANCE(93);
      if (lookahead == '{')
        ADVANCE(126);
      if (lookahead == '~')
        ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 195:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '/')
        ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(195);
      END_STATE();
    case 196:
      if (lookahead == '#')
        ADVANCE(16);
      if (lookahead == '+')
        ADVANCE(193);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '.')
        ADVANCE(162);
      if (lookahead == '/')
        ADVANCE(163);
      if (lookahead == ':')
        ADVANCE(42);
      if (lookahead == '>')
        ADVANCE(46);
      if (lookahead == '[')
        ADVANCE(93);
      if (lookahead == '{')
        ADVANCE(126);
      if (lookahead == '~')
        ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(196);
      END_STATE();
    case 197:
      if (lookahead == '/')
        ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(144);
      END_STATE();
    case 198:
      if (lookahead == '/')
        ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(198);
      END_STATE();
    case 199:
      if (lookahead == '%')
        ADVANCE(200);
      if (lookahead == '(')
        ADVANCE(141);
      if (lookahead == '*')
        ADVANCE(161);
      if (lookahead == '+')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(201);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == '_')
        ADVANCE(164);
      if (lookahead == 'n')
        ADVANCE(202);
      if (lookahead == 's')
        ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(214);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(205);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(200);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(164);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(200);
      if (lookahead == 'o')
        ADVANCE(203);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(205);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(200);
      if (lookahead == 't')
        ADVANCE(204);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(205);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '%')
        ADVANCE(200);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(205);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(200);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(200);
      if (lookahead == 'e')
        ADVANCE(207);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(205);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(200);
      if (lookahead == 'l')
        ADVANCE(208);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(205);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(200);
      if (lookahead == 'e')
        ADVANCE(209);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(205);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(200);
      if (lookahead == 'c')
        ADVANCE(210);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(205);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(200);
      if (lookahead == 't')
        ADVANCE(211);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(205);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(200);
      if (lookahead == 'o')
        ADVANCE(212);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(205);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(200);
      if (lookahead == 'r')
        ADVANCE(213);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(205);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '%')
        ADVANCE(200);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(205);
      END_STATE();
    case 214:
      if (lookahead == '(')
        ADVANCE(141);
      if (lookahead == '*')
        ADVANCE(161);
      if (lookahead == '+')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(201);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == 'n')
        ADVANCE(181);
      if (lookahead == 's')
        ADVANCE(184);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(214);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(164);
      END_STATE();
    case 215:
      if (lookahead == '(')
        ADVANCE(23);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(161);
      if (lookahead == '+')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(201);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == ']')
        ADVANCE(94);
      if (lookahead == 'n')
        ADVANCE(181);
      if (lookahead == 's')
        ADVANCE(184);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(164);
      END_STATE();
    case 216:
      if (lookahead == '(')
        ADVANCE(141);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(161);
      if (lookahead == '+')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(201);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == ']')
        ADVANCE(94);
      if (lookahead == 'n')
        ADVANCE(181);
      if (lookahead == 's')
        ADVANCE(184);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(164);
      END_STATE();
    case 217:
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '/')
        ADVANCE(163);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == 'a')
        ADVANCE(142);
      if (lookahead == 'o')
        ADVANCE(114);
      if (lookahead == '{')
        ADVANCE(126);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(217);
      END_STATE();
    case 218:
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '/')
        ADVANCE(163);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == 'a')
        ADVANCE(142);
      if (lookahead == 'o')
        ADVANCE(114);
      if (lookahead == '{')
        ADVANCE(126);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(218);
      END_STATE();
    case 219:
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(161);
      if (lookahead == '+')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(220);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == ']')
        ADVANCE(94);
      if (lookahead == '{')
        ADVANCE(126);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(221);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(200);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 221:
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(161);
      if (lookahead == '+')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(220);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == ']')
        ADVANCE(94);
      if (lookahead == '{')
        ADVANCE(126);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(221);
      END_STATE();
    case 222:
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(161);
      if (lookahead == '+')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(220);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == ']')
        ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(223);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(200);
      END_STATE();
    case 223:
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(161);
      if (lookahead == '+')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(220);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == ']')
        ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(223);
      END_STATE();
    case 224:
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
        ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(225);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(164);
      END_STATE();
    case 225:
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '/')
        ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(225);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(164);
      END_STATE();
    case 226:
      if (lookahead == '#')
        ADVANCE(16);
      if (lookahead == '(')
        ADVANCE(23);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '+')
        ADVANCE(193);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '.')
        ADVANCE(162);
      if (lookahead == '/')
        ADVANCE(163);
      if (lookahead == ':')
        ADVANCE(42);
      if (lookahead == '>')
        ADVANCE(46);
      if (lookahead == '[')
        ADVANCE(93);
      if (lookahead == '{')
        ADVANCE(126);
      if (lookahead == '~')
        ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(192);
      END_STATE();
    case 227:
      if (lookahead == '$')
        ADVANCE(17);
      if (lookahead == '*')
        ADVANCE(228);
      if (lookahead == '/')
        ADVANCE(163);
      if (lookahead == '=')
        ADVANCE(45);
      if (lookahead == ']')
        ADVANCE(94);
      if (lookahead == '^')
        ADVANCE(95);
      if (lookahead == '|')
        ADVANCE(127);
      if (lookahead == '~')
        ADVANCE(229);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(227);
      END_STATE();
    case 228:
      if (lookahead == '=')
        ADVANCE(26);
      END_STATE();
    case 229:
      if (lookahead == '=')
        ADVANCE(131);
      END_STATE();
    case 230:
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
        ADVANCE(161);
      if (lookahead == '.')
        ADVANCE(162);
      if (lookahead == '/')
        ADVANCE(163);
      if (lookahead == ':')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(47);
      if (lookahead == '[')
        ADVANCE(93);
      if (lookahead == '}')
        ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(230);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(164);
      END_STATE();
    case 231:
      if (lookahead == '(')
        ADVANCE(141);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(161);
      if (lookahead == '+')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(201);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == ']')
        ADVANCE(94);
      if (lookahead == 'n')
        ADVANCE(181);
      if (lookahead == 's')
        ADVANCE(184);
      if (lookahead == '{')
        ADVANCE(126);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(231);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(164);
      END_STATE();
    case 232:
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(16);
      if (lookahead == '&')
        ADVANCE(19);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(161);
      if (lookahead == '+')
        ADVANCE(166);
      if (lookahead == '-')
        ADVANCE(167);
      if (lookahead == '.')
        ADVANCE(36);
      if (lookahead == '/')
        ADVANCE(163);
      if (lookahead == ':')
        ADVANCE(42);
      if (lookahead == '[')
        ADVANCE(93);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(232);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(177);
      END_STATE();
    case 233:
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '/')
        ADVANCE(163);
      if (lookahead == ':')
        ADVANCE(234);
      if (lookahead == 'a')
        ADVANCE(142);
      if (lookahead == 'o')
        ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(233);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 235:
      if (lookahead == '+')
        ADVANCE(236);
      if (lookahead == '-')
        ADVANCE(236);
      if (lookahead == '/')
        ADVANCE(163);
      if (lookahead == 'f')
        ADVANCE(143);
      if (lookahead == 't')
        ADVANCE(124);
      if (lookahead == '}')
        ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(235);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(237);
      END_STATE();
    case 236:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(237);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(237);
      END_STATE();
    case 238:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(16);
      if (lookahead == '%')
        ADVANCE(200);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(161);
      if (lookahead == '+')
        ADVANCE(27);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '-')
        ADVANCE(239);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == '_')
        ADVANCE(177);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(240);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(243);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(242);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.')
        ADVANCE(168);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(178);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          (lookahead < 'A' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(173);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(241);
      if (lookahead == '-')
        ADVANCE(175);
      if (lookahead == '_')
        ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          (lookahead < 'A' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(173);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          (lookahead < 'A' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(173);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(241);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(177);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';' &&
          (lookahead < 'A' || lookahead > '[') &&
          lookahead != ']')
        ADVANCE(173);
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
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(161);
      if (lookahead == '+')
        ADVANCE(27);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '-')
        ADVANCE(239);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(243);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(177);
      END_STATE();
    case 244:
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
        ADVANCE(161);
      if (lookahead == '+')
        ADVANCE(27);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '-')
        ADVANCE(239);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(243);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(177);
      END_STATE();
    case 245:
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(16);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(161);
      if (lookahead == '+')
        ADVANCE(27);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '-')
        ADVANCE(239);
      if (lookahead == '.')
        ADVANCE(36);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ':')
        ADVANCE(42);
      if (lookahead == '>')
        ADVANCE(46);
      if (lookahead == '[')
        ADVANCE(93);
      if (lookahead == '~')
        ADVANCE(194);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(245);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(177);
      END_STATE();
    case 246:
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(16);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '+')
        ADVANCE(166);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '-')
        ADVANCE(167);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == '/')
        ADVANCE(163);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(246);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(177);
      END_STATE();
    case 247:
      if (lookahead == '#')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '+')
        ADVANCE(193);
      if (lookahead == '.')
        ADVANCE(162);
      if (lookahead == '/')
        ADVANCE(163);
      if (lookahead == ':')
        ADVANCE(42);
      if (lookahead == '>')
        ADVANCE(46);
      if (lookahead == '[')
        ADVANCE(93);
      if (lookahead == '~')
        ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(247);
      END_STATE();
    case 248:
      if (lookahead == '/')
        ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(249);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(250);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(164);
      END_STATE();
    case 249:
      if (lookahead == '/')
        ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(249);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(164);
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
        ADVANCE(164);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(252);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(164);
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
        ADVANCE(164);
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
        ADVANCE(164);
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
        ADVANCE(164);
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
        ADVANCE(164);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(257);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(164);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(164);
      END_STATE();
    case 258:
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
        ADVANCE(161);
      if (lookahead == '+')
        ADVANCE(27);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '-')
        ADVANCE(239);
      if (lookahead == '.')
        ADVANCE(36);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ':')
        ADVANCE(42);
      if (lookahead == '>')
        ADVANCE(46);
      if (lookahead == '[')
        ADVANCE(93);
      if (lookahead == '~')
        ADVANCE(194);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(245);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(177);
      END_STATE();
    case 259:
      if (lookahead == '#')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '+')
        ADVANCE(193);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '.')
        ADVANCE(162);
      if (lookahead == '/')
        ADVANCE(163);
      if (lookahead == ':')
        ADVANCE(42);
      if (lookahead == '>')
        ADVANCE(46);
      if (lookahead == '[')
        ADVANCE(93);
      if (lookahead == '~')
        ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(259);
      END_STATE();
    case 260:
      if (lookahead == '*')
        ADVANCE(161);
      if (lookahead == '+')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(220);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ']')
        ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(260);
      END_STATE();
    case 261:
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(161);
      if (lookahead == '+')
        ADVANCE(193);
      if (lookahead == '-')
        ADVANCE(220);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(261);
      END_STATE();
    case 262:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(16);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == '*')
        ADVANCE(161);
      if (lookahead == '+')
        ADVANCE(27);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '-')
        ADVANCE(239);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(262);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(177);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 160},
  [2] = {.lex_state = 165},
  [3] = {.lex_state = 180},
  [4] = {.lex_state = 165},
  [5] = {.lex_state = 160},
  [6] = {.lex_state = 160},
  [7] = {.lex_state = 180},
  [8] = {.lex_state = 192, .external_lex_state = 1},
  [9] = {.lex_state = 160},
  [10] = {.lex_state = 160},
  [11] = {.lex_state = 160},
  [12] = {.lex_state = 160},
  [13] = {.lex_state = 160},
  [14] = {.lex_state = 192, .external_lex_state = 1},
  [15] = {.lex_state = 180},
  [16] = {.lex_state = 195},
  [17] = {.lex_state = 180},
  [18] = {.lex_state = 196, .external_lex_state = 1},
  [19] = {.lex_state = 160},
  [20] = {.lex_state = 197},
  [21] = {.lex_state = 199},
  [22] = {.lex_state = 199},
  [23] = {.lex_state = 215},
  [24] = {.lex_state = 214},
  [25] = {.lex_state = 180},
  [26] = {.lex_state = 180},
  [27] = {.lex_state = 180},
  [28] = {.lex_state = 217},
  [29] = {.lex_state = 218},
  [30] = {.lex_state = 219},
  [31] = {.lex_state = 222},
  [32] = {.lex_state = 199},
  [33] = {.lex_state = 165},
  [34] = {.lex_state = 224},
  [35] = {.lex_state = 180},
  [36] = {.lex_state = 180},
  [37] = {.lex_state = 218},
  [38] = {.lex_state = 192, .external_lex_state = 1},
  [39] = {.lex_state = 226, .external_lex_state = 1},
  [40] = {.lex_state = 192, .external_lex_state = 1},
  [41] = {.lex_state = 192, .external_lex_state = 1},
  [42] = {.lex_state = 227},
  [43] = {.lex_state = 230},
  [44] = {.lex_state = 230},
  [45] = {.lex_state = 180},
  [46] = {.lex_state = 218},
  [47] = {.lex_state = 230},
  [48] = {.lex_state = 160},
  [49] = {.lex_state = 160},
  [50] = {.lex_state = 160},
  [51] = {.lex_state = 160},
  [52] = {.lex_state = 160},
  [53] = {.lex_state = 160},
  [54] = {.lex_state = 160},
  [55] = {.lex_state = 160},
  [56] = {.lex_state = 160},
  [57] = {.lex_state = 160},
  [58] = {.lex_state = 196},
  [59] = {.lex_state = 160},
  [60] = {.lex_state = 216},
  [61] = {.lex_state = 231},
  [62] = {.lex_state = 216},
  [63] = {.lex_state = 232},
  [64] = {.lex_state = 216},
  [65] = {.lex_state = 230},
  [66] = {.lex_state = 165},
  [67] = {.lex_state = 180},
  [68] = {.lex_state = 218},
  [69] = {.lex_state = 180},
  [70] = {.lex_state = 233},
  [71] = {.lex_state = 233},
  [72] = {.lex_state = 217},
  [73] = {.lex_state = 160},
  [74] = {.lex_state = 180},
  [75] = {.lex_state = 180},
  [76] = {.lex_state = 230},
  [77] = {.lex_state = 196},
  [78] = {.lex_state = 230},
  [79] = {.lex_state = 165},
  [80] = {.lex_state = 230},
  [81] = {.lex_state = 165},
  [82] = {.lex_state = 165},
  [83] = {.lex_state = 235},
  [84] = {.lex_state = 230},
  [85] = {.lex_state = 180},
  [86] = {.lex_state = 230},
  [87] = {.lex_state = 232},
  [88] = {.lex_state = 192, .external_lex_state = 1},
  [89] = {.lex_state = 165},
  [90] = {.lex_state = 192, .external_lex_state = 1},
  [91] = {.lex_state = 230},
  [92] = {.lex_state = 196, .external_lex_state = 1},
  [93] = {.lex_state = 230},
  [94] = {.lex_state = 180},
  [95] = {.lex_state = 230},
  [96] = {.lex_state = 180},
  [97] = {.lex_state = 218},
  [98] = {.lex_state = 192, .external_lex_state = 1},
  [99] = {.lex_state = 196, .external_lex_state = 1},
  [100] = {.lex_state = 192, .external_lex_state = 1},
  [101] = {.lex_state = 226, .external_lex_state = 1},
  [102] = {.lex_state = 192, .external_lex_state = 1},
  [103] = {.lex_state = 192, .external_lex_state = 1},
  [104] = {.lex_state = 227},
  [105] = {.lex_state = 192, .external_lex_state = 1},
  [106] = {.lex_state = 192, .external_lex_state = 1},
  [107] = {.lex_state = 192, .external_lex_state = 1},
  [108] = {.lex_state = 196},
  [109] = {.lex_state = 197},
  [110] = {.lex_state = 216},
  [111] = {.lex_state = 238},
  [112] = {.lex_state = 238},
  [113] = {.lex_state = 244},
  [114] = {.lex_state = 245},
  [115] = {.lex_state = 246},
  [116] = {.lex_state = 216},
  [117] = {.lex_state = 180},
  [118] = {.lex_state = 230},
  [119] = {.lex_state = 180},
  [120] = {.lex_state = 165},
  [121] = {.lex_state = 165},
  [122] = {.lex_state = 217},
  [123] = {.lex_state = 180},
  [124] = {.lex_state = 247, .external_lex_state = 1},
  [125] = {.lex_state = 218},
  [126] = {.lex_state = 217},
  [127] = {.lex_state = 230},
  [128] = {.lex_state = 196},
  [129] = {.lex_state = 230},
  [130] = {.lex_state = 230},
  [131] = {.lex_state = 180},
  [132] = {.lex_state = 235},
  [133] = {.lex_state = 248},
  [134] = {.lex_state = 192, .external_lex_state = 1},
  [135] = {.lex_state = 245, .external_lex_state = 1},
  [136] = {.lex_state = 258, .external_lex_state = 1},
  [137] = {.lex_state = 259, .external_lex_state = 1},
  [138] = {.lex_state = 246},
  [139] = {.lex_state = 260},
  [140] = {.lex_state = 165},
  [141] = {.lex_state = 230},
  [142] = {.lex_state = 230},
  [143] = {.lex_state = 218},
  [144] = {.lex_state = 230},
  [145] = {.lex_state = 218},
  [146] = {.lex_state = 192, .external_lex_state = 1},
  [147] = {.lex_state = 165},
  [148] = {.lex_state = 192, .external_lex_state = 1},
  [149] = {.lex_state = 244},
  [150] = {.lex_state = 244},
  [151] = {.lex_state = 244},
  [152] = {.lex_state = 232},
  [153] = {.lex_state = 244},
  [154] = {.lex_state = 165},
  [155] = {.lex_state = 165},
  [156] = {.lex_state = 216},
  [157] = {.lex_state = 246},
  [158] = {.lex_state = 224},
  [159] = {.lex_state = 218},
  [160] = {.lex_state = 230},
  [161] = {.lex_state = 165},
  [162] = {.lex_state = 261},
  [163] = {.lex_state = 217},
  [164] = {.lex_state = 230},
  [165] = {.lex_state = 235},
  [166] = {.lex_state = 230},
  [167] = {.lex_state = 235},
  [168] = {.lex_state = 232},
  [169] = {.lex_state = 192, .external_lex_state = 1},
  [170] = {.lex_state = 224},
  [171] = {.lex_state = 192, .external_lex_state = 1},
  [172] = {.lex_state = 262},
  [173] = {.lex_state = 260},
  [174] = {.lex_state = 244},
  [175] = {.lex_state = 246},
  [176] = {.lex_state = 244},
  [177] = {.lex_state = 246},
  [178] = {.lex_state = 216},
  [179] = {.lex_state = 224},
  [180] = {.lex_state = 217},
  [181] = {.lex_state = 235},
  [182] = {.lex_state = 230},
  [183] = {.lex_state = 259, .external_lex_state = 1},
  [184] = {.lex_state = 246},
  [185] = {.lex_state = 192, .external_lex_state = 1},
  [186] = {.lex_state = 224},
  [187] = {.lex_state = 165},
  [188] = {.lex_state = 230},
  [189] = {.lex_state = 165},
  [190] = {.lex_state = 262},
  [191] = {.lex_state = 165},
  [192] = {.lex_state = 192, .external_lex_state = 1},
  [193] = {.lex_state = 244},
  [194] = {.lex_state = 224},
  [195] = {.lex_state = 235},
  [196] = {.lex_state = 262},
  [197] = {.lex_state = 230},
  [198] = {.lex_state = 165},
  [199] = {.lex_state = 165},
  [200] = {.lex_state = 244},
  [201] = {.lex_state = 230},
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
    [sym__value] = STATE(24),
    [sym_color_value] = STATE(24),
    [sym_integer_value] = STATE(24),
    [sym_float_value] = STATE(24),
    [sym_call_expression] = STATE(24),
    [sym_binary_expression] = STATE(24),
    [anon_sym_POUND] = ACTIONS(39),
    [sym_string_value] = ACTIONS(41),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(43),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(45),
    [sym_identifier] = ACTIONS(47),
    [sym_plain_value] = ACTIONS(49),
    [sym_comment] = ACTIONS(37),
  },
  [3] = {
    [sym__query] = STATE(29),
    [sym_feature_query] = STATE(29),
    [sym_parenthesized_query] = STATE(29),
    [sym_binary_query] = STATE(29),
    [sym_negated_query] = STATE(29),
    [sym_selector_query] = STATE(29),
    [anon_sym_LPAREN2] = ACTIONS(51),
    [anon_sym_not] = ACTIONS(53),
    [anon_sym_selector] = ACTIONS(55),
    [sym_identifier] = ACTIONS(57),
    [sym_comment] = ACTIONS(37),
  },
  [4] = {
    [sym__value] = STATE(32),
    [sym_color_value] = STATE(32),
    [sym_integer_value] = STATE(32),
    [sym_float_value] = STATE(32),
    [sym_call_expression] = STATE(32),
    [sym_binary_expression] = STATE(32),
    [anon_sym_POUND] = ACTIONS(39),
    [sym_string_value] = ACTIONS(59),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(61),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(63),
    [sym_identifier] = ACTIONS(47),
    [sym_plain_value] = ACTIONS(65),
    [sym_comment] = ACTIONS(37),
  },
  [5] = {
    [sym_call_expression] = STATE(33),
    [sym_string_value] = ACTIONS(67),
    [sym_identifier] = ACTIONS(69),
    [sym_comment] = ACTIONS(37),
  },
  [6] = {
    [sym_identifier] = ACTIONS(71),
    [sym_comment] = ACTIONS(37),
  },
  [7] = {
    [sym__query] = STATE(37),
    [sym_feature_query] = STATE(37),
    [sym_parenthesized_query] = STATE(37),
    [sym_binary_query] = STATE(37),
    [sym_negated_query] = STATE(37),
    [sym_selector_query] = STATE(37),
    [anon_sym_LPAREN2] = ACTIONS(51),
    [anon_sym_not] = ACTIONS(73),
    [anon_sym_selector] = ACTIONS(55),
    [sym_identifier] = ACTIONS(57),
    [sym_comment] = ACTIONS(37),
  },
  [8] = {
    [sym__descendant_operator] = ACTIONS(75),
    [anon_sym_COMMA] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_DOT] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(77),
    [anon_sym_COLON_COLON] = ACTIONS(75),
    [anon_sym_POUND] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(75),
    [anon_sym_GT] = ACTIONS(75),
    [anon_sym_TILDE] = ACTIONS(75),
    [anon_sym_PLUS] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(75),
    [sym_comment] = ACTIONS(37),
  },
  [9] = {
    [sym_identifier] = ACTIONS(79),
    [sym_comment] = ACTIONS(37),
  },
  [10] = {
    [sym_identifier] = ACTIONS(81),
    [sym_comment] = ACTIONS(37),
  },
  [11] = {
    [sym_identifier] = ACTIONS(83),
    [sym_comment] = ACTIONS(37),
  },
  [12] = {
    [sym_identifier] = ACTIONS(85),
    [sym_comment] = ACTIONS(37),
  },
  [13] = {
    [sym_identifier] = ACTIONS(87),
    [sym_comment] = ACTIONS(37),
  },
  [14] = {
    [sym__descendant_operator] = ACTIONS(89),
    [anon_sym_COMMA] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_DOT] = ACTIONS(89),
    [anon_sym_COLON] = ACTIONS(91),
    [anon_sym_COLON_COLON] = ACTIONS(89),
    [anon_sym_POUND] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_TILDE] = ACTIONS(89),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_RPAREN] = ACTIONS(89),
    [sym_comment] = ACTIONS(37),
  },
  [15] = {
    [sym_block] = STATE(43),
    [sym__query] = STATE(46),
    [sym_feature_query] = STATE(46),
    [sym_parenthesized_query] = STATE(46),
    [sym_binary_query] = STATE(46),
    [sym_negated_query] = STATE(46),
    [sym_selector_query] = STATE(46),
    [anon_sym_SEMI] = ACTIONS(93),
    [anon_sym_LBRACE] = ACTIONS(95),
    [anon_sym_LPAREN2] = ACTIONS(51),
    [anon_sym_not] = ACTIONS(97),
    [anon_sym_selector] = ACTIONS(55),
    [sym_identifier] = ACTIONS(57),
    [sym_comment] = ACTIONS(37),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(99),
    [sym_comment] = ACTIONS(37),
  },
  [17] = {
    [sym_block] = STATE(47),
    [anon_sym_LBRACE] = ACTIONS(95),
    [sym_comment] = ACTIONS(37),
  },
  [18] = {
    [aux_sym_selectors_repeat1] = STATE(58),
    [sym__descendant_operator] = ACTIONS(101),
    [anon_sym_COMMA] = ACTIONS(103),
    [anon_sym_LBRACE] = ACTIONS(105),
    [anon_sym_DOT] = ACTIONS(107),
    [anon_sym_COLON] = ACTIONS(109),
    [anon_sym_COLON_COLON] = ACTIONS(111),
    [anon_sym_POUND] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(117),
    [anon_sym_TILDE] = ACTIONS(119),
    [anon_sym_PLUS] = ACTIONS(121),
    [sym_comment] = ACTIONS(37),
  },
  [19] = {
    [sym_import_statement] = STATE(59),
    [sym_media_statement] = STATE(59),
    [sym_charset_statement] = STATE(59),
    [sym_namespace_statement] = STATE(59),
    [sym_keyframes_statement] = STATE(59),
    [sym_supports_statement] = STATE(59),
    [sym_at_rule] = STATE(59),
    [sym_rule_set] = STATE(59),
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
    [aux_sym_stylesheet_repeat1] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(123),
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
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH] = ACTIONS(125),
    [sym_comment] = ACTIONS(37),
  },
  [21] = {
    [anon_sym_SEMI] = ACTIONS(127),
    [anon_sym_STAR] = ACTIONS(127),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_LPAREN2] = ACTIONS(127),
    [anon_sym_not] = ACTIONS(129),
    [anon_sym_selector] = ACTIONS(129),
    [sym_unit] = ACTIONS(131),
    [anon_sym_DASH] = ACTIONS(129),
    [anon_sym_SLASH] = ACTIONS(129),
    [sym_identifier] = ACTIONS(129),
    [sym_comment] = ACTIONS(37),
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
    [sym_arguments] = STATE(64),
    [anon_sym_SEMI] = ACTIONS(139),
    [anon_sym_STAR] = ACTIONS(139),
    [anon_sym_RBRACK] = ACTIONS(139),
    [anon_sym_PLUS] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(141),
    [anon_sym_RPAREN] = ACTIONS(139),
    [anon_sym_LPAREN2] = ACTIONS(143),
    [anon_sym_not] = ACTIONS(143),
    [anon_sym_selector] = ACTIONS(143),
    [anon_sym_DASH] = ACTIONS(143),
    [anon_sym_SLASH] = ACTIONS(143),
    [sym_identifier] = ACTIONS(143),
    [sym_comment] = ACTIONS(37),
  },
  [24] = {
    [sym__query] = STATE(68),
    [sym_feature_query] = STATE(68),
    [sym_parenthesized_query] = STATE(68),
    [sym_binary_query] = STATE(68),
    [sym_negated_query] = STATE(68),
    [sym_selector_query] = STATE(68),
    [anon_sym_SEMI] = ACTIONS(145),
    [anon_sym_STAR] = ACTIONS(147),
    [anon_sym_PLUS] = ACTIONS(147),
    [anon_sym_LPAREN2] = ACTIONS(51),
    [anon_sym_not] = ACTIONS(149),
    [anon_sym_selector] = ACTIONS(55),
    [anon_sym_DASH] = ACTIONS(151),
    [anon_sym_SLASH] = ACTIONS(151),
    [sym_identifier] = ACTIONS(57),
    [sym_comment] = ACTIONS(37),
  },
  [25] = {
    [sym__query] = STATE(71),
    [sym_feature_query] = STATE(71),
    [sym_parenthesized_query] = STATE(71),
    [sym_binary_query] = STATE(71),
    [sym_negated_query] = STATE(71),
    [sym_selector_query] = STATE(71),
    [anon_sym_LPAREN2] = ACTIONS(51),
    [anon_sym_not] = ACTIONS(153),
    [anon_sym_selector] = ACTIONS(55),
    [sym_identifier] = ACTIONS(155),
    [sym_comment] = ACTIONS(37),
  },
  [26] = {
    [sym__query] = STATE(72),
    [sym_feature_query] = STATE(72),
    [sym_parenthesized_query] = STATE(72),
    [sym_binary_query] = STATE(72),
    [sym_negated_query] = STATE(72),
    [sym_selector_query] = STATE(72),
    [anon_sym_LPAREN2] = ACTIONS(51),
    [anon_sym_not] = ACTIONS(53),
    [anon_sym_selector] = ACTIONS(55),
    [sym_identifier] = ACTIONS(57),
    [sym_comment] = ACTIONS(37),
  },
  [27] = {
    [anon_sym_LPAREN2] = ACTIONS(157),
    [sym_comment] = ACTIONS(37),
  },
  [28] = {
    [anon_sym_COMMA] = ACTIONS(159),
    [anon_sym_SEMI] = ACTIONS(159),
    [anon_sym_LBRACE] = ACTIONS(159),
    [anon_sym_RPAREN] = ACTIONS(159),
    [anon_sym_and] = ACTIONS(159),
    [anon_sym_or] = ACTIONS(159),
    [sym_comment] = ACTIONS(37),
  },
  [29] = {
    [sym_block] = STATE(76),
    [aux_sym_import_statement_repeat1] = STATE(77),
    [anon_sym_COMMA] = ACTIONS(161),
    [anon_sym_LBRACE] = ACTIONS(95),
    [anon_sym_and] = ACTIONS(163),
    [anon_sym_or] = ACTIONS(163),
    [sym_comment] = ACTIONS(37),
  },
  [30] = {
    [anon_sym_SEMI] = ACTIONS(127),
    [anon_sym_LBRACE] = ACTIONS(127),
    [anon_sym_STAR] = ACTIONS(127),
    [anon_sym_RBRACK] = ACTIONS(127),
    [anon_sym_PLUS] = ACTIONS(127),
    [anon_sym_RPAREN] = ACTIONS(127),
    [sym_unit] = ACTIONS(165),
    [anon_sym_DASH] = ACTIONS(127),
    [anon_sym_SLASH] = ACTIONS(129),
    [sym_comment] = ACTIONS(37),
  },
  [31] = {
    [anon_sym_SEMI] = ACTIONS(133),
    [anon_sym_STAR] = ACTIONS(133),
    [anon_sym_RBRACK] = ACTIONS(133),
    [anon_sym_PLUS] = ACTIONS(133),
    [anon_sym_RPAREN] = ACTIONS(133),
    [sym_unit] = ACTIONS(167),
    [anon_sym_DASH] = ACTIONS(133),
    [anon_sym_SLASH] = ACTIONS(135),
    [sym_comment] = ACTIONS(37),
  },
  [32] = {
    [anon_sym_SEMI] = ACTIONS(169),
    [anon_sym_STAR] = ACTIONS(171),
    [anon_sym_PLUS] = ACTIONS(171),
    [anon_sym_DASH] = ACTIONS(171),
    [anon_sym_SLASH] = ACTIONS(173),
    [sym_comment] = ACTIONS(37),
  },
  [33] = {
    [anon_sym_SEMI] = ACTIONS(175),
    [sym_comment] = ACTIONS(37),
  },
  [34] = {
    [sym_call_expression] = STATE(81),
    [sym_arguments] = STATE(64),
    [anon_sym_LPAREN] = ACTIONS(141),
    [sym_string_value] = ACTIONS(177),
    [sym_identifier] = ACTIONS(179),
    [sym_comment] = ACTIONS(37),
  },
  [35] = {
    [sym_keyframe_block_list] = STATE(84),
    [anon_sym_LBRACE] = ACTIONS(181),
    [sym_comment] = ACTIONS(37),
  },
  [36] = {
    [sym__query] = STATE(72),
    [sym_feature_query] = STATE(72),
    [sym_parenthesized_query] = STATE(72),
    [sym_binary_query] = STATE(72),
    [sym_negated_query] = STATE(72),
    [sym_selector_query] = STATE(72),
    [anon_sym_LPAREN2] = ACTIONS(51),
    [anon_sym_not] = ACTIONS(73),
    [anon_sym_selector] = ACTIONS(55),
    [sym_identifier] = ACTIONS(57),
    [sym_comment] = ACTIONS(37),
  },
  [37] = {
    [sym_block] = STATE(86),
    [anon_sym_LBRACE] = ACTIONS(95),
    [anon_sym_and] = ACTIONS(183),
    [anon_sym_or] = ACTIONS(183),
    [sym_comment] = ACTIONS(37),
  },
  [38] = {
    [sym__descendant_operator] = ACTIONS(185),
    [anon_sym_COMMA] = ACTIONS(185),
    [anon_sym_LBRACE] = ACTIONS(185),
    [anon_sym_DOT] = ACTIONS(185),
    [anon_sym_COLON] = ACTIONS(187),
    [anon_sym_COLON_COLON] = ACTIONS(185),
    [anon_sym_POUND] = ACTIONS(185),
    [anon_sym_LBRACK] = ACTIONS(185),
    [anon_sym_GT] = ACTIONS(185),
    [anon_sym_TILDE] = ACTIONS(185),
    [anon_sym_PLUS] = ACTIONS(185),
    [anon_sym_RPAREN] = ACTIONS(185),
    [sym_comment] = ACTIONS(37),
  },
  [39] = {
    [sym_pseudo_class_arguments] = STATE(88),
    [sym__descendant_operator] = ACTIONS(189),
    [anon_sym_COMMA] = ACTIONS(189),
    [anon_sym_LBRACE] = ACTIONS(189),
    [anon_sym_DOT] = ACTIONS(189),
    [anon_sym_COLON] = ACTIONS(191),
    [anon_sym_COLON_COLON] = ACTIONS(189),
    [anon_sym_POUND] = ACTIONS(189),
    [anon_sym_LBRACK] = ACTIONS(189),
    [anon_sym_GT] = ACTIONS(189),
    [anon_sym_TILDE] = ACTIONS(189),
    [anon_sym_PLUS] = ACTIONS(189),
    [anon_sym_LPAREN] = ACTIONS(193),
    [anon_sym_RPAREN] = ACTIONS(189),
    [sym_comment] = ACTIONS(37),
  },
  [40] = {
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
    [anon_sym_RPAREN] = ACTIONS(195),
    [sym_comment] = ACTIONS(37),
  },
  [41] = {
    [sym__descendant_operator] = ACTIONS(199),
    [anon_sym_COMMA] = ACTIONS(199),
    [anon_sym_LBRACE] = ACTIONS(199),
    [anon_sym_DOT] = ACTIONS(199),
    [anon_sym_COLON] = ACTIONS(201),
    [anon_sym_COLON_COLON] = ACTIONS(199),
    [anon_sym_POUND] = ACTIONS(199),
    [anon_sym_LBRACK] = ACTIONS(199),
    [anon_sym_GT] = ACTIONS(199),
    [anon_sym_TILDE] = ACTIONS(199),
    [anon_sym_PLUS] = ACTIONS(199),
    [anon_sym_RPAREN] = ACTIONS(199),
    [sym_comment] = ACTIONS(37),
  },
  [42] = {
    [anon_sym_EQ] = ACTIONS(203),
    [anon_sym_TILDE_EQ] = ACTIONS(203),
    [anon_sym_CARET_EQ] = ACTIONS(203),
    [anon_sym_PIPE_EQ] = ACTIONS(203),
    [anon_sym_STAR_EQ] = ACTIONS(203),
    [anon_sym_DOLLAR_EQ] = ACTIONS(203),
    [anon_sym_RBRACK] = ACTIONS(205),
    [sym_comment] = ACTIONS(37),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(207),
    [anon_sym_ATimport] = ACTIONS(209),
    [anon_sym_ATmedia] = ACTIONS(209),
    [anon_sym_ATcharset] = ACTIONS(209),
    [anon_sym_ATnamespace] = ACTIONS(209),
    [anon_sym_ATkeyframes] = ACTIONS(209),
    [anon_sym_RBRACE] = ACTIONS(207),
    [anon_sym_ATsupports] = ACTIONS(209),
    [sym_nesting_selector] = ACTIONS(207),
    [anon_sym_STAR] = ACTIONS(207),
    [anon_sym_DOT] = ACTIONS(207),
    [anon_sym_COLON] = ACTIONS(209),
    [anon_sym_COLON_COLON] = ACTIONS(207),
    [anon_sym_POUND] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(207),
    [sym_string_value] = ACTIONS(207),
    [sym_identifier] = ACTIONS(207),
    [sym_at_keyword] = ACTIONS(209),
    [sym_comment] = ACTIONS(37),
  },
  [44] = {
    [sym_import_statement] = STATE(93),
    [sym_media_statement] = STATE(93),
    [sym_charset_statement] = STATE(93),
    [sym_namespace_statement] = STATE(93),
    [sym_keyframes_statement] = STATE(93),
    [sym_supports_statement] = STATE(93),
    [sym_at_rule] = STATE(93),
    [sym_rule_set] = STATE(93),
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
    [sym_declaration] = STATE(93),
    [aux_sym_block_repeat1] = STATE(93),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATmedia] = ACTIONS(9),
    [anon_sym_ATcharset] = ACTIONS(11),
    [anon_sym_ATnamespace] = ACTIONS(13),
    [anon_sym_ATkeyframes] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(211),
    [anon_sym_ATsupports] = ACTIONS(17),
    [sym_nesting_selector] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_string_value] = ACTIONS(19),
    [sym_identifier] = ACTIONS(213),
    [sym_at_keyword] = ACTIONS(35),
    [sym_comment] = ACTIONS(37),
  },
  [45] = {
    [sym__query] = STATE(72),
    [sym_feature_query] = STATE(72),
    [sym_parenthesized_query] = STATE(72),
    [sym_binary_query] = STATE(72),
    [sym_negated_query] = STATE(72),
    [sym_selector_query] = STATE(72),
    [anon_sym_LPAREN2] = ACTIONS(51),
    [anon_sym_not] = ACTIONS(97),
    [anon_sym_selector] = ACTIONS(55),
    [sym_identifier] = ACTIONS(57),
    [sym_comment] = ACTIONS(37),
  },
  [46] = {
    [sym_block] = STATE(95),
    [aux_sym_import_statement_repeat1] = STATE(97),
    [anon_sym_COMMA] = ACTIONS(215),
    [anon_sym_SEMI] = ACTIONS(217),
    [anon_sym_LBRACE] = ACTIONS(95),
    [anon_sym_and] = ACTIONS(219),
    [anon_sym_or] = ACTIONS(219),
    [sym_comment] = ACTIONS(37),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(221),
    [anon_sym_ATimport] = ACTIONS(223),
    [anon_sym_ATmedia] = ACTIONS(223),
    [anon_sym_ATcharset] = ACTIONS(223),
    [anon_sym_ATnamespace] = ACTIONS(223),
    [anon_sym_ATkeyframes] = ACTIONS(223),
    [anon_sym_RBRACE] = ACTIONS(221),
    [anon_sym_ATsupports] = ACTIONS(223),
    [sym_nesting_selector] = ACTIONS(221),
    [anon_sym_STAR] = ACTIONS(221),
    [anon_sym_DOT] = ACTIONS(221),
    [anon_sym_COLON] = ACTIONS(223),
    [anon_sym_COLON_COLON] = ACTIONS(221),
    [anon_sym_POUND] = ACTIONS(221),
    [anon_sym_LBRACK] = ACTIONS(221),
    [sym_string_value] = ACTIONS(221),
    [sym_identifier] = ACTIONS(221),
    [sym_at_keyword] = ACTIONS(223),
    [sym_comment] = ACTIONS(37),
  },
  [48] = {
    [sym__selector] = STATE(98),
    [sym_universal_selector] = STATE(98),
    [sym_class_selector] = STATE(98),
    [sym_pseudo_class_selector] = STATE(98),
    [sym_pseudo_element_selector] = STATE(98),
    [sym_id_selector] = STATE(98),
    [sym_attribute_selector] = STATE(98),
    [sym_child_selector] = STATE(98),
    [sym_descendant_selector] = STATE(98),
    [sym_sibling_selector] = STATE(98),
    [sym_adjacent_sibling_selector] = STATE(98),
    [sym_nesting_selector] = ACTIONS(225),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_string_value] = ACTIONS(225),
    [sym_identifier] = ACTIONS(33),
    [sym_comment] = ACTIONS(37),
  },
  [49] = {
    [sym__selector] = STATE(99),
    [sym_universal_selector] = STATE(99),
    [sym_class_selector] = STATE(99),
    [sym_pseudo_class_selector] = STATE(99),
    [sym_pseudo_element_selector] = STATE(99),
    [sym_id_selector] = STATE(99),
    [sym_attribute_selector] = STATE(99),
    [sym_child_selector] = STATE(99),
    [sym_descendant_selector] = STATE(99),
    [sym_sibling_selector] = STATE(99),
    [sym_adjacent_sibling_selector] = STATE(99),
    [sym_nesting_selector] = ACTIONS(227),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_string_value] = ACTIONS(227),
    [sym_identifier] = ACTIONS(33),
    [sym_comment] = ACTIONS(37),
  },
  [50] = {
    [sym_identifier] = ACTIONS(229),
    [sym_comment] = ACTIONS(37),
  },
  [51] = {
    [sym_identifier] = ACTIONS(231),
    [sym_comment] = ACTIONS(37),
  },
  [52] = {
    [sym_identifier] = ACTIONS(233),
    [sym_comment] = ACTIONS(37),
  },
  [53] = {
    [sym_identifier] = ACTIONS(235),
    [sym_comment] = ACTIONS(37),
  },
  [54] = {
    [sym_identifier] = ACTIONS(237),
    [sym_comment] = ACTIONS(37),
  },
  [55] = {
    [sym__selector] = STATE(105),
    [sym_universal_selector] = STATE(105),
    [sym_class_selector] = STATE(105),
    [sym_pseudo_class_selector] = STATE(105),
    [sym_pseudo_element_selector] = STATE(105),
    [sym_id_selector] = STATE(105),
    [sym_attribute_selector] = STATE(105),
    [sym_child_selector] = STATE(105),
    [sym_descendant_selector] = STATE(105),
    [sym_sibling_selector] = STATE(105),
    [sym_adjacent_sibling_selector] = STATE(105),
    [sym_nesting_selector] = ACTIONS(239),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_string_value] = ACTIONS(239),
    [sym_identifier] = ACTIONS(33),
    [sym_comment] = ACTIONS(37),
  },
  [56] = {
    [sym__selector] = STATE(106),
    [sym_universal_selector] = STATE(106),
    [sym_class_selector] = STATE(106),
    [sym_pseudo_class_selector] = STATE(106),
    [sym_pseudo_element_selector] = STATE(106),
    [sym_id_selector] = STATE(106),
    [sym_attribute_selector] = STATE(106),
    [sym_child_selector] = STATE(106),
    [sym_descendant_selector] = STATE(106),
    [sym_sibling_selector] = STATE(106),
    [sym_adjacent_sibling_selector] = STATE(106),
    [sym_nesting_selector] = ACTIONS(241),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_string_value] = ACTIONS(241),
    [sym_identifier] = ACTIONS(33),
    [sym_comment] = ACTIONS(37),
  },
  [57] = {
    [sym__selector] = STATE(107),
    [sym_universal_selector] = STATE(107),
    [sym_class_selector] = STATE(107),
    [sym_pseudo_class_selector] = STATE(107),
    [sym_pseudo_element_selector] = STATE(107),
    [sym_id_selector] = STATE(107),
    [sym_attribute_selector] = STATE(107),
    [sym_child_selector] = STATE(107),
    [sym_descendant_selector] = STATE(107),
    [sym_sibling_selector] = STATE(107),
    [sym_adjacent_sibling_selector] = STATE(107),
    [sym_nesting_selector] = ACTIONS(243),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_string_value] = ACTIONS(243),
    [sym_identifier] = ACTIONS(33),
    [sym_comment] = ACTIONS(37),
  },
  [58] = {
    [aux_sym_selectors_repeat1] = STATE(108),
    [anon_sym_COMMA] = ACTIONS(103),
    [anon_sym_LBRACE] = ACTIONS(245),
    [sym_comment] = ACTIONS(37),
  },
  [59] = {
    [sym_import_statement] = STATE(59),
    [sym_media_statement] = STATE(59),
    [sym_charset_statement] = STATE(59),
    [sym_namespace_statement] = STATE(59),
    [sym_keyframes_statement] = STATE(59),
    [sym_supports_statement] = STATE(59),
    [sym_at_rule] = STATE(59),
    [sym_rule_set] = STATE(59),
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
    [aux_sym_stylesheet_repeat1] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(247),
    [anon_sym_ATimport] = ACTIONS(249),
    [anon_sym_ATmedia] = ACTIONS(252),
    [anon_sym_ATcharset] = ACTIONS(255),
    [anon_sym_ATnamespace] = ACTIONS(258),
    [anon_sym_ATkeyframes] = ACTIONS(261),
    [anon_sym_ATsupports] = ACTIONS(264),
    [sym_nesting_selector] = ACTIONS(267),
    [anon_sym_STAR] = ACTIONS(270),
    [anon_sym_DOT] = ACTIONS(273),
    [anon_sym_COLON] = ACTIONS(276),
    [anon_sym_COLON_COLON] = ACTIONS(279),
    [anon_sym_POUND] = ACTIONS(282),
    [anon_sym_LBRACK] = ACTIONS(285),
    [sym_string_value] = ACTIONS(267),
    [sym_identifier] = ACTIONS(288),
    [sym_at_keyword] = ACTIONS(291),
    [sym_comment] = ACTIONS(37),
  },
  [60] = {
    [anon_sym_SEMI] = ACTIONS(294),
    [anon_sym_STAR] = ACTIONS(294),
    [anon_sym_RBRACK] = ACTIONS(294),
    [anon_sym_PLUS] = ACTIONS(294),
    [anon_sym_RPAREN] = ACTIONS(294),
    [anon_sym_LPAREN2] = ACTIONS(294),
    [anon_sym_not] = ACTIONS(296),
    [anon_sym_selector] = ACTIONS(296),
    [anon_sym_DASH] = ACTIONS(296),
    [anon_sym_SLASH] = ACTIONS(296),
    [sym_identifier] = ACTIONS(296),
    [sym_comment] = ACTIONS(37),
  },
  [61] = {
    [anon_sym_SEMI] = ACTIONS(298),
    [anon_sym_LBRACE] = ACTIONS(298),
    [anon_sym_STAR] = ACTIONS(298),
    [anon_sym_RBRACK] = ACTIONS(298),
    [anon_sym_PLUS] = ACTIONS(298),
    [anon_sym_RPAREN] = ACTIONS(298),
    [anon_sym_LPAREN2] = ACTIONS(298),
    [anon_sym_not] = ACTIONS(300),
    [anon_sym_selector] = ACTIONS(300),
    [anon_sym_DASH] = ACTIONS(300),
    [anon_sym_SLASH] = ACTIONS(300),
    [sym_identifier] = ACTIONS(300),
    [sym_comment] = ACTIONS(37),
  },
  [62] = {
    [anon_sym_SEMI] = ACTIONS(302),
    [anon_sym_STAR] = ACTIONS(302),
    [anon_sym_RBRACK] = ACTIONS(302),
    [anon_sym_PLUS] = ACTIONS(302),
    [anon_sym_RPAREN] = ACTIONS(302),
    [anon_sym_LPAREN2] = ACTIONS(302),
    [anon_sym_not] = ACTIONS(304),
    [anon_sym_selector] = ACTIONS(304),
    [anon_sym_DASH] = ACTIONS(304),
    [anon_sym_SLASH] = ACTIONS(304),
    [sym_identifier] = ACTIONS(304),
    [sym_comment] = ACTIONS(37),
  },
  [63] = {
    [sym__value] = STATE(114),
    [sym_color_value] = STATE(114),
    [sym_integer_value] = STATE(114),
    [sym_float_value] = STATE(114),
    [sym_call_expression] = STATE(114),
    [sym_binary_expression] = STATE(114),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(115),
    [anon_sym_POUND] = ACTIONS(306),
    [anon_sym_RPAREN] = ACTIONS(308),
    [sym_string_value] = ACTIONS(310),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(314),
    [sym_identifier] = ACTIONS(316),
    [sym_plain_value] = ACTIONS(318),
    [sym_comment] = ACTIONS(37),
  },
  [64] = {
    [anon_sym_SEMI] = ACTIONS(320),
    [anon_sym_STAR] = ACTIONS(320),
    [anon_sym_RBRACK] = ACTIONS(320),
    [anon_sym_PLUS] = ACTIONS(320),
    [anon_sym_RPAREN] = ACTIONS(320),
    [anon_sym_LPAREN2] = ACTIONS(320),
    [anon_sym_not] = ACTIONS(322),
    [anon_sym_selector] = ACTIONS(322),
    [anon_sym_DASH] = ACTIONS(322),
    [anon_sym_SLASH] = ACTIONS(322),
    [sym_identifier] = ACTIONS(322),
    [sym_comment] = ACTIONS(37),
  },
  [65] = {
    [ts_builtin_sym_end] = ACTIONS(324),
    [anon_sym_ATimport] = ACTIONS(326),
    [anon_sym_ATmedia] = ACTIONS(326),
    [anon_sym_ATcharset] = ACTIONS(326),
    [anon_sym_ATnamespace] = ACTIONS(326),
    [anon_sym_ATkeyframes] = ACTIONS(326),
    [anon_sym_RBRACE] = ACTIONS(324),
    [anon_sym_ATsupports] = ACTIONS(326),
    [sym_nesting_selector] = ACTIONS(324),
    [anon_sym_STAR] = ACTIONS(324),
    [anon_sym_DOT] = ACTIONS(324),
    [anon_sym_COLON] = ACTIONS(326),
    [anon_sym_COLON_COLON] = ACTIONS(324),
    [anon_sym_POUND] = ACTIONS(324),
    [anon_sym_LBRACK] = ACTIONS(324),
    [sym_string_value] = ACTIONS(324),
    [sym_identifier] = ACTIONS(324),
    [sym_at_keyword] = ACTIONS(326),
    [sym_comment] = ACTIONS(37),
  },
  [66] = {
    [sym__value] = STATE(116),
    [sym_color_value] = STATE(116),
    [sym_integer_value] = STATE(116),
    [sym_float_value] = STATE(116),
    [sym_call_expression] = STATE(116),
    [sym_binary_expression] = STATE(116),
    [anon_sym_POUND] = ACTIONS(39),
    [sym_string_value] = ACTIONS(328),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(43),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(45),
    [sym_identifier] = ACTIONS(47),
    [sym_plain_value] = ACTIONS(330),
    [sym_comment] = ACTIONS(37),
  },
  [67] = {
    [sym__query] = STATE(72),
    [sym_feature_query] = STATE(72),
    [sym_parenthesized_query] = STATE(72),
    [sym_binary_query] = STATE(72),
    [sym_negated_query] = STATE(72),
    [sym_selector_query] = STATE(72),
    [anon_sym_LPAREN2] = ACTIONS(51),
    [anon_sym_not] = ACTIONS(149),
    [anon_sym_selector] = ACTIONS(55),
    [sym_identifier] = ACTIONS(57),
    [sym_comment] = ACTIONS(37),
  },
  [68] = {
    [aux_sym_import_statement_repeat1] = STATE(120),
    [anon_sym_COMMA] = ACTIONS(332),
    [anon_sym_SEMI] = ACTIONS(334),
    [anon_sym_and] = ACTIONS(336),
    [anon_sym_or] = ACTIONS(336),
    [sym_comment] = ACTIONS(37),
  },
  [69] = {
    [sym__query] = STATE(72),
    [sym_feature_query] = STATE(72),
    [sym_parenthesized_query] = STATE(72),
    [sym_binary_query] = STATE(72),
    [sym_negated_query] = STATE(72),
    [sym_selector_query] = STATE(72),
    [anon_sym_LPAREN2] = ACTIONS(51),
    [anon_sym_not] = ACTIONS(153),
    [anon_sym_selector] = ACTIONS(55),
    [sym_identifier] = ACTIONS(57),
    [sym_comment] = ACTIONS(37),
  },
  [70] = {
    [anon_sym_COLON] = ACTIONS(338),
    [anon_sym_RPAREN] = ACTIONS(159),
    [anon_sym_and] = ACTIONS(159),
    [anon_sym_or] = ACTIONS(159),
    [sym_comment] = ACTIONS(37),
  },
  [71] = {
    [anon_sym_RPAREN] = ACTIONS(340),
    [anon_sym_and] = ACTIONS(342),
    [anon_sym_or] = ACTIONS(342),
    [sym_comment] = ACTIONS(37),
  },
  [72] = {
    [anon_sym_COMMA] = ACTIONS(344),
    [anon_sym_SEMI] = ACTIONS(344),
    [anon_sym_LBRACE] = ACTIONS(344),
    [anon_sym_RPAREN] = ACTIONS(344),
    [anon_sym_and] = ACTIONS(344),
    [anon_sym_or] = ACTIONS(344),
    [sym_comment] = ACTIONS(37),
  },
  [73] = {
    [sym__selector] = STATE(124),
    [sym_universal_selector] = STATE(124),
    [sym_class_selector] = STATE(124),
    [sym_pseudo_class_selector] = STATE(124),
    [sym_pseudo_element_selector] = STATE(124),
    [sym_id_selector] = STATE(124),
    [sym_attribute_selector] = STATE(124),
    [sym_child_selector] = STATE(124),
    [sym_descendant_selector] = STATE(124),
    [sym_sibling_selector] = STATE(124),
    [sym_adjacent_sibling_selector] = STATE(124),
    [sym_nesting_selector] = ACTIONS(346),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_string_value] = ACTIONS(346),
    [sym_identifier] = ACTIONS(33),
    [sym_comment] = ACTIONS(37),
  },
  [74] = {
    [sym__query] = STATE(125),
    [sym_feature_query] = STATE(125),
    [sym_parenthesized_query] = STATE(125),
    [sym_binary_query] = STATE(125),
    [sym_negated_query] = STATE(125),
    [sym_selector_query] = STATE(125),
    [anon_sym_LPAREN2] = ACTIONS(51),
    [anon_sym_not] = ACTIONS(53),
    [anon_sym_selector] = ACTIONS(55),
    [sym_identifier] = ACTIONS(57),
    [sym_comment] = ACTIONS(37),
  },
  [75] = {
    [sym__query] = STATE(126),
    [sym_feature_query] = STATE(126),
    [sym_parenthesized_query] = STATE(126),
    [sym_binary_query] = STATE(126),
    [sym_negated_query] = STATE(126),
    [sym_selector_query] = STATE(126),
    [anon_sym_LPAREN2] = ACTIONS(51),
    [anon_sym_not] = ACTIONS(53),
    [anon_sym_selector] = ACTIONS(55),
    [sym_identifier] = ACTIONS(57),
    [sym_comment] = ACTIONS(37),
  },
  [76] = {
    [ts_builtin_sym_end] = ACTIONS(348),
    [anon_sym_ATimport] = ACTIONS(350),
    [anon_sym_ATmedia] = ACTIONS(350),
    [anon_sym_ATcharset] = ACTIONS(350),
    [anon_sym_ATnamespace] = ACTIONS(350),
    [anon_sym_ATkeyframes] = ACTIONS(350),
    [anon_sym_RBRACE] = ACTIONS(348),
    [anon_sym_ATsupports] = ACTIONS(350),
    [sym_nesting_selector] = ACTIONS(348),
    [anon_sym_STAR] = ACTIONS(348),
    [anon_sym_DOT] = ACTIONS(348),
    [anon_sym_COLON] = ACTIONS(350),
    [anon_sym_COLON_COLON] = ACTIONS(348),
    [anon_sym_POUND] = ACTIONS(348),
    [anon_sym_LBRACK] = ACTIONS(348),
    [sym_string_value] = ACTIONS(348),
    [sym_identifier] = ACTIONS(348),
    [sym_at_keyword] = ACTIONS(350),
    [sym_comment] = ACTIONS(37),
  },
  [77] = {
    [sym_block] = STATE(127),
    [aux_sym_import_statement_repeat1] = STATE(128),
    [anon_sym_COMMA] = ACTIONS(161),
    [anon_sym_LBRACE] = ACTIONS(95),
    [sym_comment] = ACTIONS(37),
  },
  [78] = {
    [ts_builtin_sym_end] = ACTIONS(352),
    [anon_sym_ATimport] = ACTIONS(354),
    [anon_sym_ATmedia] = ACTIONS(354),
    [anon_sym_ATcharset] = ACTIONS(354),
    [anon_sym_ATnamespace] = ACTIONS(354),
    [anon_sym_ATkeyframes] = ACTIONS(354),
    [anon_sym_RBRACE] = ACTIONS(352),
    [anon_sym_ATsupports] = ACTIONS(354),
    [sym_nesting_selector] = ACTIONS(352),
    [anon_sym_STAR] = ACTIONS(352),
    [anon_sym_DOT] = ACTIONS(352),
    [anon_sym_COLON] = ACTIONS(354),
    [anon_sym_COLON_COLON] = ACTIONS(352),
    [anon_sym_POUND] = ACTIONS(352),
    [anon_sym_LBRACK] = ACTIONS(352),
    [sym_string_value] = ACTIONS(352),
    [sym_identifier] = ACTIONS(352),
    [sym_at_keyword] = ACTIONS(354),
    [sym_comment] = ACTIONS(37),
  },
  [79] = {
    [sym__value] = STATE(116),
    [sym_color_value] = STATE(116),
    [sym_integer_value] = STATE(116),
    [sym_float_value] = STATE(116),
    [sym_call_expression] = STATE(116),
    [sym_binary_expression] = STATE(116),
    [anon_sym_POUND] = ACTIONS(39),
    [sym_string_value] = ACTIONS(328),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(61),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(63),
    [sym_identifier] = ACTIONS(47),
    [sym_plain_value] = ACTIONS(330),
    [sym_comment] = ACTIONS(37),
  },
  [80] = {
    [ts_builtin_sym_end] = ACTIONS(356),
    [anon_sym_ATimport] = ACTIONS(358),
    [anon_sym_ATmedia] = ACTIONS(358),
    [anon_sym_ATcharset] = ACTIONS(358),
    [anon_sym_ATnamespace] = ACTIONS(358),
    [anon_sym_ATkeyframes] = ACTIONS(358),
    [anon_sym_RBRACE] = ACTIONS(356),
    [anon_sym_ATsupports] = ACTIONS(358),
    [sym_nesting_selector] = ACTIONS(356),
    [anon_sym_STAR] = ACTIONS(356),
    [anon_sym_DOT] = ACTIONS(356),
    [anon_sym_COLON] = ACTIONS(358),
    [anon_sym_COLON_COLON] = ACTIONS(356),
    [anon_sym_POUND] = ACTIONS(356),
    [anon_sym_LBRACK] = ACTIONS(356),
    [sym_string_value] = ACTIONS(356),
    [sym_identifier] = ACTIONS(356),
    [sym_at_keyword] = ACTIONS(358),
    [sym_comment] = ACTIONS(37),
  },
  [81] = {
    [anon_sym_SEMI] = ACTIONS(360),
    [sym_comment] = ACTIONS(37),
  },
  [82] = {
    [sym_arguments] = STATE(64),
    [anon_sym_LPAREN] = ACTIONS(141),
    [sym_comment] = ACTIONS(37),
  },
  [83] = {
    [sym_keyframe_block] = STATE(132),
    [sym_integer_value] = STATE(131),
    [aux_sym_keyframe_block_list_repeat1] = STATE(132),
    [anon_sym_RBRACE] = ACTIONS(362),
    [sym_from] = ACTIONS(364),
    [sym_to] = ACTIONS(364),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(366),
    [sym_comment] = ACTIONS(37),
  },
  [84] = {
    [ts_builtin_sym_end] = ACTIONS(368),
    [anon_sym_ATimport] = ACTIONS(370),
    [anon_sym_ATmedia] = ACTIONS(370),
    [anon_sym_ATcharset] = ACTIONS(370),
    [anon_sym_ATnamespace] = ACTIONS(370),
    [anon_sym_ATkeyframes] = ACTIONS(370),
    [anon_sym_RBRACE] = ACTIONS(368),
    [anon_sym_ATsupports] = ACTIONS(370),
    [sym_nesting_selector] = ACTIONS(368),
    [anon_sym_STAR] = ACTIONS(368),
    [anon_sym_DOT] = ACTIONS(368),
    [anon_sym_COLON] = ACTIONS(370),
    [anon_sym_COLON_COLON] = ACTIONS(368),
    [anon_sym_POUND] = ACTIONS(368),
    [anon_sym_LBRACK] = ACTIONS(368),
    [sym_string_value] = ACTIONS(368),
    [sym_identifier] = ACTIONS(368),
    [sym_at_keyword] = ACTIONS(370),
    [sym_comment] = ACTIONS(37),
  },
  [85] = {
    [sym__query] = STATE(126),
    [sym_feature_query] = STATE(126),
    [sym_parenthesized_query] = STATE(126),
    [sym_binary_query] = STATE(126),
    [sym_negated_query] = STATE(126),
    [sym_selector_query] = STATE(126),
    [anon_sym_LPAREN2] = ACTIONS(51),
    [anon_sym_not] = ACTIONS(73),
    [anon_sym_selector] = ACTIONS(55),
    [sym_identifier] = ACTIONS(57),
    [sym_comment] = ACTIONS(37),
  },
  [86] = {
    [ts_builtin_sym_end] = ACTIONS(372),
    [anon_sym_ATimport] = ACTIONS(374),
    [anon_sym_ATmedia] = ACTIONS(374),
    [anon_sym_ATcharset] = ACTIONS(374),
    [anon_sym_ATnamespace] = ACTIONS(374),
    [anon_sym_ATkeyframes] = ACTIONS(374),
    [anon_sym_RBRACE] = ACTIONS(372),
    [anon_sym_ATsupports] = ACTIONS(374),
    [sym_nesting_selector] = ACTIONS(372),
    [anon_sym_STAR] = ACTIONS(372),
    [anon_sym_DOT] = ACTIONS(372),
    [anon_sym_COLON] = ACTIONS(374),
    [anon_sym_COLON_COLON] = ACTIONS(372),
    [anon_sym_POUND] = ACTIONS(372),
    [anon_sym_LBRACK] = ACTIONS(372),
    [sym_string_value] = ACTIONS(372),
    [sym_identifier] = ACTIONS(372),
    [sym_at_keyword] = ACTIONS(374),
    [sym_comment] = ACTIONS(37),
  },
  [87] = {
    [sym__selector] = STATE(137),
    [sym_universal_selector] = STATE(137),
    [sym_class_selector] = STATE(137),
    [sym_pseudo_class_selector] = STATE(137),
    [sym_pseudo_element_selector] = STATE(137),
    [sym_id_selector] = STATE(137),
    [sym_attribute_selector] = STATE(137),
    [sym_child_selector] = STATE(137),
    [sym_descendant_selector] = STATE(137),
    [sym_sibling_selector] = STATE(137),
    [sym_adjacent_sibling_selector] = STATE(137),
    [sym__value] = STATE(114),
    [sym_color_value] = STATE(114),
    [sym_integer_value] = STATE(114),
    [sym_float_value] = STATE(114),
    [sym_call_expression] = STATE(114),
    [sym_binary_expression] = STATE(114),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(138),
    [sym_nesting_selector] = ACTIONS(376),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(378),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(380),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(382),
    [sym_string_value] = ACTIONS(384),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(314),
    [sym_identifier] = ACTIONS(386),
    [sym_plain_value] = ACTIONS(318),
    [sym_comment] = ACTIONS(37),
  },
  [88] = {
    [sym__descendant_operator] = ACTIONS(388),
    [anon_sym_COMMA] = ACTIONS(388),
    [anon_sym_LBRACE] = ACTIONS(388),
    [anon_sym_DOT] = ACTIONS(388),
    [anon_sym_COLON] = ACTIONS(390),
    [anon_sym_COLON_COLON] = ACTIONS(388),
    [anon_sym_POUND] = ACTIONS(388),
    [anon_sym_LBRACK] = ACTIONS(388),
    [anon_sym_GT] = ACTIONS(388),
    [anon_sym_TILDE] = ACTIONS(388),
    [anon_sym_PLUS] = ACTIONS(388),
    [anon_sym_RPAREN] = ACTIONS(388),
    [sym_comment] = ACTIONS(37),
  },
  [89] = {
    [sym__value] = STATE(139),
    [sym_color_value] = STATE(139),
    [sym_integer_value] = STATE(139),
    [sym_float_value] = STATE(139),
    [sym_call_expression] = STATE(139),
    [sym_binary_expression] = STATE(139),
    [anon_sym_POUND] = ACTIONS(39),
    [sym_string_value] = ACTIONS(392),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(61),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(63),
    [sym_identifier] = ACTIONS(47),
    [sym_plain_value] = ACTIONS(394),
    [sym_comment] = ACTIONS(37),
  },
  [90] = {
    [sym__descendant_operator] = ACTIONS(396),
    [anon_sym_COMMA] = ACTIONS(396),
    [anon_sym_LBRACE] = ACTIONS(396),
    [anon_sym_DOT] = ACTIONS(396),
    [anon_sym_COLON] = ACTIONS(398),
    [anon_sym_COLON_COLON] = ACTIONS(396),
    [anon_sym_POUND] = ACTIONS(396),
    [anon_sym_LBRACK] = ACTIONS(396),
    [anon_sym_GT] = ACTIONS(396),
    [anon_sym_TILDE] = ACTIONS(396),
    [anon_sym_PLUS] = ACTIONS(396),
    [anon_sym_RPAREN] = ACTIONS(396),
    [sym_comment] = ACTIONS(37),
  },
  [91] = {
    [ts_builtin_sym_end] = ACTIONS(400),
    [anon_sym_ATimport] = ACTIONS(402),
    [anon_sym_ATmedia] = ACTIONS(402),
    [anon_sym_ATcharset] = ACTIONS(402),
    [anon_sym_ATnamespace] = ACTIONS(402),
    [anon_sym_ATkeyframes] = ACTIONS(402),
    [anon_sym_RBRACE] = ACTIONS(400),
    [anon_sym_ATsupports] = ACTIONS(402),
    [sym_nesting_selector] = ACTIONS(400),
    [anon_sym_STAR] = ACTIONS(400),
    [anon_sym_DOT] = ACTIONS(400),
    [anon_sym_COLON] = ACTIONS(402),
    [anon_sym_COLON_COLON] = ACTIONS(400),
    [anon_sym_POUND] = ACTIONS(400),
    [anon_sym_LBRACK] = ACTIONS(400),
    [sym_string_value] = ACTIONS(400),
    [sym_identifier] = ACTIONS(400),
    [sym_at_keyword] = ACTIONS(402),
    [sym_comment] = ACTIONS(37),
  },
  [92] = {
    [sym__descendant_operator] = ACTIONS(89),
    [anon_sym_COMMA] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_DOT] = ACTIONS(89),
    [anon_sym_COLON] = ACTIONS(404),
    [anon_sym_COLON_COLON] = ACTIONS(89),
    [anon_sym_POUND] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_TILDE] = ACTIONS(89),
    [anon_sym_PLUS] = ACTIONS(89),
    [sym_comment] = ACTIONS(37),
  },
  [93] = {
    [sym_import_statement] = STATE(142),
    [sym_media_statement] = STATE(142),
    [sym_charset_statement] = STATE(142),
    [sym_namespace_statement] = STATE(142),
    [sym_keyframes_statement] = STATE(142),
    [sym_supports_statement] = STATE(142),
    [sym_at_rule] = STATE(142),
    [sym_rule_set] = STATE(142),
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
    [sym_declaration] = STATE(142),
    [aux_sym_block_repeat1] = STATE(142),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATmedia] = ACTIONS(9),
    [anon_sym_ATcharset] = ACTIONS(11),
    [anon_sym_ATnamespace] = ACTIONS(13),
    [anon_sym_ATkeyframes] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(406),
    [anon_sym_ATsupports] = ACTIONS(17),
    [sym_nesting_selector] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_string_value] = ACTIONS(19),
    [sym_identifier] = ACTIONS(213),
    [sym_at_keyword] = ACTIONS(35),
    [sym_comment] = ACTIONS(37),
  },
  [94] = {
    [sym__query] = STATE(143),
    [sym_feature_query] = STATE(143),
    [sym_parenthesized_query] = STATE(143),
    [sym_binary_query] = STATE(143),
    [sym_negated_query] = STATE(143),
    [sym_selector_query] = STATE(143),
    [anon_sym_LPAREN2] = ACTIONS(51),
    [anon_sym_not] = ACTIONS(97),
    [anon_sym_selector] = ACTIONS(55),
    [sym_identifier] = ACTIONS(57),
    [sym_comment] = ACTIONS(37),
  },
  [95] = {
    [ts_builtin_sym_end] = ACTIONS(408),
    [anon_sym_ATimport] = ACTIONS(410),
    [anon_sym_ATmedia] = ACTIONS(410),
    [anon_sym_ATcharset] = ACTIONS(410),
    [anon_sym_ATnamespace] = ACTIONS(410),
    [anon_sym_ATkeyframes] = ACTIONS(410),
    [anon_sym_RBRACE] = ACTIONS(408),
    [anon_sym_ATsupports] = ACTIONS(410),
    [sym_nesting_selector] = ACTIONS(408),
    [anon_sym_STAR] = ACTIONS(408),
    [anon_sym_DOT] = ACTIONS(408),
    [anon_sym_COLON] = ACTIONS(410),
    [anon_sym_COLON_COLON] = ACTIONS(408),
    [anon_sym_POUND] = ACTIONS(408),
    [anon_sym_LBRACK] = ACTIONS(408),
    [sym_string_value] = ACTIONS(408),
    [sym_identifier] = ACTIONS(408),
    [sym_at_keyword] = ACTIONS(410),
    [sym_comment] = ACTIONS(37),
  },
  [96] = {
    [sym__query] = STATE(126),
    [sym_feature_query] = STATE(126),
    [sym_parenthesized_query] = STATE(126),
    [sym_binary_query] = STATE(126),
    [sym_negated_query] = STATE(126),
    [sym_selector_query] = STATE(126),
    [anon_sym_LPAREN2] = ACTIONS(51),
    [anon_sym_not] = ACTIONS(97),
    [anon_sym_selector] = ACTIONS(55),
    [sym_identifier] = ACTIONS(57),
    [sym_comment] = ACTIONS(37),
  },
  [97] = {
    [sym_block] = STATE(144),
    [aux_sym_import_statement_repeat1] = STATE(145),
    [anon_sym_COMMA] = ACTIONS(215),
    [anon_sym_SEMI] = ACTIONS(412),
    [anon_sym_LBRACE] = ACTIONS(95),
    [sym_comment] = ACTIONS(37),
  },
  [98] = {
    [sym__descendant_operator] = ACTIONS(414),
    [anon_sym_COMMA] = ACTIONS(414),
    [anon_sym_LBRACE] = ACTIONS(414),
    [anon_sym_DOT] = ACTIONS(107),
    [anon_sym_COLON] = ACTIONS(416),
    [anon_sym_COLON_COLON] = ACTIONS(414),
    [anon_sym_POUND] = ACTIONS(414),
    [anon_sym_LBRACK] = ACTIONS(414),
    [anon_sym_GT] = ACTIONS(414),
    [anon_sym_TILDE] = ACTIONS(414),
    [anon_sym_PLUS] = ACTIONS(414),
    [anon_sym_RPAREN] = ACTIONS(414),
    [sym_comment] = ACTIONS(37),
  },
  [99] = {
    [sym__descendant_operator] = ACTIONS(101),
    [anon_sym_COMMA] = ACTIONS(418),
    [anon_sym_LBRACE] = ACTIONS(418),
    [anon_sym_DOT] = ACTIONS(107),
    [anon_sym_COLON] = ACTIONS(109),
    [anon_sym_COLON_COLON] = ACTIONS(111),
    [anon_sym_POUND] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(117),
    [anon_sym_TILDE] = ACTIONS(119),
    [anon_sym_PLUS] = ACTIONS(121),
    [sym_comment] = ACTIONS(37),
  },
  [100] = {
    [sym__descendant_operator] = ACTIONS(420),
    [anon_sym_COMMA] = ACTIONS(420),
    [anon_sym_LBRACE] = ACTIONS(420),
    [anon_sym_DOT] = ACTIONS(420),
    [anon_sym_COLON] = ACTIONS(422),
    [anon_sym_COLON_COLON] = ACTIONS(420),
    [anon_sym_POUND] = ACTIONS(420),
    [anon_sym_LBRACK] = ACTIONS(420),
    [anon_sym_GT] = ACTIONS(420),
    [anon_sym_TILDE] = ACTIONS(420),
    [anon_sym_PLUS] = ACTIONS(420),
    [anon_sym_RPAREN] = ACTIONS(420),
    [sym_comment] = ACTIONS(37),
  },
  [101] = {
    [sym_pseudo_class_arguments] = STATE(146),
    [sym__descendant_operator] = ACTIONS(424),
    [anon_sym_COMMA] = ACTIONS(424),
    [anon_sym_LBRACE] = ACTIONS(424),
    [anon_sym_DOT] = ACTIONS(424),
    [anon_sym_COLON] = ACTIONS(426),
    [anon_sym_COLON_COLON] = ACTIONS(424),
    [anon_sym_POUND] = ACTIONS(424),
    [anon_sym_LBRACK] = ACTIONS(424),
    [anon_sym_GT] = ACTIONS(424),
    [anon_sym_TILDE] = ACTIONS(424),
    [anon_sym_PLUS] = ACTIONS(424),
    [anon_sym_LPAREN] = ACTIONS(193),
    [anon_sym_RPAREN] = ACTIONS(424),
    [sym_comment] = ACTIONS(37),
  },
  [102] = {
    [sym__descendant_operator] = ACTIONS(428),
    [anon_sym_COMMA] = ACTIONS(428),
    [anon_sym_LBRACE] = ACTIONS(428),
    [anon_sym_DOT] = ACTIONS(428),
    [anon_sym_COLON] = ACTIONS(430),
    [anon_sym_COLON_COLON] = ACTIONS(428),
    [anon_sym_POUND] = ACTIONS(428),
    [anon_sym_LBRACK] = ACTIONS(428),
    [anon_sym_GT] = ACTIONS(428),
    [anon_sym_TILDE] = ACTIONS(428),
    [anon_sym_PLUS] = ACTIONS(428),
    [anon_sym_RPAREN] = ACTIONS(428),
    [sym_comment] = ACTIONS(37),
  },
  [103] = {
    [sym__descendant_operator] = ACTIONS(432),
    [anon_sym_COMMA] = ACTIONS(432),
    [anon_sym_LBRACE] = ACTIONS(432),
    [anon_sym_DOT] = ACTIONS(432),
    [anon_sym_COLON] = ACTIONS(434),
    [anon_sym_COLON_COLON] = ACTIONS(432),
    [anon_sym_POUND] = ACTIONS(432),
    [anon_sym_LBRACK] = ACTIONS(432),
    [anon_sym_GT] = ACTIONS(432),
    [anon_sym_TILDE] = ACTIONS(432),
    [anon_sym_PLUS] = ACTIONS(432),
    [anon_sym_RPAREN] = ACTIONS(432),
    [sym_comment] = ACTIONS(37),
  },
  [104] = {
    [anon_sym_EQ] = ACTIONS(436),
    [anon_sym_TILDE_EQ] = ACTIONS(436),
    [anon_sym_CARET_EQ] = ACTIONS(436),
    [anon_sym_PIPE_EQ] = ACTIONS(436),
    [anon_sym_STAR_EQ] = ACTIONS(436),
    [anon_sym_DOLLAR_EQ] = ACTIONS(436),
    [anon_sym_RBRACK] = ACTIONS(438),
    [sym_comment] = ACTIONS(37),
  },
  [105] = {
    [sym__descendant_operator] = ACTIONS(440),
    [anon_sym_COMMA] = ACTIONS(440),
    [anon_sym_LBRACE] = ACTIONS(440),
    [anon_sym_DOT] = ACTIONS(107),
    [anon_sym_COLON] = ACTIONS(442),
    [anon_sym_COLON_COLON] = ACTIONS(440),
    [anon_sym_POUND] = ACTIONS(440),
    [anon_sym_LBRACK] = ACTIONS(440),
    [anon_sym_GT] = ACTIONS(440),
    [anon_sym_TILDE] = ACTIONS(440),
    [anon_sym_PLUS] = ACTIONS(440),
    [anon_sym_RPAREN] = ACTIONS(440),
    [sym_comment] = ACTIONS(37),
  },
  [106] = {
    [sym__descendant_operator] = ACTIONS(444),
    [anon_sym_COMMA] = ACTIONS(444),
    [anon_sym_LBRACE] = ACTIONS(444),
    [anon_sym_DOT] = ACTIONS(107),
    [anon_sym_COLON] = ACTIONS(446),
    [anon_sym_COLON_COLON] = ACTIONS(444),
    [anon_sym_POUND] = ACTIONS(444),
    [anon_sym_LBRACK] = ACTIONS(444),
    [anon_sym_GT] = ACTIONS(444),
    [anon_sym_TILDE] = ACTIONS(444),
    [anon_sym_PLUS] = ACTIONS(444),
    [anon_sym_RPAREN] = ACTIONS(444),
    [sym_comment] = ACTIONS(37),
  },
  [107] = {
    [sym__descendant_operator] = ACTIONS(448),
    [anon_sym_COMMA] = ACTIONS(448),
    [anon_sym_LBRACE] = ACTIONS(448),
    [anon_sym_DOT] = ACTIONS(107),
    [anon_sym_COLON] = ACTIONS(450),
    [anon_sym_COLON_COLON] = ACTIONS(448),
    [anon_sym_POUND] = ACTIONS(448),
    [anon_sym_LBRACK] = ACTIONS(448),
    [anon_sym_GT] = ACTIONS(448),
    [anon_sym_TILDE] = ACTIONS(448),
    [anon_sym_PLUS] = ACTIONS(448),
    [anon_sym_RPAREN] = ACTIONS(448),
    [sym_comment] = ACTIONS(37),
  },
  [108] = {
    [aux_sym_selectors_repeat1] = STATE(108),
    [anon_sym_COMMA] = ACTIONS(452),
    [anon_sym_LBRACE] = ACTIONS(418),
    [sym_comment] = ACTIONS(37),
  },
  [109] = {
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH] = ACTIONS(455),
    [sym_comment] = ACTIONS(37),
  },
  [110] = {
    [anon_sym_SEMI] = ACTIONS(457),
    [anon_sym_STAR] = ACTIONS(457),
    [anon_sym_RBRACK] = ACTIONS(457),
    [anon_sym_PLUS] = ACTIONS(457),
    [anon_sym_RPAREN] = ACTIONS(457),
    [anon_sym_LPAREN2] = ACTIONS(457),
    [anon_sym_not] = ACTIONS(459),
    [anon_sym_selector] = ACTIONS(459),
    [anon_sym_DASH] = ACTIONS(459),
    [anon_sym_SLASH] = ACTIONS(459),
    [sym_identifier] = ACTIONS(459),
    [sym_comment] = ACTIONS(37),
  },
  [111] = {
    [anon_sym_COMMA] = ACTIONS(127),
    [anon_sym_SEMI] = ACTIONS(127),
    [anon_sym_STAR] = ACTIONS(127),
    [anon_sym_POUND] = ACTIONS(127),
    [anon_sym_PLUS] = ACTIONS(129),
    [anon_sym_RPAREN] = ACTIONS(127),
    [sym_important] = ACTIONS(127),
    [sym_string_value] = ACTIONS(127),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(129),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(129),
    [sym_unit] = ACTIONS(461),
    [anon_sym_DASH] = ACTIONS(129),
    [anon_sym_SLASH] = ACTIONS(129),
    [sym_identifier] = ACTIONS(129),
    [sym_plain_value] = ACTIONS(129),
    [sym_comment] = ACTIONS(37),
  },
  [112] = {
    [anon_sym_COMMA] = ACTIONS(133),
    [anon_sym_SEMI] = ACTIONS(133),
    [anon_sym_STAR] = ACTIONS(133),
    [anon_sym_POUND] = ACTIONS(133),
    [anon_sym_PLUS] = ACTIONS(135),
    [anon_sym_RPAREN] = ACTIONS(133),
    [sym_important] = ACTIONS(133),
    [sym_string_value] = ACTIONS(133),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(135),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(135),
    [sym_unit] = ACTIONS(463),
    [anon_sym_DASH] = ACTIONS(135),
    [anon_sym_SLASH] = ACTIONS(135),
    [sym_identifier] = ACTIONS(135),
    [sym_plain_value] = ACTIONS(135),
    [sym_comment] = ACTIONS(37),
  },
  [113] = {
    [sym_arguments] = STATE(153),
    [anon_sym_COMMA] = ACTIONS(139),
    [anon_sym_SEMI] = ACTIONS(139),
    [anon_sym_STAR] = ACTIONS(139),
    [anon_sym_POUND] = ACTIONS(139),
    [anon_sym_PLUS] = ACTIONS(143),
    [anon_sym_LPAREN] = ACTIONS(465),
    [anon_sym_RPAREN] = ACTIONS(139),
    [sym_important] = ACTIONS(139),
    [sym_string_value] = ACTIONS(139),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(143),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(143),
    [anon_sym_DASH] = ACTIONS(143),
    [anon_sym_SLASH] = ACTIONS(143),
    [sym_identifier] = ACTIONS(143),
    [sym_plain_value] = ACTIONS(143),
    [sym_comment] = ACTIONS(37),
  },
  [114] = {
    [anon_sym_COMMA] = ACTIONS(467),
    [anon_sym_STAR] = ACTIONS(469),
    [anon_sym_POUND] = ACTIONS(467),
    [anon_sym_PLUS] = ACTIONS(471),
    [anon_sym_RPAREN] = ACTIONS(467),
    [sym_string_value] = ACTIONS(467),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(473),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(473),
    [anon_sym_DASH] = ACTIONS(471),
    [anon_sym_SLASH] = ACTIONS(471),
    [sym_identifier] = ACTIONS(473),
    [sym_plain_value] = ACTIONS(473),
    [sym_comment] = ACTIONS(37),
  },
  [115] = {
    [sym__value] = STATE(114),
    [sym_color_value] = STATE(114),
    [sym_integer_value] = STATE(114),
    [sym_float_value] = STATE(114),
    [sym_call_expression] = STATE(114),
    [sym_binary_expression] = STATE(114),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(157),
    [aux_sym_arguments_repeat1] = STATE(158),
    [anon_sym_COMMA] = ACTIONS(475),
    [anon_sym_POUND] = ACTIONS(306),
    [anon_sym_RPAREN] = ACTIONS(477),
    [sym_string_value] = ACTIONS(310),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(314),
    [sym_identifier] = ACTIONS(316),
    [sym_plain_value] = ACTIONS(318),
    [sym_comment] = ACTIONS(37),
  },
  [116] = {
    [anon_sym_SEMI] = ACTIONS(479),
    [anon_sym_STAR] = ACTIONS(479),
    [anon_sym_RBRACK] = ACTIONS(479),
    [anon_sym_PLUS] = ACTIONS(479),
    [anon_sym_RPAREN] = ACTIONS(479),
    [anon_sym_LPAREN2] = ACTIONS(479),
    [anon_sym_not] = ACTIONS(481),
    [anon_sym_selector] = ACTIONS(481),
    [anon_sym_DASH] = ACTIONS(481),
    [anon_sym_SLASH] = ACTIONS(481),
    [sym_identifier] = ACTIONS(481),
    [sym_comment] = ACTIONS(37),
  },
  [117] = {
    [sym__query] = STATE(159),
    [sym_feature_query] = STATE(159),
    [sym_parenthesized_query] = STATE(159),
    [sym_binary_query] = STATE(159),
    [sym_negated_query] = STATE(159),
    [sym_selector_query] = STATE(159),
    [anon_sym_LPAREN2] = ACTIONS(51),
    [anon_sym_not] = ACTIONS(149),
    [anon_sym_selector] = ACTIONS(55),
    [sym_identifier] = ACTIONS(57),
    [sym_comment] = ACTIONS(37),
  },
  [118] = {
    [ts_builtin_sym_end] = ACTIONS(483),
    [anon_sym_ATimport] = ACTIONS(485),
    [anon_sym_ATmedia] = ACTIONS(485),
    [anon_sym_ATcharset] = ACTIONS(485),
    [anon_sym_ATnamespace] = ACTIONS(485),
    [anon_sym_ATkeyframes] = ACTIONS(485),
    [anon_sym_RBRACE] = ACTIONS(483),
    [anon_sym_ATsupports] = ACTIONS(485),
    [sym_nesting_selector] = ACTIONS(483),
    [anon_sym_STAR] = ACTIONS(483),
    [anon_sym_DOT] = ACTIONS(483),
    [anon_sym_COLON] = ACTIONS(485),
    [anon_sym_COLON_COLON] = ACTIONS(483),
    [anon_sym_POUND] = ACTIONS(483),
    [anon_sym_LBRACK] = ACTIONS(483),
    [sym_string_value] = ACTIONS(483),
    [sym_identifier] = ACTIONS(483),
    [sym_at_keyword] = ACTIONS(485),
    [sym_comment] = ACTIONS(37),
  },
  [119] = {
    [sym__query] = STATE(126),
    [sym_feature_query] = STATE(126),
    [sym_parenthesized_query] = STATE(126),
    [sym_binary_query] = STATE(126),
    [sym_negated_query] = STATE(126),
    [sym_selector_query] = STATE(126),
    [anon_sym_LPAREN2] = ACTIONS(51),
    [anon_sym_not] = ACTIONS(149),
    [anon_sym_selector] = ACTIONS(55),
    [sym_identifier] = ACTIONS(57),
    [sym_comment] = ACTIONS(37),
  },
  [120] = {
    [aux_sym_import_statement_repeat1] = STATE(161),
    [anon_sym_COMMA] = ACTIONS(332),
    [anon_sym_SEMI] = ACTIONS(487),
    [sym_comment] = ACTIONS(37),
  },
  [121] = {
    [sym__value] = STATE(162),
    [sym_color_value] = STATE(162),
    [sym_integer_value] = STATE(162),
    [sym_float_value] = STATE(162),
    [sym_call_expression] = STATE(162),
    [sym_binary_expression] = STATE(162),
    [anon_sym_POUND] = ACTIONS(39),
    [sym_string_value] = ACTIONS(489),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(61),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(63),
    [sym_identifier] = ACTIONS(47),
    [sym_plain_value] = ACTIONS(491),
    [sym_comment] = ACTIONS(37),
  },
  [122] = {
    [anon_sym_COMMA] = ACTIONS(493),
    [anon_sym_SEMI] = ACTIONS(493),
    [anon_sym_LBRACE] = ACTIONS(493),
    [anon_sym_RPAREN] = ACTIONS(493),
    [anon_sym_and] = ACTIONS(493),
    [anon_sym_or] = ACTIONS(493),
    [sym_comment] = ACTIONS(37),
  },
  [123] = {
    [sym__query] = STATE(126),
    [sym_feature_query] = STATE(126),
    [sym_parenthesized_query] = STATE(126),
    [sym_binary_query] = STATE(126),
    [sym_negated_query] = STATE(126),
    [sym_selector_query] = STATE(126),
    [anon_sym_LPAREN2] = ACTIONS(51),
    [anon_sym_not] = ACTIONS(153),
    [anon_sym_selector] = ACTIONS(55),
    [sym_identifier] = ACTIONS(57),
    [sym_comment] = ACTIONS(37),
  },
  [124] = {
    [sym__descendant_operator] = ACTIONS(101),
    [anon_sym_DOT] = ACTIONS(107),
    [anon_sym_COLON] = ACTIONS(109),
    [anon_sym_COLON_COLON] = ACTIONS(111),
    [anon_sym_POUND] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(117),
    [anon_sym_TILDE] = ACTIONS(119),
    [anon_sym_PLUS] = ACTIONS(121),
    [anon_sym_RPAREN] = ACTIONS(495),
    [sym_comment] = ACTIONS(37),
  },
  [125] = {
    [anon_sym_COMMA] = ACTIONS(497),
    [anon_sym_LBRACE] = ACTIONS(497),
    [anon_sym_and] = ACTIONS(163),
    [anon_sym_or] = ACTIONS(163),
    [sym_comment] = ACTIONS(37),
  },
  [126] = {
    [anon_sym_COMMA] = ACTIONS(499),
    [anon_sym_SEMI] = ACTIONS(499),
    [anon_sym_LBRACE] = ACTIONS(499),
    [anon_sym_RPAREN] = ACTIONS(499),
    [anon_sym_and] = ACTIONS(499),
    [anon_sym_or] = ACTIONS(499),
    [sym_comment] = ACTIONS(37),
  },
  [127] = {
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
  [128] = {
    [aux_sym_import_statement_repeat1] = STATE(128),
    [anon_sym_COMMA] = ACTIONS(505),
    [anon_sym_LBRACE] = ACTIONS(497),
    [sym_comment] = ACTIONS(37),
  },
  [129] = {
    [ts_builtin_sym_end] = ACTIONS(508),
    [anon_sym_ATimport] = ACTIONS(510),
    [anon_sym_ATmedia] = ACTIONS(510),
    [anon_sym_ATcharset] = ACTIONS(510),
    [anon_sym_ATnamespace] = ACTIONS(510),
    [anon_sym_ATkeyframes] = ACTIONS(510),
    [anon_sym_RBRACE] = ACTIONS(508),
    [anon_sym_ATsupports] = ACTIONS(510),
    [sym_nesting_selector] = ACTIONS(508),
    [anon_sym_STAR] = ACTIONS(508),
    [anon_sym_DOT] = ACTIONS(508),
    [anon_sym_COLON] = ACTIONS(510),
    [anon_sym_COLON_COLON] = ACTIONS(508),
    [anon_sym_POUND] = ACTIONS(508),
    [anon_sym_LBRACK] = ACTIONS(508),
    [sym_string_value] = ACTIONS(508),
    [sym_identifier] = ACTIONS(508),
    [sym_at_keyword] = ACTIONS(510),
    [sym_comment] = ACTIONS(37),
  },
  [130] = {
    [ts_builtin_sym_end] = ACTIONS(512),
    [anon_sym_ATimport] = ACTIONS(514),
    [anon_sym_ATmedia] = ACTIONS(514),
    [anon_sym_ATcharset] = ACTIONS(514),
    [anon_sym_ATnamespace] = ACTIONS(514),
    [anon_sym_ATkeyframes] = ACTIONS(514),
    [anon_sym_RBRACE] = ACTIONS(512),
    [anon_sym_ATsupports] = ACTIONS(514),
    [sym_nesting_selector] = ACTIONS(512),
    [anon_sym_STAR] = ACTIONS(512),
    [anon_sym_DOT] = ACTIONS(512),
    [anon_sym_COLON] = ACTIONS(514),
    [anon_sym_COLON_COLON] = ACTIONS(512),
    [anon_sym_POUND] = ACTIONS(512),
    [anon_sym_LBRACK] = ACTIONS(512),
    [sym_string_value] = ACTIONS(512),
    [sym_identifier] = ACTIONS(512),
    [sym_at_keyword] = ACTIONS(514),
    [sym_comment] = ACTIONS(37),
  },
  [131] = {
    [sym_block] = STATE(165),
    [anon_sym_LBRACE] = ACTIONS(516),
    [sym_comment] = ACTIONS(37),
  },
  [132] = {
    [sym_keyframe_block] = STATE(167),
    [sym_integer_value] = STATE(131),
    [aux_sym_keyframe_block_list_repeat1] = STATE(167),
    [anon_sym_RBRACE] = ACTIONS(518),
    [sym_from] = ACTIONS(364),
    [sym_to] = ACTIONS(364),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(366),
    [sym_comment] = ACTIONS(37),
  },
  [133] = {
    [aux_sym_SLASH_LBRACK0_DASH9a_DASHfA_DASHF_RBRACK_LBRACE3_COMMA8_RBRACE_SLASH] = ACTIONS(520),
    [sym_identifier] = ACTIONS(522),
    [sym_comment] = ACTIONS(37),
  },
  [134] = {
    [sym__descendant_operator] = ACTIONS(524),
    [anon_sym_COMMA] = ACTIONS(524),
    [anon_sym_LBRACE] = ACTIONS(524),
    [anon_sym_DOT] = ACTIONS(524),
    [anon_sym_COLON] = ACTIONS(526),
    [anon_sym_COLON_COLON] = ACTIONS(524),
    [anon_sym_POUND] = ACTIONS(524),
    [anon_sym_LBRACK] = ACTIONS(524),
    [anon_sym_GT] = ACTIONS(524),
    [anon_sym_TILDE] = ACTIONS(524),
    [anon_sym_PLUS] = ACTIONS(524),
    [anon_sym_RPAREN] = ACTIONS(524),
    [sym_comment] = ACTIONS(37),
  },
  [135] = {
    [sym__descendant_operator] = ACTIONS(528),
    [anon_sym_COMMA] = ACTIONS(528),
    [anon_sym_STAR] = ACTIONS(530),
    [anon_sym_DOT] = ACTIONS(532),
    [anon_sym_COLON] = ACTIONS(532),
    [anon_sym_COLON_COLON] = ACTIONS(528),
    [anon_sym_POUND] = ACTIONS(528),
    [anon_sym_LBRACK] = ACTIONS(528),
    [anon_sym_GT] = ACTIONS(528),
    [anon_sym_TILDE] = ACTIONS(528),
    [anon_sym_PLUS] = ACTIONS(532),
    [anon_sym_RPAREN] = ACTIONS(528),
    [sym_string_value] = ACTIONS(530),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(534),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(534),
    [anon_sym_DASH] = ACTIONS(534),
    [anon_sym_SLASH] = ACTIONS(534),
    [sym_identifier] = ACTIONS(534),
    [sym_plain_value] = ACTIONS(534),
    [sym_comment] = ACTIONS(37),
  },
  [136] = {
    [sym_arguments] = STATE(153),
    [sym__descendant_operator] = ACTIONS(89),
    [anon_sym_COMMA] = ACTIONS(89),
    [anon_sym_STAR] = ACTIONS(139),
    [anon_sym_DOT] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(91),
    [anon_sym_COLON_COLON] = ACTIONS(89),
    [anon_sym_POUND] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_GT] = ACTIONS(89),
    [anon_sym_TILDE] = ACTIONS(89),
    [anon_sym_PLUS] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(465),
    [anon_sym_RPAREN] = ACTIONS(89),
    [sym_string_value] = ACTIONS(139),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(143),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(143),
    [anon_sym_DASH] = ACTIONS(143),
    [anon_sym_SLASH] = ACTIONS(143),
    [sym_identifier] = ACTIONS(143),
    [sym_plain_value] = ACTIONS(143),
    [sym_comment] = ACTIONS(37),
  },
  [137] = {
    [aux_sym_pseudo_class_arguments_repeat2] = STATE(170),
    [sym__descendant_operator] = ACTIONS(101),
    [anon_sym_COMMA] = ACTIONS(536),
    [anon_sym_DOT] = ACTIONS(107),
    [anon_sym_COLON] = ACTIONS(109),
    [anon_sym_COLON_COLON] = ACTIONS(111),
    [anon_sym_POUND] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(117),
    [anon_sym_TILDE] = ACTIONS(119),
    [anon_sym_PLUS] = ACTIONS(121),
    [anon_sym_RPAREN] = ACTIONS(538),
    [sym_comment] = ACTIONS(37),
  },
  [138] = {
    [sym__value] = STATE(114),
    [sym_color_value] = STATE(114),
    [sym_integer_value] = STATE(114),
    [sym_float_value] = STATE(114),
    [sym_call_expression] = STATE(114),
    [sym_binary_expression] = STATE(114),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(157),
    [aux_sym_pseudo_class_arguments_repeat2] = STATE(170),
    [anon_sym_COMMA] = ACTIONS(536),
    [anon_sym_POUND] = ACTIONS(306),
    [anon_sym_RPAREN] = ACTIONS(538),
    [sym_string_value] = ACTIONS(310),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(314),
    [sym_identifier] = ACTIONS(316),
    [sym_plain_value] = ACTIONS(318),
    [sym_comment] = ACTIONS(37),
  },
  [139] = {
    [anon_sym_STAR] = ACTIONS(171),
    [anon_sym_RBRACK] = ACTIONS(540),
    [anon_sym_PLUS] = ACTIONS(171),
    [anon_sym_DASH] = ACTIONS(171),
    [anon_sym_SLASH] = ACTIONS(173),
    [sym_comment] = ACTIONS(37),
  },
  [140] = {
    [sym__value] = STATE(172),
    [sym_color_value] = STATE(172),
    [sym_integer_value] = STATE(172),
    [sym_float_value] = STATE(172),
    [sym_call_expression] = STATE(172),
    [sym_binary_expression] = STATE(172),
    [anon_sym_POUND] = ACTIONS(306),
    [sym_string_value] = ACTIONS(542),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(314),
    [sym_identifier] = ACTIONS(316),
    [sym_plain_value] = ACTIONS(544),
    [sym_comment] = ACTIONS(37),
  },
  [141] = {
    [ts_builtin_sym_end] = ACTIONS(546),
    [anon_sym_ATimport] = ACTIONS(548),
    [anon_sym_ATmedia] = ACTIONS(548),
    [anon_sym_ATcharset] = ACTIONS(548),
    [anon_sym_ATnamespace] = ACTIONS(548),
    [anon_sym_ATkeyframes] = ACTIONS(548),
    [anon_sym_RBRACE] = ACTIONS(546),
    [anon_sym_ATsupports] = ACTIONS(548),
    [sym_nesting_selector] = ACTIONS(546),
    [anon_sym_STAR] = ACTIONS(546),
    [anon_sym_DOT] = ACTIONS(546),
    [anon_sym_COLON] = ACTIONS(548),
    [anon_sym_COLON_COLON] = ACTIONS(546),
    [anon_sym_POUND] = ACTIONS(546),
    [anon_sym_LBRACK] = ACTIONS(546),
    [sym_string_value] = ACTIONS(546),
    [sym_identifier] = ACTIONS(546),
    [sym_at_keyword] = ACTIONS(548),
    [sym_comment] = ACTIONS(37),
  },
  [142] = {
    [sym_import_statement] = STATE(142),
    [sym_media_statement] = STATE(142),
    [sym_charset_statement] = STATE(142),
    [sym_namespace_statement] = STATE(142),
    [sym_keyframes_statement] = STATE(142),
    [sym_supports_statement] = STATE(142),
    [sym_at_rule] = STATE(142),
    [sym_rule_set] = STATE(142),
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
    [sym_declaration] = STATE(142),
    [aux_sym_block_repeat1] = STATE(142),
    [anon_sym_ATimport] = ACTIONS(550),
    [anon_sym_ATmedia] = ACTIONS(553),
    [anon_sym_ATcharset] = ACTIONS(556),
    [anon_sym_ATnamespace] = ACTIONS(559),
    [anon_sym_ATkeyframes] = ACTIONS(562),
    [anon_sym_RBRACE] = ACTIONS(565),
    [anon_sym_ATsupports] = ACTIONS(567),
    [sym_nesting_selector] = ACTIONS(570),
    [anon_sym_STAR] = ACTIONS(573),
    [anon_sym_DOT] = ACTIONS(576),
    [anon_sym_COLON] = ACTIONS(579),
    [anon_sym_COLON_COLON] = ACTIONS(582),
    [anon_sym_POUND] = ACTIONS(585),
    [anon_sym_LBRACK] = ACTIONS(588),
    [sym_string_value] = ACTIONS(570),
    [sym_identifier] = ACTIONS(591),
    [sym_at_keyword] = ACTIONS(594),
    [sym_comment] = ACTIONS(37),
  },
  [143] = {
    [anon_sym_COMMA] = ACTIONS(497),
    [anon_sym_SEMI] = ACTIONS(497),
    [anon_sym_LBRACE] = ACTIONS(497),
    [anon_sym_and] = ACTIONS(219),
    [anon_sym_or] = ACTIONS(219),
    [sym_comment] = ACTIONS(37),
  },
  [144] = {
    [ts_builtin_sym_end] = ACTIONS(597),
    [anon_sym_ATimport] = ACTIONS(599),
    [anon_sym_ATmedia] = ACTIONS(599),
    [anon_sym_ATcharset] = ACTIONS(599),
    [anon_sym_ATnamespace] = ACTIONS(599),
    [anon_sym_ATkeyframes] = ACTIONS(599),
    [anon_sym_RBRACE] = ACTIONS(597),
    [anon_sym_ATsupports] = ACTIONS(599),
    [sym_nesting_selector] = ACTIONS(597),
    [anon_sym_STAR] = ACTIONS(597),
    [anon_sym_DOT] = ACTIONS(597),
    [anon_sym_COLON] = ACTIONS(599),
    [anon_sym_COLON_COLON] = ACTIONS(597),
    [anon_sym_POUND] = ACTIONS(597),
    [anon_sym_LBRACK] = ACTIONS(597),
    [sym_string_value] = ACTIONS(597),
    [sym_identifier] = ACTIONS(597),
    [sym_at_keyword] = ACTIONS(599),
    [sym_comment] = ACTIONS(37),
  },
  [145] = {
    [aux_sym_import_statement_repeat1] = STATE(145),
    [anon_sym_COMMA] = ACTIONS(601),
    [anon_sym_SEMI] = ACTIONS(497),
    [anon_sym_LBRACE] = ACTIONS(497),
    [sym_comment] = ACTIONS(37),
  },
  [146] = {
    [sym__descendant_operator] = ACTIONS(604),
    [anon_sym_COMMA] = ACTIONS(604),
    [anon_sym_LBRACE] = ACTIONS(604),
    [anon_sym_DOT] = ACTIONS(604),
    [anon_sym_COLON] = ACTIONS(606),
    [anon_sym_COLON_COLON] = ACTIONS(604),
    [anon_sym_POUND] = ACTIONS(604),
    [anon_sym_LBRACK] = ACTIONS(604),
    [anon_sym_GT] = ACTIONS(604),
    [anon_sym_TILDE] = ACTIONS(604),
    [anon_sym_PLUS] = ACTIONS(604),
    [anon_sym_RPAREN] = ACTIONS(604),
    [sym_comment] = ACTIONS(37),
  },
  [147] = {
    [sym__value] = STATE(173),
    [sym_color_value] = STATE(173),
    [sym_integer_value] = STATE(173),
    [sym_float_value] = STATE(173),
    [sym_call_expression] = STATE(173),
    [sym_binary_expression] = STATE(173),
    [anon_sym_POUND] = ACTIONS(39),
    [sym_string_value] = ACTIONS(608),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(61),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(63),
    [sym_identifier] = ACTIONS(47),
    [sym_plain_value] = ACTIONS(610),
    [sym_comment] = ACTIONS(37),
  },
  [148] = {
    [sym__descendant_operator] = ACTIONS(612),
    [anon_sym_COMMA] = ACTIONS(612),
    [anon_sym_LBRACE] = ACTIONS(612),
    [anon_sym_DOT] = ACTIONS(612),
    [anon_sym_COLON] = ACTIONS(614),
    [anon_sym_COLON_COLON] = ACTIONS(612),
    [anon_sym_POUND] = ACTIONS(612),
    [anon_sym_LBRACK] = ACTIONS(612),
    [anon_sym_GT] = ACTIONS(612),
    [anon_sym_TILDE] = ACTIONS(612),
    [anon_sym_PLUS] = ACTIONS(612),
    [anon_sym_RPAREN] = ACTIONS(612),
    [sym_comment] = ACTIONS(37),
  },
  [149] = {
    [anon_sym_COMMA] = ACTIONS(294),
    [anon_sym_SEMI] = ACTIONS(294),
    [anon_sym_STAR] = ACTIONS(294),
    [anon_sym_POUND] = ACTIONS(294),
    [anon_sym_PLUS] = ACTIONS(296),
    [anon_sym_RPAREN] = ACTIONS(294),
    [sym_important] = ACTIONS(294),
    [sym_string_value] = ACTIONS(294),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(296),
    [anon_sym_DASH] = ACTIONS(296),
    [anon_sym_SLASH] = ACTIONS(296),
    [sym_identifier] = ACTIONS(296),
    [sym_plain_value] = ACTIONS(296),
    [sym_comment] = ACTIONS(37),
  },
  [150] = {
    [anon_sym_COMMA] = ACTIONS(298),
    [anon_sym_SEMI] = ACTIONS(298),
    [anon_sym_STAR] = ACTIONS(298),
    [anon_sym_POUND] = ACTIONS(298),
    [anon_sym_PLUS] = ACTIONS(300),
    [anon_sym_RPAREN] = ACTIONS(298),
    [sym_important] = ACTIONS(298),
    [sym_string_value] = ACTIONS(298),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(300),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(300),
    [anon_sym_DASH] = ACTIONS(300),
    [anon_sym_SLASH] = ACTIONS(300),
    [sym_identifier] = ACTIONS(300),
    [sym_plain_value] = ACTIONS(300),
    [sym_comment] = ACTIONS(37),
  },
  [151] = {
    [anon_sym_COMMA] = ACTIONS(302),
    [anon_sym_SEMI] = ACTIONS(302),
    [anon_sym_STAR] = ACTIONS(302),
    [anon_sym_POUND] = ACTIONS(302),
    [anon_sym_PLUS] = ACTIONS(304),
    [anon_sym_RPAREN] = ACTIONS(302),
    [sym_important] = ACTIONS(302),
    [sym_string_value] = ACTIONS(302),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(304),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(304),
    [anon_sym_DASH] = ACTIONS(304),
    [anon_sym_SLASH] = ACTIONS(304),
    [sym_identifier] = ACTIONS(304),
    [sym_plain_value] = ACTIONS(304),
    [sym_comment] = ACTIONS(37),
  },
  [152] = {
    [sym__value] = STATE(114),
    [sym_color_value] = STATE(114),
    [sym_integer_value] = STATE(114),
    [sym_float_value] = STATE(114),
    [sym_call_expression] = STATE(114),
    [sym_binary_expression] = STATE(114),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(175),
    [anon_sym_POUND] = ACTIONS(306),
    [anon_sym_RPAREN] = ACTIONS(616),
    [sym_string_value] = ACTIONS(310),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(314),
    [sym_identifier] = ACTIONS(316),
    [sym_plain_value] = ACTIONS(318),
    [sym_comment] = ACTIONS(37),
  },
  [153] = {
    [anon_sym_COMMA] = ACTIONS(320),
    [anon_sym_SEMI] = ACTIONS(320),
    [anon_sym_STAR] = ACTIONS(320),
    [anon_sym_POUND] = ACTIONS(320),
    [anon_sym_PLUS] = ACTIONS(322),
    [anon_sym_RPAREN] = ACTIONS(320),
    [sym_important] = ACTIONS(320),
    [sym_string_value] = ACTIONS(320),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(322),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(322),
    [anon_sym_DASH] = ACTIONS(322),
    [anon_sym_SLASH] = ACTIONS(322),
    [sym_identifier] = ACTIONS(322),
    [sym_plain_value] = ACTIONS(322),
    [sym_comment] = ACTIONS(37),
  },
  [154] = {
    [sym__value] = STATE(176),
    [sym_color_value] = STATE(176),
    [sym_integer_value] = STATE(176),
    [sym_float_value] = STATE(176),
    [sym_call_expression] = STATE(176),
    [sym_binary_expression] = STATE(176),
    [anon_sym_POUND] = ACTIONS(306),
    [sym_string_value] = ACTIONS(618),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(314),
    [sym_identifier] = ACTIONS(316),
    [sym_plain_value] = ACTIONS(620),
    [sym_comment] = ACTIONS(37),
  },
  [155] = {
    [sym__value] = STATE(114),
    [sym_color_value] = STATE(114),
    [sym_integer_value] = STATE(114),
    [sym_float_value] = STATE(114),
    [sym_call_expression] = STATE(114),
    [sym_binary_expression] = STATE(114),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(177),
    [anon_sym_POUND] = ACTIONS(306),
    [sym_string_value] = ACTIONS(310),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(314),
    [sym_identifier] = ACTIONS(316),
    [sym_plain_value] = ACTIONS(318),
    [sym_comment] = ACTIONS(37),
  },
  [156] = {
    [anon_sym_SEMI] = ACTIONS(622),
    [anon_sym_STAR] = ACTIONS(622),
    [anon_sym_RBRACK] = ACTIONS(622),
    [anon_sym_PLUS] = ACTIONS(622),
    [anon_sym_RPAREN] = ACTIONS(622),
    [anon_sym_LPAREN2] = ACTIONS(622),
    [anon_sym_not] = ACTIONS(624),
    [anon_sym_selector] = ACTIONS(624),
    [anon_sym_DASH] = ACTIONS(624),
    [anon_sym_SLASH] = ACTIONS(624),
    [sym_identifier] = ACTIONS(624),
    [sym_comment] = ACTIONS(37),
  },
  [157] = {
    [sym__value] = STATE(114),
    [sym_color_value] = STATE(114),
    [sym_integer_value] = STATE(114),
    [sym_float_value] = STATE(114),
    [sym_call_expression] = STATE(114),
    [sym_binary_expression] = STATE(114),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(157),
    [anon_sym_COMMA] = ACTIONS(626),
    [anon_sym_POUND] = ACTIONS(628),
    [anon_sym_RPAREN] = ACTIONS(626),
    [sym_string_value] = ACTIONS(631),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(634),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(637),
    [sym_identifier] = ACTIONS(640),
    [sym_plain_value] = ACTIONS(643),
    [sym_comment] = ACTIONS(37),
  },
  [158] = {
    [aux_sym_arguments_repeat1] = STATE(179),
    [anon_sym_COMMA] = ACTIONS(475),
    [anon_sym_RPAREN] = ACTIONS(646),
    [sym_comment] = ACTIONS(37),
  },
  [159] = {
    [anon_sym_COMMA] = ACTIONS(497),
    [anon_sym_SEMI] = ACTIONS(497),
    [anon_sym_and] = ACTIONS(336),
    [anon_sym_or] = ACTIONS(336),
    [sym_comment] = ACTIONS(37),
  },
  [160] = {
    [ts_builtin_sym_end] = ACTIONS(648),
    [anon_sym_ATimport] = ACTIONS(650),
    [anon_sym_ATmedia] = ACTIONS(650),
    [anon_sym_ATcharset] = ACTIONS(650),
    [anon_sym_ATnamespace] = ACTIONS(650),
    [anon_sym_ATkeyframes] = ACTIONS(650),
    [anon_sym_RBRACE] = ACTIONS(648),
    [anon_sym_ATsupports] = ACTIONS(650),
    [sym_nesting_selector] = ACTIONS(648),
    [anon_sym_STAR] = ACTIONS(648),
    [anon_sym_DOT] = ACTIONS(648),
    [anon_sym_COLON] = ACTIONS(650),
    [anon_sym_COLON_COLON] = ACTIONS(648),
    [anon_sym_POUND] = ACTIONS(648),
    [anon_sym_LBRACK] = ACTIONS(648),
    [sym_string_value] = ACTIONS(648),
    [sym_identifier] = ACTIONS(648),
    [sym_at_keyword] = ACTIONS(650),
    [sym_comment] = ACTIONS(37),
  },
  [161] = {
    [aux_sym_import_statement_repeat1] = STATE(161),
    [anon_sym_COMMA] = ACTIONS(652),
    [anon_sym_SEMI] = ACTIONS(497),
    [sym_comment] = ACTIONS(37),
  },
  [162] = {
    [anon_sym_STAR] = ACTIONS(171),
    [anon_sym_PLUS] = ACTIONS(171),
    [anon_sym_RPAREN] = ACTIONS(655),
    [anon_sym_DASH] = ACTIONS(171),
    [anon_sym_SLASH] = ACTIONS(173),
    [sym_comment] = ACTIONS(37),
  },
  [163] = {
    [anon_sym_COMMA] = ACTIONS(657),
    [anon_sym_SEMI] = ACTIONS(657),
    [anon_sym_LBRACE] = ACTIONS(657),
    [anon_sym_RPAREN] = ACTIONS(657),
    [anon_sym_and] = ACTIONS(657),
    [anon_sym_or] = ACTIONS(657),
    [sym_comment] = ACTIONS(37),
  },
  [164] = {
    [sym_import_statement] = STATE(182),
    [sym_media_statement] = STATE(182),
    [sym_charset_statement] = STATE(182),
    [sym_namespace_statement] = STATE(182),
    [sym_keyframes_statement] = STATE(182),
    [sym_supports_statement] = STATE(182),
    [sym_at_rule] = STATE(182),
    [sym_rule_set] = STATE(182),
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
    [sym_declaration] = STATE(182),
    [aux_sym_block_repeat1] = STATE(182),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATmedia] = ACTIONS(9),
    [anon_sym_ATcharset] = ACTIONS(11),
    [anon_sym_ATnamespace] = ACTIONS(13),
    [anon_sym_ATkeyframes] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(659),
    [anon_sym_ATsupports] = ACTIONS(17),
    [sym_nesting_selector] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_string_value] = ACTIONS(19),
    [sym_identifier] = ACTIONS(213),
    [sym_at_keyword] = ACTIONS(35),
    [sym_comment] = ACTIONS(37),
  },
  [165] = {
    [anon_sym_RBRACE] = ACTIONS(661),
    [sym_from] = ACTIONS(661),
    [sym_to] = ACTIONS(661),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(661),
    [sym_comment] = ACTIONS(37),
  },
  [166] = {
    [ts_builtin_sym_end] = ACTIONS(663),
    [anon_sym_ATimport] = ACTIONS(665),
    [anon_sym_ATmedia] = ACTIONS(665),
    [anon_sym_ATcharset] = ACTIONS(665),
    [anon_sym_ATnamespace] = ACTIONS(665),
    [anon_sym_ATkeyframes] = ACTIONS(665),
    [anon_sym_RBRACE] = ACTIONS(663),
    [anon_sym_ATsupports] = ACTIONS(665),
    [sym_nesting_selector] = ACTIONS(663),
    [anon_sym_STAR] = ACTIONS(663),
    [anon_sym_DOT] = ACTIONS(663),
    [anon_sym_COLON] = ACTIONS(665),
    [anon_sym_COLON_COLON] = ACTIONS(663),
    [anon_sym_POUND] = ACTIONS(663),
    [anon_sym_LBRACK] = ACTIONS(663),
    [sym_string_value] = ACTIONS(663),
    [sym_identifier] = ACTIONS(663),
    [sym_at_keyword] = ACTIONS(665),
    [sym_comment] = ACTIONS(37),
  },
  [167] = {
    [sym_keyframe_block] = STATE(167),
    [sym_integer_value] = STATE(131),
    [aux_sym_keyframe_block_list_repeat1] = STATE(167),
    [anon_sym_RBRACE] = ACTIONS(667),
    [sym_from] = ACTIONS(669),
    [sym_to] = ACTIONS(669),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(672),
    [sym_comment] = ACTIONS(37),
  },
  [168] = {
    [sym__selector] = STATE(183),
    [sym_universal_selector] = STATE(183),
    [sym_class_selector] = STATE(183),
    [sym_pseudo_class_selector] = STATE(183),
    [sym_pseudo_element_selector] = STATE(183),
    [sym_id_selector] = STATE(183),
    [sym_attribute_selector] = STATE(183),
    [sym_child_selector] = STATE(183),
    [sym_descendant_selector] = STATE(183),
    [sym_sibling_selector] = STATE(183),
    [sym_adjacent_sibling_selector] = STATE(183),
    [sym__value] = STATE(114),
    [sym_color_value] = STATE(114),
    [sym_integer_value] = STATE(114),
    [sym_float_value] = STATE(114),
    [sym_call_expression] = STATE(114),
    [sym_binary_expression] = STATE(114),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(184),
    [sym_nesting_selector] = ACTIONS(675),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(378),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(380),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_string_value] = ACTIONS(384),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(314),
    [sym_identifier] = ACTIONS(386),
    [sym_plain_value] = ACTIONS(318),
    [sym_comment] = ACTIONS(37),
  },
  [169] = {
    [sym__descendant_operator] = ACTIONS(677),
    [anon_sym_COMMA] = ACTIONS(677),
    [anon_sym_LBRACE] = ACTIONS(677),
    [anon_sym_DOT] = ACTIONS(677),
    [anon_sym_COLON] = ACTIONS(679),
    [anon_sym_COLON_COLON] = ACTIONS(677),
    [anon_sym_POUND] = ACTIONS(677),
    [anon_sym_LBRACK] = ACTIONS(677),
    [anon_sym_GT] = ACTIONS(677),
    [anon_sym_TILDE] = ACTIONS(677),
    [anon_sym_PLUS] = ACTIONS(677),
    [anon_sym_RPAREN] = ACTIONS(677),
    [sym_comment] = ACTIONS(37),
  },
  [170] = {
    [aux_sym_pseudo_class_arguments_repeat2] = STATE(186),
    [anon_sym_COMMA] = ACTIONS(536),
    [anon_sym_RPAREN] = ACTIONS(681),
    [sym_comment] = ACTIONS(37),
  },
  [171] = {
    [sym__descendant_operator] = ACTIONS(683),
    [anon_sym_COMMA] = ACTIONS(683),
    [anon_sym_LBRACE] = ACTIONS(683),
    [anon_sym_DOT] = ACTIONS(683),
    [anon_sym_COLON] = ACTIONS(685),
    [anon_sym_COLON_COLON] = ACTIONS(683),
    [anon_sym_POUND] = ACTIONS(683),
    [anon_sym_LBRACK] = ACTIONS(683),
    [anon_sym_GT] = ACTIONS(683),
    [anon_sym_TILDE] = ACTIONS(683),
    [anon_sym_PLUS] = ACTIONS(683),
    [anon_sym_RPAREN] = ACTIONS(683),
    [sym_comment] = ACTIONS(37),
  },
  [172] = {
    [sym__value] = STATE(190),
    [sym_color_value] = STATE(190),
    [sym_integer_value] = STATE(190),
    [sym_float_value] = STATE(190),
    [sym_call_expression] = STATE(190),
    [sym_binary_expression] = STATE(190),
    [aux_sym_declaration_repeat1] = STATE(191),
    [anon_sym_COMMA] = ACTIONS(687),
    [anon_sym_SEMI] = ACTIONS(689),
    [anon_sym_STAR] = ACTIONS(469),
    [anon_sym_POUND] = ACTIONS(306),
    [anon_sym_PLUS] = ACTIONS(471),
    [sym_important] = ACTIONS(691),
    [sym_string_value] = ACTIONS(693),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(314),
    [anon_sym_DASH] = ACTIONS(471),
    [anon_sym_SLASH] = ACTIONS(471),
    [sym_identifier] = ACTIONS(316),
    [sym_plain_value] = ACTIONS(695),
    [sym_comment] = ACTIONS(37),
  },
  [173] = {
    [anon_sym_STAR] = ACTIONS(171),
    [anon_sym_RBRACK] = ACTIONS(697),
    [anon_sym_PLUS] = ACTIONS(171),
    [anon_sym_DASH] = ACTIONS(171),
    [anon_sym_SLASH] = ACTIONS(173),
    [sym_comment] = ACTIONS(37),
  },
  [174] = {
    [anon_sym_COMMA] = ACTIONS(457),
    [anon_sym_SEMI] = ACTIONS(457),
    [anon_sym_STAR] = ACTIONS(457),
    [anon_sym_POUND] = ACTIONS(457),
    [anon_sym_PLUS] = ACTIONS(459),
    [anon_sym_RPAREN] = ACTIONS(457),
    [sym_important] = ACTIONS(457),
    [sym_string_value] = ACTIONS(457),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(459),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(459),
    [anon_sym_DASH] = ACTIONS(459),
    [anon_sym_SLASH] = ACTIONS(459),
    [sym_identifier] = ACTIONS(459),
    [sym_plain_value] = ACTIONS(459),
    [sym_comment] = ACTIONS(37),
  },
  [175] = {
    [sym__value] = STATE(114),
    [sym_color_value] = STATE(114),
    [sym_integer_value] = STATE(114),
    [sym_float_value] = STATE(114),
    [sym_call_expression] = STATE(114),
    [sym_binary_expression] = STATE(114),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(157),
    [aux_sym_arguments_repeat1] = STATE(194),
    [anon_sym_COMMA] = ACTIONS(475),
    [anon_sym_POUND] = ACTIONS(306),
    [anon_sym_RPAREN] = ACTIONS(699),
    [sym_string_value] = ACTIONS(310),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(314),
    [sym_identifier] = ACTIONS(316),
    [sym_plain_value] = ACTIONS(318),
    [sym_comment] = ACTIONS(37),
  },
  [176] = {
    [anon_sym_COMMA] = ACTIONS(479),
    [anon_sym_SEMI] = ACTIONS(479),
    [anon_sym_STAR] = ACTIONS(479),
    [anon_sym_POUND] = ACTIONS(479),
    [anon_sym_PLUS] = ACTIONS(481),
    [anon_sym_RPAREN] = ACTIONS(479),
    [sym_important] = ACTIONS(479),
    [sym_string_value] = ACTIONS(479),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(481),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(481),
    [anon_sym_DASH] = ACTIONS(481),
    [anon_sym_SLASH] = ACTIONS(481),
    [sym_identifier] = ACTIONS(481),
    [sym_plain_value] = ACTIONS(481),
    [sym_comment] = ACTIONS(37),
  },
  [177] = {
    [sym__value] = STATE(114),
    [sym_color_value] = STATE(114),
    [sym_integer_value] = STATE(114),
    [sym_float_value] = STATE(114),
    [sym_call_expression] = STATE(114),
    [sym_binary_expression] = STATE(114),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(157),
    [anon_sym_COMMA] = ACTIONS(701),
    [anon_sym_POUND] = ACTIONS(306),
    [anon_sym_RPAREN] = ACTIONS(701),
    [sym_string_value] = ACTIONS(310),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(314),
    [sym_identifier] = ACTIONS(316),
    [sym_plain_value] = ACTIONS(318),
    [sym_comment] = ACTIONS(37),
  },
  [178] = {
    [anon_sym_SEMI] = ACTIONS(703),
    [anon_sym_STAR] = ACTIONS(703),
    [anon_sym_RBRACK] = ACTIONS(703),
    [anon_sym_PLUS] = ACTIONS(703),
    [anon_sym_RPAREN] = ACTIONS(703),
    [anon_sym_LPAREN2] = ACTIONS(703),
    [anon_sym_not] = ACTIONS(705),
    [anon_sym_selector] = ACTIONS(705),
    [anon_sym_DASH] = ACTIONS(705),
    [anon_sym_SLASH] = ACTIONS(705),
    [sym_identifier] = ACTIONS(705),
    [sym_comment] = ACTIONS(37),
  },
  [179] = {
    [aux_sym_arguments_repeat1] = STATE(179),
    [anon_sym_COMMA] = ACTIONS(707),
    [anon_sym_RPAREN] = ACTIONS(701),
    [sym_comment] = ACTIONS(37),
  },
  [180] = {
    [anon_sym_COMMA] = ACTIONS(710),
    [anon_sym_SEMI] = ACTIONS(710),
    [anon_sym_LBRACE] = ACTIONS(710),
    [anon_sym_RPAREN] = ACTIONS(710),
    [anon_sym_and] = ACTIONS(710),
    [anon_sym_or] = ACTIONS(710),
    [sym_comment] = ACTIONS(37),
  },
  [181] = {
    [anon_sym_RBRACE] = ACTIONS(400),
    [sym_from] = ACTIONS(400),
    [sym_to] = ACTIONS(400),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(400),
    [sym_comment] = ACTIONS(37),
  },
  [182] = {
    [sym_import_statement] = STATE(142),
    [sym_media_statement] = STATE(142),
    [sym_charset_statement] = STATE(142),
    [sym_namespace_statement] = STATE(142),
    [sym_keyframes_statement] = STATE(142),
    [sym_supports_statement] = STATE(142),
    [sym_at_rule] = STATE(142),
    [sym_rule_set] = STATE(142),
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
    [sym_declaration] = STATE(142),
    [aux_sym_block_repeat1] = STATE(142),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATmedia] = ACTIONS(9),
    [anon_sym_ATcharset] = ACTIONS(11),
    [anon_sym_ATnamespace] = ACTIONS(13),
    [anon_sym_ATkeyframes] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(712),
    [anon_sym_ATsupports] = ACTIONS(17),
    [sym_nesting_selector] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_string_value] = ACTIONS(19),
    [sym_identifier] = ACTIONS(213),
    [sym_at_keyword] = ACTIONS(35),
    [sym_comment] = ACTIONS(37),
  },
  [183] = {
    [sym__descendant_operator] = ACTIONS(101),
    [anon_sym_COMMA] = ACTIONS(714),
    [anon_sym_DOT] = ACTIONS(107),
    [anon_sym_COLON] = ACTIONS(109),
    [anon_sym_COLON_COLON] = ACTIONS(111),
    [anon_sym_POUND] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_GT] = ACTIONS(117),
    [anon_sym_TILDE] = ACTIONS(119),
    [anon_sym_PLUS] = ACTIONS(121),
    [anon_sym_RPAREN] = ACTIONS(714),
    [sym_comment] = ACTIONS(37),
  },
  [184] = {
    [sym__value] = STATE(114),
    [sym_color_value] = STATE(114),
    [sym_integer_value] = STATE(114),
    [sym_float_value] = STATE(114),
    [sym_call_expression] = STATE(114),
    [sym_binary_expression] = STATE(114),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(157),
    [anon_sym_COMMA] = ACTIONS(714),
    [anon_sym_POUND] = ACTIONS(306),
    [anon_sym_RPAREN] = ACTIONS(714),
    [sym_string_value] = ACTIONS(310),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(314),
    [sym_identifier] = ACTIONS(316),
    [sym_plain_value] = ACTIONS(318),
    [sym_comment] = ACTIONS(37),
  },
  [185] = {
    [sym__descendant_operator] = ACTIONS(716),
    [anon_sym_COMMA] = ACTIONS(716),
    [anon_sym_LBRACE] = ACTIONS(716),
    [anon_sym_DOT] = ACTIONS(716),
    [anon_sym_COLON] = ACTIONS(718),
    [anon_sym_COLON_COLON] = ACTIONS(716),
    [anon_sym_POUND] = ACTIONS(716),
    [anon_sym_LBRACK] = ACTIONS(716),
    [anon_sym_GT] = ACTIONS(716),
    [anon_sym_TILDE] = ACTIONS(716),
    [anon_sym_PLUS] = ACTIONS(716),
    [anon_sym_RPAREN] = ACTIONS(716),
    [sym_comment] = ACTIONS(37),
  },
  [186] = {
    [aux_sym_pseudo_class_arguments_repeat2] = STATE(186),
    [anon_sym_COMMA] = ACTIONS(720),
    [anon_sym_RPAREN] = ACTIONS(714),
    [sym_comment] = ACTIONS(37),
  },
  [187] = {
    [sym__value] = STATE(196),
    [sym_color_value] = STATE(196),
    [sym_integer_value] = STATE(196),
    [sym_float_value] = STATE(196),
    [sym_call_expression] = STATE(196),
    [sym_binary_expression] = STATE(196),
    [anon_sym_POUND] = ACTIONS(306),
    [sym_string_value] = ACTIONS(723),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(314),
    [sym_identifier] = ACTIONS(316),
    [sym_plain_value] = ACTIONS(725),
    [sym_comment] = ACTIONS(37),
  },
  [188] = {
    [anon_sym_ATimport] = ACTIONS(727),
    [anon_sym_ATmedia] = ACTIONS(727),
    [anon_sym_ATcharset] = ACTIONS(727),
    [anon_sym_ATnamespace] = ACTIONS(727),
    [anon_sym_ATkeyframes] = ACTIONS(727),
    [anon_sym_RBRACE] = ACTIONS(729),
    [anon_sym_ATsupports] = ACTIONS(727),
    [sym_nesting_selector] = ACTIONS(729),
    [anon_sym_STAR] = ACTIONS(729),
    [anon_sym_DOT] = ACTIONS(729),
    [anon_sym_COLON] = ACTIONS(727),
    [anon_sym_COLON_COLON] = ACTIONS(729),
    [anon_sym_POUND] = ACTIONS(729),
    [anon_sym_LBRACK] = ACTIONS(729),
    [sym_string_value] = ACTIONS(729),
    [sym_identifier] = ACTIONS(729),
    [sym_at_keyword] = ACTIONS(727),
    [sym_comment] = ACTIONS(37),
  },
  [189] = {
    [anon_sym_SEMI] = ACTIONS(731),
    [sym_comment] = ACTIONS(37),
  },
  [190] = {
    [anon_sym_COMMA] = ACTIONS(733),
    [anon_sym_SEMI] = ACTIONS(733),
    [anon_sym_STAR] = ACTIONS(469),
    [anon_sym_POUND] = ACTIONS(733),
    [anon_sym_PLUS] = ACTIONS(471),
    [sym_important] = ACTIONS(733),
    [sym_string_value] = ACTIONS(733),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(735),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(735),
    [anon_sym_DASH] = ACTIONS(471),
    [anon_sym_SLASH] = ACTIONS(471),
    [sym_identifier] = ACTIONS(735),
    [sym_plain_value] = ACTIONS(735),
    [sym_comment] = ACTIONS(37),
  },
  [191] = {
    [sym__value] = STATE(190),
    [sym_color_value] = STATE(190),
    [sym_integer_value] = STATE(190),
    [sym_float_value] = STATE(190),
    [sym_call_expression] = STATE(190),
    [sym_binary_expression] = STATE(190),
    [aux_sym_declaration_repeat1] = STATE(199),
    [anon_sym_COMMA] = ACTIONS(687),
    [anon_sym_SEMI] = ACTIONS(731),
    [anon_sym_POUND] = ACTIONS(306),
    [sym_important] = ACTIONS(737),
    [sym_string_value] = ACTIONS(693),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(314),
    [sym_identifier] = ACTIONS(316),
    [sym_plain_value] = ACTIONS(695),
    [sym_comment] = ACTIONS(37),
  },
  [192] = {
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
  [193] = {
    [anon_sym_COMMA] = ACTIONS(622),
    [anon_sym_SEMI] = ACTIONS(622),
    [anon_sym_STAR] = ACTIONS(622),
    [anon_sym_POUND] = ACTIONS(622),
    [anon_sym_PLUS] = ACTIONS(624),
    [anon_sym_RPAREN] = ACTIONS(622),
    [sym_important] = ACTIONS(622),
    [sym_string_value] = ACTIONS(622),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(624),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(624),
    [anon_sym_DASH] = ACTIONS(624),
    [anon_sym_SLASH] = ACTIONS(624),
    [sym_identifier] = ACTIONS(624),
    [sym_plain_value] = ACTIONS(624),
    [sym_comment] = ACTIONS(37),
  },
  [194] = {
    [aux_sym_arguments_repeat1] = STATE(179),
    [anon_sym_COMMA] = ACTIONS(475),
    [anon_sym_RPAREN] = ACTIONS(743),
    [sym_comment] = ACTIONS(37),
  },
  [195] = {
    [anon_sym_RBRACE] = ACTIONS(546),
    [sym_from] = ACTIONS(546),
    [sym_to] = ACTIONS(546),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(546),
    [sym_comment] = ACTIONS(37),
  },
  [196] = {
    [anon_sym_COMMA] = ACTIONS(745),
    [anon_sym_SEMI] = ACTIONS(745),
    [anon_sym_STAR] = ACTIONS(469),
    [anon_sym_POUND] = ACTIONS(745),
    [anon_sym_PLUS] = ACTIONS(471),
    [sym_important] = ACTIONS(745),
    [sym_string_value] = ACTIONS(745),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(747),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(747),
    [anon_sym_DASH] = ACTIONS(471),
    [anon_sym_SLASH] = ACTIONS(471),
    [sym_identifier] = ACTIONS(747),
    [sym_plain_value] = ACTIONS(747),
    [sym_comment] = ACTIONS(37),
  },
  [197] = {
    [anon_sym_ATimport] = ACTIONS(749),
    [anon_sym_ATmedia] = ACTIONS(749),
    [anon_sym_ATcharset] = ACTIONS(749),
    [anon_sym_ATnamespace] = ACTIONS(749),
    [anon_sym_ATkeyframes] = ACTIONS(749),
    [anon_sym_RBRACE] = ACTIONS(751),
    [anon_sym_ATsupports] = ACTIONS(749),
    [sym_nesting_selector] = ACTIONS(751),
    [anon_sym_STAR] = ACTIONS(751),
    [anon_sym_DOT] = ACTIONS(751),
    [anon_sym_COLON] = ACTIONS(749),
    [anon_sym_COLON_COLON] = ACTIONS(751),
    [anon_sym_POUND] = ACTIONS(751),
    [anon_sym_LBRACK] = ACTIONS(751),
    [sym_string_value] = ACTIONS(751),
    [sym_identifier] = ACTIONS(751),
    [sym_at_keyword] = ACTIONS(749),
    [sym_comment] = ACTIONS(37),
  },
  [198] = {
    [anon_sym_SEMI] = ACTIONS(753),
    [sym_comment] = ACTIONS(37),
  },
  [199] = {
    [sym__value] = STATE(190),
    [sym_color_value] = STATE(190),
    [sym_integer_value] = STATE(190),
    [sym_float_value] = STATE(190),
    [sym_call_expression] = STATE(190),
    [sym_binary_expression] = STATE(190),
    [aux_sym_declaration_repeat1] = STATE(199),
    [anon_sym_COMMA] = ACTIONS(755),
    [anon_sym_SEMI] = ACTIONS(745),
    [anon_sym_POUND] = ACTIONS(758),
    [sym_important] = ACTIONS(745),
    [sym_string_value] = ACTIONS(761),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(764),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(767),
    [sym_identifier] = ACTIONS(770),
    [sym_plain_value] = ACTIONS(773),
    [sym_comment] = ACTIONS(37),
  },
  [200] = {
    [anon_sym_COMMA] = ACTIONS(703),
    [anon_sym_SEMI] = ACTIONS(703),
    [anon_sym_STAR] = ACTIONS(703),
    [anon_sym_POUND] = ACTIONS(703),
    [anon_sym_PLUS] = ACTIONS(705),
    [anon_sym_RPAREN] = ACTIONS(703),
    [sym_important] = ACTIONS(703),
    [sym_string_value] = ACTIONS(703),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(705),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(705),
    [anon_sym_DASH] = ACTIONS(705),
    [anon_sym_SLASH] = ACTIONS(705),
    [sym_identifier] = ACTIONS(705),
    [sym_plain_value] = ACTIONS(705),
    [sym_comment] = ACTIONS(37),
  },
  [201] = {
    [anon_sym_ATimport] = ACTIONS(776),
    [anon_sym_ATmedia] = ACTIONS(776),
    [anon_sym_ATcharset] = ACTIONS(776),
    [anon_sym_ATnamespace] = ACTIONS(776),
    [anon_sym_ATkeyframes] = ACTIONS(776),
    [anon_sym_RBRACE] = ACTIONS(778),
    [anon_sym_ATsupports] = ACTIONS(776),
    [sym_nesting_selector] = ACTIONS(778),
    [anon_sym_STAR] = ACTIONS(778),
    [anon_sym_DOT] = ACTIONS(778),
    [anon_sym_COLON] = ACTIONS(776),
    [anon_sym_COLON_COLON] = ACTIONS(778),
    [anon_sym_POUND] = ACTIONS(778),
    [anon_sym_LBRACK] = ACTIONS(778),
    [sym_string_value] = ACTIONS(778),
    [sym_identifier] = ACTIONS(778),
    [sym_at_keyword] = ACTIONS(776),
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
  [41] = {.count = 1, .reusable = true}, SHIFT(24),
  [43] = {.count = 1, .reusable = false}, SHIFT(21),
  [45] = {.count = 1, .reusable = false}, SHIFT(22),
  [47] = {.count = 1, .reusable = false}, SHIFT(23),
  [49] = {.count = 1, .reusable = false}, SHIFT(24),
  [51] = {.count = 1, .reusable = true}, SHIFT(25),
  [53] = {.count = 1, .reusable = false}, SHIFT(26),
  [55] = {.count = 1, .reusable = false}, SHIFT(27),
  [57] = {.count = 1, .reusable = false}, SHIFT(28),
  [59] = {.count = 1, .reusable = true}, SHIFT(32),
  [61] = {.count = 1, .reusable = false}, SHIFT(30),
  [63] = {.count = 1, .reusable = false}, SHIFT(31),
  [65] = {.count = 1, .reusable = false}, SHIFT(32),
  [67] = {.count = 1, .reusable = true}, SHIFT(33),
  [69] = {.count = 1, .reusable = true}, SHIFT(34),
  [71] = {.count = 1, .reusable = true}, SHIFT(35),
  [73] = {.count = 1, .reusable = false}, SHIFT(36),
  [75] = {.count = 1, .reusable = true}, REDUCE(sym_universal_selector, 1),
  [77] = {.count = 1, .reusable = false}, REDUCE(sym_universal_selector, 1),
  [79] = {.count = 1, .reusable = true}, SHIFT(38),
  [81] = {.count = 1, .reusable = true}, SHIFT(39),
  [83] = {.count = 1, .reusable = true}, SHIFT(40),
  [85] = {.count = 1, .reusable = true}, SHIFT(41),
  [87] = {.count = 1, .reusable = true}, SHIFT(42),
  [89] = {.count = 1, .reusable = true}, REDUCE(sym__selector, 1, .alias_sequence_id = 1),
  [91] = {.count = 1, .reusable = false}, REDUCE(sym__selector, 1, .alias_sequence_id = 1),
  [93] = {.count = 1, .reusable = true}, SHIFT(43),
  [95] = {.count = 1, .reusable = true}, SHIFT(44),
  [97] = {.count = 1, .reusable = false}, SHIFT(45),
  [99] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [101] = {.count = 1, .reusable = true}, SHIFT(48),
  [103] = {.count = 1, .reusable = true}, SHIFT(49),
  [105] = {.count = 1, .reusable = true}, REDUCE(sym_selectors, 1),
  [107] = {.count = 1, .reusable = true}, SHIFT(50),
  [109] = {.count = 1, .reusable = false}, SHIFT(51),
  [111] = {.count = 1, .reusable = true}, SHIFT(52),
  [113] = {.count = 1, .reusable = true}, SHIFT(53),
  [115] = {.count = 1, .reusable = true}, SHIFT(54),
  [117] = {.count = 1, .reusable = true}, SHIFT(55),
  [119] = {.count = 1, .reusable = true}, SHIFT(56),
  [121] = {.count = 1, .reusable = true}, SHIFT(57),
  [123] = {.count = 1, .reusable = true}, REDUCE(sym_stylesheet, 1),
  [125] = {.count = 1, .reusable = true}, SHIFT(60),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_integer_value, 1),
  [129] = {.count = 1, .reusable = false}, REDUCE(sym_integer_value, 1),
  [131] = {.count = 1, .reusable = false}, SHIFT(61),
  [133] = {.count = 1, .reusable = true}, REDUCE(sym_float_value, 1),
  [135] = {.count = 1, .reusable = false}, REDUCE(sym_float_value, 1),
  [137] = {.count = 1, .reusable = false}, SHIFT(62),
  [139] = {.count = 1, .reusable = true}, REDUCE(sym__value, 1, .alias_sequence_id = 2),
  [141] = {.count = 1, .reusable = true}, SHIFT(63),
  [143] = {.count = 1, .reusable = false}, REDUCE(sym__value, 1, .alias_sequence_id = 2),
  [145] = {.count = 1, .reusable = true}, SHIFT(65),
  [147] = {.count = 1, .reusable = true}, SHIFT(66),
  [149] = {.count = 1, .reusable = false}, SHIFT(67),
  [151] = {.count = 1, .reusable = false}, SHIFT(66),
  [153] = {.count = 1, .reusable = false}, SHIFT(69),
  [155] = {.count = 1, .reusable = false}, SHIFT(70),
  [157] = {.count = 1, .reusable = true}, SHIFT(73),
  [159] = {.count = 1, .reusable = true}, REDUCE(sym__query, 1, .alias_sequence_id = 3),
  [161] = {.count = 1, .reusable = true}, SHIFT(74),
  [163] = {.count = 1, .reusable = true}, SHIFT(75),
  [165] = {.count = 1, .reusable = true}, SHIFT(61),
  [167] = {.count = 1, .reusable = true}, SHIFT(62),
  [169] = {.count = 1, .reusable = true}, SHIFT(78),
  [171] = {.count = 1, .reusable = true}, SHIFT(79),
  [173] = {.count = 1, .reusable = false}, SHIFT(79),
  [175] = {.count = 1, .reusable = true}, SHIFT(80),
  [177] = {.count = 1, .reusable = true}, SHIFT(81),
  [179] = {.count = 1, .reusable = true}, SHIFT(82),
  [181] = {.count = 1, .reusable = true}, SHIFT(83),
  [183] = {.count = 1, .reusable = true}, SHIFT(85),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym_class_selector, 2, .alias_sequence_id = 4),
  [187] = {.count = 1, .reusable = false}, REDUCE(sym_class_selector, 2, .alias_sequence_id = 4),
  [189] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_selector, 2, .alias_sequence_id = 4),
  [191] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_selector, 2, .alias_sequence_id = 4),
  [193] = {.count = 1, .reusable = true}, SHIFT(87),
  [195] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_element_selector, 2, .alias_sequence_id = 5),
  [197] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_element_selector, 2, .alias_sequence_id = 5),
  [199] = {.count = 1, .reusable = true}, REDUCE(sym_id_selector, 2, .alias_sequence_id = 6),
  [201] = {.count = 1, .reusable = false}, REDUCE(sym_id_selector, 2, .alias_sequence_id = 6),
  [203] = {.count = 1, .reusable = true}, SHIFT(89),
  [205] = {.count = 1, .reusable = true}, SHIFT(90),
  [207] = {.count = 1, .reusable = true}, REDUCE(sym_at_rule, 2),
  [209] = {.count = 1, .reusable = false}, REDUCE(sym_at_rule, 2),
  [211] = {.count = 1, .reusable = true}, SHIFT(91),
  [213] = {.count = 1, .reusable = true}, SHIFT(92),
  [215] = {.count = 1, .reusable = true}, SHIFT(94),
  [217] = {.count = 1, .reusable = true}, SHIFT(95),
  [219] = {.count = 1, .reusable = true}, SHIFT(96),
  [221] = {.count = 1, .reusable = true}, REDUCE(sym_rule_set, 2),
  [223] = {.count = 1, .reusable = false}, REDUCE(sym_rule_set, 2),
  [225] = {.count = 1, .reusable = true}, SHIFT(98),
  [227] = {.count = 1, .reusable = true}, SHIFT(99),
  [229] = {.count = 1, .reusable = true}, SHIFT(100),
  [231] = {.count = 1, .reusable = true}, SHIFT(101),
  [233] = {.count = 1, .reusable = true}, SHIFT(102),
  [235] = {.count = 1, .reusable = true}, SHIFT(103),
  [237] = {.count = 1, .reusable = true}, SHIFT(104),
  [239] = {.count = 1, .reusable = true}, SHIFT(105),
  [241] = {.count = 1, .reusable = true}, SHIFT(106),
  [243] = {.count = 1, .reusable = true}, SHIFT(107),
  [245] = {.count = 1, .reusable = true}, REDUCE(sym_selectors, 2),
  [247] = {.count = 1, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2),
  [249] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(2),
  [252] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(3),
  [255] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(4),
  [258] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(5),
  [261] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(6),
  [264] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(7),
  [267] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(18),
  [270] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(8),
  [273] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(9),
  [276] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(10),
  [279] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(11),
  [282] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(12),
  [285] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(13),
  [288] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(14),
  [291] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(15),
  [294] = {.count = 1, .reusable = true}, REDUCE(sym_color_value, 2),
  [296] = {.count = 1, .reusable = false}, REDUCE(sym_color_value, 2),
  [298] = {.count = 1, .reusable = true}, REDUCE(sym_integer_value, 2),
  [300] = {.count = 1, .reusable = false}, REDUCE(sym_integer_value, 2),
  [302] = {.count = 1, .reusable = true}, REDUCE(sym_float_value, 2),
  [304] = {.count = 1, .reusable = false}, REDUCE(sym_float_value, 2),
  [306] = {.count = 1, .reusable = true}, SHIFT(109),
  [308] = {.count = 1, .reusable = true}, SHIFT(110),
  [310] = {.count = 1, .reusable = true}, SHIFT(114),
  [312] = {.count = 1, .reusable = false}, SHIFT(111),
  [314] = {.count = 1, .reusable = false}, SHIFT(112),
  [316] = {.count = 1, .reusable = false}, SHIFT(113),
  [318] = {.count = 1, .reusable = false}, SHIFT(114),
  [320] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 2, .alias_sequence_id = 7),
  [322] = {.count = 1, .reusable = false}, REDUCE(sym_call_expression, 2, .alias_sequence_id = 7),
  [324] = {.count = 1, .reusable = true}, REDUCE(sym_import_statement, 3),
  [326] = {.count = 1, .reusable = false}, REDUCE(sym_import_statement, 3),
  [328] = {.count = 1, .reusable = true}, SHIFT(116),
  [330] = {.count = 1, .reusable = false}, SHIFT(116),
  [332] = {.count = 1, .reusable = true}, SHIFT(117),
  [334] = {.count = 1, .reusable = true}, SHIFT(118),
  [336] = {.count = 1, .reusable = true}, SHIFT(119),
  [338] = {.count = 1, .reusable = true}, SHIFT(121),
  [340] = {.count = 1, .reusable = true}, SHIFT(122),
  [342] = {.count = 1, .reusable = true}, SHIFT(123),
  [344] = {.count = 1, .reusable = true}, REDUCE(sym_negated_query, 2),
  [346] = {.count = 1, .reusable = true}, SHIFT(124),
  [348] = {.count = 1, .reusable = true}, REDUCE(sym_media_statement, 3),
  [350] = {.count = 1, .reusable = false}, REDUCE(sym_media_statement, 3),
  [352] = {.count = 1, .reusable = true}, REDUCE(sym_charset_statement, 3),
  [354] = {.count = 1, .reusable = false}, REDUCE(sym_charset_statement, 3),
  [356] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_statement, 3),
  [358] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_statement, 3),
  [360] = {.count = 1, .reusable = true}, SHIFT(129),
  [362] = {.count = 1, .reusable = true}, SHIFT(130),
  [364] = {.count = 1, .reusable = true}, SHIFT(131),
  [366] = {.count = 1, .reusable = true}, SHIFT(30),
  [368] = {.count = 1, .reusable = true}, REDUCE(sym_keyframes_statement, 3, .alias_sequence_id = 8),
  [370] = {.count = 1, .reusable = false}, REDUCE(sym_keyframes_statement, 3, .alias_sequence_id = 8),
  [372] = {.count = 1, .reusable = true}, REDUCE(sym_supports_statement, 3),
  [374] = {.count = 1, .reusable = false}, REDUCE(sym_supports_statement, 3),
  [376] = {.count = 1, .reusable = true}, SHIFT(137),
  [378] = {.count = 1, .reusable = false}, SHIFT(9),
  [380] = {.count = 1, .reusable = true}, SHIFT(133),
  [382] = {.count = 1, .reusable = true}, SHIFT(134),
  [384] = {.count = 1, .reusable = true}, SHIFT(135),
  [386] = {.count = 1, .reusable = false}, SHIFT(136),
  [388] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_selector, 3, .alias_sequence_id = 4),
  [390] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_selector, 3, .alias_sequence_id = 4),
  [392] = {.count = 1, .reusable = true}, SHIFT(139),
  [394] = {.count = 1, .reusable = false}, SHIFT(139),
  [396] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_selector, 3, .alias_sequence_id = 9),
  [398] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_selector, 3, .alias_sequence_id = 9),
  [400] = {.count = 1, .reusable = true}, REDUCE(sym_block, 2),
  [402] = {.count = 1, .reusable = false}, REDUCE(sym_block, 2),
  [404] = {.count = 1, .reusable = false}, SHIFT(140),
  [406] = {.count = 1, .reusable = true}, SHIFT(141),
  [408] = {.count = 1, .reusable = true}, REDUCE(sym_at_rule, 3),
  [410] = {.count = 1, .reusable = false}, REDUCE(sym_at_rule, 3),
  [412] = {.count = 1, .reusable = true}, SHIFT(144),
  [414] = {.count = 1, .reusable = true}, REDUCE(sym_descendant_selector, 3),
  [416] = {.count = 1, .reusable = false}, REDUCE(sym_descendant_selector, 3),
  [418] = {.count = 1, .reusable = true}, REDUCE(aux_sym_selectors_repeat1, 2),
  [420] = {.count = 1, .reusable = true}, REDUCE(sym_class_selector, 3, .alias_sequence_id = 10),
  [422] = {.count = 1, .reusable = false}, REDUCE(sym_class_selector, 3, .alias_sequence_id = 10),
  [424] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_selector, 3, .alias_sequence_id = 10),
  [426] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_selector, 3, .alias_sequence_id = 10),
  [428] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_element_selector, 3, .alias_sequence_id = 11),
  [430] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_element_selector, 3, .alias_sequence_id = 11),
  [432] = {.count = 1, .reusable = true}, REDUCE(sym_id_selector, 3, .alias_sequence_id = 12),
  [434] = {.count = 1, .reusable = false}, REDUCE(sym_id_selector, 3, .alias_sequence_id = 12),
  [436] = {.count = 1, .reusable = true}, SHIFT(147),
  [438] = {.count = 1, .reusable = true}, SHIFT(148),
  [440] = {.count = 1, .reusable = true}, REDUCE(sym_child_selector, 3),
  [442] = {.count = 1, .reusable = false}, REDUCE(sym_child_selector, 3),
  [444] = {.count = 1, .reusable = true}, REDUCE(sym_sibling_selector, 3),
  [446] = {.count = 1, .reusable = false}, REDUCE(sym_sibling_selector, 3),
  [448] = {.count = 1, .reusable = true}, REDUCE(sym_adjacent_sibling_selector, 3),
  [450] = {.count = 1, .reusable = false}, REDUCE(sym_adjacent_sibling_selector, 3),
  [452] = {.count = 2, .reusable = true}, REDUCE(aux_sym_selectors_repeat1, 2), SHIFT_REPEAT(49),
  [455] = {.count = 1, .reusable = true}, SHIFT(149),
  [457] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 2),
  [459] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 2),
  [461] = {.count = 1, .reusable = false}, SHIFT(150),
  [463] = {.count = 1, .reusable = false}, SHIFT(151),
  [465] = {.count = 1, .reusable = true}, SHIFT(152),
  [467] = {.count = 1, .reusable = true}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 1),
  [469] = {.count = 1, .reusable = true}, SHIFT(154),
  [471] = {.count = 1, .reusable = false}, SHIFT(154),
  [473] = {.count = 1, .reusable = false}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 1),
  [475] = {.count = 1, .reusable = true}, SHIFT(155),
  [477] = {.count = 1, .reusable = true}, SHIFT(156),
  [479] = {.count = 1, .reusable = true}, REDUCE(sym_binary_expression, 3),
  [481] = {.count = 1, .reusable = false}, REDUCE(sym_binary_expression, 3),
  [483] = {.count = 1, .reusable = true}, REDUCE(sym_import_statement, 4),
  [485] = {.count = 1, .reusable = false}, REDUCE(sym_import_statement, 4),
  [487] = {.count = 1, .reusable = true}, SHIFT(160),
  [489] = {.count = 1, .reusable = true}, SHIFT(162),
  [491] = {.count = 1, .reusable = false}, SHIFT(162),
  [493] = {.count = 1, .reusable = true}, REDUCE(sym_parenthesized_query, 3),
  [495] = {.count = 1, .reusable = true}, SHIFT(163),
  [497] = {.count = 1, .reusable = true}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [499] = {.count = 1, .reusable = true}, REDUCE(sym_binary_query, 3),
  [501] = {.count = 1, .reusable = true}, REDUCE(sym_media_statement, 4),
  [503] = {.count = 1, .reusable = false}, REDUCE(sym_media_statement, 4),
  [505] = {.count = 2, .reusable = true}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(74),
  [508] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_statement, 4, .alias_sequence_id = 13),
  [510] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_statement, 4, .alias_sequence_id = 13),
  [512] = {.count = 1, .reusable = true}, REDUCE(sym_keyframe_block_list, 2),
  [514] = {.count = 1, .reusable = false}, REDUCE(sym_keyframe_block_list, 2),
  [516] = {.count = 1, .reusable = true}, SHIFT(164),
  [518] = {.count = 1, .reusable = true}, SHIFT(166),
  [520] = {.count = 1, .reusable = false}, SHIFT(149),
  [522] = {.count = 1, .reusable = false}, SHIFT(41),
  [524] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_arguments, 2),
  [526] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_arguments, 2),
  [528] = {.count = 1, .reusable = true}, REDUCE(sym__selector, 1),
  [530] = {.count = 1, .reusable = true}, REDUCE(sym__value, 1),
  [532] = {.count = 1, .reusable = false}, REDUCE(sym__selector, 1),
  [534] = {.count = 1, .reusable = false}, REDUCE(sym__value, 1),
  [536] = {.count = 1, .reusable = true}, SHIFT(168),
  [538] = {.count = 1, .reusable = true}, SHIFT(169),
  [540] = {.count = 1, .reusable = true}, SHIFT(171),
  [542] = {.count = 1, .reusable = true}, SHIFT(172),
  [544] = {.count = 1, .reusable = false}, SHIFT(172),
  [546] = {.count = 1, .reusable = true}, REDUCE(sym_block, 3),
  [548] = {.count = 1, .reusable = false}, REDUCE(sym_block, 3),
  [550] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(2),
  [553] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(3),
  [556] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(4),
  [559] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(5),
  [562] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(6),
  [565] = {.count = 1, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2),
  [567] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(7),
  [570] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(18),
  [573] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(8),
  [576] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(9),
  [579] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(10),
  [582] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(11),
  [585] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(12),
  [588] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(13),
  [591] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(92),
  [594] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(15),
  [597] = {.count = 1, .reusable = true}, REDUCE(sym_at_rule, 4),
  [599] = {.count = 1, .reusable = false}, REDUCE(sym_at_rule, 4),
  [601] = {.count = 2, .reusable = true}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(94),
  [604] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_selector, 4, .alias_sequence_id = 10),
  [606] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_selector, 4, .alias_sequence_id = 10),
  [608] = {.count = 1, .reusable = true}, SHIFT(173),
  [610] = {.count = 1, .reusable = false}, SHIFT(173),
  [612] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_selector, 4, .alias_sequence_id = 14),
  [614] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_selector, 4, .alias_sequence_id = 14),
  [616] = {.count = 1, .reusable = true}, SHIFT(174),
  [618] = {.count = 1, .reusable = true}, SHIFT(176),
  [620] = {.count = 1, .reusable = false}, SHIFT(176),
  [622] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 3),
  [624] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 3),
  [626] = {.count = 1, .reusable = true}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2),
  [628] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(109),
  [631] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(114),
  [634] = {.count = 2, .reusable = false}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(111),
  [637] = {.count = 2, .reusable = false}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(112),
  [640] = {.count = 2, .reusable = false}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(113),
  [643] = {.count = 2, .reusable = false}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(114),
  [646] = {.count = 1, .reusable = true}, SHIFT(178),
  [648] = {.count = 1, .reusable = true}, REDUCE(sym_import_statement, 5),
  [650] = {.count = 1, .reusable = false}, REDUCE(sym_import_statement, 5),
  [652] = {.count = 2, .reusable = true}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(117),
  [655] = {.count = 1, .reusable = true}, SHIFT(180),
  [657] = {.count = 1, .reusable = true}, REDUCE(sym_selector_query, 4),
  [659] = {.count = 1, .reusable = true}, SHIFT(181),
  [661] = {.count = 1, .reusable = true}, REDUCE(sym_keyframe_block, 2),
  [663] = {.count = 1, .reusable = true}, REDUCE(sym_keyframe_block_list, 3),
  [665] = {.count = 1, .reusable = false}, REDUCE(sym_keyframe_block_list, 3),
  [667] = {.count = 1, .reusable = true}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2),
  [669] = {.count = 2, .reusable = true}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(131),
  [672] = {.count = 2, .reusable = true}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(30),
  [675] = {.count = 1, .reusable = true}, SHIFT(183),
  [677] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_arguments, 3),
  [679] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_arguments, 3),
  [681] = {.count = 1, .reusable = true}, SHIFT(185),
  [683] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_selector, 5, .alias_sequence_id = 9),
  [685] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_selector, 5, .alias_sequence_id = 9),
  [687] = {.count = 1, .reusable = true}, SHIFT(187),
  [689] = {.count = 1, .reusable = true}, SHIFT(188),
  [691] = {.count = 1, .reusable = true}, SHIFT(189),
  [693] = {.count = 1, .reusable = true}, SHIFT(190),
  [695] = {.count = 1, .reusable = false}, SHIFT(190),
  [697] = {.count = 1, .reusable = true}, SHIFT(192),
  [699] = {.count = 1, .reusable = true}, SHIFT(193),
  [701] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2),
  [703] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 4),
  [705] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 4),
  [707] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(155),
  [710] = {.count = 1, .reusable = true}, REDUCE(sym_feature_query, 5, .alias_sequence_id = 15),
  [712] = {.count = 1, .reusable = true}, SHIFT(195),
  [714] = {.count = 1, .reusable = true}, REDUCE(aux_sym_pseudo_class_arguments_repeat2, 2),
  [716] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_arguments, 4),
  [718] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_arguments, 4),
  [720] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pseudo_class_arguments_repeat2, 2), SHIFT_REPEAT(168),
  [723] = {.count = 1, .reusable = true}, SHIFT(196),
  [725] = {.count = 1, .reusable = false}, SHIFT(196),
  [727] = {.count = 1, .reusable = false}, REDUCE(sym_declaration, 4, .alias_sequence_id = 16),
  [729] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 4, .alias_sequence_id = 16),
  [731] = {.count = 1, .reusable = true}, SHIFT(197),
  [733] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 1),
  [735] = {.count = 1, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 1),
  [737] = {.count = 1, .reusable = true}, SHIFT(198),
  [739] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_selector, 6, .alias_sequence_id = 14),
  [741] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_selector, 6, .alias_sequence_id = 14),
  [743] = {.count = 1, .reusable = true}, SHIFT(200),
  [745] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2),
  [747] = {.count = 1, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2),
  [749] = {.count = 1, .reusable = false}, REDUCE(sym_declaration, 5, .alias_sequence_id = 16),
  [751] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 5, .alias_sequence_id = 16),
  [753] = {.count = 1, .reusable = true}, SHIFT(201),
  [755] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(187),
  [758] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(109),
  [761] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(190),
  [764] = {.count = 2, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(111),
  [767] = {.count = 2, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(112),
  [770] = {.count = 2, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(113),
  [773] = {.count = 2, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(190),
  [776] = {.count = 1, .reusable = false}, REDUCE(sym_declaration, 6, .alias_sequence_id = 16),
  [778] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 6, .alias_sequence_id = 16),
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
