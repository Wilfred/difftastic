#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 197
#define SYMBOL_COUNT 97
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
  sym_color_value = 39,
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
  sym_integer_value = 83,
  sym_float_value = 84,
  sym_call_expression = 85,
  sym_binary_expression = 86,
  sym_arguments = 87,
  aux_sym_stylesheet_repeat1 = 88,
  aux_sym_import_statement_repeat1 = 89,
  aux_sym_keyframe_block_list_repeat1 = 90,
  aux_sym_selectors_repeat1 = 91,
  aux_sym_block_repeat1 = 92,
  aux_sym_pseudo_class_arguments_repeat1 = 93,
  aux_sym_pseudo_class_arguments_repeat2 = 94,
  aux_sym_declaration_repeat1 = 95,
  aux_sym_arguments_repeat1 = 96,
  alias_sym_attribute_name = 97,
  alias_sym_class_name = 98,
  alias_sym_feature_name = 99,
  alias_sym_function_name = 100,
  alias_sym_id_name = 101,
  alias_sym_keyframes_name = 102,
  alias_sym_keyword_query = 103,
  alias_sym_namespace_name = 104,
  alias_sym_plain_value = 105,
  alias_sym_property_name = 106,
  alias_sym_tag_name = 107,
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
  [sym_color_value] = "color_value",
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
  [sym_color_value] = {
    .visible = true,
    .named = true,
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
        ADVANCE(25);
      if (lookahead == '&')
        ADVANCE(27);
      if (lookahead == '\'')
        ADVANCE(28);
      if (lookahead == '(')
        ADVANCE(31);
      if (lookahead == ')')
        ADVANCE(32);
      if (lookahead == '*')
        ADVANCE(33);
      if (lookahead == '+')
        ADVANCE(35);
      if (lookahead == ',')
        ADVANCE(42);
      if (lookahead == '-')
        ADVANCE(43);
      if (lookahead == '.')
        ADVANCE(44);
      if (lookahead == '/')
        ADVANCE(45);
      if (lookahead == ':')
        ADVANCE(50);
      if (lookahead == ';')
        ADVANCE(52);
      if (lookahead == '=')
        ADVANCE(53);
      if (lookahead == '>')
        ADVANCE(54);
      if (lookahead == '@')
        ADVANCE(55);
      if (lookahead == '[')
        ADVANCE(101);
      if (lookahead == ']')
        ADVANCE(102);
      if (lookahead == '^')
        ADVANCE(103);
      if (lookahead == 'a')
        ADVANCE(105);
      if (lookahead == 'f')
        ADVANCE(108);
      if (lookahead == 'n')
        ADVANCE(112);
      if (lookahead == 'o')
        ADVANCE(115);
      if (lookahead == 's')
        ADVANCE(117);
      if (lookahead == 't')
        ADVANCE(125);
      if (lookahead == '{')
        ADVANCE(127);
      if (lookahead == '|')
        ADVANCE(128);
      if (lookahead == '}')
        ADVANCE(130);
      if (lookahead == '~')
        ADVANCE(131);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(133);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(41);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(17);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(18);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_color_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_color_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_color_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_color_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_color_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_color_value);
      END_STATE();
    case 25:
      if (lookahead == '=')
        ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_DOLLAR_EQ);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_nesting_selector);
      END_STATE();
    case 28:
      if (lookahead == '\'')
        ADVANCE(13);
      if (lookahead == '\\')
        ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '\n')
        ADVANCE(28);
      if (lookahead == '\'')
        ADVANCE(30);
      if (lookahead == '\\')
        ADVANCE(29);
      if (lookahead != 0)
        ADVANCE(28);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == '\'')
        ADVANCE(13);
      if (lookahead == '\\')
        ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(28);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=')
        ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.')
        ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(41);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == '-')
        ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(40);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH);
      if (lookahead == '.')
        ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.')
        ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(41);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(37);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*')
        ADVANCE(46);
      if (lookahead == '/')
        ADVANCE(49);
      END_STATE();
    case 46:
      if (lookahead == '*')
        ADVANCE(47);
      if (lookahead != 0)
        ADVANCE(46);
      END_STATE();
    case 47:
      if (lookahead == '*')
        ADVANCE(47);
      if (lookahead == '/')
        ADVANCE(48);
      if (lookahead != 0)
        ADVANCE(46);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':')
        ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 55:
      if (lookahead == 'c')
        ADVANCE(56);
      if (lookahead == 'i')
        ADVANCE(64);
      if (lookahead == 'k')
        ADVANCE(70);
      if (lookahead == 'm')
        ADVANCE(79);
      if (lookahead == 'n')
        ADVANCE(84);
      if (lookahead == 's')
        ADVANCE(93);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'h')
        ADVANCE(57);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a')
        ADVANCE(58);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'r')
        ADVANCE(59);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 's')
        ADVANCE(60);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e')
        ADVANCE(61);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 't')
        ADVANCE(62);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_ATcharset);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'm')
        ADVANCE(65);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'p')
        ADVANCE(66);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'o')
        ADVANCE(67);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'r')
        ADVANCE(68);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 't')
        ADVANCE(69);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_ATimport);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e')
        ADVANCE(71);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'y')
        ADVANCE(72);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f')
        ADVANCE(73);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'r')
        ADVANCE(74);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a')
        ADVANCE(75);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'm')
        ADVANCE(76);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e')
        ADVANCE(77);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 's')
        ADVANCE(78);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_ATkeyframes);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e')
        ADVANCE(80);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd')
        ADVANCE(81);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i')
        ADVANCE(82);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a')
        ADVANCE(83);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_ATmedia);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a')
        ADVANCE(85);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'm')
        ADVANCE(86);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e')
        ADVANCE(87);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 's')
        ADVANCE(88);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'p')
        ADVANCE(89);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a')
        ADVANCE(90);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c')
        ADVANCE(91);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e')
        ADVANCE(92);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_ATnamespace);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'u')
        ADVANCE(94);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'p')
        ADVANCE(95);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'p')
        ADVANCE(96);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'o')
        ADVANCE(97);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'r')
        ADVANCE(98);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 't')
        ADVANCE(99);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 's')
        ADVANCE(100);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_ATsupports);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(63);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 103:
      if (lookahead == '=')
        ADVANCE(104);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 105:
      if (lookahead == 'n')
        ADVANCE(106);
      END_STATE();
    case 106:
      if (lookahead == 'd')
        ADVANCE(107);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 108:
      if (lookahead == 'r')
        ADVANCE(109);
      END_STATE();
    case 109:
      if (lookahead == 'o')
        ADVANCE(110);
      END_STATE();
    case 110:
      if (lookahead == 'm')
        ADVANCE(111);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_from);
      END_STATE();
    case 112:
      if (lookahead == 'o')
        ADVANCE(113);
      END_STATE();
    case 113:
      if (lookahead == 't')
        ADVANCE(114);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 115:
      if (lookahead == 'r')
        ADVANCE(116);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 117:
      if (lookahead == 'e')
        ADVANCE(118);
      END_STATE();
    case 118:
      if (lookahead == 'l')
        ADVANCE(119);
      END_STATE();
    case 119:
      if (lookahead == 'e')
        ADVANCE(120);
      END_STATE();
    case 120:
      if (lookahead == 'c')
        ADVANCE(121);
      END_STATE();
    case 121:
      if (lookahead == 't')
        ADVANCE(122);
      END_STATE();
    case 122:
      if (lookahead == 'o')
        ADVANCE(123);
      END_STATE();
    case 123:
      if (lookahead == 'r')
        ADVANCE(124);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_selector);
      END_STATE();
    case 125:
      if (lookahead == 'o')
        ADVANCE(126);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_to);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 128:
      if (lookahead == '=')
        ADVANCE(129);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '=')
        ADVANCE(132);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 133:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(16);
      if (lookahead == '$')
        ADVANCE(25);
      if (lookahead == '&')
        ADVANCE(27);
      if (lookahead == '\'')
        ADVANCE(28);
      if (lookahead == '(')
        ADVANCE(134);
      if (lookahead == ')')
        ADVANCE(32);
      if (lookahead == '*')
        ADVANCE(33);
      if (lookahead == '+')
        ADVANCE(35);
      if (lookahead == ',')
        ADVANCE(42);
      if (lookahead == '-')
        ADVANCE(43);
      if (lookahead == '.')
        ADVANCE(44);
      if (lookahead == '/')
        ADVANCE(45);
      if (lookahead == ':')
        ADVANCE(50);
      if (lookahead == ';')
        ADVANCE(52);
      if (lookahead == '=')
        ADVANCE(53);
      if (lookahead == '>')
        ADVANCE(54);
      if (lookahead == '@')
        ADVANCE(55);
      if (lookahead == '[')
        ADVANCE(101);
      if (lookahead == ']')
        ADVANCE(102);
      if (lookahead == '^')
        ADVANCE(103);
      if (lookahead == 'a')
        ADVANCE(105);
      if (lookahead == 'f')
        ADVANCE(108);
      if (lookahead == 'n')
        ADVANCE(112);
      if (lookahead == 'o')
        ADVANCE(115);
      if (lookahead == 's')
        ADVANCE(117);
      if (lookahead == 't')
        ADVANCE(125);
      if (lookahead == '{')
        ADVANCE(127);
      if (lookahead == '|')
        ADVANCE(128);
      if (lookahead == '}')
        ADVANCE(130);
      if (lookahead == '~')
        ADVANCE(131);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(133);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(41);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 135:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(136);
      if (lookahead == '&')
        ADVANCE(27);
      if (lookahead == '\'')
        ADVANCE(28);
      if (lookahead == '*')
        ADVANCE(137);
      if (lookahead == '.')
        ADVANCE(138);
      if (lookahead == '/')
        ADVANCE(139);
      if (lookahead == ':')
        ADVANCE(50);
      if (lookahead == '@')
        ADVANCE(55);
      if (lookahead == '[')
        ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(135);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(140);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 139:
      if (lookahead == '*')
        ADVANCE(46);
      if (lookahead == '/')
        ADVANCE(49);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(140);
      END_STATE();
    case 141:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(142);
      if (lookahead == '\'')
        ADVANCE(28);
      if (lookahead == '(')
        ADVANCE(31);
      if (lookahead == '+')
        ADVANCE(143);
      if (lookahead == ',')
        ADVANCE(42);
      if (lookahead == '-')
        ADVANCE(144);
      if (lookahead == '.')
        ADVANCE(36);
      if (lookahead == '/')
        ADVANCE(139);
      if (lookahead == ';')
        ADVANCE(52);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(156);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(154);
      END_STATE();
    case 142:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(17);
      END_STATE();
    case 143:
      if (lookahead == '.')
        ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(41);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.')
        ADVANCE(145);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(155);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(154);
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
        ADVANCE(150);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_plain_value);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(146);
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
        ADVANCE(150);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(146);
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
        ADVANCE(150);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '-')
        ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(149);
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
        ADVANCE(150);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_plain_value);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(149);
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
        ADVANCE(150);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(149);
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
        ADVANCE(150);
      END_STATE();
    case 150:
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
        ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-')
        ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(154);
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
        ADVANCE(150);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(153);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(154);
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
        ADVANCE(150);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(153);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(154);
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
        ADVANCE(150);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(154);
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
        ADVANCE(150);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH);
      if (lookahead == '.')
        ADVANCE(145);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(155);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(154);
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
        ADVANCE(150);
      END_STATE();
    case 156:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(142);
      if (lookahead == '\'')
        ADVANCE(28);
      if (lookahead == '+')
        ADVANCE(143);
      if (lookahead == ',')
        ADVANCE(42);
      if (lookahead == '-')
        ADVANCE(144);
      if (lookahead == '.')
        ADVANCE(36);
      if (lookahead == '/')
        ADVANCE(139);
      if (lookahead == ';')
        ADVANCE(52);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(156);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(154);
      END_STATE();
    case 157:
      if (lookahead == '(')
        ADVANCE(134);
      if (lookahead == '/')
        ADVANCE(139);
      if (lookahead == ';')
        ADVANCE(52);
      if (lookahead == 'n')
        ADVANCE(158);
      if (lookahead == 's')
        ADVANCE(161);
      if (lookahead == '{')
        ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(157);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(140);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(159);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(140);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(160);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(140);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(140);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(162);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(140);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(163);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(140);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(164);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(140);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(165);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(140);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(166);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(140);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(167);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(140);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(168);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(140);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(140);
      END_STATE();
    case 169:
      if (lookahead == '#')
        ADVANCE(136);
      if (lookahead == ')')
        ADVANCE(32);
      if (lookahead == '+')
        ADVANCE(170);
      if (lookahead == ',')
        ADVANCE(42);
      if (lookahead == '.')
        ADVANCE(138);
      if (lookahead == '/')
        ADVANCE(139);
      if (lookahead == ':')
        ADVANCE(50);
      if (lookahead == '>')
        ADVANCE(54);
      if (lookahead == '[')
        ADVANCE(101);
      if (lookahead == '{')
        ADVANCE(127);
      if (lookahead == '~')
        ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 172:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '/')
        ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(172);
      END_STATE();
    case 173:
      if (lookahead == '#')
        ADVANCE(136);
      if (lookahead == '+')
        ADVANCE(170);
      if (lookahead == ',')
        ADVANCE(42);
      if (lookahead == '.')
        ADVANCE(138);
      if (lookahead == '/')
        ADVANCE(139);
      if (lookahead == ':')
        ADVANCE(50);
      if (lookahead == '>')
        ADVANCE(54);
      if (lookahead == '[')
        ADVANCE(101);
      if (lookahead == '{')
        ADVANCE(127);
      if (lookahead == '~')
        ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(173);
      END_STATE();
    case 174:
      if (lookahead == '%')
        ADVANCE(175);
      if (lookahead == '(')
        ADVANCE(134);
      if (lookahead == '*')
        ADVANCE(137);
      if (lookahead == '+')
        ADVANCE(170);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == '/')
        ADVANCE(45);
      if (lookahead == ';')
        ADVANCE(52);
      if (lookahead == '_')
        ADVANCE(140);
      if (lookahead == 'n')
        ADVANCE(177);
      if (lookahead == 's')
        ADVANCE(181);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(189);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(140);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(175);
      if (lookahead == 'o')
        ADVANCE(178);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(175);
      if (lookahead == 't')
        ADVANCE(179);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '%')
        ADVANCE(175);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(175);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(175);
      if (lookahead == 'e')
        ADVANCE(182);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(175);
      if (lookahead == 'l')
        ADVANCE(183);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(175);
      if (lookahead == 'e')
        ADVANCE(184);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(175);
      if (lookahead == 'c')
        ADVANCE(185);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(175);
      if (lookahead == 't')
        ADVANCE(186);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(175);
      if (lookahead == 'o')
        ADVANCE(187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(175);
      if (lookahead == 'r')
        ADVANCE(188);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '%')
        ADVANCE(175);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(180);
      END_STATE();
    case 189:
      if (lookahead == '(')
        ADVANCE(134);
      if (lookahead == '*')
        ADVANCE(137);
      if (lookahead == '+')
        ADVANCE(170);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == '/')
        ADVANCE(45);
      if (lookahead == ';')
        ADVANCE(52);
      if (lookahead == 'n')
        ADVANCE(158);
      if (lookahead == 's')
        ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(189);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(140);
      END_STATE();
    case 190:
      if (lookahead == '(')
        ADVANCE(31);
      if (lookahead == ')')
        ADVANCE(32);
      if (lookahead == '*')
        ADVANCE(137);
      if (lookahead == '+')
        ADVANCE(170);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == '/')
        ADVANCE(45);
      if (lookahead == ';')
        ADVANCE(52);
      if (lookahead == ']')
        ADVANCE(102);
      if (lookahead == 'n')
        ADVANCE(158);
      if (lookahead == 's')
        ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(191);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(140);
      END_STATE();
    case 191:
      if (lookahead == '(')
        ADVANCE(134);
      if (lookahead == ')')
        ADVANCE(32);
      if (lookahead == '*')
        ADVANCE(137);
      if (lookahead == '+')
        ADVANCE(170);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == '/')
        ADVANCE(45);
      if (lookahead == ';')
        ADVANCE(52);
      if (lookahead == ']')
        ADVANCE(102);
      if (lookahead == 'n')
        ADVANCE(158);
      if (lookahead == 's')
        ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(191);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(140);
      END_STATE();
    case 192:
      if (lookahead == ')')
        ADVANCE(32);
      if (lookahead == ',')
        ADVANCE(42);
      if (lookahead == '/')
        ADVANCE(139);
      if (lookahead == ';')
        ADVANCE(52);
      if (lookahead == 'a')
        ADVANCE(105);
      if (lookahead == 'o')
        ADVANCE(115);
      if (lookahead == '{')
        ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(192);
      END_STATE();
    case 193:
      if (lookahead == ',')
        ADVANCE(42);
      if (lookahead == '/')
        ADVANCE(139);
      if (lookahead == ';')
        ADVANCE(52);
      if (lookahead == 'a')
        ADVANCE(105);
      if (lookahead == 'o')
        ADVANCE(115);
      if (lookahead == '{')
        ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(193);
      END_STATE();
    case 194:
      if (lookahead == ')')
        ADVANCE(32);
      if (lookahead == '*')
        ADVANCE(137);
      if (lookahead == '+')
        ADVANCE(170);
      if (lookahead == '-')
        ADVANCE(195);
      if (lookahead == '/')
        ADVANCE(45);
      if (lookahead == ';')
        ADVANCE(52);
      if (lookahead == ']')
        ADVANCE(102);
      if (lookahead == '{')
        ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(196);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(175);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 196:
      if (lookahead == ')')
        ADVANCE(32);
      if (lookahead == '*')
        ADVANCE(137);
      if (lookahead == '+')
        ADVANCE(170);
      if (lookahead == '-')
        ADVANCE(195);
      if (lookahead == '/')
        ADVANCE(45);
      if (lookahead == ';')
        ADVANCE(52);
      if (lookahead == ']')
        ADVANCE(102);
      if (lookahead == '{')
        ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(196);
      END_STATE();
    case 197:
      if (lookahead == ')')
        ADVANCE(32);
      if (lookahead == '*')
        ADVANCE(137);
      if (lookahead == '+')
        ADVANCE(170);
      if (lookahead == '-')
        ADVANCE(195);
      if (lookahead == '/')
        ADVANCE(45);
      if (lookahead == ';')
        ADVANCE(52);
      if (lookahead == ']')
        ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(198);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(175);
      END_STATE();
    case 198:
      if (lookahead == ')')
        ADVANCE(32);
      if (lookahead == '*')
        ADVANCE(137);
      if (lookahead == '+')
        ADVANCE(170);
      if (lookahead == '-')
        ADVANCE(195);
      if (lookahead == '/')
        ADVANCE(45);
      if (lookahead == ';')
        ADVANCE(52);
      if (lookahead == ']')
        ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(198);
      END_STATE();
    case 199:
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '\'')
        ADVANCE(28);
      if (lookahead == '(')
        ADVANCE(31);
      if (lookahead == ')')
        ADVANCE(32);
      if (lookahead == ',')
        ADVANCE(42);
      if (lookahead == '/')
        ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(200);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(140);
      END_STATE();
    case 200:
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '\'')
        ADVANCE(28);
      if (lookahead == ')')
        ADVANCE(32);
      if (lookahead == ',')
        ADVANCE(42);
      if (lookahead == '/')
        ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(200);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(140);
      END_STATE();
    case 201:
      if (lookahead == '#')
        ADVANCE(136);
      if (lookahead == '(')
        ADVANCE(31);
      if (lookahead == ')')
        ADVANCE(32);
      if (lookahead == '+')
        ADVANCE(170);
      if (lookahead == ',')
        ADVANCE(42);
      if (lookahead == '.')
        ADVANCE(138);
      if (lookahead == '/')
        ADVANCE(139);
      if (lookahead == ':')
        ADVANCE(50);
      if (lookahead == '>')
        ADVANCE(54);
      if (lookahead == '[')
        ADVANCE(101);
      if (lookahead == '{')
        ADVANCE(127);
      if (lookahead == '~')
        ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(169);
      END_STATE();
    case 202:
      if (lookahead == '$')
        ADVANCE(25);
      if (lookahead == '*')
        ADVANCE(203);
      if (lookahead == '/')
        ADVANCE(139);
      if (lookahead == '=')
        ADVANCE(53);
      if (lookahead == ']')
        ADVANCE(102);
      if (lookahead == '^')
        ADVANCE(103);
      if (lookahead == '|')
        ADVANCE(128);
      if (lookahead == '~')
        ADVANCE(204);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(202);
      END_STATE();
    case 203:
      if (lookahead == '=')
        ADVANCE(34);
      END_STATE();
    case 204:
      if (lookahead == '=')
        ADVANCE(132);
      END_STATE();
    case 205:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(136);
      if (lookahead == '&')
        ADVANCE(27);
      if (lookahead == '\'')
        ADVANCE(28);
      if (lookahead == '*')
        ADVANCE(137);
      if (lookahead == '.')
        ADVANCE(138);
      if (lookahead == '/')
        ADVANCE(139);
      if (lookahead == ':')
        ADVANCE(50);
      if (lookahead == '@')
        ADVANCE(55);
      if (lookahead == '[')
        ADVANCE(101);
      if (lookahead == '}')
        ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(205);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(140);
      END_STATE();
    case 206:
      if (lookahead == '(')
        ADVANCE(134);
      if (lookahead == ')')
        ADVANCE(32);
      if (lookahead == '*')
        ADVANCE(137);
      if (lookahead == '+')
        ADVANCE(170);
      if (lookahead == '-')
        ADVANCE(176);
      if (lookahead == '/')
        ADVANCE(45);
      if (lookahead == ';')
        ADVANCE(52);
      if (lookahead == ']')
        ADVANCE(102);
      if (lookahead == 'n')
        ADVANCE(158);
      if (lookahead == 's')
        ADVANCE(161);
      if (lookahead == '{')
        ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(206);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(140);
      END_STATE();
    case 207:
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(16);
      if (lookahead == '&')
        ADVANCE(27);
      if (lookahead == '\'')
        ADVANCE(28);
      if (lookahead == ')')
        ADVANCE(32);
      if (lookahead == '*')
        ADVANCE(137);
      if (lookahead == '+')
        ADVANCE(143);
      if (lookahead == '-')
        ADVANCE(144);
      if (lookahead == '.')
        ADVANCE(44);
      if (lookahead == '/')
        ADVANCE(139);
      if (lookahead == ':')
        ADVANCE(50);
      if (lookahead == '[')
        ADVANCE(101);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(207);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(154);
      END_STATE();
    case 208:
      if (lookahead == ')')
        ADVANCE(32);
      if (lookahead == '/')
        ADVANCE(139);
      if (lookahead == ':')
        ADVANCE(209);
      if (lookahead == 'a')
        ADVANCE(105);
      if (lookahead == 'o')
        ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 210:
      if (lookahead == '+')
        ADVANCE(211);
      if (lookahead == '-')
        ADVANCE(211);
      if (lookahead == '/')
        ADVANCE(139);
      if (lookahead == 'f')
        ADVANCE(108);
      if (lookahead == 't')
        ADVANCE(125);
      if (lookahead == '}')
        ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(210);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(212);
      END_STATE();
    case 211:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(212);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(212);
      END_STATE();
    case 213:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(142);
      if (lookahead == '%')
        ADVANCE(175);
      if (lookahead == '\'')
        ADVANCE(28);
      if (lookahead == ')')
        ADVANCE(32);
      if (lookahead == '*')
        ADVANCE(137);
      if (lookahead == '+')
        ADVANCE(35);
      if (lookahead == ',')
        ADVANCE(42);
      if (lookahead == '-')
        ADVANCE(214);
      if (lookahead == '.')
        ADVANCE(36);
      if (lookahead == '/')
        ADVANCE(45);
      if (lookahead == ';')
        ADVANCE(52);
      if (lookahead == '_')
        ADVANCE(154);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(215);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(218);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.')
        ADVANCE(145);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(155);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(154);
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
        ADVANCE(150);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(216);
      if (lookahead == '-')
        ADVANCE(152);
      if (lookahead == '_')
        ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
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
        ADVANCE(150);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
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
        ADVANCE(150);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(216);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(217);
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
        ADVANCE(150);
      END_STATE();
    case 218:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(142);
      if (lookahead == '\'')
        ADVANCE(28);
      if (lookahead == ')')
        ADVANCE(32);
      if (lookahead == '*')
        ADVANCE(137);
      if (lookahead == '+')
        ADVANCE(35);
      if (lookahead == ',')
        ADVANCE(42);
      if (lookahead == '-')
        ADVANCE(214);
      if (lookahead == '.')
        ADVANCE(36);
      if (lookahead == '/')
        ADVANCE(45);
      if (lookahead == ';')
        ADVANCE(52);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(218);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(154);
      END_STATE();
    case 219:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(142);
      if (lookahead == '\'')
        ADVANCE(28);
      if (lookahead == '(')
        ADVANCE(31);
      if (lookahead == ')')
        ADVANCE(32);
      if (lookahead == '*')
        ADVANCE(137);
      if (lookahead == '+')
        ADVANCE(35);
      if (lookahead == ',')
        ADVANCE(42);
      if (lookahead == '-')
        ADVANCE(214);
      if (lookahead == '.')
        ADVANCE(36);
      if (lookahead == '/')
        ADVANCE(45);
      if (lookahead == ';')
        ADVANCE(52);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(218);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(154);
      END_STATE();
    case 220:
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(16);
      if (lookahead == '\'')
        ADVANCE(28);
      if (lookahead == ')')
        ADVANCE(32);
      if (lookahead == '*')
        ADVANCE(137);
      if (lookahead == '+')
        ADVANCE(35);
      if (lookahead == ',')
        ADVANCE(42);
      if (lookahead == '-')
        ADVANCE(214);
      if (lookahead == '.')
        ADVANCE(44);
      if (lookahead == '/')
        ADVANCE(45);
      if (lookahead == ':')
        ADVANCE(50);
      if (lookahead == '>')
        ADVANCE(54);
      if (lookahead == '[')
        ADVANCE(101);
      if (lookahead == '~')
        ADVANCE(171);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(220);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(154);
      END_STATE();
    case 221:
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(142);
      if (lookahead == '\'')
        ADVANCE(28);
      if (lookahead == ')')
        ADVANCE(32);
      if (lookahead == '+')
        ADVANCE(143);
      if (lookahead == ',')
        ADVANCE(42);
      if (lookahead == '-')
        ADVANCE(144);
      if (lookahead == '.')
        ADVANCE(36);
      if (lookahead == '/')
        ADVANCE(139);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(221);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(154);
      END_STATE();
    case 222:
      if (lookahead == '#')
        ADVANCE(136);
      if (lookahead == ')')
        ADVANCE(32);
      if (lookahead == '+')
        ADVANCE(170);
      if (lookahead == '.')
        ADVANCE(138);
      if (lookahead == '/')
        ADVANCE(139);
      if (lookahead == ':')
        ADVANCE(50);
      if (lookahead == '>')
        ADVANCE(54);
      if (lookahead == '[')
        ADVANCE(101);
      if (lookahead == '~')
        ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(222);
      END_STATE();
    case 223:
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(16);
      if (lookahead == '\'')
        ADVANCE(28);
      if (lookahead == '(')
        ADVANCE(31);
      if (lookahead == ')')
        ADVANCE(32);
      if (lookahead == '*')
        ADVANCE(137);
      if (lookahead == '+')
        ADVANCE(35);
      if (lookahead == ',')
        ADVANCE(42);
      if (lookahead == '-')
        ADVANCE(214);
      if (lookahead == '.')
        ADVANCE(44);
      if (lookahead == '/')
        ADVANCE(45);
      if (lookahead == ':')
        ADVANCE(50);
      if (lookahead == '>')
        ADVANCE(54);
      if (lookahead == '[')
        ADVANCE(101);
      if (lookahead == '~')
        ADVANCE(171);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(220);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(154);
      END_STATE();
    case 224:
      if (lookahead == '#')
        ADVANCE(136);
      if (lookahead == ')')
        ADVANCE(32);
      if (lookahead == '+')
        ADVANCE(170);
      if (lookahead == ',')
        ADVANCE(42);
      if (lookahead == '.')
        ADVANCE(138);
      if (lookahead == '/')
        ADVANCE(139);
      if (lookahead == ':')
        ADVANCE(50);
      if (lookahead == '>')
        ADVANCE(54);
      if (lookahead == '[')
        ADVANCE(101);
      if (lookahead == '~')
        ADVANCE(171);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(224);
      END_STATE();
    case 225:
      if (lookahead == '*')
        ADVANCE(137);
      if (lookahead == '+')
        ADVANCE(170);
      if (lookahead == '-')
        ADVANCE(195);
      if (lookahead == '/')
        ADVANCE(45);
      if (lookahead == ']')
        ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(225);
      END_STATE();
    case 226:
      if (lookahead == ')')
        ADVANCE(32);
      if (lookahead == '*')
        ADVANCE(137);
      if (lookahead == '+')
        ADVANCE(170);
      if (lookahead == '-')
        ADVANCE(195);
      if (lookahead == '/')
        ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(226);
      END_STATE();
    case 227:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(142);
      if (lookahead == '\'')
        ADVANCE(28);
      if (lookahead == '*')
        ADVANCE(137);
      if (lookahead == '+')
        ADVANCE(35);
      if (lookahead == ',')
        ADVANCE(42);
      if (lookahead == '-')
        ADVANCE(214);
      if (lookahead == '.')
        ADVANCE(36);
      if (lookahead == '/')
        ADVANCE(45);
      if (lookahead == ';')
        ADVANCE(52);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(151);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(227);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(154);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 135},
  [2] = {.lex_state = 141},
  [3] = {.lex_state = 157},
  [4] = {.lex_state = 141},
  [5] = {.lex_state = 135},
  [6] = {.lex_state = 135},
  [7] = {.lex_state = 157},
  [8] = {.lex_state = 169, .external_lex_state = 1},
  [9] = {.lex_state = 135},
  [10] = {.lex_state = 135},
  [11] = {.lex_state = 135},
  [12] = {.lex_state = 135},
  [13] = {.lex_state = 135},
  [14] = {.lex_state = 169, .external_lex_state = 1},
  [15] = {.lex_state = 157},
  [16] = {.lex_state = 172},
  [17] = {.lex_state = 157},
  [18] = {.lex_state = 173, .external_lex_state = 1},
  [19] = {.lex_state = 135},
  [20] = {.lex_state = 174},
  [21] = {.lex_state = 174},
  [22] = {.lex_state = 190},
  [23] = {.lex_state = 189},
  [24] = {.lex_state = 157},
  [25] = {.lex_state = 157},
  [26] = {.lex_state = 157},
  [27] = {.lex_state = 192},
  [28] = {.lex_state = 193},
  [29] = {.lex_state = 194},
  [30] = {.lex_state = 197},
  [31] = {.lex_state = 174},
  [32] = {.lex_state = 141},
  [33] = {.lex_state = 199},
  [34] = {.lex_state = 157},
  [35] = {.lex_state = 157},
  [36] = {.lex_state = 193},
  [37] = {.lex_state = 169, .external_lex_state = 1},
  [38] = {.lex_state = 201, .external_lex_state = 1},
  [39] = {.lex_state = 169, .external_lex_state = 1},
  [40] = {.lex_state = 169, .external_lex_state = 1},
  [41] = {.lex_state = 202},
  [42] = {.lex_state = 205},
  [43] = {.lex_state = 205},
  [44] = {.lex_state = 157},
  [45] = {.lex_state = 193},
  [46] = {.lex_state = 205},
  [47] = {.lex_state = 135},
  [48] = {.lex_state = 135},
  [49] = {.lex_state = 135},
  [50] = {.lex_state = 135},
  [51] = {.lex_state = 135},
  [52] = {.lex_state = 135},
  [53] = {.lex_state = 135},
  [54] = {.lex_state = 135},
  [55] = {.lex_state = 135},
  [56] = {.lex_state = 135},
  [57] = {.lex_state = 173},
  [58] = {.lex_state = 135},
  [59] = {.lex_state = 206},
  [60] = {.lex_state = 191},
  [61] = {.lex_state = 207},
  [62] = {.lex_state = 191},
  [63] = {.lex_state = 205},
  [64] = {.lex_state = 141},
  [65] = {.lex_state = 157},
  [66] = {.lex_state = 193},
  [67] = {.lex_state = 157},
  [68] = {.lex_state = 208},
  [69] = {.lex_state = 208},
  [70] = {.lex_state = 192},
  [71] = {.lex_state = 135},
  [72] = {.lex_state = 157},
  [73] = {.lex_state = 157},
  [74] = {.lex_state = 205},
  [75] = {.lex_state = 173},
  [76] = {.lex_state = 205},
  [77] = {.lex_state = 141},
  [78] = {.lex_state = 205},
  [79] = {.lex_state = 141},
  [80] = {.lex_state = 141},
  [81] = {.lex_state = 210},
  [82] = {.lex_state = 205},
  [83] = {.lex_state = 157},
  [84] = {.lex_state = 205},
  [85] = {.lex_state = 207},
  [86] = {.lex_state = 169, .external_lex_state = 1},
  [87] = {.lex_state = 141},
  [88] = {.lex_state = 169, .external_lex_state = 1},
  [89] = {.lex_state = 205},
  [90] = {.lex_state = 173, .external_lex_state = 1},
  [91] = {.lex_state = 205},
  [92] = {.lex_state = 157},
  [93] = {.lex_state = 205},
  [94] = {.lex_state = 157},
  [95] = {.lex_state = 193},
  [96] = {.lex_state = 169, .external_lex_state = 1},
  [97] = {.lex_state = 173, .external_lex_state = 1},
  [98] = {.lex_state = 169, .external_lex_state = 1},
  [99] = {.lex_state = 201, .external_lex_state = 1},
  [100] = {.lex_state = 169, .external_lex_state = 1},
  [101] = {.lex_state = 169, .external_lex_state = 1},
  [102] = {.lex_state = 202},
  [103] = {.lex_state = 169, .external_lex_state = 1},
  [104] = {.lex_state = 169, .external_lex_state = 1},
  [105] = {.lex_state = 169, .external_lex_state = 1},
  [106] = {.lex_state = 173},
  [107] = {.lex_state = 191},
  [108] = {.lex_state = 213},
  [109] = {.lex_state = 213},
  [110] = {.lex_state = 219},
  [111] = {.lex_state = 220},
  [112] = {.lex_state = 221},
  [113] = {.lex_state = 191},
  [114] = {.lex_state = 157},
  [115] = {.lex_state = 205},
  [116] = {.lex_state = 157},
  [117] = {.lex_state = 141},
  [118] = {.lex_state = 141},
  [119] = {.lex_state = 192},
  [120] = {.lex_state = 157},
  [121] = {.lex_state = 222, .external_lex_state = 1},
  [122] = {.lex_state = 193},
  [123] = {.lex_state = 192},
  [124] = {.lex_state = 205},
  [125] = {.lex_state = 173},
  [126] = {.lex_state = 205},
  [127] = {.lex_state = 205},
  [128] = {.lex_state = 157},
  [129] = {.lex_state = 210},
  [130] = {.lex_state = 169, .external_lex_state = 1},
  [131] = {.lex_state = 220, .external_lex_state = 1},
  [132] = {.lex_state = 223, .external_lex_state = 1},
  [133] = {.lex_state = 224, .external_lex_state = 1},
  [134] = {.lex_state = 221},
  [135] = {.lex_state = 225},
  [136] = {.lex_state = 141},
  [137] = {.lex_state = 205},
  [138] = {.lex_state = 205},
  [139] = {.lex_state = 193},
  [140] = {.lex_state = 205},
  [141] = {.lex_state = 193},
  [142] = {.lex_state = 169, .external_lex_state = 1},
  [143] = {.lex_state = 141},
  [144] = {.lex_state = 169, .external_lex_state = 1},
  [145] = {.lex_state = 219},
  [146] = {.lex_state = 219},
  [147] = {.lex_state = 207},
  [148] = {.lex_state = 219},
  [149] = {.lex_state = 141},
  [150] = {.lex_state = 141},
  [151] = {.lex_state = 191},
  [152] = {.lex_state = 221},
  [153] = {.lex_state = 199},
  [154] = {.lex_state = 193},
  [155] = {.lex_state = 205},
  [156] = {.lex_state = 141},
  [157] = {.lex_state = 226},
  [158] = {.lex_state = 192},
  [159] = {.lex_state = 205},
  [160] = {.lex_state = 210},
  [161] = {.lex_state = 205},
  [162] = {.lex_state = 210},
  [163] = {.lex_state = 207},
  [164] = {.lex_state = 169, .external_lex_state = 1},
  [165] = {.lex_state = 199},
  [166] = {.lex_state = 169, .external_lex_state = 1},
  [167] = {.lex_state = 227},
  [168] = {.lex_state = 225},
  [169] = {.lex_state = 219},
  [170] = {.lex_state = 221},
  [171] = {.lex_state = 219},
  [172] = {.lex_state = 221},
  [173] = {.lex_state = 191},
  [174] = {.lex_state = 199},
  [175] = {.lex_state = 192},
  [176] = {.lex_state = 210},
  [177] = {.lex_state = 205},
  [178] = {.lex_state = 224, .external_lex_state = 1},
  [179] = {.lex_state = 221},
  [180] = {.lex_state = 169, .external_lex_state = 1},
  [181] = {.lex_state = 199},
  [182] = {.lex_state = 141},
  [183] = {.lex_state = 205},
  [184] = {.lex_state = 141},
  [185] = {.lex_state = 227},
  [186] = {.lex_state = 141},
  [187] = {.lex_state = 169, .external_lex_state = 1},
  [188] = {.lex_state = 219},
  [189] = {.lex_state = 199},
  [190] = {.lex_state = 210},
  [191] = {.lex_state = 227},
  [192] = {.lex_state = 205},
  [193] = {.lex_state = 141},
  [194] = {.lex_state = 141},
  [195] = {.lex_state = 219},
  [196] = {.lex_state = 205},
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
    [anon_sym_POUND] = ACTIONS(3),
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
    [sym_color_value] = ACTIONS(1),
    [sym_string_value] = ACTIONS(1),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(1),
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
    [sym__value] = STATE(23),
    [sym_integer_value] = STATE(23),
    [sym_float_value] = STATE(23),
    [sym_call_expression] = STATE(23),
    [sym_binary_expression] = STATE(23),
    [sym_color_value] = ACTIONS(39),
    [sym_string_value] = ACTIONS(39),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(41),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(43),
    [sym_identifier] = ACTIONS(45),
    [sym_plain_value] = ACTIONS(47),
    [sym_comment] = ACTIONS(37),
  },
  [3] = {
    [sym__query] = STATE(28),
    [sym_feature_query] = STATE(28),
    [sym_parenthesized_query] = STATE(28),
    [sym_binary_query] = STATE(28),
    [sym_negated_query] = STATE(28),
    [sym_selector_query] = STATE(28),
    [anon_sym_LPAREN2] = ACTIONS(49),
    [anon_sym_not] = ACTIONS(51),
    [anon_sym_selector] = ACTIONS(53),
    [sym_identifier] = ACTIONS(55),
    [sym_comment] = ACTIONS(37),
  },
  [4] = {
    [sym__value] = STATE(31),
    [sym_integer_value] = STATE(31),
    [sym_float_value] = STATE(31),
    [sym_call_expression] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_color_value] = ACTIONS(57),
    [sym_string_value] = ACTIONS(57),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(59),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(61),
    [sym_identifier] = ACTIONS(45),
    [sym_plain_value] = ACTIONS(63),
    [sym_comment] = ACTIONS(37),
  },
  [5] = {
    [sym_call_expression] = STATE(32),
    [sym_string_value] = ACTIONS(65),
    [sym_identifier] = ACTIONS(67),
    [sym_comment] = ACTIONS(37),
  },
  [6] = {
    [sym_identifier] = ACTIONS(69),
    [sym_comment] = ACTIONS(37),
  },
  [7] = {
    [sym__query] = STATE(36),
    [sym_feature_query] = STATE(36),
    [sym_parenthesized_query] = STATE(36),
    [sym_binary_query] = STATE(36),
    [sym_negated_query] = STATE(36),
    [sym_selector_query] = STATE(36),
    [anon_sym_LPAREN2] = ACTIONS(49),
    [anon_sym_not] = ACTIONS(71),
    [anon_sym_selector] = ACTIONS(53),
    [sym_identifier] = ACTIONS(55),
    [sym_comment] = ACTIONS(37),
  },
  [8] = {
    [sym__descendant_operator] = ACTIONS(73),
    [anon_sym_COMMA] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_DOT] = ACTIONS(73),
    [anon_sym_COLON] = ACTIONS(75),
    [anon_sym_COLON_COLON] = ACTIONS(73),
    [anon_sym_POUND] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(73),
    [anon_sym_GT] = ACTIONS(73),
    [anon_sym_TILDE] = ACTIONS(73),
    [anon_sym_PLUS] = ACTIONS(73),
    [anon_sym_RPAREN] = ACTIONS(73),
    [sym_comment] = ACTIONS(37),
  },
  [9] = {
    [sym_identifier] = ACTIONS(77),
    [sym_comment] = ACTIONS(37),
  },
  [10] = {
    [sym_identifier] = ACTIONS(79),
    [sym_comment] = ACTIONS(37),
  },
  [11] = {
    [sym_identifier] = ACTIONS(81),
    [sym_comment] = ACTIONS(37),
  },
  [12] = {
    [sym_identifier] = ACTIONS(83),
    [sym_comment] = ACTIONS(37),
  },
  [13] = {
    [sym_identifier] = ACTIONS(85),
    [sym_comment] = ACTIONS(37),
  },
  [14] = {
    [sym__descendant_operator] = ACTIONS(87),
    [anon_sym_COMMA] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(87),
    [anon_sym_DOT] = ACTIONS(87),
    [anon_sym_COLON] = ACTIONS(89),
    [anon_sym_COLON_COLON] = ACTIONS(87),
    [anon_sym_POUND] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_GT] = ACTIONS(87),
    [anon_sym_TILDE] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(87),
    [anon_sym_RPAREN] = ACTIONS(87),
    [sym_comment] = ACTIONS(37),
  },
  [15] = {
    [sym_block] = STATE(42),
    [sym__query] = STATE(45),
    [sym_feature_query] = STATE(45),
    [sym_parenthesized_query] = STATE(45),
    [sym_binary_query] = STATE(45),
    [sym_negated_query] = STATE(45),
    [sym_selector_query] = STATE(45),
    [anon_sym_SEMI] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(93),
    [anon_sym_LPAREN2] = ACTIONS(49),
    [anon_sym_not] = ACTIONS(95),
    [anon_sym_selector] = ACTIONS(53),
    [sym_identifier] = ACTIONS(55),
    [sym_comment] = ACTIONS(37),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(97),
    [sym_comment] = ACTIONS(37),
  },
  [17] = {
    [sym_block] = STATE(46),
    [anon_sym_LBRACE] = ACTIONS(93),
    [sym_comment] = ACTIONS(37),
  },
  [18] = {
    [aux_sym_selectors_repeat1] = STATE(57),
    [sym__descendant_operator] = ACTIONS(99),
    [anon_sym_COMMA] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(103),
    [anon_sym_DOT] = ACTIONS(105),
    [anon_sym_COLON] = ACTIONS(107),
    [anon_sym_COLON_COLON] = ACTIONS(109),
    [anon_sym_POUND] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(113),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_TILDE] = ACTIONS(117),
    [anon_sym_PLUS] = ACTIONS(119),
    [sym_comment] = ACTIONS(37),
  },
  [19] = {
    [sym_import_statement] = STATE(58),
    [sym_media_statement] = STATE(58),
    [sym_charset_statement] = STATE(58),
    [sym_namespace_statement] = STATE(58),
    [sym_keyframes_statement] = STATE(58),
    [sym_supports_statement] = STATE(58),
    [sym_at_rule] = STATE(58),
    [sym_rule_set] = STATE(58),
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
    [aux_sym_stylesheet_repeat1] = STATE(58),
    [ts_builtin_sym_end] = ACTIONS(121),
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
    [anon_sym_SEMI] = ACTIONS(123),
    [anon_sym_STAR] = ACTIONS(123),
    [anon_sym_PLUS] = ACTIONS(123),
    [anon_sym_LPAREN2] = ACTIONS(123),
    [anon_sym_not] = ACTIONS(125),
    [anon_sym_selector] = ACTIONS(125),
    [sym_unit] = ACTIONS(127),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_SLASH] = ACTIONS(125),
    [sym_identifier] = ACTIONS(125),
    [sym_comment] = ACTIONS(37),
  },
  [21] = {
    [anon_sym_SEMI] = ACTIONS(129),
    [anon_sym_STAR] = ACTIONS(129),
    [anon_sym_PLUS] = ACTIONS(129),
    [anon_sym_LPAREN2] = ACTIONS(129),
    [anon_sym_not] = ACTIONS(131),
    [anon_sym_selector] = ACTIONS(131),
    [sym_unit] = ACTIONS(133),
    [anon_sym_DASH] = ACTIONS(131),
    [anon_sym_SLASH] = ACTIONS(131),
    [sym_identifier] = ACTIONS(131),
    [sym_comment] = ACTIONS(37),
  },
  [22] = {
    [sym_arguments] = STATE(62),
    [anon_sym_SEMI] = ACTIONS(135),
    [anon_sym_STAR] = ACTIONS(135),
    [anon_sym_RBRACK] = ACTIONS(135),
    [anon_sym_PLUS] = ACTIONS(135),
    [anon_sym_LPAREN] = ACTIONS(137),
    [anon_sym_RPAREN] = ACTIONS(135),
    [anon_sym_LPAREN2] = ACTIONS(139),
    [anon_sym_not] = ACTIONS(139),
    [anon_sym_selector] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(139),
    [anon_sym_SLASH] = ACTIONS(139),
    [sym_identifier] = ACTIONS(139),
    [sym_comment] = ACTIONS(37),
  },
  [23] = {
    [sym__query] = STATE(66),
    [sym_feature_query] = STATE(66),
    [sym_parenthesized_query] = STATE(66),
    [sym_binary_query] = STATE(66),
    [sym_negated_query] = STATE(66),
    [sym_selector_query] = STATE(66),
    [anon_sym_SEMI] = ACTIONS(141),
    [anon_sym_STAR] = ACTIONS(143),
    [anon_sym_PLUS] = ACTIONS(143),
    [anon_sym_LPAREN2] = ACTIONS(49),
    [anon_sym_not] = ACTIONS(145),
    [anon_sym_selector] = ACTIONS(53),
    [anon_sym_DASH] = ACTIONS(147),
    [anon_sym_SLASH] = ACTIONS(147),
    [sym_identifier] = ACTIONS(55),
    [sym_comment] = ACTIONS(37),
  },
  [24] = {
    [sym__query] = STATE(69),
    [sym_feature_query] = STATE(69),
    [sym_parenthesized_query] = STATE(69),
    [sym_binary_query] = STATE(69),
    [sym_negated_query] = STATE(69),
    [sym_selector_query] = STATE(69),
    [anon_sym_LPAREN2] = ACTIONS(49),
    [anon_sym_not] = ACTIONS(149),
    [anon_sym_selector] = ACTIONS(53),
    [sym_identifier] = ACTIONS(151),
    [sym_comment] = ACTIONS(37),
  },
  [25] = {
    [sym__query] = STATE(70),
    [sym_feature_query] = STATE(70),
    [sym_parenthesized_query] = STATE(70),
    [sym_binary_query] = STATE(70),
    [sym_negated_query] = STATE(70),
    [sym_selector_query] = STATE(70),
    [anon_sym_LPAREN2] = ACTIONS(49),
    [anon_sym_not] = ACTIONS(51),
    [anon_sym_selector] = ACTIONS(53),
    [sym_identifier] = ACTIONS(55),
    [sym_comment] = ACTIONS(37),
  },
  [26] = {
    [anon_sym_LPAREN2] = ACTIONS(153),
    [sym_comment] = ACTIONS(37),
  },
  [27] = {
    [anon_sym_COMMA] = ACTIONS(155),
    [anon_sym_SEMI] = ACTIONS(155),
    [anon_sym_LBRACE] = ACTIONS(155),
    [anon_sym_RPAREN] = ACTIONS(155),
    [anon_sym_and] = ACTIONS(155),
    [anon_sym_or] = ACTIONS(155),
    [sym_comment] = ACTIONS(37),
  },
  [28] = {
    [sym_block] = STATE(74),
    [aux_sym_import_statement_repeat1] = STATE(75),
    [anon_sym_COMMA] = ACTIONS(157),
    [anon_sym_LBRACE] = ACTIONS(93),
    [anon_sym_and] = ACTIONS(159),
    [anon_sym_or] = ACTIONS(159),
    [sym_comment] = ACTIONS(37),
  },
  [29] = {
    [anon_sym_SEMI] = ACTIONS(123),
    [anon_sym_LBRACE] = ACTIONS(123),
    [anon_sym_STAR] = ACTIONS(123),
    [anon_sym_RBRACK] = ACTIONS(123),
    [anon_sym_PLUS] = ACTIONS(123),
    [anon_sym_RPAREN] = ACTIONS(123),
    [sym_unit] = ACTIONS(161),
    [anon_sym_DASH] = ACTIONS(123),
    [anon_sym_SLASH] = ACTIONS(125),
    [sym_comment] = ACTIONS(37),
  },
  [30] = {
    [anon_sym_SEMI] = ACTIONS(129),
    [anon_sym_STAR] = ACTIONS(129),
    [anon_sym_RBRACK] = ACTIONS(129),
    [anon_sym_PLUS] = ACTIONS(129),
    [anon_sym_RPAREN] = ACTIONS(129),
    [sym_unit] = ACTIONS(163),
    [anon_sym_DASH] = ACTIONS(129),
    [anon_sym_SLASH] = ACTIONS(131),
    [sym_comment] = ACTIONS(37),
  },
  [31] = {
    [anon_sym_SEMI] = ACTIONS(165),
    [anon_sym_STAR] = ACTIONS(167),
    [anon_sym_PLUS] = ACTIONS(167),
    [anon_sym_DASH] = ACTIONS(167),
    [anon_sym_SLASH] = ACTIONS(169),
    [sym_comment] = ACTIONS(37),
  },
  [32] = {
    [anon_sym_SEMI] = ACTIONS(171),
    [sym_comment] = ACTIONS(37),
  },
  [33] = {
    [sym_call_expression] = STATE(79),
    [sym_arguments] = STATE(62),
    [anon_sym_LPAREN] = ACTIONS(137),
    [sym_string_value] = ACTIONS(173),
    [sym_identifier] = ACTIONS(175),
    [sym_comment] = ACTIONS(37),
  },
  [34] = {
    [sym_keyframe_block_list] = STATE(82),
    [anon_sym_LBRACE] = ACTIONS(177),
    [sym_comment] = ACTIONS(37),
  },
  [35] = {
    [sym__query] = STATE(70),
    [sym_feature_query] = STATE(70),
    [sym_parenthesized_query] = STATE(70),
    [sym_binary_query] = STATE(70),
    [sym_negated_query] = STATE(70),
    [sym_selector_query] = STATE(70),
    [anon_sym_LPAREN2] = ACTIONS(49),
    [anon_sym_not] = ACTIONS(71),
    [anon_sym_selector] = ACTIONS(53),
    [sym_identifier] = ACTIONS(55),
    [sym_comment] = ACTIONS(37),
  },
  [36] = {
    [sym_block] = STATE(84),
    [anon_sym_LBRACE] = ACTIONS(93),
    [anon_sym_and] = ACTIONS(179),
    [anon_sym_or] = ACTIONS(179),
    [sym_comment] = ACTIONS(37),
  },
  [37] = {
    [sym__descendant_operator] = ACTIONS(181),
    [anon_sym_COMMA] = ACTIONS(181),
    [anon_sym_LBRACE] = ACTIONS(181),
    [anon_sym_DOT] = ACTIONS(181),
    [anon_sym_COLON] = ACTIONS(183),
    [anon_sym_COLON_COLON] = ACTIONS(181),
    [anon_sym_POUND] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(181),
    [anon_sym_GT] = ACTIONS(181),
    [anon_sym_TILDE] = ACTIONS(181),
    [anon_sym_PLUS] = ACTIONS(181),
    [anon_sym_RPAREN] = ACTIONS(181),
    [sym_comment] = ACTIONS(37),
  },
  [38] = {
    [sym_pseudo_class_arguments] = STATE(86),
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
    [anon_sym_LPAREN] = ACTIONS(189),
    [anon_sym_RPAREN] = ACTIONS(185),
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
    [anon_sym_EQ] = ACTIONS(199),
    [anon_sym_TILDE_EQ] = ACTIONS(199),
    [anon_sym_CARET_EQ] = ACTIONS(199),
    [anon_sym_PIPE_EQ] = ACTIONS(199),
    [anon_sym_STAR_EQ] = ACTIONS(199),
    [anon_sym_DOLLAR_EQ] = ACTIONS(199),
    [anon_sym_RBRACK] = ACTIONS(201),
    [sym_comment] = ACTIONS(37),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(203),
    [anon_sym_ATimport] = ACTIONS(205),
    [anon_sym_ATmedia] = ACTIONS(205),
    [anon_sym_ATcharset] = ACTIONS(205),
    [anon_sym_ATnamespace] = ACTIONS(205),
    [anon_sym_ATkeyframes] = ACTIONS(205),
    [anon_sym_RBRACE] = ACTIONS(203),
    [anon_sym_ATsupports] = ACTIONS(205),
    [sym_nesting_selector] = ACTIONS(203),
    [anon_sym_STAR] = ACTIONS(203),
    [anon_sym_DOT] = ACTIONS(203),
    [anon_sym_COLON] = ACTIONS(205),
    [anon_sym_COLON_COLON] = ACTIONS(203),
    [anon_sym_POUND] = ACTIONS(203),
    [anon_sym_LBRACK] = ACTIONS(203),
    [sym_string_value] = ACTIONS(203),
    [sym_identifier] = ACTIONS(203),
    [sym_at_keyword] = ACTIONS(205),
    [sym_comment] = ACTIONS(37),
  },
  [43] = {
    [sym_import_statement] = STATE(91),
    [sym_media_statement] = STATE(91),
    [sym_charset_statement] = STATE(91),
    [sym_namespace_statement] = STATE(91),
    [sym_keyframes_statement] = STATE(91),
    [sym_supports_statement] = STATE(91),
    [sym_at_rule] = STATE(91),
    [sym_rule_set] = STATE(91),
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
    [sym_declaration] = STATE(91),
    [aux_sym_block_repeat1] = STATE(91),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATmedia] = ACTIONS(9),
    [anon_sym_ATcharset] = ACTIONS(11),
    [anon_sym_ATnamespace] = ACTIONS(13),
    [anon_sym_ATkeyframes] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(207),
    [anon_sym_ATsupports] = ACTIONS(17),
    [sym_nesting_selector] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_string_value] = ACTIONS(19),
    [sym_identifier] = ACTIONS(209),
    [sym_at_keyword] = ACTIONS(35),
    [sym_comment] = ACTIONS(37),
  },
  [44] = {
    [sym__query] = STATE(70),
    [sym_feature_query] = STATE(70),
    [sym_parenthesized_query] = STATE(70),
    [sym_binary_query] = STATE(70),
    [sym_negated_query] = STATE(70),
    [sym_selector_query] = STATE(70),
    [anon_sym_LPAREN2] = ACTIONS(49),
    [anon_sym_not] = ACTIONS(95),
    [anon_sym_selector] = ACTIONS(53),
    [sym_identifier] = ACTIONS(55),
    [sym_comment] = ACTIONS(37),
  },
  [45] = {
    [sym_block] = STATE(93),
    [aux_sym_import_statement_repeat1] = STATE(95),
    [anon_sym_COMMA] = ACTIONS(211),
    [anon_sym_SEMI] = ACTIONS(213),
    [anon_sym_LBRACE] = ACTIONS(93),
    [anon_sym_and] = ACTIONS(215),
    [anon_sym_or] = ACTIONS(215),
    [sym_comment] = ACTIONS(37),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(217),
    [anon_sym_ATimport] = ACTIONS(219),
    [anon_sym_ATmedia] = ACTIONS(219),
    [anon_sym_ATcharset] = ACTIONS(219),
    [anon_sym_ATnamespace] = ACTIONS(219),
    [anon_sym_ATkeyframes] = ACTIONS(219),
    [anon_sym_RBRACE] = ACTIONS(217),
    [anon_sym_ATsupports] = ACTIONS(219),
    [sym_nesting_selector] = ACTIONS(217),
    [anon_sym_STAR] = ACTIONS(217),
    [anon_sym_DOT] = ACTIONS(217),
    [anon_sym_COLON] = ACTIONS(219),
    [anon_sym_COLON_COLON] = ACTIONS(217),
    [anon_sym_POUND] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(217),
    [sym_string_value] = ACTIONS(217),
    [sym_identifier] = ACTIONS(217),
    [sym_at_keyword] = ACTIONS(219),
    [sym_comment] = ACTIONS(37),
  },
  [47] = {
    [sym__selector] = STATE(96),
    [sym_universal_selector] = STATE(96),
    [sym_class_selector] = STATE(96),
    [sym_pseudo_class_selector] = STATE(96),
    [sym_pseudo_element_selector] = STATE(96),
    [sym_id_selector] = STATE(96),
    [sym_attribute_selector] = STATE(96),
    [sym_child_selector] = STATE(96),
    [sym_descendant_selector] = STATE(96),
    [sym_sibling_selector] = STATE(96),
    [sym_adjacent_sibling_selector] = STATE(96),
    [sym_nesting_selector] = ACTIONS(221),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_string_value] = ACTIONS(221),
    [sym_identifier] = ACTIONS(33),
    [sym_comment] = ACTIONS(37),
  },
  [48] = {
    [sym__selector] = STATE(97),
    [sym_universal_selector] = STATE(97),
    [sym_class_selector] = STATE(97),
    [sym_pseudo_class_selector] = STATE(97),
    [sym_pseudo_element_selector] = STATE(97),
    [sym_id_selector] = STATE(97),
    [sym_attribute_selector] = STATE(97),
    [sym_child_selector] = STATE(97),
    [sym_descendant_selector] = STATE(97),
    [sym_sibling_selector] = STATE(97),
    [sym_adjacent_sibling_selector] = STATE(97),
    [sym_nesting_selector] = ACTIONS(223),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_string_value] = ACTIONS(223),
    [sym_identifier] = ACTIONS(33),
    [sym_comment] = ACTIONS(37),
  },
  [49] = {
    [sym_identifier] = ACTIONS(225),
    [sym_comment] = ACTIONS(37),
  },
  [50] = {
    [sym_identifier] = ACTIONS(227),
    [sym_comment] = ACTIONS(37),
  },
  [51] = {
    [sym_identifier] = ACTIONS(229),
    [sym_comment] = ACTIONS(37),
  },
  [52] = {
    [sym_identifier] = ACTIONS(231),
    [sym_comment] = ACTIONS(37),
  },
  [53] = {
    [sym_identifier] = ACTIONS(233),
    [sym_comment] = ACTIONS(37),
  },
  [54] = {
    [sym__selector] = STATE(103),
    [sym_universal_selector] = STATE(103),
    [sym_class_selector] = STATE(103),
    [sym_pseudo_class_selector] = STATE(103),
    [sym_pseudo_element_selector] = STATE(103),
    [sym_id_selector] = STATE(103),
    [sym_attribute_selector] = STATE(103),
    [sym_child_selector] = STATE(103),
    [sym_descendant_selector] = STATE(103),
    [sym_sibling_selector] = STATE(103),
    [sym_adjacent_sibling_selector] = STATE(103),
    [sym_nesting_selector] = ACTIONS(235),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_string_value] = ACTIONS(235),
    [sym_identifier] = ACTIONS(33),
    [sym_comment] = ACTIONS(37),
  },
  [55] = {
    [sym__selector] = STATE(104),
    [sym_universal_selector] = STATE(104),
    [sym_class_selector] = STATE(104),
    [sym_pseudo_class_selector] = STATE(104),
    [sym_pseudo_element_selector] = STATE(104),
    [sym_id_selector] = STATE(104),
    [sym_attribute_selector] = STATE(104),
    [sym_child_selector] = STATE(104),
    [sym_descendant_selector] = STATE(104),
    [sym_sibling_selector] = STATE(104),
    [sym_adjacent_sibling_selector] = STATE(104),
    [sym_nesting_selector] = ACTIONS(237),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_string_value] = ACTIONS(237),
    [sym_identifier] = ACTIONS(33),
    [sym_comment] = ACTIONS(37),
  },
  [56] = {
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
  [57] = {
    [aux_sym_selectors_repeat1] = STATE(106),
    [anon_sym_COMMA] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(241),
    [sym_comment] = ACTIONS(37),
  },
  [58] = {
    [sym_import_statement] = STATE(58),
    [sym_media_statement] = STATE(58),
    [sym_charset_statement] = STATE(58),
    [sym_namespace_statement] = STATE(58),
    [sym_keyframes_statement] = STATE(58),
    [sym_supports_statement] = STATE(58),
    [sym_at_rule] = STATE(58),
    [sym_rule_set] = STATE(58),
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
    [aux_sym_stylesheet_repeat1] = STATE(58),
    [ts_builtin_sym_end] = ACTIONS(243),
    [anon_sym_ATimport] = ACTIONS(245),
    [anon_sym_ATmedia] = ACTIONS(248),
    [anon_sym_ATcharset] = ACTIONS(251),
    [anon_sym_ATnamespace] = ACTIONS(254),
    [anon_sym_ATkeyframes] = ACTIONS(257),
    [anon_sym_ATsupports] = ACTIONS(260),
    [sym_nesting_selector] = ACTIONS(263),
    [anon_sym_STAR] = ACTIONS(266),
    [anon_sym_DOT] = ACTIONS(269),
    [anon_sym_COLON] = ACTIONS(272),
    [anon_sym_COLON_COLON] = ACTIONS(275),
    [anon_sym_POUND] = ACTIONS(278),
    [anon_sym_LBRACK] = ACTIONS(281),
    [sym_string_value] = ACTIONS(263),
    [sym_identifier] = ACTIONS(284),
    [sym_at_keyword] = ACTIONS(287),
    [sym_comment] = ACTIONS(37),
  },
  [59] = {
    [anon_sym_SEMI] = ACTIONS(290),
    [anon_sym_LBRACE] = ACTIONS(290),
    [anon_sym_STAR] = ACTIONS(290),
    [anon_sym_RBRACK] = ACTIONS(290),
    [anon_sym_PLUS] = ACTIONS(290),
    [anon_sym_RPAREN] = ACTIONS(290),
    [anon_sym_LPAREN2] = ACTIONS(290),
    [anon_sym_not] = ACTIONS(292),
    [anon_sym_selector] = ACTIONS(292),
    [anon_sym_DASH] = ACTIONS(292),
    [anon_sym_SLASH] = ACTIONS(292),
    [sym_identifier] = ACTIONS(292),
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
    [sym__value] = STATE(111),
    [sym_integer_value] = STATE(111),
    [sym_float_value] = STATE(111),
    [sym_call_expression] = STATE(111),
    [sym_binary_expression] = STATE(111),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(112),
    [anon_sym_RPAREN] = ACTIONS(298),
    [sym_color_value] = ACTIONS(300),
    [sym_string_value] = ACTIONS(300),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(302),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(304),
    [sym_identifier] = ACTIONS(306),
    [sym_plain_value] = ACTIONS(308),
    [sym_comment] = ACTIONS(37),
  },
  [62] = {
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
  [63] = {
    [ts_builtin_sym_end] = ACTIONS(314),
    [anon_sym_ATimport] = ACTIONS(316),
    [anon_sym_ATmedia] = ACTIONS(316),
    [anon_sym_ATcharset] = ACTIONS(316),
    [anon_sym_ATnamespace] = ACTIONS(316),
    [anon_sym_ATkeyframes] = ACTIONS(316),
    [anon_sym_RBRACE] = ACTIONS(314),
    [anon_sym_ATsupports] = ACTIONS(316),
    [sym_nesting_selector] = ACTIONS(314),
    [anon_sym_STAR] = ACTIONS(314),
    [anon_sym_DOT] = ACTIONS(314),
    [anon_sym_COLON] = ACTIONS(316),
    [anon_sym_COLON_COLON] = ACTIONS(314),
    [anon_sym_POUND] = ACTIONS(314),
    [anon_sym_LBRACK] = ACTIONS(314),
    [sym_string_value] = ACTIONS(314),
    [sym_identifier] = ACTIONS(314),
    [sym_at_keyword] = ACTIONS(316),
    [sym_comment] = ACTIONS(37),
  },
  [64] = {
    [sym__value] = STATE(113),
    [sym_integer_value] = STATE(113),
    [sym_float_value] = STATE(113),
    [sym_call_expression] = STATE(113),
    [sym_binary_expression] = STATE(113),
    [sym_color_value] = ACTIONS(318),
    [sym_string_value] = ACTIONS(318),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(41),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(43),
    [sym_identifier] = ACTIONS(45),
    [sym_plain_value] = ACTIONS(320),
    [sym_comment] = ACTIONS(37),
  },
  [65] = {
    [sym__query] = STATE(70),
    [sym_feature_query] = STATE(70),
    [sym_parenthesized_query] = STATE(70),
    [sym_binary_query] = STATE(70),
    [sym_negated_query] = STATE(70),
    [sym_selector_query] = STATE(70),
    [anon_sym_LPAREN2] = ACTIONS(49),
    [anon_sym_not] = ACTIONS(145),
    [anon_sym_selector] = ACTIONS(53),
    [sym_identifier] = ACTIONS(55),
    [sym_comment] = ACTIONS(37),
  },
  [66] = {
    [aux_sym_import_statement_repeat1] = STATE(117),
    [anon_sym_COMMA] = ACTIONS(322),
    [anon_sym_SEMI] = ACTIONS(324),
    [anon_sym_and] = ACTIONS(326),
    [anon_sym_or] = ACTIONS(326),
    [sym_comment] = ACTIONS(37),
  },
  [67] = {
    [sym__query] = STATE(70),
    [sym_feature_query] = STATE(70),
    [sym_parenthesized_query] = STATE(70),
    [sym_binary_query] = STATE(70),
    [sym_negated_query] = STATE(70),
    [sym_selector_query] = STATE(70),
    [anon_sym_LPAREN2] = ACTIONS(49),
    [anon_sym_not] = ACTIONS(149),
    [anon_sym_selector] = ACTIONS(53),
    [sym_identifier] = ACTIONS(55),
    [sym_comment] = ACTIONS(37),
  },
  [68] = {
    [anon_sym_COLON] = ACTIONS(328),
    [anon_sym_RPAREN] = ACTIONS(155),
    [anon_sym_and] = ACTIONS(155),
    [anon_sym_or] = ACTIONS(155),
    [sym_comment] = ACTIONS(37),
  },
  [69] = {
    [anon_sym_RPAREN] = ACTIONS(330),
    [anon_sym_and] = ACTIONS(332),
    [anon_sym_or] = ACTIONS(332),
    [sym_comment] = ACTIONS(37),
  },
  [70] = {
    [anon_sym_COMMA] = ACTIONS(334),
    [anon_sym_SEMI] = ACTIONS(334),
    [anon_sym_LBRACE] = ACTIONS(334),
    [anon_sym_RPAREN] = ACTIONS(334),
    [anon_sym_and] = ACTIONS(334),
    [anon_sym_or] = ACTIONS(334),
    [sym_comment] = ACTIONS(37),
  },
  [71] = {
    [sym__selector] = STATE(121),
    [sym_universal_selector] = STATE(121),
    [sym_class_selector] = STATE(121),
    [sym_pseudo_class_selector] = STATE(121),
    [sym_pseudo_element_selector] = STATE(121),
    [sym_id_selector] = STATE(121),
    [sym_attribute_selector] = STATE(121),
    [sym_child_selector] = STATE(121),
    [sym_descendant_selector] = STATE(121),
    [sym_sibling_selector] = STATE(121),
    [sym_adjacent_sibling_selector] = STATE(121),
    [sym_nesting_selector] = ACTIONS(336),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_string_value] = ACTIONS(336),
    [sym_identifier] = ACTIONS(33),
    [sym_comment] = ACTIONS(37),
  },
  [72] = {
    [sym__query] = STATE(122),
    [sym_feature_query] = STATE(122),
    [sym_parenthesized_query] = STATE(122),
    [sym_binary_query] = STATE(122),
    [sym_negated_query] = STATE(122),
    [sym_selector_query] = STATE(122),
    [anon_sym_LPAREN2] = ACTIONS(49),
    [anon_sym_not] = ACTIONS(51),
    [anon_sym_selector] = ACTIONS(53),
    [sym_identifier] = ACTIONS(55),
    [sym_comment] = ACTIONS(37),
  },
  [73] = {
    [sym__query] = STATE(123),
    [sym_feature_query] = STATE(123),
    [sym_parenthesized_query] = STATE(123),
    [sym_binary_query] = STATE(123),
    [sym_negated_query] = STATE(123),
    [sym_selector_query] = STATE(123),
    [anon_sym_LPAREN2] = ACTIONS(49),
    [anon_sym_not] = ACTIONS(51),
    [anon_sym_selector] = ACTIONS(53),
    [sym_identifier] = ACTIONS(55),
    [sym_comment] = ACTIONS(37),
  },
  [74] = {
    [ts_builtin_sym_end] = ACTIONS(338),
    [anon_sym_ATimport] = ACTIONS(340),
    [anon_sym_ATmedia] = ACTIONS(340),
    [anon_sym_ATcharset] = ACTIONS(340),
    [anon_sym_ATnamespace] = ACTIONS(340),
    [anon_sym_ATkeyframes] = ACTIONS(340),
    [anon_sym_RBRACE] = ACTIONS(338),
    [anon_sym_ATsupports] = ACTIONS(340),
    [sym_nesting_selector] = ACTIONS(338),
    [anon_sym_STAR] = ACTIONS(338),
    [anon_sym_DOT] = ACTIONS(338),
    [anon_sym_COLON] = ACTIONS(340),
    [anon_sym_COLON_COLON] = ACTIONS(338),
    [anon_sym_POUND] = ACTIONS(338),
    [anon_sym_LBRACK] = ACTIONS(338),
    [sym_string_value] = ACTIONS(338),
    [sym_identifier] = ACTIONS(338),
    [sym_at_keyword] = ACTIONS(340),
    [sym_comment] = ACTIONS(37),
  },
  [75] = {
    [sym_block] = STATE(124),
    [aux_sym_import_statement_repeat1] = STATE(125),
    [anon_sym_COMMA] = ACTIONS(157),
    [anon_sym_LBRACE] = ACTIONS(93),
    [sym_comment] = ACTIONS(37),
  },
  [76] = {
    [ts_builtin_sym_end] = ACTIONS(342),
    [anon_sym_ATimport] = ACTIONS(344),
    [anon_sym_ATmedia] = ACTIONS(344),
    [anon_sym_ATcharset] = ACTIONS(344),
    [anon_sym_ATnamespace] = ACTIONS(344),
    [anon_sym_ATkeyframes] = ACTIONS(344),
    [anon_sym_RBRACE] = ACTIONS(342),
    [anon_sym_ATsupports] = ACTIONS(344),
    [sym_nesting_selector] = ACTIONS(342),
    [anon_sym_STAR] = ACTIONS(342),
    [anon_sym_DOT] = ACTIONS(342),
    [anon_sym_COLON] = ACTIONS(344),
    [anon_sym_COLON_COLON] = ACTIONS(342),
    [anon_sym_POUND] = ACTIONS(342),
    [anon_sym_LBRACK] = ACTIONS(342),
    [sym_string_value] = ACTIONS(342),
    [sym_identifier] = ACTIONS(342),
    [sym_at_keyword] = ACTIONS(344),
    [sym_comment] = ACTIONS(37),
  },
  [77] = {
    [sym__value] = STATE(113),
    [sym_integer_value] = STATE(113),
    [sym_float_value] = STATE(113),
    [sym_call_expression] = STATE(113),
    [sym_binary_expression] = STATE(113),
    [sym_color_value] = ACTIONS(318),
    [sym_string_value] = ACTIONS(318),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(59),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(61),
    [sym_identifier] = ACTIONS(45),
    [sym_plain_value] = ACTIONS(320),
    [sym_comment] = ACTIONS(37),
  },
  [78] = {
    [ts_builtin_sym_end] = ACTIONS(346),
    [anon_sym_ATimport] = ACTIONS(348),
    [anon_sym_ATmedia] = ACTIONS(348),
    [anon_sym_ATcharset] = ACTIONS(348),
    [anon_sym_ATnamespace] = ACTIONS(348),
    [anon_sym_ATkeyframes] = ACTIONS(348),
    [anon_sym_RBRACE] = ACTIONS(346),
    [anon_sym_ATsupports] = ACTIONS(348),
    [sym_nesting_selector] = ACTIONS(346),
    [anon_sym_STAR] = ACTIONS(346),
    [anon_sym_DOT] = ACTIONS(346),
    [anon_sym_COLON] = ACTIONS(348),
    [anon_sym_COLON_COLON] = ACTIONS(346),
    [anon_sym_POUND] = ACTIONS(346),
    [anon_sym_LBRACK] = ACTIONS(346),
    [sym_string_value] = ACTIONS(346),
    [sym_identifier] = ACTIONS(346),
    [sym_at_keyword] = ACTIONS(348),
    [sym_comment] = ACTIONS(37),
  },
  [79] = {
    [anon_sym_SEMI] = ACTIONS(350),
    [sym_comment] = ACTIONS(37),
  },
  [80] = {
    [sym_arguments] = STATE(62),
    [anon_sym_LPAREN] = ACTIONS(137),
    [sym_comment] = ACTIONS(37),
  },
  [81] = {
    [sym_keyframe_block] = STATE(129),
    [sym_integer_value] = STATE(128),
    [aux_sym_keyframe_block_list_repeat1] = STATE(129),
    [anon_sym_RBRACE] = ACTIONS(352),
    [sym_from] = ACTIONS(354),
    [sym_to] = ACTIONS(354),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(356),
    [sym_comment] = ACTIONS(37),
  },
  [82] = {
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
  [83] = {
    [sym__query] = STATE(123),
    [sym_feature_query] = STATE(123),
    [sym_parenthesized_query] = STATE(123),
    [sym_binary_query] = STATE(123),
    [sym_negated_query] = STATE(123),
    [sym_selector_query] = STATE(123),
    [anon_sym_LPAREN2] = ACTIONS(49),
    [anon_sym_not] = ACTIONS(71),
    [anon_sym_selector] = ACTIONS(53),
    [sym_identifier] = ACTIONS(55),
    [sym_comment] = ACTIONS(37),
  },
  [84] = {
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
  [85] = {
    [sym__selector] = STATE(133),
    [sym_universal_selector] = STATE(133),
    [sym_class_selector] = STATE(133),
    [sym_pseudo_class_selector] = STATE(133),
    [sym_pseudo_element_selector] = STATE(133),
    [sym_id_selector] = STATE(133),
    [sym_attribute_selector] = STATE(133),
    [sym_child_selector] = STATE(133),
    [sym_descendant_selector] = STATE(133),
    [sym_sibling_selector] = STATE(133),
    [sym_adjacent_sibling_selector] = STATE(133),
    [sym__value] = STATE(111),
    [sym_integer_value] = STATE(111),
    [sym_float_value] = STATE(111),
    [sym_call_expression] = STATE(111),
    [sym_binary_expression] = STATE(111),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(134),
    [sym_nesting_selector] = ACTIONS(366),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(368),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(370),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(372),
    [sym_color_value] = ACTIONS(300),
    [sym_string_value] = ACTIONS(374),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(302),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(304),
    [sym_identifier] = ACTIONS(376),
    [sym_plain_value] = ACTIONS(308),
    [sym_comment] = ACTIONS(37),
  },
  [86] = {
    [sym__descendant_operator] = ACTIONS(378),
    [anon_sym_COMMA] = ACTIONS(378),
    [anon_sym_LBRACE] = ACTIONS(378),
    [anon_sym_DOT] = ACTIONS(378),
    [anon_sym_COLON] = ACTIONS(380),
    [anon_sym_COLON_COLON] = ACTIONS(378),
    [anon_sym_POUND] = ACTIONS(378),
    [anon_sym_LBRACK] = ACTIONS(378),
    [anon_sym_GT] = ACTIONS(378),
    [anon_sym_TILDE] = ACTIONS(378),
    [anon_sym_PLUS] = ACTIONS(378),
    [anon_sym_RPAREN] = ACTIONS(378),
    [sym_comment] = ACTIONS(37),
  },
  [87] = {
    [sym__value] = STATE(135),
    [sym_integer_value] = STATE(135),
    [sym_float_value] = STATE(135),
    [sym_call_expression] = STATE(135),
    [sym_binary_expression] = STATE(135),
    [sym_color_value] = ACTIONS(382),
    [sym_string_value] = ACTIONS(382),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(59),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(61),
    [sym_identifier] = ACTIONS(45),
    [sym_plain_value] = ACTIONS(384),
    [sym_comment] = ACTIONS(37),
  },
  [88] = {
    [sym__descendant_operator] = ACTIONS(386),
    [anon_sym_COMMA] = ACTIONS(386),
    [anon_sym_LBRACE] = ACTIONS(386),
    [anon_sym_DOT] = ACTIONS(386),
    [anon_sym_COLON] = ACTIONS(388),
    [anon_sym_COLON_COLON] = ACTIONS(386),
    [anon_sym_POUND] = ACTIONS(386),
    [anon_sym_LBRACK] = ACTIONS(386),
    [anon_sym_GT] = ACTIONS(386),
    [anon_sym_TILDE] = ACTIONS(386),
    [anon_sym_PLUS] = ACTIONS(386),
    [anon_sym_RPAREN] = ACTIONS(386),
    [sym_comment] = ACTIONS(37),
  },
  [89] = {
    [ts_builtin_sym_end] = ACTIONS(390),
    [anon_sym_ATimport] = ACTIONS(392),
    [anon_sym_ATmedia] = ACTIONS(392),
    [anon_sym_ATcharset] = ACTIONS(392),
    [anon_sym_ATnamespace] = ACTIONS(392),
    [anon_sym_ATkeyframes] = ACTIONS(392),
    [anon_sym_RBRACE] = ACTIONS(390),
    [anon_sym_ATsupports] = ACTIONS(392),
    [sym_nesting_selector] = ACTIONS(390),
    [anon_sym_STAR] = ACTIONS(390),
    [anon_sym_DOT] = ACTIONS(390),
    [anon_sym_COLON] = ACTIONS(392),
    [anon_sym_COLON_COLON] = ACTIONS(390),
    [anon_sym_POUND] = ACTIONS(390),
    [anon_sym_LBRACK] = ACTIONS(390),
    [sym_string_value] = ACTIONS(390),
    [sym_identifier] = ACTIONS(390),
    [sym_at_keyword] = ACTIONS(392),
    [sym_comment] = ACTIONS(37),
  },
  [90] = {
    [sym__descendant_operator] = ACTIONS(87),
    [anon_sym_COMMA] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(87),
    [anon_sym_DOT] = ACTIONS(87),
    [anon_sym_COLON] = ACTIONS(394),
    [anon_sym_COLON_COLON] = ACTIONS(87),
    [anon_sym_POUND] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_GT] = ACTIONS(87),
    [anon_sym_TILDE] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(87),
    [sym_comment] = ACTIONS(37),
  },
  [91] = {
    [sym_import_statement] = STATE(138),
    [sym_media_statement] = STATE(138),
    [sym_charset_statement] = STATE(138),
    [sym_namespace_statement] = STATE(138),
    [sym_keyframes_statement] = STATE(138),
    [sym_supports_statement] = STATE(138),
    [sym_at_rule] = STATE(138),
    [sym_rule_set] = STATE(138),
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
    [sym_declaration] = STATE(138),
    [aux_sym_block_repeat1] = STATE(138),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATmedia] = ACTIONS(9),
    [anon_sym_ATcharset] = ACTIONS(11),
    [anon_sym_ATnamespace] = ACTIONS(13),
    [anon_sym_ATkeyframes] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(396),
    [anon_sym_ATsupports] = ACTIONS(17),
    [sym_nesting_selector] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_string_value] = ACTIONS(19),
    [sym_identifier] = ACTIONS(209),
    [sym_at_keyword] = ACTIONS(35),
    [sym_comment] = ACTIONS(37),
  },
  [92] = {
    [sym__query] = STATE(139),
    [sym_feature_query] = STATE(139),
    [sym_parenthesized_query] = STATE(139),
    [sym_binary_query] = STATE(139),
    [sym_negated_query] = STATE(139),
    [sym_selector_query] = STATE(139),
    [anon_sym_LPAREN2] = ACTIONS(49),
    [anon_sym_not] = ACTIONS(95),
    [anon_sym_selector] = ACTIONS(53),
    [sym_identifier] = ACTIONS(55),
    [sym_comment] = ACTIONS(37),
  },
  [93] = {
    [ts_builtin_sym_end] = ACTIONS(398),
    [anon_sym_ATimport] = ACTIONS(400),
    [anon_sym_ATmedia] = ACTIONS(400),
    [anon_sym_ATcharset] = ACTIONS(400),
    [anon_sym_ATnamespace] = ACTIONS(400),
    [anon_sym_ATkeyframes] = ACTIONS(400),
    [anon_sym_RBRACE] = ACTIONS(398),
    [anon_sym_ATsupports] = ACTIONS(400),
    [sym_nesting_selector] = ACTIONS(398),
    [anon_sym_STAR] = ACTIONS(398),
    [anon_sym_DOT] = ACTIONS(398),
    [anon_sym_COLON] = ACTIONS(400),
    [anon_sym_COLON_COLON] = ACTIONS(398),
    [anon_sym_POUND] = ACTIONS(398),
    [anon_sym_LBRACK] = ACTIONS(398),
    [sym_string_value] = ACTIONS(398),
    [sym_identifier] = ACTIONS(398),
    [sym_at_keyword] = ACTIONS(400),
    [sym_comment] = ACTIONS(37),
  },
  [94] = {
    [sym__query] = STATE(123),
    [sym_feature_query] = STATE(123),
    [sym_parenthesized_query] = STATE(123),
    [sym_binary_query] = STATE(123),
    [sym_negated_query] = STATE(123),
    [sym_selector_query] = STATE(123),
    [anon_sym_LPAREN2] = ACTIONS(49),
    [anon_sym_not] = ACTIONS(95),
    [anon_sym_selector] = ACTIONS(53),
    [sym_identifier] = ACTIONS(55),
    [sym_comment] = ACTIONS(37),
  },
  [95] = {
    [sym_block] = STATE(140),
    [aux_sym_import_statement_repeat1] = STATE(141),
    [anon_sym_COMMA] = ACTIONS(211),
    [anon_sym_SEMI] = ACTIONS(402),
    [anon_sym_LBRACE] = ACTIONS(93),
    [sym_comment] = ACTIONS(37),
  },
  [96] = {
    [sym__descendant_operator] = ACTIONS(404),
    [anon_sym_COMMA] = ACTIONS(404),
    [anon_sym_LBRACE] = ACTIONS(404),
    [anon_sym_DOT] = ACTIONS(105),
    [anon_sym_COLON] = ACTIONS(406),
    [anon_sym_COLON_COLON] = ACTIONS(404),
    [anon_sym_POUND] = ACTIONS(404),
    [anon_sym_LBRACK] = ACTIONS(404),
    [anon_sym_GT] = ACTIONS(404),
    [anon_sym_TILDE] = ACTIONS(404),
    [anon_sym_PLUS] = ACTIONS(404),
    [anon_sym_RPAREN] = ACTIONS(404),
    [sym_comment] = ACTIONS(37),
  },
  [97] = {
    [sym__descendant_operator] = ACTIONS(99),
    [anon_sym_COMMA] = ACTIONS(408),
    [anon_sym_LBRACE] = ACTIONS(408),
    [anon_sym_DOT] = ACTIONS(105),
    [anon_sym_COLON] = ACTIONS(107),
    [anon_sym_COLON_COLON] = ACTIONS(109),
    [anon_sym_POUND] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(113),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_TILDE] = ACTIONS(117),
    [anon_sym_PLUS] = ACTIONS(119),
    [sym_comment] = ACTIONS(37),
  },
  [98] = {
    [sym__descendant_operator] = ACTIONS(410),
    [anon_sym_COMMA] = ACTIONS(410),
    [anon_sym_LBRACE] = ACTIONS(410),
    [anon_sym_DOT] = ACTIONS(410),
    [anon_sym_COLON] = ACTIONS(412),
    [anon_sym_COLON_COLON] = ACTIONS(410),
    [anon_sym_POUND] = ACTIONS(410),
    [anon_sym_LBRACK] = ACTIONS(410),
    [anon_sym_GT] = ACTIONS(410),
    [anon_sym_TILDE] = ACTIONS(410),
    [anon_sym_PLUS] = ACTIONS(410),
    [anon_sym_RPAREN] = ACTIONS(410),
    [sym_comment] = ACTIONS(37),
  },
  [99] = {
    [sym_pseudo_class_arguments] = STATE(142),
    [sym__descendant_operator] = ACTIONS(414),
    [anon_sym_COMMA] = ACTIONS(414),
    [anon_sym_LBRACE] = ACTIONS(414),
    [anon_sym_DOT] = ACTIONS(414),
    [anon_sym_COLON] = ACTIONS(416),
    [anon_sym_COLON_COLON] = ACTIONS(414),
    [anon_sym_POUND] = ACTIONS(414),
    [anon_sym_LBRACK] = ACTIONS(414),
    [anon_sym_GT] = ACTIONS(414),
    [anon_sym_TILDE] = ACTIONS(414),
    [anon_sym_PLUS] = ACTIONS(414),
    [anon_sym_LPAREN] = ACTIONS(189),
    [anon_sym_RPAREN] = ACTIONS(414),
    [sym_comment] = ACTIONS(37),
  },
  [100] = {
    [sym__descendant_operator] = ACTIONS(418),
    [anon_sym_COMMA] = ACTIONS(418),
    [anon_sym_LBRACE] = ACTIONS(418),
    [anon_sym_DOT] = ACTIONS(418),
    [anon_sym_COLON] = ACTIONS(420),
    [anon_sym_COLON_COLON] = ACTIONS(418),
    [anon_sym_POUND] = ACTIONS(418),
    [anon_sym_LBRACK] = ACTIONS(418),
    [anon_sym_GT] = ACTIONS(418),
    [anon_sym_TILDE] = ACTIONS(418),
    [anon_sym_PLUS] = ACTIONS(418),
    [anon_sym_RPAREN] = ACTIONS(418),
    [sym_comment] = ACTIONS(37),
  },
  [101] = {
    [sym__descendant_operator] = ACTIONS(422),
    [anon_sym_COMMA] = ACTIONS(422),
    [anon_sym_LBRACE] = ACTIONS(422),
    [anon_sym_DOT] = ACTIONS(422),
    [anon_sym_COLON] = ACTIONS(424),
    [anon_sym_COLON_COLON] = ACTIONS(422),
    [anon_sym_POUND] = ACTIONS(422),
    [anon_sym_LBRACK] = ACTIONS(422),
    [anon_sym_GT] = ACTIONS(422),
    [anon_sym_TILDE] = ACTIONS(422),
    [anon_sym_PLUS] = ACTIONS(422),
    [anon_sym_RPAREN] = ACTIONS(422),
    [sym_comment] = ACTIONS(37),
  },
  [102] = {
    [anon_sym_EQ] = ACTIONS(426),
    [anon_sym_TILDE_EQ] = ACTIONS(426),
    [anon_sym_CARET_EQ] = ACTIONS(426),
    [anon_sym_PIPE_EQ] = ACTIONS(426),
    [anon_sym_STAR_EQ] = ACTIONS(426),
    [anon_sym_DOLLAR_EQ] = ACTIONS(426),
    [anon_sym_RBRACK] = ACTIONS(428),
    [sym_comment] = ACTIONS(37),
  },
  [103] = {
    [sym__descendant_operator] = ACTIONS(430),
    [anon_sym_COMMA] = ACTIONS(430),
    [anon_sym_LBRACE] = ACTIONS(430),
    [anon_sym_DOT] = ACTIONS(105),
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
    [sym__descendant_operator] = ACTIONS(434),
    [anon_sym_COMMA] = ACTIONS(434),
    [anon_sym_LBRACE] = ACTIONS(434),
    [anon_sym_DOT] = ACTIONS(105),
    [anon_sym_COLON] = ACTIONS(436),
    [anon_sym_COLON_COLON] = ACTIONS(434),
    [anon_sym_POUND] = ACTIONS(434),
    [anon_sym_LBRACK] = ACTIONS(434),
    [anon_sym_GT] = ACTIONS(434),
    [anon_sym_TILDE] = ACTIONS(434),
    [anon_sym_PLUS] = ACTIONS(434),
    [anon_sym_RPAREN] = ACTIONS(434),
    [sym_comment] = ACTIONS(37),
  },
  [105] = {
    [sym__descendant_operator] = ACTIONS(438),
    [anon_sym_COMMA] = ACTIONS(438),
    [anon_sym_LBRACE] = ACTIONS(438),
    [anon_sym_DOT] = ACTIONS(105),
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
    [aux_sym_selectors_repeat1] = STATE(106),
    [anon_sym_COMMA] = ACTIONS(442),
    [anon_sym_LBRACE] = ACTIONS(408),
    [sym_comment] = ACTIONS(37),
  },
  [107] = {
    [anon_sym_SEMI] = ACTIONS(445),
    [anon_sym_STAR] = ACTIONS(445),
    [anon_sym_RBRACK] = ACTIONS(445),
    [anon_sym_PLUS] = ACTIONS(445),
    [anon_sym_RPAREN] = ACTIONS(445),
    [anon_sym_LPAREN2] = ACTIONS(445),
    [anon_sym_not] = ACTIONS(447),
    [anon_sym_selector] = ACTIONS(447),
    [anon_sym_DASH] = ACTIONS(447),
    [anon_sym_SLASH] = ACTIONS(447),
    [sym_identifier] = ACTIONS(447),
    [sym_comment] = ACTIONS(37),
  },
  [108] = {
    [anon_sym_COMMA] = ACTIONS(123),
    [anon_sym_SEMI] = ACTIONS(123),
    [anon_sym_STAR] = ACTIONS(123),
    [anon_sym_PLUS] = ACTIONS(125),
    [anon_sym_RPAREN] = ACTIONS(123),
    [sym_important] = ACTIONS(123),
    [sym_color_value] = ACTIONS(123),
    [sym_string_value] = ACTIONS(123),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(125),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(125),
    [sym_unit] = ACTIONS(449),
    [anon_sym_DASH] = ACTIONS(125),
    [anon_sym_SLASH] = ACTIONS(125),
    [sym_identifier] = ACTIONS(125),
    [sym_plain_value] = ACTIONS(125),
    [sym_comment] = ACTIONS(37),
  },
  [109] = {
    [anon_sym_COMMA] = ACTIONS(129),
    [anon_sym_SEMI] = ACTIONS(129),
    [anon_sym_STAR] = ACTIONS(129),
    [anon_sym_PLUS] = ACTIONS(131),
    [anon_sym_RPAREN] = ACTIONS(129),
    [sym_important] = ACTIONS(129),
    [sym_color_value] = ACTIONS(129),
    [sym_string_value] = ACTIONS(129),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(131),
    [sym_unit] = ACTIONS(451),
    [anon_sym_DASH] = ACTIONS(131),
    [anon_sym_SLASH] = ACTIONS(131),
    [sym_identifier] = ACTIONS(131),
    [sym_plain_value] = ACTIONS(131),
    [sym_comment] = ACTIONS(37),
  },
  [110] = {
    [sym_arguments] = STATE(148),
    [anon_sym_COMMA] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(135),
    [anon_sym_STAR] = ACTIONS(135),
    [anon_sym_PLUS] = ACTIONS(139),
    [anon_sym_LPAREN] = ACTIONS(453),
    [anon_sym_RPAREN] = ACTIONS(135),
    [sym_important] = ACTIONS(135),
    [sym_color_value] = ACTIONS(135),
    [sym_string_value] = ACTIONS(135),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(139),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(139),
    [anon_sym_SLASH] = ACTIONS(139),
    [sym_identifier] = ACTIONS(139),
    [sym_plain_value] = ACTIONS(139),
    [sym_comment] = ACTIONS(37),
  },
  [111] = {
    [anon_sym_COMMA] = ACTIONS(455),
    [anon_sym_STAR] = ACTIONS(457),
    [anon_sym_PLUS] = ACTIONS(459),
    [anon_sym_RPAREN] = ACTIONS(455),
    [sym_color_value] = ACTIONS(455),
    [sym_string_value] = ACTIONS(455),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(461),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(461),
    [anon_sym_DASH] = ACTIONS(459),
    [anon_sym_SLASH] = ACTIONS(459),
    [sym_identifier] = ACTIONS(461),
    [sym_plain_value] = ACTIONS(461),
    [sym_comment] = ACTIONS(37),
  },
  [112] = {
    [sym__value] = STATE(111),
    [sym_integer_value] = STATE(111),
    [sym_float_value] = STATE(111),
    [sym_call_expression] = STATE(111),
    [sym_binary_expression] = STATE(111),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(152),
    [aux_sym_arguments_repeat1] = STATE(153),
    [anon_sym_COMMA] = ACTIONS(463),
    [anon_sym_RPAREN] = ACTIONS(465),
    [sym_color_value] = ACTIONS(300),
    [sym_string_value] = ACTIONS(300),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(302),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(304),
    [sym_identifier] = ACTIONS(306),
    [sym_plain_value] = ACTIONS(308),
    [sym_comment] = ACTIONS(37),
  },
  [113] = {
    [anon_sym_SEMI] = ACTIONS(467),
    [anon_sym_STAR] = ACTIONS(467),
    [anon_sym_RBRACK] = ACTIONS(467),
    [anon_sym_PLUS] = ACTIONS(467),
    [anon_sym_RPAREN] = ACTIONS(467),
    [anon_sym_LPAREN2] = ACTIONS(467),
    [anon_sym_not] = ACTIONS(469),
    [anon_sym_selector] = ACTIONS(469),
    [anon_sym_DASH] = ACTIONS(469),
    [anon_sym_SLASH] = ACTIONS(469),
    [sym_identifier] = ACTIONS(469),
    [sym_comment] = ACTIONS(37),
  },
  [114] = {
    [sym__query] = STATE(154),
    [sym_feature_query] = STATE(154),
    [sym_parenthesized_query] = STATE(154),
    [sym_binary_query] = STATE(154),
    [sym_negated_query] = STATE(154),
    [sym_selector_query] = STATE(154),
    [anon_sym_LPAREN2] = ACTIONS(49),
    [anon_sym_not] = ACTIONS(145),
    [anon_sym_selector] = ACTIONS(53),
    [sym_identifier] = ACTIONS(55),
    [sym_comment] = ACTIONS(37),
  },
  [115] = {
    [ts_builtin_sym_end] = ACTIONS(471),
    [anon_sym_ATimport] = ACTIONS(473),
    [anon_sym_ATmedia] = ACTIONS(473),
    [anon_sym_ATcharset] = ACTIONS(473),
    [anon_sym_ATnamespace] = ACTIONS(473),
    [anon_sym_ATkeyframes] = ACTIONS(473),
    [anon_sym_RBRACE] = ACTIONS(471),
    [anon_sym_ATsupports] = ACTIONS(473),
    [sym_nesting_selector] = ACTIONS(471),
    [anon_sym_STAR] = ACTIONS(471),
    [anon_sym_DOT] = ACTIONS(471),
    [anon_sym_COLON] = ACTIONS(473),
    [anon_sym_COLON_COLON] = ACTIONS(471),
    [anon_sym_POUND] = ACTIONS(471),
    [anon_sym_LBRACK] = ACTIONS(471),
    [sym_string_value] = ACTIONS(471),
    [sym_identifier] = ACTIONS(471),
    [sym_at_keyword] = ACTIONS(473),
    [sym_comment] = ACTIONS(37),
  },
  [116] = {
    [sym__query] = STATE(123),
    [sym_feature_query] = STATE(123),
    [sym_parenthesized_query] = STATE(123),
    [sym_binary_query] = STATE(123),
    [sym_negated_query] = STATE(123),
    [sym_selector_query] = STATE(123),
    [anon_sym_LPAREN2] = ACTIONS(49),
    [anon_sym_not] = ACTIONS(145),
    [anon_sym_selector] = ACTIONS(53),
    [sym_identifier] = ACTIONS(55),
    [sym_comment] = ACTIONS(37),
  },
  [117] = {
    [aux_sym_import_statement_repeat1] = STATE(156),
    [anon_sym_COMMA] = ACTIONS(322),
    [anon_sym_SEMI] = ACTIONS(475),
    [sym_comment] = ACTIONS(37),
  },
  [118] = {
    [sym__value] = STATE(157),
    [sym_integer_value] = STATE(157),
    [sym_float_value] = STATE(157),
    [sym_call_expression] = STATE(157),
    [sym_binary_expression] = STATE(157),
    [sym_color_value] = ACTIONS(477),
    [sym_string_value] = ACTIONS(477),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(59),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(61),
    [sym_identifier] = ACTIONS(45),
    [sym_plain_value] = ACTIONS(479),
    [sym_comment] = ACTIONS(37),
  },
  [119] = {
    [anon_sym_COMMA] = ACTIONS(481),
    [anon_sym_SEMI] = ACTIONS(481),
    [anon_sym_LBRACE] = ACTIONS(481),
    [anon_sym_RPAREN] = ACTIONS(481),
    [anon_sym_and] = ACTIONS(481),
    [anon_sym_or] = ACTIONS(481),
    [sym_comment] = ACTIONS(37),
  },
  [120] = {
    [sym__query] = STATE(123),
    [sym_feature_query] = STATE(123),
    [sym_parenthesized_query] = STATE(123),
    [sym_binary_query] = STATE(123),
    [sym_negated_query] = STATE(123),
    [sym_selector_query] = STATE(123),
    [anon_sym_LPAREN2] = ACTIONS(49),
    [anon_sym_not] = ACTIONS(149),
    [anon_sym_selector] = ACTIONS(53),
    [sym_identifier] = ACTIONS(55),
    [sym_comment] = ACTIONS(37),
  },
  [121] = {
    [sym__descendant_operator] = ACTIONS(99),
    [anon_sym_DOT] = ACTIONS(105),
    [anon_sym_COLON] = ACTIONS(107),
    [anon_sym_COLON_COLON] = ACTIONS(109),
    [anon_sym_POUND] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(113),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_TILDE] = ACTIONS(117),
    [anon_sym_PLUS] = ACTIONS(119),
    [anon_sym_RPAREN] = ACTIONS(483),
    [sym_comment] = ACTIONS(37),
  },
  [122] = {
    [anon_sym_COMMA] = ACTIONS(485),
    [anon_sym_LBRACE] = ACTIONS(485),
    [anon_sym_and] = ACTIONS(159),
    [anon_sym_or] = ACTIONS(159),
    [sym_comment] = ACTIONS(37),
  },
  [123] = {
    [anon_sym_COMMA] = ACTIONS(487),
    [anon_sym_SEMI] = ACTIONS(487),
    [anon_sym_LBRACE] = ACTIONS(487),
    [anon_sym_RPAREN] = ACTIONS(487),
    [anon_sym_and] = ACTIONS(487),
    [anon_sym_or] = ACTIONS(487),
    [sym_comment] = ACTIONS(37),
  },
  [124] = {
    [ts_builtin_sym_end] = ACTIONS(489),
    [anon_sym_ATimport] = ACTIONS(491),
    [anon_sym_ATmedia] = ACTIONS(491),
    [anon_sym_ATcharset] = ACTIONS(491),
    [anon_sym_ATnamespace] = ACTIONS(491),
    [anon_sym_ATkeyframes] = ACTIONS(491),
    [anon_sym_RBRACE] = ACTIONS(489),
    [anon_sym_ATsupports] = ACTIONS(491),
    [sym_nesting_selector] = ACTIONS(489),
    [anon_sym_STAR] = ACTIONS(489),
    [anon_sym_DOT] = ACTIONS(489),
    [anon_sym_COLON] = ACTIONS(491),
    [anon_sym_COLON_COLON] = ACTIONS(489),
    [anon_sym_POUND] = ACTIONS(489),
    [anon_sym_LBRACK] = ACTIONS(489),
    [sym_string_value] = ACTIONS(489),
    [sym_identifier] = ACTIONS(489),
    [sym_at_keyword] = ACTIONS(491),
    [sym_comment] = ACTIONS(37),
  },
  [125] = {
    [aux_sym_import_statement_repeat1] = STATE(125),
    [anon_sym_COMMA] = ACTIONS(493),
    [anon_sym_LBRACE] = ACTIONS(485),
    [sym_comment] = ACTIONS(37),
  },
  [126] = {
    [ts_builtin_sym_end] = ACTIONS(496),
    [anon_sym_ATimport] = ACTIONS(498),
    [anon_sym_ATmedia] = ACTIONS(498),
    [anon_sym_ATcharset] = ACTIONS(498),
    [anon_sym_ATnamespace] = ACTIONS(498),
    [anon_sym_ATkeyframes] = ACTIONS(498),
    [anon_sym_RBRACE] = ACTIONS(496),
    [anon_sym_ATsupports] = ACTIONS(498),
    [sym_nesting_selector] = ACTIONS(496),
    [anon_sym_STAR] = ACTIONS(496),
    [anon_sym_DOT] = ACTIONS(496),
    [anon_sym_COLON] = ACTIONS(498),
    [anon_sym_COLON_COLON] = ACTIONS(496),
    [anon_sym_POUND] = ACTIONS(496),
    [anon_sym_LBRACK] = ACTIONS(496),
    [sym_string_value] = ACTIONS(496),
    [sym_identifier] = ACTIONS(496),
    [sym_at_keyword] = ACTIONS(498),
    [sym_comment] = ACTIONS(37),
  },
  [127] = {
    [ts_builtin_sym_end] = ACTIONS(500),
    [anon_sym_ATimport] = ACTIONS(502),
    [anon_sym_ATmedia] = ACTIONS(502),
    [anon_sym_ATcharset] = ACTIONS(502),
    [anon_sym_ATnamespace] = ACTIONS(502),
    [anon_sym_ATkeyframes] = ACTIONS(502),
    [anon_sym_RBRACE] = ACTIONS(500),
    [anon_sym_ATsupports] = ACTIONS(502),
    [sym_nesting_selector] = ACTIONS(500),
    [anon_sym_STAR] = ACTIONS(500),
    [anon_sym_DOT] = ACTIONS(500),
    [anon_sym_COLON] = ACTIONS(502),
    [anon_sym_COLON_COLON] = ACTIONS(500),
    [anon_sym_POUND] = ACTIONS(500),
    [anon_sym_LBRACK] = ACTIONS(500),
    [sym_string_value] = ACTIONS(500),
    [sym_identifier] = ACTIONS(500),
    [sym_at_keyword] = ACTIONS(502),
    [sym_comment] = ACTIONS(37),
  },
  [128] = {
    [sym_block] = STATE(160),
    [anon_sym_LBRACE] = ACTIONS(504),
    [sym_comment] = ACTIONS(37),
  },
  [129] = {
    [sym_keyframe_block] = STATE(162),
    [sym_integer_value] = STATE(128),
    [aux_sym_keyframe_block_list_repeat1] = STATE(162),
    [anon_sym_RBRACE] = ACTIONS(506),
    [sym_from] = ACTIONS(354),
    [sym_to] = ACTIONS(354),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(356),
    [sym_comment] = ACTIONS(37),
  },
  [130] = {
    [sym__descendant_operator] = ACTIONS(508),
    [anon_sym_COMMA] = ACTIONS(508),
    [anon_sym_LBRACE] = ACTIONS(508),
    [anon_sym_DOT] = ACTIONS(508),
    [anon_sym_COLON] = ACTIONS(510),
    [anon_sym_COLON_COLON] = ACTIONS(508),
    [anon_sym_POUND] = ACTIONS(508),
    [anon_sym_LBRACK] = ACTIONS(508),
    [anon_sym_GT] = ACTIONS(508),
    [anon_sym_TILDE] = ACTIONS(508),
    [anon_sym_PLUS] = ACTIONS(508),
    [anon_sym_RPAREN] = ACTIONS(508),
    [sym_comment] = ACTIONS(37),
  },
  [131] = {
    [sym__descendant_operator] = ACTIONS(512),
    [anon_sym_COMMA] = ACTIONS(512),
    [anon_sym_STAR] = ACTIONS(514),
    [anon_sym_DOT] = ACTIONS(516),
    [anon_sym_COLON] = ACTIONS(516),
    [anon_sym_COLON_COLON] = ACTIONS(512),
    [anon_sym_POUND] = ACTIONS(516),
    [anon_sym_LBRACK] = ACTIONS(512),
    [anon_sym_GT] = ACTIONS(512),
    [anon_sym_TILDE] = ACTIONS(512),
    [anon_sym_PLUS] = ACTIONS(516),
    [anon_sym_RPAREN] = ACTIONS(512),
    [sym_color_value] = ACTIONS(514),
    [sym_string_value] = ACTIONS(514),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(518),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(518),
    [anon_sym_DASH] = ACTIONS(518),
    [anon_sym_SLASH] = ACTIONS(518),
    [sym_identifier] = ACTIONS(518),
    [sym_plain_value] = ACTIONS(518),
    [sym_comment] = ACTIONS(37),
  },
  [132] = {
    [sym_arguments] = STATE(148),
    [sym__descendant_operator] = ACTIONS(87),
    [anon_sym_COMMA] = ACTIONS(87),
    [anon_sym_STAR] = ACTIONS(135),
    [anon_sym_DOT] = ACTIONS(89),
    [anon_sym_COLON] = ACTIONS(89),
    [anon_sym_COLON_COLON] = ACTIONS(87),
    [anon_sym_POUND] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_GT] = ACTIONS(87),
    [anon_sym_TILDE] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(453),
    [anon_sym_RPAREN] = ACTIONS(87),
    [sym_color_value] = ACTIONS(135),
    [sym_string_value] = ACTIONS(135),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(139),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(139),
    [anon_sym_DASH] = ACTIONS(139),
    [anon_sym_SLASH] = ACTIONS(139),
    [sym_identifier] = ACTIONS(139),
    [sym_plain_value] = ACTIONS(139),
    [sym_comment] = ACTIONS(37),
  },
  [133] = {
    [aux_sym_pseudo_class_arguments_repeat2] = STATE(165),
    [sym__descendant_operator] = ACTIONS(99),
    [anon_sym_COMMA] = ACTIONS(520),
    [anon_sym_DOT] = ACTIONS(105),
    [anon_sym_COLON] = ACTIONS(107),
    [anon_sym_COLON_COLON] = ACTIONS(109),
    [anon_sym_POUND] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(113),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_TILDE] = ACTIONS(117),
    [anon_sym_PLUS] = ACTIONS(119),
    [anon_sym_RPAREN] = ACTIONS(522),
    [sym_comment] = ACTIONS(37),
  },
  [134] = {
    [sym__value] = STATE(111),
    [sym_integer_value] = STATE(111),
    [sym_float_value] = STATE(111),
    [sym_call_expression] = STATE(111),
    [sym_binary_expression] = STATE(111),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(152),
    [aux_sym_pseudo_class_arguments_repeat2] = STATE(165),
    [anon_sym_COMMA] = ACTIONS(520),
    [anon_sym_RPAREN] = ACTIONS(522),
    [sym_color_value] = ACTIONS(300),
    [sym_string_value] = ACTIONS(300),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(302),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(304),
    [sym_identifier] = ACTIONS(306),
    [sym_plain_value] = ACTIONS(308),
    [sym_comment] = ACTIONS(37),
  },
  [135] = {
    [anon_sym_STAR] = ACTIONS(167),
    [anon_sym_RBRACK] = ACTIONS(524),
    [anon_sym_PLUS] = ACTIONS(167),
    [anon_sym_DASH] = ACTIONS(167),
    [anon_sym_SLASH] = ACTIONS(169),
    [sym_comment] = ACTIONS(37),
  },
  [136] = {
    [sym__value] = STATE(167),
    [sym_integer_value] = STATE(167),
    [sym_float_value] = STATE(167),
    [sym_call_expression] = STATE(167),
    [sym_binary_expression] = STATE(167),
    [sym_color_value] = ACTIONS(526),
    [sym_string_value] = ACTIONS(526),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(302),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(304),
    [sym_identifier] = ACTIONS(306),
    [sym_plain_value] = ACTIONS(528),
    [sym_comment] = ACTIONS(37),
  },
  [137] = {
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
  [138] = {
    [sym_import_statement] = STATE(138),
    [sym_media_statement] = STATE(138),
    [sym_charset_statement] = STATE(138),
    [sym_namespace_statement] = STATE(138),
    [sym_keyframes_statement] = STATE(138),
    [sym_supports_statement] = STATE(138),
    [sym_at_rule] = STATE(138),
    [sym_rule_set] = STATE(138),
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
    [sym_declaration] = STATE(138),
    [aux_sym_block_repeat1] = STATE(138),
    [anon_sym_ATimport] = ACTIONS(534),
    [anon_sym_ATmedia] = ACTIONS(537),
    [anon_sym_ATcharset] = ACTIONS(540),
    [anon_sym_ATnamespace] = ACTIONS(543),
    [anon_sym_ATkeyframes] = ACTIONS(546),
    [anon_sym_RBRACE] = ACTIONS(549),
    [anon_sym_ATsupports] = ACTIONS(551),
    [sym_nesting_selector] = ACTIONS(554),
    [anon_sym_STAR] = ACTIONS(557),
    [anon_sym_DOT] = ACTIONS(560),
    [anon_sym_COLON] = ACTIONS(563),
    [anon_sym_COLON_COLON] = ACTIONS(566),
    [anon_sym_POUND] = ACTIONS(569),
    [anon_sym_LBRACK] = ACTIONS(572),
    [sym_string_value] = ACTIONS(554),
    [sym_identifier] = ACTIONS(575),
    [sym_at_keyword] = ACTIONS(578),
    [sym_comment] = ACTIONS(37),
  },
  [139] = {
    [anon_sym_COMMA] = ACTIONS(485),
    [anon_sym_SEMI] = ACTIONS(485),
    [anon_sym_LBRACE] = ACTIONS(485),
    [anon_sym_and] = ACTIONS(215),
    [anon_sym_or] = ACTIONS(215),
    [sym_comment] = ACTIONS(37),
  },
  [140] = {
    [ts_builtin_sym_end] = ACTIONS(581),
    [anon_sym_ATimport] = ACTIONS(583),
    [anon_sym_ATmedia] = ACTIONS(583),
    [anon_sym_ATcharset] = ACTIONS(583),
    [anon_sym_ATnamespace] = ACTIONS(583),
    [anon_sym_ATkeyframes] = ACTIONS(583),
    [anon_sym_RBRACE] = ACTIONS(581),
    [anon_sym_ATsupports] = ACTIONS(583),
    [sym_nesting_selector] = ACTIONS(581),
    [anon_sym_STAR] = ACTIONS(581),
    [anon_sym_DOT] = ACTIONS(581),
    [anon_sym_COLON] = ACTIONS(583),
    [anon_sym_COLON_COLON] = ACTIONS(581),
    [anon_sym_POUND] = ACTIONS(581),
    [anon_sym_LBRACK] = ACTIONS(581),
    [sym_string_value] = ACTIONS(581),
    [sym_identifier] = ACTIONS(581),
    [sym_at_keyword] = ACTIONS(583),
    [sym_comment] = ACTIONS(37),
  },
  [141] = {
    [aux_sym_import_statement_repeat1] = STATE(141),
    [anon_sym_COMMA] = ACTIONS(585),
    [anon_sym_SEMI] = ACTIONS(485),
    [anon_sym_LBRACE] = ACTIONS(485),
    [sym_comment] = ACTIONS(37),
  },
  [142] = {
    [sym__descendant_operator] = ACTIONS(588),
    [anon_sym_COMMA] = ACTIONS(588),
    [anon_sym_LBRACE] = ACTIONS(588),
    [anon_sym_DOT] = ACTIONS(588),
    [anon_sym_COLON] = ACTIONS(590),
    [anon_sym_COLON_COLON] = ACTIONS(588),
    [anon_sym_POUND] = ACTIONS(588),
    [anon_sym_LBRACK] = ACTIONS(588),
    [anon_sym_GT] = ACTIONS(588),
    [anon_sym_TILDE] = ACTIONS(588),
    [anon_sym_PLUS] = ACTIONS(588),
    [anon_sym_RPAREN] = ACTIONS(588),
    [sym_comment] = ACTIONS(37),
  },
  [143] = {
    [sym__value] = STATE(168),
    [sym_integer_value] = STATE(168),
    [sym_float_value] = STATE(168),
    [sym_call_expression] = STATE(168),
    [sym_binary_expression] = STATE(168),
    [sym_color_value] = ACTIONS(592),
    [sym_string_value] = ACTIONS(592),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(59),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(61),
    [sym_identifier] = ACTIONS(45),
    [sym_plain_value] = ACTIONS(594),
    [sym_comment] = ACTIONS(37),
  },
  [144] = {
    [sym__descendant_operator] = ACTIONS(596),
    [anon_sym_COMMA] = ACTIONS(596),
    [anon_sym_LBRACE] = ACTIONS(596),
    [anon_sym_DOT] = ACTIONS(596),
    [anon_sym_COLON] = ACTIONS(598),
    [anon_sym_COLON_COLON] = ACTIONS(596),
    [anon_sym_POUND] = ACTIONS(596),
    [anon_sym_LBRACK] = ACTIONS(596),
    [anon_sym_GT] = ACTIONS(596),
    [anon_sym_TILDE] = ACTIONS(596),
    [anon_sym_PLUS] = ACTIONS(596),
    [anon_sym_RPAREN] = ACTIONS(596),
    [sym_comment] = ACTIONS(37),
  },
  [145] = {
    [anon_sym_COMMA] = ACTIONS(290),
    [anon_sym_SEMI] = ACTIONS(290),
    [anon_sym_STAR] = ACTIONS(290),
    [anon_sym_PLUS] = ACTIONS(292),
    [anon_sym_RPAREN] = ACTIONS(290),
    [sym_important] = ACTIONS(290),
    [sym_color_value] = ACTIONS(290),
    [sym_string_value] = ACTIONS(290),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(292),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(292),
    [anon_sym_DASH] = ACTIONS(292),
    [anon_sym_SLASH] = ACTIONS(292),
    [sym_identifier] = ACTIONS(292),
    [sym_plain_value] = ACTIONS(292),
    [sym_comment] = ACTIONS(37),
  },
  [146] = {
    [anon_sym_COMMA] = ACTIONS(294),
    [anon_sym_SEMI] = ACTIONS(294),
    [anon_sym_STAR] = ACTIONS(294),
    [anon_sym_PLUS] = ACTIONS(296),
    [anon_sym_RPAREN] = ACTIONS(294),
    [sym_important] = ACTIONS(294),
    [sym_color_value] = ACTIONS(294),
    [sym_string_value] = ACTIONS(294),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(296),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(296),
    [anon_sym_DASH] = ACTIONS(296),
    [anon_sym_SLASH] = ACTIONS(296),
    [sym_identifier] = ACTIONS(296),
    [sym_plain_value] = ACTIONS(296),
    [sym_comment] = ACTIONS(37),
  },
  [147] = {
    [sym__value] = STATE(111),
    [sym_integer_value] = STATE(111),
    [sym_float_value] = STATE(111),
    [sym_call_expression] = STATE(111),
    [sym_binary_expression] = STATE(111),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(170),
    [anon_sym_RPAREN] = ACTIONS(600),
    [sym_color_value] = ACTIONS(300),
    [sym_string_value] = ACTIONS(300),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(302),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(304),
    [sym_identifier] = ACTIONS(306),
    [sym_plain_value] = ACTIONS(308),
    [sym_comment] = ACTIONS(37),
  },
  [148] = {
    [anon_sym_COMMA] = ACTIONS(310),
    [anon_sym_SEMI] = ACTIONS(310),
    [anon_sym_STAR] = ACTIONS(310),
    [anon_sym_PLUS] = ACTIONS(312),
    [anon_sym_RPAREN] = ACTIONS(310),
    [sym_important] = ACTIONS(310),
    [sym_color_value] = ACTIONS(310),
    [sym_string_value] = ACTIONS(310),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(312),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(312),
    [anon_sym_DASH] = ACTIONS(312),
    [anon_sym_SLASH] = ACTIONS(312),
    [sym_identifier] = ACTIONS(312),
    [sym_plain_value] = ACTIONS(312),
    [sym_comment] = ACTIONS(37),
  },
  [149] = {
    [sym__value] = STATE(171),
    [sym_integer_value] = STATE(171),
    [sym_float_value] = STATE(171),
    [sym_call_expression] = STATE(171),
    [sym_binary_expression] = STATE(171),
    [sym_color_value] = ACTIONS(602),
    [sym_string_value] = ACTIONS(602),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(302),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(304),
    [sym_identifier] = ACTIONS(306),
    [sym_plain_value] = ACTIONS(604),
    [sym_comment] = ACTIONS(37),
  },
  [150] = {
    [sym__value] = STATE(111),
    [sym_integer_value] = STATE(111),
    [sym_float_value] = STATE(111),
    [sym_call_expression] = STATE(111),
    [sym_binary_expression] = STATE(111),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(172),
    [sym_color_value] = ACTIONS(300),
    [sym_string_value] = ACTIONS(300),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(302),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(304),
    [sym_identifier] = ACTIONS(306),
    [sym_plain_value] = ACTIONS(308),
    [sym_comment] = ACTIONS(37),
  },
  [151] = {
    [anon_sym_SEMI] = ACTIONS(606),
    [anon_sym_STAR] = ACTIONS(606),
    [anon_sym_RBRACK] = ACTIONS(606),
    [anon_sym_PLUS] = ACTIONS(606),
    [anon_sym_RPAREN] = ACTIONS(606),
    [anon_sym_LPAREN2] = ACTIONS(606),
    [anon_sym_not] = ACTIONS(608),
    [anon_sym_selector] = ACTIONS(608),
    [anon_sym_DASH] = ACTIONS(608),
    [anon_sym_SLASH] = ACTIONS(608),
    [sym_identifier] = ACTIONS(608),
    [sym_comment] = ACTIONS(37),
  },
  [152] = {
    [sym__value] = STATE(111),
    [sym_integer_value] = STATE(111),
    [sym_float_value] = STATE(111),
    [sym_call_expression] = STATE(111),
    [sym_binary_expression] = STATE(111),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(152),
    [anon_sym_COMMA] = ACTIONS(610),
    [anon_sym_RPAREN] = ACTIONS(610),
    [sym_color_value] = ACTIONS(612),
    [sym_string_value] = ACTIONS(612),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(615),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(618),
    [sym_identifier] = ACTIONS(621),
    [sym_plain_value] = ACTIONS(624),
    [sym_comment] = ACTIONS(37),
  },
  [153] = {
    [aux_sym_arguments_repeat1] = STATE(174),
    [anon_sym_COMMA] = ACTIONS(463),
    [anon_sym_RPAREN] = ACTIONS(627),
    [sym_comment] = ACTIONS(37),
  },
  [154] = {
    [anon_sym_COMMA] = ACTIONS(485),
    [anon_sym_SEMI] = ACTIONS(485),
    [anon_sym_and] = ACTIONS(326),
    [anon_sym_or] = ACTIONS(326),
    [sym_comment] = ACTIONS(37),
  },
  [155] = {
    [ts_builtin_sym_end] = ACTIONS(629),
    [anon_sym_ATimport] = ACTIONS(631),
    [anon_sym_ATmedia] = ACTIONS(631),
    [anon_sym_ATcharset] = ACTIONS(631),
    [anon_sym_ATnamespace] = ACTIONS(631),
    [anon_sym_ATkeyframes] = ACTIONS(631),
    [anon_sym_RBRACE] = ACTIONS(629),
    [anon_sym_ATsupports] = ACTIONS(631),
    [sym_nesting_selector] = ACTIONS(629),
    [anon_sym_STAR] = ACTIONS(629),
    [anon_sym_DOT] = ACTIONS(629),
    [anon_sym_COLON] = ACTIONS(631),
    [anon_sym_COLON_COLON] = ACTIONS(629),
    [anon_sym_POUND] = ACTIONS(629),
    [anon_sym_LBRACK] = ACTIONS(629),
    [sym_string_value] = ACTIONS(629),
    [sym_identifier] = ACTIONS(629),
    [sym_at_keyword] = ACTIONS(631),
    [sym_comment] = ACTIONS(37),
  },
  [156] = {
    [aux_sym_import_statement_repeat1] = STATE(156),
    [anon_sym_COMMA] = ACTIONS(633),
    [anon_sym_SEMI] = ACTIONS(485),
    [sym_comment] = ACTIONS(37),
  },
  [157] = {
    [anon_sym_STAR] = ACTIONS(167),
    [anon_sym_PLUS] = ACTIONS(167),
    [anon_sym_RPAREN] = ACTIONS(636),
    [anon_sym_DASH] = ACTIONS(167),
    [anon_sym_SLASH] = ACTIONS(169),
    [sym_comment] = ACTIONS(37),
  },
  [158] = {
    [anon_sym_COMMA] = ACTIONS(638),
    [anon_sym_SEMI] = ACTIONS(638),
    [anon_sym_LBRACE] = ACTIONS(638),
    [anon_sym_RPAREN] = ACTIONS(638),
    [anon_sym_and] = ACTIONS(638),
    [anon_sym_or] = ACTIONS(638),
    [sym_comment] = ACTIONS(37),
  },
  [159] = {
    [sym_import_statement] = STATE(177),
    [sym_media_statement] = STATE(177),
    [sym_charset_statement] = STATE(177),
    [sym_namespace_statement] = STATE(177),
    [sym_keyframes_statement] = STATE(177),
    [sym_supports_statement] = STATE(177),
    [sym_at_rule] = STATE(177),
    [sym_rule_set] = STATE(177),
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
    [sym_declaration] = STATE(177),
    [aux_sym_block_repeat1] = STATE(177),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATmedia] = ACTIONS(9),
    [anon_sym_ATcharset] = ACTIONS(11),
    [anon_sym_ATnamespace] = ACTIONS(13),
    [anon_sym_ATkeyframes] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(640),
    [anon_sym_ATsupports] = ACTIONS(17),
    [sym_nesting_selector] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_string_value] = ACTIONS(19),
    [sym_identifier] = ACTIONS(209),
    [sym_at_keyword] = ACTIONS(35),
    [sym_comment] = ACTIONS(37),
  },
  [160] = {
    [anon_sym_RBRACE] = ACTIONS(642),
    [sym_from] = ACTIONS(642),
    [sym_to] = ACTIONS(642),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(642),
    [sym_comment] = ACTIONS(37),
  },
  [161] = {
    [ts_builtin_sym_end] = ACTIONS(644),
    [anon_sym_ATimport] = ACTIONS(646),
    [anon_sym_ATmedia] = ACTIONS(646),
    [anon_sym_ATcharset] = ACTIONS(646),
    [anon_sym_ATnamespace] = ACTIONS(646),
    [anon_sym_ATkeyframes] = ACTIONS(646),
    [anon_sym_RBRACE] = ACTIONS(644),
    [anon_sym_ATsupports] = ACTIONS(646),
    [sym_nesting_selector] = ACTIONS(644),
    [anon_sym_STAR] = ACTIONS(644),
    [anon_sym_DOT] = ACTIONS(644),
    [anon_sym_COLON] = ACTIONS(646),
    [anon_sym_COLON_COLON] = ACTIONS(644),
    [anon_sym_POUND] = ACTIONS(644),
    [anon_sym_LBRACK] = ACTIONS(644),
    [sym_string_value] = ACTIONS(644),
    [sym_identifier] = ACTIONS(644),
    [sym_at_keyword] = ACTIONS(646),
    [sym_comment] = ACTIONS(37),
  },
  [162] = {
    [sym_keyframe_block] = STATE(162),
    [sym_integer_value] = STATE(128),
    [aux_sym_keyframe_block_list_repeat1] = STATE(162),
    [anon_sym_RBRACE] = ACTIONS(648),
    [sym_from] = ACTIONS(650),
    [sym_to] = ACTIONS(650),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(653),
    [sym_comment] = ACTIONS(37),
  },
  [163] = {
    [sym__selector] = STATE(178),
    [sym_universal_selector] = STATE(178),
    [sym_class_selector] = STATE(178),
    [sym_pseudo_class_selector] = STATE(178),
    [sym_pseudo_element_selector] = STATE(178),
    [sym_id_selector] = STATE(178),
    [sym_attribute_selector] = STATE(178),
    [sym_child_selector] = STATE(178),
    [sym_descendant_selector] = STATE(178),
    [sym_sibling_selector] = STATE(178),
    [sym_adjacent_sibling_selector] = STATE(178),
    [sym__value] = STATE(111),
    [sym_integer_value] = STATE(111),
    [sym_float_value] = STATE(111),
    [sym_call_expression] = STATE(111),
    [sym_binary_expression] = STATE(111),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(179),
    [sym_nesting_selector] = ACTIONS(656),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(368),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(370),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_color_value] = ACTIONS(300),
    [sym_string_value] = ACTIONS(374),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(302),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(304),
    [sym_identifier] = ACTIONS(376),
    [sym_plain_value] = ACTIONS(308),
    [sym_comment] = ACTIONS(37),
  },
  [164] = {
    [sym__descendant_operator] = ACTIONS(658),
    [anon_sym_COMMA] = ACTIONS(658),
    [anon_sym_LBRACE] = ACTIONS(658),
    [anon_sym_DOT] = ACTIONS(658),
    [anon_sym_COLON] = ACTIONS(660),
    [anon_sym_COLON_COLON] = ACTIONS(658),
    [anon_sym_POUND] = ACTIONS(658),
    [anon_sym_LBRACK] = ACTIONS(658),
    [anon_sym_GT] = ACTIONS(658),
    [anon_sym_TILDE] = ACTIONS(658),
    [anon_sym_PLUS] = ACTIONS(658),
    [anon_sym_RPAREN] = ACTIONS(658),
    [sym_comment] = ACTIONS(37),
  },
  [165] = {
    [aux_sym_pseudo_class_arguments_repeat2] = STATE(181),
    [anon_sym_COMMA] = ACTIONS(520),
    [anon_sym_RPAREN] = ACTIONS(662),
    [sym_comment] = ACTIONS(37),
  },
  [166] = {
    [sym__descendant_operator] = ACTIONS(664),
    [anon_sym_COMMA] = ACTIONS(664),
    [anon_sym_LBRACE] = ACTIONS(664),
    [anon_sym_DOT] = ACTIONS(664),
    [anon_sym_COLON] = ACTIONS(666),
    [anon_sym_COLON_COLON] = ACTIONS(664),
    [anon_sym_POUND] = ACTIONS(664),
    [anon_sym_LBRACK] = ACTIONS(664),
    [anon_sym_GT] = ACTIONS(664),
    [anon_sym_TILDE] = ACTIONS(664),
    [anon_sym_PLUS] = ACTIONS(664),
    [anon_sym_RPAREN] = ACTIONS(664),
    [sym_comment] = ACTIONS(37),
  },
  [167] = {
    [sym__value] = STATE(185),
    [sym_integer_value] = STATE(185),
    [sym_float_value] = STATE(185),
    [sym_call_expression] = STATE(185),
    [sym_binary_expression] = STATE(185),
    [aux_sym_declaration_repeat1] = STATE(186),
    [anon_sym_COMMA] = ACTIONS(668),
    [anon_sym_SEMI] = ACTIONS(670),
    [anon_sym_STAR] = ACTIONS(457),
    [anon_sym_PLUS] = ACTIONS(459),
    [sym_important] = ACTIONS(672),
    [sym_color_value] = ACTIONS(674),
    [sym_string_value] = ACTIONS(674),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(302),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(304),
    [anon_sym_DASH] = ACTIONS(459),
    [anon_sym_SLASH] = ACTIONS(459),
    [sym_identifier] = ACTIONS(306),
    [sym_plain_value] = ACTIONS(676),
    [sym_comment] = ACTIONS(37),
  },
  [168] = {
    [anon_sym_STAR] = ACTIONS(167),
    [anon_sym_RBRACK] = ACTIONS(678),
    [anon_sym_PLUS] = ACTIONS(167),
    [anon_sym_DASH] = ACTIONS(167),
    [anon_sym_SLASH] = ACTIONS(169),
    [sym_comment] = ACTIONS(37),
  },
  [169] = {
    [anon_sym_COMMA] = ACTIONS(445),
    [anon_sym_SEMI] = ACTIONS(445),
    [anon_sym_STAR] = ACTIONS(445),
    [anon_sym_PLUS] = ACTIONS(447),
    [anon_sym_RPAREN] = ACTIONS(445),
    [sym_important] = ACTIONS(445),
    [sym_color_value] = ACTIONS(445),
    [sym_string_value] = ACTIONS(445),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(447),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(447),
    [anon_sym_DASH] = ACTIONS(447),
    [anon_sym_SLASH] = ACTIONS(447),
    [sym_identifier] = ACTIONS(447),
    [sym_plain_value] = ACTIONS(447),
    [sym_comment] = ACTIONS(37),
  },
  [170] = {
    [sym__value] = STATE(111),
    [sym_integer_value] = STATE(111),
    [sym_float_value] = STATE(111),
    [sym_call_expression] = STATE(111),
    [sym_binary_expression] = STATE(111),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(152),
    [aux_sym_arguments_repeat1] = STATE(189),
    [anon_sym_COMMA] = ACTIONS(463),
    [anon_sym_RPAREN] = ACTIONS(680),
    [sym_color_value] = ACTIONS(300),
    [sym_string_value] = ACTIONS(300),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(302),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(304),
    [sym_identifier] = ACTIONS(306),
    [sym_plain_value] = ACTIONS(308),
    [sym_comment] = ACTIONS(37),
  },
  [171] = {
    [anon_sym_COMMA] = ACTIONS(467),
    [anon_sym_SEMI] = ACTIONS(467),
    [anon_sym_STAR] = ACTIONS(467),
    [anon_sym_PLUS] = ACTIONS(469),
    [anon_sym_RPAREN] = ACTIONS(467),
    [sym_important] = ACTIONS(467),
    [sym_color_value] = ACTIONS(467),
    [sym_string_value] = ACTIONS(467),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(469),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(469),
    [anon_sym_DASH] = ACTIONS(469),
    [anon_sym_SLASH] = ACTIONS(469),
    [sym_identifier] = ACTIONS(469),
    [sym_plain_value] = ACTIONS(469),
    [sym_comment] = ACTIONS(37),
  },
  [172] = {
    [sym__value] = STATE(111),
    [sym_integer_value] = STATE(111),
    [sym_float_value] = STATE(111),
    [sym_call_expression] = STATE(111),
    [sym_binary_expression] = STATE(111),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(152),
    [anon_sym_COMMA] = ACTIONS(682),
    [anon_sym_RPAREN] = ACTIONS(682),
    [sym_color_value] = ACTIONS(300),
    [sym_string_value] = ACTIONS(300),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(302),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(304),
    [sym_identifier] = ACTIONS(306),
    [sym_plain_value] = ACTIONS(308),
    [sym_comment] = ACTIONS(37),
  },
  [173] = {
    [anon_sym_SEMI] = ACTIONS(684),
    [anon_sym_STAR] = ACTIONS(684),
    [anon_sym_RBRACK] = ACTIONS(684),
    [anon_sym_PLUS] = ACTIONS(684),
    [anon_sym_RPAREN] = ACTIONS(684),
    [anon_sym_LPAREN2] = ACTIONS(684),
    [anon_sym_not] = ACTIONS(686),
    [anon_sym_selector] = ACTIONS(686),
    [anon_sym_DASH] = ACTIONS(686),
    [anon_sym_SLASH] = ACTIONS(686),
    [sym_identifier] = ACTIONS(686),
    [sym_comment] = ACTIONS(37),
  },
  [174] = {
    [aux_sym_arguments_repeat1] = STATE(174),
    [anon_sym_COMMA] = ACTIONS(688),
    [anon_sym_RPAREN] = ACTIONS(682),
    [sym_comment] = ACTIONS(37),
  },
  [175] = {
    [anon_sym_COMMA] = ACTIONS(691),
    [anon_sym_SEMI] = ACTIONS(691),
    [anon_sym_LBRACE] = ACTIONS(691),
    [anon_sym_RPAREN] = ACTIONS(691),
    [anon_sym_and] = ACTIONS(691),
    [anon_sym_or] = ACTIONS(691),
    [sym_comment] = ACTIONS(37),
  },
  [176] = {
    [anon_sym_RBRACE] = ACTIONS(390),
    [sym_from] = ACTIONS(390),
    [sym_to] = ACTIONS(390),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(390),
    [sym_comment] = ACTIONS(37),
  },
  [177] = {
    [sym_import_statement] = STATE(138),
    [sym_media_statement] = STATE(138),
    [sym_charset_statement] = STATE(138),
    [sym_namespace_statement] = STATE(138),
    [sym_keyframes_statement] = STATE(138),
    [sym_supports_statement] = STATE(138),
    [sym_at_rule] = STATE(138),
    [sym_rule_set] = STATE(138),
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
    [sym_declaration] = STATE(138),
    [aux_sym_block_repeat1] = STATE(138),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATmedia] = ACTIONS(9),
    [anon_sym_ATcharset] = ACTIONS(11),
    [anon_sym_ATnamespace] = ACTIONS(13),
    [anon_sym_ATkeyframes] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(693),
    [anon_sym_ATsupports] = ACTIONS(17),
    [sym_nesting_selector] = ACTIONS(19),
    [anon_sym_STAR] = ACTIONS(21),
    [anon_sym_DOT] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(25),
    [anon_sym_COLON_COLON] = ACTIONS(27),
    [anon_sym_POUND] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [sym_string_value] = ACTIONS(19),
    [sym_identifier] = ACTIONS(209),
    [sym_at_keyword] = ACTIONS(35),
    [sym_comment] = ACTIONS(37),
  },
  [178] = {
    [sym__descendant_operator] = ACTIONS(99),
    [anon_sym_COMMA] = ACTIONS(695),
    [anon_sym_DOT] = ACTIONS(105),
    [anon_sym_COLON] = ACTIONS(107),
    [anon_sym_COLON_COLON] = ACTIONS(109),
    [anon_sym_POUND] = ACTIONS(111),
    [anon_sym_LBRACK] = ACTIONS(113),
    [anon_sym_GT] = ACTIONS(115),
    [anon_sym_TILDE] = ACTIONS(117),
    [anon_sym_PLUS] = ACTIONS(119),
    [anon_sym_RPAREN] = ACTIONS(695),
    [sym_comment] = ACTIONS(37),
  },
  [179] = {
    [sym__value] = STATE(111),
    [sym_integer_value] = STATE(111),
    [sym_float_value] = STATE(111),
    [sym_call_expression] = STATE(111),
    [sym_binary_expression] = STATE(111),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(152),
    [anon_sym_COMMA] = ACTIONS(695),
    [anon_sym_RPAREN] = ACTIONS(695),
    [sym_color_value] = ACTIONS(300),
    [sym_string_value] = ACTIONS(300),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(302),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(304),
    [sym_identifier] = ACTIONS(306),
    [sym_plain_value] = ACTIONS(308),
    [sym_comment] = ACTIONS(37),
  },
  [180] = {
    [sym__descendant_operator] = ACTIONS(697),
    [anon_sym_COMMA] = ACTIONS(697),
    [anon_sym_LBRACE] = ACTIONS(697),
    [anon_sym_DOT] = ACTIONS(697),
    [anon_sym_COLON] = ACTIONS(699),
    [anon_sym_COLON_COLON] = ACTIONS(697),
    [anon_sym_POUND] = ACTIONS(697),
    [anon_sym_LBRACK] = ACTIONS(697),
    [anon_sym_GT] = ACTIONS(697),
    [anon_sym_TILDE] = ACTIONS(697),
    [anon_sym_PLUS] = ACTIONS(697),
    [anon_sym_RPAREN] = ACTIONS(697),
    [sym_comment] = ACTIONS(37),
  },
  [181] = {
    [aux_sym_pseudo_class_arguments_repeat2] = STATE(181),
    [anon_sym_COMMA] = ACTIONS(701),
    [anon_sym_RPAREN] = ACTIONS(695),
    [sym_comment] = ACTIONS(37),
  },
  [182] = {
    [sym__value] = STATE(191),
    [sym_integer_value] = STATE(191),
    [sym_float_value] = STATE(191),
    [sym_call_expression] = STATE(191),
    [sym_binary_expression] = STATE(191),
    [sym_color_value] = ACTIONS(704),
    [sym_string_value] = ACTIONS(704),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(302),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(304),
    [sym_identifier] = ACTIONS(306),
    [sym_plain_value] = ACTIONS(706),
    [sym_comment] = ACTIONS(37),
  },
  [183] = {
    [anon_sym_ATimport] = ACTIONS(708),
    [anon_sym_ATmedia] = ACTIONS(708),
    [anon_sym_ATcharset] = ACTIONS(708),
    [anon_sym_ATnamespace] = ACTIONS(708),
    [anon_sym_ATkeyframes] = ACTIONS(708),
    [anon_sym_RBRACE] = ACTIONS(710),
    [anon_sym_ATsupports] = ACTIONS(708),
    [sym_nesting_selector] = ACTIONS(710),
    [anon_sym_STAR] = ACTIONS(710),
    [anon_sym_DOT] = ACTIONS(710),
    [anon_sym_COLON] = ACTIONS(708),
    [anon_sym_COLON_COLON] = ACTIONS(710),
    [anon_sym_POUND] = ACTIONS(710),
    [anon_sym_LBRACK] = ACTIONS(710),
    [sym_string_value] = ACTIONS(710),
    [sym_identifier] = ACTIONS(710),
    [sym_at_keyword] = ACTIONS(708),
    [sym_comment] = ACTIONS(37),
  },
  [184] = {
    [anon_sym_SEMI] = ACTIONS(712),
    [sym_comment] = ACTIONS(37),
  },
  [185] = {
    [anon_sym_COMMA] = ACTIONS(714),
    [anon_sym_SEMI] = ACTIONS(714),
    [anon_sym_STAR] = ACTIONS(457),
    [anon_sym_PLUS] = ACTIONS(459),
    [sym_important] = ACTIONS(714),
    [sym_color_value] = ACTIONS(714),
    [sym_string_value] = ACTIONS(714),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(716),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(716),
    [anon_sym_DASH] = ACTIONS(459),
    [anon_sym_SLASH] = ACTIONS(459),
    [sym_identifier] = ACTIONS(716),
    [sym_plain_value] = ACTIONS(716),
    [sym_comment] = ACTIONS(37),
  },
  [186] = {
    [sym__value] = STATE(185),
    [sym_integer_value] = STATE(185),
    [sym_float_value] = STATE(185),
    [sym_call_expression] = STATE(185),
    [sym_binary_expression] = STATE(185),
    [aux_sym_declaration_repeat1] = STATE(194),
    [anon_sym_COMMA] = ACTIONS(668),
    [anon_sym_SEMI] = ACTIONS(712),
    [sym_important] = ACTIONS(718),
    [sym_color_value] = ACTIONS(674),
    [sym_string_value] = ACTIONS(674),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(302),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(304),
    [sym_identifier] = ACTIONS(306),
    [sym_plain_value] = ACTIONS(676),
    [sym_comment] = ACTIONS(37),
  },
  [187] = {
    [sym__descendant_operator] = ACTIONS(720),
    [anon_sym_COMMA] = ACTIONS(720),
    [anon_sym_LBRACE] = ACTIONS(720),
    [anon_sym_DOT] = ACTIONS(720),
    [anon_sym_COLON] = ACTIONS(722),
    [anon_sym_COLON_COLON] = ACTIONS(720),
    [anon_sym_POUND] = ACTIONS(720),
    [anon_sym_LBRACK] = ACTIONS(720),
    [anon_sym_GT] = ACTIONS(720),
    [anon_sym_TILDE] = ACTIONS(720),
    [anon_sym_PLUS] = ACTIONS(720),
    [anon_sym_RPAREN] = ACTIONS(720),
    [sym_comment] = ACTIONS(37),
  },
  [188] = {
    [anon_sym_COMMA] = ACTIONS(606),
    [anon_sym_SEMI] = ACTIONS(606),
    [anon_sym_STAR] = ACTIONS(606),
    [anon_sym_PLUS] = ACTIONS(608),
    [anon_sym_RPAREN] = ACTIONS(606),
    [sym_important] = ACTIONS(606),
    [sym_color_value] = ACTIONS(606),
    [sym_string_value] = ACTIONS(606),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(608),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(608),
    [anon_sym_DASH] = ACTIONS(608),
    [anon_sym_SLASH] = ACTIONS(608),
    [sym_identifier] = ACTIONS(608),
    [sym_plain_value] = ACTIONS(608),
    [sym_comment] = ACTIONS(37),
  },
  [189] = {
    [aux_sym_arguments_repeat1] = STATE(174),
    [anon_sym_COMMA] = ACTIONS(463),
    [anon_sym_RPAREN] = ACTIONS(724),
    [sym_comment] = ACTIONS(37),
  },
  [190] = {
    [anon_sym_RBRACE] = ACTIONS(530),
    [sym_from] = ACTIONS(530),
    [sym_to] = ACTIONS(530),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(530),
    [sym_comment] = ACTIONS(37),
  },
  [191] = {
    [anon_sym_COMMA] = ACTIONS(726),
    [anon_sym_SEMI] = ACTIONS(726),
    [anon_sym_STAR] = ACTIONS(457),
    [anon_sym_PLUS] = ACTIONS(459),
    [sym_important] = ACTIONS(726),
    [sym_color_value] = ACTIONS(726),
    [sym_string_value] = ACTIONS(726),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(728),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(728),
    [anon_sym_DASH] = ACTIONS(459),
    [anon_sym_SLASH] = ACTIONS(459),
    [sym_identifier] = ACTIONS(728),
    [sym_plain_value] = ACTIONS(728),
    [sym_comment] = ACTIONS(37),
  },
  [192] = {
    [anon_sym_ATimport] = ACTIONS(730),
    [anon_sym_ATmedia] = ACTIONS(730),
    [anon_sym_ATcharset] = ACTIONS(730),
    [anon_sym_ATnamespace] = ACTIONS(730),
    [anon_sym_ATkeyframes] = ACTIONS(730),
    [anon_sym_RBRACE] = ACTIONS(732),
    [anon_sym_ATsupports] = ACTIONS(730),
    [sym_nesting_selector] = ACTIONS(732),
    [anon_sym_STAR] = ACTIONS(732),
    [anon_sym_DOT] = ACTIONS(732),
    [anon_sym_COLON] = ACTIONS(730),
    [anon_sym_COLON_COLON] = ACTIONS(732),
    [anon_sym_POUND] = ACTIONS(732),
    [anon_sym_LBRACK] = ACTIONS(732),
    [sym_string_value] = ACTIONS(732),
    [sym_identifier] = ACTIONS(732),
    [sym_at_keyword] = ACTIONS(730),
    [sym_comment] = ACTIONS(37),
  },
  [193] = {
    [anon_sym_SEMI] = ACTIONS(734),
    [sym_comment] = ACTIONS(37),
  },
  [194] = {
    [sym__value] = STATE(185),
    [sym_integer_value] = STATE(185),
    [sym_float_value] = STATE(185),
    [sym_call_expression] = STATE(185),
    [sym_binary_expression] = STATE(185),
    [aux_sym_declaration_repeat1] = STATE(194),
    [anon_sym_COMMA] = ACTIONS(736),
    [anon_sym_SEMI] = ACTIONS(726),
    [sym_important] = ACTIONS(726),
    [sym_color_value] = ACTIONS(739),
    [sym_string_value] = ACTIONS(739),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(742),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(745),
    [sym_identifier] = ACTIONS(748),
    [sym_plain_value] = ACTIONS(751),
    [sym_comment] = ACTIONS(37),
  },
  [195] = {
    [anon_sym_COMMA] = ACTIONS(684),
    [anon_sym_SEMI] = ACTIONS(684),
    [anon_sym_STAR] = ACTIONS(684),
    [anon_sym_PLUS] = ACTIONS(686),
    [anon_sym_RPAREN] = ACTIONS(684),
    [sym_important] = ACTIONS(684),
    [sym_color_value] = ACTIONS(684),
    [sym_string_value] = ACTIONS(684),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(686),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(686),
    [anon_sym_DASH] = ACTIONS(686),
    [anon_sym_SLASH] = ACTIONS(686),
    [sym_identifier] = ACTIONS(686),
    [sym_plain_value] = ACTIONS(686),
    [sym_comment] = ACTIONS(37),
  },
  [196] = {
    [anon_sym_ATimport] = ACTIONS(754),
    [anon_sym_ATmedia] = ACTIONS(754),
    [anon_sym_ATcharset] = ACTIONS(754),
    [anon_sym_ATnamespace] = ACTIONS(754),
    [anon_sym_ATkeyframes] = ACTIONS(754),
    [anon_sym_RBRACE] = ACTIONS(756),
    [anon_sym_ATsupports] = ACTIONS(754),
    [sym_nesting_selector] = ACTIONS(756),
    [anon_sym_STAR] = ACTIONS(756),
    [anon_sym_DOT] = ACTIONS(756),
    [anon_sym_COLON] = ACTIONS(754),
    [anon_sym_COLON_COLON] = ACTIONS(756),
    [anon_sym_POUND] = ACTIONS(756),
    [anon_sym_LBRACK] = ACTIONS(756),
    [sym_string_value] = ACTIONS(756),
    [sym_identifier] = ACTIONS(756),
    [sym_at_keyword] = ACTIONS(754),
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
  [39] = {.count = 1, .reusable = true}, SHIFT(23),
  [41] = {.count = 1, .reusable = false}, SHIFT(20),
  [43] = {.count = 1, .reusable = false}, SHIFT(21),
  [45] = {.count = 1, .reusable = false}, SHIFT(22),
  [47] = {.count = 1, .reusable = false}, SHIFT(23),
  [49] = {.count = 1, .reusable = true}, SHIFT(24),
  [51] = {.count = 1, .reusable = false}, SHIFT(25),
  [53] = {.count = 1, .reusable = false}, SHIFT(26),
  [55] = {.count = 1, .reusable = false}, SHIFT(27),
  [57] = {.count = 1, .reusable = true}, SHIFT(31),
  [59] = {.count = 1, .reusable = false}, SHIFT(29),
  [61] = {.count = 1, .reusable = false}, SHIFT(30),
  [63] = {.count = 1, .reusable = false}, SHIFT(31),
  [65] = {.count = 1, .reusable = true}, SHIFT(32),
  [67] = {.count = 1, .reusable = true}, SHIFT(33),
  [69] = {.count = 1, .reusable = true}, SHIFT(34),
  [71] = {.count = 1, .reusable = false}, SHIFT(35),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym_universal_selector, 1),
  [75] = {.count = 1, .reusable = false}, REDUCE(sym_universal_selector, 1),
  [77] = {.count = 1, .reusable = true}, SHIFT(37),
  [79] = {.count = 1, .reusable = true}, SHIFT(38),
  [81] = {.count = 1, .reusable = true}, SHIFT(39),
  [83] = {.count = 1, .reusable = true}, SHIFT(40),
  [85] = {.count = 1, .reusable = true}, SHIFT(41),
  [87] = {.count = 1, .reusable = true}, REDUCE(sym__selector, 1, .alias_sequence_id = 1),
  [89] = {.count = 1, .reusable = false}, REDUCE(sym__selector, 1, .alias_sequence_id = 1),
  [91] = {.count = 1, .reusable = true}, SHIFT(42),
  [93] = {.count = 1, .reusable = true}, SHIFT(43),
  [95] = {.count = 1, .reusable = false}, SHIFT(44),
  [97] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [99] = {.count = 1, .reusable = true}, SHIFT(47),
  [101] = {.count = 1, .reusable = true}, SHIFT(48),
  [103] = {.count = 1, .reusable = true}, REDUCE(sym_selectors, 1),
  [105] = {.count = 1, .reusable = true}, SHIFT(49),
  [107] = {.count = 1, .reusable = false}, SHIFT(50),
  [109] = {.count = 1, .reusable = true}, SHIFT(51),
  [111] = {.count = 1, .reusable = true}, SHIFT(52),
  [113] = {.count = 1, .reusable = true}, SHIFT(53),
  [115] = {.count = 1, .reusable = true}, SHIFT(54),
  [117] = {.count = 1, .reusable = true}, SHIFT(55),
  [119] = {.count = 1, .reusable = true}, SHIFT(56),
  [121] = {.count = 1, .reusable = true}, REDUCE(sym_stylesheet, 1),
  [123] = {.count = 1, .reusable = true}, REDUCE(sym_integer_value, 1),
  [125] = {.count = 1, .reusable = false}, REDUCE(sym_integer_value, 1),
  [127] = {.count = 1, .reusable = false}, SHIFT(59),
  [129] = {.count = 1, .reusable = true}, REDUCE(sym_float_value, 1),
  [131] = {.count = 1, .reusable = false}, REDUCE(sym_float_value, 1),
  [133] = {.count = 1, .reusable = false}, SHIFT(60),
  [135] = {.count = 1, .reusable = true}, REDUCE(sym__value, 1, .alias_sequence_id = 2),
  [137] = {.count = 1, .reusable = true}, SHIFT(61),
  [139] = {.count = 1, .reusable = false}, REDUCE(sym__value, 1, .alias_sequence_id = 2),
  [141] = {.count = 1, .reusable = true}, SHIFT(63),
  [143] = {.count = 1, .reusable = true}, SHIFT(64),
  [145] = {.count = 1, .reusable = false}, SHIFT(65),
  [147] = {.count = 1, .reusable = false}, SHIFT(64),
  [149] = {.count = 1, .reusable = false}, SHIFT(67),
  [151] = {.count = 1, .reusable = false}, SHIFT(68),
  [153] = {.count = 1, .reusable = true}, SHIFT(71),
  [155] = {.count = 1, .reusable = true}, REDUCE(sym__query, 1, .alias_sequence_id = 3),
  [157] = {.count = 1, .reusable = true}, SHIFT(72),
  [159] = {.count = 1, .reusable = true}, SHIFT(73),
  [161] = {.count = 1, .reusable = true}, SHIFT(59),
  [163] = {.count = 1, .reusable = true}, SHIFT(60),
  [165] = {.count = 1, .reusable = true}, SHIFT(76),
  [167] = {.count = 1, .reusable = true}, SHIFT(77),
  [169] = {.count = 1, .reusable = false}, SHIFT(77),
  [171] = {.count = 1, .reusable = true}, SHIFT(78),
  [173] = {.count = 1, .reusable = true}, SHIFT(79),
  [175] = {.count = 1, .reusable = true}, SHIFT(80),
  [177] = {.count = 1, .reusable = true}, SHIFT(81),
  [179] = {.count = 1, .reusable = true}, SHIFT(83),
  [181] = {.count = 1, .reusable = true}, REDUCE(sym_class_selector, 2, .alias_sequence_id = 4),
  [183] = {.count = 1, .reusable = false}, REDUCE(sym_class_selector, 2, .alias_sequence_id = 4),
  [185] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_selector, 2, .alias_sequence_id = 4),
  [187] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_selector, 2, .alias_sequence_id = 4),
  [189] = {.count = 1, .reusable = true}, SHIFT(85),
  [191] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_element_selector, 2, .alias_sequence_id = 5),
  [193] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_element_selector, 2, .alias_sequence_id = 5),
  [195] = {.count = 1, .reusable = true}, REDUCE(sym_id_selector, 2, .alias_sequence_id = 6),
  [197] = {.count = 1, .reusable = false}, REDUCE(sym_id_selector, 2, .alias_sequence_id = 6),
  [199] = {.count = 1, .reusable = true}, SHIFT(87),
  [201] = {.count = 1, .reusable = true}, SHIFT(88),
  [203] = {.count = 1, .reusable = true}, REDUCE(sym_at_rule, 2),
  [205] = {.count = 1, .reusable = false}, REDUCE(sym_at_rule, 2),
  [207] = {.count = 1, .reusable = true}, SHIFT(89),
  [209] = {.count = 1, .reusable = true}, SHIFT(90),
  [211] = {.count = 1, .reusable = true}, SHIFT(92),
  [213] = {.count = 1, .reusable = true}, SHIFT(93),
  [215] = {.count = 1, .reusable = true}, SHIFT(94),
  [217] = {.count = 1, .reusable = true}, REDUCE(sym_rule_set, 2),
  [219] = {.count = 1, .reusable = false}, REDUCE(sym_rule_set, 2),
  [221] = {.count = 1, .reusable = true}, SHIFT(96),
  [223] = {.count = 1, .reusable = true}, SHIFT(97),
  [225] = {.count = 1, .reusable = true}, SHIFT(98),
  [227] = {.count = 1, .reusable = true}, SHIFT(99),
  [229] = {.count = 1, .reusable = true}, SHIFT(100),
  [231] = {.count = 1, .reusable = true}, SHIFT(101),
  [233] = {.count = 1, .reusable = true}, SHIFT(102),
  [235] = {.count = 1, .reusable = true}, SHIFT(103),
  [237] = {.count = 1, .reusable = true}, SHIFT(104),
  [239] = {.count = 1, .reusable = true}, SHIFT(105),
  [241] = {.count = 1, .reusable = true}, REDUCE(sym_selectors, 2),
  [243] = {.count = 1, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2),
  [245] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(2),
  [248] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(3),
  [251] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(4),
  [254] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(5),
  [257] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(6),
  [260] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(7),
  [263] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(18),
  [266] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(8),
  [269] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(9),
  [272] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(10),
  [275] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(11),
  [278] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(12),
  [281] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(13),
  [284] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(14),
  [287] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(15),
  [290] = {.count = 1, .reusable = true}, REDUCE(sym_integer_value, 2),
  [292] = {.count = 1, .reusable = false}, REDUCE(sym_integer_value, 2),
  [294] = {.count = 1, .reusable = true}, REDUCE(sym_float_value, 2),
  [296] = {.count = 1, .reusable = false}, REDUCE(sym_float_value, 2),
  [298] = {.count = 1, .reusable = true}, SHIFT(107),
  [300] = {.count = 1, .reusable = true}, SHIFT(111),
  [302] = {.count = 1, .reusable = false}, SHIFT(108),
  [304] = {.count = 1, .reusable = false}, SHIFT(109),
  [306] = {.count = 1, .reusable = false}, SHIFT(110),
  [308] = {.count = 1, .reusable = false}, SHIFT(111),
  [310] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 2, .alias_sequence_id = 7),
  [312] = {.count = 1, .reusable = false}, REDUCE(sym_call_expression, 2, .alias_sequence_id = 7),
  [314] = {.count = 1, .reusable = true}, REDUCE(sym_import_statement, 3),
  [316] = {.count = 1, .reusable = false}, REDUCE(sym_import_statement, 3),
  [318] = {.count = 1, .reusable = true}, SHIFT(113),
  [320] = {.count = 1, .reusable = false}, SHIFT(113),
  [322] = {.count = 1, .reusable = true}, SHIFT(114),
  [324] = {.count = 1, .reusable = true}, SHIFT(115),
  [326] = {.count = 1, .reusable = true}, SHIFT(116),
  [328] = {.count = 1, .reusable = true}, SHIFT(118),
  [330] = {.count = 1, .reusable = true}, SHIFT(119),
  [332] = {.count = 1, .reusable = true}, SHIFT(120),
  [334] = {.count = 1, .reusable = true}, REDUCE(sym_negated_query, 2),
  [336] = {.count = 1, .reusable = true}, SHIFT(121),
  [338] = {.count = 1, .reusable = true}, REDUCE(sym_media_statement, 3),
  [340] = {.count = 1, .reusable = false}, REDUCE(sym_media_statement, 3),
  [342] = {.count = 1, .reusable = true}, REDUCE(sym_charset_statement, 3),
  [344] = {.count = 1, .reusable = false}, REDUCE(sym_charset_statement, 3),
  [346] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_statement, 3),
  [348] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_statement, 3),
  [350] = {.count = 1, .reusable = true}, SHIFT(126),
  [352] = {.count = 1, .reusable = true}, SHIFT(127),
  [354] = {.count = 1, .reusable = true}, SHIFT(128),
  [356] = {.count = 1, .reusable = true}, SHIFT(29),
  [358] = {.count = 1, .reusable = true}, REDUCE(sym_keyframes_statement, 3, .alias_sequence_id = 8),
  [360] = {.count = 1, .reusable = false}, REDUCE(sym_keyframes_statement, 3, .alias_sequence_id = 8),
  [362] = {.count = 1, .reusable = true}, REDUCE(sym_supports_statement, 3),
  [364] = {.count = 1, .reusable = false}, REDUCE(sym_supports_statement, 3),
  [366] = {.count = 1, .reusable = true}, SHIFT(133),
  [368] = {.count = 1, .reusable = false}, SHIFT(9),
  [370] = {.count = 1, .reusable = false}, SHIFT(12),
  [372] = {.count = 1, .reusable = true}, SHIFT(130),
  [374] = {.count = 1, .reusable = true}, SHIFT(131),
  [376] = {.count = 1, .reusable = false}, SHIFT(132),
  [378] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_selector, 3, .alias_sequence_id = 4),
  [380] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_selector, 3, .alias_sequence_id = 4),
  [382] = {.count = 1, .reusable = true}, SHIFT(135),
  [384] = {.count = 1, .reusable = false}, SHIFT(135),
  [386] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_selector, 3, .alias_sequence_id = 9),
  [388] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_selector, 3, .alias_sequence_id = 9),
  [390] = {.count = 1, .reusable = true}, REDUCE(sym_block, 2),
  [392] = {.count = 1, .reusable = false}, REDUCE(sym_block, 2),
  [394] = {.count = 1, .reusable = false}, SHIFT(136),
  [396] = {.count = 1, .reusable = true}, SHIFT(137),
  [398] = {.count = 1, .reusable = true}, REDUCE(sym_at_rule, 3),
  [400] = {.count = 1, .reusable = false}, REDUCE(sym_at_rule, 3),
  [402] = {.count = 1, .reusable = true}, SHIFT(140),
  [404] = {.count = 1, .reusable = true}, REDUCE(sym_descendant_selector, 3),
  [406] = {.count = 1, .reusable = false}, REDUCE(sym_descendant_selector, 3),
  [408] = {.count = 1, .reusable = true}, REDUCE(aux_sym_selectors_repeat1, 2),
  [410] = {.count = 1, .reusable = true}, REDUCE(sym_class_selector, 3, .alias_sequence_id = 10),
  [412] = {.count = 1, .reusable = false}, REDUCE(sym_class_selector, 3, .alias_sequence_id = 10),
  [414] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_selector, 3, .alias_sequence_id = 10),
  [416] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_selector, 3, .alias_sequence_id = 10),
  [418] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_element_selector, 3, .alias_sequence_id = 11),
  [420] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_element_selector, 3, .alias_sequence_id = 11),
  [422] = {.count = 1, .reusable = true}, REDUCE(sym_id_selector, 3, .alias_sequence_id = 12),
  [424] = {.count = 1, .reusable = false}, REDUCE(sym_id_selector, 3, .alias_sequence_id = 12),
  [426] = {.count = 1, .reusable = true}, SHIFT(143),
  [428] = {.count = 1, .reusable = true}, SHIFT(144),
  [430] = {.count = 1, .reusable = true}, REDUCE(sym_child_selector, 3),
  [432] = {.count = 1, .reusable = false}, REDUCE(sym_child_selector, 3),
  [434] = {.count = 1, .reusable = true}, REDUCE(sym_sibling_selector, 3),
  [436] = {.count = 1, .reusable = false}, REDUCE(sym_sibling_selector, 3),
  [438] = {.count = 1, .reusable = true}, REDUCE(sym_adjacent_sibling_selector, 3),
  [440] = {.count = 1, .reusable = false}, REDUCE(sym_adjacent_sibling_selector, 3),
  [442] = {.count = 2, .reusable = true}, REDUCE(aux_sym_selectors_repeat1, 2), SHIFT_REPEAT(48),
  [445] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 2),
  [447] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 2),
  [449] = {.count = 1, .reusable = false}, SHIFT(145),
  [451] = {.count = 1, .reusable = false}, SHIFT(146),
  [453] = {.count = 1, .reusable = true}, SHIFT(147),
  [455] = {.count = 1, .reusable = true}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 1),
  [457] = {.count = 1, .reusable = true}, SHIFT(149),
  [459] = {.count = 1, .reusable = false}, SHIFT(149),
  [461] = {.count = 1, .reusable = false}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 1),
  [463] = {.count = 1, .reusable = true}, SHIFT(150),
  [465] = {.count = 1, .reusable = true}, SHIFT(151),
  [467] = {.count = 1, .reusable = true}, REDUCE(sym_binary_expression, 3),
  [469] = {.count = 1, .reusable = false}, REDUCE(sym_binary_expression, 3),
  [471] = {.count = 1, .reusable = true}, REDUCE(sym_import_statement, 4),
  [473] = {.count = 1, .reusable = false}, REDUCE(sym_import_statement, 4),
  [475] = {.count = 1, .reusable = true}, SHIFT(155),
  [477] = {.count = 1, .reusable = true}, SHIFT(157),
  [479] = {.count = 1, .reusable = false}, SHIFT(157),
  [481] = {.count = 1, .reusable = true}, REDUCE(sym_parenthesized_query, 3),
  [483] = {.count = 1, .reusable = true}, SHIFT(158),
  [485] = {.count = 1, .reusable = true}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [487] = {.count = 1, .reusable = true}, REDUCE(sym_binary_query, 3),
  [489] = {.count = 1, .reusable = true}, REDUCE(sym_media_statement, 4),
  [491] = {.count = 1, .reusable = false}, REDUCE(sym_media_statement, 4),
  [493] = {.count = 2, .reusable = true}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(72),
  [496] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_statement, 4, .alias_sequence_id = 13),
  [498] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_statement, 4, .alias_sequence_id = 13),
  [500] = {.count = 1, .reusable = true}, REDUCE(sym_keyframe_block_list, 2),
  [502] = {.count = 1, .reusable = false}, REDUCE(sym_keyframe_block_list, 2),
  [504] = {.count = 1, .reusable = true}, SHIFT(159),
  [506] = {.count = 1, .reusable = true}, SHIFT(161),
  [508] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_arguments, 2),
  [510] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_arguments, 2),
  [512] = {.count = 1, .reusable = true}, REDUCE(sym__selector, 1),
  [514] = {.count = 1, .reusable = true}, REDUCE(sym__value, 1),
  [516] = {.count = 1, .reusable = false}, REDUCE(sym__selector, 1),
  [518] = {.count = 1, .reusable = false}, REDUCE(sym__value, 1),
  [520] = {.count = 1, .reusable = true}, SHIFT(163),
  [522] = {.count = 1, .reusable = true}, SHIFT(164),
  [524] = {.count = 1, .reusable = true}, SHIFT(166),
  [526] = {.count = 1, .reusable = true}, SHIFT(167),
  [528] = {.count = 1, .reusable = false}, SHIFT(167),
  [530] = {.count = 1, .reusable = true}, REDUCE(sym_block, 3),
  [532] = {.count = 1, .reusable = false}, REDUCE(sym_block, 3),
  [534] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(2),
  [537] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(3),
  [540] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(4),
  [543] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(5),
  [546] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(6),
  [549] = {.count = 1, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2),
  [551] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(7),
  [554] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(18),
  [557] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(8),
  [560] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(9),
  [563] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(10),
  [566] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(11),
  [569] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(12),
  [572] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(13),
  [575] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(90),
  [578] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(15),
  [581] = {.count = 1, .reusable = true}, REDUCE(sym_at_rule, 4),
  [583] = {.count = 1, .reusable = false}, REDUCE(sym_at_rule, 4),
  [585] = {.count = 2, .reusable = true}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(92),
  [588] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_selector, 4, .alias_sequence_id = 10),
  [590] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_selector, 4, .alias_sequence_id = 10),
  [592] = {.count = 1, .reusable = true}, SHIFT(168),
  [594] = {.count = 1, .reusable = false}, SHIFT(168),
  [596] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_selector, 4, .alias_sequence_id = 14),
  [598] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_selector, 4, .alias_sequence_id = 14),
  [600] = {.count = 1, .reusable = true}, SHIFT(169),
  [602] = {.count = 1, .reusable = true}, SHIFT(171),
  [604] = {.count = 1, .reusable = false}, SHIFT(171),
  [606] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 3),
  [608] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 3),
  [610] = {.count = 1, .reusable = true}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2),
  [612] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(111),
  [615] = {.count = 2, .reusable = false}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(108),
  [618] = {.count = 2, .reusable = false}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(109),
  [621] = {.count = 2, .reusable = false}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(110),
  [624] = {.count = 2, .reusable = false}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(111),
  [627] = {.count = 1, .reusable = true}, SHIFT(173),
  [629] = {.count = 1, .reusable = true}, REDUCE(sym_import_statement, 5),
  [631] = {.count = 1, .reusable = false}, REDUCE(sym_import_statement, 5),
  [633] = {.count = 2, .reusable = true}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(114),
  [636] = {.count = 1, .reusable = true}, SHIFT(175),
  [638] = {.count = 1, .reusable = true}, REDUCE(sym_selector_query, 4),
  [640] = {.count = 1, .reusable = true}, SHIFT(176),
  [642] = {.count = 1, .reusable = true}, REDUCE(sym_keyframe_block, 2),
  [644] = {.count = 1, .reusable = true}, REDUCE(sym_keyframe_block_list, 3),
  [646] = {.count = 1, .reusable = false}, REDUCE(sym_keyframe_block_list, 3),
  [648] = {.count = 1, .reusable = true}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2),
  [650] = {.count = 2, .reusable = true}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(128),
  [653] = {.count = 2, .reusable = true}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(29),
  [656] = {.count = 1, .reusable = true}, SHIFT(178),
  [658] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_arguments, 3),
  [660] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_arguments, 3),
  [662] = {.count = 1, .reusable = true}, SHIFT(180),
  [664] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_selector, 5, .alias_sequence_id = 9),
  [666] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_selector, 5, .alias_sequence_id = 9),
  [668] = {.count = 1, .reusable = true}, SHIFT(182),
  [670] = {.count = 1, .reusable = true}, SHIFT(183),
  [672] = {.count = 1, .reusable = true}, SHIFT(184),
  [674] = {.count = 1, .reusable = true}, SHIFT(185),
  [676] = {.count = 1, .reusable = false}, SHIFT(185),
  [678] = {.count = 1, .reusable = true}, SHIFT(187),
  [680] = {.count = 1, .reusable = true}, SHIFT(188),
  [682] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2),
  [684] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 4),
  [686] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 4),
  [688] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(150),
  [691] = {.count = 1, .reusable = true}, REDUCE(sym_feature_query, 5, .alias_sequence_id = 15),
  [693] = {.count = 1, .reusable = true}, SHIFT(190),
  [695] = {.count = 1, .reusable = true}, REDUCE(aux_sym_pseudo_class_arguments_repeat2, 2),
  [697] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_arguments, 4),
  [699] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_arguments, 4),
  [701] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pseudo_class_arguments_repeat2, 2), SHIFT_REPEAT(163),
  [704] = {.count = 1, .reusable = true}, SHIFT(191),
  [706] = {.count = 1, .reusable = false}, SHIFT(191),
  [708] = {.count = 1, .reusable = false}, REDUCE(sym_declaration, 4, .alias_sequence_id = 16),
  [710] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 4, .alias_sequence_id = 16),
  [712] = {.count = 1, .reusable = true}, SHIFT(192),
  [714] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 1),
  [716] = {.count = 1, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 1),
  [718] = {.count = 1, .reusable = true}, SHIFT(193),
  [720] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_selector, 6, .alias_sequence_id = 14),
  [722] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_selector, 6, .alias_sequence_id = 14),
  [724] = {.count = 1, .reusable = true}, SHIFT(195),
  [726] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2),
  [728] = {.count = 1, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2),
  [730] = {.count = 1, .reusable = false}, REDUCE(sym_declaration, 5, .alias_sequence_id = 16),
  [732] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 5, .alias_sequence_id = 16),
  [734] = {.count = 1, .reusable = true}, SHIFT(196),
  [736] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(182),
  [739] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(185),
  [742] = {.count = 2, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(108),
  [745] = {.count = 2, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(109),
  [748] = {.count = 2, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(110),
  [751] = {.count = 2, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(185),
  [754] = {.count = 1, .reusable = false}, REDUCE(sym_declaration, 6, .alias_sequence_id = 16),
  [756] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 6, .alias_sequence_id = 16),
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
