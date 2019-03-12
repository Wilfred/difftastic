#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 240
#define SYMBOL_COUNT 102
#define ALIAS_COUNT 10
#define TOKEN_COUNT 52
#define EXTERNAL_TOKEN_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 6

enum {
  anon_sym_ATimport = 1,
  anon_sym_COMMA = 2,
  anon_sym_SEMI = 3,
  anon_sym_ATmedia = 4,
  anon_sym_ATcharset = 5,
  anon_sym_ATnamespace = 6,
  anon_sym_ATkeyframes = 7,
  aux_sym_keyframes_statement_token1 = 8,
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
  anon_sym_only = 38,
  anon_sym_selector = 39,
  aux_sym_color_value_token1 = 40,
  sym_string_value = 41,
  aux_sym_integer_value_token1 = 42,
  aux_sym_float_value_token1 = 43,
  sym_unit = 44,
  anon_sym_DASH = 45,
  anon_sym_SLASH = 46,
  sym_identifier = 47,
  sym_at_keyword = 48,
  sym_comment = 49,
  sym_plain_value = 50,
  sym__descendant_operator = 51,
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
  alias_sym_id_name = 103,
  alias_sym_namespace_name = 104,
  alias_sym_feature_name = 105,
  alias_sym_property_name = 106,
  alias_sym_keyword_query = 107,
  alias_sym_class_name = 108,
  alias_sym_tag_name = 109,
  alias_sym_function_name = 110,
  alias_sym_keyframes_name = 111,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_ATimport] = "@import",
  [anon_sym_COMMA] = ",",
  [anon_sym_SEMI] = ";",
  [anon_sym_ATmedia] = "@media",
  [anon_sym_ATcharset] = "@charset",
  [anon_sym_ATnamespace] = "@namespace",
  [anon_sym_ATkeyframes] = "@keyframes",
  [aux_sym_keyframes_statement_token1] = "at_keyword",
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
  [aux_sym_color_value_token1] = "color_value_token1",
  [sym_string_value] = "string_value",
  [aux_sym_integer_value_token1] = "integer_value_token1",
  [aux_sym_float_value_token1] = "float_value_token1",
  [sym_unit] = "unit",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [sym_identifier] = "identifier",
  [sym_at_keyword] = "at_keyword",
  [sym_comment] = "comment",
  [sym_plain_value] = "plain_value",
  [sym__descendant_operator] = "_descendant_operator",
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
  [alias_sym_id_name] = "id_name",
  [alias_sym_namespace_name] = "namespace_name",
  [alias_sym_feature_name] = "feature_name",
  [alias_sym_property_name] = "property_name",
  [alias_sym_keyword_query] = "keyword_query",
  [alias_sym_class_name] = "class_name",
  [alias_sym_tag_name] = "tag_name",
  [alias_sym_function_name] = "function_name",
  [alias_sym_keyframes_name] = "keyframes_name",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
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
  [aux_sym_keyframes_statement_token1] = {
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
  [aux_sym_color_value_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_string_value] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_integer_value_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_value_token1] = {
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
  [sym__descendant_operator] = {
    .visible = false,
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
  [alias_sym_id_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_namespace_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_feature_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_property_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_keyword_query] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_class_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_tag_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_function_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_keyframes_name] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[17][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [1] = {
    [0] = alias_sym_tag_name,
  },
  [2] = {
    [0] = alias_sym_keyword_query,
  },
  [3] = {
    [0] = sym_plain_value,
  },
  [4] = {
    [1] = alias_sym_tag_name,
  },
  [5] = {
    [1] = alias_sym_class_name,
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
    [0] = alias_sym_property_name,
  },
  [14] = {
    [1] = alias_sym_namespace_name,
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
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '$')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(6);
      if (lookahead == '\'')
        ADVANCE(7);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '*')
        ADVANCE(10);
      if (lookahead == '+')
        ADVANCE(11);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(13);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == ':')
        ADVANCE(16);
      if (lookahead == ';')
        ADVANCE(17);
      if (lookahead == '=')
        ADVANCE(18);
      if (lookahead == '>')
        ADVANCE(19);
      if (lookahead == '@')
        ADVANCE(20);
      if (lookahead == '[')
        ADVANCE(21);
      if (lookahead == ']')
        ADVANCE(22);
      if (lookahead == '^')
        ADVANCE(23);
      if (lookahead == 'a')
        ADVANCE(24);
      if (lookahead == 'f')
        ADVANCE(25);
      if (lookahead == 'n')
        ADVANCE(26);
      if (lookahead == 'o')
        ADVANCE(27);
      if (lookahead == 's')
        ADVANCE(28);
      if (lookahead == 't')
        ADVANCE(29);
      if (lookahead == '{')
        ADVANCE(30);
      if (lookahead == '|')
        ADVANCE(31);
      if (lookahead == '}')
        ADVANCE(32);
      if (lookahead == '~')
        ADVANCE(33);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(35);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'd'))
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(37);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == 'i')
        ADVANCE(38);
      END_STATE();
    case 3:
      if (lookahead == '"')
        ADVANCE(39);
      if (lookahead == '\\')
        ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 5:
      if (lookahead == '=')
        ADVANCE(41);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_nesting_selector);
      END_STATE();
    case 7:
      if (lookahead == '\'')
        ADVANCE(39);
      if (lookahead == '\\')
        ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=')
        ADVANCE(43);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.')
        ADVANCE(44);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(46);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.')
        ADVANCE(44);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(46);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(47);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*')
        ADVANCE(48);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':')
        ADVANCE(49);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 20:
      if (lookahead == 'c')
        ADVANCE(50);
      if (lookahead == 'i')
        ADVANCE(51);
      if (lookahead == 'k')
        ADVANCE(52);
      if (lookahead == 'm')
        ADVANCE(53);
      if (lookahead == 'n')
        ADVANCE(54);
      if (lookahead == 's')
        ADVANCE(55);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(57);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 23:
      if (lookahead == '=')
        ADVANCE(58);
      END_STATE();
    case 24:
      if (lookahead == 'n')
        ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(60);
      END_STATE();
    case 25:
      if (lookahead == 'r')
        ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(60);
      END_STATE();
    case 26:
      if (lookahead == 'o')
        ADVANCE(62);
      END_STATE();
    case 27:
      if (lookahead == 'n')
        ADVANCE(63);
      if (lookahead == 'r')
        ADVANCE(64);
      END_STATE();
    case 28:
      if (lookahead == 'e')
        ADVANCE(65);
      END_STATE();
    case 29:
      if (lookahead == 'o')
        ADVANCE(66);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 31:
      if (lookahead == '=')
        ADVANCE(67);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '=')
        ADVANCE(68);
      END_STATE();
    case 34:
      if (lookahead == '-')
        ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(60);
      END_STATE();
    case 35:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '$')
        ADVANCE(5);
      if (lookahead == '&')
        ADVANCE(6);
      if (lookahead == '\'')
        ADVANCE(7);
      if (lookahead == '(')
        ADVANCE(71);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '*')
        ADVANCE(10);
      if (lookahead == '+')
        ADVANCE(11);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(13);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == ':')
        ADVANCE(16);
      if (lookahead == ';')
        ADVANCE(17);
      if (lookahead == '=')
        ADVANCE(18);
      if (lookahead == '>')
        ADVANCE(19);
      if (lookahead == '@')
        ADVANCE(20);
      if (lookahead == '[')
        ADVANCE(21);
      if (lookahead == ']')
        ADVANCE(22);
      if (lookahead == '^')
        ADVANCE(23);
      if (lookahead == 'a')
        ADVANCE(72);
      if (lookahead == 'f')
        ADVANCE(73);
      if (lookahead == 'n')
        ADVANCE(26);
      if (lookahead == 'o')
        ADVANCE(27);
      if (lookahead == 's')
        ADVANCE(28);
      if (lookahead == 't')
        ADVANCE(29);
      if (lookahead == '{')
        ADVANCE(30);
      if (lookahead == '|')
        ADVANCE(31);
      if (lookahead == '}')
        ADVANCE(32);
      if (lookahead == '~')
        ADVANCE(33);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(35);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(46);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(60);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.')
        ADVANCE(44);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(60);
      END_STATE();
    case 38:
      if (lookahead == 'm')
        ADVANCE(76);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_string_value);
      END_STATE();
    case 40:
      if (lookahead == '\n')
        ADVANCE(3);
      if (lookahead == '"')
        ADVANCE(77);
      if (lookahead == '\\')
        ADVANCE(40);
      if (lookahead != 0)
        ADVANCE(3);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_DOLLAR_EQ);
      END_STATE();
    case 42:
      if (lookahead == '\n')
        ADVANCE(7);
      if (lookahead == '\'')
        ADVANCE(78);
      if (lookahead == '\\')
        ADVANCE(42);
      if (lookahead != 0)
        ADVANCE(7);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(47);
      END_STATE();
    case 45:
      if (lookahead == '-')
        ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(79);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.')
        ADVANCE(44);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(47);
      END_STATE();
    case 48:
      if (lookahead == '*')
        ADVANCE(80);
      if (lookahead != 0)
        ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'h')
        ADVANCE(81);
      if (lookahead == 'k')
        ADVANCE(82);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(57);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(82);
      if (lookahead == 'm')
        ADVANCE(83);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(57);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e')
        ADVANCE(84);
      if (lookahead == 'k')
        ADVANCE(82);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(57);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e')
        ADVANCE(85);
      if (lookahead == 'k')
        ADVANCE(82);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(57);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a')
        ADVANCE(86);
      if (lookahead == 'k')
        ADVANCE(82);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(57);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(82);
      if (lookahead == 'u')
        ADVANCE(87);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(57);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(82);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 59:
      if (lookahead == 'd')
        ADVANCE(88);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(89);
      END_STATE();
    case 61:
      if (lookahead == 'o')
        ADVANCE(90);
      END_STATE();
    case 62:
      if (lookahead == 't')
        ADVANCE(91);
      END_STATE();
    case 63:
      if (lookahead == 'l')
        ADVANCE(92);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 65:
      if (lookahead == 'l')
        ADVANCE(93);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_to);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(79);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(89);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 72:
      if (lookahead == 'n')
        ADVANCE(59);
      END_STATE();
    case 73:
      if (lookahead == 'r')
        ADVANCE(61);
      END_STATE();
    case 74:
      if (lookahead == '-')
        ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(89);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.')
        ADVANCE(44);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(89);
      END_STATE();
    case 76:
      if (lookahead == 'p')
        ADVANCE(97);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == '"')
        ADVANCE(39);
      if (lookahead == '\\')
        ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(3);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == '\'')
        ADVANCE(39);
      if (lookahead == '\\')
        ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(7);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(79);
      END_STATE();
    case 80:
      if (lookahead == '*')
        ADVANCE(80);
      if (lookahead == '/')
        ADVANCE(98);
      if (lookahead != 0)
        ADVANCE(48);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a')
        ADVANCE(99);
      if (lookahead == 'k')
        ADVANCE(82);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(57);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e')
        ADVANCE(100);
      if (lookahead == 'k')
        ADVANCE(82);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(57);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(82);
      if (lookahead == 'p')
        ADVANCE(101);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(57);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(82);
      if (lookahead == 'y')
        ADVANCE(102);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(57);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd')
        ADVANCE(103);
      if (lookahead == 'k')
        ADVANCE(82);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(57);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(82);
      if (lookahead == 'm')
        ADVANCE(104);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(57);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(82);
      if (lookahead == 'p')
        ADVANCE(105);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(57);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(106);
      END_STATE();
    case 90:
      if (lookahead == 'm')
        ADVANCE(107);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 92:
      if (lookahead == 'y')
        ADVANCE(108);
      END_STATE();
    case 93:
      if (lookahead == 'e')
        ADVANCE(109);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(106);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-')
        ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(106);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.')
        ADVANCE(44);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(106);
      END_STATE();
    case 97:
      if (lookahead == 'o')
        ADVANCE(113);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(82);
      if (lookahead == 'r')
        ADVANCE(114);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(57);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(82);
      if (lookahead == 'y')
        ADVANCE(115);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(57);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(82);
      if (lookahead == 'o')
        ADVANCE(116);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(57);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f')
        ADVANCE(117);
      if (lookahead == 'k')
        ADVANCE(82);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(57);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i')
        ADVANCE(118);
      if (lookahead == 'k')
        ADVANCE(82);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(57);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e')
        ADVANCE(119);
      if (lookahead == 'k')
        ADVANCE(82);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(57);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(82);
      if (lookahead == 'p')
        ADVANCE(120);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(57);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(121);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_from);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_only);
      END_STATE();
    case 109:
      if (lookahead == 'c')
        ADVANCE(122);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(121);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-')
        ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(121);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.')
        ADVANCE(44);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(121);
      END_STATE();
    case 113:
      if (lookahead == 'r')
        ADVANCE(126);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(82);
      if (lookahead == 's')
        ADVANCE(127);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(57);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f')
        ADVANCE(128);
      if (lookahead == 'k')
        ADVANCE(82);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(57);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(82);
      if (lookahead == 'r')
        ADVANCE(129);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(57);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(82);
      if (lookahead == 'r')
        ADVANCE(130);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(57);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a')
        ADVANCE(131);
      if (lookahead == 'k')
        ADVANCE(82);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(57);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(82);
      if (lookahead == 's')
        ADVANCE(132);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(57);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(82);
      if (lookahead == 'o')
        ADVANCE(133);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(57);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(134);
      END_STATE();
    case 122:
      if (lookahead == 't')
        ADVANCE(135);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(134);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-')
        ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(134);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.')
        ADVANCE(44);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(134);
      END_STATE();
    case 126:
      if (lookahead == 't')
        ADVANCE(139);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e')
        ADVANCE(140);
      if (lookahead == 'k')
        ADVANCE(82);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(57);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(82);
      if (lookahead == 'r')
        ADVANCE(141);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(57);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(82);
      if (lookahead == 't')
        ADVANCE(142);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(57);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a')
        ADVANCE(143);
      if (lookahead == 'k')
        ADVANCE(82);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(57);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_ATmedia);
      if (lookahead == 'k')
        ADVANCE(82);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(57);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(82);
      if (lookahead == 'p')
        ADVANCE(144);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(57);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(82);
      if (lookahead == 'r')
        ADVANCE(145);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(57);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(146);
      END_STATE();
    case 135:
      if (lookahead == 'o')
        ADVANCE(147);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(146);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-')
        ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(146);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.')
        ADVANCE(44);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(146);
      END_STATE();
    case 139:
      if (lookahead == 'a')
        ADVANCE(151);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(82);
      if (lookahead == 't')
        ADVANCE(152);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(57);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a')
        ADVANCE(153);
      if (lookahead == 'k')
        ADVANCE(82);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(57);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_ATimport);
      if (lookahead == 'k')
        ADVANCE(82);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(57);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(82);
      if (lookahead == 'm')
        ADVANCE(154);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(57);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a')
        ADVANCE(155);
      if (lookahead == 'k')
        ADVANCE(82);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(57);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(82);
      if (lookahead == 't')
        ADVANCE(156);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(57);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(157);
      END_STATE();
    case 147:
      if (lookahead == 'r')
        ADVANCE(158);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(157);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-')
        ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(157);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.')
        ADVANCE(44);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(161);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(157);
      END_STATE();
    case 151:
      if (lookahead == 'n')
        ADVANCE(162);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_ATcharset);
      if (lookahead == 'k')
        ADVANCE(82);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(57);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(82);
      if (lookahead == 'm')
        ADVANCE(163);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(57);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e')
        ADVANCE(164);
      if (lookahead == 'k')
        ADVANCE(82);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(57);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c')
        ADVANCE(165);
      if (lookahead == 'k')
        ADVANCE(82);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(57);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(82);
      if (lookahead == 's')
        ADVANCE(166);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(57);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_selector);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(79);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-')
        ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(79);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.')
        ADVANCE(44);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(46);
      END_STATE();
    case 162:
      if (lookahead == 't')
        ADVANCE(167);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e')
        ADVANCE(168);
      if (lookahead == 'k')
        ADVANCE(82);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(57);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(82);
      if (lookahead == 's')
        ADVANCE(169);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(57);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e')
        ADVANCE(170);
      if (lookahead == 'k')
        ADVANCE(82);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(57);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_ATsupports);
      if (lookahead == 'k')
        ADVANCE(82);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(57);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_important);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k')
        ADVANCE(82);
      if (lookahead == 's')
        ADVANCE(171);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(57);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_ATkeyframes);
      if (lookahead == 'k')
        ADVANCE(82);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(57);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_ATnamespace);
      if (lookahead == 'k')
        ADVANCE(82);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(57);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_keyframes_statement_token1);
      if (lookahead == 'k')
        ADVANCE(82);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_')
        ADVANCE(57);
      END_STATE();
    case 172:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '&')
        ADVANCE(6);
      if (lookahead == '\'')
        ADVANCE(7);
      if (lookahead == '*')
        ADVANCE(173);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '/')
        ADVANCE(175);
      if (lookahead == ':')
        ADVANCE(16);
      if (lookahead == '@')
        ADVANCE(20);
      if (lookahead == '[')
        ADVANCE(21);
      if (lookahead == '}')
        ADVANCE(32);
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
        ADVANCE(48);
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
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '(')
        ADVANCE(71);
      if (lookahead == '+')
        ADVANCE(178);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '/')
        ADVANCE(175);
      if (lookahead == ':')
        ADVANCE(16);
      if (lookahead == '>')
        ADVANCE(19);
      if (lookahead == '[')
        ADVANCE(21);
      if (lookahead == '{')
        ADVANCE(30);
      if (lookahead == '~')
        ADVANCE(179);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 180:
      if (lookahead == '(')
        ADVANCE(71);
      if (lookahead == '/')
        ADVANCE(175);
      if (lookahead == ';')
        ADVANCE(17);
      if (lookahead == 'n')
        ADVANCE(181);
      if (lookahead == 'o')
        ADVANCE(182);
      if (lookahead == 's')
        ADVANCE(183);
      if (lookahead == '{')
        ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(180);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(184);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n')
        ADVANCE(185);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(186);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(188);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l')
        ADVANCE(189);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y')
        ADVANCE(190);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e')
        ADVANCE(191);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c')
        ADVANCE(192);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't')
        ADVANCE(193);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o')
        ADVANCE(194);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r')
        ADVANCE(195);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
      END_STATE();
    case 196:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '&')
        ADVANCE(6);
      if (lookahead == '\'')
        ADVANCE(7);
      if (lookahead == '(')
        ADVANCE(71);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '*')
        ADVANCE(173);
      if (lookahead == '+')
        ADVANCE(197);
      if (lookahead == '-')
        ADVANCE(198);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(199);
      if (lookahead == ':')
        ADVANCE(16);
      if (lookahead == '[')
        ADVANCE(21);
      if (lookahead == '_')
        ADVANCE(200);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(196);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 197:
      if (lookahead == '.')
        ADVANCE(44);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(46);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.')
        ADVANCE(44);
      if (lookahead == '/')
        ADVANCE(203);
      if (lookahead == '-' ||
          lookahead == '_')
        ADVANCE(200);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 199:
      if (lookahead == '*')
        ADVANCE(48);
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
        ADVANCE(205);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
        ADVANCE(203);
      if (lookahead == '-' ||
          lookahead == '_')
        ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-')
        ADVANCE(206);
      if (lookahead == '/')
        ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
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
        ADVANCE(209);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
        ADVANCE(207);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
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
        ADVANCE(209);
      END_STATE();
    case 203:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(205);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.')
        ADVANCE(44);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(204);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
      END_STATE();
    case 205:
      if (lookahead == '/')
        ADVANCE(203);
      if (lookahead == '-' ||
          lookahead == '_')
        ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(209);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/')
        ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(208);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
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
        ADVANCE(209);
      END_STATE();
    case 207:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '!' &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}')
        ADVANCE(209);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == '/')
        ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(208);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
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
        ADVANCE(209);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/')
        ADVANCE(207);
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
        ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-')
        ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(212);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(212);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(212);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
      END_STATE();
    case 213:
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(178);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '/')
        ADVANCE(175);
      if (lookahead == ':')
        ADVANCE(16);
      if (lookahead == '>')
        ADVANCE(19);
      if (lookahead == '[')
        ADVANCE(21);
      if (lookahead == '{')
        ADVANCE(30);
      if (lookahead == '~')
        ADVANCE(179);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(214);
      END_STATE();
    case 214:
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(178);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '/')
        ADVANCE(175);
      if (lookahead == ':')
        ADVANCE(16);
      if (lookahead == '>')
        ADVANCE(19);
      if (lookahead == '[')
        ADVANCE(21);
      if (lookahead == '{')
        ADVANCE(30);
      if (lookahead == '~')
        ADVANCE(179);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(214);
      END_STATE();
    case 215:
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '/')
        ADVANCE(175);
      if (lookahead == ';')
        ADVANCE(17);
      if (lookahead == 'a')
        ADVANCE(72);
      if (lookahead == 'o')
        ADVANCE(216);
      if (lookahead == '{')
        ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(215);
      END_STATE();
    case 216:
      if (lookahead == 'r')
        ADVANCE(64);
      END_STATE();
    case 217:
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '/')
        ADVANCE(175);
      if (lookahead == ';')
        ADVANCE(17);
      if (lookahead == 'a')
        ADVANCE(72);
      if (lookahead == 'o')
        ADVANCE(216);
      if (lookahead == '{')
        ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(217);
      END_STATE();
    case 218:
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == '*')
        ADVANCE(173);
      if (lookahead == '+')
        ADVANCE(178);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == ';')
        ADVANCE(17);
      if (lookahead == 'n')
        ADVANCE(181);
      if (lookahead == 'o')
        ADVANCE(182);
      if (lookahead == 's')
        ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(220);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
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
      if (lookahead == '(')
        ADVANCE(71);
      if (lookahead == '*')
        ADVANCE(173);
      if (lookahead == '+')
        ADVANCE(178);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == ';')
        ADVANCE(17);
      if (lookahead == 'n')
        ADVANCE(181);
      if (lookahead == 'o')
        ADVANCE(182);
      if (lookahead == 's')
        ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(220);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
      END_STATE();
    case 221:
      if (lookahead == '%')
        ADVANCE(222);
      if (lookahead == '(')
        ADVANCE(71);
      if (lookahead == '*')
        ADVANCE(173);
      if (lookahead == '+')
        ADVANCE(178);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == ';')
        ADVANCE(17);
      if (lookahead == '_')
        ADVANCE(176);
      if (lookahead == 'n')
        ADVANCE(223);
      if (lookahead == 'o')
        ADVANCE(224);
      if (lookahead == 's')
        ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(220);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(226);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(222);
      if (lookahead == 'o')
        ADVANCE(227);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(226);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(222);
      if (lookahead == 'n')
        ADVANCE(228);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(226);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(222);
      if (lookahead == 'e')
        ADVANCE(229);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(226);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(222);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(222);
      if (lookahead == 't')
        ADVANCE(230);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(226);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(222);
      if (lookahead == 'l')
        ADVANCE(231);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(226);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(222);
      if (lookahead == 'l')
        ADVANCE(232);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(226);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '%')
        ADVANCE(222);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(226);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(222);
      if (lookahead == 'y')
        ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(226);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(222);
      if (lookahead == 'e')
        ADVANCE(234);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(226);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '%')
        ADVANCE(222);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(226);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(222);
      if (lookahead == 'c')
        ADVANCE(235);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(226);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(222);
      if (lookahead == 't')
        ADVANCE(236);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(226);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(222);
      if (lookahead == 'o')
        ADVANCE(237);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(226);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(222);
      if (lookahead == 'r')
        ADVANCE(238);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(226);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '%')
        ADVANCE(222);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(226);
      END_STATE();
    case 239:
      if (lookahead == '/')
        ADVANCE(175);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(36);
      END_STATE();
    case 240:
      if (lookahead == '/')
        ADVANCE(175);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(240);
      END_STATE();
    case 241:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(7);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(178);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '/')
        ADVANCE(175);
      if (lookahead == ':')
        ADVANCE(16);
      if (lookahead == '>')
        ADVANCE(19);
      if (lookahead == '[')
        ADVANCE(21);
      if (lookahead == '~')
        ADVANCE(179);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(242);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
      END_STATE();
    case 242:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(7);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(178);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '.')
        ADVANCE(174);
      if (lookahead == '/')
        ADVANCE(175);
      if (lookahead == ':')
        ADVANCE(16);
      if (lookahead == '>')
        ADVANCE(19);
      if (lookahead == '[')
        ADVANCE(21);
      if (lookahead == '~')
        ADVANCE(179);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(242);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
      END_STATE();
    case 243:
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '*')
        ADVANCE(173);
      if (lookahead == '+')
        ADVANCE(178);
      if (lookahead == '-')
        ADVANCE(244);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == ';')
        ADVANCE(17);
      if (lookahead == ']')
        ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(245);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 245:
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '*')
        ADVANCE(173);
      if (lookahead == '+')
        ADVANCE(178);
      if (lookahead == '-')
        ADVANCE(244);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == ';')
        ADVANCE(17);
      if (lookahead == ']')
        ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(245);
      END_STATE();
    case 246:
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '*')
        ADVANCE(173);
      if (lookahead == '+')
        ADVANCE(178);
      if (lookahead == '-')
        ADVANCE(244);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == ';')
        ADVANCE(17);
      if (lookahead == ']')
        ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(245);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(222);
      END_STATE();
    case 247:
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '*')
        ADVANCE(173);
      if (lookahead == '+')
        ADVANCE(178);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(244);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == ';')
        ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(247);
      END_STATE();
    case 248:
      if (lookahead == '$')
        ADVANCE(5);
      if (lookahead == '*')
        ADVANCE(249);
      if (lookahead == '/')
        ADVANCE(175);
      if (lookahead == '=')
        ADVANCE(18);
      if (lookahead == ']')
        ADVANCE(22);
      if (lookahead == '^')
        ADVANCE(23);
      if (lookahead == '|')
        ADVANCE(31);
      if (lookahead == '~')
        ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(248);
      END_STATE();
    case 249:
      if (lookahead == '=')
        ADVANCE(43);
      END_STATE();
    case 250:
      if (lookahead == '=')
        ADVANCE(68);
      END_STATE();
    case 251:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(7);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '*')
        ADVANCE(173);
      if (lookahead == '+')
        ADVANCE(11);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(252);
      if (lookahead == '.')
        ADVANCE(44);
      if (lookahead == '/')
        ADVANCE(253);
      if (lookahead == ';')
        ADVANCE(17);
      if (lookahead == '_')
        ADVANCE(200);
      if (lookahead == '}')
        ADVANCE(32);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(254);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.')
        ADVANCE(44);
      if (lookahead == '/')
        ADVANCE(203);
      if (lookahead == '-' ||
          lookahead == '_')
        ADVANCE(200);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*')
        ADVANCE(48);
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
        ADVANCE(205);
      END_STATE();
    case 254:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(7);
      if (lookahead == '(')
        ADVANCE(71);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '*')
        ADVANCE(173);
      if (lookahead == '+')
        ADVANCE(11);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(252);
      if (lookahead == '.')
        ADVANCE(44);
      if (lookahead == '/')
        ADVANCE(253);
      if (lookahead == ';')
        ADVANCE(17);
      if (lookahead == '_')
        ADVANCE(200);
      if (lookahead == '}')
        ADVANCE(32);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(254);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 255:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '%')
        ADVANCE(222);
      if (lookahead == '\'')
        ADVANCE(7);
      if (lookahead == '(')
        ADVANCE(71);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '*')
        ADVANCE(173);
      if (lookahead == '+')
        ADVANCE(11);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(252);
      if (lookahead == '.')
        ADVANCE(44);
      if (lookahead == '/')
        ADVANCE(253);
      if (lookahead == ';')
        ADVANCE(17);
      if (lookahead == '_')
        ADVANCE(200);
      if (lookahead == '}')
        ADVANCE(32);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(256);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(254);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(257);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(258);
      if (lookahead == '-')
        ADVANCE(206);
      if (lookahead == '/')
        ADVANCE(207);
      if (lookahead == '_')
        ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(257);
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
        ADVANCE(209);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%')
        ADVANCE(258);
      if (lookahead == '/')
        ADVANCE(207);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_')
        ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(257);
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
        ADVANCE(209);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '/')
        ADVANCE(207);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(258);
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
        ADVANCE(209);
      END_STATE();
    case 259:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(7);
      if (lookahead == '(')
        ADVANCE(71);
      if (lookahead == '*')
        ADVANCE(173);
      if (lookahead == '+')
        ADVANCE(11);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(252);
      if (lookahead == '.')
        ADVANCE(44);
      if (lookahead == '/')
        ADVANCE(253);
      if (lookahead == ';')
        ADVANCE(17);
      if (lookahead == '_')
        ADVANCE(200);
      if (lookahead == '}')
        ADVANCE(32);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(259);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 260:
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '/')
        ADVANCE(175);
      if (lookahead == ':')
        ADVANCE(261);
      if (lookahead == 'a')
        ADVANCE(72);
      if (lookahead == 'o')
        ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 262:
      if (lookahead == '(')
        ADVANCE(71);
      if (lookahead == '*')
        ADVANCE(173);
      if (lookahead == '+')
        ADVANCE(178);
      if (lookahead == '-')
        ADVANCE(219);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == ';')
        ADVANCE(17);
      if (lookahead == 'n')
        ADVANCE(181);
      if (lookahead == 'o')
        ADVANCE(182);
      if (lookahead == 's')
        ADVANCE(183);
      if (lookahead == '{')
        ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
      END_STATE();
    case 263:
      if (lookahead == '+')
        ADVANCE(264);
      if (lookahead == '-')
        ADVANCE(264);
      if (lookahead == '/')
        ADVANCE(175);
      if (lookahead == 'f')
        ADVANCE(73);
      if (lookahead == 't')
        ADVANCE(29);
      if (lookahead == '}')
        ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(263);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(265);
      END_STATE();
    case 264:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(265);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(265);
      END_STATE();
    case 266:
      if (lookahead == '!')
        ADVANCE(2);
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(7);
      if (lookahead == '(')
        ADVANCE(71);
      if (lookahead == '+')
        ADVANCE(197);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(198);
      if (lookahead == '.')
        ADVANCE(44);
      if (lookahead == '/')
        ADVANCE(199);
      if (lookahead == ';')
        ADVANCE(17);
      if (lookahead == '_')
        ADVANCE(200);
      if (lookahead == '}')
        ADVANCE(32);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(266);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 267:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(7);
      if (lookahead == '(')
        ADVANCE(71);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '*')
        ADVANCE(173);
      if (lookahead == '+')
        ADVANCE(11);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(252);
      if (lookahead == '.')
        ADVANCE(44);
      if (lookahead == '/')
        ADVANCE(253);
      if (lookahead == ';')
        ADVANCE(17);
      if (lookahead == '_')
        ADVANCE(200);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(267);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 268:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(7);
      if (lookahead == '(')
        ADVANCE(71);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '+')
        ADVANCE(197);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(198);
      if (lookahead == '.')
        ADVANCE(44);
      if (lookahead == '/')
        ADVANCE(199);
      if (lookahead == ';')
        ADVANCE(17);
      if (lookahead == '_')
        ADVANCE(200);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(268);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 269:
      if (lookahead == '/')
        ADVANCE(175);
      if (lookahead == '{')
        ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(270);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(222);
      END_STATE();
    case 270:
      if (lookahead == '/')
        ADVANCE(175);
      if (lookahead == '{')
        ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(270);
      END_STATE();
    case 271:
      if (lookahead == '*')
        ADVANCE(173);
      if (lookahead == '+')
        ADVANCE(178);
      if (lookahead == '-')
        ADVANCE(244);
      if (lookahead == '/')
        ADVANCE(15);
      if (lookahead == ']')
        ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(271);
      END_STATE();
    case 272:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(7);
      if (lookahead == '(')
        ADVANCE(8);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '*')
        ADVANCE(173);
      if (lookahead == '+')
        ADVANCE(11);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(252);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(253);
      if (lookahead == ':')
        ADVANCE(16);
      if (lookahead == '>')
        ADVANCE(19);
      if (lookahead == '[')
        ADVANCE(21);
      if (lookahead == '_')
        ADVANCE(200);
      if (lookahead == '~')
        ADVANCE(179);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(273);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 273:
      if (lookahead == '"')
        ADVANCE(3);
      if (lookahead == '#')
        ADVANCE(4);
      if (lookahead == '\'')
        ADVANCE(7);
      if (lookahead == '(')
        ADVANCE(71);
      if (lookahead == ')')
        ADVANCE(9);
      if (lookahead == '*')
        ADVANCE(173);
      if (lookahead == '+')
        ADVANCE(11);
      if (lookahead == ',')
        ADVANCE(12);
      if (lookahead == '-')
        ADVANCE(252);
      if (lookahead == '.')
        ADVANCE(14);
      if (lookahead == '/')
        ADVANCE(253);
      if (lookahead == ':')
        ADVANCE(16);
      if (lookahead == '>')
        ADVANCE(19);
      if (lookahead == '[')
        ADVANCE(21);
      if (lookahead == '_')
        ADVANCE(200);
      if (lookahead == '~')
        ADVANCE(179);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(201);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(273);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(202);
      END_STATE();
    case 274:
      if (lookahead == '/')
        ADVANCE(175);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(275);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(276);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
      END_STATE();
    case 275:
      if (lookahead == '/')
        ADVANCE(175);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(275);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
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
      ACCEPT_TOKEN(sym_identifier);
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
      ACCEPT_TOKEN(aux_sym_color_value_token1);
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
      ACCEPT_TOKEN(aux_sym_color_value_token1);
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
      ACCEPT_TOKEN(aux_sym_color_value_token1);
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
      ACCEPT_TOKEN(aux_sym_color_value_token1);
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
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(283);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(176);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 172},
  [2] = {.lex_state = 177, .external_lex_state = 1},
  [3] = {.lex_state = 180},
  [4] = {.lex_state = 196},
  [5] = {.lex_state = 172},
  [6] = {.lex_state = 213, .external_lex_state = 1},
  [7] = {.lex_state = 172},
  [8] = {.lex_state = 172},
  [9] = {.lex_state = 196},
  [10] = {.lex_state = 172},
  [11] = {.lex_state = 172},
  [12] = {.lex_state = 180},
  [13] = {.lex_state = 180},
  [14] = {.lex_state = 172},
  [15] = {.lex_state = 172},
  [16] = {.lex_state = 177, .external_lex_state = 1},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 172},
  [19] = {.lex_state = 177},
  [20] = {.lex_state = 196},
  [21] = {.lex_state = 180},
  [22] = {.lex_state = 180},
  [23] = {.lex_state = 215},
  [24] = {.lex_state = 177},
  [25] = {.lex_state = 217},
  [26] = {.lex_state = 218},
  [27] = {.lex_state = 196},
  [28] = {.lex_state = 221},
  [29] = {.lex_state = 239},
  [30] = {.lex_state = 221},
  [31] = {.lex_state = 220},
  [32] = {.lex_state = 180},
  [33] = {.lex_state = 241},
  [34] = {.lex_state = 213, .external_lex_state = 1},
  [35] = {.lex_state = 177},
  [36] = {.lex_state = 243},
  [37] = {.lex_state = 196},
  [38] = {.lex_state = 246},
  [39] = {.lex_state = 239},
  [40] = {.lex_state = 246},
  [41] = {.lex_state = 247},
  [42] = {.lex_state = 248},
  [43] = {.lex_state = 213, .external_lex_state = 1},
  [44] = {.lex_state = 180},
  [45] = {.lex_state = 172},
  [46] = {.lex_state = 172},
  [47] = {.lex_state = 217},
  [48] = {.lex_state = 180},
  [49] = {.lex_state = 217},
  [50] = {.lex_state = 213, .external_lex_state = 1},
  [51] = {.lex_state = 213, .external_lex_state = 1},
  [52] = {.lex_state = 172},
  [53] = {.lex_state = 172},
  [54] = {.lex_state = 172},
  [55] = {.lex_state = 172},
  [56] = {.lex_state = 172},
  [57] = {.lex_state = 172},
  [58] = {.lex_state = 172},
  [59] = {.lex_state = 172},
  [60] = {.lex_state = 172},
  [61] = {.lex_state = 172},
  [62] = {.lex_state = 177},
  [63] = {.lex_state = 172},
  [64] = {.lex_state = 172},
  [65] = {.lex_state = 251},
  [66] = {.lex_state = 196},
  [67] = {.lex_state = 255},
  [68] = {.lex_state = 239},
  [69] = {.lex_state = 255},
  [70] = {.lex_state = 259},
  [71] = {.lex_state = 215},
  [72] = {.lex_state = 180},
  [73] = {.lex_state = 260},
  [74] = {.lex_state = 260},
  [75] = {.lex_state = 172},
  [76] = {.lex_state = 180},
  [77] = {.lex_state = 180},
  [78] = {.lex_state = 177},
  [79] = {.lex_state = 172},
  [80] = {.lex_state = 196},
  [81] = {.lex_state = 220},
  [82] = {.lex_state = 247},
  [83] = {.lex_state = 262},
  [84] = {.lex_state = 220},
  [85] = {.lex_state = 220},
  [86] = {.lex_state = 180},
  [87] = {.lex_state = 196},
  [88] = {.lex_state = 172},
  [89] = {.lex_state = 215},
  [90] = {.lex_state = 172},
  [91] = {.lex_state = 180},
  [92] = {.lex_state = 213},
  [93] = {.lex_state = 263},
  [94] = {.lex_state = 172},
  [95] = {.lex_state = 196},
  [96] = {.lex_state = 243},
  [97] = {.lex_state = 247},
  [98] = {.lex_state = 243},
  [99] = {.lex_state = 243},
  [100] = {.lex_state = 243},
  [101] = {.lex_state = 196},
  [102] = {.lex_state = 172},
  [103] = {.lex_state = 196},
  [104] = {.lex_state = 213, .external_lex_state = 1},
  [105] = {.lex_state = 196},
  [106] = {.lex_state = 213, .external_lex_state = 1},
  [107] = {.lex_state = 172},
  [108] = {.lex_state = 177, .external_lex_state = 1},
  [109] = {.lex_state = 172},
  [110] = {.lex_state = 172},
  [111] = {.lex_state = 180},
  [112] = {.lex_state = 180},
  [113] = {.lex_state = 172},
  [114] = {.lex_state = 217},
  [115] = {.lex_state = 180},
  [116] = {.lex_state = 172},
  [117] = {.lex_state = 213, .external_lex_state = 1},
  [118] = {.lex_state = 213, .external_lex_state = 1},
  [119] = {.lex_state = 248},
  [120] = {.lex_state = 213, .external_lex_state = 1},
  [121] = {.lex_state = 213, .external_lex_state = 1},
  [122] = {.lex_state = 213, .external_lex_state = 1},
  [123] = {.lex_state = 177, .external_lex_state = 1},
  [124] = {.lex_state = 213, .external_lex_state = 1},
  [125] = {.lex_state = 213, .external_lex_state = 1},
  [126] = {.lex_state = 213, .external_lex_state = 1},
  [127] = {.lex_state = 213, .external_lex_state = 1},
  [128] = {.lex_state = 177},
  [129] = {.lex_state = 196},
  [130] = {.lex_state = 254},
  [131] = {.lex_state = 247},
  [132] = {.lex_state = 254},
  [133] = {.lex_state = 254},
  [134] = {.lex_state = 254},
  [135] = {.lex_state = 172},
  [136] = {.lex_state = 196},
  [137] = {.lex_state = 180},
  [138] = {.lex_state = 196},
  [139] = {.lex_state = 259},
  [140] = {.lex_state = 266},
  [141] = {.lex_state = 196},
  [142] = {.lex_state = 215},
  [143] = {.lex_state = 180},
  [144] = {.lex_state = 241, .external_lex_state = 1},
  [145] = {.lex_state = 217},
  [146] = {.lex_state = 215},
  [147] = {.lex_state = 177},
  [148] = {.lex_state = 172},
  [149] = {.lex_state = 220},
  [150] = {.lex_state = 267},
  [151] = {.lex_state = 268},
  [152] = {.lex_state = 220},
  [153] = {.lex_state = 220},
  [154] = {.lex_state = 180},
  [155] = {.lex_state = 180},
  [156] = {.lex_state = 172},
  [157] = {.lex_state = 215},
  [158] = {.lex_state = 172},
  [159] = {.lex_state = 269},
  [160] = {.lex_state = 172},
  [161] = {.lex_state = 177},
  [162] = {.lex_state = 263},
  [163] = {.lex_state = 243},
  [164] = {.lex_state = 268},
  [165] = {.lex_state = 243},
  [166] = {.lex_state = 243},
  [167] = {.lex_state = 271},
  [168] = {.lex_state = 272, .external_lex_state = 1},
  [169] = {.lex_state = 213, .external_lex_state = 1},
  [170] = {.lex_state = 273, .external_lex_state = 1},
  [171] = {.lex_state = 274},
  [172] = {.lex_state = 241, .external_lex_state = 1},
  [173] = {.lex_state = 268},
  [174] = {.lex_state = 196},
  [175] = {.lex_state = 172},
  [176] = {.lex_state = 172},
  [177] = {.lex_state = 172},
  [178] = {.lex_state = 217},
  [179] = {.lex_state = 172},
  [180] = {.lex_state = 217},
  [181] = {.lex_state = 196},
  [182] = {.lex_state = 213, .external_lex_state = 1},
  [183] = {.lex_state = 213, .external_lex_state = 1},
  [184] = {.lex_state = 254},
  [185] = {.lex_state = 268},
  [186] = {.lex_state = 254},
  [187] = {.lex_state = 254},
  [188] = {.lex_state = 172},
  [189] = {.lex_state = 259},
  [190] = {.lex_state = 180},
  [191] = {.lex_state = 266},
  [192] = {.lex_state = 196},
  [193] = {.lex_state = 215},
  [194] = {.lex_state = 220},
  [195] = {.lex_state = 196},
  [196] = {.lex_state = 247},
  [197] = {.lex_state = 268},
  [198] = {.lex_state = 215},
  [199] = {.lex_state = 172},
  [200] = {.lex_state = 215},
  [201] = {.lex_state = 172},
  [202] = {.lex_state = 263},
  [203] = {.lex_state = 172},
  [204] = {.lex_state = 263},
  [205] = {.lex_state = 243},
  [206] = {.lex_state = 247},
  [207] = {.lex_state = 213, .external_lex_state = 1},
  [208] = {.lex_state = 196},
  [209] = {.lex_state = 213, .external_lex_state = 1},
  [210] = {.lex_state = 241},
  [211] = {.lex_state = 268},
  [212] = {.lex_state = 259},
  [213] = {.lex_state = 172},
  [214] = {.lex_state = 271},
  [215] = {.lex_state = 254},
  [216] = {.lex_state = 247},
  [217] = {.lex_state = 172},
  [218] = {.lex_state = 215},
  [219] = {.lex_state = 196},
  [220] = {.lex_state = 268},
  [221] = {.lex_state = 220},
  [222] = {.lex_state = 247},
  [223] = {.lex_state = 263},
  [224] = {.lex_state = 172},
  [225] = {.lex_state = 172},
  [226] = {.lex_state = 243},
  [227] = {.lex_state = 241, .external_lex_state = 1},
  [228] = {.lex_state = 268},
  [229] = {.lex_state = 213, .external_lex_state = 1},
  [230] = {.lex_state = 241},
  [231] = {.lex_state = 259},
  [232] = {.lex_state = 266},
  [233] = {.lex_state = 213, .external_lex_state = 1},
  [234] = {.lex_state = 254},
  [235] = {.lex_state = 263},
  [236] = {.lex_state = 172},
  [237] = {.lex_state = 259},
  [238] = {.lex_state = 266},
  [239] = {.lex_state = 263},
};

enum {
  ts_external_token__descendant_operator = 0,
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
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_integer_value_token1] = ACTIONS(1),
    [sym__descendant_operator] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [sym_important] = ACTIONS(1),
    [anon_sym_only] = ACTIONS(1),
    [sym_to] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [sym_nesting_selector] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [aux_sym_keyframes_statement_token1] = ACTIONS(1),
    [anon_sym_ATcharset] = ACTIONS(1),
    [anon_sym_DOLLAR_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_TILDE_EQ] = ACTIONS(1),
    [aux_sym_float_value_token1] = ACTIONS(1),
    [sym_at_keyword] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LPAREN2] = ACTIONS(1),
    [anon_sym_selector] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_ATmedia] = ACTIONS(1),
    [anon_sym_ATimport] = ACTIONS(1),
    [anon_sym_ATnamespace] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_CARET_EQ] = ACTIONS(1),
    [sym_string_value] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [aux_sym_color_value_token1] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym_from] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_ATsupports] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_ATkeyframes] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_PIPE_EQ] = ACTIONS(1),
  },
  [1] = {
    [sym_media_statement] = STATE(18),
    [sym_charset_statement] = STATE(18),
    [sym_supports_statement] = STATE(18),
    [sym_at_rule] = STATE(18),
    [sym__selector] = STATE(16),
    [sym_universal_selector] = STATE(16),
    [sym_attribute_selector] = STATE(16),
    [sym_child_selector] = STATE(16),
    [sym_declaration] = STATE(18),
    [sym_import_statement] = STATE(18),
    [sym_pseudo_element_selector] = STATE(16),
    [sym_id_selector] = STATE(16),
    [sym_adjacent_sibling_selector] = STATE(16),
    [sym_stylesheet] = STATE(17),
    [sym_namespace_statement] = STATE(18),
    [sym_keyframes_statement] = STATE(18),
    [aux_sym_stylesheet_repeat1] = STATE(18),
    [sym_selectors] = STATE(19),
    [sym_class_selector] = STATE(16),
    [sym_pseudo_class_selector] = STATE(16),
    [sym_descendant_selector] = STATE(16),
    [sym_sibling_selector] = STATE(16),
    [sym_rule_set] = STATE(18),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_ATmedia] = ACTIONS(7),
    [anon_sym_ATimport] = ACTIONS(9),
    [anon_sym_ATnamespace] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_COLON_COLON] = ACTIONS(15),
    [sym_string_value] = ACTIONS(17),
    [sym_nesting_selector] = ACTIONS(17),
    [aux_sym_keyframes_statement_token1] = ACTIONS(19),
    [anon_sym_ATcharset] = ACTIONS(21),
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [sym_at_keyword] = ACTIONS(29),
    [anon_sym_ATsupports] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_ATkeyframes] = ACTIONS(19),
    [anon_sym_POUND] = ACTIONS(35),
  },
  [2] = {
    [sym__descendant_operator] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(37),
    [anon_sym_COMMA] = ACTIONS(37),
    [anon_sym_COLON_COLON] = ACTIONS(37),
    [anon_sym_GT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(37),
  },
  [3] = {
    [sym_feature_query] = STATE(25),
    [sym_unary_query] = STATE(25),
    [sym_selector_query] = STATE(25),
    [sym_parenthesized_query] = STATE(25),
    [sym_binary_query] = STATE(25),
    [sym__query] = STATE(25),
    [anon_sym_not] = ACTIONS(42),
    [anon_sym_LPAREN2] = ACTIONS(44),
    [sym_identifier] = ACTIONS(46),
    [anon_sym_selector] = ACTIONS(48),
    [sym_comment] = ACTIONS(3),
    [anon_sym_only] = ACTIONS(42),
  },
  [4] = {
    [sym_integer_value] = STATE(31),
    [sym__value] = STATE(31),
    [sym_parenthesized_value] = STATE(31),
    [sym_binary_expression] = STATE(31),
    [sym_float_value] = STATE(31),
    [sym_call_expression] = STATE(31),
    [sym_color_value] = STATE(31),
    [aux_sym_integer_value_token1] = ACTIONS(50),
    [sym_identifier] = ACTIONS(52),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(54),
    [sym_plain_value] = ACTIONS(56),
    [anon_sym_LPAREN2] = ACTIONS(58),
    [sym_string_value] = ACTIONS(60),
    [anon_sym_POUND] = ACTIONS(62),
  },
  [5] = {
    [sym_call_expression] = STATE(32),
    [sym_string_value] = ACTIONS(64),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(66),
  },
  [6] = {
    [sym__descendant_operator] = ACTIONS(68),
    [anon_sym_LBRACK] = ACTIONS(68),
    [anon_sym_COLON] = ACTIONS(70),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(68),
    [anon_sym_TILDE] = ACTIONS(68),
    [anon_sym_COMMA] = ACTIONS(68),
    [anon_sym_COLON_COLON] = ACTIONS(68),
    [anon_sym_GT] = ACTIONS(68),
    [anon_sym_LBRACE] = ACTIONS(68),
    [anon_sym_PLUS] = ACTIONS(68),
    [anon_sym_POUND] = ACTIONS(68),
    [anon_sym_RPAREN] = ACTIONS(68),
  },
  [7] = {
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(72),
  },
  [8] = {
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(74),
  },
  [9] = {
    [sym_integer_value] = STATE(41),
    [sym__value] = STATE(41),
    [sym_parenthesized_value] = STATE(41),
    [sym_binary_expression] = STATE(41),
    [sym_float_value] = STATE(41),
    [sym_call_expression] = STATE(41),
    [sym_color_value] = STATE(41),
    [aux_sym_integer_value_token1] = ACTIONS(76),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(80),
    [sym_plain_value] = ACTIONS(82),
    [anon_sym_LPAREN2] = ACTIONS(84),
    [sym_string_value] = ACTIONS(86),
    [anon_sym_POUND] = ACTIONS(88),
  },
  [10] = {
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(90),
  },
  [11] = {
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(92),
  },
  [12] = {
    [sym_feature_query] = STATE(47),
    [sym__query] = STATE(47),
    [sym_unary_query] = STATE(47),
    [sym_selector_query] = STATE(47),
    [sym_parenthesized_query] = STATE(47),
    [sym_binary_query] = STATE(47),
    [sym_block] = STATE(46),
    [anon_sym_not] = ACTIONS(94),
    [sym_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(3),
    [anon_sym_only] = ACTIONS(94),
    [anon_sym_LPAREN2] = ACTIONS(44),
    [anon_sym_selector] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(96),
    [anon_sym_SEMI] = ACTIONS(98),
  },
  [13] = {
    [sym_feature_query] = STATE(49),
    [sym_unary_query] = STATE(49),
    [sym_selector_query] = STATE(49),
    [sym_parenthesized_query] = STATE(49),
    [sym_binary_query] = STATE(49),
    [sym__query] = STATE(49),
    [anon_sym_not] = ACTIONS(100),
    [anon_sym_LPAREN2] = ACTIONS(44),
    [sym_identifier] = ACTIONS(46),
    [anon_sym_selector] = ACTIONS(48),
    [sym_comment] = ACTIONS(3),
    [anon_sym_only] = ACTIONS(100),
  },
  [14] = {
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(102),
  },
  [15] = {
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(104),
  },
  [16] = {
    [aux_sym_selectors_repeat1] = STATE(62),
    [sym__descendant_operator] = ACTIONS(106),
    [anon_sym_LBRACK] = ACTIONS(108),
    [anon_sym_COLON] = ACTIONS(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(112),
    [anon_sym_TILDE] = ACTIONS(114),
    [anon_sym_COMMA] = ACTIONS(116),
    [anon_sym_COLON_COLON] = ACTIONS(118),
    [anon_sym_GT] = ACTIONS(120),
    [anon_sym_LBRACE] = ACTIONS(122),
    [anon_sym_PLUS] = ACTIONS(124),
    [anon_sym_POUND] = ACTIONS(126),
  },
  [17] = {
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(128),
  },
  [18] = {
    [sym_media_statement] = STATE(63),
    [sym_charset_statement] = STATE(63),
    [sym_supports_statement] = STATE(63),
    [sym_at_rule] = STATE(63),
    [sym__selector] = STATE(16),
    [sym_universal_selector] = STATE(16),
    [sym_attribute_selector] = STATE(16),
    [sym_child_selector] = STATE(16),
    [sym_declaration] = STATE(63),
    [sym_import_statement] = STATE(63),
    [sym_pseudo_element_selector] = STATE(16),
    [sym_id_selector] = STATE(16),
    [sym_adjacent_sibling_selector] = STATE(16),
    [sym_namespace_statement] = STATE(63),
    [sym_keyframes_statement] = STATE(63),
    [sym_rule_set] = STATE(63),
    [sym_selectors] = STATE(19),
    [sym_class_selector] = STATE(16),
    [sym_pseudo_class_selector] = STATE(16),
    [sym_descendant_selector] = STATE(16),
    [sym_sibling_selector] = STATE(16),
    [aux_sym_stylesheet_repeat1] = STATE(63),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_ATmedia] = ACTIONS(7),
    [anon_sym_ATimport] = ACTIONS(9),
    [anon_sym_ATnamespace] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_COLON_COLON] = ACTIONS(15),
    [sym_string_value] = ACTIONS(17),
    [sym_nesting_selector] = ACTIONS(17),
    [aux_sym_keyframes_statement_token1] = ACTIONS(19),
    [anon_sym_ATcharset] = ACTIONS(21),
    [ts_builtin_sym_end] = ACTIONS(130),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [sym_at_keyword] = ACTIONS(29),
    [anon_sym_ATsupports] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_ATkeyframes] = ACTIONS(19),
    [anon_sym_POUND] = ACTIONS(35),
  },
  [19] = {
    [sym_block] = STATE(64),
    [anon_sym_LBRACE] = ACTIONS(96),
    [sym_comment] = ACTIONS(3),
  },
  [20] = {
    [sym_integer_value] = STATE(70),
    [sym__value] = STATE(70),
    [sym_parenthesized_value] = STATE(70),
    [sym_binary_expression] = STATE(70),
    [sym_float_value] = STATE(70),
    [sym_call_expression] = STATE(70),
    [sym_color_value] = STATE(70),
    [aux_sym_integer_value_token1] = ACTIONS(132),
    [sym_identifier] = ACTIONS(134),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(136),
    [sym_plain_value] = ACTIONS(138),
    [anon_sym_LPAREN2] = ACTIONS(140),
    [sym_string_value] = ACTIONS(142),
    [anon_sym_POUND] = ACTIONS(144),
  },
  [21] = {
    [sym_feature_query] = STATE(71),
    [sym_unary_query] = STATE(71),
    [sym_selector_query] = STATE(71),
    [sym_parenthesized_query] = STATE(71),
    [sym_binary_query] = STATE(71),
    [sym__query] = STATE(71),
    [anon_sym_not] = ACTIONS(42),
    [anon_sym_LPAREN2] = ACTIONS(44),
    [sym_identifier] = ACTIONS(46),
    [anon_sym_selector] = ACTIONS(48),
    [sym_comment] = ACTIONS(3),
    [anon_sym_only] = ACTIONS(42),
  },
  [22] = {
    [sym_feature_query] = STATE(74),
    [sym_unary_query] = STATE(74),
    [sym_selector_query] = STATE(74),
    [sym_parenthesized_query] = STATE(74),
    [sym_binary_query] = STATE(74),
    [sym__query] = STATE(74),
    [anon_sym_not] = ACTIONS(146),
    [anon_sym_LPAREN2] = ACTIONS(44),
    [sym_identifier] = ACTIONS(148),
    [anon_sym_selector] = ACTIONS(48),
    [sym_comment] = ACTIONS(3),
    [anon_sym_only] = ACTIONS(146),
  },
  [23] = {
    [anon_sym_RPAREN] = ACTIONS(150),
    [anon_sym_COMMA] = ACTIONS(150),
    [anon_sym_or] = ACTIONS(150),
    [anon_sym_LBRACE] = ACTIONS(150),
    [sym_comment] = ACTIONS(3),
    [anon_sym_and] = ACTIONS(150),
    [anon_sym_SEMI] = ACTIONS(150),
  },
  [24] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN2] = ACTIONS(152),
  },
  [25] = {
    [aux_sym_import_statement_repeat1] = STATE(78),
    [sym_block] = STATE(79),
    [anon_sym_COMMA] = ACTIONS(154),
    [anon_sym_or] = ACTIONS(156),
    [anon_sym_LBRACE] = ACTIONS(96),
    [sym_comment] = ACTIONS(3),
    [anon_sym_and] = ACTIONS(156),
  },
  [26] = {
    [sym_arguments] = STATE(81),
    [anon_sym_not] = ACTIONS(158),
    [anon_sym_STAR] = ACTIONS(160),
    [sym_identifier] = ACTIONS(158),
    [anon_sym_LPAREN] = ACTIONS(162),
    [anon_sym_only] = ACTIONS(158),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(158),
    [anon_sym_LPAREN2] = ACTIONS(158),
    [anon_sym_selector] = ACTIONS(158),
    [anon_sym_PLUS] = ACTIONS(160),
    [anon_sym_SEMI] = ACTIONS(160),
    [anon_sym_SLASH] = ACTIONS(158),
  },
  [27] = {
    [sym_integer_value] = STATE(82),
    [sym__value] = STATE(82),
    [sym_parenthesized_value] = STATE(82),
    [sym_binary_expression] = STATE(82),
    [sym_float_value] = STATE(82),
    [sym_call_expression] = STATE(82),
    [sym_color_value] = STATE(82),
    [aux_sym_integer_value_token1] = ACTIONS(76),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(80),
    [sym_plain_value] = ACTIONS(164),
    [anon_sym_LPAREN2] = ACTIONS(84),
    [sym_string_value] = ACTIONS(166),
    [anon_sym_POUND] = ACTIONS(88),
  },
  [28] = {
    [anon_sym_not] = ACTIONS(168),
    [anon_sym_STAR] = ACTIONS(170),
    [sym_identifier] = ACTIONS(168),
    [sym_comment] = ACTIONS(3),
    [anon_sym_only] = ACTIONS(168),
    [anon_sym_DASH] = ACTIONS(168),
    [anon_sym_LPAREN2] = ACTIONS(170),
    [anon_sym_selector] = ACTIONS(168),
    [sym_unit] = ACTIONS(172),
    [anon_sym_PLUS] = ACTIONS(170),
    [anon_sym_SEMI] = ACTIONS(170),
    [anon_sym_SLASH] = ACTIONS(168),
  },
  [29] = {
    [sym_comment] = ACTIONS(3),
    [aux_sym_color_value_token1] = ACTIONS(174),
  },
  [30] = {
    [anon_sym_not] = ACTIONS(176),
    [anon_sym_STAR] = ACTIONS(178),
    [sym_identifier] = ACTIONS(176),
    [sym_comment] = ACTIONS(3),
    [anon_sym_only] = ACTIONS(176),
    [anon_sym_DASH] = ACTIONS(176),
    [anon_sym_LPAREN2] = ACTIONS(178),
    [anon_sym_selector] = ACTIONS(176),
    [sym_unit] = ACTIONS(180),
    [anon_sym_PLUS] = ACTIONS(178),
    [anon_sym_SEMI] = ACTIONS(178),
    [anon_sym_SLASH] = ACTIONS(176),
  },
  [31] = {
    [sym_feature_query] = STATE(89),
    [sym_unary_query] = STATE(89),
    [sym_selector_query] = STATE(89),
    [sym_parenthesized_query] = STATE(89),
    [sym_binary_query] = STATE(89),
    [sym__query] = STATE(89),
    [anon_sym_not] = ACTIONS(182),
    [sym_identifier] = ACTIONS(46),
    [anon_sym_STAR] = ACTIONS(184),
    [sym_comment] = ACTIONS(3),
    [anon_sym_only] = ACTIONS(182),
    [anon_sym_DASH] = ACTIONS(186),
    [anon_sym_LPAREN2] = ACTIONS(44),
    [anon_sym_selector] = ACTIONS(48),
    [anon_sym_PLUS] = ACTIONS(184),
    [anon_sym_SLASH] = ACTIONS(186),
    [anon_sym_SEMI] = ACTIONS(188),
  },
  [32] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(190),
  },
  [33] = {
    [sym_arguments] = STATE(81),
    [sym_call_expression] = STATE(91),
    [sym_identifier] = ACTIONS(192),
    [anon_sym_LPAREN] = ACTIONS(162),
    [sym_string_value] = ACTIONS(194),
    [sym_comment] = ACTIONS(3),
  },
  [34] = {
    [sym__descendant_operator] = ACTIONS(196),
    [anon_sym_LBRACK] = ACTIONS(196),
    [anon_sym_COLON] = ACTIONS(198),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(196),
    [anon_sym_TILDE] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(196),
    [anon_sym_COLON_COLON] = ACTIONS(196),
    [anon_sym_GT] = ACTIONS(196),
    [anon_sym_LBRACE] = ACTIONS(196),
    [anon_sym_PLUS] = ACTIONS(196),
    [anon_sym_POUND] = ACTIONS(196),
    [anon_sym_RPAREN] = ACTIONS(196),
  },
  [35] = {
    [sym_keyframe_block_list] = STATE(94),
    [anon_sym_LBRACE] = ACTIONS(200),
    [sym_comment] = ACTIONS(3),
  },
  [36] = {
    [sym_arguments] = STATE(96),
    [anon_sym_STAR] = ACTIONS(160),
    [anon_sym_LPAREN] = ACTIONS(202),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(160),
    [anon_sym_RPAREN] = ACTIONS(160),
    [anon_sym_DASH] = ACTIONS(160),
    [anon_sym_PLUS] = ACTIONS(160),
    [anon_sym_SEMI] = ACTIONS(160),
    [anon_sym_SLASH] = ACTIONS(158),
  },
  [37] = {
    [sym_integer_value] = STATE(97),
    [sym__value] = STATE(97),
    [sym_parenthesized_value] = STATE(97),
    [sym_binary_expression] = STATE(97),
    [sym_float_value] = STATE(97),
    [sym_call_expression] = STATE(97),
    [sym_color_value] = STATE(97),
    [aux_sym_integer_value_token1] = ACTIONS(76),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(80),
    [sym_plain_value] = ACTIONS(204),
    [anon_sym_LPAREN2] = ACTIONS(84),
    [sym_string_value] = ACTIONS(206),
    [anon_sym_POUND] = ACTIONS(88),
  },
  [38] = {
    [anon_sym_STAR] = ACTIONS(170),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(170),
    [anon_sym_RPAREN] = ACTIONS(170),
    [anon_sym_DASH] = ACTIONS(170),
    [sym_unit] = ACTIONS(208),
    [anon_sym_PLUS] = ACTIONS(170),
    [anon_sym_SEMI] = ACTIONS(170),
    [anon_sym_SLASH] = ACTIONS(168),
  },
  [39] = {
    [sym_comment] = ACTIONS(3),
    [aux_sym_color_value_token1] = ACTIONS(210),
  },
  [40] = {
    [anon_sym_STAR] = ACTIONS(178),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(178),
    [anon_sym_RPAREN] = ACTIONS(178),
    [anon_sym_DASH] = ACTIONS(178),
    [sym_unit] = ACTIONS(212),
    [anon_sym_PLUS] = ACTIONS(178),
    [anon_sym_SEMI] = ACTIONS(178),
    [anon_sym_SLASH] = ACTIONS(176),
  },
  [41] = {
    [anon_sym_DASH] = ACTIONS(214),
    [anon_sym_STAR] = ACTIONS(214),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PLUS] = ACTIONS(214),
    [anon_sym_SLASH] = ACTIONS(216),
    [anon_sym_SEMI] = ACTIONS(218),
  },
  [42] = {
    [anon_sym_EQ] = ACTIONS(220),
    [anon_sym_DOLLAR_EQ] = ACTIONS(220),
    [sym_comment] = ACTIONS(3),
    [anon_sym_TILDE_EQ] = ACTIONS(220),
    [anon_sym_RBRACK] = ACTIONS(222),
    [anon_sym_CARET_EQ] = ACTIONS(220),
    [anon_sym_STAR_EQ] = ACTIONS(220),
    [anon_sym_PIPE_EQ] = ACTIONS(220),
  },
  [43] = {
    [sym_pseudo_class_arguments] = STATE(106),
    [sym__descendant_operator] = ACTIONS(224),
    [anon_sym_LPAREN] = ACTIONS(226),
    [anon_sym_LBRACK] = ACTIONS(224),
    [anon_sym_COLON] = ACTIONS(228),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(224),
    [anon_sym_TILDE] = ACTIONS(224),
    [anon_sym_COMMA] = ACTIONS(224),
    [anon_sym_COLON_COLON] = ACTIONS(224),
    [anon_sym_GT] = ACTIONS(224),
    [anon_sym_LBRACE] = ACTIONS(224),
    [anon_sym_PLUS] = ACTIONS(224),
    [anon_sym_POUND] = ACTIONS(224),
    [anon_sym_RPAREN] = ACTIONS(224),
  },
  [44] = {
    [sym_feature_query] = STATE(71),
    [sym_unary_query] = STATE(71),
    [sym_selector_query] = STATE(71),
    [sym_parenthesized_query] = STATE(71),
    [sym_binary_query] = STATE(71),
    [sym__query] = STATE(71),
    [anon_sym_not] = ACTIONS(94),
    [anon_sym_LPAREN2] = ACTIONS(44),
    [sym_identifier] = ACTIONS(46),
    [anon_sym_selector] = ACTIONS(48),
    [sym_comment] = ACTIONS(3),
    [anon_sym_only] = ACTIONS(94),
  },
  [45] = {
    [sym_media_statement] = STATE(109),
    [sym_charset_statement] = STATE(109),
    [sym_supports_statement] = STATE(109),
    [sym_at_rule] = STATE(109),
    [sym__selector] = STATE(16),
    [sym_universal_selector] = STATE(16),
    [sym_attribute_selector] = STATE(16),
    [sym_child_selector] = STATE(16),
    [sym_declaration] = STATE(109),
    [aux_sym_block_repeat1] = STATE(109),
    [sym_last_declaration] = STATE(110),
    [sym_import_statement] = STATE(109),
    [sym_pseudo_element_selector] = STATE(16),
    [sym_id_selector] = STATE(16),
    [sym_adjacent_sibling_selector] = STATE(16),
    [sym_namespace_statement] = STATE(109),
    [sym_keyframes_statement] = STATE(109),
    [sym_rule_set] = STATE(109),
    [sym_selectors] = STATE(19),
    [sym_class_selector] = STATE(16),
    [sym_pseudo_class_selector] = STATE(16),
    [sym_descendant_selector] = STATE(16),
    [sym_sibling_selector] = STATE(16),
    [anon_sym_RBRACE] = ACTIONS(230),
    [sym_identifier] = ACTIONS(232),
    [anon_sym_ATmedia] = ACTIONS(7),
    [anon_sym_ATimport] = ACTIONS(9),
    [anon_sym_ATnamespace] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_COLON_COLON] = ACTIONS(15),
    [sym_string_value] = ACTIONS(17),
    [sym_nesting_selector] = ACTIONS(17),
    [aux_sym_keyframes_statement_token1] = ACTIONS(19),
    [anon_sym_ATcharset] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [sym_at_keyword] = ACTIONS(29),
    [anon_sym_ATsupports] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_ATkeyframes] = ACTIONS(19),
    [anon_sym_POUND] = ACTIONS(35),
  },
  [46] = {
    [anon_sym_RBRACE] = ACTIONS(234),
    [anon_sym_STAR] = ACTIONS(234),
    [anon_sym_ATmedia] = ACTIONS(236),
    [anon_sym_ATimport] = ACTIONS(236),
    [anon_sym_ATnamespace] = ACTIONS(236),
    [sym_identifier] = ACTIONS(234),
    [anon_sym_COLON_COLON] = ACTIONS(234),
    [sym_string_value] = ACTIONS(234),
    [sym_nesting_selector] = ACTIONS(234),
    [aux_sym_keyframes_statement_token1] = ACTIONS(236),
    [anon_sym_ATcharset] = ACTIONS(236),
    [ts_builtin_sym_end] = ACTIONS(234),
    [anon_sym_LBRACK] = ACTIONS(234),
    [anon_sym_COLON] = ACTIONS(236),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(234),
    [anon_sym_ATsupports] = ACTIONS(236),
    [sym_at_keyword] = ACTIONS(236),
    [anon_sym_ATkeyframes] = ACTIONS(236),
    [anon_sym_POUND] = ACTIONS(234),
  },
  [47] = {
    [aux_sym_import_statement_repeat1] = STATE(114),
    [sym_block] = STATE(113),
    [anon_sym_COMMA] = ACTIONS(238),
    [anon_sym_or] = ACTIONS(240),
    [anon_sym_LBRACE] = ACTIONS(96),
    [sym_comment] = ACTIONS(3),
    [anon_sym_and] = ACTIONS(240),
    [anon_sym_SEMI] = ACTIONS(242),
  },
  [48] = {
    [sym_feature_query] = STATE(71),
    [sym_unary_query] = STATE(71),
    [sym_selector_query] = STATE(71),
    [sym_parenthesized_query] = STATE(71),
    [sym_binary_query] = STATE(71),
    [sym__query] = STATE(71),
    [anon_sym_not] = ACTIONS(100),
    [anon_sym_LPAREN2] = ACTIONS(44),
    [sym_identifier] = ACTIONS(46),
    [anon_sym_selector] = ACTIONS(48),
    [sym_comment] = ACTIONS(3),
    [anon_sym_only] = ACTIONS(100),
  },
  [49] = {
    [sym_block] = STATE(116),
    [anon_sym_or] = ACTIONS(244),
    [anon_sym_LBRACE] = ACTIONS(96),
    [sym_comment] = ACTIONS(3),
    [anon_sym_and] = ACTIONS(244),
  },
  [50] = {
    [sym__descendant_operator] = ACTIONS(246),
    [anon_sym_LBRACK] = ACTIONS(246),
    [anon_sym_COLON] = ACTIONS(248),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(246),
    [anon_sym_TILDE] = ACTIONS(246),
    [anon_sym_COMMA] = ACTIONS(246),
    [anon_sym_COLON_COLON] = ACTIONS(246),
    [anon_sym_GT] = ACTIONS(246),
    [anon_sym_LBRACE] = ACTIONS(246),
    [anon_sym_PLUS] = ACTIONS(246),
    [anon_sym_POUND] = ACTIONS(246),
    [anon_sym_RPAREN] = ACTIONS(246),
  },
  [51] = {
    [sym__descendant_operator] = ACTIONS(250),
    [anon_sym_LBRACK] = ACTIONS(250),
    [anon_sym_COLON] = ACTIONS(252),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(250),
    [anon_sym_TILDE] = ACTIONS(250),
    [anon_sym_COMMA] = ACTIONS(250),
    [anon_sym_COLON_COLON] = ACTIONS(250),
    [anon_sym_GT] = ACTIONS(250),
    [anon_sym_LBRACE] = ACTIONS(250),
    [anon_sym_PLUS] = ACTIONS(250),
    [anon_sym_POUND] = ACTIONS(250),
    [anon_sym_RPAREN] = ACTIONS(250),
  },
  [52] = {
    [sym_pseudo_element_selector] = STATE(118),
    [sym_id_selector] = STATE(118),
    [sym_adjacent_sibling_selector] = STATE(118),
    [sym__selector] = STATE(118),
    [sym_universal_selector] = STATE(118),
    [sym_attribute_selector] = STATE(118),
    [sym_child_selector] = STATE(118),
    [sym_class_selector] = STATE(118),
    [sym_pseudo_class_selector] = STATE(118),
    [sym_descendant_selector] = STATE(118),
    [sym_sibling_selector] = STATE(118),
    [sym_identifier] = ACTIONS(254),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_COLON_COLON] = ACTIONS(15),
    [sym_string_value] = ACTIONS(256),
    [sym_nesting_selector] = ACTIONS(256),
    [anon_sym_POUND] = ACTIONS(35),
  },
  [53] = {
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(258),
  },
  [54] = {
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(260),
  },
  [55] = {
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(262),
  },
  [56] = {
    [sym_pseudo_element_selector] = STATE(122),
    [sym_id_selector] = STATE(122),
    [sym_adjacent_sibling_selector] = STATE(122),
    [sym__selector] = STATE(122),
    [sym_universal_selector] = STATE(122),
    [sym_attribute_selector] = STATE(122),
    [sym_child_selector] = STATE(122),
    [sym_class_selector] = STATE(122),
    [sym_pseudo_class_selector] = STATE(122),
    [sym_descendant_selector] = STATE(122),
    [sym_sibling_selector] = STATE(122),
    [sym_identifier] = ACTIONS(254),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_COLON_COLON] = ACTIONS(15),
    [sym_string_value] = ACTIONS(264),
    [sym_nesting_selector] = ACTIONS(264),
    [anon_sym_POUND] = ACTIONS(35),
  },
  [57] = {
    [sym_pseudo_element_selector] = STATE(123),
    [sym_id_selector] = STATE(123),
    [sym_adjacent_sibling_selector] = STATE(123),
    [sym__selector] = STATE(123),
    [sym_universal_selector] = STATE(123),
    [sym_attribute_selector] = STATE(123),
    [sym_child_selector] = STATE(123),
    [sym_class_selector] = STATE(123),
    [sym_pseudo_class_selector] = STATE(123),
    [sym_descendant_selector] = STATE(123),
    [sym_sibling_selector] = STATE(123),
    [sym_identifier] = ACTIONS(254),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_COLON_COLON] = ACTIONS(15),
    [sym_string_value] = ACTIONS(266),
    [sym_nesting_selector] = ACTIONS(266),
    [anon_sym_POUND] = ACTIONS(35),
  },
  [58] = {
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(268),
  },
  [59] = {
    [sym_pseudo_element_selector] = STATE(125),
    [sym_id_selector] = STATE(125),
    [sym_adjacent_sibling_selector] = STATE(125),
    [sym__selector] = STATE(125),
    [sym_universal_selector] = STATE(125),
    [sym_attribute_selector] = STATE(125),
    [sym_child_selector] = STATE(125),
    [sym_class_selector] = STATE(125),
    [sym_pseudo_class_selector] = STATE(125),
    [sym_descendant_selector] = STATE(125),
    [sym_sibling_selector] = STATE(125),
    [sym_identifier] = ACTIONS(254),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_COLON_COLON] = ACTIONS(15),
    [sym_string_value] = ACTIONS(270),
    [sym_nesting_selector] = ACTIONS(270),
    [anon_sym_POUND] = ACTIONS(35),
  },
  [60] = {
    [sym_pseudo_element_selector] = STATE(126),
    [sym_id_selector] = STATE(126),
    [sym_adjacent_sibling_selector] = STATE(126),
    [sym__selector] = STATE(126),
    [sym_universal_selector] = STATE(126),
    [sym_attribute_selector] = STATE(126),
    [sym_child_selector] = STATE(126),
    [sym_class_selector] = STATE(126),
    [sym_pseudo_class_selector] = STATE(126),
    [sym_descendant_selector] = STATE(126),
    [sym_sibling_selector] = STATE(126),
    [sym_identifier] = ACTIONS(254),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_COLON_COLON] = ACTIONS(15),
    [sym_string_value] = ACTIONS(272),
    [sym_nesting_selector] = ACTIONS(272),
    [anon_sym_POUND] = ACTIONS(35),
  },
  [61] = {
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(274),
  },
  [62] = {
    [aux_sym_selectors_repeat1] = STATE(128),
    [anon_sym_LBRACE] = ACTIONS(276),
    [anon_sym_COMMA] = ACTIONS(116),
    [sym_comment] = ACTIONS(3),
  },
  [63] = {
    [sym_media_statement] = STATE(63),
    [sym_charset_statement] = STATE(63),
    [sym_supports_statement] = STATE(63),
    [sym_at_rule] = STATE(63),
    [sym__selector] = STATE(16),
    [sym_universal_selector] = STATE(16),
    [sym_attribute_selector] = STATE(16),
    [sym_child_selector] = STATE(16),
    [sym_declaration] = STATE(63),
    [sym_import_statement] = STATE(63),
    [sym_pseudo_element_selector] = STATE(16),
    [sym_id_selector] = STATE(16),
    [sym_adjacent_sibling_selector] = STATE(16),
    [sym_namespace_statement] = STATE(63),
    [sym_keyframes_statement] = STATE(63),
    [sym_rule_set] = STATE(63),
    [sym_selectors] = STATE(19),
    [sym_class_selector] = STATE(16),
    [sym_pseudo_class_selector] = STATE(16),
    [sym_descendant_selector] = STATE(16),
    [sym_sibling_selector] = STATE(16),
    [aux_sym_stylesheet_repeat1] = STATE(63),
    [anon_sym_STAR] = ACTIONS(278),
    [anon_sym_ATmedia] = ACTIONS(281),
    [anon_sym_ATimport] = ACTIONS(284),
    [anon_sym_ATnamespace] = ACTIONS(287),
    [sym_identifier] = ACTIONS(290),
    [anon_sym_COLON_COLON] = ACTIONS(293),
    [sym_string_value] = ACTIONS(296),
    [sym_nesting_selector] = ACTIONS(296),
    [aux_sym_keyframes_statement_token1] = ACTIONS(299),
    [anon_sym_ATcharset] = ACTIONS(302),
    [ts_builtin_sym_end] = ACTIONS(305),
    [anon_sym_LBRACK] = ACTIONS(307),
    [anon_sym_COLON] = ACTIONS(310),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(313),
    [anon_sym_ATsupports] = ACTIONS(316),
    [sym_at_keyword] = ACTIONS(319),
    [anon_sym_ATkeyframes] = ACTIONS(299),
    [anon_sym_POUND] = ACTIONS(322),
  },
  [64] = {
    [anon_sym_RBRACE] = ACTIONS(325),
    [anon_sym_STAR] = ACTIONS(325),
    [anon_sym_ATmedia] = ACTIONS(327),
    [anon_sym_ATimport] = ACTIONS(327),
    [anon_sym_ATnamespace] = ACTIONS(327),
    [sym_identifier] = ACTIONS(325),
    [anon_sym_COLON_COLON] = ACTIONS(325),
    [sym_string_value] = ACTIONS(325),
    [sym_nesting_selector] = ACTIONS(325),
    [aux_sym_keyframes_statement_token1] = ACTIONS(327),
    [anon_sym_ATcharset] = ACTIONS(327),
    [ts_builtin_sym_end] = ACTIONS(325),
    [anon_sym_LBRACK] = ACTIONS(325),
    [anon_sym_COLON] = ACTIONS(327),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(325),
    [anon_sym_ATsupports] = ACTIONS(327),
    [sym_at_keyword] = ACTIONS(327),
    [anon_sym_ATkeyframes] = ACTIONS(327),
    [anon_sym_POUND] = ACTIONS(325),
  },
  [65] = {
    [sym_arguments] = STATE(130),
    [aux_sym_integer_value_token1] = ACTIONS(158),
    [anon_sym_STAR] = ACTIONS(160),
    [sym_identifier] = ACTIONS(158),
    [sym_important] = ACTIONS(160),
    [anon_sym_RBRACE] = ACTIONS(160),
    [anon_sym_RPAREN] = ACTIONS(160),
    [sym_plain_value] = ACTIONS(158),
    [sym_string_value] = ACTIONS(160),
    [anon_sym_SLASH] = ACTIONS(158),
    [anon_sym_SEMI] = ACTIONS(160),
    [anon_sym_LPAREN] = ACTIONS(329),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(158),
    [anon_sym_DASH] = ACTIONS(158),
    [anon_sym_COMMA] = ACTIONS(160),
    [anon_sym_LPAREN2] = ACTIONS(158),
    [anon_sym_PLUS] = ACTIONS(158),
    [anon_sym_POUND] = ACTIONS(160),
  },
  [66] = {
    [sym_integer_value] = STATE(131),
    [sym__value] = STATE(131),
    [sym_parenthesized_value] = STATE(131),
    [sym_binary_expression] = STATE(131),
    [sym_float_value] = STATE(131),
    [sym_call_expression] = STATE(131),
    [sym_color_value] = STATE(131),
    [aux_sym_integer_value_token1] = ACTIONS(76),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(80),
    [sym_plain_value] = ACTIONS(331),
    [anon_sym_LPAREN2] = ACTIONS(84),
    [sym_string_value] = ACTIONS(333),
    [anon_sym_POUND] = ACTIONS(88),
  },
  [67] = {
    [aux_sym_integer_value_token1] = ACTIONS(168),
    [anon_sym_STAR] = ACTIONS(170),
    [sym_identifier] = ACTIONS(168),
    [sym_important] = ACTIONS(170),
    [anon_sym_RBRACE] = ACTIONS(170),
    [anon_sym_RPAREN] = ACTIONS(170),
    [sym_plain_value] = ACTIONS(168),
    [sym_unit] = ACTIONS(335),
    [sym_string_value] = ACTIONS(170),
    [anon_sym_SLASH] = ACTIONS(168),
    [anon_sym_SEMI] = ACTIONS(170),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(168),
    [anon_sym_DASH] = ACTIONS(168),
    [anon_sym_COMMA] = ACTIONS(170),
    [anon_sym_LPAREN2] = ACTIONS(170),
    [anon_sym_PLUS] = ACTIONS(168),
    [anon_sym_POUND] = ACTIONS(170),
  },
  [68] = {
    [sym_comment] = ACTIONS(3),
    [aux_sym_color_value_token1] = ACTIONS(337),
  },
  [69] = {
    [aux_sym_integer_value_token1] = ACTIONS(176),
    [anon_sym_STAR] = ACTIONS(178),
    [sym_identifier] = ACTIONS(176),
    [sym_important] = ACTIONS(178),
    [anon_sym_RBRACE] = ACTIONS(178),
    [anon_sym_RPAREN] = ACTIONS(178),
    [sym_plain_value] = ACTIONS(176),
    [sym_unit] = ACTIONS(339),
    [sym_string_value] = ACTIONS(178),
    [anon_sym_SLASH] = ACTIONS(176),
    [anon_sym_SEMI] = ACTIONS(178),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(176),
    [anon_sym_DASH] = ACTIONS(176),
    [anon_sym_COMMA] = ACTIONS(178),
    [anon_sym_LPAREN2] = ACTIONS(178),
    [anon_sym_PLUS] = ACTIONS(176),
    [anon_sym_POUND] = ACTIONS(178),
  },
  [70] = {
    [sym__value] = STATE(139),
    [sym_parenthesized_value] = STATE(139),
    [sym_binary_expression] = STATE(139),
    [sym_color_value] = STATE(139),
    [sym_integer_value] = STATE(139),
    [aux_sym_declaration_repeat1] = STATE(140),
    [sym_float_value] = STATE(139),
    [sym_call_expression] = STATE(139),
    [aux_sym_integer_value_token1] = ACTIONS(132),
    [sym_identifier] = ACTIONS(134),
    [anon_sym_STAR] = ACTIONS(341),
    [sym_important] = ACTIONS(343),
    [sym_plain_value] = ACTIONS(345),
    [sym_string_value] = ACTIONS(347),
    [anon_sym_SLASH] = ACTIONS(349),
    [anon_sym_SEMI] = ACTIONS(351),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(136),
    [anon_sym_DASH] = ACTIONS(349),
    [anon_sym_LPAREN2] = ACTIONS(140),
    [anon_sym_COMMA] = ACTIONS(353),
    [anon_sym_PLUS] = ACTIONS(349),
    [anon_sym_POUND] = ACTIONS(144),
  },
  [71] = {
    [anon_sym_RPAREN] = ACTIONS(355),
    [anon_sym_COMMA] = ACTIONS(355),
    [anon_sym_or] = ACTIONS(355),
    [anon_sym_LBRACE] = ACTIONS(355),
    [sym_comment] = ACTIONS(3),
    [anon_sym_and] = ACTIONS(355),
    [anon_sym_SEMI] = ACTIONS(355),
  },
  [72] = {
    [sym_feature_query] = STATE(71),
    [sym_unary_query] = STATE(71),
    [sym_selector_query] = STATE(71),
    [sym_parenthesized_query] = STATE(71),
    [sym_binary_query] = STATE(71),
    [sym__query] = STATE(71),
    [anon_sym_not] = ACTIONS(146),
    [anon_sym_LPAREN2] = ACTIONS(44),
    [sym_identifier] = ACTIONS(46),
    [anon_sym_selector] = ACTIONS(48),
    [sym_comment] = ACTIONS(3),
    [anon_sym_only] = ACTIONS(146),
  },
  [73] = {
    [anon_sym_or] = ACTIONS(150),
    [anon_sym_COLON] = ACTIONS(357),
    [sym_comment] = ACTIONS(3),
    [anon_sym_and] = ACTIONS(150),
    [anon_sym_RPAREN] = ACTIONS(150),
  },
  [74] = {
    [anon_sym_or] = ACTIONS(359),
    [sym_comment] = ACTIONS(3),
    [anon_sym_and] = ACTIONS(359),
    [anon_sym_RPAREN] = ACTIONS(361),
  },
  [75] = {
    [sym_pseudo_element_selector] = STATE(144),
    [sym_id_selector] = STATE(144),
    [sym_adjacent_sibling_selector] = STATE(144),
    [sym__selector] = STATE(144),
    [sym_universal_selector] = STATE(144),
    [sym_attribute_selector] = STATE(144),
    [sym_child_selector] = STATE(144),
    [sym_class_selector] = STATE(144),
    [sym_pseudo_class_selector] = STATE(144),
    [sym_descendant_selector] = STATE(144),
    [sym_sibling_selector] = STATE(144),
    [sym_identifier] = ACTIONS(254),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_COLON_COLON] = ACTIONS(15),
    [sym_string_value] = ACTIONS(363),
    [sym_nesting_selector] = ACTIONS(363),
    [anon_sym_POUND] = ACTIONS(35),
  },
  [76] = {
    [sym_feature_query] = STATE(145),
    [sym_unary_query] = STATE(145),
    [sym_selector_query] = STATE(145),
    [sym_parenthesized_query] = STATE(145),
    [sym_binary_query] = STATE(145),
    [sym__query] = STATE(145),
    [anon_sym_not] = ACTIONS(42),
    [anon_sym_LPAREN2] = ACTIONS(44),
    [sym_identifier] = ACTIONS(46),
    [anon_sym_selector] = ACTIONS(48),
    [sym_comment] = ACTIONS(3),
    [anon_sym_only] = ACTIONS(42),
  },
  [77] = {
    [sym_feature_query] = STATE(146),
    [sym_unary_query] = STATE(146),
    [sym_selector_query] = STATE(146),
    [sym_parenthesized_query] = STATE(146),
    [sym_binary_query] = STATE(146),
    [sym__query] = STATE(146),
    [anon_sym_not] = ACTIONS(42),
    [anon_sym_LPAREN2] = ACTIONS(44),
    [sym_identifier] = ACTIONS(46),
    [anon_sym_selector] = ACTIONS(48),
    [sym_comment] = ACTIONS(3),
    [anon_sym_only] = ACTIONS(42),
  },
  [78] = {
    [aux_sym_import_statement_repeat1] = STATE(147),
    [sym_block] = STATE(148),
    [anon_sym_LBRACE] = ACTIONS(96),
    [anon_sym_COMMA] = ACTIONS(154),
    [sym_comment] = ACTIONS(3),
  },
  [79] = {
    [anon_sym_RBRACE] = ACTIONS(365),
    [anon_sym_STAR] = ACTIONS(365),
    [anon_sym_ATmedia] = ACTIONS(367),
    [anon_sym_ATimport] = ACTIONS(367),
    [anon_sym_ATnamespace] = ACTIONS(367),
    [sym_identifier] = ACTIONS(365),
    [anon_sym_COLON_COLON] = ACTIONS(365),
    [sym_string_value] = ACTIONS(365),
    [sym_nesting_selector] = ACTIONS(365),
    [aux_sym_keyframes_statement_token1] = ACTIONS(367),
    [anon_sym_ATcharset] = ACTIONS(367),
    [ts_builtin_sym_end] = ACTIONS(365),
    [anon_sym_LBRACK] = ACTIONS(365),
    [anon_sym_COLON] = ACTIONS(367),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(365),
    [anon_sym_ATsupports] = ACTIONS(367),
    [sym_at_keyword] = ACTIONS(367),
    [anon_sym_ATkeyframes] = ACTIONS(367),
    [anon_sym_POUND] = ACTIONS(365),
  },
  [80] = {
    [sym__value] = STATE(150),
    [sym_parenthesized_value] = STATE(150),
    [sym_binary_expression] = STATE(150),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(151),
    [sym_color_value] = STATE(150),
    [sym_integer_value] = STATE(150),
    [sym_float_value] = STATE(150),
    [sym_call_expression] = STATE(150),
    [aux_sym_integer_value_token1] = ACTIONS(132),
    [sym_identifier] = ACTIONS(134),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(136),
    [anon_sym_RPAREN] = ACTIONS(369),
    [sym_plain_value] = ACTIONS(371),
    [anon_sym_LPAREN2] = ACTIONS(140),
    [sym_string_value] = ACTIONS(373),
    [anon_sym_POUND] = ACTIONS(144),
  },
  [81] = {
    [anon_sym_not] = ACTIONS(375),
    [anon_sym_STAR] = ACTIONS(377),
    [sym_identifier] = ACTIONS(375),
    [sym_comment] = ACTIONS(3),
    [anon_sym_only] = ACTIONS(375),
    [anon_sym_DASH] = ACTIONS(375),
    [anon_sym_LPAREN2] = ACTIONS(377),
    [anon_sym_selector] = ACTIONS(375),
    [anon_sym_PLUS] = ACTIONS(377),
    [anon_sym_SEMI] = ACTIONS(377),
    [anon_sym_SLASH] = ACTIONS(375),
  },
  [82] = {
    [anon_sym_DASH] = ACTIONS(214),
    [anon_sym_STAR] = ACTIONS(214),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PLUS] = ACTIONS(214),
    [anon_sym_SLASH] = ACTIONS(216),
    [anon_sym_RPAREN] = ACTIONS(379),
  },
  [83] = {
    [anon_sym_not] = ACTIONS(381),
    [anon_sym_STAR] = ACTIONS(383),
    [sym_identifier] = ACTIONS(381),
    [sym_comment] = ACTIONS(3),
    [anon_sym_only] = ACTIONS(381),
    [anon_sym_DASH] = ACTIONS(381),
    [anon_sym_LPAREN2] = ACTIONS(383),
    [anon_sym_selector] = ACTIONS(381),
    [anon_sym_LBRACE] = ACTIONS(383),
    [anon_sym_PLUS] = ACTIONS(383),
    [anon_sym_SEMI] = ACTIONS(383),
    [anon_sym_SLASH] = ACTIONS(381),
  },
  [84] = {
    [anon_sym_not] = ACTIONS(385),
    [anon_sym_STAR] = ACTIONS(387),
    [sym_identifier] = ACTIONS(385),
    [sym_comment] = ACTIONS(3),
    [anon_sym_only] = ACTIONS(385),
    [anon_sym_DASH] = ACTIONS(385),
    [anon_sym_LPAREN2] = ACTIONS(387),
    [anon_sym_selector] = ACTIONS(385),
    [anon_sym_PLUS] = ACTIONS(387),
    [anon_sym_SEMI] = ACTIONS(387),
    [anon_sym_SLASH] = ACTIONS(385),
  },
  [85] = {
    [anon_sym_not] = ACTIONS(389),
    [anon_sym_STAR] = ACTIONS(391),
    [sym_identifier] = ACTIONS(389),
    [sym_comment] = ACTIONS(3),
    [anon_sym_only] = ACTIONS(389),
    [anon_sym_DASH] = ACTIONS(389),
    [anon_sym_LPAREN2] = ACTIONS(391),
    [anon_sym_selector] = ACTIONS(389),
    [anon_sym_PLUS] = ACTIONS(391),
    [anon_sym_SEMI] = ACTIONS(391),
    [anon_sym_SLASH] = ACTIONS(389),
  },
  [86] = {
    [sym_feature_query] = STATE(71),
    [sym_unary_query] = STATE(71),
    [sym_selector_query] = STATE(71),
    [sym_parenthesized_query] = STATE(71),
    [sym_binary_query] = STATE(71),
    [sym__query] = STATE(71),
    [anon_sym_not] = ACTIONS(182),
    [anon_sym_LPAREN2] = ACTIONS(44),
    [sym_identifier] = ACTIONS(46),
    [anon_sym_selector] = ACTIONS(48),
    [sym_comment] = ACTIONS(3),
    [anon_sym_only] = ACTIONS(182),
  },
  [87] = {
    [sym_integer_value] = STATE(153),
    [sym__value] = STATE(153),
    [sym_parenthesized_value] = STATE(153),
    [sym_binary_expression] = STATE(153),
    [sym_float_value] = STATE(153),
    [sym_call_expression] = STATE(153),
    [sym_color_value] = STATE(153),
    [aux_sym_integer_value_token1] = ACTIONS(50),
    [sym_identifier] = ACTIONS(52),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(54),
    [sym_plain_value] = ACTIONS(393),
    [anon_sym_LPAREN2] = ACTIONS(58),
    [sym_string_value] = ACTIONS(395),
    [anon_sym_POUND] = ACTIONS(62),
  },
  [88] = {
    [anon_sym_RBRACE] = ACTIONS(397),
    [anon_sym_STAR] = ACTIONS(397),
    [anon_sym_ATmedia] = ACTIONS(399),
    [anon_sym_ATimport] = ACTIONS(399),
    [anon_sym_ATnamespace] = ACTIONS(399),
    [sym_identifier] = ACTIONS(397),
    [anon_sym_COLON_COLON] = ACTIONS(397),
    [sym_string_value] = ACTIONS(397),
    [sym_nesting_selector] = ACTIONS(397),
    [aux_sym_keyframes_statement_token1] = ACTIONS(399),
    [anon_sym_ATcharset] = ACTIONS(399),
    [ts_builtin_sym_end] = ACTIONS(397),
    [anon_sym_LBRACK] = ACTIONS(397),
    [anon_sym_COLON] = ACTIONS(399),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(397),
    [anon_sym_ATsupports] = ACTIONS(399),
    [sym_at_keyword] = ACTIONS(399),
    [anon_sym_ATkeyframes] = ACTIONS(399),
    [anon_sym_POUND] = ACTIONS(397),
  },
  [89] = {
    [aux_sym_import_statement_repeat1] = STATE(157),
    [anon_sym_COMMA] = ACTIONS(401),
    [anon_sym_or] = ACTIONS(403),
    [sym_comment] = ACTIONS(3),
    [anon_sym_and] = ACTIONS(403),
    [anon_sym_SEMI] = ACTIONS(405),
  },
  [90] = {
    [anon_sym_RBRACE] = ACTIONS(407),
    [anon_sym_STAR] = ACTIONS(407),
    [anon_sym_ATmedia] = ACTIONS(409),
    [anon_sym_ATimport] = ACTIONS(409),
    [anon_sym_ATnamespace] = ACTIONS(409),
    [sym_identifier] = ACTIONS(407),
    [anon_sym_COLON_COLON] = ACTIONS(407),
    [sym_string_value] = ACTIONS(407),
    [sym_nesting_selector] = ACTIONS(407),
    [aux_sym_keyframes_statement_token1] = ACTIONS(409),
    [anon_sym_ATcharset] = ACTIONS(409),
    [ts_builtin_sym_end] = ACTIONS(407),
    [anon_sym_LBRACK] = ACTIONS(407),
    [anon_sym_COLON] = ACTIONS(409),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(407),
    [anon_sym_ATsupports] = ACTIONS(409),
    [sym_at_keyword] = ACTIONS(409),
    [anon_sym_ATkeyframes] = ACTIONS(409),
    [anon_sym_POUND] = ACTIONS(407),
  },
  [91] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(411),
  },
  [92] = {
    [sym_arguments] = STATE(81),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(162),
  },
  [93] = {
    [sym_integer_value] = STATE(161),
    [sym_keyframe_block] = STATE(162),
    [aux_sym_keyframe_block_list_repeat1] = STATE(162),
    [aux_sym_integer_value_token1] = ACTIONS(413),
    [anon_sym_RBRACE] = ACTIONS(415),
    [sym_to] = ACTIONS(417),
    [sym_comment] = ACTIONS(3),
    [sym_from] = ACTIONS(417),
  },
  [94] = {
    [anon_sym_RBRACE] = ACTIONS(419),
    [anon_sym_STAR] = ACTIONS(419),
    [anon_sym_ATmedia] = ACTIONS(421),
    [anon_sym_ATimport] = ACTIONS(421),
    [anon_sym_ATnamespace] = ACTIONS(421),
    [sym_identifier] = ACTIONS(419),
    [anon_sym_COLON_COLON] = ACTIONS(419),
    [sym_string_value] = ACTIONS(419),
    [sym_nesting_selector] = ACTIONS(419),
    [aux_sym_keyframes_statement_token1] = ACTIONS(421),
    [anon_sym_ATcharset] = ACTIONS(421),
    [ts_builtin_sym_end] = ACTIONS(419),
    [anon_sym_LBRACK] = ACTIONS(419),
    [anon_sym_COLON] = ACTIONS(421),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(419),
    [anon_sym_ATsupports] = ACTIONS(421),
    [sym_at_keyword] = ACTIONS(421),
    [anon_sym_ATkeyframes] = ACTIONS(421),
    [anon_sym_POUND] = ACTIONS(419),
  },
  [95] = {
    [sym__value] = STATE(150),
    [sym_parenthesized_value] = STATE(150),
    [sym_binary_expression] = STATE(150),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(164),
    [sym_color_value] = STATE(150),
    [sym_integer_value] = STATE(150),
    [sym_float_value] = STATE(150),
    [sym_call_expression] = STATE(150),
    [aux_sym_integer_value_token1] = ACTIONS(132),
    [sym_identifier] = ACTIONS(134),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(136),
    [anon_sym_RPAREN] = ACTIONS(423),
    [sym_plain_value] = ACTIONS(371),
    [anon_sym_LPAREN2] = ACTIONS(140),
    [sym_string_value] = ACTIONS(373),
    [anon_sym_POUND] = ACTIONS(144),
  },
  [96] = {
    [anon_sym_STAR] = ACTIONS(377),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(377),
    [anon_sym_RPAREN] = ACTIONS(377),
    [anon_sym_DASH] = ACTIONS(377),
    [anon_sym_PLUS] = ACTIONS(377),
    [anon_sym_SEMI] = ACTIONS(377),
    [anon_sym_SLASH] = ACTIONS(375),
  },
  [97] = {
    [anon_sym_DASH] = ACTIONS(214),
    [anon_sym_STAR] = ACTIONS(214),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PLUS] = ACTIONS(214),
    [anon_sym_SLASH] = ACTIONS(216),
    [anon_sym_RPAREN] = ACTIONS(425),
  },
  [98] = {
    [anon_sym_STAR] = ACTIONS(383),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(383),
    [anon_sym_RPAREN] = ACTIONS(383),
    [anon_sym_DASH] = ACTIONS(383),
    [anon_sym_PLUS] = ACTIONS(383),
    [anon_sym_SEMI] = ACTIONS(383),
    [anon_sym_SLASH] = ACTIONS(381),
  },
  [99] = {
    [anon_sym_STAR] = ACTIONS(387),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(387),
    [anon_sym_RPAREN] = ACTIONS(387),
    [anon_sym_DASH] = ACTIONS(387),
    [anon_sym_PLUS] = ACTIONS(387),
    [anon_sym_SEMI] = ACTIONS(387),
    [anon_sym_SLASH] = ACTIONS(385),
  },
  [100] = {
    [anon_sym_STAR] = ACTIONS(391),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(391),
    [anon_sym_RPAREN] = ACTIONS(391),
    [anon_sym_DASH] = ACTIONS(391),
    [anon_sym_PLUS] = ACTIONS(391),
    [anon_sym_SEMI] = ACTIONS(391),
    [anon_sym_SLASH] = ACTIONS(389),
  },
  [101] = {
    [sym_integer_value] = STATE(166),
    [sym__value] = STATE(166),
    [sym_parenthesized_value] = STATE(166),
    [sym_binary_expression] = STATE(166),
    [sym_float_value] = STATE(166),
    [sym_call_expression] = STATE(166),
    [sym_color_value] = STATE(166),
    [aux_sym_integer_value_token1] = ACTIONS(76),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(80),
    [sym_plain_value] = ACTIONS(427),
    [anon_sym_LPAREN2] = ACTIONS(84),
    [sym_string_value] = ACTIONS(429),
    [anon_sym_POUND] = ACTIONS(88),
  },
  [102] = {
    [anon_sym_RBRACE] = ACTIONS(431),
    [anon_sym_STAR] = ACTIONS(431),
    [anon_sym_ATmedia] = ACTIONS(433),
    [anon_sym_ATimport] = ACTIONS(433),
    [anon_sym_ATnamespace] = ACTIONS(433),
    [sym_identifier] = ACTIONS(431),
    [anon_sym_COLON_COLON] = ACTIONS(431),
    [sym_string_value] = ACTIONS(431),
    [sym_nesting_selector] = ACTIONS(431),
    [aux_sym_keyframes_statement_token1] = ACTIONS(433),
    [anon_sym_ATcharset] = ACTIONS(433),
    [ts_builtin_sym_end] = ACTIONS(431),
    [anon_sym_LBRACK] = ACTIONS(431),
    [anon_sym_COLON] = ACTIONS(433),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(431),
    [anon_sym_ATsupports] = ACTIONS(433),
    [sym_at_keyword] = ACTIONS(433),
    [anon_sym_ATkeyframes] = ACTIONS(433),
    [anon_sym_POUND] = ACTIONS(431),
  },
  [103] = {
    [sym_integer_value] = STATE(167),
    [sym__value] = STATE(167),
    [sym_parenthesized_value] = STATE(167),
    [sym_binary_expression] = STATE(167),
    [sym_float_value] = STATE(167),
    [sym_call_expression] = STATE(167),
    [sym_color_value] = STATE(167),
    [aux_sym_integer_value_token1] = ACTIONS(76),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(80),
    [sym_plain_value] = ACTIONS(435),
    [anon_sym_LPAREN2] = ACTIONS(84),
    [sym_string_value] = ACTIONS(437),
    [anon_sym_POUND] = ACTIONS(88),
  },
  [104] = {
    [sym__descendant_operator] = ACTIONS(439),
    [anon_sym_LBRACK] = ACTIONS(439),
    [anon_sym_COLON] = ACTIONS(441),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(439),
    [anon_sym_TILDE] = ACTIONS(439),
    [anon_sym_COMMA] = ACTIONS(439),
    [anon_sym_COLON_COLON] = ACTIONS(439),
    [anon_sym_GT] = ACTIONS(439),
    [anon_sym_LBRACE] = ACTIONS(439),
    [anon_sym_PLUS] = ACTIONS(439),
    [anon_sym_POUND] = ACTIONS(439),
    [anon_sym_RPAREN] = ACTIONS(439),
  },
  [105] = {
    [sym__value] = STATE(150),
    [sym_parenthesized_value] = STATE(150),
    [sym_binary_expression] = STATE(150),
    [sym__selector] = STATE(172),
    [sym_universal_selector] = STATE(172),
    [sym_attribute_selector] = STATE(172),
    [sym_child_selector] = STATE(172),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(173),
    [sym_float_value] = STATE(150),
    [sym_call_expression] = STATE(150),
    [sym_pseudo_element_selector] = STATE(172),
    [sym_id_selector] = STATE(172),
    [sym_adjacent_sibling_selector] = STATE(172),
    [sym_color_value] = STATE(150),
    [sym_integer_value] = STATE(150),
    [sym_class_selector] = STATE(172),
    [sym_pseudo_class_selector] = STATE(172),
    [sym_descendant_selector] = STATE(172),
    [sym_sibling_selector] = STATE(172),
    [aux_sym_integer_value_token1] = ACTIONS(132),
    [sym_identifier] = ACTIONS(443),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_RPAREN] = ACTIONS(445),
    [anon_sym_COLON_COLON] = ACTIONS(15),
    [sym_plain_value] = ACTIONS(371),
    [sym_string_value] = ACTIONS(447),
    [sym_nesting_selector] = ACTIONS(449),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(136),
    [anon_sym_DOT] = ACTIONS(451),
    [anon_sym_LPAREN2] = ACTIONS(140),
    [anon_sym_POUND] = ACTIONS(453),
  },
  [106] = {
    [sym__descendant_operator] = ACTIONS(455),
    [anon_sym_LBRACK] = ACTIONS(455),
    [anon_sym_COLON] = ACTIONS(457),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(455),
    [anon_sym_TILDE] = ACTIONS(455),
    [anon_sym_COMMA] = ACTIONS(455),
    [anon_sym_COLON_COLON] = ACTIONS(455),
    [anon_sym_GT] = ACTIONS(455),
    [anon_sym_LBRACE] = ACTIONS(455),
    [anon_sym_PLUS] = ACTIONS(455),
    [anon_sym_POUND] = ACTIONS(455),
    [anon_sym_RPAREN] = ACTIONS(455),
  },
  [107] = {
    [anon_sym_RBRACE] = ACTIONS(459),
    [anon_sym_STAR] = ACTIONS(459),
    [anon_sym_ATmedia] = ACTIONS(461),
    [anon_sym_ATimport] = ACTIONS(461),
    [anon_sym_ATnamespace] = ACTIONS(461),
    [sym_identifier] = ACTIONS(459),
    [anon_sym_COLON_COLON] = ACTIONS(459),
    [sym_string_value] = ACTIONS(459),
    [sym_nesting_selector] = ACTIONS(459),
    [aux_sym_keyframes_statement_token1] = ACTIONS(461),
    [anon_sym_ATcharset] = ACTIONS(461),
    [ts_builtin_sym_end] = ACTIONS(459),
    [anon_sym_LBRACK] = ACTIONS(459),
    [anon_sym_COLON] = ACTIONS(461),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(459),
    [anon_sym_ATsupports] = ACTIONS(461),
    [sym_at_keyword] = ACTIONS(461),
    [anon_sym_ATkeyframes] = ACTIONS(461),
    [anon_sym_POUND] = ACTIONS(459),
  },
  [108] = {
    [sym__descendant_operator] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(463),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(37),
    [anon_sym_COMMA] = ACTIONS(37),
    [anon_sym_COLON_COLON] = ACTIONS(37),
    [anon_sym_GT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(37),
  },
  [109] = {
    [sym_media_statement] = STATE(176),
    [sym_charset_statement] = STATE(176),
    [sym_supports_statement] = STATE(176),
    [sym_at_rule] = STATE(176),
    [sym__selector] = STATE(16),
    [sym_universal_selector] = STATE(16),
    [sym_attribute_selector] = STATE(16),
    [sym_child_selector] = STATE(16),
    [sym_declaration] = STATE(176),
    [aux_sym_block_repeat1] = STATE(176),
    [sym_last_declaration] = STATE(177),
    [sym_import_statement] = STATE(176),
    [sym_pseudo_element_selector] = STATE(16),
    [sym_id_selector] = STATE(16),
    [sym_adjacent_sibling_selector] = STATE(16),
    [sym_namespace_statement] = STATE(176),
    [sym_keyframes_statement] = STATE(176),
    [sym_rule_set] = STATE(176),
    [sym_selectors] = STATE(19),
    [sym_class_selector] = STATE(16),
    [sym_pseudo_class_selector] = STATE(16),
    [sym_descendant_selector] = STATE(16),
    [sym_sibling_selector] = STATE(16),
    [anon_sym_RBRACE] = ACTIONS(465),
    [sym_identifier] = ACTIONS(232),
    [anon_sym_ATmedia] = ACTIONS(7),
    [anon_sym_ATimport] = ACTIONS(9),
    [anon_sym_ATnamespace] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_COLON_COLON] = ACTIONS(15),
    [sym_string_value] = ACTIONS(17),
    [sym_nesting_selector] = ACTIONS(17),
    [aux_sym_keyframes_statement_token1] = ACTIONS(19),
    [anon_sym_ATcharset] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [sym_at_keyword] = ACTIONS(29),
    [anon_sym_ATsupports] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_ATkeyframes] = ACTIONS(19),
    [anon_sym_POUND] = ACTIONS(35),
  },
  [110] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(465),
  },
  [111] = {
    [sym_feature_query] = STATE(178),
    [sym_unary_query] = STATE(178),
    [sym_selector_query] = STATE(178),
    [sym_parenthesized_query] = STATE(178),
    [sym_binary_query] = STATE(178),
    [sym__query] = STATE(178),
    [anon_sym_not] = ACTIONS(94),
    [anon_sym_LPAREN2] = ACTIONS(44),
    [sym_identifier] = ACTIONS(46),
    [anon_sym_selector] = ACTIONS(48),
    [sym_comment] = ACTIONS(3),
    [anon_sym_only] = ACTIONS(94),
  },
  [112] = {
    [sym_feature_query] = STATE(146),
    [sym_unary_query] = STATE(146),
    [sym_selector_query] = STATE(146),
    [sym_parenthesized_query] = STATE(146),
    [sym_binary_query] = STATE(146),
    [sym__query] = STATE(146),
    [anon_sym_not] = ACTIONS(94),
    [anon_sym_LPAREN2] = ACTIONS(44),
    [sym_identifier] = ACTIONS(46),
    [anon_sym_selector] = ACTIONS(48),
    [sym_comment] = ACTIONS(3),
    [anon_sym_only] = ACTIONS(94),
  },
  [113] = {
    [anon_sym_RBRACE] = ACTIONS(467),
    [anon_sym_STAR] = ACTIONS(467),
    [anon_sym_ATmedia] = ACTIONS(469),
    [anon_sym_ATimport] = ACTIONS(469),
    [anon_sym_ATnamespace] = ACTIONS(469),
    [sym_identifier] = ACTIONS(467),
    [anon_sym_COLON_COLON] = ACTIONS(467),
    [sym_string_value] = ACTIONS(467),
    [sym_nesting_selector] = ACTIONS(467),
    [aux_sym_keyframes_statement_token1] = ACTIONS(469),
    [anon_sym_ATcharset] = ACTIONS(469),
    [ts_builtin_sym_end] = ACTIONS(467),
    [anon_sym_LBRACK] = ACTIONS(467),
    [anon_sym_COLON] = ACTIONS(469),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(467),
    [anon_sym_ATsupports] = ACTIONS(469),
    [sym_at_keyword] = ACTIONS(469),
    [anon_sym_ATkeyframes] = ACTIONS(469),
    [anon_sym_POUND] = ACTIONS(467),
  },
  [114] = {
    [aux_sym_import_statement_repeat1] = STATE(180),
    [sym_block] = STATE(179),
    [anon_sym_COMMA] = ACTIONS(238),
    [anon_sym_LBRACE] = ACTIONS(96),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(471),
  },
  [115] = {
    [sym_feature_query] = STATE(146),
    [sym_unary_query] = STATE(146),
    [sym_selector_query] = STATE(146),
    [sym_parenthesized_query] = STATE(146),
    [sym_binary_query] = STATE(146),
    [sym__query] = STATE(146),
    [anon_sym_not] = ACTIONS(100),
    [anon_sym_LPAREN2] = ACTIONS(44),
    [sym_identifier] = ACTIONS(46),
    [anon_sym_selector] = ACTIONS(48),
    [sym_comment] = ACTIONS(3),
    [anon_sym_only] = ACTIONS(100),
  },
  [116] = {
    [anon_sym_RBRACE] = ACTIONS(473),
    [anon_sym_STAR] = ACTIONS(473),
    [anon_sym_ATmedia] = ACTIONS(475),
    [anon_sym_ATimport] = ACTIONS(475),
    [anon_sym_ATnamespace] = ACTIONS(475),
    [sym_identifier] = ACTIONS(473),
    [anon_sym_COLON_COLON] = ACTIONS(473),
    [sym_string_value] = ACTIONS(473),
    [sym_nesting_selector] = ACTIONS(473),
    [aux_sym_keyframes_statement_token1] = ACTIONS(475),
    [anon_sym_ATcharset] = ACTIONS(475),
    [ts_builtin_sym_end] = ACTIONS(473),
    [anon_sym_LBRACK] = ACTIONS(473),
    [anon_sym_COLON] = ACTIONS(475),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(473),
    [anon_sym_ATsupports] = ACTIONS(475),
    [sym_at_keyword] = ACTIONS(475),
    [anon_sym_ATkeyframes] = ACTIONS(475),
    [anon_sym_POUND] = ACTIONS(473),
  },
  [117] = {
    [sym__descendant_operator] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(477),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(37),
    [anon_sym_COMMA] = ACTIONS(37),
    [anon_sym_COLON_COLON] = ACTIONS(37),
    [anon_sym_GT] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(37),
    [anon_sym_RPAREN] = ACTIONS(37),
  },
  [118] = {
    [sym__descendant_operator] = ACTIONS(479),
    [anon_sym_LBRACK] = ACTIONS(479),
    [anon_sym_COLON] = ACTIONS(481),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(112),
    [anon_sym_TILDE] = ACTIONS(479),
    [anon_sym_COMMA] = ACTIONS(479),
    [anon_sym_COLON_COLON] = ACTIONS(479),
    [anon_sym_GT] = ACTIONS(479),
    [anon_sym_LBRACE] = ACTIONS(479),
    [anon_sym_PLUS] = ACTIONS(479),
    [anon_sym_POUND] = ACTIONS(479),
    [anon_sym_RPAREN] = ACTIONS(479),
  },
  [119] = {
    [anon_sym_EQ] = ACTIONS(483),
    [anon_sym_DOLLAR_EQ] = ACTIONS(483),
    [sym_comment] = ACTIONS(3),
    [anon_sym_TILDE_EQ] = ACTIONS(483),
    [anon_sym_RBRACK] = ACTIONS(485),
    [anon_sym_CARET_EQ] = ACTIONS(483),
    [anon_sym_STAR_EQ] = ACTIONS(483),
    [anon_sym_PIPE_EQ] = ACTIONS(483),
  },
  [120] = {
    [sym_pseudo_class_arguments] = STATE(183),
    [sym__descendant_operator] = ACTIONS(487),
    [anon_sym_LPAREN] = ACTIONS(226),
    [anon_sym_LBRACK] = ACTIONS(487),
    [anon_sym_COLON] = ACTIONS(489),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(487),
    [anon_sym_TILDE] = ACTIONS(487),
    [anon_sym_COMMA] = ACTIONS(487),
    [anon_sym_COLON_COLON] = ACTIONS(487),
    [anon_sym_GT] = ACTIONS(487),
    [anon_sym_LBRACE] = ACTIONS(487),
    [anon_sym_PLUS] = ACTIONS(487),
    [anon_sym_POUND] = ACTIONS(487),
    [anon_sym_RPAREN] = ACTIONS(487),
  },
  [121] = {
    [sym__descendant_operator] = ACTIONS(491),
    [anon_sym_LBRACK] = ACTIONS(491),
    [anon_sym_COLON] = ACTIONS(493),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(491),
    [anon_sym_TILDE] = ACTIONS(491),
    [anon_sym_COMMA] = ACTIONS(491),
    [anon_sym_COLON_COLON] = ACTIONS(491),
    [anon_sym_GT] = ACTIONS(491),
    [anon_sym_LBRACE] = ACTIONS(491),
    [anon_sym_PLUS] = ACTIONS(491),
    [anon_sym_POUND] = ACTIONS(491),
    [anon_sym_RPAREN] = ACTIONS(491),
  },
  [122] = {
    [sym__descendant_operator] = ACTIONS(495),
    [anon_sym_LBRACK] = ACTIONS(495),
    [anon_sym_COLON] = ACTIONS(497),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(112),
    [anon_sym_TILDE] = ACTIONS(495),
    [anon_sym_COMMA] = ACTIONS(495),
    [anon_sym_COLON_COLON] = ACTIONS(495),
    [anon_sym_GT] = ACTIONS(495),
    [anon_sym_LBRACE] = ACTIONS(495),
    [anon_sym_PLUS] = ACTIONS(495),
    [anon_sym_POUND] = ACTIONS(495),
    [anon_sym_RPAREN] = ACTIONS(495),
  },
  [123] = {
    [sym__descendant_operator] = ACTIONS(106),
    [anon_sym_LBRACK] = ACTIONS(108),
    [anon_sym_COLON] = ACTIONS(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(112),
    [anon_sym_TILDE] = ACTIONS(114),
    [anon_sym_COMMA] = ACTIONS(499),
    [anon_sym_COLON_COLON] = ACTIONS(118),
    [anon_sym_GT] = ACTIONS(120),
    [anon_sym_LBRACE] = ACTIONS(499),
    [anon_sym_PLUS] = ACTIONS(124),
    [anon_sym_POUND] = ACTIONS(126),
  },
  [124] = {
    [sym__descendant_operator] = ACTIONS(501),
    [anon_sym_LBRACK] = ACTIONS(501),
    [anon_sym_COLON] = ACTIONS(503),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(501),
    [anon_sym_TILDE] = ACTIONS(501),
    [anon_sym_COMMA] = ACTIONS(501),
    [anon_sym_COLON_COLON] = ACTIONS(501),
    [anon_sym_GT] = ACTIONS(501),
    [anon_sym_LBRACE] = ACTIONS(501),
    [anon_sym_PLUS] = ACTIONS(501),
    [anon_sym_POUND] = ACTIONS(501),
    [anon_sym_RPAREN] = ACTIONS(501),
  },
  [125] = {
    [sym__descendant_operator] = ACTIONS(505),
    [anon_sym_LBRACK] = ACTIONS(505),
    [anon_sym_COLON] = ACTIONS(507),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(112),
    [anon_sym_TILDE] = ACTIONS(505),
    [anon_sym_COMMA] = ACTIONS(505),
    [anon_sym_COLON_COLON] = ACTIONS(505),
    [anon_sym_GT] = ACTIONS(505),
    [anon_sym_LBRACE] = ACTIONS(505),
    [anon_sym_PLUS] = ACTIONS(505),
    [anon_sym_POUND] = ACTIONS(505),
    [anon_sym_RPAREN] = ACTIONS(505),
  },
  [126] = {
    [sym__descendant_operator] = ACTIONS(509),
    [anon_sym_LBRACK] = ACTIONS(509),
    [anon_sym_COLON] = ACTIONS(511),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(112),
    [anon_sym_TILDE] = ACTIONS(509),
    [anon_sym_COMMA] = ACTIONS(509),
    [anon_sym_COLON_COLON] = ACTIONS(509),
    [anon_sym_GT] = ACTIONS(509),
    [anon_sym_LBRACE] = ACTIONS(509),
    [anon_sym_PLUS] = ACTIONS(509),
    [anon_sym_POUND] = ACTIONS(509),
    [anon_sym_RPAREN] = ACTIONS(509),
  },
  [127] = {
    [sym__descendant_operator] = ACTIONS(513),
    [anon_sym_LBRACK] = ACTIONS(513),
    [anon_sym_COLON] = ACTIONS(515),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(513),
    [anon_sym_TILDE] = ACTIONS(513),
    [anon_sym_COMMA] = ACTIONS(513),
    [anon_sym_COLON_COLON] = ACTIONS(513),
    [anon_sym_GT] = ACTIONS(513),
    [anon_sym_LBRACE] = ACTIONS(513),
    [anon_sym_PLUS] = ACTIONS(513),
    [anon_sym_POUND] = ACTIONS(513),
    [anon_sym_RPAREN] = ACTIONS(513),
  },
  [128] = {
    [aux_sym_selectors_repeat1] = STATE(128),
    [anon_sym_LBRACE] = ACTIONS(499),
    [anon_sym_COMMA] = ACTIONS(517),
    [sym_comment] = ACTIONS(3),
  },
  [129] = {
    [sym__value] = STATE(150),
    [sym_parenthesized_value] = STATE(150),
    [sym_binary_expression] = STATE(150),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(185),
    [sym_color_value] = STATE(150),
    [sym_integer_value] = STATE(150),
    [sym_float_value] = STATE(150),
    [sym_call_expression] = STATE(150),
    [aux_sym_integer_value_token1] = ACTIONS(132),
    [sym_identifier] = ACTIONS(134),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(136),
    [anon_sym_RPAREN] = ACTIONS(520),
    [sym_plain_value] = ACTIONS(371),
    [anon_sym_LPAREN2] = ACTIONS(140),
    [sym_string_value] = ACTIONS(373),
    [anon_sym_POUND] = ACTIONS(144),
  },
  [130] = {
    [aux_sym_integer_value_token1] = ACTIONS(375),
    [anon_sym_STAR] = ACTIONS(377),
    [sym_identifier] = ACTIONS(375),
    [sym_important] = ACTIONS(377),
    [anon_sym_RBRACE] = ACTIONS(377),
    [anon_sym_RPAREN] = ACTIONS(377),
    [sym_plain_value] = ACTIONS(375),
    [sym_string_value] = ACTIONS(377),
    [anon_sym_SLASH] = ACTIONS(375),
    [anon_sym_SEMI] = ACTIONS(377),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(375),
    [anon_sym_DASH] = ACTIONS(375),
    [anon_sym_COMMA] = ACTIONS(377),
    [anon_sym_LPAREN2] = ACTIONS(377),
    [anon_sym_PLUS] = ACTIONS(375),
    [anon_sym_POUND] = ACTIONS(377),
  },
  [131] = {
    [anon_sym_DASH] = ACTIONS(214),
    [anon_sym_STAR] = ACTIONS(214),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PLUS] = ACTIONS(214),
    [anon_sym_SLASH] = ACTIONS(216),
    [anon_sym_RPAREN] = ACTIONS(522),
  },
  [132] = {
    [aux_sym_integer_value_token1] = ACTIONS(381),
    [anon_sym_STAR] = ACTIONS(383),
    [sym_identifier] = ACTIONS(381),
    [sym_important] = ACTIONS(383),
    [anon_sym_RBRACE] = ACTIONS(383),
    [anon_sym_RPAREN] = ACTIONS(383),
    [sym_plain_value] = ACTIONS(381),
    [sym_string_value] = ACTIONS(383),
    [anon_sym_SLASH] = ACTIONS(381),
    [anon_sym_SEMI] = ACTIONS(383),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(381),
    [anon_sym_DASH] = ACTIONS(381),
    [anon_sym_COMMA] = ACTIONS(383),
    [anon_sym_LPAREN2] = ACTIONS(383),
    [anon_sym_PLUS] = ACTIONS(381),
    [anon_sym_POUND] = ACTIONS(383),
  },
  [133] = {
    [aux_sym_integer_value_token1] = ACTIONS(385),
    [anon_sym_STAR] = ACTIONS(387),
    [sym_identifier] = ACTIONS(385),
    [sym_important] = ACTIONS(387),
    [anon_sym_RBRACE] = ACTIONS(387),
    [anon_sym_RPAREN] = ACTIONS(387),
    [sym_plain_value] = ACTIONS(385),
    [sym_string_value] = ACTIONS(387),
    [anon_sym_SLASH] = ACTIONS(385),
    [anon_sym_SEMI] = ACTIONS(387),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(385),
    [anon_sym_DASH] = ACTIONS(385),
    [anon_sym_COMMA] = ACTIONS(387),
    [anon_sym_LPAREN2] = ACTIONS(387),
    [anon_sym_PLUS] = ACTIONS(385),
    [anon_sym_POUND] = ACTIONS(387),
  },
  [134] = {
    [aux_sym_integer_value_token1] = ACTIONS(389),
    [anon_sym_STAR] = ACTIONS(391),
    [sym_identifier] = ACTIONS(389),
    [sym_important] = ACTIONS(391),
    [anon_sym_RBRACE] = ACTIONS(391),
    [anon_sym_RPAREN] = ACTIONS(391),
    [sym_plain_value] = ACTIONS(389),
    [sym_string_value] = ACTIONS(391),
    [anon_sym_SLASH] = ACTIONS(389),
    [anon_sym_SEMI] = ACTIONS(391),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(389),
    [anon_sym_DASH] = ACTIONS(389),
    [anon_sym_COMMA] = ACTIONS(391),
    [anon_sym_LPAREN2] = ACTIONS(391),
    [anon_sym_PLUS] = ACTIONS(389),
    [anon_sym_POUND] = ACTIONS(391),
  },
  [135] = {
    [anon_sym_RBRACE] = ACTIONS(524),
    [anon_sym_STAR] = ACTIONS(524),
    [anon_sym_ATmedia] = ACTIONS(526),
    [anon_sym_ATimport] = ACTIONS(526),
    [anon_sym_ATnamespace] = ACTIONS(526),
    [sym_identifier] = ACTIONS(524),
    [anon_sym_COLON_COLON] = ACTIONS(524),
    [sym_string_value] = ACTIONS(524),
    [sym_nesting_selector] = ACTIONS(524),
    [aux_sym_keyframes_statement_token1] = ACTIONS(526),
    [anon_sym_ATcharset] = ACTIONS(526),
    [ts_builtin_sym_end] = ACTIONS(524),
    [anon_sym_LBRACK] = ACTIONS(524),
    [anon_sym_COLON] = ACTIONS(526),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(524),
    [anon_sym_ATsupports] = ACTIONS(526),
    [sym_at_keyword] = ACTIONS(526),
    [anon_sym_ATkeyframes] = ACTIONS(526),
    [anon_sym_POUND] = ACTIONS(524),
  },
  [136] = {
    [sym_integer_value] = STATE(187),
    [sym__value] = STATE(187),
    [sym_parenthesized_value] = STATE(187),
    [sym_binary_expression] = STATE(187),
    [sym_float_value] = STATE(187),
    [sym_call_expression] = STATE(187),
    [sym_color_value] = STATE(187),
    [aux_sym_integer_value_token1] = ACTIONS(132),
    [sym_identifier] = ACTIONS(134),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(136),
    [sym_plain_value] = ACTIONS(528),
    [anon_sym_LPAREN2] = ACTIONS(140),
    [sym_string_value] = ACTIONS(530),
    [anon_sym_POUND] = ACTIONS(144),
  },
  [137] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(532),
  },
  [138] = {
    [sym_integer_value] = STATE(189),
    [sym__value] = STATE(189),
    [sym_parenthesized_value] = STATE(189),
    [sym_binary_expression] = STATE(189),
    [sym_float_value] = STATE(189),
    [sym_call_expression] = STATE(189),
    [sym_color_value] = STATE(189),
    [aux_sym_integer_value_token1] = ACTIONS(132),
    [sym_identifier] = ACTIONS(134),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(136),
    [sym_plain_value] = ACTIONS(534),
    [anon_sym_LPAREN2] = ACTIONS(140),
    [sym_string_value] = ACTIONS(536),
    [anon_sym_POUND] = ACTIONS(144),
  },
  [139] = {
    [aux_sym_integer_value_token1] = ACTIONS(538),
    [sym_identifier] = ACTIONS(538),
    [anon_sym_STAR] = ACTIONS(341),
    [sym_important] = ACTIONS(540),
    [anon_sym_RBRACE] = ACTIONS(540),
    [sym_plain_value] = ACTIONS(538),
    [sym_string_value] = ACTIONS(540),
    [anon_sym_SLASH] = ACTIONS(349),
    [anon_sym_SEMI] = ACTIONS(540),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(538),
    [anon_sym_DASH] = ACTIONS(349),
    [anon_sym_COMMA] = ACTIONS(540),
    [anon_sym_LPAREN2] = ACTIONS(540),
    [anon_sym_PLUS] = ACTIONS(349),
    [anon_sym_POUND] = ACTIONS(540),
  },
  [140] = {
    [sym__value] = STATE(139),
    [sym_parenthesized_value] = STATE(139),
    [sym_binary_expression] = STATE(139),
    [sym_color_value] = STATE(139),
    [sym_integer_value] = STATE(139),
    [aux_sym_declaration_repeat1] = STATE(191),
    [sym_float_value] = STATE(139),
    [sym_call_expression] = STATE(139),
    [aux_sym_integer_value_token1] = ACTIONS(132),
    [sym_identifier] = ACTIONS(134),
    [sym_important] = ACTIONS(542),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(136),
    [sym_plain_value] = ACTIONS(345),
    [anon_sym_LPAREN2] = ACTIONS(140),
    [anon_sym_COMMA] = ACTIONS(353),
    [sym_string_value] = ACTIONS(347),
    [anon_sym_POUND] = ACTIONS(144),
    [anon_sym_SEMI] = ACTIONS(532),
  },
  [141] = {
    [sym__value] = STATE(150),
    [sym_parenthesized_value] = STATE(150),
    [sym_binary_expression] = STATE(150),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(192),
    [sym_color_value] = STATE(150),
    [sym_integer_value] = STATE(150),
    [sym_float_value] = STATE(150),
    [sym_call_expression] = STATE(150),
    [aux_sym_integer_value_token1] = ACTIONS(132),
    [sym_identifier] = ACTIONS(134),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(136),
    [sym_plain_value] = ACTIONS(371),
    [anon_sym_LPAREN2] = ACTIONS(140),
    [sym_string_value] = ACTIONS(373),
    [anon_sym_POUND] = ACTIONS(144),
  },
  [142] = {
    [anon_sym_RPAREN] = ACTIONS(544),
    [anon_sym_COMMA] = ACTIONS(544),
    [anon_sym_or] = ACTIONS(544),
    [anon_sym_LBRACE] = ACTIONS(544),
    [sym_comment] = ACTIONS(3),
    [anon_sym_and] = ACTIONS(544),
    [anon_sym_SEMI] = ACTIONS(544),
  },
  [143] = {
    [sym_feature_query] = STATE(146),
    [sym_unary_query] = STATE(146),
    [sym_selector_query] = STATE(146),
    [sym_parenthesized_query] = STATE(146),
    [sym_binary_query] = STATE(146),
    [sym__query] = STATE(146),
    [anon_sym_not] = ACTIONS(146),
    [anon_sym_LPAREN2] = ACTIONS(44),
    [sym_identifier] = ACTIONS(46),
    [anon_sym_selector] = ACTIONS(48),
    [sym_comment] = ACTIONS(3),
    [anon_sym_only] = ACTIONS(146),
  },
  [144] = {
    [sym__descendant_operator] = ACTIONS(106),
    [anon_sym_LBRACK] = ACTIONS(108),
    [anon_sym_COLON] = ACTIONS(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(546),
    [anon_sym_TILDE] = ACTIONS(114),
    [anon_sym_COLON_COLON] = ACTIONS(118),
    [anon_sym_DOT] = ACTIONS(112),
    [anon_sym_GT] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(124),
    [anon_sym_POUND] = ACTIONS(126),
  },
  [145] = {
    [anon_sym_COMMA] = ACTIONS(548),
    [anon_sym_or] = ACTIONS(156),
    [anon_sym_LBRACE] = ACTIONS(548),
    [sym_comment] = ACTIONS(3),
    [anon_sym_and] = ACTIONS(156),
  },
  [146] = {
    [anon_sym_RPAREN] = ACTIONS(550),
    [anon_sym_COMMA] = ACTIONS(550),
    [anon_sym_or] = ACTIONS(550),
    [anon_sym_LBRACE] = ACTIONS(550),
    [sym_comment] = ACTIONS(3),
    [anon_sym_and] = ACTIONS(550),
    [anon_sym_SEMI] = ACTIONS(550),
  },
  [147] = {
    [aux_sym_import_statement_repeat1] = STATE(147),
    [anon_sym_LBRACE] = ACTIONS(548),
    [anon_sym_COMMA] = ACTIONS(552),
    [sym_comment] = ACTIONS(3),
  },
  [148] = {
    [anon_sym_RBRACE] = ACTIONS(555),
    [anon_sym_STAR] = ACTIONS(555),
    [anon_sym_ATmedia] = ACTIONS(557),
    [anon_sym_ATimport] = ACTIONS(557),
    [anon_sym_ATnamespace] = ACTIONS(557),
    [sym_identifier] = ACTIONS(555),
    [anon_sym_COLON_COLON] = ACTIONS(555),
    [sym_string_value] = ACTIONS(555),
    [sym_nesting_selector] = ACTIONS(555),
    [aux_sym_keyframes_statement_token1] = ACTIONS(557),
    [anon_sym_ATcharset] = ACTIONS(557),
    [ts_builtin_sym_end] = ACTIONS(555),
    [anon_sym_LBRACK] = ACTIONS(555),
    [anon_sym_COLON] = ACTIONS(557),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(555),
    [anon_sym_ATsupports] = ACTIONS(557),
    [sym_at_keyword] = ACTIONS(557),
    [anon_sym_ATkeyframes] = ACTIONS(557),
    [anon_sym_POUND] = ACTIONS(555),
  },
  [149] = {
    [anon_sym_not] = ACTIONS(559),
    [anon_sym_STAR] = ACTIONS(561),
    [sym_identifier] = ACTIONS(559),
    [sym_comment] = ACTIONS(3),
    [anon_sym_only] = ACTIONS(559),
    [anon_sym_DASH] = ACTIONS(559),
    [anon_sym_LPAREN2] = ACTIONS(561),
    [anon_sym_selector] = ACTIONS(559),
    [anon_sym_PLUS] = ACTIONS(561),
    [anon_sym_SEMI] = ACTIONS(561),
    [anon_sym_SLASH] = ACTIONS(559),
  },
  [150] = {
    [aux_sym_integer_value_token1] = ACTIONS(563),
    [sym_identifier] = ACTIONS(563),
    [anon_sym_STAR] = ACTIONS(341),
    [anon_sym_RPAREN] = ACTIONS(565),
    [sym_plain_value] = ACTIONS(563),
    [sym_string_value] = ACTIONS(565),
    [anon_sym_SLASH] = ACTIONS(349),
    [anon_sym_SEMI] = ACTIONS(565),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(563),
    [anon_sym_DASH] = ACTIONS(349),
    [anon_sym_COMMA] = ACTIONS(565),
    [anon_sym_LPAREN2] = ACTIONS(565),
    [anon_sym_PLUS] = ACTIONS(349),
    [anon_sym_POUND] = ACTIONS(565),
  },
  [151] = {
    [sym__value] = STATE(150),
    [sym_parenthesized_value] = STATE(150),
    [sym_binary_expression] = STATE(150),
    [aux_sym_arguments_repeat1] = STATE(196),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(197),
    [sym_color_value] = STATE(150),
    [sym_integer_value] = STATE(150),
    [sym_float_value] = STATE(150),
    [sym_call_expression] = STATE(150),
    [aux_sym_integer_value_token1] = ACTIONS(132),
    [sym_identifier] = ACTIONS(134),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(136),
    [anon_sym_RPAREN] = ACTIONS(567),
    [sym_plain_value] = ACTIONS(371),
    [anon_sym_LPAREN2] = ACTIONS(140),
    [anon_sym_COMMA] = ACTIONS(569),
    [sym_string_value] = ACTIONS(373),
    [anon_sym_POUND] = ACTIONS(144),
    [anon_sym_SEMI] = ACTIONS(569),
  },
  [152] = {
    [anon_sym_not] = ACTIONS(571),
    [anon_sym_STAR] = ACTIONS(573),
    [sym_identifier] = ACTIONS(571),
    [sym_comment] = ACTIONS(3),
    [anon_sym_only] = ACTIONS(571),
    [anon_sym_DASH] = ACTIONS(571),
    [anon_sym_LPAREN2] = ACTIONS(573),
    [anon_sym_selector] = ACTIONS(571),
    [anon_sym_PLUS] = ACTIONS(573),
    [anon_sym_SEMI] = ACTIONS(573),
    [anon_sym_SLASH] = ACTIONS(571),
  },
  [153] = {
    [anon_sym_not] = ACTIONS(575),
    [anon_sym_STAR] = ACTIONS(577),
    [sym_identifier] = ACTIONS(575),
    [sym_comment] = ACTIONS(3),
    [anon_sym_only] = ACTIONS(575),
    [anon_sym_DASH] = ACTIONS(575),
    [anon_sym_LPAREN2] = ACTIONS(577),
    [anon_sym_selector] = ACTIONS(575),
    [anon_sym_PLUS] = ACTIONS(577),
    [anon_sym_SEMI] = ACTIONS(577),
    [anon_sym_SLASH] = ACTIONS(575),
  },
  [154] = {
    [sym_feature_query] = STATE(198),
    [sym_unary_query] = STATE(198),
    [sym_selector_query] = STATE(198),
    [sym_parenthesized_query] = STATE(198),
    [sym_binary_query] = STATE(198),
    [sym__query] = STATE(198),
    [anon_sym_not] = ACTIONS(182),
    [anon_sym_LPAREN2] = ACTIONS(44),
    [sym_identifier] = ACTIONS(46),
    [anon_sym_selector] = ACTIONS(48),
    [sym_comment] = ACTIONS(3),
    [anon_sym_only] = ACTIONS(182),
  },
  [155] = {
    [sym_feature_query] = STATE(146),
    [sym_unary_query] = STATE(146),
    [sym_selector_query] = STATE(146),
    [sym_parenthesized_query] = STATE(146),
    [sym_binary_query] = STATE(146),
    [sym__query] = STATE(146),
    [anon_sym_not] = ACTIONS(182),
    [anon_sym_LPAREN2] = ACTIONS(44),
    [sym_identifier] = ACTIONS(46),
    [anon_sym_selector] = ACTIONS(48),
    [sym_comment] = ACTIONS(3),
    [anon_sym_only] = ACTIONS(182),
  },
  [156] = {
    [anon_sym_RBRACE] = ACTIONS(579),
    [anon_sym_STAR] = ACTIONS(579),
    [anon_sym_ATmedia] = ACTIONS(581),
    [anon_sym_ATimport] = ACTIONS(581),
    [anon_sym_ATnamespace] = ACTIONS(581),
    [sym_identifier] = ACTIONS(579),
    [anon_sym_COLON_COLON] = ACTIONS(579),
    [sym_string_value] = ACTIONS(579),
    [sym_nesting_selector] = ACTIONS(579),
    [aux_sym_keyframes_statement_token1] = ACTIONS(581),
    [anon_sym_ATcharset] = ACTIONS(581),
    [ts_builtin_sym_end] = ACTIONS(579),
    [anon_sym_LBRACK] = ACTIONS(579),
    [anon_sym_COLON] = ACTIONS(581),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(579),
    [anon_sym_ATsupports] = ACTIONS(581),
    [sym_at_keyword] = ACTIONS(581),
    [anon_sym_ATkeyframes] = ACTIONS(581),
    [anon_sym_POUND] = ACTIONS(579),
  },
  [157] = {
    [aux_sym_import_statement_repeat1] = STATE(200),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(401),
    [anon_sym_SEMI] = ACTIONS(583),
  },
  [158] = {
    [anon_sym_RBRACE] = ACTIONS(585),
    [anon_sym_STAR] = ACTIONS(585),
    [anon_sym_ATmedia] = ACTIONS(587),
    [anon_sym_ATimport] = ACTIONS(587),
    [anon_sym_ATnamespace] = ACTIONS(587),
    [sym_identifier] = ACTIONS(585),
    [anon_sym_COLON_COLON] = ACTIONS(585),
    [sym_string_value] = ACTIONS(585),
    [sym_nesting_selector] = ACTIONS(585),
    [aux_sym_keyframes_statement_token1] = ACTIONS(587),
    [anon_sym_ATcharset] = ACTIONS(587),
    [ts_builtin_sym_end] = ACTIONS(585),
    [anon_sym_LBRACK] = ACTIONS(585),
    [anon_sym_COLON] = ACTIONS(587),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(585),
    [anon_sym_ATsupports] = ACTIONS(587),
    [sym_at_keyword] = ACTIONS(587),
    [anon_sym_ATkeyframes] = ACTIONS(587),
    [anon_sym_POUND] = ACTIONS(585),
  },
  [159] = {
    [anon_sym_LBRACE] = ACTIONS(170),
    [sym_comment] = ACTIONS(3),
    [sym_unit] = ACTIONS(589),
  },
  [160] = {
    [anon_sym_RBRACE] = ACTIONS(591),
    [anon_sym_STAR] = ACTIONS(591),
    [anon_sym_ATmedia] = ACTIONS(593),
    [anon_sym_ATimport] = ACTIONS(593),
    [anon_sym_ATnamespace] = ACTIONS(593),
    [sym_identifier] = ACTIONS(591),
    [anon_sym_COLON_COLON] = ACTIONS(591),
    [sym_string_value] = ACTIONS(591),
    [sym_nesting_selector] = ACTIONS(591),
    [aux_sym_keyframes_statement_token1] = ACTIONS(593),
    [anon_sym_ATcharset] = ACTIONS(593),
    [ts_builtin_sym_end] = ACTIONS(591),
    [anon_sym_LBRACK] = ACTIONS(591),
    [anon_sym_COLON] = ACTIONS(593),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(591),
    [anon_sym_ATsupports] = ACTIONS(593),
    [sym_at_keyword] = ACTIONS(593),
    [anon_sym_ATkeyframes] = ACTIONS(593),
    [anon_sym_POUND] = ACTIONS(591),
  },
  [161] = {
    [sym_block] = STATE(202),
    [anon_sym_LBRACE] = ACTIONS(595),
    [sym_comment] = ACTIONS(3),
  },
  [162] = {
    [sym_integer_value] = STATE(161),
    [sym_keyframe_block] = STATE(204),
    [aux_sym_keyframe_block_list_repeat1] = STATE(204),
    [aux_sym_integer_value_token1] = ACTIONS(413),
    [anon_sym_RBRACE] = ACTIONS(597),
    [sym_to] = ACTIONS(417),
    [sym_comment] = ACTIONS(3),
    [sym_from] = ACTIONS(417),
  },
  [163] = {
    [anon_sym_STAR] = ACTIONS(561),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(561),
    [anon_sym_RPAREN] = ACTIONS(561),
    [anon_sym_DASH] = ACTIONS(561),
    [anon_sym_PLUS] = ACTIONS(561),
    [anon_sym_SEMI] = ACTIONS(561),
    [anon_sym_SLASH] = ACTIONS(559),
  },
  [164] = {
    [sym__value] = STATE(150),
    [sym_parenthesized_value] = STATE(150),
    [sym_binary_expression] = STATE(150),
    [aux_sym_arguments_repeat1] = STATE(206),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(197),
    [sym_color_value] = STATE(150),
    [sym_integer_value] = STATE(150),
    [sym_float_value] = STATE(150),
    [sym_call_expression] = STATE(150),
    [aux_sym_integer_value_token1] = ACTIONS(132),
    [sym_identifier] = ACTIONS(134),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(136),
    [anon_sym_RPAREN] = ACTIONS(599),
    [sym_plain_value] = ACTIONS(371),
    [anon_sym_LPAREN2] = ACTIONS(140),
    [anon_sym_COMMA] = ACTIONS(569),
    [sym_string_value] = ACTIONS(373),
    [anon_sym_POUND] = ACTIONS(144),
    [anon_sym_SEMI] = ACTIONS(569),
  },
  [165] = {
    [anon_sym_STAR] = ACTIONS(573),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(573),
    [anon_sym_RPAREN] = ACTIONS(573),
    [anon_sym_DASH] = ACTIONS(573),
    [anon_sym_PLUS] = ACTIONS(573),
    [anon_sym_SEMI] = ACTIONS(573),
    [anon_sym_SLASH] = ACTIONS(571),
  },
  [166] = {
    [anon_sym_STAR] = ACTIONS(577),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(577),
    [anon_sym_RPAREN] = ACTIONS(577),
    [anon_sym_DASH] = ACTIONS(577),
    [anon_sym_PLUS] = ACTIONS(577),
    [anon_sym_SEMI] = ACTIONS(577),
    [anon_sym_SLASH] = ACTIONS(575),
  },
  [167] = {
    [anon_sym_DASH] = ACTIONS(214),
    [anon_sym_STAR] = ACTIONS(214),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PLUS] = ACTIONS(214),
    [anon_sym_SLASH] = ACTIONS(216),
    [anon_sym_RBRACK] = ACTIONS(601),
  },
  [168] = {
    [sym_arguments] = STATE(130),
    [sym__descendant_operator] = ACTIONS(37),
    [aux_sym_integer_value_token1] = ACTIONS(158),
    [anon_sym_STAR] = ACTIONS(160),
    [sym_identifier] = ACTIONS(158),
    [anon_sym_RPAREN] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(37),
    [anon_sym_COLON_COLON] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(158),
    [sym_string_value] = ACTIONS(160),
    [anon_sym_SLASH] = ACTIONS(158),
    [anon_sym_LPAREN] = ACTIONS(329),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(477),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(158),
    [anon_sym_DOT] = ACTIONS(477),
    [anon_sym_DASH] = ACTIONS(158),
    [anon_sym_COMMA] = ACTIONS(37),
    [anon_sym_LPAREN2] = ACTIONS(158),
    [anon_sym_GT] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(477),
    [anon_sym_POUND] = ACTIONS(37),
  },
  [169] = {
    [sym__descendant_operator] = ACTIONS(603),
    [anon_sym_LBRACK] = ACTIONS(603),
    [anon_sym_COLON] = ACTIONS(605),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(603),
    [anon_sym_TILDE] = ACTIONS(603),
    [anon_sym_COMMA] = ACTIONS(603),
    [anon_sym_COLON_COLON] = ACTIONS(603),
    [anon_sym_GT] = ACTIONS(603),
    [anon_sym_LBRACE] = ACTIONS(603),
    [anon_sym_PLUS] = ACTIONS(603),
    [anon_sym_POUND] = ACTIONS(603),
    [anon_sym_RPAREN] = ACTIONS(603),
  },
  [170] = {
    [sym__descendant_operator] = ACTIONS(607),
    [aux_sym_integer_value_token1] = ACTIONS(609),
    [anon_sym_STAR] = ACTIONS(611),
    [sym_identifier] = ACTIONS(609),
    [anon_sym_RPAREN] = ACTIONS(607),
    [anon_sym_TILDE] = ACTIONS(607),
    [anon_sym_COLON_COLON] = ACTIONS(607),
    [sym_plain_value] = ACTIONS(609),
    [sym_string_value] = ACTIONS(611),
    [anon_sym_SLASH] = ACTIONS(609),
    [anon_sym_LBRACK] = ACTIONS(607),
    [anon_sym_COLON] = ACTIONS(613),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(609),
    [anon_sym_DOT] = ACTIONS(613),
    [anon_sym_DASH] = ACTIONS(609),
    [anon_sym_COMMA] = ACTIONS(607),
    [anon_sym_LPAREN2] = ACTIONS(611),
    [anon_sym_GT] = ACTIONS(607),
    [anon_sym_PLUS] = ACTIONS(613),
    [anon_sym_POUND] = ACTIONS(607),
  },
  [171] = {
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(615),
    [aux_sym_color_value_token1] = ACTIONS(617),
  },
  [172] = {
    [aux_sym_pseudo_class_arguments_repeat2] = STATE(210),
    [sym__descendant_operator] = ACTIONS(106),
    [anon_sym_LBRACK] = ACTIONS(108),
    [anon_sym_COLON] = ACTIONS(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(112),
    [anon_sym_TILDE] = ACTIONS(114),
    [anon_sym_COMMA] = ACTIONS(619),
    [anon_sym_COLON_COLON] = ACTIONS(118),
    [anon_sym_GT] = ACTIONS(120),
    [anon_sym_RPAREN] = ACTIONS(621),
    [anon_sym_PLUS] = ACTIONS(124),
    [anon_sym_POUND] = ACTIONS(126),
  },
  [173] = {
    [sym__value] = STATE(150),
    [sym_parenthesized_value] = STATE(150),
    [sym_binary_expression] = STATE(150),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(211),
    [sym_color_value] = STATE(150),
    [sym_integer_value] = STATE(150),
    [aux_sym_pseudo_class_arguments_repeat2] = STATE(210),
    [sym_float_value] = STATE(150),
    [sym_call_expression] = STATE(150),
    [aux_sym_integer_value_token1] = ACTIONS(132),
    [sym_identifier] = ACTIONS(134),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(136),
    [anon_sym_RPAREN] = ACTIONS(621),
    [sym_plain_value] = ACTIONS(371),
    [anon_sym_LPAREN2] = ACTIONS(140),
    [anon_sym_COMMA] = ACTIONS(619),
    [sym_string_value] = ACTIONS(373),
    [anon_sym_POUND] = ACTIONS(144),
  },
  [174] = {
    [sym_integer_value] = STATE(212),
    [sym__value] = STATE(212),
    [sym_parenthesized_value] = STATE(212),
    [sym_binary_expression] = STATE(212),
    [sym_float_value] = STATE(212),
    [sym_call_expression] = STATE(212),
    [sym_color_value] = STATE(212),
    [aux_sym_integer_value_token1] = ACTIONS(132),
    [sym_identifier] = ACTIONS(134),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(136),
    [sym_plain_value] = ACTIONS(623),
    [anon_sym_LPAREN2] = ACTIONS(140),
    [sym_string_value] = ACTIONS(625),
    [anon_sym_POUND] = ACTIONS(144),
  },
  [175] = {
    [anon_sym_RBRACE] = ACTIONS(627),
    [anon_sym_STAR] = ACTIONS(627),
    [anon_sym_ATmedia] = ACTIONS(629),
    [anon_sym_ATimport] = ACTIONS(629),
    [anon_sym_ATnamespace] = ACTIONS(629),
    [sym_identifier] = ACTIONS(627),
    [anon_sym_COLON_COLON] = ACTIONS(627),
    [sym_string_value] = ACTIONS(627),
    [sym_nesting_selector] = ACTIONS(627),
    [aux_sym_keyframes_statement_token1] = ACTIONS(629),
    [anon_sym_ATcharset] = ACTIONS(629),
    [ts_builtin_sym_end] = ACTIONS(627),
    [anon_sym_LBRACK] = ACTIONS(627),
    [anon_sym_COLON] = ACTIONS(629),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(627),
    [anon_sym_ATsupports] = ACTIONS(629),
    [sym_at_keyword] = ACTIONS(629),
    [anon_sym_ATkeyframes] = ACTIONS(629),
    [anon_sym_POUND] = ACTIONS(627),
  },
  [176] = {
    [sym_media_statement] = STATE(176),
    [sym_charset_statement] = STATE(176),
    [sym_supports_statement] = STATE(176),
    [sym_at_rule] = STATE(176),
    [sym__selector] = STATE(16),
    [sym_universal_selector] = STATE(16),
    [sym_attribute_selector] = STATE(16),
    [sym_child_selector] = STATE(16),
    [sym_declaration] = STATE(176),
    [aux_sym_block_repeat1] = STATE(176),
    [sym_import_statement] = STATE(176),
    [sym_pseudo_element_selector] = STATE(16),
    [sym_id_selector] = STATE(16),
    [sym_adjacent_sibling_selector] = STATE(16),
    [sym_namespace_statement] = STATE(176),
    [sym_keyframes_statement] = STATE(176),
    [sym_rule_set] = STATE(176),
    [sym_selectors] = STATE(19),
    [sym_class_selector] = STATE(16),
    [sym_pseudo_class_selector] = STATE(16),
    [sym_descendant_selector] = STATE(16),
    [sym_sibling_selector] = STATE(16),
    [anon_sym_RBRACE] = ACTIONS(631),
    [anon_sym_STAR] = ACTIONS(633),
    [anon_sym_ATmedia] = ACTIONS(636),
    [anon_sym_ATimport] = ACTIONS(639),
    [anon_sym_ATnamespace] = ACTIONS(642),
    [sym_identifier] = ACTIONS(645),
    [anon_sym_COLON_COLON] = ACTIONS(648),
    [sym_string_value] = ACTIONS(651),
    [sym_nesting_selector] = ACTIONS(651),
    [aux_sym_keyframes_statement_token1] = ACTIONS(654),
    [anon_sym_ATcharset] = ACTIONS(657),
    [anon_sym_LBRACK] = ACTIONS(660),
    [anon_sym_COLON] = ACTIONS(663),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(666),
    [anon_sym_ATsupports] = ACTIONS(669),
    [sym_at_keyword] = ACTIONS(672),
    [anon_sym_ATkeyframes] = ACTIONS(654),
    [anon_sym_POUND] = ACTIONS(675),
  },
  [177] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(678),
  },
  [178] = {
    [anon_sym_COMMA] = ACTIONS(548),
    [anon_sym_or] = ACTIONS(240),
    [anon_sym_LBRACE] = ACTIONS(548),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(548),
    [anon_sym_and] = ACTIONS(240),
  },
  [179] = {
    [anon_sym_RBRACE] = ACTIONS(680),
    [anon_sym_STAR] = ACTIONS(680),
    [anon_sym_ATmedia] = ACTIONS(682),
    [anon_sym_ATimport] = ACTIONS(682),
    [anon_sym_ATnamespace] = ACTIONS(682),
    [sym_identifier] = ACTIONS(680),
    [anon_sym_COLON_COLON] = ACTIONS(680),
    [sym_string_value] = ACTIONS(680),
    [sym_nesting_selector] = ACTIONS(680),
    [aux_sym_keyframes_statement_token1] = ACTIONS(682),
    [anon_sym_ATcharset] = ACTIONS(682),
    [ts_builtin_sym_end] = ACTIONS(680),
    [anon_sym_LBRACK] = ACTIONS(680),
    [anon_sym_COLON] = ACTIONS(682),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(680),
    [anon_sym_ATsupports] = ACTIONS(682),
    [sym_at_keyword] = ACTIONS(682),
    [anon_sym_ATkeyframes] = ACTIONS(682),
    [anon_sym_POUND] = ACTIONS(680),
  },
  [180] = {
    [aux_sym_import_statement_repeat1] = STATE(180),
    [anon_sym_COMMA] = ACTIONS(684),
    [anon_sym_LBRACE] = ACTIONS(548),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(548),
  },
  [181] = {
    [sym_integer_value] = STATE(214),
    [sym__value] = STATE(214),
    [sym_parenthesized_value] = STATE(214),
    [sym_binary_expression] = STATE(214),
    [sym_float_value] = STATE(214),
    [sym_call_expression] = STATE(214),
    [sym_color_value] = STATE(214),
    [aux_sym_integer_value_token1] = ACTIONS(76),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(80),
    [sym_plain_value] = ACTIONS(687),
    [anon_sym_LPAREN2] = ACTIONS(84),
    [sym_string_value] = ACTIONS(689),
    [anon_sym_POUND] = ACTIONS(88),
  },
  [182] = {
    [sym__descendant_operator] = ACTIONS(691),
    [anon_sym_LBRACK] = ACTIONS(691),
    [anon_sym_COLON] = ACTIONS(693),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(691),
    [anon_sym_TILDE] = ACTIONS(691),
    [anon_sym_COMMA] = ACTIONS(691),
    [anon_sym_COLON_COLON] = ACTIONS(691),
    [anon_sym_GT] = ACTIONS(691),
    [anon_sym_LBRACE] = ACTIONS(691),
    [anon_sym_PLUS] = ACTIONS(691),
    [anon_sym_POUND] = ACTIONS(691),
    [anon_sym_RPAREN] = ACTIONS(691),
  },
  [183] = {
    [sym__descendant_operator] = ACTIONS(695),
    [anon_sym_LBRACK] = ACTIONS(695),
    [anon_sym_COLON] = ACTIONS(697),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(695),
    [anon_sym_TILDE] = ACTIONS(695),
    [anon_sym_COMMA] = ACTIONS(695),
    [anon_sym_COLON_COLON] = ACTIONS(695),
    [anon_sym_GT] = ACTIONS(695),
    [anon_sym_LBRACE] = ACTIONS(695),
    [anon_sym_PLUS] = ACTIONS(695),
    [anon_sym_POUND] = ACTIONS(695),
    [anon_sym_RPAREN] = ACTIONS(695),
  },
  [184] = {
    [aux_sym_integer_value_token1] = ACTIONS(559),
    [anon_sym_STAR] = ACTIONS(561),
    [sym_identifier] = ACTIONS(559),
    [sym_important] = ACTIONS(561),
    [anon_sym_RBRACE] = ACTIONS(561),
    [anon_sym_RPAREN] = ACTIONS(561),
    [sym_plain_value] = ACTIONS(559),
    [sym_string_value] = ACTIONS(561),
    [anon_sym_SLASH] = ACTIONS(559),
    [anon_sym_SEMI] = ACTIONS(561),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(559),
    [anon_sym_DASH] = ACTIONS(559),
    [anon_sym_COMMA] = ACTIONS(561),
    [anon_sym_LPAREN2] = ACTIONS(561),
    [anon_sym_PLUS] = ACTIONS(559),
    [anon_sym_POUND] = ACTIONS(561),
  },
  [185] = {
    [sym__value] = STATE(150),
    [sym_parenthesized_value] = STATE(150),
    [sym_binary_expression] = STATE(150),
    [aux_sym_arguments_repeat1] = STATE(216),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(197),
    [sym_color_value] = STATE(150),
    [sym_integer_value] = STATE(150),
    [sym_float_value] = STATE(150),
    [sym_call_expression] = STATE(150),
    [aux_sym_integer_value_token1] = ACTIONS(132),
    [sym_identifier] = ACTIONS(134),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(136),
    [anon_sym_RPAREN] = ACTIONS(699),
    [sym_plain_value] = ACTIONS(371),
    [anon_sym_LPAREN2] = ACTIONS(140),
    [anon_sym_COMMA] = ACTIONS(569),
    [sym_string_value] = ACTIONS(373),
    [anon_sym_POUND] = ACTIONS(144),
    [anon_sym_SEMI] = ACTIONS(569),
  },
  [186] = {
    [aux_sym_integer_value_token1] = ACTIONS(571),
    [anon_sym_STAR] = ACTIONS(573),
    [sym_identifier] = ACTIONS(571),
    [sym_important] = ACTIONS(573),
    [anon_sym_RBRACE] = ACTIONS(573),
    [anon_sym_RPAREN] = ACTIONS(573),
    [sym_plain_value] = ACTIONS(571),
    [sym_string_value] = ACTIONS(573),
    [anon_sym_SLASH] = ACTIONS(571),
    [anon_sym_SEMI] = ACTIONS(573),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(571),
    [anon_sym_DASH] = ACTIONS(571),
    [anon_sym_COMMA] = ACTIONS(573),
    [anon_sym_LPAREN2] = ACTIONS(573),
    [anon_sym_PLUS] = ACTIONS(571),
    [anon_sym_POUND] = ACTIONS(573),
  },
  [187] = {
    [aux_sym_integer_value_token1] = ACTIONS(575),
    [anon_sym_STAR] = ACTIONS(577),
    [sym_identifier] = ACTIONS(575),
    [sym_important] = ACTIONS(577),
    [anon_sym_RBRACE] = ACTIONS(577),
    [anon_sym_RPAREN] = ACTIONS(577),
    [sym_plain_value] = ACTIONS(575),
    [sym_string_value] = ACTIONS(577),
    [anon_sym_SLASH] = ACTIONS(575),
    [anon_sym_SEMI] = ACTIONS(577),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(575),
    [anon_sym_DASH] = ACTIONS(575),
    [anon_sym_COMMA] = ACTIONS(577),
    [anon_sym_LPAREN2] = ACTIONS(577),
    [anon_sym_PLUS] = ACTIONS(575),
    [anon_sym_POUND] = ACTIONS(577),
  },
  [188] = {
    [anon_sym_RBRACE] = ACTIONS(701),
    [anon_sym_STAR] = ACTIONS(701),
    [anon_sym_ATmedia] = ACTIONS(703),
    [anon_sym_ATimport] = ACTIONS(703),
    [anon_sym_ATnamespace] = ACTIONS(703),
    [sym_identifier] = ACTIONS(701),
    [anon_sym_COLON_COLON] = ACTIONS(701),
    [sym_string_value] = ACTIONS(701),
    [sym_nesting_selector] = ACTIONS(701),
    [aux_sym_keyframes_statement_token1] = ACTIONS(703),
    [anon_sym_ATcharset] = ACTIONS(703),
    [ts_builtin_sym_end] = ACTIONS(701),
    [anon_sym_LBRACK] = ACTIONS(701),
    [anon_sym_COLON] = ACTIONS(703),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(701),
    [anon_sym_ATsupports] = ACTIONS(703),
    [sym_at_keyword] = ACTIONS(703),
    [anon_sym_ATkeyframes] = ACTIONS(703),
    [anon_sym_POUND] = ACTIONS(701),
  },
  [189] = {
    [aux_sym_integer_value_token1] = ACTIONS(705),
    [sym_identifier] = ACTIONS(705),
    [anon_sym_STAR] = ACTIONS(341),
    [sym_important] = ACTIONS(707),
    [anon_sym_RBRACE] = ACTIONS(707),
    [sym_plain_value] = ACTIONS(705),
    [sym_string_value] = ACTIONS(707),
    [anon_sym_SLASH] = ACTIONS(349),
    [anon_sym_SEMI] = ACTIONS(707),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(705),
    [anon_sym_DASH] = ACTIONS(349),
    [anon_sym_COMMA] = ACTIONS(707),
    [anon_sym_LPAREN2] = ACTIONS(707),
    [anon_sym_PLUS] = ACTIONS(349),
    [anon_sym_POUND] = ACTIONS(707),
  },
  [190] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(709),
  },
  [191] = {
    [sym__value] = STATE(139),
    [sym_parenthesized_value] = STATE(139),
    [sym_binary_expression] = STATE(139),
    [sym_color_value] = STATE(139),
    [sym_integer_value] = STATE(139),
    [aux_sym_declaration_repeat1] = STATE(191),
    [sym_float_value] = STATE(139),
    [sym_call_expression] = STATE(139),
    [aux_sym_integer_value_token1] = ACTIONS(711),
    [sym_identifier] = ACTIONS(714),
    [sym_important] = ACTIONS(707),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(717),
    [anon_sym_COMMA] = ACTIONS(720),
    [anon_sym_LPAREN2] = ACTIONS(723),
    [sym_plain_value] = ACTIONS(726),
    [sym_string_value] = ACTIONS(729),
    [anon_sym_SEMI] = ACTIONS(707),
    [anon_sym_POUND] = ACTIONS(732),
  },
  [192] = {
    [sym__value] = STATE(150),
    [sym_parenthesized_value] = STATE(150),
    [sym_binary_expression] = STATE(150),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(219),
    [sym_color_value] = STATE(150),
    [sym_integer_value] = STATE(150),
    [sym_float_value] = STATE(150),
    [sym_call_expression] = STATE(150),
    [aux_sym_integer_value_token1] = ACTIONS(132),
    [sym_identifier] = ACTIONS(134),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(136),
    [anon_sym_RPAREN] = ACTIONS(735),
    [sym_plain_value] = ACTIONS(371),
    [anon_sym_LPAREN2] = ACTIONS(140),
    [sym_string_value] = ACTIONS(373),
    [anon_sym_POUND] = ACTIONS(144),
  },
  [193] = {
    [anon_sym_RPAREN] = ACTIONS(737),
    [anon_sym_COMMA] = ACTIONS(737),
    [anon_sym_or] = ACTIONS(737),
    [anon_sym_LBRACE] = ACTIONS(737),
    [sym_comment] = ACTIONS(3),
    [anon_sym_and] = ACTIONS(737),
    [anon_sym_SEMI] = ACTIONS(737),
  },
  [194] = {
    [anon_sym_not] = ACTIONS(739),
    [anon_sym_STAR] = ACTIONS(741),
    [sym_identifier] = ACTIONS(739),
    [sym_comment] = ACTIONS(3),
    [anon_sym_only] = ACTIONS(739),
    [anon_sym_DASH] = ACTIONS(739),
    [anon_sym_LPAREN2] = ACTIONS(741),
    [anon_sym_selector] = ACTIONS(739),
    [anon_sym_PLUS] = ACTIONS(741),
    [anon_sym_SEMI] = ACTIONS(741),
    [anon_sym_SLASH] = ACTIONS(739),
  },
  [195] = {
    [sym__value] = STATE(150),
    [sym_parenthesized_value] = STATE(150),
    [sym_binary_expression] = STATE(150),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(220),
    [sym_color_value] = STATE(150),
    [sym_integer_value] = STATE(150),
    [sym_float_value] = STATE(150),
    [sym_call_expression] = STATE(150),
    [aux_sym_integer_value_token1] = ACTIONS(132),
    [sym_identifier] = ACTIONS(134),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(136),
    [sym_plain_value] = ACTIONS(371),
    [anon_sym_LPAREN2] = ACTIONS(140),
    [sym_string_value] = ACTIONS(373),
    [anon_sym_POUND] = ACTIONS(144),
  },
  [196] = {
    [aux_sym_arguments_repeat1] = STATE(222),
    [anon_sym_COMMA] = ACTIONS(569),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(569),
    [anon_sym_RPAREN] = ACTIONS(743),
  },
  [197] = {
    [sym__value] = STATE(150),
    [sym_parenthesized_value] = STATE(150),
    [sym_binary_expression] = STATE(150),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(197),
    [sym_color_value] = STATE(150),
    [sym_integer_value] = STATE(150),
    [sym_float_value] = STATE(150),
    [sym_call_expression] = STATE(150),
    [aux_sym_integer_value_token1] = ACTIONS(745),
    [sym_identifier] = ACTIONS(748),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(751),
    [anon_sym_RPAREN] = ACTIONS(754),
    [anon_sym_COMMA] = ACTIONS(754),
    [anon_sym_LPAREN2] = ACTIONS(756),
    [sym_plain_value] = ACTIONS(759),
    [sym_string_value] = ACTIONS(762),
    [anon_sym_SEMI] = ACTIONS(754),
    [anon_sym_POUND] = ACTIONS(765),
  },
  [198] = {
    [anon_sym_COMMA] = ACTIONS(548),
    [anon_sym_or] = ACTIONS(403),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(548),
    [anon_sym_and] = ACTIONS(403),
  },
  [199] = {
    [anon_sym_RBRACE] = ACTIONS(768),
    [anon_sym_STAR] = ACTIONS(768),
    [anon_sym_ATmedia] = ACTIONS(770),
    [anon_sym_ATimport] = ACTIONS(770),
    [anon_sym_ATnamespace] = ACTIONS(770),
    [sym_identifier] = ACTIONS(768),
    [anon_sym_COLON_COLON] = ACTIONS(768),
    [sym_string_value] = ACTIONS(768),
    [sym_nesting_selector] = ACTIONS(768),
    [aux_sym_keyframes_statement_token1] = ACTIONS(770),
    [anon_sym_ATcharset] = ACTIONS(770),
    [ts_builtin_sym_end] = ACTIONS(768),
    [anon_sym_LBRACK] = ACTIONS(768),
    [anon_sym_COLON] = ACTIONS(770),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(768),
    [anon_sym_ATsupports] = ACTIONS(770),
    [sym_at_keyword] = ACTIONS(770),
    [anon_sym_ATkeyframes] = ACTIONS(770),
    [anon_sym_POUND] = ACTIONS(768),
  },
  [200] = {
    [aux_sym_import_statement_repeat1] = STATE(200),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(772),
    [anon_sym_SEMI] = ACTIONS(548),
  },
  [201] = {
    [sym_media_statement] = STATE(224),
    [sym_charset_statement] = STATE(224),
    [sym_supports_statement] = STATE(224),
    [sym_at_rule] = STATE(224),
    [sym__selector] = STATE(16),
    [sym_universal_selector] = STATE(16),
    [sym_attribute_selector] = STATE(16),
    [sym_child_selector] = STATE(16),
    [sym_declaration] = STATE(224),
    [aux_sym_block_repeat1] = STATE(224),
    [sym_last_declaration] = STATE(225),
    [sym_import_statement] = STATE(224),
    [sym_pseudo_element_selector] = STATE(16),
    [sym_id_selector] = STATE(16),
    [sym_adjacent_sibling_selector] = STATE(16),
    [sym_namespace_statement] = STATE(224),
    [sym_keyframes_statement] = STATE(224),
    [sym_rule_set] = STATE(224),
    [sym_selectors] = STATE(19),
    [sym_class_selector] = STATE(16),
    [sym_pseudo_class_selector] = STATE(16),
    [sym_descendant_selector] = STATE(16),
    [sym_sibling_selector] = STATE(16),
    [anon_sym_RBRACE] = ACTIONS(775),
    [sym_identifier] = ACTIONS(232),
    [anon_sym_ATmedia] = ACTIONS(7),
    [anon_sym_ATimport] = ACTIONS(9),
    [anon_sym_ATnamespace] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_COLON_COLON] = ACTIONS(15),
    [sym_string_value] = ACTIONS(17),
    [sym_nesting_selector] = ACTIONS(17),
    [aux_sym_keyframes_statement_token1] = ACTIONS(19),
    [anon_sym_ATcharset] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [sym_at_keyword] = ACTIONS(29),
    [anon_sym_ATsupports] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_ATkeyframes] = ACTIONS(19),
    [anon_sym_POUND] = ACTIONS(35),
  },
  [202] = {
    [anon_sym_RBRACE] = ACTIONS(777),
    [aux_sym_integer_value_token1] = ACTIONS(777),
    [sym_to] = ACTIONS(777),
    [sym_comment] = ACTIONS(3),
    [sym_from] = ACTIONS(777),
  },
  [203] = {
    [anon_sym_RBRACE] = ACTIONS(779),
    [anon_sym_STAR] = ACTIONS(779),
    [anon_sym_ATmedia] = ACTIONS(781),
    [anon_sym_ATimport] = ACTIONS(781),
    [anon_sym_ATnamespace] = ACTIONS(781),
    [sym_identifier] = ACTIONS(779),
    [anon_sym_COLON_COLON] = ACTIONS(779),
    [sym_string_value] = ACTIONS(779),
    [sym_nesting_selector] = ACTIONS(779),
    [aux_sym_keyframes_statement_token1] = ACTIONS(781),
    [anon_sym_ATcharset] = ACTIONS(781),
    [ts_builtin_sym_end] = ACTIONS(779),
    [anon_sym_LBRACK] = ACTIONS(779),
    [anon_sym_COLON] = ACTIONS(781),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(779),
    [anon_sym_ATsupports] = ACTIONS(781),
    [sym_at_keyword] = ACTIONS(781),
    [anon_sym_ATkeyframes] = ACTIONS(781),
    [anon_sym_POUND] = ACTIONS(779),
  },
  [204] = {
    [sym_integer_value] = STATE(161),
    [sym_keyframe_block] = STATE(204),
    [aux_sym_keyframe_block_list_repeat1] = STATE(204),
    [anon_sym_RBRACE] = ACTIONS(783),
    [aux_sym_integer_value_token1] = ACTIONS(785),
    [sym_to] = ACTIONS(788),
    [sym_comment] = ACTIONS(3),
    [sym_from] = ACTIONS(788),
  },
  [205] = {
    [anon_sym_STAR] = ACTIONS(741),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(741),
    [anon_sym_RPAREN] = ACTIONS(741),
    [anon_sym_DASH] = ACTIONS(741),
    [anon_sym_PLUS] = ACTIONS(741),
    [anon_sym_SEMI] = ACTIONS(741),
    [anon_sym_SLASH] = ACTIONS(739),
  },
  [206] = {
    [aux_sym_arguments_repeat1] = STATE(222),
    [anon_sym_COMMA] = ACTIONS(569),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(569),
    [anon_sym_RPAREN] = ACTIONS(791),
  },
  [207] = {
    [sym__descendant_operator] = ACTIONS(793),
    [anon_sym_LBRACK] = ACTIONS(793),
    [anon_sym_COLON] = ACTIONS(795),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(793),
    [anon_sym_TILDE] = ACTIONS(793),
    [anon_sym_COMMA] = ACTIONS(793),
    [anon_sym_COLON_COLON] = ACTIONS(793),
    [anon_sym_GT] = ACTIONS(793),
    [anon_sym_LBRACE] = ACTIONS(793),
    [anon_sym_PLUS] = ACTIONS(793),
    [anon_sym_POUND] = ACTIONS(793),
    [anon_sym_RPAREN] = ACTIONS(793),
  },
  [208] = {
    [sym__value] = STATE(150),
    [sym_parenthesized_value] = STATE(150),
    [sym_binary_expression] = STATE(150),
    [sym__selector] = STATE(227),
    [sym_universal_selector] = STATE(227),
    [sym_attribute_selector] = STATE(227),
    [sym_child_selector] = STATE(227),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(228),
    [sym_float_value] = STATE(150),
    [sym_call_expression] = STATE(150),
    [sym_pseudo_element_selector] = STATE(227),
    [sym_id_selector] = STATE(227),
    [sym_adjacent_sibling_selector] = STATE(227),
    [sym_color_value] = STATE(150),
    [sym_integer_value] = STATE(150),
    [sym_class_selector] = STATE(227),
    [sym_pseudo_class_selector] = STATE(227),
    [sym_descendant_selector] = STATE(227),
    [sym_sibling_selector] = STATE(227),
    [aux_sym_integer_value_token1] = ACTIONS(132),
    [sym_identifier] = ACTIONS(443),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(25),
    [aux_sym_float_value_token1] = ACTIONS(136),
    [anon_sym_DOT] = ACTIONS(451),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON_COLON] = ACTIONS(15),
    [sym_plain_value] = ACTIONS(371),
    [anon_sym_LPAREN2] = ACTIONS(140),
    [sym_string_value] = ACTIONS(447),
    [sym_nesting_selector] = ACTIONS(797),
    [anon_sym_POUND] = ACTIONS(453),
  },
  [209] = {
    [sym__descendant_operator] = ACTIONS(799),
    [anon_sym_LBRACK] = ACTIONS(799),
    [anon_sym_COLON] = ACTIONS(801),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(799),
    [anon_sym_TILDE] = ACTIONS(799),
    [anon_sym_COMMA] = ACTIONS(799),
    [anon_sym_COLON_COLON] = ACTIONS(799),
    [anon_sym_GT] = ACTIONS(799),
    [anon_sym_LBRACE] = ACTIONS(799),
    [anon_sym_PLUS] = ACTIONS(799),
    [anon_sym_POUND] = ACTIONS(799),
    [anon_sym_RPAREN] = ACTIONS(799),
  },
  [210] = {
    [aux_sym_pseudo_class_arguments_repeat2] = STATE(230),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(619),
    [anon_sym_RPAREN] = ACTIONS(803),
  },
  [211] = {
    [sym__value] = STATE(150),
    [sym_parenthesized_value] = STATE(150),
    [sym_binary_expression] = STATE(150),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(211),
    [sym_color_value] = STATE(150),
    [sym_integer_value] = STATE(150),
    [sym_float_value] = STATE(150),
    [sym_call_expression] = STATE(150),
    [aux_sym_integer_value_token1] = ACTIONS(745),
    [sym_identifier] = ACTIONS(748),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(751),
    [anon_sym_RPAREN] = ACTIONS(754),
    [anon_sym_COMMA] = ACTIONS(754),
    [anon_sym_LPAREN2] = ACTIONS(756),
    [sym_plain_value] = ACTIONS(759),
    [sym_string_value] = ACTIONS(762),
    [anon_sym_POUND] = ACTIONS(765),
  },
  [212] = {
    [sym__value] = STATE(139),
    [sym_parenthesized_value] = STATE(139),
    [sym_binary_expression] = STATE(139),
    [sym_color_value] = STATE(139),
    [sym_integer_value] = STATE(139),
    [aux_sym_declaration_repeat1] = STATE(232),
    [sym_float_value] = STATE(139),
    [sym_call_expression] = STATE(139),
    [anon_sym_RBRACE] = ACTIONS(805),
    [aux_sym_integer_value_token1] = ACTIONS(132),
    [sym_identifier] = ACTIONS(134),
    [anon_sym_STAR] = ACTIONS(341),
    [sym_important] = ACTIONS(807),
    [sym_plain_value] = ACTIONS(345),
    [sym_string_value] = ACTIONS(347),
    [anon_sym_SLASH] = ACTIONS(349),
    [anon_sym_SEMI] = ACTIONS(351),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(136),
    [anon_sym_DASH] = ACTIONS(349),
    [anon_sym_LPAREN2] = ACTIONS(140),
    [anon_sym_COMMA] = ACTIONS(353),
    [anon_sym_PLUS] = ACTIONS(349),
    [anon_sym_POUND] = ACTIONS(144),
  },
  [213] = {
    [anon_sym_RBRACE] = ACTIONS(809),
    [anon_sym_STAR] = ACTIONS(809),
    [anon_sym_ATmedia] = ACTIONS(811),
    [anon_sym_ATimport] = ACTIONS(811),
    [anon_sym_ATnamespace] = ACTIONS(811),
    [sym_identifier] = ACTIONS(809),
    [anon_sym_COLON_COLON] = ACTIONS(809),
    [sym_string_value] = ACTIONS(809),
    [sym_nesting_selector] = ACTIONS(809),
    [aux_sym_keyframes_statement_token1] = ACTIONS(811),
    [anon_sym_ATcharset] = ACTIONS(811),
    [ts_builtin_sym_end] = ACTIONS(809),
    [anon_sym_LBRACK] = ACTIONS(809),
    [anon_sym_COLON] = ACTIONS(811),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(809),
    [anon_sym_ATsupports] = ACTIONS(811),
    [sym_at_keyword] = ACTIONS(811),
    [anon_sym_ATkeyframes] = ACTIONS(811),
    [anon_sym_POUND] = ACTIONS(809),
  },
  [214] = {
    [anon_sym_DASH] = ACTIONS(214),
    [anon_sym_STAR] = ACTIONS(214),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PLUS] = ACTIONS(214),
    [anon_sym_SLASH] = ACTIONS(216),
    [anon_sym_RBRACK] = ACTIONS(813),
  },
  [215] = {
    [aux_sym_integer_value_token1] = ACTIONS(739),
    [anon_sym_STAR] = ACTIONS(741),
    [sym_identifier] = ACTIONS(739),
    [sym_important] = ACTIONS(741),
    [anon_sym_RBRACE] = ACTIONS(741),
    [anon_sym_RPAREN] = ACTIONS(741),
    [sym_plain_value] = ACTIONS(739),
    [sym_string_value] = ACTIONS(741),
    [anon_sym_SLASH] = ACTIONS(739),
    [anon_sym_SEMI] = ACTIONS(741),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(739),
    [anon_sym_DASH] = ACTIONS(739),
    [anon_sym_COMMA] = ACTIONS(741),
    [anon_sym_LPAREN2] = ACTIONS(741),
    [anon_sym_PLUS] = ACTIONS(739),
    [anon_sym_POUND] = ACTIONS(741),
  },
  [216] = {
    [aux_sym_arguments_repeat1] = STATE(222),
    [anon_sym_COMMA] = ACTIONS(569),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(569),
    [anon_sym_RPAREN] = ACTIONS(815),
  },
  [217] = {
    [anon_sym_RBRACE] = ACTIONS(817),
    [anon_sym_STAR] = ACTIONS(817),
    [anon_sym_ATmedia] = ACTIONS(819),
    [anon_sym_ATimport] = ACTIONS(819),
    [anon_sym_ATnamespace] = ACTIONS(819),
    [sym_identifier] = ACTIONS(817),
    [anon_sym_COLON_COLON] = ACTIONS(817),
    [sym_string_value] = ACTIONS(817),
    [sym_nesting_selector] = ACTIONS(817),
    [aux_sym_keyframes_statement_token1] = ACTIONS(819),
    [anon_sym_ATcharset] = ACTIONS(819),
    [ts_builtin_sym_end] = ACTIONS(817),
    [anon_sym_LBRACK] = ACTIONS(817),
    [anon_sym_COLON] = ACTIONS(819),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(817),
    [anon_sym_ATsupports] = ACTIONS(819),
    [sym_at_keyword] = ACTIONS(819),
    [anon_sym_ATkeyframes] = ACTIONS(819),
    [anon_sym_POUND] = ACTIONS(817),
  },
  [218] = {
    [anon_sym_RPAREN] = ACTIONS(821),
    [anon_sym_COMMA] = ACTIONS(821),
    [anon_sym_or] = ACTIONS(821),
    [anon_sym_LBRACE] = ACTIONS(821),
    [sym_comment] = ACTIONS(3),
    [anon_sym_and] = ACTIONS(821),
    [anon_sym_SEMI] = ACTIONS(821),
  },
  [219] = {
    [sym__value] = STATE(150),
    [sym_parenthesized_value] = STATE(150),
    [sym_binary_expression] = STATE(150),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(219),
    [sym_color_value] = STATE(150),
    [sym_integer_value] = STATE(150),
    [sym_float_value] = STATE(150),
    [sym_call_expression] = STATE(150),
    [aux_sym_integer_value_token1] = ACTIONS(745),
    [sym_identifier] = ACTIONS(748),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(751),
    [anon_sym_RPAREN] = ACTIONS(754),
    [anon_sym_LPAREN2] = ACTIONS(756),
    [sym_plain_value] = ACTIONS(759),
    [sym_string_value] = ACTIONS(762),
    [anon_sym_POUND] = ACTIONS(765),
  },
  [220] = {
    [sym__value] = STATE(150),
    [sym_parenthesized_value] = STATE(150),
    [sym_binary_expression] = STATE(150),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(197),
    [sym_color_value] = STATE(150),
    [sym_integer_value] = STATE(150),
    [sym_float_value] = STATE(150),
    [sym_call_expression] = STATE(150),
    [aux_sym_integer_value_token1] = ACTIONS(132),
    [sym_identifier] = ACTIONS(134),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(136),
    [anon_sym_RPAREN] = ACTIONS(823),
    [anon_sym_COMMA] = ACTIONS(823),
    [sym_plain_value] = ACTIONS(371),
    [anon_sym_LPAREN2] = ACTIONS(140),
    [sym_string_value] = ACTIONS(373),
    [anon_sym_SEMI] = ACTIONS(823),
    [anon_sym_POUND] = ACTIONS(144),
  },
  [221] = {
    [anon_sym_not] = ACTIONS(825),
    [anon_sym_STAR] = ACTIONS(827),
    [sym_identifier] = ACTIONS(825),
    [sym_comment] = ACTIONS(3),
    [anon_sym_only] = ACTIONS(825),
    [anon_sym_DASH] = ACTIONS(825),
    [anon_sym_LPAREN2] = ACTIONS(827),
    [anon_sym_selector] = ACTIONS(825),
    [anon_sym_PLUS] = ACTIONS(827),
    [anon_sym_SEMI] = ACTIONS(827),
    [anon_sym_SLASH] = ACTIONS(825),
  },
  [222] = {
    [aux_sym_arguments_repeat1] = STATE(222),
    [anon_sym_COMMA] = ACTIONS(829),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(829),
    [anon_sym_RPAREN] = ACTIONS(823),
  },
  [223] = {
    [anon_sym_RBRACE] = ACTIONS(459),
    [aux_sym_integer_value_token1] = ACTIONS(459),
    [sym_to] = ACTIONS(459),
    [sym_comment] = ACTIONS(3),
    [sym_from] = ACTIONS(459),
  },
  [224] = {
    [sym_media_statement] = STATE(176),
    [sym_charset_statement] = STATE(176),
    [sym_supports_statement] = STATE(176),
    [sym_at_rule] = STATE(176),
    [sym__selector] = STATE(16),
    [sym_universal_selector] = STATE(16),
    [sym_attribute_selector] = STATE(16),
    [sym_child_selector] = STATE(16),
    [sym_declaration] = STATE(176),
    [aux_sym_block_repeat1] = STATE(176),
    [sym_last_declaration] = STATE(236),
    [sym_import_statement] = STATE(176),
    [sym_pseudo_element_selector] = STATE(16),
    [sym_id_selector] = STATE(16),
    [sym_adjacent_sibling_selector] = STATE(16),
    [sym_namespace_statement] = STATE(176),
    [sym_keyframes_statement] = STATE(176),
    [sym_rule_set] = STATE(176),
    [sym_selectors] = STATE(19),
    [sym_class_selector] = STATE(16),
    [sym_pseudo_class_selector] = STATE(16),
    [sym_descendant_selector] = STATE(16),
    [sym_sibling_selector] = STATE(16),
    [anon_sym_RBRACE] = ACTIONS(832),
    [sym_identifier] = ACTIONS(232),
    [anon_sym_ATmedia] = ACTIONS(7),
    [anon_sym_ATimport] = ACTIONS(9),
    [anon_sym_ATnamespace] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_COLON_COLON] = ACTIONS(15),
    [sym_string_value] = ACTIONS(17),
    [sym_nesting_selector] = ACTIONS(17),
    [aux_sym_keyframes_statement_token1] = ACTIONS(19),
    [anon_sym_ATcharset] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [sym_at_keyword] = ACTIONS(29),
    [anon_sym_ATsupports] = ACTIONS(31),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_ATkeyframes] = ACTIONS(19),
    [anon_sym_POUND] = ACTIONS(35),
  },
  [225] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(832),
  },
  [226] = {
    [anon_sym_STAR] = ACTIONS(827),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(827),
    [anon_sym_RPAREN] = ACTIONS(827),
    [anon_sym_DASH] = ACTIONS(827),
    [anon_sym_PLUS] = ACTIONS(827),
    [anon_sym_SEMI] = ACTIONS(827),
    [anon_sym_SLASH] = ACTIONS(825),
  },
  [227] = {
    [sym__descendant_operator] = ACTIONS(106),
    [anon_sym_LBRACK] = ACTIONS(108),
    [anon_sym_COLON] = ACTIONS(110),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(112),
    [anon_sym_TILDE] = ACTIONS(114),
    [anon_sym_COMMA] = ACTIONS(834),
    [anon_sym_RPAREN] = ACTIONS(834),
    [anon_sym_COLON_COLON] = ACTIONS(118),
    [anon_sym_GT] = ACTIONS(120),
    [anon_sym_PLUS] = ACTIONS(124),
    [anon_sym_POUND] = ACTIONS(126),
  },
  [228] = {
    [sym__value] = STATE(150),
    [sym_parenthesized_value] = STATE(150),
    [sym_binary_expression] = STATE(150),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(211),
    [sym_color_value] = STATE(150),
    [sym_integer_value] = STATE(150),
    [sym_float_value] = STATE(150),
    [sym_call_expression] = STATE(150),
    [aux_sym_integer_value_token1] = ACTIONS(132),
    [sym_identifier] = ACTIONS(134),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(136),
    [anon_sym_RPAREN] = ACTIONS(834),
    [anon_sym_COMMA] = ACTIONS(834),
    [sym_plain_value] = ACTIONS(371),
    [anon_sym_LPAREN2] = ACTIONS(140),
    [sym_string_value] = ACTIONS(373),
    [anon_sym_POUND] = ACTIONS(144),
  },
  [229] = {
    [sym__descendant_operator] = ACTIONS(836),
    [anon_sym_LBRACK] = ACTIONS(836),
    [anon_sym_COLON] = ACTIONS(838),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(836),
    [anon_sym_TILDE] = ACTIONS(836),
    [anon_sym_COMMA] = ACTIONS(836),
    [anon_sym_COLON_COLON] = ACTIONS(836),
    [anon_sym_GT] = ACTIONS(836),
    [anon_sym_LBRACE] = ACTIONS(836),
    [anon_sym_PLUS] = ACTIONS(836),
    [anon_sym_POUND] = ACTIONS(836),
    [anon_sym_RPAREN] = ACTIONS(836),
  },
  [230] = {
    [aux_sym_pseudo_class_arguments_repeat2] = STATE(230),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(840),
    [anon_sym_RPAREN] = ACTIONS(834),
  },
  [231] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(843),
    [anon_sym_SEMI] = ACTIONS(532),
  },
  [232] = {
    [sym__value] = STATE(139),
    [sym_parenthesized_value] = STATE(139),
    [sym_binary_expression] = STATE(139),
    [sym_color_value] = STATE(139),
    [sym_integer_value] = STATE(139),
    [aux_sym_declaration_repeat1] = STATE(238),
    [sym_float_value] = STATE(139),
    [sym_call_expression] = STATE(139),
    [anon_sym_RBRACE] = ACTIONS(843),
    [aux_sym_integer_value_token1] = ACTIONS(132),
    [sym_identifier] = ACTIONS(134),
    [sym_important] = ACTIONS(845),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(136),
    [sym_plain_value] = ACTIONS(345),
    [anon_sym_LPAREN2] = ACTIONS(140),
    [anon_sym_COMMA] = ACTIONS(353),
    [sym_string_value] = ACTIONS(347),
    [anon_sym_POUND] = ACTIONS(144),
    [anon_sym_SEMI] = ACTIONS(532),
  },
  [233] = {
    [sym__descendant_operator] = ACTIONS(847),
    [anon_sym_LBRACK] = ACTIONS(847),
    [anon_sym_COLON] = ACTIONS(849),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(847),
    [anon_sym_TILDE] = ACTIONS(847),
    [anon_sym_COMMA] = ACTIONS(847),
    [anon_sym_COLON_COLON] = ACTIONS(847),
    [anon_sym_GT] = ACTIONS(847),
    [anon_sym_LBRACE] = ACTIONS(847),
    [anon_sym_PLUS] = ACTIONS(847),
    [anon_sym_POUND] = ACTIONS(847),
    [anon_sym_RPAREN] = ACTIONS(847),
  },
  [234] = {
    [aux_sym_integer_value_token1] = ACTIONS(825),
    [anon_sym_STAR] = ACTIONS(827),
    [sym_identifier] = ACTIONS(825),
    [sym_important] = ACTIONS(827),
    [anon_sym_RBRACE] = ACTIONS(827),
    [anon_sym_RPAREN] = ACTIONS(827),
    [sym_plain_value] = ACTIONS(825),
    [sym_string_value] = ACTIONS(827),
    [anon_sym_SLASH] = ACTIONS(825),
    [anon_sym_SEMI] = ACTIONS(827),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(825),
    [anon_sym_DASH] = ACTIONS(825),
    [anon_sym_COMMA] = ACTIONS(827),
    [anon_sym_LPAREN2] = ACTIONS(827),
    [anon_sym_PLUS] = ACTIONS(825),
    [anon_sym_POUND] = ACTIONS(827),
  },
  [235] = {
    [anon_sym_RBRACE] = ACTIONS(627),
    [aux_sym_integer_value_token1] = ACTIONS(627),
    [sym_to] = ACTIONS(627),
    [sym_comment] = ACTIONS(3),
    [sym_from] = ACTIONS(627),
  },
  [236] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(851),
  },
  [237] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(853),
    [anon_sym_SEMI] = ACTIONS(709),
  },
  [238] = {
    [sym__value] = STATE(139),
    [sym_parenthesized_value] = STATE(139),
    [sym_binary_expression] = STATE(139),
    [sym_color_value] = STATE(139),
    [sym_integer_value] = STATE(139),
    [aux_sym_declaration_repeat1] = STATE(238),
    [sym_float_value] = STATE(139),
    [sym_call_expression] = STATE(139),
    [anon_sym_RBRACE] = ACTIONS(707),
    [aux_sym_integer_value_token1] = ACTIONS(711),
    [sym_identifier] = ACTIONS(714),
    [sym_important] = ACTIONS(707),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(717),
    [anon_sym_COMMA] = ACTIONS(720),
    [anon_sym_LPAREN2] = ACTIONS(723),
    [sym_plain_value] = ACTIONS(726),
    [sym_string_value] = ACTIONS(729),
    [anon_sym_SEMI] = ACTIONS(707),
    [anon_sym_POUND] = ACTIONS(732),
  },
  [239] = {
    [anon_sym_RBRACE] = ACTIONS(809),
    [aux_sym_integer_value_token1] = ACTIONS(809),
    [sym_to] = ACTIONS(809),
    [sym_comment] = ACTIONS(3),
    [sym_from] = ACTIONS(809),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = false}, SHIFT(3),
  [9] = {.count = 1, .reusable = false}, SHIFT(4),
  [11] = {.count = 1, .reusable = false}, SHIFT(5),
  [13] = {.count = 1, .reusable = true}, SHIFT(6),
  [15] = {.count = 1, .reusable = true}, SHIFT(7),
  [17] = {.count = 1, .reusable = true}, SHIFT(16),
  [19] = {.count = 1, .reusable = false}, SHIFT(8),
  [21] = {.count = 1, .reusable = false}, SHIFT(9),
  [23] = {.count = 1, .reusable = true}, REDUCE(sym_stylesheet, 0),
  [25] = {.count = 1, .reusable = true}, SHIFT(10),
  [27] = {.count = 1, .reusable = false}, SHIFT(11),
  [29] = {.count = 1, .reusable = false}, SHIFT(12),
  [31] = {.count = 1, .reusable = false}, SHIFT(13),
  [33] = {.count = 1, .reusable = true}, SHIFT(14),
  [35] = {.count = 1, .reusable = true}, SHIFT(15),
  [37] = {.count = 1, .reusable = true}, REDUCE(sym__selector, 1, .alias_sequence_id = 1),
  [39] = {.count = 2, .reusable = false}, REDUCE(sym__selector, 1, .alias_sequence_id = 1), SHIFT(20),
  [42] = {.count = 1, .reusable = false}, SHIFT(21),
  [44] = {.count = 1, .reusable = true}, SHIFT(22),
  [46] = {.count = 1, .reusable = false}, SHIFT(23),
  [48] = {.count = 1, .reusable = false}, SHIFT(24),
  [50] = {.count = 1, .reusable = false}, SHIFT(28),
  [52] = {.count = 1, .reusable = false}, SHIFT(26),
  [54] = {.count = 1, .reusable = false}, SHIFT(30),
  [56] = {.count = 1, .reusable = false}, SHIFT(31),
  [58] = {.count = 1, .reusable = true}, SHIFT(27),
  [60] = {.count = 1, .reusable = true}, SHIFT(31),
  [62] = {.count = 1, .reusable = true}, SHIFT(29),
  [64] = {.count = 1, .reusable = true}, SHIFT(32),
  [66] = {.count = 1, .reusable = true}, SHIFT(33),
  [68] = {.count = 1, .reusable = true}, REDUCE(sym_universal_selector, 1),
  [70] = {.count = 1, .reusable = false}, REDUCE(sym_universal_selector, 1),
  [72] = {.count = 1, .reusable = true}, SHIFT(34),
  [74] = {.count = 1, .reusable = true}, SHIFT(35),
  [76] = {.count = 1, .reusable = false}, SHIFT(38),
  [78] = {.count = 1, .reusable = false}, SHIFT(36),
  [80] = {.count = 1, .reusable = false}, SHIFT(40),
  [82] = {.count = 1, .reusable = false}, SHIFT(41),
  [84] = {.count = 1, .reusable = true}, SHIFT(37),
  [86] = {.count = 1, .reusable = true}, SHIFT(41),
  [88] = {.count = 1, .reusable = true}, SHIFT(39),
  [90] = {.count = 1, .reusable = true}, SHIFT(42),
  [92] = {.count = 1, .reusable = true}, SHIFT(43),
  [94] = {.count = 1, .reusable = false}, SHIFT(44),
  [96] = {.count = 1, .reusable = true}, SHIFT(45),
  [98] = {.count = 1, .reusable = true}, SHIFT(46),
  [100] = {.count = 1, .reusable = false}, SHIFT(48),
  [102] = {.count = 1, .reusable = true}, SHIFT(50),
  [104] = {.count = 1, .reusable = true}, SHIFT(51),
  [106] = {.count = 1, .reusable = true}, SHIFT(52),
  [108] = {.count = 1, .reusable = true}, SHIFT(53),
  [110] = {.count = 1, .reusable = false}, SHIFT(54),
  [112] = {.count = 1, .reusable = true}, SHIFT(55),
  [114] = {.count = 1, .reusable = true}, SHIFT(56),
  [116] = {.count = 1, .reusable = true}, SHIFT(57),
  [118] = {.count = 1, .reusable = true}, SHIFT(58),
  [120] = {.count = 1, .reusable = true}, SHIFT(59),
  [122] = {.count = 1, .reusable = true}, REDUCE(sym_selectors, 1),
  [124] = {.count = 1, .reusable = true}, SHIFT(60),
  [126] = {.count = 1, .reusable = true}, SHIFT(61),
  [128] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [130] = {.count = 1, .reusable = true}, REDUCE(sym_stylesheet, 1),
  [132] = {.count = 1, .reusable = false}, SHIFT(67),
  [134] = {.count = 1, .reusable = false}, SHIFT(65),
  [136] = {.count = 1, .reusable = false}, SHIFT(69),
  [138] = {.count = 1, .reusable = false}, SHIFT(70),
  [140] = {.count = 1, .reusable = true}, SHIFT(66),
  [142] = {.count = 1, .reusable = true}, SHIFT(70),
  [144] = {.count = 1, .reusable = true}, SHIFT(68),
  [146] = {.count = 1, .reusable = false}, SHIFT(72),
  [148] = {.count = 1, .reusable = false}, SHIFT(73),
  [150] = {.count = 1, .reusable = true}, REDUCE(sym__query, 1, .alias_sequence_id = 2),
  [152] = {.count = 1, .reusable = true}, SHIFT(75),
  [154] = {.count = 1, .reusable = true}, SHIFT(76),
  [156] = {.count = 1, .reusable = true}, SHIFT(77),
  [158] = {.count = 1, .reusable = false}, REDUCE(sym__value, 1, .alias_sequence_id = 3),
  [160] = {.count = 1, .reusable = true}, REDUCE(sym__value, 1, .alias_sequence_id = 3),
  [162] = {.count = 1, .reusable = true}, SHIFT(80),
  [164] = {.count = 1, .reusable = false}, SHIFT(82),
  [166] = {.count = 1, .reusable = true}, SHIFT(82),
  [168] = {.count = 1, .reusable = false}, REDUCE(sym_integer_value, 1),
  [170] = {.count = 1, .reusable = true}, REDUCE(sym_integer_value, 1),
  [172] = {.count = 1, .reusable = false}, SHIFT(83),
  [174] = {.count = 1, .reusable = true}, SHIFT(84),
  [176] = {.count = 1, .reusable = false}, REDUCE(sym_float_value, 1),
  [178] = {.count = 1, .reusable = true}, REDUCE(sym_float_value, 1),
  [180] = {.count = 1, .reusable = false}, SHIFT(85),
  [182] = {.count = 1, .reusable = false}, SHIFT(86),
  [184] = {.count = 1, .reusable = true}, SHIFT(87),
  [186] = {.count = 1, .reusable = false}, SHIFT(87),
  [188] = {.count = 1, .reusable = true}, SHIFT(88),
  [190] = {.count = 1, .reusable = true}, SHIFT(90),
  [192] = {.count = 1, .reusable = true}, SHIFT(92),
  [194] = {.count = 1, .reusable = true}, SHIFT(91),
  [196] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_element_selector, 2, .alias_sequence_id = 4),
  [198] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_element_selector, 2, .alias_sequence_id = 4),
  [200] = {.count = 1, .reusable = true}, SHIFT(93),
  [202] = {.count = 1, .reusable = true}, SHIFT(95),
  [204] = {.count = 1, .reusable = false}, SHIFT(97),
  [206] = {.count = 1, .reusable = true}, SHIFT(97),
  [208] = {.count = 1, .reusable = true}, SHIFT(98),
  [210] = {.count = 1, .reusable = true}, SHIFT(99),
  [212] = {.count = 1, .reusable = true}, SHIFT(100),
  [214] = {.count = 1, .reusable = true}, SHIFT(101),
  [216] = {.count = 1, .reusable = false}, SHIFT(101),
  [218] = {.count = 1, .reusable = true}, SHIFT(102),
  [220] = {.count = 1, .reusable = true}, SHIFT(103),
  [222] = {.count = 1, .reusable = true}, SHIFT(104),
  [224] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_selector, 2, .alias_sequence_id = 5),
  [226] = {.count = 1, .reusable = true}, SHIFT(105),
  [228] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_selector, 2, .alias_sequence_id = 5),
  [230] = {.count = 1, .reusable = true}, SHIFT(107),
  [232] = {.count = 1, .reusable = true}, SHIFT(108),
  [234] = {.count = 1, .reusable = true}, REDUCE(sym_at_rule, 2),
  [236] = {.count = 1, .reusable = false}, REDUCE(sym_at_rule, 2),
  [238] = {.count = 1, .reusable = true}, SHIFT(111),
  [240] = {.count = 1, .reusable = true}, SHIFT(112),
  [242] = {.count = 1, .reusable = true}, SHIFT(113),
  [244] = {.count = 1, .reusable = true}, SHIFT(115),
  [246] = {.count = 1, .reusable = true}, REDUCE(sym_class_selector, 2, .alias_sequence_id = 5),
  [248] = {.count = 1, .reusable = false}, REDUCE(sym_class_selector, 2, .alias_sequence_id = 5),
  [250] = {.count = 1, .reusable = true}, REDUCE(sym_id_selector, 2, .alias_sequence_id = 6),
  [252] = {.count = 1, .reusable = false}, REDUCE(sym_id_selector, 2, .alias_sequence_id = 6),
  [254] = {.count = 1, .reusable = true}, SHIFT(117),
  [256] = {.count = 1, .reusable = true}, SHIFT(118),
  [258] = {.count = 1, .reusable = true}, SHIFT(119),
  [260] = {.count = 1, .reusable = true}, SHIFT(120),
  [262] = {.count = 1, .reusable = true}, SHIFT(121),
  [264] = {.count = 1, .reusable = true}, SHIFT(122),
  [266] = {.count = 1, .reusable = true}, SHIFT(123),
  [268] = {.count = 1, .reusable = true}, SHIFT(124),
  [270] = {.count = 1, .reusable = true}, SHIFT(125),
  [272] = {.count = 1, .reusable = true}, SHIFT(126),
  [274] = {.count = 1, .reusable = true}, SHIFT(127),
  [276] = {.count = 1, .reusable = true}, REDUCE(sym_selectors, 2),
  [278] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(6),
  [281] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(3),
  [284] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(4),
  [287] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(5),
  [290] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(2),
  [293] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(7),
  [296] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(16),
  [299] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(8),
  [302] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(9),
  [305] = {.count = 1, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2),
  [307] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(10),
  [310] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(11),
  [313] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(14),
  [316] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(13),
  [319] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(12),
  [322] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(15),
  [325] = {.count = 1, .reusable = true}, REDUCE(sym_rule_set, 2),
  [327] = {.count = 1, .reusable = false}, REDUCE(sym_rule_set, 2),
  [329] = {.count = 1, .reusable = true}, SHIFT(129),
  [331] = {.count = 1, .reusable = false}, SHIFT(131),
  [333] = {.count = 1, .reusable = true}, SHIFT(131),
  [335] = {.count = 1, .reusable = false}, SHIFT(132),
  [337] = {.count = 1, .reusable = true}, SHIFT(133),
  [339] = {.count = 1, .reusable = false}, SHIFT(134),
  [341] = {.count = 1, .reusable = true}, SHIFT(136),
  [343] = {.count = 1, .reusable = true}, SHIFT(137),
  [345] = {.count = 1, .reusable = false}, SHIFT(139),
  [347] = {.count = 1, .reusable = true}, SHIFT(139),
  [349] = {.count = 1, .reusable = false}, SHIFT(136),
  [351] = {.count = 1, .reusable = true}, SHIFT(135),
  [353] = {.count = 1, .reusable = true}, SHIFT(138),
  [355] = {.count = 1, .reusable = true}, REDUCE(sym_unary_query, 2),
  [357] = {.count = 1, .reusable = true}, SHIFT(141),
  [359] = {.count = 1, .reusable = true}, SHIFT(143),
  [361] = {.count = 1, .reusable = true}, SHIFT(142),
  [363] = {.count = 1, .reusable = true}, SHIFT(144),
  [365] = {.count = 1, .reusable = true}, REDUCE(sym_media_statement, 3),
  [367] = {.count = 1, .reusable = false}, REDUCE(sym_media_statement, 3),
  [369] = {.count = 1, .reusable = true}, SHIFT(149),
  [371] = {.count = 1, .reusable = false}, SHIFT(150),
  [373] = {.count = 1, .reusable = true}, SHIFT(150),
  [375] = {.count = 1, .reusable = false}, REDUCE(sym_call_expression, 2, .alias_sequence_id = 7),
  [377] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 2, .alias_sequence_id = 7),
  [379] = {.count = 1, .reusable = true}, SHIFT(152),
  [381] = {.count = 1, .reusable = false}, REDUCE(sym_integer_value, 2),
  [383] = {.count = 1, .reusable = true}, REDUCE(sym_integer_value, 2),
  [385] = {.count = 1, .reusable = false}, REDUCE(sym_color_value, 2),
  [387] = {.count = 1, .reusable = true}, REDUCE(sym_color_value, 2),
  [389] = {.count = 1, .reusable = false}, REDUCE(sym_float_value, 2),
  [391] = {.count = 1, .reusable = true}, REDUCE(sym_float_value, 2),
  [393] = {.count = 1, .reusable = false}, SHIFT(153),
  [395] = {.count = 1, .reusable = true}, SHIFT(153),
  [397] = {.count = 1, .reusable = true}, REDUCE(sym_import_statement, 3),
  [399] = {.count = 1, .reusable = false}, REDUCE(sym_import_statement, 3),
  [401] = {.count = 1, .reusable = true}, SHIFT(154),
  [403] = {.count = 1, .reusable = true}, SHIFT(155),
  [405] = {.count = 1, .reusable = true}, SHIFT(156),
  [407] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_statement, 3),
  [409] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_statement, 3),
  [411] = {.count = 1, .reusable = true}, SHIFT(158),
  [413] = {.count = 1, .reusable = true}, SHIFT(159),
  [415] = {.count = 1, .reusable = true}, SHIFT(160),
  [417] = {.count = 1, .reusable = true}, SHIFT(161),
  [419] = {.count = 1, .reusable = true}, REDUCE(sym_keyframes_statement, 3, .alias_sequence_id = 8),
  [421] = {.count = 1, .reusable = false}, REDUCE(sym_keyframes_statement, 3, .alias_sequence_id = 8),
  [423] = {.count = 1, .reusable = true}, SHIFT(163),
  [425] = {.count = 1, .reusable = true}, SHIFT(165),
  [427] = {.count = 1, .reusable = false}, SHIFT(166),
  [429] = {.count = 1, .reusable = true}, SHIFT(166),
  [431] = {.count = 1, .reusable = true}, REDUCE(sym_charset_statement, 3),
  [433] = {.count = 1, .reusable = false}, REDUCE(sym_charset_statement, 3),
  [435] = {.count = 1, .reusable = false}, SHIFT(167),
  [437] = {.count = 1, .reusable = true}, SHIFT(167),
  [439] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_selector, 3, .alias_sequence_id = 9),
  [441] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_selector, 3, .alias_sequence_id = 9),
  [443] = {.count = 1, .reusable = false}, SHIFT(168),
  [445] = {.count = 1, .reusable = true}, SHIFT(169),
  [447] = {.count = 1, .reusable = true}, SHIFT(170),
  [449] = {.count = 1, .reusable = true}, SHIFT(172),
  [451] = {.count = 1, .reusable = false}, SHIFT(14),
  [453] = {.count = 1, .reusable = true}, SHIFT(171),
  [455] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_selector, 3, .alias_sequence_id = 5),
  [457] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_selector, 3, .alias_sequence_id = 5),
  [459] = {.count = 1, .reusable = true}, REDUCE(sym_block, 2),
  [461] = {.count = 1, .reusable = false}, REDUCE(sym_block, 2),
  [463] = {.count = 1, .reusable = false}, SHIFT(174),
  [465] = {.count = 1, .reusable = true}, SHIFT(175),
  [467] = {.count = 1, .reusable = true}, REDUCE(sym_at_rule, 3),
  [469] = {.count = 1, .reusable = false}, REDUCE(sym_at_rule, 3),
  [471] = {.count = 1, .reusable = true}, SHIFT(179),
  [473] = {.count = 1, .reusable = true}, REDUCE(sym_supports_statement, 3),
  [475] = {.count = 1, .reusable = false}, REDUCE(sym_supports_statement, 3),
  [477] = {.count = 1, .reusable = false}, REDUCE(sym__selector, 1, .alias_sequence_id = 1),
  [479] = {.count = 1, .reusable = true}, REDUCE(sym_descendant_selector, 3),
  [481] = {.count = 1, .reusable = false}, REDUCE(sym_descendant_selector, 3),
  [483] = {.count = 1, .reusable = true}, SHIFT(181),
  [485] = {.count = 1, .reusable = true}, SHIFT(182),
  [487] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_selector, 3, .alias_sequence_id = 10),
  [489] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_selector, 3, .alias_sequence_id = 10),
  [491] = {.count = 1, .reusable = true}, REDUCE(sym_class_selector, 3, .alias_sequence_id = 10),
  [493] = {.count = 1, .reusable = false}, REDUCE(sym_class_selector, 3, .alias_sequence_id = 10),
  [495] = {.count = 1, .reusable = true}, REDUCE(sym_sibling_selector, 3),
  [497] = {.count = 1, .reusable = false}, REDUCE(sym_sibling_selector, 3),
  [499] = {.count = 1, .reusable = true}, REDUCE(aux_sym_selectors_repeat1, 2),
  [501] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_element_selector, 3, .alias_sequence_id = 11),
  [503] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_element_selector, 3, .alias_sequence_id = 11),
  [505] = {.count = 1, .reusable = true}, REDUCE(sym_child_selector, 3),
  [507] = {.count = 1, .reusable = false}, REDUCE(sym_child_selector, 3),
  [509] = {.count = 1, .reusable = true}, REDUCE(sym_adjacent_sibling_selector, 3),
  [511] = {.count = 1, .reusable = false}, REDUCE(sym_adjacent_sibling_selector, 3),
  [513] = {.count = 1, .reusable = true}, REDUCE(sym_id_selector, 3, .alias_sequence_id = 12),
  [515] = {.count = 1, .reusable = false}, REDUCE(sym_id_selector, 3, .alias_sequence_id = 12),
  [517] = {.count = 2, .reusable = true}, REDUCE(aux_sym_selectors_repeat1, 2), SHIFT_REPEAT(57),
  [520] = {.count = 1, .reusable = true}, SHIFT(184),
  [522] = {.count = 1, .reusable = true}, SHIFT(186),
  [524] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 4, .alias_sequence_id = 13),
  [526] = {.count = 1, .reusable = false}, REDUCE(sym_declaration, 4, .alias_sequence_id = 13),
  [528] = {.count = 1, .reusable = false}, SHIFT(187),
  [530] = {.count = 1, .reusable = true}, SHIFT(187),
  [532] = {.count = 1, .reusable = true}, SHIFT(188),
  [534] = {.count = 1, .reusable = false}, SHIFT(189),
  [536] = {.count = 1, .reusable = true}, SHIFT(189),
  [538] = {.count = 1, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 1),
  [540] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 1),
  [542] = {.count = 1, .reusable = true}, SHIFT(190),
  [544] = {.count = 1, .reusable = true}, REDUCE(sym_parenthesized_query, 3),
  [546] = {.count = 1, .reusable = true}, SHIFT(193),
  [548] = {.count = 1, .reusable = true}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [550] = {.count = 1, .reusable = true}, REDUCE(sym_binary_query, 3),
  [552] = {.count = 2, .reusable = true}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(76),
  [555] = {.count = 1, .reusable = true}, REDUCE(sym_media_statement, 4),
  [557] = {.count = 1, .reusable = false}, REDUCE(sym_media_statement, 4),
  [559] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 2),
  [561] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 2),
  [563] = {.count = 1, .reusable = false}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 1),
  [565] = {.count = 1, .reusable = true}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 1),
  [567] = {.count = 1, .reusable = true}, SHIFT(194),
  [569] = {.count = 1, .reusable = true}, SHIFT(195),
  [571] = {.count = 1, .reusable = false}, REDUCE(sym_parenthesized_value, 3),
  [573] = {.count = 1, .reusable = true}, REDUCE(sym_parenthesized_value, 3),
  [575] = {.count = 1, .reusable = false}, REDUCE(sym_binary_expression, 3),
  [577] = {.count = 1, .reusable = true}, REDUCE(sym_binary_expression, 3),
  [579] = {.count = 1, .reusable = true}, REDUCE(sym_import_statement, 4),
  [581] = {.count = 1, .reusable = false}, REDUCE(sym_import_statement, 4),
  [583] = {.count = 1, .reusable = true}, SHIFT(199),
  [585] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_statement, 4, .alias_sequence_id = 14),
  [587] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_statement, 4, .alias_sequence_id = 14),
  [589] = {.count = 1, .reusable = true}, SHIFT(83),
  [591] = {.count = 1, .reusable = true}, REDUCE(sym_keyframe_block_list, 2),
  [593] = {.count = 1, .reusable = false}, REDUCE(sym_keyframe_block_list, 2),
  [595] = {.count = 1, .reusable = true}, SHIFT(201),
  [597] = {.count = 1, .reusable = true}, SHIFT(203),
  [599] = {.count = 1, .reusable = true}, SHIFT(205),
  [601] = {.count = 1, .reusable = true}, SHIFT(207),
  [603] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_arguments, 2),
  [605] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_arguments, 2),
  [607] = {.count = 1, .reusable = true}, REDUCE(sym__selector, 1),
  [609] = {.count = 1, .reusable = false}, REDUCE(sym__value, 1),
  [611] = {.count = 1, .reusable = true}, REDUCE(sym__value, 1),
  [613] = {.count = 1, .reusable = false}, REDUCE(sym__selector, 1),
  [615] = {.count = 1, .reusable = false}, SHIFT(51),
  [617] = {.count = 1, .reusable = false}, SHIFT(133),
  [619] = {.count = 1, .reusable = true}, SHIFT(208),
  [621] = {.count = 1, .reusable = true}, SHIFT(209),
  [623] = {.count = 1, .reusable = false}, SHIFT(212),
  [625] = {.count = 1, .reusable = true}, SHIFT(212),
  [627] = {.count = 1, .reusable = true}, REDUCE(sym_block, 3),
  [629] = {.count = 1, .reusable = false}, REDUCE(sym_block, 3),
  [631] = {.count = 1, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2),
  [633] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(6),
  [636] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(3),
  [639] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(4),
  [642] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(5),
  [645] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(2),
  [648] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(7),
  [651] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(16),
  [654] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(8),
  [657] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(9),
  [660] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(10),
  [663] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(11),
  [666] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(14),
  [669] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(13),
  [672] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(12),
  [675] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(15),
  [678] = {.count = 1, .reusable = true}, SHIFT(213),
  [680] = {.count = 1, .reusable = true}, REDUCE(sym_at_rule, 4),
  [682] = {.count = 1, .reusable = false}, REDUCE(sym_at_rule, 4),
  [684] = {.count = 2, .reusable = true}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(111),
  [687] = {.count = 1, .reusable = false}, SHIFT(214),
  [689] = {.count = 1, .reusable = true}, SHIFT(214),
  [691] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_selector, 4, .alias_sequence_id = 15),
  [693] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_selector, 4, .alias_sequence_id = 15),
  [695] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_selector, 4, .alias_sequence_id = 10),
  [697] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_selector, 4, .alias_sequence_id = 10),
  [699] = {.count = 1, .reusable = true}, SHIFT(215),
  [701] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 5, .alias_sequence_id = 13),
  [703] = {.count = 1, .reusable = false}, REDUCE(sym_declaration, 5, .alias_sequence_id = 13),
  [705] = {.count = 1, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2),
  [707] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2),
  [709] = {.count = 1, .reusable = true}, SHIFT(217),
  [711] = {.count = 2, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(67),
  [714] = {.count = 2, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(65),
  [717] = {.count = 2, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(69),
  [720] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(138),
  [723] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(66),
  [726] = {.count = 2, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(139),
  [729] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(139),
  [732] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(68),
  [735] = {.count = 1, .reusable = true}, SHIFT(218),
  [737] = {.count = 1, .reusable = true}, REDUCE(sym_selector_query, 4),
  [739] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 3),
  [741] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 3),
  [743] = {.count = 1, .reusable = true}, SHIFT(221),
  [745] = {.count = 2, .reusable = false}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(67),
  [748] = {.count = 2, .reusable = false}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(65),
  [751] = {.count = 2, .reusable = false}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(69),
  [754] = {.count = 1, .reusable = true}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2),
  [756] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(66),
  [759] = {.count = 2, .reusable = false}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(150),
  [762] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(150),
  [765] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(68),
  [768] = {.count = 1, .reusable = true}, REDUCE(sym_import_statement, 5),
  [770] = {.count = 1, .reusable = false}, REDUCE(sym_import_statement, 5),
  [772] = {.count = 2, .reusable = true}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(154),
  [775] = {.count = 1, .reusable = true}, SHIFT(223),
  [777] = {.count = 1, .reusable = true}, REDUCE(sym_keyframe_block, 2),
  [779] = {.count = 1, .reusable = true}, REDUCE(sym_keyframe_block_list, 3),
  [781] = {.count = 1, .reusable = false}, REDUCE(sym_keyframe_block_list, 3),
  [783] = {.count = 1, .reusable = true}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2),
  [785] = {.count = 2, .reusable = true}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(159),
  [788] = {.count = 2, .reusable = true}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(161),
  [791] = {.count = 1, .reusable = true}, SHIFT(226),
  [793] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_selector, 5, .alias_sequence_id = 9),
  [795] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_selector, 5, .alias_sequence_id = 9),
  [797] = {.count = 1, .reusable = true}, SHIFT(227),
  [799] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_arguments, 3),
  [801] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_arguments, 3),
  [803] = {.count = 1, .reusable = true}, SHIFT(229),
  [805] = {.count = 1, .reusable = true}, REDUCE(sym_last_declaration, 3, .alias_sequence_id = 13),
  [807] = {.count = 1, .reusable = true}, SHIFT(231),
  [809] = {.count = 1, .reusable = true}, REDUCE(sym_block, 4),
  [811] = {.count = 1, .reusable = false}, REDUCE(sym_block, 4),
  [813] = {.count = 1, .reusable = true}, SHIFT(233),
  [815] = {.count = 1, .reusable = true}, SHIFT(234),
  [817] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 6, .alias_sequence_id = 13),
  [819] = {.count = 1, .reusable = false}, REDUCE(sym_declaration, 6, .alias_sequence_id = 13),
  [821] = {.count = 1, .reusable = true}, REDUCE(sym_feature_query, 5, .alias_sequence_id = 16),
  [823] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2),
  [825] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 4),
  [827] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 4),
  [829] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(195),
  [832] = {.count = 1, .reusable = true}, SHIFT(235),
  [834] = {.count = 1, .reusable = true}, REDUCE(aux_sym_pseudo_class_arguments_repeat2, 2),
  [836] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_arguments, 4),
  [838] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_arguments, 4),
  [840] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pseudo_class_arguments_repeat2, 2), SHIFT_REPEAT(208),
  [843] = {.count = 1, .reusable = true}, REDUCE(sym_last_declaration, 4, .alias_sequence_id = 13),
  [845] = {.count = 1, .reusable = true}, SHIFT(237),
  [847] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_selector, 6, .alias_sequence_id = 15),
  [849] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_selector, 6, .alias_sequence_id = 15),
  [851] = {.count = 1, .reusable = true}, SHIFT(239),
  [853] = {.count = 1, .reusable = true}, REDUCE(sym_last_declaration, 5, .alias_sequence_id = 13),
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
