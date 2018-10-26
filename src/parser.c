#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 190
#define SYMBOL_COUNT 95
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
  sym_important = 31,
  anon_sym_LPAREN = 32,
  anon_sym_RPAREN = 33,
  anon_sym_and = 34,
  anon_sym_or = 35,
  anon_sym_not = 36,
  anon_sym_selector = 37,
  sym_color_value = 38,
  sym_string_value = 39,
  aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH = 40,
  aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH = 41,
  sym_unit = 42,
  anon_sym_DASH = 43,
  anon_sym_SLASH = 44,
  anon_sym_LPAREN2 = 45,
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
  sym_declaration = 74,
  sym__query = 75,
  sym_feature_query = 76,
  sym_parenthesized_query = 77,
  sym_binary_query = 78,
  sym_negated_query = 79,
  sym_selector_query = 80,
  sym__value = 81,
  sym_integer_value = 82,
  sym_float_value = 83,
  sym_call_expression = 84,
  sym_binary_expression = 85,
  sym_arguments = 86,
  aux_sym_stylesheet_repeat1 = 87,
  aux_sym_import_statement_repeat1 = 88,
  aux_sym_keyframe_block_list_repeat1 = 89,
  aux_sym_selectors_repeat1 = 90,
  aux_sym_block_repeat1 = 91,
  aux_sym_declaration_repeat1 = 92,
  aux_sym_arguments_repeat1 = 93,
  aux_sym_arguments_repeat2 = 94,
  alias_sym_attribute_name = 95,
  alias_sym_class_name = 96,
  alias_sym_feature_name = 97,
  alias_sym_function_name = 98,
  alias_sym_id_name = 99,
  alias_sym_keyframes_name = 100,
  alias_sym_keyword_query = 101,
  alias_sym_namespace_name = 102,
  alias_sym_plain_value = 103,
  alias_sym_property_name = 104,
  alias_sym_tag_name = 105,
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
  [sym_important] = "important",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
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
  [anon_sym_LPAREN2] = "(",
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
  [aux_sym_declaration_repeat1] = "declaration_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym_arguments_repeat2] = "arguments_repeat2",
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
  [sym_important] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
  [anon_sym_LPAREN2] = {
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
  [aux_sym_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat2] = {
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
        ADVANCE(100);
      if (lookahead == 'n')
        ADVANCE(104);
      if (lookahead == 'o')
        ADVANCE(107);
      if (lookahead == 's')
        ADVANCE(109);
      if (lookahead == 't')
        ADVANCE(117);
      if (lookahead == '{')
        ADVANCE(119);
      if (lookahead == '|')
        ADVANCE(120);
      if (lookahead == '}')
        ADVANCE(122);
      if (lookahead == '~')
        ADVANCE(123);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(125);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
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
      ACCEPT_TOKEN(anon_sym_LPAREN2);
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
      END_STATE();
    case 98:
      if (lookahead == 'd')
        ADVANCE(99);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 100:
      if (lookahead == 'r')
        ADVANCE(101);
      END_STATE();
    case 101:
      if (lookahead == 'o')
        ADVANCE(102);
      END_STATE();
    case 102:
      if (lookahead == 'm')
        ADVANCE(103);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_from);
      END_STATE();
    case 104:
      if (lookahead == 'o')
        ADVANCE(105);
      END_STATE();
    case 105:
      if (lookahead == 't')
        ADVANCE(106);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 107:
      if (lookahead == 'r')
        ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 109:
      if (lookahead == 'e')
        ADVANCE(110);
      END_STATE();
    case 110:
      if (lookahead == 'l')
        ADVANCE(111);
      END_STATE();
    case 111:
      if (lookahead == 'e')
        ADVANCE(112);
      END_STATE();
    case 112:
      if (lookahead == 'c')
        ADVANCE(113);
      END_STATE();
    case 113:
      if (lookahead == 't')
        ADVANCE(114);
      END_STATE();
    case 114:
      if (lookahead == 'o')
        ADVANCE(115);
      END_STATE();
    case 115:
      if (lookahead == 'r')
        ADVANCE(116);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_selector);
      END_STATE();
    case 117:
      if (lookahead == 'o')
        ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_to);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 120:
      if (lookahead == '=')
        ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '=')
        ADVANCE(124);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 125:
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
        ADVANCE(126);
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
        ADVANCE(100);
      if (lookahead == 'n')
        ADVANCE(104);
      if (lookahead == 'o')
        ADVANCE(107);
      if (lookahead == 's')
        ADVANCE(109);
      if (lookahead == 't')
        ADVANCE(117);
      if (lookahead == '{')
        ADVANCE(119);
      if (lookahead == '|')
        ADVANCE(120);
      if (lookahead == '}')
        ADVANCE(122);
      if (lookahead == '~')
        ADVANCE(123);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(125);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 127:
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
        ADVANCE(128);
      if (lookahead == '.')
        ADVANCE(129);
      if (lookahead == '/')
        ADVANCE(130);
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
        SKIP(127);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(131);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 130:
      if (lookahead == '*')
        ADVANCE(38);
      if (lookahead == '/')
        ADVANCE(41);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(131);
      END_STATE();
    case 132:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(133);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == '(')
        ADVANCE(23);
      if (lookahead == '+')
        ADVANCE(142);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '-')
        ADVANCE(143);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == '/')
        ADVANCE(130);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(155);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 133:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(134);
      END_STATE();
    case 134:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(135);
      END_STATE();
    case 135:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(136);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_color_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(137);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_color_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(138);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_color_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(139);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_color_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(140);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_color_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(141);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_color_value);
      END_STATE();
    case 142:
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.')
        ADVANCE(144);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(154);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
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
        ADVANCE(149);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_plain_value);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(145);
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
        ADVANCE(149);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(145);
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
        ADVANCE(149);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '-')
        ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(148);
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
        ADVANCE(149);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_plain_value);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(148);
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
        ADVANCE(149);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(148);
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
        ADVANCE(149);
      END_STATE();
    case 149:
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
        ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-')
        ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
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
        ADVANCE(149);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(152);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
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
        ADVANCE(149);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(152);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
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
        ADVANCE(149);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
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
        ADVANCE(149);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH);
      if (lookahead == '.')
        ADVANCE(144);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(154);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
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
        ADVANCE(149);
      END_STATE();
    case 155:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(133);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == '+')
        ADVANCE(142);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '-')
        ADVANCE(143);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == '/')
        ADVANCE(130);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(155);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 156:
      if (lookahead == '(')
        ADVANCE(126);
      if (lookahead == '/')
        ADVANCE(130);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == 'n')
        ADVANCE(157);
      if (lookahead == 's')
        ADVANCE(160);
      if (lookahead == '{')
        ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(156);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(131);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(158);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(131);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(159);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(131);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(131);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(161);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(131);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(162);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(131);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(163);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(131);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(164);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(131);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(165);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(131);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(166);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(131);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(167);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(131);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(131);
      END_STATE();
    case 168:
      if (lookahead == '#')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '+')
        ADVANCE(169);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '.')
        ADVANCE(129);
      if (lookahead == '/')
        ADVANCE(130);
      if (lookahead == ':')
        ADVANCE(42);
      if (lookahead == '>')
        ADVANCE(46);
      if (lookahead == '[')
        ADVANCE(93);
      if (lookahead == '{')
        ADVANCE(119);
      if (lookahead == '~')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 171:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '/')
        ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(171);
      END_STATE();
    case 172:
      if (lookahead == '#')
        ADVANCE(16);
      if (lookahead == '+')
        ADVANCE(169);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '.')
        ADVANCE(129);
      if (lookahead == '/')
        ADVANCE(130);
      if (lookahead == ':')
        ADVANCE(42);
      if (lookahead == '>')
        ADVANCE(46);
      if (lookahead == '[')
        ADVANCE(93);
      if (lookahead == '{')
        ADVANCE(119);
      if (lookahead == '~')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(172);
      END_STATE();
    case 173:
      if (lookahead == '%')
        ADVANCE(174);
      if (lookahead == '(')
        ADVANCE(126);
      if (lookahead == '*')
        ADVANCE(128);
      if (lookahead == '+')
        ADVANCE(169);
      if (lookahead == '-')
        ADVANCE(175);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == '_')
        ADVANCE(131);
      if (lookahead == 'n')
        ADVANCE(176);
      if (lookahead == 's')
        ADVANCE(180);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(188);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(131);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(174);
      if (lookahead == 'o')
        ADVANCE(177);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(174);
      if (lookahead == 't')
        ADVANCE(178);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '%')
        ADVANCE(174);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(174);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(174);
      if (lookahead == 'e')
        ADVANCE(181);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(174);
      if (lookahead == 'l')
        ADVANCE(182);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(174);
      if (lookahead == 'e')
        ADVANCE(183);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(174);
      if (lookahead == 'c')
        ADVANCE(184);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(174);
      if (lookahead == 't')
        ADVANCE(185);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(174);
      if (lookahead == 'o')
        ADVANCE(186);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(174);
      if (lookahead == 'r')
        ADVANCE(187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '%')
        ADVANCE(174);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(179);
      END_STATE();
    case 188:
      if (lookahead == '(')
        ADVANCE(126);
      if (lookahead == '*')
        ADVANCE(128);
      if (lookahead == '+')
        ADVANCE(169);
      if (lookahead == '-')
        ADVANCE(175);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == 'n')
        ADVANCE(157);
      if (lookahead == 's')
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(188);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(131);
      END_STATE();
    case 189:
      if (lookahead == '(')
        ADVANCE(23);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(128);
      if (lookahead == '+')
        ADVANCE(169);
      if (lookahead == '-')
        ADVANCE(175);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == ']')
        ADVANCE(94);
      if (lookahead == 'n')
        ADVANCE(157);
      if (lookahead == 's')
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(190);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(131);
      END_STATE();
    case 190:
      if (lookahead == '(')
        ADVANCE(126);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(128);
      if (lookahead == '+')
        ADVANCE(169);
      if (lookahead == '-')
        ADVANCE(175);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == ']')
        ADVANCE(94);
      if (lookahead == 'n')
        ADVANCE(157);
      if (lookahead == 's')
        ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(190);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(131);
      END_STATE();
    case 191:
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '/')
        ADVANCE(130);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == 'a')
        ADVANCE(97);
      if (lookahead == 'o')
        ADVANCE(107);
      if (lookahead == '{')
        ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(191);
      END_STATE();
    case 192:
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '/')
        ADVANCE(130);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == 'a')
        ADVANCE(97);
      if (lookahead == 'o')
        ADVANCE(107);
      if (lookahead == '{')
        ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(192);
      END_STATE();
    case 193:
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(128);
      if (lookahead == '+')
        ADVANCE(169);
      if (lookahead == '-')
        ADVANCE(194);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == ']')
        ADVANCE(94);
      if (lookahead == '{')
        ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(195);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(174);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 195:
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(128);
      if (lookahead == '+')
        ADVANCE(169);
      if (lookahead == '-')
        ADVANCE(194);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == ']')
        ADVANCE(94);
      if (lookahead == '{')
        ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(195);
      END_STATE();
    case 196:
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(128);
      if (lookahead == '+')
        ADVANCE(169);
      if (lookahead == '-')
        ADVANCE(194);
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
        SKIP(197);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(174);
      END_STATE();
    case 197:
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(128);
      if (lookahead == '+')
        ADVANCE(169);
      if (lookahead == '-')
        ADVANCE(194);
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
        SKIP(197);
      END_STATE();
    case 198:
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
        ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(199);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(131);
      END_STATE();
    case 199:
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '/')
        ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(199);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(131);
      END_STATE();
    case 200:
      if (lookahead == '#')
        ADVANCE(16);
      if (lookahead == '(')
        ADVANCE(23);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '+')
        ADVANCE(169);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '.')
        ADVANCE(129);
      if (lookahead == '/')
        ADVANCE(130);
      if (lookahead == ':')
        ADVANCE(42);
      if (lookahead == '>')
        ADVANCE(46);
      if (lookahead == '[')
        ADVANCE(93);
      if (lookahead == '{')
        ADVANCE(119);
      if (lookahead == '~')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(168);
      END_STATE();
    case 201:
      if (lookahead == '$')
        ADVANCE(17);
      if (lookahead == '*')
        ADVANCE(202);
      if (lookahead == '/')
        ADVANCE(130);
      if (lookahead == '=')
        ADVANCE(45);
      if (lookahead == ']')
        ADVANCE(94);
      if (lookahead == '^')
        ADVANCE(95);
      if (lookahead == '|')
        ADVANCE(120);
      if (lookahead == '~')
        ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(201);
      END_STATE();
    case 202:
      if (lookahead == '=')
        ADVANCE(26);
      END_STATE();
    case 203:
      if (lookahead == '=')
        ADVANCE(124);
      END_STATE();
    case 204:
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
        ADVANCE(128);
      if (lookahead == '.')
        ADVANCE(129);
      if (lookahead == '/')
        ADVANCE(130);
      if (lookahead == ':')
        ADVANCE(42);
      if (lookahead == '@')
        ADVANCE(47);
      if (lookahead == '[')
        ADVANCE(93);
      if (lookahead == '}')
        ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(204);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(131);
      END_STATE();
    case 205:
      if (lookahead == '(')
        ADVANCE(126);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(128);
      if (lookahead == '+')
        ADVANCE(169);
      if (lookahead == '-')
        ADVANCE(175);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == ']')
        ADVANCE(94);
      if (lookahead == 'n')
        ADVANCE(157);
      if (lookahead == 's')
        ADVANCE(160);
      if (lookahead == '{')
        ADVANCE(119);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(205);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(131);
      END_STATE();
    case 206:
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(133);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '+')
        ADVANCE(142);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '-')
        ADVANCE(143);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == '/')
        ADVANCE(130);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(206);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 207:
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '/')
        ADVANCE(130);
      if (lookahead == ':')
        ADVANCE(208);
      if (lookahead == 'a')
        ADVANCE(97);
      if (lookahead == 'o')
        ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 209:
      if (lookahead == '+')
        ADVANCE(210);
      if (lookahead == '-')
        ADVANCE(210);
      if (lookahead == '/')
        ADVANCE(130);
      if (lookahead == 'f')
        ADVANCE(100);
      if (lookahead == 't')
        ADVANCE(117);
      if (lookahead == '}')
        ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(209);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(211);
      END_STATE();
    case 210:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(211);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(211);
      END_STATE();
    case 212:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(133);
      if (lookahead == '%')
        ADVANCE(174);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(128);
      if (lookahead == '+')
        ADVANCE(27);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '-')
        ADVANCE(213);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == '_')
        ADVANCE(153);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(214);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(217);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(216);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.')
        ADVANCE(144);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(154);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
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
        ADVANCE(149);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(215);
      if (lookahead == '-')
        ADVANCE(151);
      if (lookahead == '_')
        ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'Z') ||
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
        ADVANCE(149);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(215);
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
        ADVANCE(149);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(215);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z') ||
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
        ADVANCE(149);
      END_STATE();
    case 217:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(133);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(128);
      if (lookahead == '+')
        ADVANCE(27);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '-')
        ADVANCE(213);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(217);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 218:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(133);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == '(')
        ADVANCE(23);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(128);
      if (lookahead == '+')
        ADVANCE(27);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '-')
        ADVANCE(213);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(217);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 219:
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(133);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '*')
        ADVANCE(128);
      if (lookahead == '+')
        ADVANCE(27);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '-')
        ADVANCE(213);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(219);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    case 220:
      if (lookahead == '#')
        ADVANCE(16);
      if (lookahead == ')')
        ADVANCE(24);
      if (lookahead == '+')
        ADVANCE(169);
      if (lookahead == '.')
        ADVANCE(129);
      if (lookahead == '/')
        ADVANCE(130);
      if (lookahead == ':')
        ADVANCE(42);
      if (lookahead == '>')
        ADVANCE(46);
      if (lookahead == '[')
        ADVANCE(93);
      if (lookahead == '~')
        ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(220);
      END_STATE();
    case 221:
      if (lookahead == '*')
        ADVANCE(128);
      if (lookahead == '+')
        ADVANCE(169);
      if (lookahead == '-')
        ADVANCE(194);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ']')
        ADVANCE(94);
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
        ADVANCE(128);
      if (lookahead == '+')
        ADVANCE(169);
      if (lookahead == '-')
        ADVANCE(194);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(222);
      END_STATE();
    case 223:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '\"')
        ADVANCE(12);
      if (lookahead == '#')
        ADVANCE(133);
      if (lookahead == '\'')
        ADVANCE(20);
      if (lookahead == '*')
        ADVANCE(128);
      if (lookahead == '+')
        ADVANCE(27);
      if (lookahead == ',')
        ADVANCE(34);
      if (lookahead == '-')
        ADVANCE(213);
      if (lookahead == '.')
        ADVANCE(28);
      if (lookahead == '/')
        ADVANCE(37);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(223);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(153);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 127},
  [2] = {.lex_state = 132},
  [3] = {.lex_state = 156},
  [4] = {.lex_state = 132},
  [5] = {.lex_state = 127},
  [6] = {.lex_state = 127},
  [7] = {.lex_state = 156},
  [8] = {.lex_state = 168, .external_lex_state = 1},
  [9] = {.lex_state = 127},
  [10] = {.lex_state = 127},
  [11] = {.lex_state = 127},
  [12] = {.lex_state = 127},
  [13] = {.lex_state = 127},
  [14] = {.lex_state = 168, .external_lex_state = 1},
  [15] = {.lex_state = 156},
  [16] = {.lex_state = 171},
  [17] = {.lex_state = 156},
  [18] = {.lex_state = 172, .external_lex_state = 1},
  [19] = {.lex_state = 127},
  [20] = {.lex_state = 173},
  [21] = {.lex_state = 173},
  [22] = {.lex_state = 189},
  [23] = {.lex_state = 188},
  [24] = {.lex_state = 156},
  [25] = {.lex_state = 156},
  [26] = {.lex_state = 156},
  [27] = {.lex_state = 191},
  [28] = {.lex_state = 192},
  [29] = {.lex_state = 193},
  [30] = {.lex_state = 196},
  [31] = {.lex_state = 173},
  [32] = {.lex_state = 132},
  [33] = {.lex_state = 198},
  [34] = {.lex_state = 156},
  [35] = {.lex_state = 156},
  [36] = {.lex_state = 192},
  [37] = {.lex_state = 168, .external_lex_state = 1},
  [38] = {.lex_state = 200, .external_lex_state = 1},
  [39] = {.lex_state = 168, .external_lex_state = 1},
  [40] = {.lex_state = 168, .external_lex_state = 1},
  [41] = {.lex_state = 201},
  [42] = {.lex_state = 204},
  [43] = {.lex_state = 204},
  [44] = {.lex_state = 156},
  [45] = {.lex_state = 192},
  [46] = {.lex_state = 204},
  [47] = {.lex_state = 127},
  [48] = {.lex_state = 127},
  [49] = {.lex_state = 127},
  [50] = {.lex_state = 127},
  [51] = {.lex_state = 127},
  [52] = {.lex_state = 127},
  [53] = {.lex_state = 127},
  [54] = {.lex_state = 127},
  [55] = {.lex_state = 127},
  [56] = {.lex_state = 127},
  [57] = {.lex_state = 172},
  [58] = {.lex_state = 127},
  [59] = {.lex_state = 205},
  [60] = {.lex_state = 190},
  [61] = {.lex_state = 206},
  [62] = {.lex_state = 190},
  [63] = {.lex_state = 204},
  [64] = {.lex_state = 132},
  [65] = {.lex_state = 156},
  [66] = {.lex_state = 192},
  [67] = {.lex_state = 156},
  [68] = {.lex_state = 207},
  [69] = {.lex_state = 207},
  [70] = {.lex_state = 191},
  [71] = {.lex_state = 127},
  [72] = {.lex_state = 156},
  [73] = {.lex_state = 156},
  [74] = {.lex_state = 204},
  [75] = {.lex_state = 172},
  [76] = {.lex_state = 204},
  [77] = {.lex_state = 132},
  [78] = {.lex_state = 204},
  [79] = {.lex_state = 132},
  [80] = {.lex_state = 132},
  [81] = {.lex_state = 209},
  [82] = {.lex_state = 204},
  [83] = {.lex_state = 156},
  [84] = {.lex_state = 204},
  [85] = {.lex_state = 206},
  [86] = {.lex_state = 168, .external_lex_state = 1},
  [87] = {.lex_state = 132},
  [88] = {.lex_state = 168, .external_lex_state = 1},
  [89] = {.lex_state = 204},
  [90] = {.lex_state = 172, .external_lex_state = 1},
  [91] = {.lex_state = 204},
  [92] = {.lex_state = 156},
  [93] = {.lex_state = 204},
  [94] = {.lex_state = 156},
  [95] = {.lex_state = 192},
  [96] = {.lex_state = 168, .external_lex_state = 1},
  [97] = {.lex_state = 172, .external_lex_state = 1},
  [98] = {.lex_state = 168, .external_lex_state = 1},
  [99] = {.lex_state = 200, .external_lex_state = 1},
  [100] = {.lex_state = 168, .external_lex_state = 1},
  [101] = {.lex_state = 168, .external_lex_state = 1},
  [102] = {.lex_state = 201},
  [103] = {.lex_state = 168, .external_lex_state = 1},
  [104] = {.lex_state = 168, .external_lex_state = 1},
  [105] = {.lex_state = 168, .external_lex_state = 1},
  [106] = {.lex_state = 172},
  [107] = {.lex_state = 190},
  [108] = {.lex_state = 212},
  [109] = {.lex_state = 212},
  [110] = {.lex_state = 218},
  [111] = {.lex_state = 219},
  [112] = {.lex_state = 206},
  [113] = {.lex_state = 190},
  [114] = {.lex_state = 156},
  [115] = {.lex_state = 204},
  [116] = {.lex_state = 156},
  [117] = {.lex_state = 132},
  [118] = {.lex_state = 132},
  [119] = {.lex_state = 191},
  [120] = {.lex_state = 156},
  [121] = {.lex_state = 220, .external_lex_state = 1},
  [122] = {.lex_state = 192},
  [123] = {.lex_state = 191},
  [124] = {.lex_state = 204},
  [125] = {.lex_state = 172},
  [126] = {.lex_state = 204},
  [127] = {.lex_state = 204},
  [128] = {.lex_state = 156},
  [129] = {.lex_state = 209},
  [130] = {.lex_state = 168, .external_lex_state = 1},
  [131] = {.lex_state = 206},
  [132] = {.lex_state = 221},
  [133] = {.lex_state = 132},
  [134] = {.lex_state = 204},
  [135] = {.lex_state = 204},
  [136] = {.lex_state = 192},
  [137] = {.lex_state = 204},
  [138] = {.lex_state = 192},
  [139] = {.lex_state = 168, .external_lex_state = 1},
  [140] = {.lex_state = 132},
  [141] = {.lex_state = 168, .external_lex_state = 1},
  [142] = {.lex_state = 218},
  [143] = {.lex_state = 218},
  [144] = {.lex_state = 206},
  [145] = {.lex_state = 218},
  [146] = {.lex_state = 132},
  [147] = {.lex_state = 132},
  [148] = {.lex_state = 190},
  [149] = {.lex_state = 206},
  [150] = {.lex_state = 198},
  [151] = {.lex_state = 192},
  [152] = {.lex_state = 204},
  [153] = {.lex_state = 132},
  [154] = {.lex_state = 222},
  [155] = {.lex_state = 191},
  [156] = {.lex_state = 204},
  [157] = {.lex_state = 209},
  [158] = {.lex_state = 204},
  [159] = {.lex_state = 209},
  [160] = {.lex_state = 168, .external_lex_state = 1},
  [161] = {.lex_state = 198},
  [162] = {.lex_state = 168, .external_lex_state = 1},
  [163] = {.lex_state = 223},
  [164] = {.lex_state = 221},
  [165] = {.lex_state = 218},
  [166] = {.lex_state = 206},
  [167] = {.lex_state = 218},
  [168] = {.lex_state = 206},
  [169] = {.lex_state = 190},
  [170] = {.lex_state = 198},
  [171] = {.lex_state = 191},
  [172] = {.lex_state = 209},
  [173] = {.lex_state = 204},
  [174] = {.lex_state = 168, .external_lex_state = 1},
  [175] = {.lex_state = 132},
  [176] = {.lex_state = 204},
  [177] = {.lex_state = 132},
  [178] = {.lex_state = 223},
  [179] = {.lex_state = 132},
  [180] = {.lex_state = 168, .external_lex_state = 1},
  [181] = {.lex_state = 218},
  [182] = {.lex_state = 198},
  [183] = {.lex_state = 209},
  [184] = {.lex_state = 223},
  [185] = {.lex_state = 204},
  [186] = {.lex_state = 132},
  [187] = {.lex_state = 132},
  [188] = {.lex_state = 218},
  [189] = {.lex_state = 204},
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
    [sym_important] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_selector] = ACTIONS(1),
    [sym_string_value] = ACTIONS(1),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(3),
    [anon_sym_SLASH] = ACTIONS(3),
    [anon_sym_LPAREN2] = ACTIONS(1),
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
    [anon_sym_LPAREN] = ACTIONS(49),
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
    [anon_sym_LPAREN] = ACTIONS(49),
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
    [anon_sym_LPAREN] = ACTIONS(49),
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
    [anon_sym_LPAREN] = ACTIONS(123),
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
    [anon_sym_LPAREN] = ACTIONS(129),
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
    [anon_sym_not] = ACTIONS(137),
    [anon_sym_selector] = ACTIONS(137),
    [anon_sym_DASH] = ACTIONS(137),
    [anon_sym_SLASH] = ACTIONS(137),
    [anon_sym_LPAREN2] = ACTIONS(139),
    [sym_identifier] = ACTIONS(137),
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
    [anon_sym_LPAREN] = ACTIONS(49),
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
    [anon_sym_LPAREN] = ACTIONS(49),
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
    [anon_sym_LPAREN] = ACTIONS(49),
    [anon_sym_not] = ACTIONS(51),
    [anon_sym_selector] = ACTIONS(53),
    [sym_identifier] = ACTIONS(55),
    [sym_comment] = ACTIONS(37),
  },
  [26] = {
    [anon_sym_LPAREN] = ACTIONS(153),
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
    [sym_string_value] = ACTIONS(173),
    [anon_sym_LPAREN2] = ACTIONS(139),
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
    [anon_sym_LPAREN] = ACTIONS(49),
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
    [sym_arguments] = STATE(86),
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
    [anon_sym_LPAREN2] = ACTIONS(189),
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
    [anon_sym_LPAREN] = ACTIONS(49),
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
    [anon_sym_LPAREN] = ACTIONS(290),
    [anon_sym_RPAREN] = ACTIONS(290),
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
    [anon_sym_LPAREN] = ACTIONS(294),
    [anon_sym_RPAREN] = ACTIONS(294),
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
    [aux_sym_arguments_repeat1] = STATE(112),
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
    [anon_sym_LPAREN] = ACTIONS(310),
    [anon_sym_RPAREN] = ACTIONS(310),
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
    [anon_sym_LPAREN] = ACTIONS(49),
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
    [anon_sym_LPAREN] = ACTIONS(49),
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
    [anon_sym_LPAREN] = ACTIONS(49),
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
    [anon_sym_LPAREN] = ACTIONS(49),
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
    [anon_sym_LPAREN2] = ACTIONS(139),
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
    [anon_sym_LPAREN] = ACTIONS(49),
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
    [sym__value] = STATE(111),
    [sym_integer_value] = STATE(111),
    [sym_float_value] = STATE(111),
    [sym_call_expression] = STATE(111),
    [sym_binary_expression] = STATE(111),
    [aux_sym_arguments_repeat1] = STATE(131),
    [anon_sym_RPAREN] = ACTIONS(366),
    [sym_color_value] = ACTIONS(300),
    [sym_string_value] = ACTIONS(300),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(302),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(304),
    [sym_identifier] = ACTIONS(306),
    [sym_plain_value] = ACTIONS(308),
    [sym_comment] = ACTIONS(37),
  },
  [86] = {
    [sym__descendant_operator] = ACTIONS(368),
    [anon_sym_COMMA] = ACTIONS(368),
    [anon_sym_LBRACE] = ACTIONS(368),
    [anon_sym_DOT] = ACTIONS(368),
    [anon_sym_COLON] = ACTIONS(370),
    [anon_sym_COLON_COLON] = ACTIONS(368),
    [anon_sym_POUND] = ACTIONS(368),
    [anon_sym_LBRACK] = ACTIONS(368),
    [anon_sym_GT] = ACTIONS(368),
    [anon_sym_TILDE] = ACTIONS(368),
    [anon_sym_PLUS] = ACTIONS(368),
    [anon_sym_RPAREN] = ACTIONS(368),
    [sym_comment] = ACTIONS(37),
  },
  [87] = {
    [sym__value] = STATE(132),
    [sym_integer_value] = STATE(132),
    [sym_float_value] = STATE(132),
    [sym_call_expression] = STATE(132),
    [sym_binary_expression] = STATE(132),
    [sym_color_value] = ACTIONS(372),
    [sym_string_value] = ACTIONS(372),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(59),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(61),
    [sym_identifier] = ACTIONS(45),
    [sym_plain_value] = ACTIONS(374),
    [sym_comment] = ACTIONS(37),
  },
  [88] = {
    [sym__descendant_operator] = ACTIONS(376),
    [anon_sym_COMMA] = ACTIONS(376),
    [anon_sym_LBRACE] = ACTIONS(376),
    [anon_sym_DOT] = ACTIONS(376),
    [anon_sym_COLON] = ACTIONS(378),
    [anon_sym_COLON_COLON] = ACTIONS(376),
    [anon_sym_POUND] = ACTIONS(376),
    [anon_sym_LBRACK] = ACTIONS(376),
    [anon_sym_GT] = ACTIONS(376),
    [anon_sym_TILDE] = ACTIONS(376),
    [anon_sym_PLUS] = ACTIONS(376),
    [anon_sym_RPAREN] = ACTIONS(376),
    [sym_comment] = ACTIONS(37),
  },
  [89] = {
    [ts_builtin_sym_end] = ACTIONS(380),
    [anon_sym_ATimport] = ACTIONS(382),
    [anon_sym_ATmedia] = ACTIONS(382),
    [anon_sym_ATcharset] = ACTIONS(382),
    [anon_sym_ATnamespace] = ACTIONS(382),
    [anon_sym_ATkeyframes] = ACTIONS(382),
    [anon_sym_RBRACE] = ACTIONS(380),
    [anon_sym_ATsupports] = ACTIONS(382),
    [sym_nesting_selector] = ACTIONS(380),
    [anon_sym_STAR] = ACTIONS(380),
    [anon_sym_DOT] = ACTIONS(380),
    [anon_sym_COLON] = ACTIONS(382),
    [anon_sym_COLON_COLON] = ACTIONS(380),
    [anon_sym_POUND] = ACTIONS(380),
    [anon_sym_LBRACK] = ACTIONS(380),
    [sym_string_value] = ACTIONS(380),
    [sym_identifier] = ACTIONS(380),
    [sym_at_keyword] = ACTIONS(382),
    [sym_comment] = ACTIONS(37),
  },
  [90] = {
    [sym__descendant_operator] = ACTIONS(87),
    [anon_sym_COMMA] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(87),
    [anon_sym_DOT] = ACTIONS(87),
    [anon_sym_COLON] = ACTIONS(384),
    [anon_sym_COLON_COLON] = ACTIONS(87),
    [anon_sym_POUND] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_GT] = ACTIONS(87),
    [anon_sym_TILDE] = ACTIONS(87),
    [anon_sym_PLUS] = ACTIONS(87),
    [sym_comment] = ACTIONS(37),
  },
  [91] = {
    [sym_import_statement] = STATE(135),
    [sym_media_statement] = STATE(135),
    [sym_charset_statement] = STATE(135),
    [sym_namespace_statement] = STATE(135),
    [sym_keyframes_statement] = STATE(135),
    [sym_supports_statement] = STATE(135),
    [sym_at_rule] = STATE(135),
    [sym_rule_set] = STATE(135),
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
    [sym_declaration] = STATE(135),
    [aux_sym_block_repeat1] = STATE(135),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATmedia] = ACTIONS(9),
    [anon_sym_ATcharset] = ACTIONS(11),
    [anon_sym_ATnamespace] = ACTIONS(13),
    [anon_sym_ATkeyframes] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(386),
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
    [sym__query] = STATE(136),
    [sym_feature_query] = STATE(136),
    [sym_parenthesized_query] = STATE(136),
    [sym_binary_query] = STATE(136),
    [sym_negated_query] = STATE(136),
    [sym_selector_query] = STATE(136),
    [anon_sym_LPAREN] = ACTIONS(49),
    [anon_sym_not] = ACTIONS(95),
    [anon_sym_selector] = ACTIONS(53),
    [sym_identifier] = ACTIONS(55),
    [sym_comment] = ACTIONS(37),
  },
  [93] = {
    [ts_builtin_sym_end] = ACTIONS(388),
    [anon_sym_ATimport] = ACTIONS(390),
    [anon_sym_ATmedia] = ACTIONS(390),
    [anon_sym_ATcharset] = ACTIONS(390),
    [anon_sym_ATnamespace] = ACTIONS(390),
    [anon_sym_ATkeyframes] = ACTIONS(390),
    [anon_sym_RBRACE] = ACTIONS(388),
    [anon_sym_ATsupports] = ACTIONS(390),
    [sym_nesting_selector] = ACTIONS(388),
    [anon_sym_STAR] = ACTIONS(388),
    [anon_sym_DOT] = ACTIONS(388),
    [anon_sym_COLON] = ACTIONS(390),
    [anon_sym_COLON_COLON] = ACTIONS(388),
    [anon_sym_POUND] = ACTIONS(388),
    [anon_sym_LBRACK] = ACTIONS(388),
    [sym_string_value] = ACTIONS(388),
    [sym_identifier] = ACTIONS(388),
    [sym_at_keyword] = ACTIONS(390),
    [sym_comment] = ACTIONS(37),
  },
  [94] = {
    [sym__query] = STATE(123),
    [sym_feature_query] = STATE(123),
    [sym_parenthesized_query] = STATE(123),
    [sym_binary_query] = STATE(123),
    [sym_negated_query] = STATE(123),
    [sym_selector_query] = STATE(123),
    [anon_sym_LPAREN] = ACTIONS(49),
    [anon_sym_not] = ACTIONS(95),
    [anon_sym_selector] = ACTIONS(53),
    [sym_identifier] = ACTIONS(55),
    [sym_comment] = ACTIONS(37),
  },
  [95] = {
    [sym_block] = STATE(137),
    [aux_sym_import_statement_repeat1] = STATE(138),
    [anon_sym_COMMA] = ACTIONS(211),
    [anon_sym_SEMI] = ACTIONS(392),
    [anon_sym_LBRACE] = ACTIONS(93),
    [sym_comment] = ACTIONS(37),
  },
  [96] = {
    [sym__descendant_operator] = ACTIONS(394),
    [anon_sym_COMMA] = ACTIONS(394),
    [anon_sym_LBRACE] = ACTIONS(394),
    [anon_sym_DOT] = ACTIONS(105),
    [anon_sym_COLON] = ACTIONS(396),
    [anon_sym_COLON_COLON] = ACTIONS(394),
    [anon_sym_POUND] = ACTIONS(394),
    [anon_sym_LBRACK] = ACTIONS(394),
    [anon_sym_GT] = ACTIONS(394),
    [anon_sym_TILDE] = ACTIONS(394),
    [anon_sym_PLUS] = ACTIONS(394),
    [anon_sym_RPAREN] = ACTIONS(394),
    [sym_comment] = ACTIONS(37),
  },
  [97] = {
    [sym__descendant_operator] = ACTIONS(99),
    [anon_sym_COMMA] = ACTIONS(398),
    [anon_sym_LBRACE] = ACTIONS(398),
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
    [sym__descendant_operator] = ACTIONS(400),
    [anon_sym_COMMA] = ACTIONS(400),
    [anon_sym_LBRACE] = ACTIONS(400),
    [anon_sym_DOT] = ACTIONS(400),
    [anon_sym_COLON] = ACTIONS(402),
    [anon_sym_COLON_COLON] = ACTIONS(400),
    [anon_sym_POUND] = ACTIONS(400),
    [anon_sym_LBRACK] = ACTIONS(400),
    [anon_sym_GT] = ACTIONS(400),
    [anon_sym_TILDE] = ACTIONS(400),
    [anon_sym_PLUS] = ACTIONS(400),
    [anon_sym_RPAREN] = ACTIONS(400),
    [sym_comment] = ACTIONS(37),
  },
  [99] = {
    [sym_arguments] = STATE(139),
    [sym__descendant_operator] = ACTIONS(404),
    [anon_sym_COMMA] = ACTIONS(404),
    [anon_sym_LBRACE] = ACTIONS(404),
    [anon_sym_DOT] = ACTIONS(404),
    [anon_sym_COLON] = ACTIONS(406),
    [anon_sym_COLON_COLON] = ACTIONS(404),
    [anon_sym_POUND] = ACTIONS(404),
    [anon_sym_LBRACK] = ACTIONS(404),
    [anon_sym_GT] = ACTIONS(404),
    [anon_sym_TILDE] = ACTIONS(404),
    [anon_sym_PLUS] = ACTIONS(404),
    [anon_sym_RPAREN] = ACTIONS(404),
    [anon_sym_LPAREN2] = ACTIONS(189),
    [sym_comment] = ACTIONS(37),
  },
  [100] = {
    [sym__descendant_operator] = ACTIONS(408),
    [anon_sym_COMMA] = ACTIONS(408),
    [anon_sym_LBRACE] = ACTIONS(408),
    [anon_sym_DOT] = ACTIONS(408),
    [anon_sym_COLON] = ACTIONS(410),
    [anon_sym_COLON_COLON] = ACTIONS(408),
    [anon_sym_POUND] = ACTIONS(408),
    [anon_sym_LBRACK] = ACTIONS(408),
    [anon_sym_GT] = ACTIONS(408),
    [anon_sym_TILDE] = ACTIONS(408),
    [anon_sym_PLUS] = ACTIONS(408),
    [anon_sym_RPAREN] = ACTIONS(408),
    [sym_comment] = ACTIONS(37),
  },
  [101] = {
    [sym__descendant_operator] = ACTIONS(412),
    [anon_sym_COMMA] = ACTIONS(412),
    [anon_sym_LBRACE] = ACTIONS(412),
    [anon_sym_DOT] = ACTIONS(412),
    [anon_sym_COLON] = ACTIONS(414),
    [anon_sym_COLON_COLON] = ACTIONS(412),
    [anon_sym_POUND] = ACTIONS(412),
    [anon_sym_LBRACK] = ACTIONS(412),
    [anon_sym_GT] = ACTIONS(412),
    [anon_sym_TILDE] = ACTIONS(412),
    [anon_sym_PLUS] = ACTIONS(412),
    [anon_sym_RPAREN] = ACTIONS(412),
    [sym_comment] = ACTIONS(37),
  },
  [102] = {
    [anon_sym_EQ] = ACTIONS(416),
    [anon_sym_TILDE_EQ] = ACTIONS(416),
    [anon_sym_CARET_EQ] = ACTIONS(416),
    [anon_sym_PIPE_EQ] = ACTIONS(416),
    [anon_sym_STAR_EQ] = ACTIONS(416),
    [anon_sym_DOLLAR_EQ] = ACTIONS(416),
    [anon_sym_RBRACK] = ACTIONS(418),
    [sym_comment] = ACTIONS(37),
  },
  [103] = {
    [sym__descendant_operator] = ACTIONS(420),
    [anon_sym_COMMA] = ACTIONS(420),
    [anon_sym_LBRACE] = ACTIONS(420),
    [anon_sym_DOT] = ACTIONS(105),
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
  [104] = {
    [sym__descendant_operator] = ACTIONS(424),
    [anon_sym_COMMA] = ACTIONS(424),
    [anon_sym_LBRACE] = ACTIONS(424),
    [anon_sym_DOT] = ACTIONS(105),
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
  [105] = {
    [sym__descendant_operator] = ACTIONS(428),
    [anon_sym_COMMA] = ACTIONS(428),
    [anon_sym_LBRACE] = ACTIONS(428),
    [anon_sym_DOT] = ACTIONS(105),
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
  [106] = {
    [aux_sym_selectors_repeat1] = STATE(106),
    [anon_sym_COMMA] = ACTIONS(432),
    [anon_sym_LBRACE] = ACTIONS(398),
    [sym_comment] = ACTIONS(37),
  },
  [107] = {
    [anon_sym_SEMI] = ACTIONS(435),
    [anon_sym_STAR] = ACTIONS(435),
    [anon_sym_RBRACK] = ACTIONS(435),
    [anon_sym_PLUS] = ACTIONS(435),
    [anon_sym_LPAREN] = ACTIONS(435),
    [anon_sym_RPAREN] = ACTIONS(435),
    [anon_sym_not] = ACTIONS(437),
    [anon_sym_selector] = ACTIONS(437),
    [anon_sym_DASH] = ACTIONS(437),
    [anon_sym_SLASH] = ACTIONS(437),
    [sym_identifier] = ACTIONS(437),
    [sym_comment] = ACTIONS(37),
  },
  [108] = {
    [anon_sym_COMMA] = ACTIONS(123),
    [anon_sym_SEMI] = ACTIONS(123),
    [anon_sym_STAR] = ACTIONS(123),
    [anon_sym_PLUS] = ACTIONS(125),
    [sym_important] = ACTIONS(123),
    [anon_sym_RPAREN] = ACTIONS(123),
    [sym_color_value] = ACTIONS(123),
    [sym_string_value] = ACTIONS(123),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(125),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(125),
    [sym_unit] = ACTIONS(439),
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
    [sym_important] = ACTIONS(129),
    [anon_sym_RPAREN] = ACTIONS(129),
    [sym_color_value] = ACTIONS(129),
    [sym_string_value] = ACTIONS(129),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(131),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(131),
    [sym_unit] = ACTIONS(441),
    [anon_sym_DASH] = ACTIONS(131),
    [anon_sym_SLASH] = ACTIONS(131),
    [sym_identifier] = ACTIONS(131),
    [sym_plain_value] = ACTIONS(131),
    [sym_comment] = ACTIONS(37),
  },
  [110] = {
    [sym_arguments] = STATE(145),
    [anon_sym_COMMA] = ACTIONS(135),
    [anon_sym_SEMI] = ACTIONS(135),
    [anon_sym_STAR] = ACTIONS(135),
    [anon_sym_PLUS] = ACTIONS(137),
    [sym_important] = ACTIONS(135),
    [anon_sym_RPAREN] = ACTIONS(135),
    [sym_color_value] = ACTIONS(135),
    [sym_string_value] = ACTIONS(135),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(137),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(137),
    [anon_sym_DASH] = ACTIONS(137),
    [anon_sym_SLASH] = ACTIONS(137),
    [anon_sym_LPAREN2] = ACTIONS(443),
    [sym_identifier] = ACTIONS(137),
    [sym_plain_value] = ACTIONS(137),
    [sym_comment] = ACTIONS(37),
  },
  [111] = {
    [anon_sym_COMMA] = ACTIONS(445),
    [anon_sym_STAR] = ACTIONS(447),
    [anon_sym_PLUS] = ACTIONS(449),
    [anon_sym_RPAREN] = ACTIONS(445),
    [sym_color_value] = ACTIONS(445),
    [sym_string_value] = ACTIONS(445),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(451),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(451),
    [anon_sym_DASH] = ACTIONS(449),
    [anon_sym_SLASH] = ACTIONS(449),
    [sym_identifier] = ACTIONS(451),
    [sym_plain_value] = ACTIONS(451),
    [sym_comment] = ACTIONS(37),
  },
  [112] = {
    [sym__value] = STATE(111),
    [sym_integer_value] = STATE(111),
    [sym_float_value] = STATE(111),
    [sym_call_expression] = STATE(111),
    [sym_binary_expression] = STATE(111),
    [aux_sym_arguments_repeat1] = STATE(149),
    [aux_sym_arguments_repeat2] = STATE(150),
    [anon_sym_COMMA] = ACTIONS(453),
    [anon_sym_RPAREN] = ACTIONS(455),
    [sym_color_value] = ACTIONS(300),
    [sym_string_value] = ACTIONS(300),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(302),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(304),
    [sym_identifier] = ACTIONS(306),
    [sym_plain_value] = ACTIONS(308),
    [sym_comment] = ACTIONS(37),
  },
  [113] = {
    [anon_sym_SEMI] = ACTIONS(457),
    [anon_sym_STAR] = ACTIONS(457),
    [anon_sym_RBRACK] = ACTIONS(457),
    [anon_sym_PLUS] = ACTIONS(457),
    [anon_sym_LPAREN] = ACTIONS(457),
    [anon_sym_RPAREN] = ACTIONS(457),
    [anon_sym_not] = ACTIONS(459),
    [anon_sym_selector] = ACTIONS(459),
    [anon_sym_DASH] = ACTIONS(459),
    [anon_sym_SLASH] = ACTIONS(459),
    [sym_identifier] = ACTIONS(459),
    [sym_comment] = ACTIONS(37),
  },
  [114] = {
    [sym__query] = STATE(151),
    [sym_feature_query] = STATE(151),
    [sym_parenthesized_query] = STATE(151),
    [sym_binary_query] = STATE(151),
    [sym_negated_query] = STATE(151),
    [sym_selector_query] = STATE(151),
    [anon_sym_LPAREN] = ACTIONS(49),
    [anon_sym_not] = ACTIONS(145),
    [anon_sym_selector] = ACTIONS(53),
    [sym_identifier] = ACTIONS(55),
    [sym_comment] = ACTIONS(37),
  },
  [115] = {
    [ts_builtin_sym_end] = ACTIONS(461),
    [anon_sym_ATimport] = ACTIONS(463),
    [anon_sym_ATmedia] = ACTIONS(463),
    [anon_sym_ATcharset] = ACTIONS(463),
    [anon_sym_ATnamespace] = ACTIONS(463),
    [anon_sym_ATkeyframes] = ACTIONS(463),
    [anon_sym_RBRACE] = ACTIONS(461),
    [anon_sym_ATsupports] = ACTIONS(463),
    [sym_nesting_selector] = ACTIONS(461),
    [anon_sym_STAR] = ACTIONS(461),
    [anon_sym_DOT] = ACTIONS(461),
    [anon_sym_COLON] = ACTIONS(463),
    [anon_sym_COLON_COLON] = ACTIONS(461),
    [anon_sym_POUND] = ACTIONS(461),
    [anon_sym_LBRACK] = ACTIONS(461),
    [sym_string_value] = ACTIONS(461),
    [sym_identifier] = ACTIONS(461),
    [sym_at_keyword] = ACTIONS(463),
    [sym_comment] = ACTIONS(37),
  },
  [116] = {
    [sym__query] = STATE(123),
    [sym_feature_query] = STATE(123),
    [sym_parenthesized_query] = STATE(123),
    [sym_binary_query] = STATE(123),
    [sym_negated_query] = STATE(123),
    [sym_selector_query] = STATE(123),
    [anon_sym_LPAREN] = ACTIONS(49),
    [anon_sym_not] = ACTIONS(145),
    [anon_sym_selector] = ACTIONS(53),
    [sym_identifier] = ACTIONS(55),
    [sym_comment] = ACTIONS(37),
  },
  [117] = {
    [aux_sym_import_statement_repeat1] = STATE(153),
    [anon_sym_COMMA] = ACTIONS(322),
    [anon_sym_SEMI] = ACTIONS(465),
    [sym_comment] = ACTIONS(37),
  },
  [118] = {
    [sym__value] = STATE(154),
    [sym_integer_value] = STATE(154),
    [sym_float_value] = STATE(154),
    [sym_call_expression] = STATE(154),
    [sym_binary_expression] = STATE(154),
    [sym_color_value] = ACTIONS(467),
    [sym_string_value] = ACTIONS(467),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(59),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(61),
    [sym_identifier] = ACTIONS(45),
    [sym_plain_value] = ACTIONS(469),
    [sym_comment] = ACTIONS(37),
  },
  [119] = {
    [anon_sym_COMMA] = ACTIONS(471),
    [anon_sym_SEMI] = ACTIONS(471),
    [anon_sym_LBRACE] = ACTIONS(471),
    [anon_sym_RPAREN] = ACTIONS(471),
    [anon_sym_and] = ACTIONS(471),
    [anon_sym_or] = ACTIONS(471),
    [sym_comment] = ACTIONS(37),
  },
  [120] = {
    [sym__query] = STATE(123),
    [sym_feature_query] = STATE(123),
    [sym_parenthesized_query] = STATE(123),
    [sym_binary_query] = STATE(123),
    [sym_negated_query] = STATE(123),
    [sym_selector_query] = STATE(123),
    [anon_sym_LPAREN] = ACTIONS(49),
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
    [anon_sym_RPAREN] = ACTIONS(473),
    [sym_comment] = ACTIONS(37),
  },
  [122] = {
    [anon_sym_COMMA] = ACTIONS(475),
    [anon_sym_LBRACE] = ACTIONS(475),
    [anon_sym_and] = ACTIONS(159),
    [anon_sym_or] = ACTIONS(159),
    [sym_comment] = ACTIONS(37),
  },
  [123] = {
    [anon_sym_COMMA] = ACTIONS(477),
    [anon_sym_SEMI] = ACTIONS(477),
    [anon_sym_LBRACE] = ACTIONS(477),
    [anon_sym_RPAREN] = ACTIONS(477),
    [anon_sym_and] = ACTIONS(477),
    [anon_sym_or] = ACTIONS(477),
    [sym_comment] = ACTIONS(37),
  },
  [124] = {
    [ts_builtin_sym_end] = ACTIONS(479),
    [anon_sym_ATimport] = ACTIONS(481),
    [anon_sym_ATmedia] = ACTIONS(481),
    [anon_sym_ATcharset] = ACTIONS(481),
    [anon_sym_ATnamespace] = ACTIONS(481),
    [anon_sym_ATkeyframes] = ACTIONS(481),
    [anon_sym_RBRACE] = ACTIONS(479),
    [anon_sym_ATsupports] = ACTIONS(481),
    [sym_nesting_selector] = ACTIONS(479),
    [anon_sym_STAR] = ACTIONS(479),
    [anon_sym_DOT] = ACTIONS(479),
    [anon_sym_COLON] = ACTIONS(481),
    [anon_sym_COLON_COLON] = ACTIONS(479),
    [anon_sym_POUND] = ACTIONS(479),
    [anon_sym_LBRACK] = ACTIONS(479),
    [sym_string_value] = ACTIONS(479),
    [sym_identifier] = ACTIONS(479),
    [sym_at_keyword] = ACTIONS(481),
    [sym_comment] = ACTIONS(37),
  },
  [125] = {
    [aux_sym_import_statement_repeat1] = STATE(125),
    [anon_sym_COMMA] = ACTIONS(483),
    [anon_sym_LBRACE] = ACTIONS(475),
    [sym_comment] = ACTIONS(37),
  },
  [126] = {
    [ts_builtin_sym_end] = ACTIONS(486),
    [anon_sym_ATimport] = ACTIONS(488),
    [anon_sym_ATmedia] = ACTIONS(488),
    [anon_sym_ATcharset] = ACTIONS(488),
    [anon_sym_ATnamespace] = ACTIONS(488),
    [anon_sym_ATkeyframes] = ACTIONS(488),
    [anon_sym_RBRACE] = ACTIONS(486),
    [anon_sym_ATsupports] = ACTIONS(488),
    [sym_nesting_selector] = ACTIONS(486),
    [anon_sym_STAR] = ACTIONS(486),
    [anon_sym_DOT] = ACTIONS(486),
    [anon_sym_COLON] = ACTIONS(488),
    [anon_sym_COLON_COLON] = ACTIONS(486),
    [anon_sym_POUND] = ACTIONS(486),
    [anon_sym_LBRACK] = ACTIONS(486),
    [sym_string_value] = ACTIONS(486),
    [sym_identifier] = ACTIONS(486),
    [sym_at_keyword] = ACTIONS(488),
    [sym_comment] = ACTIONS(37),
  },
  [127] = {
    [ts_builtin_sym_end] = ACTIONS(490),
    [anon_sym_ATimport] = ACTIONS(492),
    [anon_sym_ATmedia] = ACTIONS(492),
    [anon_sym_ATcharset] = ACTIONS(492),
    [anon_sym_ATnamespace] = ACTIONS(492),
    [anon_sym_ATkeyframes] = ACTIONS(492),
    [anon_sym_RBRACE] = ACTIONS(490),
    [anon_sym_ATsupports] = ACTIONS(492),
    [sym_nesting_selector] = ACTIONS(490),
    [anon_sym_STAR] = ACTIONS(490),
    [anon_sym_DOT] = ACTIONS(490),
    [anon_sym_COLON] = ACTIONS(492),
    [anon_sym_COLON_COLON] = ACTIONS(490),
    [anon_sym_POUND] = ACTIONS(490),
    [anon_sym_LBRACK] = ACTIONS(490),
    [sym_string_value] = ACTIONS(490),
    [sym_identifier] = ACTIONS(490),
    [sym_at_keyword] = ACTIONS(492),
    [sym_comment] = ACTIONS(37),
  },
  [128] = {
    [sym_block] = STATE(157),
    [anon_sym_LBRACE] = ACTIONS(494),
    [sym_comment] = ACTIONS(37),
  },
  [129] = {
    [sym_keyframe_block] = STATE(159),
    [sym_integer_value] = STATE(128),
    [aux_sym_keyframe_block_list_repeat1] = STATE(159),
    [anon_sym_RBRACE] = ACTIONS(496),
    [sym_from] = ACTIONS(354),
    [sym_to] = ACTIONS(354),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(356),
    [sym_comment] = ACTIONS(37),
  },
  [130] = {
    [sym__descendant_operator] = ACTIONS(435),
    [anon_sym_COMMA] = ACTIONS(435),
    [anon_sym_LBRACE] = ACTIONS(435),
    [anon_sym_DOT] = ACTIONS(435),
    [anon_sym_COLON] = ACTIONS(437),
    [anon_sym_COLON_COLON] = ACTIONS(435),
    [anon_sym_POUND] = ACTIONS(435),
    [anon_sym_LBRACK] = ACTIONS(435),
    [anon_sym_GT] = ACTIONS(435),
    [anon_sym_TILDE] = ACTIONS(435),
    [anon_sym_PLUS] = ACTIONS(435),
    [anon_sym_RPAREN] = ACTIONS(435),
    [sym_comment] = ACTIONS(37),
  },
  [131] = {
    [sym__value] = STATE(111),
    [sym_integer_value] = STATE(111),
    [sym_float_value] = STATE(111),
    [sym_call_expression] = STATE(111),
    [sym_binary_expression] = STATE(111),
    [aux_sym_arguments_repeat1] = STATE(149),
    [aux_sym_arguments_repeat2] = STATE(161),
    [anon_sym_COMMA] = ACTIONS(453),
    [anon_sym_RPAREN] = ACTIONS(498),
    [sym_color_value] = ACTIONS(300),
    [sym_string_value] = ACTIONS(300),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(302),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(304),
    [sym_identifier] = ACTIONS(306),
    [sym_plain_value] = ACTIONS(308),
    [sym_comment] = ACTIONS(37),
  },
  [132] = {
    [anon_sym_STAR] = ACTIONS(167),
    [anon_sym_RBRACK] = ACTIONS(500),
    [anon_sym_PLUS] = ACTIONS(167),
    [anon_sym_DASH] = ACTIONS(167),
    [anon_sym_SLASH] = ACTIONS(169),
    [sym_comment] = ACTIONS(37),
  },
  [133] = {
    [sym__value] = STATE(163),
    [sym_integer_value] = STATE(163),
    [sym_float_value] = STATE(163),
    [sym_call_expression] = STATE(163),
    [sym_binary_expression] = STATE(163),
    [sym_color_value] = ACTIONS(502),
    [sym_string_value] = ACTIONS(502),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(302),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(304),
    [sym_identifier] = ACTIONS(306),
    [sym_plain_value] = ACTIONS(504),
    [sym_comment] = ACTIONS(37),
  },
  [134] = {
    [ts_builtin_sym_end] = ACTIONS(506),
    [anon_sym_ATimport] = ACTIONS(508),
    [anon_sym_ATmedia] = ACTIONS(508),
    [anon_sym_ATcharset] = ACTIONS(508),
    [anon_sym_ATnamespace] = ACTIONS(508),
    [anon_sym_ATkeyframes] = ACTIONS(508),
    [anon_sym_RBRACE] = ACTIONS(506),
    [anon_sym_ATsupports] = ACTIONS(508),
    [sym_nesting_selector] = ACTIONS(506),
    [anon_sym_STAR] = ACTIONS(506),
    [anon_sym_DOT] = ACTIONS(506),
    [anon_sym_COLON] = ACTIONS(508),
    [anon_sym_COLON_COLON] = ACTIONS(506),
    [anon_sym_POUND] = ACTIONS(506),
    [anon_sym_LBRACK] = ACTIONS(506),
    [sym_string_value] = ACTIONS(506),
    [sym_identifier] = ACTIONS(506),
    [sym_at_keyword] = ACTIONS(508),
    [sym_comment] = ACTIONS(37),
  },
  [135] = {
    [sym_import_statement] = STATE(135),
    [sym_media_statement] = STATE(135),
    [sym_charset_statement] = STATE(135),
    [sym_namespace_statement] = STATE(135),
    [sym_keyframes_statement] = STATE(135),
    [sym_supports_statement] = STATE(135),
    [sym_at_rule] = STATE(135),
    [sym_rule_set] = STATE(135),
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
    [sym_declaration] = STATE(135),
    [aux_sym_block_repeat1] = STATE(135),
    [anon_sym_ATimport] = ACTIONS(510),
    [anon_sym_ATmedia] = ACTIONS(513),
    [anon_sym_ATcharset] = ACTIONS(516),
    [anon_sym_ATnamespace] = ACTIONS(519),
    [anon_sym_ATkeyframes] = ACTIONS(522),
    [anon_sym_RBRACE] = ACTIONS(525),
    [anon_sym_ATsupports] = ACTIONS(527),
    [sym_nesting_selector] = ACTIONS(530),
    [anon_sym_STAR] = ACTIONS(533),
    [anon_sym_DOT] = ACTIONS(536),
    [anon_sym_COLON] = ACTIONS(539),
    [anon_sym_COLON_COLON] = ACTIONS(542),
    [anon_sym_POUND] = ACTIONS(545),
    [anon_sym_LBRACK] = ACTIONS(548),
    [sym_string_value] = ACTIONS(530),
    [sym_identifier] = ACTIONS(551),
    [sym_at_keyword] = ACTIONS(554),
    [sym_comment] = ACTIONS(37),
  },
  [136] = {
    [anon_sym_COMMA] = ACTIONS(475),
    [anon_sym_SEMI] = ACTIONS(475),
    [anon_sym_LBRACE] = ACTIONS(475),
    [anon_sym_and] = ACTIONS(215),
    [anon_sym_or] = ACTIONS(215),
    [sym_comment] = ACTIONS(37),
  },
  [137] = {
    [ts_builtin_sym_end] = ACTIONS(557),
    [anon_sym_ATimport] = ACTIONS(559),
    [anon_sym_ATmedia] = ACTIONS(559),
    [anon_sym_ATcharset] = ACTIONS(559),
    [anon_sym_ATnamespace] = ACTIONS(559),
    [anon_sym_ATkeyframes] = ACTIONS(559),
    [anon_sym_RBRACE] = ACTIONS(557),
    [anon_sym_ATsupports] = ACTIONS(559),
    [sym_nesting_selector] = ACTIONS(557),
    [anon_sym_STAR] = ACTIONS(557),
    [anon_sym_DOT] = ACTIONS(557),
    [anon_sym_COLON] = ACTIONS(559),
    [anon_sym_COLON_COLON] = ACTIONS(557),
    [anon_sym_POUND] = ACTIONS(557),
    [anon_sym_LBRACK] = ACTIONS(557),
    [sym_string_value] = ACTIONS(557),
    [sym_identifier] = ACTIONS(557),
    [sym_at_keyword] = ACTIONS(559),
    [sym_comment] = ACTIONS(37),
  },
  [138] = {
    [aux_sym_import_statement_repeat1] = STATE(138),
    [anon_sym_COMMA] = ACTIONS(561),
    [anon_sym_SEMI] = ACTIONS(475),
    [anon_sym_LBRACE] = ACTIONS(475),
    [sym_comment] = ACTIONS(37),
  },
  [139] = {
    [sym__descendant_operator] = ACTIONS(564),
    [anon_sym_COMMA] = ACTIONS(564),
    [anon_sym_LBRACE] = ACTIONS(564),
    [anon_sym_DOT] = ACTIONS(564),
    [anon_sym_COLON] = ACTIONS(566),
    [anon_sym_COLON_COLON] = ACTIONS(564),
    [anon_sym_POUND] = ACTIONS(564),
    [anon_sym_LBRACK] = ACTIONS(564),
    [anon_sym_GT] = ACTIONS(564),
    [anon_sym_TILDE] = ACTIONS(564),
    [anon_sym_PLUS] = ACTIONS(564),
    [anon_sym_RPAREN] = ACTIONS(564),
    [sym_comment] = ACTIONS(37),
  },
  [140] = {
    [sym__value] = STATE(164),
    [sym_integer_value] = STATE(164),
    [sym_float_value] = STATE(164),
    [sym_call_expression] = STATE(164),
    [sym_binary_expression] = STATE(164),
    [sym_color_value] = ACTIONS(568),
    [sym_string_value] = ACTIONS(568),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(59),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(61),
    [sym_identifier] = ACTIONS(45),
    [sym_plain_value] = ACTIONS(570),
    [sym_comment] = ACTIONS(37),
  },
  [141] = {
    [sym__descendant_operator] = ACTIONS(572),
    [anon_sym_COMMA] = ACTIONS(572),
    [anon_sym_LBRACE] = ACTIONS(572),
    [anon_sym_DOT] = ACTIONS(572),
    [anon_sym_COLON] = ACTIONS(574),
    [anon_sym_COLON_COLON] = ACTIONS(572),
    [anon_sym_POUND] = ACTIONS(572),
    [anon_sym_LBRACK] = ACTIONS(572),
    [anon_sym_GT] = ACTIONS(572),
    [anon_sym_TILDE] = ACTIONS(572),
    [anon_sym_PLUS] = ACTIONS(572),
    [anon_sym_RPAREN] = ACTIONS(572),
    [sym_comment] = ACTIONS(37),
  },
  [142] = {
    [anon_sym_COMMA] = ACTIONS(290),
    [anon_sym_SEMI] = ACTIONS(290),
    [anon_sym_STAR] = ACTIONS(290),
    [anon_sym_PLUS] = ACTIONS(292),
    [sym_important] = ACTIONS(290),
    [anon_sym_RPAREN] = ACTIONS(290),
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
  [143] = {
    [anon_sym_COMMA] = ACTIONS(294),
    [anon_sym_SEMI] = ACTIONS(294),
    [anon_sym_STAR] = ACTIONS(294),
    [anon_sym_PLUS] = ACTIONS(296),
    [sym_important] = ACTIONS(294),
    [anon_sym_RPAREN] = ACTIONS(294),
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
  [144] = {
    [sym__value] = STATE(111),
    [sym_integer_value] = STATE(111),
    [sym_float_value] = STATE(111),
    [sym_call_expression] = STATE(111),
    [sym_binary_expression] = STATE(111),
    [aux_sym_arguments_repeat1] = STATE(166),
    [anon_sym_RPAREN] = ACTIONS(576),
    [sym_color_value] = ACTIONS(300),
    [sym_string_value] = ACTIONS(300),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(302),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(304),
    [sym_identifier] = ACTIONS(306),
    [sym_plain_value] = ACTIONS(308),
    [sym_comment] = ACTIONS(37),
  },
  [145] = {
    [anon_sym_COMMA] = ACTIONS(310),
    [anon_sym_SEMI] = ACTIONS(310),
    [anon_sym_STAR] = ACTIONS(310),
    [anon_sym_PLUS] = ACTIONS(312),
    [sym_important] = ACTIONS(310),
    [anon_sym_RPAREN] = ACTIONS(310),
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
  [146] = {
    [sym__value] = STATE(167),
    [sym_integer_value] = STATE(167),
    [sym_float_value] = STATE(167),
    [sym_call_expression] = STATE(167),
    [sym_binary_expression] = STATE(167),
    [sym_color_value] = ACTIONS(578),
    [sym_string_value] = ACTIONS(578),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(302),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(304),
    [sym_identifier] = ACTIONS(306),
    [sym_plain_value] = ACTIONS(580),
    [sym_comment] = ACTIONS(37),
  },
  [147] = {
    [sym__value] = STATE(111),
    [sym_integer_value] = STATE(111),
    [sym_float_value] = STATE(111),
    [sym_call_expression] = STATE(111),
    [sym_binary_expression] = STATE(111),
    [aux_sym_arguments_repeat1] = STATE(168),
    [sym_color_value] = ACTIONS(300),
    [sym_string_value] = ACTIONS(300),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(302),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(304),
    [sym_identifier] = ACTIONS(306),
    [sym_plain_value] = ACTIONS(308),
    [sym_comment] = ACTIONS(37),
  },
  [148] = {
    [anon_sym_SEMI] = ACTIONS(582),
    [anon_sym_STAR] = ACTIONS(582),
    [anon_sym_RBRACK] = ACTIONS(582),
    [anon_sym_PLUS] = ACTIONS(582),
    [anon_sym_LPAREN] = ACTIONS(582),
    [anon_sym_RPAREN] = ACTIONS(582),
    [anon_sym_not] = ACTIONS(584),
    [anon_sym_selector] = ACTIONS(584),
    [anon_sym_DASH] = ACTIONS(584),
    [anon_sym_SLASH] = ACTIONS(584),
    [sym_identifier] = ACTIONS(584),
    [sym_comment] = ACTIONS(37),
  },
  [149] = {
    [sym__value] = STATE(111),
    [sym_integer_value] = STATE(111),
    [sym_float_value] = STATE(111),
    [sym_call_expression] = STATE(111),
    [sym_binary_expression] = STATE(111),
    [aux_sym_arguments_repeat1] = STATE(149),
    [anon_sym_COMMA] = ACTIONS(586),
    [anon_sym_RPAREN] = ACTIONS(586),
    [sym_color_value] = ACTIONS(588),
    [sym_string_value] = ACTIONS(588),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(591),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(594),
    [sym_identifier] = ACTIONS(597),
    [sym_plain_value] = ACTIONS(600),
    [sym_comment] = ACTIONS(37),
  },
  [150] = {
    [aux_sym_arguments_repeat2] = STATE(170),
    [anon_sym_COMMA] = ACTIONS(453),
    [anon_sym_RPAREN] = ACTIONS(603),
    [sym_comment] = ACTIONS(37),
  },
  [151] = {
    [anon_sym_COMMA] = ACTIONS(475),
    [anon_sym_SEMI] = ACTIONS(475),
    [anon_sym_and] = ACTIONS(326),
    [anon_sym_or] = ACTIONS(326),
    [sym_comment] = ACTIONS(37),
  },
  [152] = {
    [ts_builtin_sym_end] = ACTIONS(605),
    [anon_sym_ATimport] = ACTIONS(607),
    [anon_sym_ATmedia] = ACTIONS(607),
    [anon_sym_ATcharset] = ACTIONS(607),
    [anon_sym_ATnamespace] = ACTIONS(607),
    [anon_sym_ATkeyframes] = ACTIONS(607),
    [anon_sym_RBRACE] = ACTIONS(605),
    [anon_sym_ATsupports] = ACTIONS(607),
    [sym_nesting_selector] = ACTIONS(605),
    [anon_sym_STAR] = ACTIONS(605),
    [anon_sym_DOT] = ACTIONS(605),
    [anon_sym_COLON] = ACTIONS(607),
    [anon_sym_COLON_COLON] = ACTIONS(605),
    [anon_sym_POUND] = ACTIONS(605),
    [anon_sym_LBRACK] = ACTIONS(605),
    [sym_string_value] = ACTIONS(605),
    [sym_identifier] = ACTIONS(605),
    [sym_at_keyword] = ACTIONS(607),
    [sym_comment] = ACTIONS(37),
  },
  [153] = {
    [aux_sym_import_statement_repeat1] = STATE(153),
    [anon_sym_COMMA] = ACTIONS(609),
    [anon_sym_SEMI] = ACTIONS(475),
    [sym_comment] = ACTIONS(37),
  },
  [154] = {
    [anon_sym_STAR] = ACTIONS(167),
    [anon_sym_PLUS] = ACTIONS(167),
    [anon_sym_RPAREN] = ACTIONS(612),
    [anon_sym_DASH] = ACTIONS(167),
    [anon_sym_SLASH] = ACTIONS(169),
    [sym_comment] = ACTIONS(37),
  },
  [155] = {
    [anon_sym_COMMA] = ACTIONS(614),
    [anon_sym_SEMI] = ACTIONS(614),
    [anon_sym_LBRACE] = ACTIONS(614),
    [anon_sym_RPAREN] = ACTIONS(614),
    [anon_sym_and] = ACTIONS(614),
    [anon_sym_or] = ACTIONS(614),
    [sym_comment] = ACTIONS(37),
  },
  [156] = {
    [sym_import_statement] = STATE(173),
    [sym_media_statement] = STATE(173),
    [sym_charset_statement] = STATE(173),
    [sym_namespace_statement] = STATE(173),
    [sym_keyframes_statement] = STATE(173),
    [sym_supports_statement] = STATE(173),
    [sym_at_rule] = STATE(173),
    [sym_rule_set] = STATE(173),
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
    [sym_declaration] = STATE(173),
    [aux_sym_block_repeat1] = STATE(173),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATmedia] = ACTIONS(9),
    [anon_sym_ATcharset] = ACTIONS(11),
    [anon_sym_ATnamespace] = ACTIONS(13),
    [anon_sym_ATkeyframes] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(616),
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
  [157] = {
    [anon_sym_RBRACE] = ACTIONS(618),
    [sym_from] = ACTIONS(618),
    [sym_to] = ACTIONS(618),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(618),
    [sym_comment] = ACTIONS(37),
  },
  [158] = {
    [ts_builtin_sym_end] = ACTIONS(620),
    [anon_sym_ATimport] = ACTIONS(622),
    [anon_sym_ATmedia] = ACTIONS(622),
    [anon_sym_ATcharset] = ACTIONS(622),
    [anon_sym_ATnamespace] = ACTIONS(622),
    [anon_sym_ATkeyframes] = ACTIONS(622),
    [anon_sym_RBRACE] = ACTIONS(620),
    [anon_sym_ATsupports] = ACTIONS(622),
    [sym_nesting_selector] = ACTIONS(620),
    [anon_sym_STAR] = ACTIONS(620),
    [anon_sym_DOT] = ACTIONS(620),
    [anon_sym_COLON] = ACTIONS(622),
    [anon_sym_COLON_COLON] = ACTIONS(620),
    [anon_sym_POUND] = ACTIONS(620),
    [anon_sym_LBRACK] = ACTIONS(620),
    [sym_string_value] = ACTIONS(620),
    [sym_identifier] = ACTIONS(620),
    [sym_at_keyword] = ACTIONS(622),
    [sym_comment] = ACTIONS(37),
  },
  [159] = {
    [sym_keyframe_block] = STATE(159),
    [sym_integer_value] = STATE(128),
    [aux_sym_keyframe_block_list_repeat1] = STATE(159),
    [anon_sym_RBRACE] = ACTIONS(624),
    [sym_from] = ACTIONS(626),
    [sym_to] = ACTIONS(626),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(629),
    [sym_comment] = ACTIONS(37),
  },
  [160] = {
    [sym__descendant_operator] = ACTIONS(582),
    [anon_sym_COMMA] = ACTIONS(582),
    [anon_sym_LBRACE] = ACTIONS(582),
    [anon_sym_DOT] = ACTIONS(582),
    [anon_sym_COLON] = ACTIONS(584),
    [anon_sym_COLON_COLON] = ACTIONS(582),
    [anon_sym_POUND] = ACTIONS(582),
    [anon_sym_LBRACK] = ACTIONS(582),
    [anon_sym_GT] = ACTIONS(582),
    [anon_sym_TILDE] = ACTIONS(582),
    [anon_sym_PLUS] = ACTIONS(582),
    [anon_sym_RPAREN] = ACTIONS(582),
    [sym_comment] = ACTIONS(37),
  },
  [161] = {
    [aux_sym_arguments_repeat2] = STATE(170),
    [anon_sym_COMMA] = ACTIONS(453),
    [anon_sym_RPAREN] = ACTIONS(632),
    [sym_comment] = ACTIONS(37),
  },
  [162] = {
    [sym__descendant_operator] = ACTIONS(634),
    [anon_sym_COMMA] = ACTIONS(634),
    [anon_sym_LBRACE] = ACTIONS(634),
    [anon_sym_DOT] = ACTIONS(634),
    [anon_sym_COLON] = ACTIONS(636),
    [anon_sym_COLON_COLON] = ACTIONS(634),
    [anon_sym_POUND] = ACTIONS(634),
    [anon_sym_LBRACK] = ACTIONS(634),
    [anon_sym_GT] = ACTIONS(634),
    [anon_sym_TILDE] = ACTIONS(634),
    [anon_sym_PLUS] = ACTIONS(634),
    [anon_sym_RPAREN] = ACTIONS(634),
    [sym_comment] = ACTIONS(37),
  },
  [163] = {
    [sym__value] = STATE(178),
    [sym_integer_value] = STATE(178),
    [sym_float_value] = STATE(178),
    [sym_call_expression] = STATE(178),
    [sym_binary_expression] = STATE(178),
    [aux_sym_declaration_repeat1] = STATE(179),
    [anon_sym_COMMA] = ACTIONS(638),
    [anon_sym_SEMI] = ACTIONS(640),
    [anon_sym_STAR] = ACTIONS(447),
    [anon_sym_PLUS] = ACTIONS(449),
    [sym_important] = ACTIONS(642),
    [sym_color_value] = ACTIONS(644),
    [sym_string_value] = ACTIONS(644),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(302),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(304),
    [anon_sym_DASH] = ACTIONS(449),
    [anon_sym_SLASH] = ACTIONS(449),
    [sym_identifier] = ACTIONS(306),
    [sym_plain_value] = ACTIONS(646),
    [sym_comment] = ACTIONS(37),
  },
  [164] = {
    [anon_sym_STAR] = ACTIONS(167),
    [anon_sym_RBRACK] = ACTIONS(648),
    [anon_sym_PLUS] = ACTIONS(167),
    [anon_sym_DASH] = ACTIONS(167),
    [anon_sym_SLASH] = ACTIONS(169),
    [sym_comment] = ACTIONS(37),
  },
  [165] = {
    [anon_sym_COMMA] = ACTIONS(435),
    [anon_sym_SEMI] = ACTIONS(435),
    [anon_sym_STAR] = ACTIONS(435),
    [anon_sym_PLUS] = ACTIONS(437),
    [sym_important] = ACTIONS(435),
    [anon_sym_RPAREN] = ACTIONS(435),
    [sym_color_value] = ACTIONS(435),
    [sym_string_value] = ACTIONS(435),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(437),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(437),
    [anon_sym_DASH] = ACTIONS(437),
    [anon_sym_SLASH] = ACTIONS(437),
    [sym_identifier] = ACTIONS(437),
    [sym_plain_value] = ACTIONS(437),
    [sym_comment] = ACTIONS(37),
  },
  [166] = {
    [sym__value] = STATE(111),
    [sym_integer_value] = STATE(111),
    [sym_float_value] = STATE(111),
    [sym_call_expression] = STATE(111),
    [sym_binary_expression] = STATE(111),
    [aux_sym_arguments_repeat1] = STATE(149),
    [aux_sym_arguments_repeat2] = STATE(182),
    [anon_sym_COMMA] = ACTIONS(453),
    [anon_sym_RPAREN] = ACTIONS(650),
    [sym_color_value] = ACTIONS(300),
    [sym_string_value] = ACTIONS(300),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(302),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(304),
    [sym_identifier] = ACTIONS(306),
    [sym_plain_value] = ACTIONS(308),
    [sym_comment] = ACTIONS(37),
  },
  [167] = {
    [anon_sym_COMMA] = ACTIONS(457),
    [anon_sym_SEMI] = ACTIONS(457),
    [anon_sym_STAR] = ACTIONS(457),
    [anon_sym_PLUS] = ACTIONS(459),
    [sym_important] = ACTIONS(457),
    [anon_sym_RPAREN] = ACTIONS(457),
    [sym_color_value] = ACTIONS(457),
    [sym_string_value] = ACTIONS(457),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(459),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(459),
    [anon_sym_DASH] = ACTIONS(459),
    [anon_sym_SLASH] = ACTIONS(459),
    [sym_identifier] = ACTIONS(459),
    [sym_plain_value] = ACTIONS(459),
    [sym_comment] = ACTIONS(37),
  },
  [168] = {
    [sym__value] = STATE(111),
    [sym_integer_value] = STATE(111),
    [sym_float_value] = STATE(111),
    [sym_call_expression] = STATE(111),
    [sym_binary_expression] = STATE(111),
    [aux_sym_arguments_repeat1] = STATE(149),
    [anon_sym_COMMA] = ACTIONS(652),
    [anon_sym_RPAREN] = ACTIONS(652),
    [sym_color_value] = ACTIONS(300),
    [sym_string_value] = ACTIONS(300),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(302),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(304),
    [sym_identifier] = ACTIONS(306),
    [sym_plain_value] = ACTIONS(308),
    [sym_comment] = ACTIONS(37),
  },
  [169] = {
    [anon_sym_SEMI] = ACTIONS(654),
    [anon_sym_STAR] = ACTIONS(654),
    [anon_sym_RBRACK] = ACTIONS(654),
    [anon_sym_PLUS] = ACTIONS(654),
    [anon_sym_LPAREN] = ACTIONS(654),
    [anon_sym_RPAREN] = ACTIONS(654),
    [anon_sym_not] = ACTIONS(656),
    [anon_sym_selector] = ACTIONS(656),
    [anon_sym_DASH] = ACTIONS(656),
    [anon_sym_SLASH] = ACTIONS(656),
    [sym_identifier] = ACTIONS(656),
    [sym_comment] = ACTIONS(37),
  },
  [170] = {
    [aux_sym_arguments_repeat2] = STATE(170),
    [anon_sym_COMMA] = ACTIONS(658),
    [anon_sym_RPAREN] = ACTIONS(652),
    [sym_comment] = ACTIONS(37),
  },
  [171] = {
    [anon_sym_COMMA] = ACTIONS(661),
    [anon_sym_SEMI] = ACTIONS(661),
    [anon_sym_LBRACE] = ACTIONS(661),
    [anon_sym_RPAREN] = ACTIONS(661),
    [anon_sym_and] = ACTIONS(661),
    [anon_sym_or] = ACTIONS(661),
    [sym_comment] = ACTIONS(37),
  },
  [172] = {
    [anon_sym_RBRACE] = ACTIONS(380),
    [sym_from] = ACTIONS(380),
    [sym_to] = ACTIONS(380),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(380),
    [sym_comment] = ACTIONS(37),
  },
  [173] = {
    [sym_import_statement] = STATE(135),
    [sym_media_statement] = STATE(135),
    [sym_charset_statement] = STATE(135),
    [sym_namespace_statement] = STATE(135),
    [sym_keyframes_statement] = STATE(135),
    [sym_supports_statement] = STATE(135),
    [sym_at_rule] = STATE(135),
    [sym_rule_set] = STATE(135),
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
    [sym_declaration] = STATE(135),
    [aux_sym_block_repeat1] = STATE(135),
    [anon_sym_ATimport] = ACTIONS(7),
    [anon_sym_ATmedia] = ACTIONS(9),
    [anon_sym_ATcharset] = ACTIONS(11),
    [anon_sym_ATnamespace] = ACTIONS(13),
    [anon_sym_ATkeyframes] = ACTIONS(15),
    [anon_sym_RBRACE] = ACTIONS(663),
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
  [174] = {
    [sym__descendant_operator] = ACTIONS(654),
    [anon_sym_COMMA] = ACTIONS(654),
    [anon_sym_LBRACE] = ACTIONS(654),
    [anon_sym_DOT] = ACTIONS(654),
    [anon_sym_COLON] = ACTIONS(656),
    [anon_sym_COLON_COLON] = ACTIONS(654),
    [anon_sym_POUND] = ACTIONS(654),
    [anon_sym_LBRACK] = ACTIONS(654),
    [anon_sym_GT] = ACTIONS(654),
    [anon_sym_TILDE] = ACTIONS(654),
    [anon_sym_PLUS] = ACTIONS(654),
    [anon_sym_RPAREN] = ACTIONS(654),
    [sym_comment] = ACTIONS(37),
  },
  [175] = {
    [sym__value] = STATE(184),
    [sym_integer_value] = STATE(184),
    [sym_float_value] = STATE(184),
    [sym_call_expression] = STATE(184),
    [sym_binary_expression] = STATE(184),
    [sym_color_value] = ACTIONS(665),
    [sym_string_value] = ACTIONS(665),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(302),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(304),
    [sym_identifier] = ACTIONS(306),
    [sym_plain_value] = ACTIONS(667),
    [sym_comment] = ACTIONS(37),
  },
  [176] = {
    [anon_sym_ATimport] = ACTIONS(669),
    [anon_sym_ATmedia] = ACTIONS(669),
    [anon_sym_ATcharset] = ACTIONS(669),
    [anon_sym_ATnamespace] = ACTIONS(669),
    [anon_sym_ATkeyframes] = ACTIONS(669),
    [anon_sym_RBRACE] = ACTIONS(671),
    [anon_sym_ATsupports] = ACTIONS(669),
    [sym_nesting_selector] = ACTIONS(671),
    [anon_sym_STAR] = ACTIONS(671),
    [anon_sym_DOT] = ACTIONS(671),
    [anon_sym_COLON] = ACTIONS(669),
    [anon_sym_COLON_COLON] = ACTIONS(671),
    [anon_sym_POUND] = ACTIONS(671),
    [anon_sym_LBRACK] = ACTIONS(671),
    [sym_string_value] = ACTIONS(671),
    [sym_identifier] = ACTIONS(671),
    [sym_at_keyword] = ACTIONS(669),
    [sym_comment] = ACTIONS(37),
  },
  [177] = {
    [anon_sym_SEMI] = ACTIONS(673),
    [sym_comment] = ACTIONS(37),
  },
  [178] = {
    [anon_sym_COMMA] = ACTIONS(675),
    [anon_sym_SEMI] = ACTIONS(675),
    [anon_sym_STAR] = ACTIONS(447),
    [anon_sym_PLUS] = ACTIONS(449),
    [sym_important] = ACTIONS(675),
    [sym_color_value] = ACTIONS(675),
    [sym_string_value] = ACTIONS(675),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(677),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(677),
    [anon_sym_DASH] = ACTIONS(449),
    [anon_sym_SLASH] = ACTIONS(449),
    [sym_identifier] = ACTIONS(677),
    [sym_plain_value] = ACTIONS(677),
    [sym_comment] = ACTIONS(37),
  },
  [179] = {
    [sym__value] = STATE(178),
    [sym_integer_value] = STATE(178),
    [sym_float_value] = STATE(178),
    [sym_call_expression] = STATE(178),
    [sym_binary_expression] = STATE(178),
    [aux_sym_declaration_repeat1] = STATE(187),
    [anon_sym_COMMA] = ACTIONS(638),
    [anon_sym_SEMI] = ACTIONS(673),
    [sym_important] = ACTIONS(679),
    [sym_color_value] = ACTIONS(644),
    [sym_string_value] = ACTIONS(644),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(302),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(304),
    [sym_identifier] = ACTIONS(306),
    [sym_plain_value] = ACTIONS(646),
    [sym_comment] = ACTIONS(37),
  },
  [180] = {
    [sym__descendant_operator] = ACTIONS(681),
    [anon_sym_COMMA] = ACTIONS(681),
    [anon_sym_LBRACE] = ACTIONS(681),
    [anon_sym_DOT] = ACTIONS(681),
    [anon_sym_COLON] = ACTIONS(683),
    [anon_sym_COLON_COLON] = ACTIONS(681),
    [anon_sym_POUND] = ACTIONS(681),
    [anon_sym_LBRACK] = ACTIONS(681),
    [anon_sym_GT] = ACTIONS(681),
    [anon_sym_TILDE] = ACTIONS(681),
    [anon_sym_PLUS] = ACTIONS(681),
    [anon_sym_RPAREN] = ACTIONS(681),
    [sym_comment] = ACTIONS(37),
  },
  [181] = {
    [anon_sym_COMMA] = ACTIONS(582),
    [anon_sym_SEMI] = ACTIONS(582),
    [anon_sym_STAR] = ACTIONS(582),
    [anon_sym_PLUS] = ACTIONS(584),
    [sym_important] = ACTIONS(582),
    [anon_sym_RPAREN] = ACTIONS(582),
    [sym_color_value] = ACTIONS(582),
    [sym_string_value] = ACTIONS(582),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(584),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(584),
    [anon_sym_DASH] = ACTIONS(584),
    [anon_sym_SLASH] = ACTIONS(584),
    [sym_identifier] = ACTIONS(584),
    [sym_plain_value] = ACTIONS(584),
    [sym_comment] = ACTIONS(37),
  },
  [182] = {
    [aux_sym_arguments_repeat2] = STATE(170),
    [anon_sym_COMMA] = ACTIONS(453),
    [anon_sym_RPAREN] = ACTIONS(685),
    [sym_comment] = ACTIONS(37),
  },
  [183] = {
    [anon_sym_RBRACE] = ACTIONS(506),
    [sym_from] = ACTIONS(506),
    [sym_to] = ACTIONS(506),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(506),
    [sym_comment] = ACTIONS(37),
  },
  [184] = {
    [anon_sym_COMMA] = ACTIONS(687),
    [anon_sym_SEMI] = ACTIONS(687),
    [anon_sym_STAR] = ACTIONS(447),
    [anon_sym_PLUS] = ACTIONS(449),
    [sym_important] = ACTIONS(687),
    [sym_color_value] = ACTIONS(687),
    [sym_string_value] = ACTIONS(687),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(689),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(689),
    [anon_sym_DASH] = ACTIONS(449),
    [anon_sym_SLASH] = ACTIONS(449),
    [sym_identifier] = ACTIONS(689),
    [sym_plain_value] = ACTIONS(689),
    [sym_comment] = ACTIONS(37),
  },
  [185] = {
    [anon_sym_ATimport] = ACTIONS(691),
    [anon_sym_ATmedia] = ACTIONS(691),
    [anon_sym_ATcharset] = ACTIONS(691),
    [anon_sym_ATnamespace] = ACTIONS(691),
    [anon_sym_ATkeyframes] = ACTIONS(691),
    [anon_sym_RBRACE] = ACTIONS(693),
    [anon_sym_ATsupports] = ACTIONS(691),
    [sym_nesting_selector] = ACTIONS(693),
    [anon_sym_STAR] = ACTIONS(693),
    [anon_sym_DOT] = ACTIONS(693),
    [anon_sym_COLON] = ACTIONS(691),
    [anon_sym_COLON_COLON] = ACTIONS(693),
    [anon_sym_POUND] = ACTIONS(693),
    [anon_sym_LBRACK] = ACTIONS(693),
    [sym_string_value] = ACTIONS(693),
    [sym_identifier] = ACTIONS(693),
    [sym_at_keyword] = ACTIONS(691),
    [sym_comment] = ACTIONS(37),
  },
  [186] = {
    [anon_sym_SEMI] = ACTIONS(695),
    [sym_comment] = ACTIONS(37),
  },
  [187] = {
    [sym__value] = STATE(178),
    [sym_integer_value] = STATE(178),
    [sym_float_value] = STATE(178),
    [sym_call_expression] = STATE(178),
    [sym_binary_expression] = STATE(178),
    [aux_sym_declaration_repeat1] = STATE(187),
    [anon_sym_COMMA] = ACTIONS(697),
    [anon_sym_SEMI] = ACTIONS(687),
    [sym_important] = ACTIONS(687),
    [sym_color_value] = ACTIONS(700),
    [sym_string_value] = ACTIONS(700),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(703),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(706),
    [sym_identifier] = ACTIONS(709),
    [sym_plain_value] = ACTIONS(712),
    [sym_comment] = ACTIONS(37),
  },
  [188] = {
    [anon_sym_COMMA] = ACTIONS(654),
    [anon_sym_SEMI] = ACTIONS(654),
    [anon_sym_STAR] = ACTIONS(654),
    [anon_sym_PLUS] = ACTIONS(656),
    [sym_important] = ACTIONS(654),
    [anon_sym_RPAREN] = ACTIONS(654),
    [sym_color_value] = ACTIONS(654),
    [sym_string_value] = ACTIONS(654),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_PLUS_SLASH] = ACTIONS(656),
    [aux_sym_SLASH_LPAREN_PLUS_PIPE_DASH_PIPE_RPAREN_BSLASHd_STAR_LPAREN_DOT_BSLASHd_PLUS_PIPE_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_PIPE_DOT_BSLASHd_PLUS_LBRACKeE_RBRACK_LPAREN_DASH_PIPE_RPAREN_BSLASHd_PLUS_RPAREN_SLASH] = ACTIONS(656),
    [anon_sym_DASH] = ACTIONS(656),
    [anon_sym_SLASH] = ACTIONS(656),
    [sym_identifier] = ACTIONS(656),
    [sym_plain_value] = ACTIONS(656),
    [sym_comment] = ACTIONS(37),
  },
  [189] = {
    [anon_sym_ATimport] = ACTIONS(715),
    [anon_sym_ATmedia] = ACTIONS(715),
    [anon_sym_ATcharset] = ACTIONS(715),
    [anon_sym_ATnamespace] = ACTIONS(715),
    [anon_sym_ATkeyframes] = ACTIONS(715),
    [anon_sym_RBRACE] = ACTIONS(717),
    [anon_sym_ATsupports] = ACTIONS(715),
    [sym_nesting_selector] = ACTIONS(717),
    [anon_sym_STAR] = ACTIONS(717),
    [anon_sym_DOT] = ACTIONS(717),
    [anon_sym_COLON] = ACTIONS(715),
    [anon_sym_COLON_COLON] = ACTIONS(717),
    [anon_sym_POUND] = ACTIONS(717),
    [anon_sym_LBRACK] = ACTIONS(717),
    [sym_string_value] = ACTIONS(717),
    [sym_identifier] = ACTIONS(717),
    [sym_at_keyword] = ACTIONS(715),
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
  [137] = {.count = 1, .reusable = false}, REDUCE(sym__value, 1, .alias_sequence_id = 2),
  [139] = {.count = 1, .reusable = true}, SHIFT(61),
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
  [366] = {.count = 1, .reusable = true}, SHIFT(130),
  [368] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_selector, 3, .alias_sequence_id = 4),
  [370] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_selector, 3, .alias_sequence_id = 4),
  [372] = {.count = 1, .reusable = true}, SHIFT(132),
  [374] = {.count = 1, .reusable = false}, SHIFT(132),
  [376] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_selector, 3, .alias_sequence_id = 9),
  [378] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_selector, 3, .alias_sequence_id = 9),
  [380] = {.count = 1, .reusable = true}, REDUCE(sym_block, 2),
  [382] = {.count = 1, .reusable = false}, REDUCE(sym_block, 2),
  [384] = {.count = 1, .reusable = false}, SHIFT(133),
  [386] = {.count = 1, .reusable = true}, SHIFT(134),
  [388] = {.count = 1, .reusable = true}, REDUCE(sym_at_rule, 3),
  [390] = {.count = 1, .reusable = false}, REDUCE(sym_at_rule, 3),
  [392] = {.count = 1, .reusable = true}, SHIFT(137),
  [394] = {.count = 1, .reusable = true}, REDUCE(sym_descendant_selector, 3),
  [396] = {.count = 1, .reusable = false}, REDUCE(sym_descendant_selector, 3),
  [398] = {.count = 1, .reusable = true}, REDUCE(aux_sym_selectors_repeat1, 2),
  [400] = {.count = 1, .reusable = true}, REDUCE(sym_class_selector, 3, .alias_sequence_id = 10),
  [402] = {.count = 1, .reusable = false}, REDUCE(sym_class_selector, 3, .alias_sequence_id = 10),
  [404] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_selector, 3, .alias_sequence_id = 10),
  [406] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_selector, 3, .alias_sequence_id = 10),
  [408] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_element_selector, 3, .alias_sequence_id = 11),
  [410] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_element_selector, 3, .alias_sequence_id = 11),
  [412] = {.count = 1, .reusable = true}, REDUCE(sym_id_selector, 3, .alias_sequence_id = 12),
  [414] = {.count = 1, .reusable = false}, REDUCE(sym_id_selector, 3, .alias_sequence_id = 12),
  [416] = {.count = 1, .reusable = true}, SHIFT(140),
  [418] = {.count = 1, .reusable = true}, SHIFT(141),
  [420] = {.count = 1, .reusable = true}, REDUCE(sym_child_selector, 3),
  [422] = {.count = 1, .reusable = false}, REDUCE(sym_child_selector, 3),
  [424] = {.count = 1, .reusable = true}, REDUCE(sym_sibling_selector, 3),
  [426] = {.count = 1, .reusable = false}, REDUCE(sym_sibling_selector, 3),
  [428] = {.count = 1, .reusable = true}, REDUCE(sym_adjacent_sibling_selector, 3),
  [430] = {.count = 1, .reusable = false}, REDUCE(sym_adjacent_sibling_selector, 3),
  [432] = {.count = 2, .reusable = true}, REDUCE(aux_sym_selectors_repeat1, 2), SHIFT_REPEAT(48),
  [435] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 2),
  [437] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 2),
  [439] = {.count = 1, .reusable = false}, SHIFT(142),
  [441] = {.count = 1, .reusable = false}, SHIFT(143),
  [443] = {.count = 1, .reusable = true}, SHIFT(144),
  [445] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 1),
  [447] = {.count = 1, .reusable = true}, SHIFT(146),
  [449] = {.count = 1, .reusable = false}, SHIFT(146),
  [451] = {.count = 1, .reusable = false}, REDUCE(aux_sym_arguments_repeat1, 1),
  [453] = {.count = 1, .reusable = true}, SHIFT(147),
  [455] = {.count = 1, .reusable = true}, SHIFT(148),
  [457] = {.count = 1, .reusable = true}, REDUCE(sym_binary_expression, 3),
  [459] = {.count = 1, .reusable = false}, REDUCE(sym_binary_expression, 3),
  [461] = {.count = 1, .reusable = true}, REDUCE(sym_import_statement, 4),
  [463] = {.count = 1, .reusable = false}, REDUCE(sym_import_statement, 4),
  [465] = {.count = 1, .reusable = true}, SHIFT(152),
  [467] = {.count = 1, .reusable = true}, SHIFT(154),
  [469] = {.count = 1, .reusable = false}, SHIFT(154),
  [471] = {.count = 1, .reusable = true}, REDUCE(sym_parenthesized_query, 3),
  [473] = {.count = 1, .reusable = true}, SHIFT(155),
  [475] = {.count = 1, .reusable = true}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [477] = {.count = 1, .reusable = true}, REDUCE(sym_binary_query, 3),
  [479] = {.count = 1, .reusable = true}, REDUCE(sym_media_statement, 4),
  [481] = {.count = 1, .reusable = false}, REDUCE(sym_media_statement, 4),
  [483] = {.count = 2, .reusable = true}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(72),
  [486] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_statement, 4, .alias_sequence_id = 13),
  [488] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_statement, 4, .alias_sequence_id = 13),
  [490] = {.count = 1, .reusable = true}, REDUCE(sym_keyframe_block_list, 2),
  [492] = {.count = 1, .reusable = false}, REDUCE(sym_keyframe_block_list, 2),
  [494] = {.count = 1, .reusable = true}, SHIFT(156),
  [496] = {.count = 1, .reusable = true}, SHIFT(158),
  [498] = {.count = 1, .reusable = true}, SHIFT(160),
  [500] = {.count = 1, .reusable = true}, SHIFT(162),
  [502] = {.count = 1, .reusable = true}, SHIFT(163),
  [504] = {.count = 1, .reusable = false}, SHIFT(163),
  [506] = {.count = 1, .reusable = true}, REDUCE(sym_block, 3),
  [508] = {.count = 1, .reusable = false}, REDUCE(sym_block, 3),
  [510] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(2),
  [513] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(3),
  [516] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(4),
  [519] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(5),
  [522] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(6),
  [525] = {.count = 1, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2),
  [527] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(7),
  [530] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(18),
  [533] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(8),
  [536] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(9),
  [539] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(10),
  [542] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(11),
  [545] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(12),
  [548] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(13),
  [551] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(90),
  [554] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(15),
  [557] = {.count = 1, .reusable = true}, REDUCE(sym_at_rule, 4),
  [559] = {.count = 1, .reusable = false}, REDUCE(sym_at_rule, 4),
  [561] = {.count = 2, .reusable = true}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(92),
  [564] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_selector, 4, .alias_sequence_id = 10),
  [566] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_selector, 4, .alias_sequence_id = 10),
  [568] = {.count = 1, .reusable = true}, SHIFT(164),
  [570] = {.count = 1, .reusable = false}, SHIFT(164),
  [572] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_selector, 4, .alias_sequence_id = 14),
  [574] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_selector, 4, .alias_sequence_id = 14),
  [576] = {.count = 1, .reusable = true}, SHIFT(165),
  [578] = {.count = 1, .reusable = true}, SHIFT(167),
  [580] = {.count = 1, .reusable = false}, SHIFT(167),
  [582] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 3),
  [584] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 3),
  [586] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2),
  [588] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(111),
  [591] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(108),
  [594] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(109),
  [597] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(110),
  [600] = {.count = 2, .reusable = false}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(111),
  [603] = {.count = 1, .reusable = true}, SHIFT(169),
  [605] = {.count = 1, .reusable = true}, REDUCE(sym_import_statement, 5),
  [607] = {.count = 1, .reusable = false}, REDUCE(sym_import_statement, 5),
  [609] = {.count = 2, .reusable = true}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(114),
  [612] = {.count = 1, .reusable = true}, SHIFT(171),
  [614] = {.count = 1, .reusable = true}, REDUCE(sym_selector_query, 4),
  [616] = {.count = 1, .reusable = true}, SHIFT(172),
  [618] = {.count = 1, .reusable = true}, REDUCE(sym_keyframe_block, 2),
  [620] = {.count = 1, .reusable = true}, REDUCE(sym_keyframe_block_list, 3),
  [622] = {.count = 1, .reusable = false}, REDUCE(sym_keyframe_block_list, 3),
  [624] = {.count = 1, .reusable = true}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2),
  [626] = {.count = 2, .reusable = true}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(128),
  [629] = {.count = 2, .reusable = true}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(29),
  [632] = {.count = 1, .reusable = true}, SHIFT(174),
  [634] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_selector, 5, .alias_sequence_id = 9),
  [636] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_selector, 5, .alias_sequence_id = 9),
  [638] = {.count = 1, .reusable = true}, SHIFT(175),
  [640] = {.count = 1, .reusable = true}, SHIFT(176),
  [642] = {.count = 1, .reusable = true}, SHIFT(177),
  [644] = {.count = 1, .reusable = true}, SHIFT(178),
  [646] = {.count = 1, .reusable = false}, SHIFT(178),
  [648] = {.count = 1, .reusable = true}, SHIFT(180),
  [650] = {.count = 1, .reusable = true}, SHIFT(181),
  [652] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arguments_repeat2, 2),
  [654] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 4),
  [656] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 4),
  [658] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(147),
  [661] = {.count = 1, .reusable = true}, REDUCE(sym_feature_query, 5, .alias_sequence_id = 15),
  [663] = {.count = 1, .reusable = true}, SHIFT(183),
  [665] = {.count = 1, .reusable = true}, SHIFT(184),
  [667] = {.count = 1, .reusable = false}, SHIFT(184),
  [669] = {.count = 1, .reusable = false}, REDUCE(sym_declaration, 4, .alias_sequence_id = 16),
  [671] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 4, .alias_sequence_id = 16),
  [673] = {.count = 1, .reusable = true}, SHIFT(185),
  [675] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 1),
  [677] = {.count = 1, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 1),
  [679] = {.count = 1, .reusable = true}, SHIFT(186),
  [681] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_selector, 6, .alias_sequence_id = 14),
  [683] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_selector, 6, .alias_sequence_id = 14),
  [685] = {.count = 1, .reusable = true}, SHIFT(188),
  [687] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2),
  [689] = {.count = 1, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2),
  [691] = {.count = 1, .reusable = false}, REDUCE(sym_declaration, 5, .alias_sequence_id = 16),
  [693] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 5, .alias_sequence_id = 16),
  [695] = {.count = 1, .reusable = true}, SHIFT(189),
  [697] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(175),
  [700] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(178),
  [703] = {.count = 2, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(108),
  [706] = {.count = 2, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(109),
  [709] = {.count = 2, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(110),
  [712] = {.count = 2, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(178),
  [715] = {.count = 1, .reusable = false}, REDUCE(sym_declaration, 6, .alias_sequence_id = 16),
  [717] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 6, .alias_sequence_id = 16),
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
