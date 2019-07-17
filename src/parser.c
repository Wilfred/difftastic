#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 278
#define SYMBOL_COUNT 102
#define ALIAS_COUNT 10
#define TOKEN_COUNT 52
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
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
      if (lookahead == 0) ADVANCE(78);
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(99);
      if (lookahead == '$') ADVANCE(33);
      if (lookahead == '&') ADVANCE(92);
      if (lookahead == '\'') ADVANCE(15);
      if (lookahead == '(') ADVANCE(113);
      if (lookahead == ')') ADVANCE(114);
      if (lookahead == '*') ADVANCE(94);
      if (lookahead == '+') ADVANCE(112);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '-') ADVANCE(190);
      if (lookahead == '.') ADVANCE(96);
      if (lookahead == '/') ADVANCE(192);
      if (lookahead == ':') ADVANCE(97);
      if (lookahead == ';') ADVANCE(81);
      if (lookahead == '=') ADVANCE(101);
      if (lookahead == '>') ADVANCE(108);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '[') ADVANCE(100);
      if (lookahead == ']') ADVANCE(107);
      if (lookahead == '^') ADVANCE(35);
      if (lookahead == 'a') ADVANCE(50);
      if (lookahead == 'f') ADVANCE(61);
      if (lookahead == 'n') ADVANCE(53);
      if (lookahead == 'o') ADVANCE(51);
      if (lookahead == 's') ADVANCE(43);
      if (lookahead == 't') ADVANCE(54);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '|') ADVANCE(36);
      if (lookahead == '}') ADVANCE(88);
      if (lookahead == '~') ADVANCE(110);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'd')) ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(78);
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(99);
      if (lookahead == '$') ADVANCE(33);
      if (lookahead == '&') ADVANCE(92);
      if (lookahead == '\'') ADVANCE(15);
      if (lookahead == '(') ADVANCE(116);
      if (lookahead == ')') ADVANCE(114);
      if (lookahead == '*') ADVANCE(94);
      if (lookahead == '+') ADVANCE(112);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '-') ADVANCE(190);
      if (lookahead == '.') ADVANCE(96);
      if (lookahead == '/') ADVANCE(192);
      if (lookahead == ':') ADVANCE(97);
      if (lookahead == ';') ADVANCE(81);
      if (lookahead == '=') ADVANCE(101);
      if (lookahead == '>') ADVANCE(108);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '[') ADVANCE(100);
      if (lookahead == ']') ADVANCE(107);
      if (lookahead == '^') ADVANCE(35);
      if (lookahead == 'a') ADVANCE(49);
      if (lookahead == 'f') ADVANCE(60);
      if (lookahead == 'n') ADVANCE(53);
      if (lookahead == 'o') ADVANCE(51);
      if (lookahead == 's') ADVANCE(43);
      if (lookahead == 't') ADVANCE(54);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '|') ADVANCE(36);
      if (lookahead == '}') ADVANCE(88);
      if (lookahead == '~') ADVANCE(110);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(78);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(99);
      if (lookahead == '&') ADVANCE(92);
      if (lookahead == '\'') ADVANCE(15);
      if (lookahead == '(') ADVANCE(116);
      if (lookahead == ')') ADVANCE(114);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '+') ADVANCE(111);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ':') ADVANCE(97);
      if (lookahead == '>') ADVANCE(108);
      if (lookahead == '@') ADVANCE(39);
      if (lookahead == '[') ADVANCE(100);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '}') ADVANCE(88);
      if (lookahead == '~') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(99);
      if (lookahead == '%') ADVANCE(187);
      if (lookahead == '\'') ADVANCE(15);
      if (lookahead == '(') ADVANCE(116);
      if (lookahead == ')') ADVANCE(114);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '+') ADVANCE(112);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '.') ADVANCE(69);
      if (lookahead == '/') ADVANCE(193);
      if (lookahead == ';') ADVANCE(81);
      if (lookahead == '_') ADVANCE(197);
      if (lookahead == '}') ADVANCE(88);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(184);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(99);
      if (lookahead == '&') ADVANCE(92);
      if (lookahead == '\'') ADVANCE(15);
      if (lookahead == '(') ADVANCE(116);
      if (lookahead == ')') ADVANCE(114);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '+') ADVANCE(29);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '-') ADVANCE(196);
      if (lookahead == '.') ADVANCE(96);
      if (lookahead == '/') ADVANCE(23);
      if (lookahead == ':') ADVANCE(97);
      if (lookahead == ';') ADVANCE(81);
      if (lookahead == '[') ADVANCE(100);
      if (lookahead == '_') ADVANCE(197);
      if (lookahead == '}') ADVANCE(88);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(99);
      if (lookahead == '\'') ADVANCE(15);
      if (lookahead == '(') ADVANCE(113);
      if (lookahead == ')') ADVANCE(114);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '+') ADVANCE(112);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '.') ADVANCE(96);
      if (lookahead == '/') ADVANCE(193);
      if (lookahead == ':') ADVANCE(97);
      if (lookahead == ';') ADVANCE(81);
      if (lookahead == '>') ADVANCE(108);
      if (lookahead == '[') ADVANCE(100);
      if (lookahead == '_') ADVANCE(197);
      if (lookahead == '}') ADVANCE(88);
      if (lookahead == '~') ADVANCE(109);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(99);
      if (lookahead == '\'') ADVANCE(15);
      if (lookahead == '(') ADVANCE(116);
      if (lookahead == ')') ADVANCE(114);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '+') ADVANCE(112);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '.') ADVANCE(96);
      if (lookahead == '/') ADVANCE(193);
      if (lookahead == ':') ADVANCE(97);
      if (lookahead == ';') ADVANCE(81);
      if (lookahead == '>') ADVANCE(108);
      if (lookahead == '[') ADVANCE(100);
      if (lookahead == '_') ADVANCE(197);
      if (lookahead == '}') ADVANCE(88);
      if (lookahead == '~') ADVANCE(109);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(99);
      if (lookahead == '\'') ADVANCE(15);
      if (lookahead == '(') ADVANCE(116);
      if (lookahead == ')') ADVANCE(114);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '+') ADVANCE(112);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '-') ADVANCE(189);
      if (lookahead == '.') ADVANCE(69);
      if (lookahead == '/') ADVANCE(193);
      if (lookahead == ';') ADVANCE(81);
      if (lookahead == '_') ADVANCE(197);
      if (lookahead == '}') ADVANCE(88);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(194);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '\'') ADVANCE(15);
      if (lookahead == '(') ADVANCE(113);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '\'') ADVANCE(15);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(158);
      if (lookahead == '\\') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(99);
      if (lookahead == '(') ADVANCE(113);
      if (lookahead == ')') ADVANCE(114);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '+') ADVANCE(111);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '-') ADVANCE(191);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == '/') ADVANCE(192);
      if (lookahead == ':') ADVANCE(97);
      if (lookahead == ';') ADVANCE(81);
      if (lookahead == '>') ADVANCE(108);
      if (lookahead == '[') ADVANCE(100);
      if (lookahead == 'n') ADVANCE(206);
      if (lookahead == 'o') ADVANCE(205);
      if (lookahead == 's') ADVANCE(202);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '~') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(99);
      if (lookahead == '(') ADVANCE(116);
      if (lookahead == ')') ADVANCE(114);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '+') ADVANCE(111);
      if (lookahead == ',') ADVANCE(80);
      if (lookahead == '-') ADVANCE(191);
      if (lookahead == '.') ADVANCE(95);
      if (lookahead == '/') ADVANCE(192);
      if (lookahead == ':') ADVANCE(97);
      if (lookahead == ';') ADVANCE(81);
      if (lookahead == '>') ADVANCE(108);
      if (lookahead == '[') ADVANCE(100);
      if (lookahead == 'n') ADVANCE(206);
      if (lookahead == 'o') ADVANCE(205);
      if (lookahead == 's') ADVANCE(202);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '~') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 13:
      if (lookahead == '$') ADVANCE(33);
      if (lookahead == '(') ADVANCE(116);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == ';') ADVANCE(81);
      if (lookahead == '=') ADVANCE(101);
      if (lookahead == ']') ADVANCE(107);
      if (lookahead == '^') ADVANCE(35);
      if (lookahead == 'n') ADVANCE(206);
      if (lookahead == 'o') ADVANCE(205);
      if (lookahead == 's') ADVANCE(202);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '|') ADVANCE(36);
      if (lookahead == '~') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 14:
      if (lookahead == '%') ADVANCE(187);
      if (lookahead == '(') ADVANCE(116);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '+') ADVANCE(111);
      if (lookahead == '-') ADVANCE(191);
      if (lookahead == '/') ADVANCE(192);
      if (lookahead == ';') ADVANCE(81);
      if (lookahead == '_') ADVANCE(215);
      if (lookahead == 'n') ADVANCE(177);
      if (lookahead == 'o') ADVANCE(176);
      if (lookahead == 's') ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 15:
      if (lookahead == '\'') ADVANCE(158);
      if (lookahead == '\\') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '(') ADVANCE(113);
      if (lookahead == ')') ADVANCE(114);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '+') ADVANCE(111);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '/') ADVANCE(192);
      if (lookahead == ';') ADVANCE(81);
      if (lookahead == ']') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      END_STATE();
    case 17:
      if (lookahead == '(') ADVANCE(116);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '+') ADVANCE(111);
      if (lookahead == '-') ADVANCE(191);
      if (lookahead == '/') ADVANCE(192);
      if (lookahead == ';') ADVANCE(81);
      if (lookahead == 'n') ADVANCE(206);
      if (lookahead == 'o') ADVANCE(205);
      if (lookahead == 's') ADVANCE(202);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 18:
      if (lookahead == '(') ADVANCE(116);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '+') ADVANCE(111);
      if (lookahead == '-') ADVANCE(191);
      if (lookahead == '/') ADVANCE(192);
      if (lookahead == ';') ADVANCE(81);
      if (lookahead == 'n') ADVANCE(206);
      if (lookahead == 'o') ADVANCE(205);
      if (lookahead == 's') ADVANCE(202);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(18)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 19:
      if (lookahead == ')') ADVANCE(114);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '+') ADVANCE(111);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '/') ADVANCE(192);
      if (lookahead == ';') ADVANCE(81);
      if (lookahead == ']') ADVANCE(107);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      END_STATE();
    case 20:
      if (lookahead == ')') ADVANCE(114);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '+') ADVANCE(111);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '/') ADVANCE(192);
      if (lookahead == ';') ADVANCE(81);
      if (lookahead == ']') ADVANCE(107);
      if (lookahead == '{') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 21:
      if (lookahead == ')') ADVANCE(114);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '+') ADVANCE(111);
      if (lookahead == '-') ADVANCE(188);
      if (lookahead == '/') ADVANCE(192);
      if (lookahead == ';') ADVANCE(81);
      if (lookahead == ']') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      END_STATE();
    case 22:
      if (lookahead == '*') ADVANCE(25);
      END_STATE();
    case 23:
      if (lookahead == '*') ADVANCE(25);
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
          lookahead != '}') ADVANCE(32);
      END_STATE();
    case 24:
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '/') ADVANCE(264);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == '*') ADVANCE(24);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(155);
      END_STATE();
    case 29:
      if (lookahead == '.') ADVANCE(69);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      END_STATE();
    case 30:
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(214);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 31:
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 32:
      if (lookahead == '/') ADVANCE(76);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(265);
      END_STATE();
    case 33:
      if (lookahead == '=') ADVANCE(106);
      END_STATE();
    case 34:
      if (lookahead == '=') ADVANCE(105);
      END_STATE();
    case 35:
      if (lookahead == '=') ADVANCE(103);
      END_STATE();
    case 36:
      if (lookahead == '=') ADVANCE(104);
      END_STATE();
    case 37:
      if (lookahead == '=') ADVANCE(102);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(234);
      if (lookahead == 'i') ADVANCE(236);
      if (lookahead == 'k') ADVANCE(224);
      if (lookahead == 'm') ADVANCE(225);
      if (lookahead == 'n') ADVANCE(219);
      if (lookahead == 's') ADVANCE(259);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(263);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(66);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(117);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 47:
      if (lookahead == 'm') ADVANCE(58);
      END_STATE();
    case 48:
      if (lookahead == 'm') ADVANCE(89);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(45);
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 58:
      if (lookahead == 'p') ADVANCE(56);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(119);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 67:
      if (lookahead == 'y') ADVANCE(122);
      END_STATE();
    case 68:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(71);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == 'f') ADVANCE(60);
      if (lookahead == 't') ADVANCE(54);
      if (lookahead == '}') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(68)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(155);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 74:
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(10);
      if (lookahead == '"') ADVANCE(159);
      if (lookahead == '\\') ADVANCE(74);
      END_STATE();
    case 75:
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(15);
      if (lookahead == '\'') ADVANCE(160);
      if (lookahead == '\\') ADVANCE(75);
      END_STATE();
    case 76:
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
          lookahead != '}') ADVANCE(32);
      END_STATE();
    case 77:
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
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_ATimport);
      if (lookahead == 'k') ADVANCE(231);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(263);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_ATmedia);
      if (lookahead == 'k') ADVANCE(231);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(263);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_ATcharset);
      if (lookahead == 'k') ADVANCE(231);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(263);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_ATnamespace);
      if (lookahead == 'k') ADVANCE(231);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(263);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_ATkeyframes);
      if (lookahead == 'k') ADVANCE(231);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(263);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_keyframes_statement_token1);
      if (lookahead == 'k') ADVANCE(231);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(263);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_from);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_to);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_ATsupports);
      if (lookahead == 'k') ADVANCE(231);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(263);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_nesting_selector);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(105);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_TILDE_EQ);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_CARET_EQ);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_DOLLAR_EQ);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '=') ADVANCE(102);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '.') ADVANCE(69);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_important);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '%') ADVANCE(187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_only);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '%') ADVANCE(187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_only);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_selector);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '%') ADVANCE(187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_selector);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(149);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(153);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(69);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(69);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(69);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(69);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(149);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(69);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '.') ADVANCE(69);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(153);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(149);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(153);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(157);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(148);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(149);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(150);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(153);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(154);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_color_value_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_string_value);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == '"') ADVANCE(158);
      if (lookahead == '\\') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_string_value);
      if (lookahead == '\'') ADVANCE(158);
      if (lookahead == '\\') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(69);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(69);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(155);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(69);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (lookahead == '.') ADVANCE(69);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_integer_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == '/') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
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
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(155);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_float_value_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(187);
      if (lookahead == 'c') ADVANCE(181);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(187);
      if (lookahead == 'e') ADVANCE(171);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(187);
      if (lookahead == 'e') ADVANCE(175);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(187);
      if (lookahead == 'l') ADVANCE(182);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(187);
      if (lookahead == 'l') ADVANCE(172);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(187);
      if (lookahead == 'n') ADVANCE(174);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(187);
      if (lookahead == 'o') ADVANCE(180);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(187);
      if (lookahead == 'o') ADVANCE(179);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(187);
      if (lookahead == 'r') ADVANCE(126);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(187);
      if (lookahead == 't') ADVANCE(120);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(187);
      if (lookahead == 't') ADVANCE(178);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(187);
      if (lookahead == 'y') ADVANCE(123);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(187);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(186);
      if (lookahead == '-') ADVANCE(198);
      if (lookahead == '/') ADVANCE(77);
      if (lookahead == '_') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
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
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%') ADVANCE(186);
      if (lookahead == '/') ADVANCE(77);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
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
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '/') ADVANCE(77);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
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
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_unit);
      if (lookahead == '%' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(69);
      if (lookahead == '/') ADVANCE(76);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(197);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(69);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(25);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(25);
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
          lookahead != '}') ADVANCE(32);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(198);
      if (lookahead == '/') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
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
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '.') ADVANCE(69);
      if (lookahead == '/') ADVANCE(76);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(197);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(76);
      if (lookahead == '-' ||
          lookahead == '_') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
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
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(77);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(199);
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
          lookahead != '}') ADVANCE(265);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(210);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(200);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(204);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(211);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(201);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(203);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(209);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(208);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(207);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(124);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(156);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(213);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(215);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(246);
      if (lookahead == 'k') ADVANCE(231);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(263);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(82);
      if (lookahead == 'k') ADVANCE(231);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(263);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(222);
      if (lookahead == 'k') ADVANCE(231);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(263);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(237);
      if (lookahead == 'k') ADVANCE(231);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(263);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(238);
      if (lookahead == 'k') ADVANCE(231);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(263);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'a') ADVANCE(239);
      if (lookahead == 'k') ADVANCE(231);
      if (lookahead == '-' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(263);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'c') ADVANCE(226);
      if (lookahead == 'k') ADVANCE(231);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(263);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'd') ADVANCE(235);
      if (lookahead == 'k') ADVANCE(231);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(263);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(260);
      if (lookahead == 'k') ADVANCE(231);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(263);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(223);
      if (lookahead == 'k') ADVANCE(231);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(263);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(84);
      if (lookahead == 'k') ADVANCE(231);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(263);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(254);
      if (lookahead == 'k') ADVANCE(231);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(263);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(257);
      if (lookahead == 'k') ADVANCE(231);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(263);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(252);
      if (lookahead == 'k') ADVANCE(231);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(263);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(253);
      if (lookahead == 'k') ADVANCE(231);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(263);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'e') ADVANCE(261);
      if (lookahead == 'k') ADVANCE(231);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(263);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(249);
      if (lookahead == 'k') ADVANCE(231);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(263);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'f') ADVANCE(250);
      if (lookahead == 'k') ADVANCE(231);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(263);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'h') ADVANCE(216);
      if (lookahead == 'k') ADVANCE(231);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(263);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'i') ADVANCE(217);
      if (lookahead == 'k') ADVANCE(231);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(263);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(231);
      if (lookahead == 'm') ADVANCE(242);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(263);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(231);
      if (lookahead == 'm') ADVANCE(227);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(263);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(231);
      if (lookahead == 'm') ADVANCE(229);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(263);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(231);
      if (lookahead == 'm') ADVANCE(230);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(263);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(231);
      if (lookahead == 'o') ADVANCE(247);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(263);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(231);
      if (lookahead == 'o') ADVANCE(248);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(263);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(231);
      if (lookahead == 'p') ADVANCE(240);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(263);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(231);
      if (lookahead == 'p') ADVANCE(218);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(263);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(231);
      if (lookahead == 'p') ADVANCE(241);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(263);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(231);
      if (lookahead == 'p') ADVANCE(244);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(263);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(231);
      if (lookahead == 'r') ADVANCE(255);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(263);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(231);
      if (lookahead == 'r') ADVANCE(256);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(263);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(231);
      if (lookahead == 'r') ADVANCE(258);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(263);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(231);
      if (lookahead == 'r') ADVANCE(220);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(263);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(231);
      if (lookahead == 'r') ADVANCE(221);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(263);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(231);
      if (lookahead == 's') ADVANCE(91);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(263);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(231);
      if (lookahead == 's') ADVANCE(85);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(263);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(231);
      if (lookahead == 's') ADVANCE(86);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(263);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(231);
      if (lookahead == 's') ADVANCE(243);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(263);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(231);
      if (lookahead == 's') ADVANCE(228);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(263);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(231);
      if (lookahead == 't') ADVANCE(79);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(263);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(231);
      if (lookahead == 't') ADVANCE(83);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(263);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(231);
      if (lookahead == 't') ADVANCE(251);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(263);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(231);
      if (lookahead == 'u') ADVANCE(245);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(263);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(231);
      if (lookahead == 'y') ADVANCE(232);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(263);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(231);
      if (lookahead == 'y') ADVANCE(233);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(263);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == 'k') ADVANCE(231);
      if (lookahead == '-' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(263);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_at_keyword);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(263);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_plain_value);
      if (lookahead == '/') ADVANCE(77);
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
          lookahead != '}') ADVANCE(265);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 2},
  [2] = {.lex_state = 2, .external_lex_state = 1},
  [3] = {.lex_state = 13},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2, .external_lex_state = 1},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 13},
  [13] = {.lex_state = 13},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2, .external_lex_state = 1},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 13},
  [22] = {.lex_state = 13},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 11},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 14},
  [29] = {.lex_state = 16},
  [30] = {.lex_state = 14},
  [31] = {.lex_state = 17},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 2, .external_lex_state = 1},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 16},
  [37] = {.lex_state = 13},
  [38] = {.lex_state = 11, .external_lex_state = 1},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 2, .external_lex_state = 1},
  [44] = {.lex_state = 2, .external_lex_state = 1},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 13},
  [64] = {.lex_state = 13},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 17},
  [69] = {.lex_state = 16},
  [70] = {.lex_state = 17},
  [71] = {.lex_state = 17},
  [72] = {.lex_state = 17},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 68},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 2, .external_lex_state = 1},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 2, .external_lex_state = 1},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 2, .external_lex_state = 1},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 2, .external_lex_state = 1},
  [94] = {.lex_state = 2, .external_lex_state = 1},
  [95] = {.lex_state = 13},
  [96] = {.lex_state = 11, .external_lex_state = 1},
  [97] = {.lex_state = 2, .external_lex_state = 1},
  [98] = {.lex_state = 2, .external_lex_state = 1},
  [99] = {.lex_state = 2, .external_lex_state = 1},
  [100] = {.lex_state = 2, .external_lex_state = 1},
  [101] = {.lex_state = 2, .external_lex_state = 1},
  [102] = {.lex_state = 2, .external_lex_state = 1},
  [103] = {.lex_state = 2, .external_lex_state = 1},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 6},
  [109] = {.lex_state = 4},
  [110] = {.lex_state = 4},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 2, .external_lex_state = 1},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 17},
  [118] = {.lex_state = 6},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 17},
  [121] = {.lex_state = 17},
  [122] = {.lex_state = 2},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 2},
  [125] = {.lex_state = 2},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 68},
  [128] = {.lex_state = 16},
  [129] = {.lex_state = 5, .external_lex_state = 1},
  [130] = {.lex_state = 2, .external_lex_state = 1},
  [131] = {.lex_state = 6, .external_lex_state = 1},
  [132] = {.lex_state = 30},
  [133] = {.lex_state = 2, .external_lex_state = 1},
  [134] = {.lex_state = 4},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 2},
  [137] = {.lex_state = 2},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 2},
  [140] = {.lex_state = 4},
  [141] = {.lex_state = 2, .external_lex_state = 1},
  [142] = {.lex_state = 2, .external_lex_state = 1},
  [143] = {.lex_state = 2},
  [144] = {.lex_state = 6},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 4},
  [147] = {.lex_state = 4},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 17},
  [150] = {.lex_state = 4},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 4},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 68},
  [155] = {.lex_state = 2},
  [156] = {.lex_state = 68},
  [157] = {.lex_state = 2, .external_lex_state = 1},
  [158] = {.lex_state = 4},
  [159] = {.lex_state = 2, .external_lex_state = 1},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 6},
  [162] = {.lex_state = 2},
  [163] = {.lex_state = 16},
  [164] = {.lex_state = 2},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 4},
  [167] = {.lex_state = 17},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 2, .external_lex_state = 1},
  [170] = {.lex_state = 4},
  [171] = {.lex_state = 2, .external_lex_state = 1},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 4},
  [175] = {.lex_state = 2, .external_lex_state = 1},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 16},
  [178] = {.lex_state = 20},
  [179] = {.lex_state = 20},
  [180] = {.lex_state = 2},
  [181] = {.lex_state = 2},
  [182] = {.lex_state = 2},
  [183] = {.lex_state = 16},
  [184] = {.lex_state = 16},
  [185] = {.lex_state = 16},
  [186] = {.lex_state = 16},
  [187] = {.lex_state = 4},
  [188] = {.lex_state = 2},
  [189] = {.lex_state = 2},
  [190] = {.lex_state = 2},
  [191] = {.lex_state = 2},
  [192] = {.lex_state = 2},
  [193] = {.lex_state = 2},
  [194] = {.lex_state = 2},
  [195] = {.lex_state = 2},
  [196] = {.lex_state = 2},
  [197] = {.lex_state = 16},
  [198] = {.lex_state = 16},
  [199] = {.lex_state = 16},
  [200] = {.lex_state = 2},
  [201] = {.lex_state = 2},
  [202] = {.lex_state = 2},
  [203] = {.lex_state = 2},
  [204] = {.lex_state = 2},
  [205] = {.lex_state = 2},
  [206] = {.lex_state = 16},
  [207] = {.lex_state = 2},
  [208] = {.lex_state = 2},
  [209] = {.lex_state = 2},
  [210] = {.lex_state = 2},
  [211] = {.lex_state = 16},
  [212] = {.lex_state = 5},
  [213] = {.lex_state = 3},
  [214] = {.lex_state = 3},
  [215] = {.lex_state = 6},
  [216] = {.lex_state = 6},
  [217] = {.lex_state = 6},
  [218] = {.lex_state = 6},
  [219] = {.lex_state = 4},
  [220] = {.lex_state = 68},
  [221] = {.lex_state = 6},
  [222] = {.lex_state = 6},
  [223] = {.lex_state = 6},
  [224] = {.lex_state = 68},
  [225] = {.lex_state = 6},
  [226] = {.lex_state = 68},
  [227] = {.lex_state = 6},
  [228] = {.lex_state = 20},
  [229] = {.lex_state = 13},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 16},
  [233] = {.lex_state = 17},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 16},
  [237] = {.lex_state = 2},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 6},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 4},
  [243] = {.lex_state = 16},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 68},
  [247] = {.lex_state = 2},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 4},
  [252] = {.lex_state = 4},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 68},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 16},
  [259] = {.lex_state = 2},
  [260] = {.lex_state = 4},
  [261] = {.lex_state = 16},
  [262] = {.lex_state = 2},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 4},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 13},
  [268] = {.lex_state = 4},
  [269] = {.lex_state = 2},
  [270] = {.lex_state = 2},
  [271] = {.lex_state = 4},
  [272] = {.lex_state = 13},
  [273] = {.lex_state = 4},
  [274] = {.lex_state = 4},
  [275] = {.lex_state = 8},
  [276] = {.lex_state = 4},
  [277] = {.lex_state = 2, .external_lex_state = 1},
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
    [anon_sym_RPAREN] = ACTIONS(68),
    [anon_sym_TILDE] = ACTIONS(68),
    [anon_sym_COLON_COLON] = ACTIONS(68),
    [anon_sym_LBRACE] = ACTIONS(68),
    [anon_sym_LBRACK] = ACTIONS(68),
    [anon_sym_COLON] = ACTIONS(70),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(68),
    [anon_sym_COMMA] = ACTIONS(68),
    [anon_sym_GT] = ACTIONS(68),
    [anon_sym_PLUS] = ACTIONS(68),
    [anon_sym_POUND] = ACTIONS(68),
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
    [sym_integer_value] = STATE(36),
    [sym__value] = STATE(36),
    [sym_parenthesized_value] = STATE(36),
    [sym_binary_expression] = STATE(36),
    [sym_float_value] = STATE(36),
    [sym_call_expression] = STATE(36),
    [sym_color_value] = STATE(36),
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
    [sym_feature_query] = STATE(41),
    [sym__query] = STATE(41),
    [sym_unary_query] = STATE(41),
    [sym_selector_query] = STATE(41),
    [sym_parenthesized_query] = STATE(41),
    [sym_binary_query] = STATE(41),
    [sym_block] = STATE(40),
    [anon_sym_not] = ACTIONS(42),
    [sym_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(3),
    [anon_sym_only] = ACTIONS(42),
    [anon_sym_LPAREN2] = ACTIONS(44),
    [anon_sym_selector] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(94),
    [anon_sym_SEMI] = ACTIONS(96),
  },
  [13] = {
    [sym_feature_query] = STATE(42),
    [sym_unary_query] = STATE(42),
    [sym_selector_query] = STATE(42),
    [sym_parenthesized_query] = STATE(42),
    [sym_binary_query] = STATE(42),
    [sym__query] = STATE(42),
    [anon_sym_not] = ACTIONS(42),
    [anon_sym_LPAREN2] = ACTIONS(44),
    [sym_identifier] = ACTIONS(46),
    [anon_sym_selector] = ACTIONS(48),
    [sym_comment] = ACTIONS(3),
    [anon_sym_only] = ACTIONS(42),
  },
  [14] = {
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(98),
  },
  [15] = {
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(100),
  },
  [16] = {
    [aux_sym_selectors_repeat1] = STATE(55),
    [sym__descendant_operator] = ACTIONS(102),
    [anon_sym_LBRACK] = ACTIONS(104),
    [anon_sym_COLON] = ACTIONS(106),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(108),
    [anon_sym_TILDE] = ACTIONS(110),
    [anon_sym_COMMA] = ACTIONS(112),
    [anon_sym_COLON_COLON] = ACTIONS(114),
    [anon_sym_GT] = ACTIONS(116),
    [anon_sym_LBRACE] = ACTIONS(118),
    [anon_sym_PLUS] = ACTIONS(120),
    [anon_sym_POUND] = ACTIONS(122),
  },
  [17] = {
    [sym_comment] = ACTIONS(3),
    [ts_builtin_sym_end] = ACTIONS(124),
  },
  [18] = {
    [sym_media_statement] = STATE(56),
    [sym_charset_statement] = STATE(56),
    [sym_supports_statement] = STATE(56),
    [sym_at_rule] = STATE(56),
    [sym__selector] = STATE(16),
    [sym_universal_selector] = STATE(16),
    [sym_attribute_selector] = STATE(16),
    [sym_child_selector] = STATE(16),
    [sym_declaration] = STATE(56),
    [sym_import_statement] = STATE(56),
    [sym_pseudo_element_selector] = STATE(16),
    [sym_id_selector] = STATE(16),
    [sym_adjacent_sibling_selector] = STATE(16),
    [sym_namespace_statement] = STATE(56),
    [sym_keyframes_statement] = STATE(56),
    [sym_rule_set] = STATE(56),
    [sym_selectors] = STATE(19),
    [sym_class_selector] = STATE(16),
    [sym_pseudo_class_selector] = STATE(16),
    [sym_descendant_selector] = STATE(16),
    [sym_sibling_selector] = STATE(16),
    [aux_sym_stylesheet_repeat1] = STATE(56),
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
    [ts_builtin_sym_end] = ACTIONS(126),
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
    [sym_block] = STATE(57),
    [anon_sym_LBRACE] = ACTIONS(94),
    [sym_comment] = ACTIONS(3),
  },
  [20] = {
    [sym_integer_value] = STATE(58),
    [sym__value] = STATE(58),
    [sym_parenthesized_value] = STATE(58),
    [sym_binary_expression] = STATE(58),
    [sym_float_value] = STATE(58),
    [sym_call_expression] = STATE(58),
    [sym_color_value] = STATE(58),
    [aux_sym_integer_value_token1] = ACTIONS(128),
    [sym_identifier] = ACTIONS(130),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(132),
    [sym_plain_value] = ACTIONS(134),
    [anon_sym_LPAREN2] = ACTIONS(136),
    [sym_string_value] = ACTIONS(138),
    [anon_sym_POUND] = ACTIONS(140),
  },
  [21] = {
    [sym_feature_query] = STATE(59),
    [sym_parenthesized_query] = STATE(59),
    [sym_binary_query] = STATE(59),
    [sym_unary_query] = STATE(59),
    [sym_selector_query] = STATE(59),
    [sym__query] = STATE(59),
    [anon_sym_not] = ACTIONS(42),
    [sym_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(3),
    [anon_sym_only] = ACTIONS(42),
    [anon_sym_LPAREN2] = ACTIONS(44),
    [anon_sym_selector] = ACTIONS(48),
  },
  [22] = {
    [sym_feature_query] = STATE(61),
    [sym_parenthesized_query] = STATE(61),
    [sym_binary_query] = STATE(61),
    [sym_unary_query] = STATE(61),
    [sym_selector_query] = STATE(61),
    [sym__query] = STATE(61),
    [anon_sym_not] = ACTIONS(42),
    [sym_identifier] = ACTIONS(142),
    [sym_comment] = ACTIONS(3),
    [anon_sym_only] = ACTIONS(42),
    [anon_sym_LPAREN2] = ACTIONS(44),
    [anon_sym_selector] = ACTIONS(48),
  },
  [23] = {
    [anon_sym_or] = ACTIONS(144),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(144),
    [anon_sym_COMMA] = ACTIONS(144),
    [anon_sym_LBRACE] = ACTIONS(144),
    [anon_sym_and] = ACTIONS(144),
    [anon_sym_SEMI] = ACTIONS(144),
  },
  [24] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN2] = ACTIONS(146),
  },
  [25] = {
    [aux_sym_import_statement_repeat1] = STATE(65),
    [sym_block] = STATE(66),
    [anon_sym_COMMA] = ACTIONS(148),
    [anon_sym_or] = ACTIONS(150),
    [anon_sym_LBRACE] = ACTIONS(94),
    [sym_comment] = ACTIONS(3),
    [anon_sym_and] = ACTIONS(150),
  },
  [26] = {
    [sym_arguments] = STATE(68),
    [anon_sym_not] = ACTIONS(152),
    [anon_sym_STAR] = ACTIONS(154),
    [sym_identifier] = ACTIONS(152),
    [anon_sym_LPAREN] = ACTIONS(156),
    [anon_sym_only] = ACTIONS(152),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DASH] = ACTIONS(152),
    [anon_sym_LPAREN2] = ACTIONS(152),
    [anon_sym_selector] = ACTIONS(152),
    [anon_sym_PLUS] = ACTIONS(154),
    [anon_sym_SEMI] = ACTIONS(154),
    [anon_sym_SLASH] = ACTIONS(152),
  },
  [27] = {
    [sym_integer_value] = STATE(69),
    [sym__value] = STATE(69),
    [sym_parenthesized_value] = STATE(69),
    [sym_binary_expression] = STATE(69),
    [sym_float_value] = STATE(69),
    [sym_call_expression] = STATE(69),
    [sym_color_value] = STATE(69),
    [aux_sym_integer_value_token1] = ACTIONS(76),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(80),
    [sym_plain_value] = ACTIONS(158),
    [anon_sym_LPAREN2] = ACTIONS(84),
    [sym_string_value] = ACTIONS(160),
    [anon_sym_POUND] = ACTIONS(88),
  },
  [28] = {
    [anon_sym_not] = ACTIONS(162),
    [anon_sym_STAR] = ACTIONS(164),
    [sym_identifier] = ACTIONS(162),
    [sym_comment] = ACTIONS(3),
    [anon_sym_only] = ACTIONS(162),
    [anon_sym_DASH] = ACTIONS(162),
    [anon_sym_LPAREN2] = ACTIONS(164),
    [anon_sym_selector] = ACTIONS(162),
    [sym_unit] = ACTIONS(166),
    [anon_sym_PLUS] = ACTIONS(164),
    [anon_sym_SEMI] = ACTIONS(164),
    [anon_sym_SLASH] = ACTIONS(162),
  },
  [29] = {
    [sym_comment] = ACTIONS(3),
    [aux_sym_color_value_token1] = ACTIONS(168),
  },
  [30] = {
    [anon_sym_not] = ACTIONS(170),
    [anon_sym_STAR] = ACTIONS(172),
    [sym_identifier] = ACTIONS(170),
    [sym_comment] = ACTIONS(3),
    [anon_sym_only] = ACTIONS(170),
    [anon_sym_DASH] = ACTIONS(170),
    [anon_sym_LPAREN2] = ACTIONS(172),
    [anon_sym_selector] = ACTIONS(170),
    [sym_unit] = ACTIONS(174),
    [anon_sym_PLUS] = ACTIONS(172),
    [anon_sym_SEMI] = ACTIONS(172),
    [anon_sym_SLASH] = ACTIONS(170),
  },
  [31] = {
    [sym_feature_query] = STATE(75),
    [sym_unary_query] = STATE(75),
    [sym_selector_query] = STATE(75),
    [sym_parenthesized_query] = STATE(75),
    [sym_binary_query] = STATE(75),
    [sym__query] = STATE(75),
    [anon_sym_not] = ACTIONS(42),
    [sym_identifier] = ACTIONS(46),
    [anon_sym_STAR] = ACTIONS(176),
    [sym_comment] = ACTIONS(3),
    [anon_sym_only] = ACTIONS(42),
    [anon_sym_DASH] = ACTIONS(178),
    [anon_sym_LPAREN2] = ACTIONS(44),
    [anon_sym_selector] = ACTIONS(48),
    [anon_sym_PLUS] = ACTIONS(176),
    [anon_sym_SLASH] = ACTIONS(178),
    [anon_sym_SEMI] = ACTIONS(180),
  },
  [32] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(182),
  },
  [33] = {
    [sym_arguments] = STATE(68),
    [sym_call_expression] = STATE(77),
    [sym_identifier] = ACTIONS(184),
    [anon_sym_LPAREN] = ACTIONS(156),
    [sym_string_value] = ACTIONS(186),
    [sym_comment] = ACTIONS(3),
  },
  [34] = {
    [sym__descendant_operator] = ACTIONS(188),
    [anon_sym_RPAREN] = ACTIONS(188),
    [anon_sym_TILDE] = ACTIONS(188),
    [anon_sym_COLON_COLON] = ACTIONS(188),
    [anon_sym_LBRACE] = ACTIONS(188),
    [anon_sym_LBRACK] = ACTIONS(188),
    [anon_sym_COLON] = ACTIONS(190),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(188),
    [anon_sym_COMMA] = ACTIONS(188),
    [anon_sym_GT] = ACTIONS(188),
    [anon_sym_PLUS] = ACTIONS(188),
    [anon_sym_POUND] = ACTIONS(188),
  },
  [35] = {
    [sym_keyframe_block_list] = STATE(80),
    [anon_sym_LBRACE] = ACTIONS(192),
    [sym_comment] = ACTIONS(3),
  },
  [36] = {
    [anon_sym_DASH] = ACTIONS(194),
    [anon_sym_STAR] = ACTIONS(194),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PLUS] = ACTIONS(194),
    [anon_sym_SLASH] = ACTIONS(196),
    [anon_sym_SEMI] = ACTIONS(198),
  },
  [37] = {
    [anon_sym_EQ] = ACTIONS(200),
    [anon_sym_DOLLAR_EQ] = ACTIONS(200),
    [sym_comment] = ACTIONS(3),
    [anon_sym_TILDE_EQ] = ACTIONS(200),
    [anon_sym_RBRACK] = ACTIONS(202),
    [anon_sym_CARET_EQ] = ACTIONS(200),
    [anon_sym_STAR_EQ] = ACTIONS(200),
    [anon_sym_PIPE_EQ] = ACTIONS(200),
  },
  [38] = {
    [sym_pseudo_class_arguments] = STATE(85),
    [sym__descendant_operator] = ACTIONS(204),
    [anon_sym_RPAREN] = ACTIONS(204),
    [anon_sym_TILDE] = ACTIONS(204),
    [anon_sym_COLON_COLON] = ACTIONS(204),
    [anon_sym_LBRACE] = ACTIONS(204),
    [anon_sym_LPAREN] = ACTIONS(206),
    [anon_sym_LBRACK] = ACTIONS(204),
    [anon_sym_COLON] = ACTIONS(208),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(204),
    [anon_sym_COMMA] = ACTIONS(204),
    [anon_sym_GT] = ACTIONS(204),
    [anon_sym_PLUS] = ACTIONS(204),
    [anon_sym_POUND] = ACTIONS(204),
  },
  [39] = {
    [sym_media_statement] = STATE(88),
    [sym_charset_statement] = STATE(88),
    [sym_supports_statement] = STATE(88),
    [sym_at_rule] = STATE(88),
    [sym__selector] = STATE(16),
    [sym_universal_selector] = STATE(16),
    [sym_attribute_selector] = STATE(16),
    [sym_child_selector] = STATE(16),
    [sym_declaration] = STATE(88),
    [aux_sym_block_repeat1] = STATE(88),
    [sym_last_declaration] = STATE(89),
    [sym_import_statement] = STATE(88),
    [sym_pseudo_element_selector] = STATE(16),
    [sym_id_selector] = STATE(16),
    [sym_adjacent_sibling_selector] = STATE(16),
    [sym_namespace_statement] = STATE(88),
    [sym_keyframes_statement] = STATE(88),
    [sym_rule_set] = STATE(88),
    [sym_selectors] = STATE(230),
    [sym_class_selector] = STATE(16),
    [sym_pseudo_class_selector] = STATE(16),
    [sym_descendant_selector] = STATE(16),
    [sym_sibling_selector] = STATE(16),
    [anon_sym_RBRACE] = ACTIONS(210),
    [sym_identifier] = ACTIONS(212),
    [anon_sym_ATmedia] = ACTIONS(214),
    [anon_sym_ATimport] = ACTIONS(216),
    [anon_sym_ATnamespace] = ACTIONS(218),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_COLON_COLON] = ACTIONS(15),
    [sym_string_value] = ACTIONS(17),
    [sym_nesting_selector] = ACTIONS(17),
    [aux_sym_keyframes_statement_token1] = ACTIONS(220),
    [anon_sym_ATcharset] = ACTIONS(222),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [sym_at_keyword] = ACTIONS(224),
    [anon_sym_ATsupports] = ACTIONS(226),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_ATkeyframes] = ACTIONS(220),
    [anon_sym_POUND] = ACTIONS(35),
  },
  [40] = {
    [anon_sym_STAR] = ACTIONS(228),
    [anon_sym_ATmedia] = ACTIONS(230),
    [anon_sym_ATimport] = ACTIONS(230),
    [anon_sym_ATnamespace] = ACTIONS(230),
    [sym_identifier] = ACTIONS(228),
    [anon_sym_COLON_COLON] = ACTIONS(228),
    [sym_string_value] = ACTIONS(228),
    [sym_nesting_selector] = ACTIONS(228),
    [aux_sym_keyframes_statement_token1] = ACTIONS(230),
    [anon_sym_ATcharset] = ACTIONS(230),
    [ts_builtin_sym_end] = ACTIONS(228),
    [anon_sym_LBRACK] = ACTIONS(228),
    [anon_sym_COLON] = ACTIONS(230),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(228),
    [anon_sym_ATsupports] = ACTIONS(230),
    [sym_at_keyword] = ACTIONS(230),
    [anon_sym_ATkeyframes] = ACTIONS(230),
    [anon_sym_POUND] = ACTIONS(228),
  },
  [41] = {
    [aux_sym_import_statement_repeat1] = STATE(91),
    [sym_block] = STATE(90),
    [anon_sym_COMMA] = ACTIONS(148),
    [anon_sym_or] = ACTIONS(150),
    [anon_sym_LBRACE] = ACTIONS(94),
    [sym_comment] = ACTIONS(3),
    [anon_sym_and] = ACTIONS(150),
    [anon_sym_SEMI] = ACTIONS(232),
  },
  [42] = {
    [sym_block] = STATE(92),
    [anon_sym_or] = ACTIONS(150),
    [anon_sym_LBRACE] = ACTIONS(94),
    [sym_comment] = ACTIONS(3),
    [anon_sym_and] = ACTIONS(150),
  },
  [43] = {
    [sym__descendant_operator] = ACTIONS(234),
    [anon_sym_RPAREN] = ACTIONS(234),
    [anon_sym_TILDE] = ACTIONS(234),
    [anon_sym_COLON_COLON] = ACTIONS(234),
    [anon_sym_LBRACE] = ACTIONS(234),
    [anon_sym_LBRACK] = ACTIONS(234),
    [anon_sym_COLON] = ACTIONS(236),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(234),
    [anon_sym_COMMA] = ACTIONS(234),
    [anon_sym_GT] = ACTIONS(234),
    [anon_sym_PLUS] = ACTIONS(234),
    [anon_sym_POUND] = ACTIONS(234),
  },
  [44] = {
    [sym__descendant_operator] = ACTIONS(238),
    [anon_sym_RPAREN] = ACTIONS(238),
    [anon_sym_TILDE] = ACTIONS(238),
    [anon_sym_COLON_COLON] = ACTIONS(238),
    [anon_sym_LBRACE] = ACTIONS(238),
    [anon_sym_LBRACK] = ACTIONS(238),
    [anon_sym_COLON] = ACTIONS(240),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(238),
    [anon_sym_COMMA] = ACTIONS(238),
    [anon_sym_GT] = ACTIONS(238),
    [anon_sym_PLUS] = ACTIONS(238),
    [anon_sym_POUND] = ACTIONS(238),
  },
  [45] = {
    [sym__selector] = STATE(94),
    [sym_universal_selector] = STATE(94),
    [sym_attribute_selector] = STATE(94),
    [sym_child_selector] = STATE(94),
    [sym_pseudo_element_selector] = STATE(94),
    [sym_id_selector] = STATE(94),
    [sym_adjacent_sibling_selector] = STATE(94),
    [sym_class_selector] = STATE(94),
    [sym_pseudo_class_selector] = STATE(94),
    [sym_descendant_selector] = STATE(94),
    [sym_sibling_selector] = STATE(94),
    [sym_identifier] = ACTIONS(242),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_COLON_COLON] = ACTIONS(15),
    [sym_string_value] = ACTIONS(244),
    [sym_nesting_selector] = ACTIONS(244),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(35),
  },
  [46] = {
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(246),
  },
  [47] = {
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(248),
  },
  [48] = {
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(250),
  },
  [49] = {
    [sym__selector] = STATE(98),
    [sym_universal_selector] = STATE(98),
    [sym_attribute_selector] = STATE(98),
    [sym_child_selector] = STATE(98),
    [sym_pseudo_element_selector] = STATE(98),
    [sym_id_selector] = STATE(98),
    [sym_adjacent_sibling_selector] = STATE(98),
    [sym_class_selector] = STATE(98),
    [sym_pseudo_class_selector] = STATE(98),
    [sym_descendant_selector] = STATE(98),
    [sym_sibling_selector] = STATE(98),
    [sym_identifier] = ACTIONS(242),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_COLON_COLON] = ACTIONS(15),
    [sym_string_value] = ACTIONS(252),
    [sym_nesting_selector] = ACTIONS(252),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(35),
  },
  [50] = {
    [sym_pseudo_element_selector] = STATE(99),
    [sym_id_selector] = STATE(99),
    [sym_adjacent_sibling_selector] = STATE(99),
    [sym__selector] = STATE(99),
    [sym_universal_selector] = STATE(99),
    [sym_attribute_selector] = STATE(99),
    [sym_child_selector] = STATE(99),
    [sym_class_selector] = STATE(99),
    [sym_pseudo_class_selector] = STATE(99),
    [sym_descendant_selector] = STATE(99),
    [sym_sibling_selector] = STATE(99),
    [sym_identifier] = ACTIONS(242),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(25),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_COLON_COLON] = ACTIONS(15),
    [sym_string_value] = ACTIONS(254),
    [sym_nesting_selector] = ACTIONS(254),
    [anon_sym_POUND] = ACTIONS(35),
  },
  [51] = {
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(256),
  },
  [52] = {
    [sym__selector] = STATE(101),
    [sym_universal_selector] = STATE(101),
    [sym_attribute_selector] = STATE(101),
    [sym_child_selector] = STATE(101),
    [sym_pseudo_element_selector] = STATE(101),
    [sym_id_selector] = STATE(101),
    [sym_adjacent_sibling_selector] = STATE(101),
    [sym_class_selector] = STATE(101),
    [sym_pseudo_class_selector] = STATE(101),
    [sym_descendant_selector] = STATE(101),
    [sym_sibling_selector] = STATE(101),
    [sym_identifier] = ACTIONS(242),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_COLON_COLON] = ACTIONS(15),
    [sym_string_value] = ACTIONS(258),
    [sym_nesting_selector] = ACTIONS(258),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(35),
  },
  [53] = {
    [sym__selector] = STATE(102),
    [sym_universal_selector] = STATE(102),
    [sym_attribute_selector] = STATE(102),
    [sym_child_selector] = STATE(102),
    [sym_pseudo_element_selector] = STATE(102),
    [sym_id_selector] = STATE(102),
    [sym_adjacent_sibling_selector] = STATE(102),
    [sym_class_selector] = STATE(102),
    [sym_pseudo_class_selector] = STATE(102),
    [sym_descendant_selector] = STATE(102),
    [sym_sibling_selector] = STATE(102),
    [sym_identifier] = ACTIONS(242),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_COLON_COLON] = ACTIONS(15),
    [sym_string_value] = ACTIONS(260),
    [sym_nesting_selector] = ACTIONS(260),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(35),
  },
  [54] = {
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(262),
  },
  [55] = {
    [aux_sym_selectors_repeat1] = STATE(104),
    [anon_sym_LBRACE] = ACTIONS(264),
    [anon_sym_COMMA] = ACTIONS(112),
    [sym_comment] = ACTIONS(3),
  },
  [56] = {
    [sym_media_statement] = STATE(56),
    [sym_charset_statement] = STATE(56),
    [sym_supports_statement] = STATE(56),
    [sym_at_rule] = STATE(56),
    [sym__selector] = STATE(16),
    [sym_universal_selector] = STATE(16),
    [sym_attribute_selector] = STATE(16),
    [sym_child_selector] = STATE(16),
    [sym_declaration] = STATE(56),
    [sym_import_statement] = STATE(56),
    [sym_pseudo_element_selector] = STATE(16),
    [sym_id_selector] = STATE(16),
    [sym_adjacent_sibling_selector] = STATE(16),
    [sym_namespace_statement] = STATE(56),
    [sym_keyframes_statement] = STATE(56),
    [sym_rule_set] = STATE(56),
    [sym_selectors] = STATE(19),
    [sym_class_selector] = STATE(16),
    [sym_pseudo_class_selector] = STATE(16),
    [sym_descendant_selector] = STATE(16),
    [sym_sibling_selector] = STATE(16),
    [aux_sym_stylesheet_repeat1] = STATE(56),
    [anon_sym_STAR] = ACTIONS(266),
    [anon_sym_ATmedia] = ACTIONS(269),
    [anon_sym_ATimport] = ACTIONS(272),
    [anon_sym_ATnamespace] = ACTIONS(275),
    [sym_identifier] = ACTIONS(278),
    [anon_sym_COLON_COLON] = ACTIONS(281),
    [sym_string_value] = ACTIONS(284),
    [sym_nesting_selector] = ACTIONS(284),
    [aux_sym_keyframes_statement_token1] = ACTIONS(287),
    [anon_sym_ATcharset] = ACTIONS(290),
    [ts_builtin_sym_end] = ACTIONS(293),
    [anon_sym_LBRACK] = ACTIONS(295),
    [anon_sym_COLON] = ACTIONS(298),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(301),
    [anon_sym_ATsupports] = ACTIONS(304),
    [sym_at_keyword] = ACTIONS(307),
    [anon_sym_ATkeyframes] = ACTIONS(287),
    [anon_sym_POUND] = ACTIONS(310),
  },
  [57] = {
    [anon_sym_STAR] = ACTIONS(313),
    [anon_sym_ATmedia] = ACTIONS(315),
    [anon_sym_ATimport] = ACTIONS(315),
    [anon_sym_ATnamespace] = ACTIONS(315),
    [sym_identifier] = ACTIONS(313),
    [anon_sym_COLON_COLON] = ACTIONS(313),
    [sym_string_value] = ACTIONS(313),
    [sym_nesting_selector] = ACTIONS(313),
    [aux_sym_keyframes_statement_token1] = ACTIONS(315),
    [anon_sym_ATcharset] = ACTIONS(315),
    [ts_builtin_sym_end] = ACTIONS(313),
    [anon_sym_LBRACK] = ACTIONS(313),
    [anon_sym_COLON] = ACTIONS(315),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(313),
    [anon_sym_ATsupports] = ACTIONS(315),
    [sym_at_keyword] = ACTIONS(315),
    [anon_sym_ATkeyframes] = ACTIONS(315),
    [anon_sym_POUND] = ACTIONS(313),
  },
  [58] = {
    [sym__value] = STATE(108),
    [sym_parenthesized_value] = STATE(108),
    [sym_binary_expression] = STATE(108),
    [sym_color_value] = STATE(108),
    [sym_integer_value] = STATE(108),
    [aux_sym_declaration_repeat1] = STATE(109),
    [sym_float_value] = STATE(108),
    [sym_call_expression] = STATE(108),
    [aux_sym_integer_value_token1] = ACTIONS(128),
    [sym_identifier] = ACTIONS(130),
    [anon_sym_STAR] = ACTIONS(317),
    [sym_important] = ACTIONS(319),
    [sym_plain_value] = ACTIONS(321),
    [sym_string_value] = ACTIONS(323),
    [anon_sym_SLASH] = ACTIONS(325),
    [anon_sym_SEMI] = ACTIONS(327),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(132),
    [anon_sym_DASH] = ACTIONS(325),
    [anon_sym_LPAREN2] = ACTIONS(136),
    [anon_sym_COMMA] = ACTIONS(329),
    [anon_sym_PLUS] = ACTIONS(325),
    [anon_sym_POUND] = ACTIONS(140),
  },
  [59] = {
    [anon_sym_or] = ACTIONS(331),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(331),
    [anon_sym_COMMA] = ACTIONS(331),
    [anon_sym_LBRACE] = ACTIONS(331),
    [anon_sym_and] = ACTIONS(331),
    [anon_sym_SEMI] = ACTIONS(331),
  },
  [60] = {
    [anon_sym_or] = ACTIONS(144),
    [anon_sym_COLON] = ACTIONS(333),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(144),
    [anon_sym_and] = ACTIONS(144),
  },
  [61] = {
    [anon_sym_or] = ACTIONS(150),
    [sym_comment] = ACTIONS(3),
    [anon_sym_and] = ACTIONS(150),
    [anon_sym_RPAREN] = ACTIONS(335),
  },
  [62] = {
    [sym__selector] = STATE(112),
    [sym_universal_selector] = STATE(112),
    [sym_attribute_selector] = STATE(112),
    [sym_child_selector] = STATE(112),
    [sym_pseudo_element_selector] = STATE(112),
    [sym_id_selector] = STATE(112),
    [sym_adjacent_sibling_selector] = STATE(112),
    [sym_class_selector] = STATE(112),
    [sym_pseudo_class_selector] = STATE(112),
    [sym_descendant_selector] = STATE(112),
    [sym_sibling_selector] = STATE(112),
    [sym_identifier] = ACTIONS(242),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_COLON_COLON] = ACTIONS(15),
    [sym_string_value] = ACTIONS(337),
    [sym_nesting_selector] = ACTIONS(337),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_POUND] = ACTIONS(35),
  },
  [63] = {
    [sym_feature_query] = STATE(113),
    [sym_parenthesized_query] = STATE(113),
    [sym_binary_query] = STATE(113),
    [sym_unary_query] = STATE(113),
    [sym_selector_query] = STATE(113),
    [sym__query] = STATE(113),
    [anon_sym_not] = ACTIONS(42),
    [sym_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(3),
    [anon_sym_only] = ACTIONS(42),
    [anon_sym_LPAREN2] = ACTIONS(44),
    [anon_sym_selector] = ACTIONS(48),
  },
  [64] = {
    [sym_feature_query] = STATE(114),
    [sym_parenthesized_query] = STATE(114),
    [sym_binary_query] = STATE(114),
    [sym_unary_query] = STATE(114),
    [sym_selector_query] = STATE(114),
    [sym__query] = STATE(114),
    [anon_sym_not] = ACTIONS(42),
    [sym_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(3),
    [anon_sym_only] = ACTIONS(42),
    [anon_sym_LPAREN2] = ACTIONS(44),
    [anon_sym_selector] = ACTIONS(48),
  },
  [65] = {
    [aux_sym_import_statement_repeat1] = STATE(115),
    [sym_block] = STATE(116),
    [anon_sym_LBRACE] = ACTIONS(94),
    [anon_sym_COMMA] = ACTIONS(148),
    [sym_comment] = ACTIONS(3),
  },
  [66] = {
    [anon_sym_STAR] = ACTIONS(339),
    [anon_sym_ATmedia] = ACTIONS(341),
    [anon_sym_ATimport] = ACTIONS(341),
    [anon_sym_ATnamespace] = ACTIONS(341),
    [sym_identifier] = ACTIONS(339),
    [anon_sym_COLON_COLON] = ACTIONS(339),
    [sym_string_value] = ACTIONS(339),
    [sym_nesting_selector] = ACTIONS(339),
    [aux_sym_keyframes_statement_token1] = ACTIONS(341),
    [anon_sym_ATcharset] = ACTIONS(341),
    [ts_builtin_sym_end] = ACTIONS(339),
    [anon_sym_LBRACK] = ACTIONS(339),
    [anon_sym_COLON] = ACTIONS(341),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(339),
    [anon_sym_ATsupports] = ACTIONS(341),
    [sym_at_keyword] = ACTIONS(341),
    [anon_sym_ATkeyframes] = ACTIONS(341),
    [anon_sym_POUND] = ACTIONS(339),
  },
  [67] = {
    [sym__value] = STATE(118),
    [sym_parenthesized_value] = STATE(118),
    [sym_binary_expression] = STATE(118),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(119),
    [sym_color_value] = STATE(118),
    [sym_integer_value] = STATE(118),
    [sym_float_value] = STATE(118),
    [sym_call_expression] = STATE(118),
    [aux_sym_integer_value_token1] = ACTIONS(128),
    [sym_identifier] = ACTIONS(130),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(132),
    [anon_sym_RPAREN] = ACTIONS(343),
    [sym_plain_value] = ACTIONS(345),
    [anon_sym_LPAREN2] = ACTIONS(136),
    [sym_string_value] = ACTIONS(347),
    [anon_sym_POUND] = ACTIONS(140),
  },
  [68] = {
    [anon_sym_not] = ACTIONS(349),
    [anon_sym_STAR] = ACTIONS(351),
    [sym_identifier] = ACTIONS(349),
    [sym_comment] = ACTIONS(3),
    [anon_sym_only] = ACTIONS(349),
    [anon_sym_DASH] = ACTIONS(349),
    [anon_sym_LPAREN2] = ACTIONS(351),
    [anon_sym_selector] = ACTIONS(349),
    [anon_sym_PLUS] = ACTIONS(351),
    [anon_sym_SEMI] = ACTIONS(351),
    [anon_sym_SLASH] = ACTIONS(349),
  },
  [69] = {
    [anon_sym_DASH] = ACTIONS(194),
    [anon_sym_STAR] = ACTIONS(194),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PLUS] = ACTIONS(194),
    [anon_sym_SLASH] = ACTIONS(196),
    [anon_sym_RPAREN] = ACTIONS(353),
  },
  [70] = {
    [anon_sym_not] = ACTIONS(355),
    [anon_sym_STAR] = ACTIONS(357),
    [sym_identifier] = ACTIONS(355),
    [sym_comment] = ACTIONS(3),
    [anon_sym_only] = ACTIONS(355),
    [anon_sym_DASH] = ACTIONS(355),
    [anon_sym_LPAREN2] = ACTIONS(357),
    [anon_sym_selector] = ACTIONS(355),
    [anon_sym_LBRACE] = ACTIONS(357),
    [anon_sym_PLUS] = ACTIONS(357),
    [anon_sym_SEMI] = ACTIONS(357),
    [anon_sym_SLASH] = ACTIONS(355),
  },
  [71] = {
    [anon_sym_not] = ACTIONS(359),
    [anon_sym_STAR] = ACTIONS(361),
    [sym_identifier] = ACTIONS(359),
    [sym_comment] = ACTIONS(3),
    [anon_sym_only] = ACTIONS(359),
    [anon_sym_DASH] = ACTIONS(359),
    [anon_sym_LPAREN2] = ACTIONS(361),
    [anon_sym_selector] = ACTIONS(359),
    [anon_sym_PLUS] = ACTIONS(361),
    [anon_sym_SEMI] = ACTIONS(361),
    [anon_sym_SLASH] = ACTIONS(359),
  },
  [72] = {
    [anon_sym_not] = ACTIONS(363),
    [anon_sym_STAR] = ACTIONS(365),
    [sym_identifier] = ACTIONS(363),
    [sym_comment] = ACTIONS(3),
    [anon_sym_only] = ACTIONS(363),
    [anon_sym_DASH] = ACTIONS(363),
    [anon_sym_LPAREN2] = ACTIONS(365),
    [anon_sym_selector] = ACTIONS(363),
    [anon_sym_PLUS] = ACTIONS(365),
    [anon_sym_SEMI] = ACTIONS(365),
    [anon_sym_SLASH] = ACTIONS(363),
  },
  [73] = {
    [sym_integer_value] = STATE(121),
    [sym__value] = STATE(121),
    [sym_parenthesized_value] = STATE(121),
    [sym_binary_expression] = STATE(121),
    [sym_float_value] = STATE(121),
    [sym_call_expression] = STATE(121),
    [sym_color_value] = STATE(121),
    [aux_sym_integer_value_token1] = ACTIONS(50),
    [sym_identifier] = ACTIONS(52),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(54),
    [sym_plain_value] = ACTIONS(367),
    [anon_sym_LPAREN2] = ACTIONS(58),
    [sym_string_value] = ACTIONS(369),
    [anon_sym_POUND] = ACTIONS(62),
  },
  [74] = {
    [anon_sym_STAR] = ACTIONS(371),
    [anon_sym_ATmedia] = ACTIONS(373),
    [anon_sym_ATimport] = ACTIONS(373),
    [anon_sym_ATnamespace] = ACTIONS(373),
    [sym_identifier] = ACTIONS(371),
    [anon_sym_COLON_COLON] = ACTIONS(371),
    [sym_string_value] = ACTIONS(371),
    [sym_nesting_selector] = ACTIONS(371),
    [aux_sym_keyframes_statement_token1] = ACTIONS(373),
    [anon_sym_ATcharset] = ACTIONS(373),
    [ts_builtin_sym_end] = ACTIONS(371),
    [anon_sym_LBRACK] = ACTIONS(371),
    [anon_sym_COLON] = ACTIONS(373),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(371),
    [anon_sym_ATsupports] = ACTIONS(373),
    [sym_at_keyword] = ACTIONS(373),
    [anon_sym_ATkeyframes] = ACTIONS(373),
    [anon_sym_POUND] = ACTIONS(371),
  },
  [75] = {
    [aux_sym_import_statement_repeat1] = STATE(123),
    [anon_sym_COMMA] = ACTIONS(148),
    [anon_sym_or] = ACTIONS(150),
    [sym_comment] = ACTIONS(3),
    [anon_sym_and] = ACTIONS(150),
    [anon_sym_SEMI] = ACTIONS(375),
  },
  [76] = {
    [anon_sym_STAR] = ACTIONS(377),
    [anon_sym_ATmedia] = ACTIONS(379),
    [anon_sym_ATimport] = ACTIONS(379),
    [anon_sym_ATnamespace] = ACTIONS(379),
    [sym_identifier] = ACTIONS(377),
    [anon_sym_COLON_COLON] = ACTIONS(377),
    [sym_string_value] = ACTIONS(377),
    [sym_nesting_selector] = ACTIONS(377),
    [aux_sym_keyframes_statement_token1] = ACTIONS(379),
    [anon_sym_ATcharset] = ACTIONS(379),
    [ts_builtin_sym_end] = ACTIONS(377),
    [anon_sym_LBRACK] = ACTIONS(377),
    [anon_sym_COLON] = ACTIONS(379),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(377),
    [anon_sym_ATsupports] = ACTIONS(379),
    [sym_at_keyword] = ACTIONS(379),
    [anon_sym_ATkeyframes] = ACTIONS(379),
    [anon_sym_POUND] = ACTIONS(377),
  },
  [77] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(381),
  },
  [78] = {
    [sym_arguments] = STATE(68),
    [sym_comment] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(156),
  },
  [79] = {
    [sym_integer_value] = STATE(126),
    [sym_keyframe_block] = STATE(127),
    [aux_sym_keyframe_block_list_repeat1] = STATE(127),
    [aux_sym_integer_value_token1] = ACTIONS(383),
    [anon_sym_RBRACE] = ACTIONS(385),
    [sym_to] = ACTIONS(387),
    [sym_comment] = ACTIONS(3),
    [sym_from] = ACTIONS(387),
  },
  [80] = {
    [anon_sym_STAR] = ACTIONS(389),
    [anon_sym_ATmedia] = ACTIONS(391),
    [anon_sym_ATimport] = ACTIONS(391),
    [anon_sym_ATnamespace] = ACTIONS(391),
    [sym_identifier] = ACTIONS(389),
    [anon_sym_COLON_COLON] = ACTIONS(389),
    [sym_string_value] = ACTIONS(389),
    [sym_nesting_selector] = ACTIONS(389),
    [aux_sym_keyframes_statement_token1] = ACTIONS(391),
    [anon_sym_ATcharset] = ACTIONS(391),
    [ts_builtin_sym_end] = ACTIONS(389),
    [anon_sym_LBRACK] = ACTIONS(389),
    [anon_sym_COLON] = ACTIONS(391),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(389),
    [anon_sym_ATsupports] = ACTIONS(391),
    [sym_at_keyword] = ACTIONS(391),
    [anon_sym_ATkeyframes] = ACTIONS(391),
    [anon_sym_POUND] = ACTIONS(389),
  },
  [81] = {
    [anon_sym_STAR] = ACTIONS(393),
    [anon_sym_ATmedia] = ACTIONS(395),
    [anon_sym_ATimport] = ACTIONS(395),
    [anon_sym_ATnamespace] = ACTIONS(395),
    [sym_identifier] = ACTIONS(393),
    [anon_sym_COLON_COLON] = ACTIONS(393),
    [sym_string_value] = ACTIONS(393),
    [sym_nesting_selector] = ACTIONS(393),
    [aux_sym_keyframes_statement_token1] = ACTIONS(395),
    [anon_sym_ATcharset] = ACTIONS(395),
    [ts_builtin_sym_end] = ACTIONS(393),
    [anon_sym_LBRACK] = ACTIONS(393),
    [anon_sym_COLON] = ACTIONS(395),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(393),
    [anon_sym_ATsupports] = ACTIONS(395),
    [sym_at_keyword] = ACTIONS(395),
    [anon_sym_ATkeyframes] = ACTIONS(395),
    [anon_sym_POUND] = ACTIONS(393),
  },
  [82] = {
    [sym__value] = STATE(128),
    [sym_parenthesized_value] = STATE(128),
    [sym_binary_expression] = STATE(128),
    [sym_color_value] = STATE(128),
    [sym_integer_value] = STATE(128),
    [sym_float_value] = STATE(128),
    [sym_call_expression] = STATE(128),
    [aux_sym_integer_value_token1] = ACTIONS(76),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(80),
    [sym_plain_value] = ACTIONS(397),
    [anon_sym_LPAREN2] = ACTIONS(84),
    [sym_string_value] = ACTIONS(399),
    [anon_sym_POUND] = ACTIONS(88),
  },
  [83] = {
    [sym__descendant_operator] = ACTIONS(401),
    [anon_sym_RPAREN] = ACTIONS(401),
    [anon_sym_TILDE] = ACTIONS(401),
    [anon_sym_COLON_COLON] = ACTIONS(401),
    [anon_sym_LBRACE] = ACTIONS(401),
    [anon_sym_LBRACK] = ACTIONS(401),
    [anon_sym_COLON] = ACTIONS(403),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(401),
    [anon_sym_COMMA] = ACTIONS(401),
    [anon_sym_GT] = ACTIONS(401),
    [anon_sym_PLUS] = ACTIONS(401),
    [anon_sym_POUND] = ACTIONS(401),
  },
  [84] = {
    [sym__selector] = STATE(133),
    [sym_universal_selector] = STATE(133),
    [sym_attribute_selector] = STATE(133),
    [sym_child_selector] = STATE(133),
    [sym_float_value] = STATE(118),
    [sym_call_expression] = STATE(118),
    [sym_class_selector] = STATE(133),
    [sym_pseudo_class_selector] = STATE(133),
    [sym_descendant_selector] = STATE(133),
    [sym_sibling_selector] = STATE(133),
    [sym__value] = STATE(118),
    [sym_parenthesized_value] = STATE(118),
    [sym_binary_expression] = STATE(118),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(134),
    [sym_pseudo_element_selector] = STATE(133),
    [sym_id_selector] = STATE(133),
    [sym_adjacent_sibling_selector] = STATE(133),
    [sym_color_value] = STATE(118),
    [sym_integer_value] = STATE(118),
    [aux_sym_integer_value_token1] = ACTIONS(128),
    [sym_identifier] = ACTIONS(405),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_RPAREN] = ACTIONS(407),
    [anon_sym_COLON_COLON] = ACTIONS(15),
    [sym_plain_value] = ACTIONS(345),
    [sym_string_value] = ACTIONS(409),
    [sym_nesting_selector] = ACTIONS(411),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(132),
    [anon_sym_DOT] = ACTIONS(413),
    [anon_sym_LPAREN2] = ACTIONS(136),
    [anon_sym_POUND] = ACTIONS(415),
  },
  [85] = {
    [sym__descendant_operator] = ACTIONS(417),
    [anon_sym_RPAREN] = ACTIONS(417),
    [anon_sym_TILDE] = ACTIONS(417),
    [anon_sym_COLON_COLON] = ACTIONS(417),
    [anon_sym_LBRACE] = ACTIONS(417),
    [anon_sym_LBRACK] = ACTIONS(417),
    [anon_sym_COLON] = ACTIONS(419),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(417),
    [anon_sym_COMMA] = ACTIONS(417),
    [anon_sym_GT] = ACTIONS(417),
    [anon_sym_PLUS] = ACTIONS(417),
    [anon_sym_POUND] = ACTIONS(417),
  },
  [86] = {
    [anon_sym_STAR] = ACTIONS(421),
    [anon_sym_ATmedia] = ACTIONS(423),
    [anon_sym_ATimport] = ACTIONS(423),
    [anon_sym_ATnamespace] = ACTIONS(423),
    [sym_identifier] = ACTIONS(421),
    [anon_sym_COLON_COLON] = ACTIONS(421),
    [sym_string_value] = ACTIONS(421),
    [sym_nesting_selector] = ACTIONS(421),
    [aux_sym_keyframes_statement_token1] = ACTIONS(423),
    [anon_sym_ATcharset] = ACTIONS(423),
    [ts_builtin_sym_end] = ACTIONS(421),
    [anon_sym_LBRACK] = ACTIONS(421),
    [anon_sym_COLON] = ACTIONS(423),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(421),
    [anon_sym_ATsupports] = ACTIONS(423),
    [sym_at_keyword] = ACTIONS(423),
    [anon_sym_ATkeyframes] = ACTIONS(423),
    [anon_sym_POUND] = ACTIONS(421),
  },
  [87] = {
    [sym__descendant_operator] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(425),
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
  [88] = {
    [sym_media_statement] = STATE(137),
    [sym_charset_statement] = STATE(137),
    [sym_supports_statement] = STATE(137),
    [sym_at_rule] = STATE(137),
    [sym__selector] = STATE(16),
    [sym_universal_selector] = STATE(16),
    [sym_attribute_selector] = STATE(16),
    [sym_child_selector] = STATE(16),
    [sym_declaration] = STATE(137),
    [aux_sym_block_repeat1] = STATE(137),
    [sym_last_declaration] = STATE(138),
    [sym_import_statement] = STATE(137),
    [sym_pseudo_element_selector] = STATE(16),
    [sym_id_selector] = STATE(16),
    [sym_adjacent_sibling_selector] = STATE(16),
    [sym_namespace_statement] = STATE(137),
    [sym_keyframes_statement] = STATE(137),
    [sym_rule_set] = STATE(137),
    [sym_selectors] = STATE(230),
    [sym_class_selector] = STATE(16),
    [sym_pseudo_class_selector] = STATE(16),
    [sym_descendant_selector] = STATE(16),
    [sym_sibling_selector] = STATE(16),
    [anon_sym_RBRACE] = ACTIONS(427),
    [sym_identifier] = ACTIONS(212),
    [anon_sym_ATmedia] = ACTIONS(214),
    [anon_sym_ATimport] = ACTIONS(216),
    [anon_sym_ATnamespace] = ACTIONS(218),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_COLON_COLON] = ACTIONS(15),
    [sym_string_value] = ACTIONS(17),
    [sym_nesting_selector] = ACTIONS(17),
    [aux_sym_keyframes_statement_token1] = ACTIONS(220),
    [anon_sym_ATcharset] = ACTIONS(222),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [sym_at_keyword] = ACTIONS(224),
    [anon_sym_ATsupports] = ACTIONS(226),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_ATkeyframes] = ACTIONS(220),
    [anon_sym_POUND] = ACTIONS(35),
  },
  [89] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(427),
  },
  [90] = {
    [anon_sym_STAR] = ACTIONS(429),
    [anon_sym_ATmedia] = ACTIONS(431),
    [anon_sym_ATimport] = ACTIONS(431),
    [anon_sym_ATnamespace] = ACTIONS(431),
    [sym_identifier] = ACTIONS(429),
    [anon_sym_COLON_COLON] = ACTIONS(429),
    [sym_string_value] = ACTIONS(429),
    [sym_nesting_selector] = ACTIONS(429),
    [aux_sym_keyframes_statement_token1] = ACTIONS(431),
    [anon_sym_ATcharset] = ACTIONS(431),
    [ts_builtin_sym_end] = ACTIONS(429),
    [anon_sym_LBRACK] = ACTIONS(429),
    [anon_sym_COLON] = ACTIONS(431),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(429),
    [anon_sym_ATsupports] = ACTIONS(431),
    [sym_at_keyword] = ACTIONS(431),
    [anon_sym_ATkeyframes] = ACTIONS(431),
    [anon_sym_POUND] = ACTIONS(429),
  },
  [91] = {
    [aux_sym_import_statement_repeat1] = STATE(115),
    [sym_block] = STATE(139),
    [anon_sym_COMMA] = ACTIONS(148),
    [anon_sym_LBRACE] = ACTIONS(94),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(433),
  },
  [92] = {
    [anon_sym_STAR] = ACTIONS(435),
    [anon_sym_ATmedia] = ACTIONS(437),
    [anon_sym_ATimport] = ACTIONS(437),
    [anon_sym_ATnamespace] = ACTIONS(437),
    [sym_identifier] = ACTIONS(435),
    [anon_sym_COLON_COLON] = ACTIONS(435),
    [sym_string_value] = ACTIONS(435),
    [sym_nesting_selector] = ACTIONS(435),
    [aux_sym_keyframes_statement_token1] = ACTIONS(437),
    [anon_sym_ATcharset] = ACTIONS(437),
    [ts_builtin_sym_end] = ACTIONS(435),
    [anon_sym_LBRACK] = ACTIONS(435),
    [anon_sym_COLON] = ACTIONS(437),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(435),
    [anon_sym_ATsupports] = ACTIONS(437),
    [sym_at_keyword] = ACTIONS(437),
    [anon_sym_ATkeyframes] = ACTIONS(437),
    [anon_sym_POUND] = ACTIONS(435),
  },
  [93] = {
    [sym__descendant_operator] = ACTIONS(37),
    [anon_sym_RPAREN] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(37),
    [anon_sym_COLON_COLON] = ACTIONS(37),
    [anon_sym_LBRACE] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(439),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(37),
    [anon_sym_COMMA] = ACTIONS(37),
    [anon_sym_GT] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(37),
    [anon_sym_POUND] = ACTIONS(37),
  },
  [94] = {
    [sym__descendant_operator] = ACTIONS(441),
    [anon_sym_RPAREN] = ACTIONS(441),
    [anon_sym_TILDE] = ACTIONS(441),
    [anon_sym_COLON_COLON] = ACTIONS(441),
    [anon_sym_LBRACE] = ACTIONS(441),
    [anon_sym_LBRACK] = ACTIONS(441),
    [anon_sym_COLON] = ACTIONS(443),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(108),
    [anon_sym_COMMA] = ACTIONS(441),
    [anon_sym_GT] = ACTIONS(441),
    [anon_sym_PLUS] = ACTIONS(441),
    [anon_sym_POUND] = ACTIONS(441),
  },
  [95] = {
    [anon_sym_EQ] = ACTIONS(445),
    [anon_sym_DOLLAR_EQ] = ACTIONS(445),
    [sym_comment] = ACTIONS(3),
    [anon_sym_TILDE_EQ] = ACTIONS(445),
    [anon_sym_RBRACK] = ACTIONS(447),
    [anon_sym_CARET_EQ] = ACTIONS(445),
    [anon_sym_STAR_EQ] = ACTIONS(445),
    [anon_sym_PIPE_EQ] = ACTIONS(445),
  },
  [96] = {
    [sym_pseudo_class_arguments] = STATE(142),
    [sym__descendant_operator] = ACTIONS(449),
    [anon_sym_RPAREN] = ACTIONS(449),
    [anon_sym_TILDE] = ACTIONS(449),
    [anon_sym_COLON_COLON] = ACTIONS(449),
    [anon_sym_LBRACE] = ACTIONS(449),
    [anon_sym_LPAREN] = ACTIONS(206),
    [anon_sym_LBRACK] = ACTIONS(449),
    [anon_sym_COLON] = ACTIONS(451),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(449),
    [anon_sym_COMMA] = ACTIONS(449),
    [anon_sym_GT] = ACTIONS(449),
    [anon_sym_PLUS] = ACTIONS(449),
    [anon_sym_POUND] = ACTIONS(449),
  },
  [97] = {
    [sym__descendant_operator] = ACTIONS(453),
    [anon_sym_RPAREN] = ACTIONS(453),
    [anon_sym_TILDE] = ACTIONS(453),
    [anon_sym_COLON_COLON] = ACTIONS(453),
    [anon_sym_LBRACE] = ACTIONS(453),
    [anon_sym_LBRACK] = ACTIONS(453),
    [anon_sym_COLON] = ACTIONS(455),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(453),
    [anon_sym_COMMA] = ACTIONS(453),
    [anon_sym_GT] = ACTIONS(453),
    [anon_sym_PLUS] = ACTIONS(453),
    [anon_sym_POUND] = ACTIONS(453),
  },
  [98] = {
    [sym__descendant_operator] = ACTIONS(457),
    [anon_sym_RPAREN] = ACTIONS(457),
    [anon_sym_TILDE] = ACTIONS(457),
    [anon_sym_COLON_COLON] = ACTIONS(457),
    [anon_sym_LBRACE] = ACTIONS(457),
    [anon_sym_LBRACK] = ACTIONS(457),
    [anon_sym_COLON] = ACTIONS(459),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(108),
    [anon_sym_COMMA] = ACTIONS(457),
    [anon_sym_GT] = ACTIONS(457),
    [anon_sym_PLUS] = ACTIONS(457),
    [anon_sym_POUND] = ACTIONS(457),
  },
  [99] = {
    [sym__descendant_operator] = ACTIONS(102),
    [anon_sym_LBRACK] = ACTIONS(104),
    [anon_sym_COLON] = ACTIONS(106),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(108),
    [anon_sym_TILDE] = ACTIONS(110),
    [anon_sym_COMMA] = ACTIONS(461),
    [anon_sym_COLON_COLON] = ACTIONS(114),
    [anon_sym_GT] = ACTIONS(116),
    [anon_sym_LBRACE] = ACTIONS(461),
    [anon_sym_PLUS] = ACTIONS(120),
    [anon_sym_POUND] = ACTIONS(122),
  },
  [100] = {
    [sym__descendant_operator] = ACTIONS(463),
    [anon_sym_RPAREN] = ACTIONS(463),
    [anon_sym_TILDE] = ACTIONS(463),
    [anon_sym_COLON_COLON] = ACTIONS(463),
    [anon_sym_LBRACE] = ACTIONS(463),
    [anon_sym_LBRACK] = ACTIONS(463),
    [anon_sym_COLON] = ACTIONS(465),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(463),
    [anon_sym_COMMA] = ACTIONS(463),
    [anon_sym_GT] = ACTIONS(463),
    [anon_sym_PLUS] = ACTIONS(463),
    [anon_sym_POUND] = ACTIONS(463),
  },
  [101] = {
    [sym__descendant_operator] = ACTIONS(467),
    [anon_sym_RPAREN] = ACTIONS(467),
    [anon_sym_TILDE] = ACTIONS(467),
    [anon_sym_COLON_COLON] = ACTIONS(467),
    [anon_sym_LBRACE] = ACTIONS(467),
    [anon_sym_LBRACK] = ACTIONS(467),
    [anon_sym_COLON] = ACTIONS(469),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(108),
    [anon_sym_COMMA] = ACTIONS(467),
    [anon_sym_GT] = ACTIONS(467),
    [anon_sym_PLUS] = ACTIONS(467),
    [anon_sym_POUND] = ACTIONS(467),
  },
  [102] = {
    [sym__descendant_operator] = ACTIONS(471),
    [anon_sym_RPAREN] = ACTIONS(471),
    [anon_sym_TILDE] = ACTIONS(471),
    [anon_sym_COLON_COLON] = ACTIONS(471),
    [anon_sym_LBRACE] = ACTIONS(471),
    [anon_sym_LBRACK] = ACTIONS(471),
    [anon_sym_COLON] = ACTIONS(473),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(108),
    [anon_sym_COMMA] = ACTIONS(471),
    [anon_sym_GT] = ACTIONS(471),
    [anon_sym_PLUS] = ACTIONS(471),
    [anon_sym_POUND] = ACTIONS(471),
  },
  [103] = {
    [sym__descendant_operator] = ACTIONS(475),
    [anon_sym_RPAREN] = ACTIONS(475),
    [anon_sym_TILDE] = ACTIONS(475),
    [anon_sym_COLON_COLON] = ACTIONS(475),
    [anon_sym_LBRACE] = ACTIONS(475),
    [anon_sym_LBRACK] = ACTIONS(475),
    [anon_sym_COLON] = ACTIONS(477),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(475),
    [anon_sym_COMMA] = ACTIONS(475),
    [anon_sym_GT] = ACTIONS(475),
    [anon_sym_PLUS] = ACTIONS(475),
    [anon_sym_POUND] = ACTIONS(475),
  },
  [104] = {
    [aux_sym_selectors_repeat1] = STATE(104),
    [anon_sym_LBRACE] = ACTIONS(461),
    [anon_sym_COMMA] = ACTIONS(479),
    [sym_comment] = ACTIONS(3),
  },
  [105] = {
    [anon_sym_STAR] = ACTIONS(482),
    [anon_sym_ATmedia] = ACTIONS(484),
    [anon_sym_ATimport] = ACTIONS(484),
    [anon_sym_ATnamespace] = ACTIONS(484),
    [sym_identifier] = ACTIONS(482),
    [anon_sym_COLON_COLON] = ACTIONS(482),
    [sym_string_value] = ACTIONS(482),
    [sym_nesting_selector] = ACTIONS(482),
    [aux_sym_keyframes_statement_token1] = ACTIONS(484),
    [anon_sym_ATcharset] = ACTIONS(484),
    [ts_builtin_sym_end] = ACTIONS(482),
    [anon_sym_LBRACK] = ACTIONS(482),
    [anon_sym_COLON] = ACTIONS(484),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(482),
    [anon_sym_ATsupports] = ACTIONS(484),
    [sym_at_keyword] = ACTIONS(484),
    [anon_sym_ATkeyframes] = ACTIONS(484),
    [anon_sym_POUND] = ACTIONS(482),
  },
  [106] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(486),
  },
  [107] = {
    [sym__value] = STATE(144),
    [sym_parenthesized_value] = STATE(144),
    [sym_binary_expression] = STATE(144),
    [sym_color_value] = STATE(144),
    [sym_integer_value] = STATE(144),
    [sym_float_value] = STATE(144),
    [sym_call_expression] = STATE(144),
    [aux_sym_integer_value_token1] = ACTIONS(128),
    [sym_identifier] = ACTIONS(130),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(132),
    [sym_plain_value] = ACTIONS(488),
    [anon_sym_LPAREN2] = ACTIONS(136),
    [sym_string_value] = ACTIONS(490),
    [anon_sym_POUND] = ACTIONS(140),
  },
  [108] = {
    [aux_sym_integer_value_token1] = ACTIONS(492),
    [sym_identifier] = ACTIONS(492),
    [anon_sym_STAR] = ACTIONS(317),
    [sym_important] = ACTIONS(494),
    [anon_sym_RBRACE] = ACTIONS(494),
    [sym_plain_value] = ACTIONS(492),
    [sym_string_value] = ACTIONS(494),
    [anon_sym_SLASH] = ACTIONS(325),
    [anon_sym_SEMI] = ACTIONS(494),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(492),
    [anon_sym_DASH] = ACTIONS(325),
    [anon_sym_COMMA] = ACTIONS(494),
    [anon_sym_LPAREN2] = ACTIONS(494),
    [anon_sym_PLUS] = ACTIONS(325),
    [anon_sym_POUND] = ACTIONS(494),
  },
  [109] = {
    [sym__value] = STATE(108),
    [sym_parenthesized_value] = STATE(108),
    [sym_binary_expression] = STATE(108),
    [sym_color_value] = STATE(108),
    [sym_integer_value] = STATE(108),
    [aux_sym_declaration_repeat1] = STATE(146),
    [sym_float_value] = STATE(108),
    [sym_call_expression] = STATE(108),
    [aux_sym_integer_value_token1] = ACTIONS(128),
    [sym_identifier] = ACTIONS(130),
    [sym_important] = ACTIONS(496),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(132),
    [sym_plain_value] = ACTIONS(321),
    [anon_sym_LPAREN2] = ACTIONS(136),
    [anon_sym_COMMA] = ACTIONS(329),
    [sym_string_value] = ACTIONS(323),
    [anon_sym_POUND] = ACTIONS(140),
    [anon_sym_SEMI] = ACTIONS(486),
  },
  [110] = {
    [sym__value] = STATE(118),
    [sym_parenthesized_value] = STATE(118),
    [sym_binary_expression] = STATE(118),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(147),
    [sym_color_value] = STATE(118),
    [sym_integer_value] = STATE(118),
    [sym_float_value] = STATE(118),
    [sym_call_expression] = STATE(118),
    [aux_sym_integer_value_token1] = ACTIONS(128),
    [sym_identifier] = ACTIONS(130),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(132),
    [sym_plain_value] = ACTIONS(345),
    [anon_sym_LPAREN2] = ACTIONS(136),
    [sym_string_value] = ACTIONS(347),
    [anon_sym_POUND] = ACTIONS(140),
  },
  [111] = {
    [anon_sym_or] = ACTIONS(498),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(498),
    [anon_sym_COMMA] = ACTIONS(498),
    [anon_sym_LBRACE] = ACTIONS(498),
    [anon_sym_and] = ACTIONS(498),
    [anon_sym_SEMI] = ACTIONS(498),
  },
  [112] = {
    [sym__descendant_operator] = ACTIONS(102),
    [anon_sym_RPAREN] = ACTIONS(500),
    [anon_sym_TILDE] = ACTIONS(110),
    [anon_sym_COLON_COLON] = ACTIONS(114),
    [anon_sym_LBRACK] = ACTIONS(104),
    [anon_sym_COLON] = ACTIONS(106),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(108),
    [anon_sym_GT] = ACTIONS(116),
    [anon_sym_PLUS] = ACTIONS(120),
    [anon_sym_POUND] = ACTIONS(122),
  },
  [113] = {
    [anon_sym_or] = ACTIONS(150),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(502),
    [anon_sym_LBRACE] = ACTIONS(502),
    [anon_sym_and] = ACTIONS(150),
    [anon_sym_SEMI] = ACTIONS(502),
  },
  [114] = {
    [anon_sym_or] = ACTIONS(504),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(504),
    [anon_sym_COMMA] = ACTIONS(504),
    [anon_sym_LBRACE] = ACTIONS(504),
    [anon_sym_and] = ACTIONS(504),
    [anon_sym_SEMI] = ACTIONS(504),
  },
  [115] = {
    [aux_sym_import_statement_repeat1] = STATE(115),
    [anon_sym_COMMA] = ACTIONS(506),
    [anon_sym_LBRACE] = ACTIONS(502),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(502),
  },
  [116] = {
    [anon_sym_STAR] = ACTIONS(509),
    [anon_sym_ATmedia] = ACTIONS(511),
    [anon_sym_ATimport] = ACTIONS(511),
    [anon_sym_ATnamespace] = ACTIONS(511),
    [sym_identifier] = ACTIONS(509),
    [anon_sym_COLON_COLON] = ACTIONS(509),
    [sym_string_value] = ACTIONS(509),
    [sym_nesting_selector] = ACTIONS(509),
    [aux_sym_keyframes_statement_token1] = ACTIONS(511),
    [anon_sym_ATcharset] = ACTIONS(511),
    [ts_builtin_sym_end] = ACTIONS(509),
    [anon_sym_LBRACK] = ACTIONS(509),
    [anon_sym_COLON] = ACTIONS(511),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(509),
    [anon_sym_ATsupports] = ACTIONS(511),
    [sym_at_keyword] = ACTIONS(511),
    [anon_sym_ATkeyframes] = ACTIONS(511),
    [anon_sym_POUND] = ACTIONS(509),
  },
  [117] = {
    [anon_sym_not] = ACTIONS(513),
    [anon_sym_STAR] = ACTIONS(515),
    [sym_identifier] = ACTIONS(513),
    [sym_comment] = ACTIONS(3),
    [anon_sym_only] = ACTIONS(513),
    [anon_sym_DASH] = ACTIONS(513),
    [anon_sym_LPAREN2] = ACTIONS(515),
    [anon_sym_selector] = ACTIONS(513),
    [anon_sym_PLUS] = ACTIONS(515),
    [anon_sym_SEMI] = ACTIONS(515),
    [anon_sym_SLASH] = ACTIONS(513),
  },
  [118] = {
    [aux_sym_integer_value_token1] = ACTIONS(517),
    [sym_identifier] = ACTIONS(517),
    [anon_sym_STAR] = ACTIONS(317),
    [anon_sym_RPAREN] = ACTIONS(519),
    [sym_plain_value] = ACTIONS(517),
    [sym_string_value] = ACTIONS(519),
    [anon_sym_SLASH] = ACTIONS(325),
    [anon_sym_SEMI] = ACTIONS(519),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(517),
    [anon_sym_DASH] = ACTIONS(325),
    [anon_sym_COMMA] = ACTIONS(519),
    [anon_sym_LPAREN2] = ACTIONS(519),
    [anon_sym_PLUS] = ACTIONS(325),
    [anon_sym_POUND] = ACTIONS(519),
  },
  [119] = {
    [sym__value] = STATE(118),
    [sym_parenthesized_value] = STATE(118),
    [sym_binary_expression] = STATE(118),
    [aux_sym_arguments_repeat1] = STATE(151),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(152),
    [sym_color_value] = STATE(118),
    [sym_integer_value] = STATE(118),
    [sym_float_value] = STATE(118),
    [sym_call_expression] = STATE(118),
    [aux_sym_integer_value_token1] = ACTIONS(128),
    [sym_identifier] = ACTIONS(130),
    [anon_sym_RPAREN] = ACTIONS(521),
    [sym_plain_value] = ACTIONS(345),
    [sym_string_value] = ACTIONS(347),
    [anon_sym_SEMI] = ACTIONS(523),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(132),
    [anon_sym_LPAREN2] = ACTIONS(136),
    [anon_sym_COMMA] = ACTIONS(523),
    [anon_sym_POUND] = ACTIONS(140),
  },
  [120] = {
    [anon_sym_not] = ACTIONS(525),
    [anon_sym_STAR] = ACTIONS(527),
    [sym_identifier] = ACTIONS(525),
    [sym_comment] = ACTIONS(3),
    [anon_sym_only] = ACTIONS(525),
    [anon_sym_DASH] = ACTIONS(525),
    [anon_sym_LPAREN2] = ACTIONS(527),
    [anon_sym_selector] = ACTIONS(525),
    [anon_sym_PLUS] = ACTIONS(527),
    [anon_sym_SEMI] = ACTIONS(527),
    [anon_sym_SLASH] = ACTIONS(525),
  },
  [121] = {
    [anon_sym_not] = ACTIONS(529),
    [anon_sym_STAR] = ACTIONS(531),
    [sym_identifier] = ACTIONS(529),
    [sym_comment] = ACTIONS(3),
    [anon_sym_only] = ACTIONS(529),
    [anon_sym_DASH] = ACTIONS(529),
    [anon_sym_LPAREN2] = ACTIONS(531),
    [anon_sym_selector] = ACTIONS(529),
    [anon_sym_PLUS] = ACTIONS(531),
    [anon_sym_SEMI] = ACTIONS(531),
    [anon_sym_SLASH] = ACTIONS(529),
  },
  [122] = {
    [anon_sym_STAR] = ACTIONS(533),
    [anon_sym_ATmedia] = ACTIONS(535),
    [anon_sym_ATimport] = ACTIONS(535),
    [anon_sym_ATnamespace] = ACTIONS(535),
    [sym_identifier] = ACTIONS(533),
    [anon_sym_COLON_COLON] = ACTIONS(533),
    [sym_string_value] = ACTIONS(533),
    [sym_nesting_selector] = ACTIONS(533),
    [aux_sym_keyframes_statement_token1] = ACTIONS(535),
    [anon_sym_ATcharset] = ACTIONS(535),
    [ts_builtin_sym_end] = ACTIONS(533),
    [anon_sym_LBRACK] = ACTIONS(533),
    [anon_sym_COLON] = ACTIONS(535),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(533),
    [anon_sym_ATsupports] = ACTIONS(535),
    [sym_at_keyword] = ACTIONS(535),
    [anon_sym_ATkeyframes] = ACTIONS(535),
    [anon_sym_POUND] = ACTIONS(533),
  },
  [123] = {
    [aux_sym_import_statement_repeat1] = STATE(115),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(148),
    [anon_sym_SEMI] = ACTIONS(537),
  },
  [124] = {
    [anon_sym_STAR] = ACTIONS(539),
    [anon_sym_ATmedia] = ACTIONS(541),
    [anon_sym_ATimport] = ACTIONS(541),
    [anon_sym_ATnamespace] = ACTIONS(541),
    [sym_identifier] = ACTIONS(539),
    [anon_sym_COLON_COLON] = ACTIONS(539),
    [sym_string_value] = ACTIONS(539),
    [sym_nesting_selector] = ACTIONS(539),
    [aux_sym_keyframes_statement_token1] = ACTIONS(541),
    [anon_sym_ATcharset] = ACTIONS(541),
    [ts_builtin_sym_end] = ACTIONS(539),
    [anon_sym_LBRACK] = ACTIONS(539),
    [anon_sym_COLON] = ACTIONS(541),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(539),
    [anon_sym_ATsupports] = ACTIONS(541),
    [sym_at_keyword] = ACTIONS(541),
    [anon_sym_ATkeyframes] = ACTIONS(541),
    [anon_sym_POUND] = ACTIONS(539),
  },
  [125] = {
    [anon_sym_STAR] = ACTIONS(543),
    [anon_sym_ATmedia] = ACTIONS(545),
    [anon_sym_ATimport] = ACTIONS(545),
    [anon_sym_ATnamespace] = ACTIONS(545),
    [sym_identifier] = ACTIONS(543),
    [anon_sym_COLON_COLON] = ACTIONS(543),
    [sym_string_value] = ACTIONS(543),
    [sym_nesting_selector] = ACTIONS(543),
    [aux_sym_keyframes_statement_token1] = ACTIONS(545),
    [anon_sym_ATcharset] = ACTIONS(545),
    [ts_builtin_sym_end] = ACTIONS(543),
    [anon_sym_LBRACK] = ACTIONS(543),
    [anon_sym_COLON] = ACTIONS(545),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(543),
    [anon_sym_ATsupports] = ACTIONS(545),
    [sym_at_keyword] = ACTIONS(545),
    [anon_sym_ATkeyframes] = ACTIONS(545),
    [anon_sym_POUND] = ACTIONS(543),
  },
  [126] = {
    [sym_block] = STATE(154),
    [anon_sym_LBRACE] = ACTIONS(547),
    [sym_comment] = ACTIONS(3),
  },
  [127] = {
    [sym_integer_value] = STATE(126),
    [sym_keyframe_block] = STATE(156),
    [aux_sym_keyframe_block_list_repeat1] = STATE(156),
    [aux_sym_integer_value_token1] = ACTIONS(383),
    [anon_sym_RBRACE] = ACTIONS(549),
    [sym_to] = ACTIONS(387),
    [sym_comment] = ACTIONS(3),
    [sym_from] = ACTIONS(387),
  },
  [128] = {
    [anon_sym_STAR] = ACTIONS(194),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(551),
    [anon_sym_DASH] = ACTIONS(194),
    [anon_sym_PLUS] = ACTIONS(194),
    [anon_sym_SLASH] = ACTIONS(196),
  },
  [129] = {
    [sym_arguments] = STATE(215),
    [sym__descendant_operator] = ACTIONS(37),
    [aux_sym_integer_value_token1] = ACTIONS(152),
    [anon_sym_STAR] = ACTIONS(154),
    [sym_identifier] = ACTIONS(152),
    [anon_sym_RPAREN] = ACTIONS(37),
    [anon_sym_TILDE] = ACTIONS(37),
    [anon_sym_COLON_COLON] = ACTIONS(37),
    [sym_plain_value] = ACTIONS(152),
    [sym_string_value] = ACTIONS(154),
    [anon_sym_SLASH] = ACTIONS(152),
    [anon_sym_LPAREN] = ACTIONS(553),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(439),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(152),
    [anon_sym_DOT] = ACTIONS(439),
    [anon_sym_DASH] = ACTIONS(152),
    [anon_sym_COMMA] = ACTIONS(37),
    [anon_sym_LPAREN2] = ACTIONS(152),
    [anon_sym_GT] = ACTIONS(37),
    [anon_sym_PLUS] = ACTIONS(439),
    [anon_sym_POUND] = ACTIONS(37),
  },
  [130] = {
    [sym__descendant_operator] = ACTIONS(555),
    [anon_sym_RPAREN] = ACTIONS(555),
    [anon_sym_TILDE] = ACTIONS(555),
    [anon_sym_COLON_COLON] = ACTIONS(555),
    [anon_sym_LBRACE] = ACTIONS(555),
    [anon_sym_LBRACK] = ACTIONS(555),
    [anon_sym_COLON] = ACTIONS(557),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(555),
    [anon_sym_COMMA] = ACTIONS(555),
    [anon_sym_GT] = ACTIONS(555),
    [anon_sym_PLUS] = ACTIONS(555),
    [anon_sym_POUND] = ACTIONS(555),
  },
  [131] = {
    [sym__descendant_operator] = ACTIONS(559),
    [aux_sym_integer_value_token1] = ACTIONS(561),
    [anon_sym_STAR] = ACTIONS(563),
    [sym_identifier] = ACTIONS(561),
    [anon_sym_RPAREN] = ACTIONS(559),
    [anon_sym_TILDE] = ACTIONS(559),
    [anon_sym_COLON_COLON] = ACTIONS(559),
    [sym_plain_value] = ACTIONS(561),
    [sym_string_value] = ACTIONS(563),
    [anon_sym_SLASH] = ACTIONS(561),
    [anon_sym_LBRACK] = ACTIONS(559),
    [anon_sym_COLON] = ACTIONS(565),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(561),
    [anon_sym_DOT] = ACTIONS(565),
    [anon_sym_DASH] = ACTIONS(561),
    [anon_sym_COMMA] = ACTIONS(559),
    [anon_sym_LPAREN2] = ACTIONS(563),
    [anon_sym_GT] = ACTIONS(559),
    [anon_sym_PLUS] = ACTIONS(565),
    [anon_sym_POUND] = ACTIONS(559),
  },
  [132] = {
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(567),
    [aux_sym_color_value_token1] = ACTIONS(569),
  },
  [133] = {
    [aux_sym_pseudo_class_arguments_repeat2] = STATE(160),
    [sym__descendant_operator] = ACTIONS(102),
    [anon_sym_RPAREN] = ACTIONS(571),
    [anon_sym_TILDE] = ACTIONS(110),
    [anon_sym_COLON_COLON] = ACTIONS(114),
    [anon_sym_LBRACK] = ACTIONS(104),
    [anon_sym_COLON] = ACTIONS(106),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(108),
    [anon_sym_COMMA] = ACTIONS(573),
    [anon_sym_GT] = ACTIONS(116),
    [anon_sym_PLUS] = ACTIONS(120),
    [anon_sym_POUND] = ACTIONS(122),
  },
  [134] = {
    [sym__value] = STATE(118),
    [sym_parenthesized_value] = STATE(118),
    [sym_binary_expression] = STATE(118),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(152),
    [sym_color_value] = STATE(118),
    [sym_integer_value] = STATE(118),
    [aux_sym_pseudo_class_arguments_repeat2] = STATE(160),
    [sym_float_value] = STATE(118),
    [sym_call_expression] = STATE(118),
    [aux_sym_integer_value_token1] = ACTIONS(128),
    [sym_identifier] = ACTIONS(130),
    [anon_sym_RPAREN] = ACTIONS(571),
    [sym_plain_value] = ACTIONS(345),
    [sym_string_value] = ACTIONS(347),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(132),
    [anon_sym_LPAREN2] = ACTIONS(136),
    [anon_sym_COMMA] = ACTIONS(573),
    [anon_sym_POUND] = ACTIONS(140),
  },
  [135] = {
    [sym_integer_value] = STATE(161),
    [sym__value] = STATE(161),
    [sym_parenthesized_value] = STATE(161),
    [sym_binary_expression] = STATE(161),
    [sym_float_value] = STATE(161),
    [sym_call_expression] = STATE(161),
    [sym_color_value] = STATE(161),
    [aux_sym_integer_value_token1] = ACTIONS(128),
    [sym_identifier] = ACTIONS(130),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(132),
    [sym_plain_value] = ACTIONS(575),
    [anon_sym_LPAREN2] = ACTIONS(136),
    [sym_string_value] = ACTIONS(577),
    [anon_sym_POUND] = ACTIONS(140),
  },
  [136] = {
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
  [137] = {
    [sym_media_statement] = STATE(137),
    [sym_charset_statement] = STATE(137),
    [sym_supports_statement] = STATE(137),
    [sym_at_rule] = STATE(137),
    [sym__selector] = STATE(16),
    [sym_universal_selector] = STATE(16),
    [sym_attribute_selector] = STATE(16),
    [sym_child_selector] = STATE(16),
    [sym_declaration] = STATE(137),
    [aux_sym_block_repeat1] = STATE(137),
    [sym_import_statement] = STATE(137),
    [sym_pseudo_element_selector] = STATE(16),
    [sym_id_selector] = STATE(16),
    [sym_adjacent_sibling_selector] = STATE(16),
    [sym_namespace_statement] = STATE(137),
    [sym_keyframes_statement] = STATE(137),
    [sym_rule_set] = STATE(137),
    [sym_selectors] = STATE(230),
    [sym_class_selector] = STATE(16),
    [sym_pseudo_class_selector] = STATE(16),
    [sym_descendant_selector] = STATE(16),
    [sym_sibling_selector] = STATE(16),
    [anon_sym_RBRACE] = ACTIONS(583),
    [anon_sym_STAR] = ACTIONS(585),
    [anon_sym_ATmedia] = ACTIONS(588),
    [anon_sym_ATimport] = ACTIONS(591),
    [anon_sym_ATnamespace] = ACTIONS(594),
    [sym_identifier] = ACTIONS(597),
    [anon_sym_COLON_COLON] = ACTIONS(600),
    [sym_string_value] = ACTIONS(603),
    [sym_nesting_selector] = ACTIONS(603),
    [aux_sym_keyframes_statement_token1] = ACTIONS(606),
    [anon_sym_ATcharset] = ACTIONS(609),
    [anon_sym_LBRACK] = ACTIONS(612),
    [anon_sym_COLON] = ACTIONS(615),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(618),
    [anon_sym_ATsupports] = ACTIONS(621),
    [sym_at_keyword] = ACTIONS(624),
    [anon_sym_ATkeyframes] = ACTIONS(606),
    [anon_sym_POUND] = ACTIONS(627),
  },
  [138] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(630),
  },
  [139] = {
    [anon_sym_STAR] = ACTIONS(632),
    [anon_sym_ATmedia] = ACTIONS(634),
    [anon_sym_ATimport] = ACTIONS(634),
    [anon_sym_ATnamespace] = ACTIONS(634),
    [sym_identifier] = ACTIONS(632),
    [anon_sym_COLON_COLON] = ACTIONS(632),
    [sym_string_value] = ACTIONS(632),
    [sym_nesting_selector] = ACTIONS(632),
    [aux_sym_keyframes_statement_token1] = ACTIONS(634),
    [anon_sym_ATcharset] = ACTIONS(634),
    [ts_builtin_sym_end] = ACTIONS(632),
    [anon_sym_LBRACK] = ACTIONS(632),
    [anon_sym_COLON] = ACTIONS(634),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(632),
    [anon_sym_ATsupports] = ACTIONS(634),
    [sym_at_keyword] = ACTIONS(634),
    [anon_sym_ATkeyframes] = ACTIONS(634),
    [anon_sym_POUND] = ACTIONS(632),
  },
  [140] = {
    [sym__value] = STATE(163),
    [sym_parenthesized_value] = STATE(163),
    [sym_binary_expression] = STATE(163),
    [sym_color_value] = STATE(163),
    [sym_integer_value] = STATE(163),
    [sym_float_value] = STATE(163),
    [sym_call_expression] = STATE(163),
    [aux_sym_integer_value_token1] = ACTIONS(76),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(80),
    [sym_plain_value] = ACTIONS(636),
    [anon_sym_LPAREN2] = ACTIONS(84),
    [sym_string_value] = ACTIONS(638),
    [anon_sym_POUND] = ACTIONS(88),
  },
  [141] = {
    [sym__descendant_operator] = ACTIONS(640),
    [anon_sym_RPAREN] = ACTIONS(640),
    [anon_sym_TILDE] = ACTIONS(640),
    [anon_sym_COLON_COLON] = ACTIONS(640),
    [anon_sym_LBRACE] = ACTIONS(640),
    [anon_sym_LBRACK] = ACTIONS(640),
    [anon_sym_COLON] = ACTIONS(642),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(640),
    [anon_sym_COMMA] = ACTIONS(640),
    [anon_sym_GT] = ACTIONS(640),
    [anon_sym_PLUS] = ACTIONS(640),
    [anon_sym_POUND] = ACTIONS(640),
  },
  [142] = {
    [sym__descendant_operator] = ACTIONS(644),
    [anon_sym_RPAREN] = ACTIONS(644),
    [anon_sym_TILDE] = ACTIONS(644),
    [anon_sym_COLON_COLON] = ACTIONS(644),
    [anon_sym_LBRACE] = ACTIONS(644),
    [anon_sym_LBRACK] = ACTIONS(644),
    [anon_sym_COLON] = ACTIONS(646),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(644),
    [anon_sym_COMMA] = ACTIONS(644),
    [anon_sym_GT] = ACTIONS(644),
    [anon_sym_PLUS] = ACTIONS(644),
    [anon_sym_POUND] = ACTIONS(644),
  },
  [143] = {
    [anon_sym_STAR] = ACTIONS(648),
    [anon_sym_ATmedia] = ACTIONS(650),
    [anon_sym_ATimport] = ACTIONS(650),
    [anon_sym_ATnamespace] = ACTIONS(650),
    [sym_identifier] = ACTIONS(648),
    [anon_sym_COLON_COLON] = ACTIONS(648),
    [sym_string_value] = ACTIONS(648),
    [sym_nesting_selector] = ACTIONS(648),
    [aux_sym_keyframes_statement_token1] = ACTIONS(650),
    [anon_sym_ATcharset] = ACTIONS(650),
    [ts_builtin_sym_end] = ACTIONS(648),
    [anon_sym_LBRACK] = ACTIONS(648),
    [anon_sym_COLON] = ACTIONS(650),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(648),
    [anon_sym_ATsupports] = ACTIONS(650),
    [sym_at_keyword] = ACTIONS(650),
    [anon_sym_ATkeyframes] = ACTIONS(650),
    [anon_sym_POUND] = ACTIONS(648),
  },
  [144] = {
    [aux_sym_integer_value_token1] = ACTIONS(652),
    [sym_identifier] = ACTIONS(652),
    [anon_sym_STAR] = ACTIONS(317),
    [sym_important] = ACTIONS(654),
    [anon_sym_RBRACE] = ACTIONS(654),
    [sym_plain_value] = ACTIONS(652),
    [sym_string_value] = ACTIONS(654),
    [anon_sym_SLASH] = ACTIONS(325),
    [anon_sym_SEMI] = ACTIONS(654),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(652),
    [anon_sym_DASH] = ACTIONS(325),
    [anon_sym_COMMA] = ACTIONS(654),
    [anon_sym_LPAREN2] = ACTIONS(654),
    [anon_sym_PLUS] = ACTIONS(325),
    [anon_sym_POUND] = ACTIONS(654),
  },
  [145] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(656),
  },
  [146] = {
    [sym__value] = STATE(108),
    [sym_parenthesized_value] = STATE(108),
    [sym_binary_expression] = STATE(108),
    [sym_color_value] = STATE(108),
    [sym_integer_value] = STATE(108),
    [aux_sym_declaration_repeat1] = STATE(146),
    [sym_float_value] = STATE(108),
    [sym_call_expression] = STATE(108),
    [aux_sym_integer_value_token1] = ACTIONS(658),
    [sym_identifier] = ACTIONS(661),
    [anon_sym_RBRACE] = ACTIONS(654),
    [sym_important] = ACTIONS(654),
    [sym_plain_value] = ACTIONS(664),
    [sym_string_value] = ACTIONS(667),
    [anon_sym_SEMI] = ACTIONS(654),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(670),
    [anon_sym_COMMA] = ACTIONS(673),
    [anon_sym_LPAREN2] = ACTIONS(676),
    [anon_sym_POUND] = ACTIONS(679),
  },
  [147] = {
    [sym__value] = STATE(118),
    [sym_parenthesized_value] = STATE(118),
    [sym_binary_expression] = STATE(118),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(152),
    [sym_color_value] = STATE(118),
    [sym_integer_value] = STATE(118),
    [sym_float_value] = STATE(118),
    [sym_call_expression] = STATE(118),
    [aux_sym_integer_value_token1] = ACTIONS(128),
    [sym_identifier] = ACTIONS(130),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(132),
    [anon_sym_RPAREN] = ACTIONS(682),
    [sym_plain_value] = ACTIONS(345),
    [anon_sym_LPAREN2] = ACTIONS(136),
    [sym_string_value] = ACTIONS(347),
    [anon_sym_POUND] = ACTIONS(140),
  },
  [148] = {
    [anon_sym_or] = ACTIONS(684),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(684),
    [anon_sym_COMMA] = ACTIONS(684),
    [anon_sym_LBRACE] = ACTIONS(684),
    [anon_sym_and] = ACTIONS(684),
    [anon_sym_SEMI] = ACTIONS(684),
  },
  [149] = {
    [anon_sym_not] = ACTIONS(686),
    [anon_sym_STAR] = ACTIONS(688),
    [sym_identifier] = ACTIONS(686),
    [sym_comment] = ACTIONS(3),
    [anon_sym_only] = ACTIONS(686),
    [anon_sym_DASH] = ACTIONS(686),
    [anon_sym_LPAREN2] = ACTIONS(688),
    [anon_sym_selector] = ACTIONS(686),
    [anon_sym_PLUS] = ACTIONS(688),
    [anon_sym_SEMI] = ACTIONS(688),
    [anon_sym_SLASH] = ACTIONS(686),
  },
  [150] = {
    [sym__value] = STATE(118),
    [sym_parenthesized_value] = STATE(118),
    [sym_binary_expression] = STATE(118),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(166),
    [sym_color_value] = STATE(118),
    [sym_integer_value] = STATE(118),
    [sym_float_value] = STATE(118),
    [sym_call_expression] = STATE(118),
    [aux_sym_integer_value_token1] = ACTIONS(128),
    [sym_identifier] = ACTIONS(130),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(132),
    [sym_plain_value] = ACTIONS(345),
    [anon_sym_LPAREN2] = ACTIONS(136),
    [sym_string_value] = ACTIONS(347),
    [anon_sym_POUND] = ACTIONS(140),
  },
  [151] = {
    [aux_sym_arguments_repeat1] = STATE(168),
    [anon_sym_COMMA] = ACTIONS(523),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(523),
    [anon_sym_RPAREN] = ACTIONS(690),
  },
  [152] = {
    [sym__value] = STATE(118),
    [sym_parenthesized_value] = STATE(118),
    [sym_binary_expression] = STATE(118),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(152),
    [sym_color_value] = STATE(118),
    [sym_integer_value] = STATE(118),
    [sym_float_value] = STATE(118),
    [sym_call_expression] = STATE(118),
    [aux_sym_integer_value_token1] = ACTIONS(692),
    [sym_identifier] = ACTIONS(695),
    [anon_sym_RPAREN] = ACTIONS(698),
    [sym_plain_value] = ACTIONS(700),
    [sym_string_value] = ACTIONS(703),
    [anon_sym_SEMI] = ACTIONS(698),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(706),
    [anon_sym_COMMA] = ACTIONS(698),
    [anon_sym_LPAREN2] = ACTIONS(709),
    [anon_sym_POUND] = ACTIONS(712),
  },
  [153] = {
    [anon_sym_STAR] = ACTIONS(715),
    [anon_sym_ATmedia] = ACTIONS(717),
    [anon_sym_ATimport] = ACTIONS(717),
    [anon_sym_ATnamespace] = ACTIONS(717),
    [sym_identifier] = ACTIONS(715),
    [anon_sym_COLON_COLON] = ACTIONS(715),
    [sym_string_value] = ACTIONS(715),
    [sym_nesting_selector] = ACTIONS(715),
    [aux_sym_keyframes_statement_token1] = ACTIONS(717),
    [anon_sym_ATcharset] = ACTIONS(717),
    [ts_builtin_sym_end] = ACTIONS(715),
    [anon_sym_LBRACK] = ACTIONS(715),
    [anon_sym_COLON] = ACTIONS(717),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(715),
    [anon_sym_ATsupports] = ACTIONS(717),
    [sym_at_keyword] = ACTIONS(717),
    [anon_sym_ATkeyframes] = ACTIONS(717),
    [anon_sym_POUND] = ACTIONS(715),
  },
  [154] = {
    [anon_sym_RBRACE] = ACTIONS(719),
    [aux_sym_integer_value_token1] = ACTIONS(719),
    [sym_to] = ACTIONS(719),
    [sym_comment] = ACTIONS(3),
    [sym_from] = ACTIONS(719),
  },
  [155] = {
    [anon_sym_STAR] = ACTIONS(721),
    [anon_sym_ATmedia] = ACTIONS(723),
    [anon_sym_ATimport] = ACTIONS(723),
    [anon_sym_ATnamespace] = ACTIONS(723),
    [sym_identifier] = ACTIONS(721),
    [anon_sym_COLON_COLON] = ACTIONS(721),
    [sym_string_value] = ACTIONS(721),
    [sym_nesting_selector] = ACTIONS(721),
    [aux_sym_keyframes_statement_token1] = ACTIONS(723),
    [anon_sym_ATcharset] = ACTIONS(723),
    [ts_builtin_sym_end] = ACTIONS(721),
    [anon_sym_LBRACK] = ACTIONS(721),
    [anon_sym_COLON] = ACTIONS(723),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(721),
    [anon_sym_ATsupports] = ACTIONS(723),
    [sym_at_keyword] = ACTIONS(723),
    [anon_sym_ATkeyframes] = ACTIONS(723),
    [anon_sym_POUND] = ACTIONS(721),
  },
  [156] = {
    [sym_integer_value] = STATE(126),
    [sym_keyframe_block] = STATE(156),
    [aux_sym_keyframe_block_list_repeat1] = STATE(156),
    [anon_sym_RBRACE] = ACTIONS(725),
    [aux_sym_integer_value_token1] = ACTIONS(727),
    [sym_to] = ACTIONS(730),
    [sym_comment] = ACTIONS(3),
    [sym_from] = ACTIONS(730),
  },
  [157] = {
    [sym__descendant_operator] = ACTIONS(733),
    [anon_sym_RPAREN] = ACTIONS(733),
    [anon_sym_TILDE] = ACTIONS(733),
    [anon_sym_COLON_COLON] = ACTIONS(733),
    [anon_sym_LBRACE] = ACTIONS(733),
    [anon_sym_LBRACK] = ACTIONS(733),
    [anon_sym_COLON] = ACTIONS(735),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(733),
    [anon_sym_COMMA] = ACTIONS(733),
    [anon_sym_GT] = ACTIONS(733),
    [anon_sym_PLUS] = ACTIONS(733),
    [anon_sym_POUND] = ACTIONS(733),
  },
  [158] = {
    [sym__value] = STATE(118),
    [sym_parenthesized_value] = STATE(118),
    [sym_binary_expression] = STATE(118),
    [sym__selector] = STATE(169),
    [sym_universal_selector] = STATE(169),
    [sym_attribute_selector] = STATE(169),
    [sym_child_selector] = STATE(169),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(170),
    [sym_float_value] = STATE(118),
    [sym_call_expression] = STATE(118),
    [sym_pseudo_element_selector] = STATE(169),
    [sym_id_selector] = STATE(169),
    [sym_adjacent_sibling_selector] = STATE(169),
    [sym_color_value] = STATE(118),
    [sym_integer_value] = STATE(118),
    [sym_class_selector] = STATE(169),
    [sym_pseudo_class_selector] = STATE(169),
    [sym_descendant_selector] = STATE(169),
    [sym_sibling_selector] = STATE(169),
    [aux_sym_integer_value_token1] = ACTIONS(128),
    [sym_identifier] = ACTIONS(405),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(25),
    [aux_sym_float_value_token1] = ACTIONS(132),
    [anon_sym_DOT] = ACTIONS(413),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COLON_COLON] = ACTIONS(15),
    [sym_plain_value] = ACTIONS(345),
    [anon_sym_LPAREN2] = ACTIONS(136),
    [sym_string_value] = ACTIONS(409),
    [sym_nesting_selector] = ACTIONS(737),
    [anon_sym_POUND] = ACTIONS(415),
  },
  [159] = {
    [sym__descendant_operator] = ACTIONS(739),
    [anon_sym_RPAREN] = ACTIONS(739),
    [anon_sym_TILDE] = ACTIONS(739),
    [anon_sym_COLON_COLON] = ACTIONS(739),
    [anon_sym_LBRACE] = ACTIONS(739),
    [anon_sym_LBRACK] = ACTIONS(739),
    [anon_sym_COLON] = ACTIONS(741),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(739),
    [anon_sym_COMMA] = ACTIONS(739),
    [anon_sym_GT] = ACTIONS(739),
    [anon_sym_PLUS] = ACTIONS(739),
    [anon_sym_POUND] = ACTIONS(739),
  },
  [160] = {
    [aux_sym_pseudo_class_arguments_repeat2] = STATE(172),
    [anon_sym_COMMA] = ACTIONS(573),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(743),
  },
  [161] = {
    [sym__value] = STATE(108),
    [sym_parenthesized_value] = STATE(108),
    [sym_binary_expression] = STATE(108),
    [sym_color_value] = STATE(108),
    [sym_integer_value] = STATE(108),
    [aux_sym_declaration_repeat1] = STATE(174),
    [sym_float_value] = STATE(108),
    [sym_call_expression] = STATE(108),
    [anon_sym_RBRACE] = ACTIONS(745),
    [aux_sym_integer_value_token1] = ACTIONS(128),
    [sym_identifier] = ACTIONS(130),
    [anon_sym_STAR] = ACTIONS(317),
    [sym_important] = ACTIONS(747),
    [sym_plain_value] = ACTIONS(321),
    [sym_string_value] = ACTIONS(323),
    [anon_sym_SLASH] = ACTIONS(325),
    [anon_sym_SEMI] = ACTIONS(749),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(132),
    [anon_sym_DASH] = ACTIONS(325),
    [anon_sym_LPAREN2] = ACTIONS(136),
    [anon_sym_COMMA] = ACTIONS(329),
    [anon_sym_PLUS] = ACTIONS(325),
    [anon_sym_POUND] = ACTIONS(140),
  },
  [162] = {
    [anon_sym_STAR] = ACTIONS(751),
    [anon_sym_ATmedia] = ACTIONS(753),
    [anon_sym_ATimport] = ACTIONS(753),
    [anon_sym_ATnamespace] = ACTIONS(753),
    [sym_identifier] = ACTIONS(751),
    [anon_sym_COLON_COLON] = ACTIONS(751),
    [sym_string_value] = ACTIONS(751),
    [sym_nesting_selector] = ACTIONS(751),
    [aux_sym_keyframes_statement_token1] = ACTIONS(753),
    [anon_sym_ATcharset] = ACTIONS(753),
    [ts_builtin_sym_end] = ACTIONS(751),
    [anon_sym_LBRACK] = ACTIONS(751),
    [anon_sym_COLON] = ACTIONS(753),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(751),
    [anon_sym_ATsupports] = ACTIONS(753),
    [sym_at_keyword] = ACTIONS(753),
    [anon_sym_ATkeyframes] = ACTIONS(753),
    [anon_sym_POUND] = ACTIONS(751),
  },
  [163] = {
    [anon_sym_STAR] = ACTIONS(194),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(755),
    [anon_sym_DASH] = ACTIONS(194),
    [anon_sym_PLUS] = ACTIONS(194),
    [anon_sym_SLASH] = ACTIONS(196),
  },
  [164] = {
    [anon_sym_STAR] = ACTIONS(757),
    [anon_sym_ATmedia] = ACTIONS(759),
    [anon_sym_ATimport] = ACTIONS(759),
    [anon_sym_ATnamespace] = ACTIONS(759),
    [sym_identifier] = ACTIONS(757),
    [anon_sym_COLON_COLON] = ACTIONS(757),
    [sym_string_value] = ACTIONS(757),
    [sym_nesting_selector] = ACTIONS(757),
    [aux_sym_keyframes_statement_token1] = ACTIONS(759),
    [anon_sym_ATcharset] = ACTIONS(759),
    [ts_builtin_sym_end] = ACTIONS(757),
    [anon_sym_LBRACK] = ACTIONS(757),
    [anon_sym_COLON] = ACTIONS(759),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(757),
    [anon_sym_ATsupports] = ACTIONS(759),
    [sym_at_keyword] = ACTIONS(759),
    [anon_sym_ATkeyframes] = ACTIONS(759),
    [anon_sym_POUND] = ACTIONS(757),
  },
  [165] = {
    [anon_sym_or] = ACTIONS(761),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(761),
    [anon_sym_COMMA] = ACTIONS(761),
    [anon_sym_LBRACE] = ACTIONS(761),
    [anon_sym_and] = ACTIONS(761),
    [anon_sym_SEMI] = ACTIONS(761),
  },
  [166] = {
    [sym__value] = STATE(118),
    [sym_parenthesized_value] = STATE(118),
    [sym_binary_expression] = STATE(118),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(152),
    [sym_color_value] = STATE(118),
    [sym_integer_value] = STATE(118),
    [sym_float_value] = STATE(118),
    [sym_call_expression] = STATE(118),
    [aux_sym_integer_value_token1] = ACTIONS(128),
    [sym_identifier] = ACTIONS(130),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(132),
    [anon_sym_RPAREN] = ACTIONS(763),
    [anon_sym_COMMA] = ACTIONS(763),
    [sym_plain_value] = ACTIONS(345),
    [anon_sym_LPAREN2] = ACTIONS(136),
    [sym_string_value] = ACTIONS(347),
    [anon_sym_SEMI] = ACTIONS(763),
    [anon_sym_POUND] = ACTIONS(140),
  },
  [167] = {
    [anon_sym_not] = ACTIONS(765),
    [anon_sym_STAR] = ACTIONS(767),
    [sym_identifier] = ACTIONS(765),
    [sym_comment] = ACTIONS(3),
    [anon_sym_only] = ACTIONS(765),
    [anon_sym_DASH] = ACTIONS(765),
    [anon_sym_LPAREN2] = ACTIONS(767),
    [anon_sym_selector] = ACTIONS(765),
    [anon_sym_PLUS] = ACTIONS(767),
    [anon_sym_SEMI] = ACTIONS(767),
    [anon_sym_SLASH] = ACTIONS(765),
  },
  [168] = {
    [aux_sym_arguments_repeat1] = STATE(168),
    [anon_sym_COMMA] = ACTIONS(769),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(769),
    [anon_sym_RPAREN] = ACTIONS(763),
  },
  [169] = {
    [sym__descendant_operator] = ACTIONS(102),
    [anon_sym_LBRACK] = ACTIONS(104),
    [anon_sym_COLON] = ACTIONS(106),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(108),
    [anon_sym_TILDE] = ACTIONS(110),
    [anon_sym_COMMA] = ACTIONS(772),
    [anon_sym_RPAREN] = ACTIONS(772),
    [anon_sym_COLON_COLON] = ACTIONS(114),
    [anon_sym_GT] = ACTIONS(116),
    [anon_sym_PLUS] = ACTIONS(120),
    [anon_sym_POUND] = ACTIONS(122),
  },
  [170] = {
    [sym__value] = STATE(118),
    [sym_parenthesized_value] = STATE(118),
    [sym_binary_expression] = STATE(118),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(152),
    [sym_color_value] = STATE(118),
    [sym_integer_value] = STATE(118),
    [sym_float_value] = STATE(118),
    [sym_call_expression] = STATE(118),
    [aux_sym_integer_value_token1] = ACTIONS(128),
    [sym_identifier] = ACTIONS(130),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(132),
    [anon_sym_RPAREN] = ACTIONS(772),
    [anon_sym_COMMA] = ACTIONS(772),
    [sym_plain_value] = ACTIONS(345),
    [anon_sym_LPAREN2] = ACTIONS(136),
    [sym_string_value] = ACTIONS(347),
    [anon_sym_POUND] = ACTIONS(140),
  },
  [171] = {
    [sym__descendant_operator] = ACTIONS(774),
    [anon_sym_RPAREN] = ACTIONS(774),
    [anon_sym_TILDE] = ACTIONS(774),
    [anon_sym_COLON_COLON] = ACTIONS(774),
    [anon_sym_LBRACE] = ACTIONS(774),
    [anon_sym_LBRACK] = ACTIONS(774),
    [anon_sym_COLON] = ACTIONS(776),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(774),
    [anon_sym_COMMA] = ACTIONS(774),
    [anon_sym_GT] = ACTIONS(774),
    [anon_sym_PLUS] = ACTIONS(774),
    [anon_sym_POUND] = ACTIONS(774),
  },
  [172] = {
    [aux_sym_pseudo_class_arguments_repeat2] = STATE(172),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(778),
    [anon_sym_RPAREN] = ACTIONS(772),
  },
  [173] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(781),
    [anon_sym_SEMI] = ACTIONS(783),
  },
  [174] = {
    [sym__value] = STATE(108),
    [sym_parenthesized_value] = STATE(108),
    [sym_binary_expression] = STATE(108),
    [sym_color_value] = STATE(108),
    [sym_integer_value] = STATE(108),
    [aux_sym_declaration_repeat1] = STATE(146),
    [sym_float_value] = STATE(108),
    [sym_call_expression] = STATE(108),
    [anon_sym_RBRACE] = ACTIONS(781),
    [aux_sym_integer_value_token1] = ACTIONS(128),
    [sym_identifier] = ACTIONS(130),
    [sym_important] = ACTIONS(785),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(132),
    [sym_plain_value] = ACTIONS(321),
    [anon_sym_LPAREN2] = ACTIONS(136),
    [anon_sym_COMMA] = ACTIONS(329),
    [sym_string_value] = ACTIONS(323),
    [anon_sym_POUND] = ACTIONS(140),
    [anon_sym_SEMI] = ACTIONS(783),
  },
  [175] = {
    [sym__descendant_operator] = ACTIONS(787),
    [anon_sym_RPAREN] = ACTIONS(787),
    [anon_sym_TILDE] = ACTIONS(787),
    [anon_sym_COLON_COLON] = ACTIONS(787),
    [anon_sym_LBRACE] = ACTIONS(787),
    [anon_sym_LBRACK] = ACTIONS(787),
    [anon_sym_COLON] = ACTIONS(789),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(787),
    [anon_sym_COMMA] = ACTIONS(787),
    [anon_sym_GT] = ACTIONS(787),
    [anon_sym_PLUS] = ACTIONS(787),
    [anon_sym_POUND] = ACTIONS(787),
  },
  [176] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(791),
    [anon_sym_SEMI] = ACTIONS(793),
  },
  [177] = {
    [sym_arguments] = STATE(183),
    [anon_sym_STAR] = ACTIONS(154),
    [anon_sym_LPAREN] = ACTIONS(795),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(154),
    [anon_sym_RPAREN] = ACTIONS(154),
    [anon_sym_DASH] = ACTIONS(154),
    [anon_sym_PLUS] = ACTIONS(154),
    [anon_sym_SEMI] = ACTIONS(154),
    [anon_sym_SLASH] = ACTIONS(152),
  },
  [178] = {
    [anon_sym_STAR] = ACTIONS(164),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(164),
    [anon_sym_RPAREN] = ACTIONS(164),
    [anon_sym_DASH] = ACTIONS(164),
    [sym_unit] = ACTIONS(797),
    [anon_sym_PLUS] = ACTIONS(164),
    [anon_sym_SEMI] = ACTIONS(164),
    [anon_sym_SLASH] = ACTIONS(162),
  },
  [179] = {
    [anon_sym_STAR] = ACTIONS(172),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(172),
    [anon_sym_RPAREN] = ACTIONS(172),
    [anon_sym_DASH] = ACTIONS(172),
    [sym_unit] = ACTIONS(799),
    [anon_sym_PLUS] = ACTIONS(172),
    [anon_sym_SEMI] = ACTIONS(172),
    [anon_sym_SLASH] = ACTIONS(170),
  },
  [180] = {
    [anon_sym_RBRACE] = ACTIONS(228),
    [anon_sym_STAR] = ACTIONS(228),
    [anon_sym_ATmedia] = ACTIONS(230),
    [anon_sym_ATimport] = ACTIONS(230),
    [anon_sym_ATnamespace] = ACTIONS(230),
    [sym_identifier] = ACTIONS(228),
    [anon_sym_COLON_COLON] = ACTIONS(228),
    [sym_string_value] = ACTIONS(228),
    [sym_nesting_selector] = ACTIONS(228),
    [aux_sym_keyframes_statement_token1] = ACTIONS(230),
    [anon_sym_ATcharset] = ACTIONS(230),
    [anon_sym_LBRACK] = ACTIONS(228),
    [anon_sym_COLON] = ACTIONS(230),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(228),
    [anon_sym_ATsupports] = ACTIONS(230),
    [sym_at_keyword] = ACTIONS(230),
    [anon_sym_ATkeyframes] = ACTIONS(230),
    [anon_sym_POUND] = ACTIONS(228),
  },
  [181] = {
    [anon_sym_RBRACE] = ACTIONS(313),
    [anon_sym_STAR] = ACTIONS(313),
    [anon_sym_ATmedia] = ACTIONS(315),
    [anon_sym_ATimport] = ACTIONS(315),
    [anon_sym_ATnamespace] = ACTIONS(315),
    [sym_identifier] = ACTIONS(313),
    [anon_sym_COLON_COLON] = ACTIONS(313),
    [sym_string_value] = ACTIONS(313),
    [sym_nesting_selector] = ACTIONS(313),
    [aux_sym_keyframes_statement_token1] = ACTIONS(315),
    [anon_sym_ATcharset] = ACTIONS(315),
    [anon_sym_LBRACK] = ACTIONS(313),
    [anon_sym_COLON] = ACTIONS(315),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(313),
    [anon_sym_ATsupports] = ACTIONS(315),
    [sym_at_keyword] = ACTIONS(315),
    [anon_sym_ATkeyframes] = ACTIONS(315),
    [anon_sym_POUND] = ACTIONS(313),
  },
  [182] = {
    [anon_sym_RBRACE] = ACTIONS(339),
    [anon_sym_STAR] = ACTIONS(339),
    [anon_sym_ATmedia] = ACTIONS(341),
    [anon_sym_ATimport] = ACTIONS(341),
    [anon_sym_ATnamespace] = ACTIONS(341),
    [sym_identifier] = ACTIONS(339),
    [anon_sym_COLON_COLON] = ACTIONS(339),
    [sym_string_value] = ACTIONS(339),
    [sym_nesting_selector] = ACTIONS(339),
    [aux_sym_keyframes_statement_token1] = ACTIONS(341),
    [anon_sym_ATcharset] = ACTIONS(341),
    [anon_sym_LBRACK] = ACTIONS(339),
    [anon_sym_COLON] = ACTIONS(341),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(339),
    [anon_sym_ATsupports] = ACTIONS(341),
    [sym_at_keyword] = ACTIONS(341),
    [anon_sym_ATkeyframes] = ACTIONS(341),
    [anon_sym_POUND] = ACTIONS(339),
  },
  [183] = {
    [anon_sym_STAR] = ACTIONS(351),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(351),
    [anon_sym_RPAREN] = ACTIONS(351),
    [anon_sym_DASH] = ACTIONS(351),
    [anon_sym_PLUS] = ACTIONS(351),
    [anon_sym_SEMI] = ACTIONS(351),
    [anon_sym_SLASH] = ACTIONS(349),
  },
  [184] = {
    [anon_sym_STAR] = ACTIONS(357),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(357),
    [anon_sym_RPAREN] = ACTIONS(357),
    [anon_sym_DASH] = ACTIONS(357),
    [anon_sym_PLUS] = ACTIONS(357),
    [anon_sym_SEMI] = ACTIONS(357),
    [anon_sym_SLASH] = ACTIONS(355),
  },
  [185] = {
    [anon_sym_STAR] = ACTIONS(361),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(361),
    [anon_sym_RPAREN] = ACTIONS(361),
    [anon_sym_DASH] = ACTIONS(361),
    [anon_sym_PLUS] = ACTIONS(361),
    [anon_sym_SEMI] = ACTIONS(361),
    [anon_sym_SLASH] = ACTIONS(359),
  },
  [186] = {
    [anon_sym_STAR] = ACTIONS(365),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(365),
    [anon_sym_RPAREN] = ACTIONS(365),
    [anon_sym_DASH] = ACTIONS(365),
    [anon_sym_PLUS] = ACTIONS(365),
    [anon_sym_SEMI] = ACTIONS(365),
    [anon_sym_SLASH] = ACTIONS(363),
  },
  [187] = {
    [sym__value] = STATE(199),
    [sym_parenthesized_value] = STATE(199),
    [sym_binary_expression] = STATE(199),
    [sym_color_value] = STATE(199),
    [sym_integer_value] = STATE(199),
    [sym_float_value] = STATE(199),
    [sym_call_expression] = STATE(199),
    [aux_sym_integer_value_token1] = ACTIONS(76),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(80),
    [sym_plain_value] = ACTIONS(801),
    [anon_sym_LPAREN2] = ACTIONS(84),
    [sym_string_value] = ACTIONS(803),
    [anon_sym_POUND] = ACTIONS(88),
  },
  [188] = {
    [anon_sym_RBRACE] = ACTIONS(371),
    [anon_sym_STAR] = ACTIONS(371),
    [anon_sym_ATmedia] = ACTIONS(373),
    [anon_sym_ATimport] = ACTIONS(373),
    [anon_sym_ATnamespace] = ACTIONS(373),
    [sym_identifier] = ACTIONS(371),
    [anon_sym_COLON_COLON] = ACTIONS(371),
    [sym_string_value] = ACTIONS(371),
    [sym_nesting_selector] = ACTIONS(371),
    [aux_sym_keyframes_statement_token1] = ACTIONS(373),
    [anon_sym_ATcharset] = ACTIONS(373),
    [anon_sym_LBRACK] = ACTIONS(371),
    [anon_sym_COLON] = ACTIONS(373),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(371),
    [anon_sym_ATsupports] = ACTIONS(373),
    [sym_at_keyword] = ACTIONS(373),
    [anon_sym_ATkeyframes] = ACTIONS(373),
    [anon_sym_POUND] = ACTIONS(371),
  },
  [189] = {
    [anon_sym_RBRACE] = ACTIONS(377),
    [anon_sym_STAR] = ACTIONS(377),
    [anon_sym_ATmedia] = ACTIONS(379),
    [anon_sym_ATimport] = ACTIONS(379),
    [anon_sym_ATnamespace] = ACTIONS(379),
    [sym_identifier] = ACTIONS(377),
    [anon_sym_COLON_COLON] = ACTIONS(377),
    [sym_string_value] = ACTIONS(377),
    [sym_nesting_selector] = ACTIONS(377),
    [aux_sym_keyframes_statement_token1] = ACTIONS(379),
    [anon_sym_ATcharset] = ACTIONS(379),
    [anon_sym_LBRACK] = ACTIONS(377),
    [anon_sym_COLON] = ACTIONS(379),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(377),
    [anon_sym_ATsupports] = ACTIONS(379),
    [sym_at_keyword] = ACTIONS(379),
    [anon_sym_ATkeyframes] = ACTIONS(379),
    [anon_sym_POUND] = ACTIONS(377),
  },
  [190] = {
    [anon_sym_RBRACE] = ACTIONS(389),
    [anon_sym_STAR] = ACTIONS(389),
    [anon_sym_ATmedia] = ACTIONS(391),
    [anon_sym_ATimport] = ACTIONS(391),
    [anon_sym_ATnamespace] = ACTIONS(391),
    [sym_identifier] = ACTIONS(389),
    [anon_sym_COLON_COLON] = ACTIONS(389),
    [sym_string_value] = ACTIONS(389),
    [sym_nesting_selector] = ACTIONS(389),
    [aux_sym_keyframes_statement_token1] = ACTIONS(391),
    [anon_sym_ATcharset] = ACTIONS(391),
    [anon_sym_LBRACK] = ACTIONS(389),
    [anon_sym_COLON] = ACTIONS(391),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(389),
    [anon_sym_ATsupports] = ACTIONS(391),
    [sym_at_keyword] = ACTIONS(391),
    [anon_sym_ATkeyframes] = ACTIONS(391),
    [anon_sym_POUND] = ACTIONS(389),
  },
  [191] = {
    [anon_sym_RBRACE] = ACTIONS(393),
    [anon_sym_STAR] = ACTIONS(393),
    [anon_sym_ATmedia] = ACTIONS(395),
    [anon_sym_ATimport] = ACTIONS(395),
    [anon_sym_ATnamespace] = ACTIONS(395),
    [sym_identifier] = ACTIONS(393),
    [anon_sym_COLON_COLON] = ACTIONS(393),
    [sym_string_value] = ACTIONS(393),
    [sym_nesting_selector] = ACTIONS(393),
    [aux_sym_keyframes_statement_token1] = ACTIONS(395),
    [anon_sym_ATcharset] = ACTIONS(395),
    [anon_sym_LBRACK] = ACTIONS(393),
    [anon_sym_COLON] = ACTIONS(395),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(393),
    [anon_sym_ATsupports] = ACTIONS(395),
    [sym_at_keyword] = ACTIONS(395),
    [anon_sym_ATkeyframes] = ACTIONS(395),
    [anon_sym_POUND] = ACTIONS(393),
  },
  [192] = {
    [anon_sym_RBRACE] = ACTIONS(421),
    [anon_sym_STAR] = ACTIONS(421),
    [anon_sym_ATmedia] = ACTIONS(423),
    [anon_sym_ATimport] = ACTIONS(423),
    [anon_sym_ATnamespace] = ACTIONS(423),
    [sym_identifier] = ACTIONS(421),
    [anon_sym_COLON_COLON] = ACTIONS(421),
    [sym_string_value] = ACTIONS(421),
    [sym_nesting_selector] = ACTIONS(421),
    [aux_sym_keyframes_statement_token1] = ACTIONS(423),
    [anon_sym_ATcharset] = ACTIONS(423),
    [anon_sym_LBRACK] = ACTIONS(421),
    [anon_sym_COLON] = ACTIONS(423),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(421),
    [anon_sym_ATsupports] = ACTIONS(423),
    [sym_at_keyword] = ACTIONS(423),
    [anon_sym_ATkeyframes] = ACTIONS(423),
    [anon_sym_POUND] = ACTIONS(421),
  },
  [193] = {
    [anon_sym_RBRACE] = ACTIONS(429),
    [anon_sym_STAR] = ACTIONS(429),
    [anon_sym_ATmedia] = ACTIONS(431),
    [anon_sym_ATimport] = ACTIONS(431),
    [anon_sym_ATnamespace] = ACTIONS(431),
    [sym_identifier] = ACTIONS(429),
    [anon_sym_COLON_COLON] = ACTIONS(429),
    [sym_string_value] = ACTIONS(429),
    [sym_nesting_selector] = ACTIONS(429),
    [aux_sym_keyframes_statement_token1] = ACTIONS(431),
    [anon_sym_ATcharset] = ACTIONS(431),
    [anon_sym_LBRACK] = ACTIONS(429),
    [anon_sym_COLON] = ACTIONS(431),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(429),
    [anon_sym_ATsupports] = ACTIONS(431),
    [sym_at_keyword] = ACTIONS(431),
    [anon_sym_ATkeyframes] = ACTIONS(431),
    [anon_sym_POUND] = ACTIONS(429),
  },
  [194] = {
    [anon_sym_RBRACE] = ACTIONS(435),
    [anon_sym_STAR] = ACTIONS(435),
    [anon_sym_ATmedia] = ACTIONS(437),
    [anon_sym_ATimport] = ACTIONS(437),
    [anon_sym_ATnamespace] = ACTIONS(437),
    [sym_identifier] = ACTIONS(435),
    [anon_sym_COLON_COLON] = ACTIONS(435),
    [sym_string_value] = ACTIONS(435),
    [sym_nesting_selector] = ACTIONS(435),
    [aux_sym_keyframes_statement_token1] = ACTIONS(437),
    [anon_sym_ATcharset] = ACTIONS(437),
    [anon_sym_LBRACK] = ACTIONS(435),
    [anon_sym_COLON] = ACTIONS(437),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(435),
    [anon_sym_ATsupports] = ACTIONS(437),
    [sym_at_keyword] = ACTIONS(437),
    [anon_sym_ATkeyframes] = ACTIONS(437),
    [anon_sym_POUND] = ACTIONS(435),
  },
  [195] = {
    [anon_sym_RBRACE] = ACTIONS(482),
    [anon_sym_STAR] = ACTIONS(482),
    [anon_sym_ATmedia] = ACTIONS(484),
    [anon_sym_ATimport] = ACTIONS(484),
    [anon_sym_ATnamespace] = ACTIONS(484),
    [sym_identifier] = ACTIONS(482),
    [anon_sym_COLON_COLON] = ACTIONS(482),
    [sym_string_value] = ACTIONS(482),
    [sym_nesting_selector] = ACTIONS(482),
    [aux_sym_keyframes_statement_token1] = ACTIONS(484),
    [anon_sym_ATcharset] = ACTIONS(484),
    [anon_sym_LBRACK] = ACTIONS(482),
    [anon_sym_COLON] = ACTIONS(484),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(482),
    [anon_sym_ATsupports] = ACTIONS(484),
    [sym_at_keyword] = ACTIONS(484),
    [anon_sym_ATkeyframes] = ACTIONS(484),
    [anon_sym_POUND] = ACTIONS(482),
  },
  [196] = {
    [anon_sym_RBRACE] = ACTIONS(509),
    [anon_sym_STAR] = ACTIONS(509),
    [anon_sym_ATmedia] = ACTIONS(511),
    [anon_sym_ATimport] = ACTIONS(511),
    [anon_sym_ATnamespace] = ACTIONS(511),
    [sym_identifier] = ACTIONS(509),
    [anon_sym_COLON_COLON] = ACTIONS(509),
    [sym_string_value] = ACTIONS(509),
    [sym_nesting_selector] = ACTIONS(509),
    [aux_sym_keyframes_statement_token1] = ACTIONS(511),
    [anon_sym_ATcharset] = ACTIONS(511),
    [anon_sym_LBRACK] = ACTIONS(509),
    [anon_sym_COLON] = ACTIONS(511),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(509),
    [anon_sym_ATsupports] = ACTIONS(511),
    [sym_at_keyword] = ACTIONS(511),
    [anon_sym_ATkeyframes] = ACTIONS(511),
    [anon_sym_POUND] = ACTIONS(509),
  },
  [197] = {
    [anon_sym_STAR] = ACTIONS(515),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(515),
    [anon_sym_RPAREN] = ACTIONS(515),
    [anon_sym_DASH] = ACTIONS(515),
    [anon_sym_PLUS] = ACTIONS(515),
    [anon_sym_SEMI] = ACTIONS(515),
    [anon_sym_SLASH] = ACTIONS(513),
  },
  [198] = {
    [anon_sym_STAR] = ACTIONS(527),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(527),
    [anon_sym_RPAREN] = ACTIONS(527),
    [anon_sym_DASH] = ACTIONS(527),
    [anon_sym_PLUS] = ACTIONS(527),
    [anon_sym_SEMI] = ACTIONS(527),
    [anon_sym_SLASH] = ACTIONS(525),
  },
  [199] = {
    [anon_sym_STAR] = ACTIONS(531),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(531),
    [anon_sym_RPAREN] = ACTIONS(531),
    [anon_sym_DASH] = ACTIONS(531),
    [anon_sym_PLUS] = ACTIONS(531),
    [anon_sym_SEMI] = ACTIONS(531),
    [anon_sym_SLASH] = ACTIONS(529),
  },
  [200] = {
    [anon_sym_RBRACE] = ACTIONS(533),
    [anon_sym_STAR] = ACTIONS(533),
    [anon_sym_ATmedia] = ACTIONS(535),
    [anon_sym_ATimport] = ACTIONS(535),
    [anon_sym_ATnamespace] = ACTIONS(535),
    [sym_identifier] = ACTIONS(533),
    [anon_sym_COLON_COLON] = ACTIONS(533),
    [sym_string_value] = ACTIONS(533),
    [sym_nesting_selector] = ACTIONS(533),
    [aux_sym_keyframes_statement_token1] = ACTIONS(535),
    [anon_sym_ATcharset] = ACTIONS(535),
    [anon_sym_LBRACK] = ACTIONS(533),
    [anon_sym_COLON] = ACTIONS(535),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(533),
    [anon_sym_ATsupports] = ACTIONS(535),
    [sym_at_keyword] = ACTIONS(535),
    [anon_sym_ATkeyframes] = ACTIONS(535),
    [anon_sym_POUND] = ACTIONS(533),
  },
  [201] = {
    [anon_sym_RBRACE] = ACTIONS(539),
    [anon_sym_STAR] = ACTIONS(539),
    [anon_sym_ATmedia] = ACTIONS(541),
    [anon_sym_ATimport] = ACTIONS(541),
    [anon_sym_ATnamespace] = ACTIONS(541),
    [sym_identifier] = ACTIONS(539),
    [anon_sym_COLON_COLON] = ACTIONS(539),
    [sym_string_value] = ACTIONS(539),
    [sym_nesting_selector] = ACTIONS(539),
    [aux_sym_keyframes_statement_token1] = ACTIONS(541),
    [anon_sym_ATcharset] = ACTIONS(541),
    [anon_sym_LBRACK] = ACTIONS(539),
    [anon_sym_COLON] = ACTIONS(541),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(539),
    [anon_sym_ATsupports] = ACTIONS(541),
    [sym_at_keyword] = ACTIONS(541),
    [anon_sym_ATkeyframes] = ACTIONS(541),
    [anon_sym_POUND] = ACTIONS(539),
  },
  [202] = {
    [anon_sym_RBRACE] = ACTIONS(543),
    [anon_sym_STAR] = ACTIONS(543),
    [anon_sym_ATmedia] = ACTIONS(545),
    [anon_sym_ATimport] = ACTIONS(545),
    [anon_sym_ATnamespace] = ACTIONS(545),
    [sym_identifier] = ACTIONS(543),
    [anon_sym_COLON_COLON] = ACTIONS(543),
    [sym_string_value] = ACTIONS(543),
    [sym_nesting_selector] = ACTIONS(543),
    [aux_sym_keyframes_statement_token1] = ACTIONS(545),
    [anon_sym_ATcharset] = ACTIONS(545),
    [anon_sym_LBRACK] = ACTIONS(543),
    [anon_sym_COLON] = ACTIONS(545),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(543),
    [anon_sym_ATsupports] = ACTIONS(545),
    [sym_at_keyword] = ACTIONS(545),
    [anon_sym_ATkeyframes] = ACTIONS(545),
    [anon_sym_POUND] = ACTIONS(543),
  },
  [203] = {
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
    [anon_sym_LBRACK] = ACTIONS(579),
    [anon_sym_COLON] = ACTIONS(581),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(579),
    [anon_sym_ATsupports] = ACTIONS(581),
    [sym_at_keyword] = ACTIONS(581),
    [anon_sym_ATkeyframes] = ACTIONS(581),
    [anon_sym_POUND] = ACTIONS(579),
  },
  [204] = {
    [anon_sym_RBRACE] = ACTIONS(632),
    [anon_sym_STAR] = ACTIONS(632),
    [anon_sym_ATmedia] = ACTIONS(634),
    [anon_sym_ATimport] = ACTIONS(634),
    [anon_sym_ATnamespace] = ACTIONS(634),
    [sym_identifier] = ACTIONS(632),
    [anon_sym_COLON_COLON] = ACTIONS(632),
    [sym_string_value] = ACTIONS(632),
    [sym_nesting_selector] = ACTIONS(632),
    [aux_sym_keyframes_statement_token1] = ACTIONS(634),
    [anon_sym_ATcharset] = ACTIONS(634),
    [anon_sym_LBRACK] = ACTIONS(632),
    [anon_sym_COLON] = ACTIONS(634),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(632),
    [anon_sym_ATsupports] = ACTIONS(634),
    [sym_at_keyword] = ACTIONS(634),
    [anon_sym_ATkeyframes] = ACTIONS(634),
    [anon_sym_POUND] = ACTIONS(632),
  },
  [205] = {
    [anon_sym_RBRACE] = ACTIONS(648),
    [anon_sym_STAR] = ACTIONS(648),
    [anon_sym_ATmedia] = ACTIONS(650),
    [anon_sym_ATimport] = ACTIONS(650),
    [anon_sym_ATnamespace] = ACTIONS(650),
    [sym_identifier] = ACTIONS(648),
    [anon_sym_COLON_COLON] = ACTIONS(648),
    [sym_string_value] = ACTIONS(648),
    [sym_nesting_selector] = ACTIONS(648),
    [aux_sym_keyframes_statement_token1] = ACTIONS(650),
    [anon_sym_ATcharset] = ACTIONS(650),
    [anon_sym_LBRACK] = ACTIONS(648),
    [anon_sym_COLON] = ACTIONS(650),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(648),
    [anon_sym_ATsupports] = ACTIONS(650),
    [sym_at_keyword] = ACTIONS(650),
    [anon_sym_ATkeyframes] = ACTIONS(650),
    [anon_sym_POUND] = ACTIONS(648),
  },
  [206] = {
    [anon_sym_STAR] = ACTIONS(688),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(688),
    [anon_sym_RPAREN] = ACTIONS(688),
    [anon_sym_DASH] = ACTIONS(688),
    [anon_sym_PLUS] = ACTIONS(688),
    [anon_sym_SEMI] = ACTIONS(688),
    [anon_sym_SLASH] = ACTIONS(686),
  },
  [207] = {
    [anon_sym_RBRACE] = ACTIONS(715),
    [anon_sym_STAR] = ACTIONS(715),
    [anon_sym_ATmedia] = ACTIONS(717),
    [anon_sym_ATimport] = ACTIONS(717),
    [anon_sym_ATnamespace] = ACTIONS(717),
    [sym_identifier] = ACTIONS(715),
    [anon_sym_COLON_COLON] = ACTIONS(715),
    [sym_string_value] = ACTIONS(715),
    [sym_nesting_selector] = ACTIONS(715),
    [aux_sym_keyframes_statement_token1] = ACTIONS(717),
    [anon_sym_ATcharset] = ACTIONS(717),
    [anon_sym_LBRACK] = ACTIONS(715),
    [anon_sym_COLON] = ACTIONS(717),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(715),
    [anon_sym_ATsupports] = ACTIONS(717),
    [sym_at_keyword] = ACTIONS(717),
    [anon_sym_ATkeyframes] = ACTIONS(717),
    [anon_sym_POUND] = ACTIONS(715),
  },
  [208] = {
    [anon_sym_RBRACE] = ACTIONS(721),
    [anon_sym_STAR] = ACTIONS(721),
    [anon_sym_ATmedia] = ACTIONS(723),
    [anon_sym_ATimport] = ACTIONS(723),
    [anon_sym_ATnamespace] = ACTIONS(723),
    [sym_identifier] = ACTIONS(721),
    [anon_sym_COLON_COLON] = ACTIONS(721),
    [sym_string_value] = ACTIONS(721),
    [sym_nesting_selector] = ACTIONS(721),
    [aux_sym_keyframes_statement_token1] = ACTIONS(723),
    [anon_sym_ATcharset] = ACTIONS(723),
    [anon_sym_LBRACK] = ACTIONS(721),
    [anon_sym_COLON] = ACTIONS(723),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(721),
    [anon_sym_ATsupports] = ACTIONS(723),
    [sym_at_keyword] = ACTIONS(723),
    [anon_sym_ATkeyframes] = ACTIONS(723),
    [anon_sym_POUND] = ACTIONS(721),
  },
  [209] = {
    [anon_sym_RBRACE] = ACTIONS(751),
    [anon_sym_STAR] = ACTIONS(751),
    [anon_sym_ATmedia] = ACTIONS(753),
    [anon_sym_ATimport] = ACTIONS(753),
    [anon_sym_ATnamespace] = ACTIONS(753),
    [sym_identifier] = ACTIONS(751),
    [anon_sym_COLON_COLON] = ACTIONS(751),
    [sym_string_value] = ACTIONS(751),
    [sym_nesting_selector] = ACTIONS(751),
    [aux_sym_keyframes_statement_token1] = ACTIONS(753),
    [anon_sym_ATcharset] = ACTIONS(753),
    [anon_sym_LBRACK] = ACTIONS(751),
    [anon_sym_COLON] = ACTIONS(753),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(751),
    [anon_sym_ATsupports] = ACTIONS(753),
    [sym_at_keyword] = ACTIONS(753),
    [anon_sym_ATkeyframes] = ACTIONS(753),
    [anon_sym_POUND] = ACTIONS(751),
  },
  [210] = {
    [anon_sym_RBRACE] = ACTIONS(757),
    [anon_sym_STAR] = ACTIONS(757),
    [anon_sym_ATmedia] = ACTIONS(759),
    [anon_sym_ATimport] = ACTIONS(759),
    [anon_sym_ATnamespace] = ACTIONS(759),
    [sym_identifier] = ACTIONS(757),
    [anon_sym_COLON_COLON] = ACTIONS(757),
    [sym_string_value] = ACTIONS(757),
    [sym_nesting_selector] = ACTIONS(757),
    [aux_sym_keyframes_statement_token1] = ACTIONS(759),
    [anon_sym_ATcharset] = ACTIONS(759),
    [anon_sym_LBRACK] = ACTIONS(757),
    [anon_sym_COLON] = ACTIONS(759),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(757),
    [anon_sym_ATsupports] = ACTIONS(759),
    [sym_at_keyword] = ACTIONS(759),
    [anon_sym_ATkeyframes] = ACTIONS(759),
    [anon_sym_POUND] = ACTIONS(757),
  },
  [211] = {
    [anon_sym_STAR] = ACTIONS(767),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(767),
    [anon_sym_RPAREN] = ACTIONS(767),
    [anon_sym_DASH] = ACTIONS(767),
    [anon_sym_PLUS] = ACTIONS(767),
    [anon_sym_SEMI] = ACTIONS(767),
    [anon_sym_SLASH] = ACTIONS(765),
  },
  [212] = {
    [sym_arguments] = STATE(215),
    [aux_sym_integer_value_token1] = ACTIONS(152),
    [anon_sym_STAR] = ACTIONS(154),
    [sym_identifier] = ACTIONS(152),
    [sym_important] = ACTIONS(154),
    [anon_sym_RBRACE] = ACTIONS(154),
    [anon_sym_RPAREN] = ACTIONS(154),
    [sym_plain_value] = ACTIONS(152),
    [sym_string_value] = ACTIONS(154),
    [anon_sym_SLASH] = ACTIONS(152),
    [anon_sym_SEMI] = ACTIONS(154),
    [anon_sym_LPAREN] = ACTIONS(553),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(152),
    [anon_sym_DASH] = ACTIONS(152),
    [anon_sym_COMMA] = ACTIONS(154),
    [anon_sym_LPAREN2] = ACTIONS(152),
    [anon_sym_PLUS] = ACTIONS(152),
    [anon_sym_POUND] = ACTIONS(154),
  },
  [213] = {
    [aux_sym_integer_value_token1] = ACTIONS(162),
    [anon_sym_STAR] = ACTIONS(164),
    [sym_identifier] = ACTIONS(162),
    [sym_important] = ACTIONS(164),
    [anon_sym_RBRACE] = ACTIONS(164),
    [anon_sym_RPAREN] = ACTIONS(164),
    [sym_plain_value] = ACTIONS(162),
    [sym_unit] = ACTIONS(805),
    [sym_string_value] = ACTIONS(164),
    [anon_sym_SLASH] = ACTIONS(162),
    [anon_sym_SEMI] = ACTIONS(164),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(162),
    [anon_sym_DASH] = ACTIONS(162),
    [anon_sym_COMMA] = ACTIONS(164),
    [anon_sym_LPAREN2] = ACTIONS(164),
    [anon_sym_PLUS] = ACTIONS(162),
    [anon_sym_POUND] = ACTIONS(164),
  },
  [214] = {
    [aux_sym_integer_value_token1] = ACTIONS(170),
    [anon_sym_STAR] = ACTIONS(172),
    [sym_identifier] = ACTIONS(170),
    [sym_important] = ACTIONS(172),
    [anon_sym_RBRACE] = ACTIONS(172),
    [anon_sym_RPAREN] = ACTIONS(172),
    [sym_plain_value] = ACTIONS(170),
    [sym_unit] = ACTIONS(807),
    [sym_string_value] = ACTIONS(172),
    [anon_sym_SLASH] = ACTIONS(170),
    [anon_sym_SEMI] = ACTIONS(172),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(170),
    [anon_sym_DASH] = ACTIONS(170),
    [anon_sym_COMMA] = ACTIONS(172),
    [anon_sym_LPAREN2] = ACTIONS(172),
    [anon_sym_PLUS] = ACTIONS(170),
    [anon_sym_POUND] = ACTIONS(172),
  },
  [215] = {
    [aux_sym_integer_value_token1] = ACTIONS(349),
    [anon_sym_STAR] = ACTIONS(351),
    [sym_identifier] = ACTIONS(349),
    [sym_important] = ACTIONS(351),
    [anon_sym_RBRACE] = ACTIONS(351),
    [anon_sym_RPAREN] = ACTIONS(351),
    [sym_plain_value] = ACTIONS(349),
    [sym_string_value] = ACTIONS(351),
    [anon_sym_SLASH] = ACTIONS(349),
    [anon_sym_SEMI] = ACTIONS(351),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(349),
    [anon_sym_DASH] = ACTIONS(349),
    [anon_sym_COMMA] = ACTIONS(351),
    [anon_sym_LPAREN2] = ACTIONS(351),
    [anon_sym_PLUS] = ACTIONS(349),
    [anon_sym_POUND] = ACTIONS(351),
  },
  [216] = {
    [aux_sym_integer_value_token1] = ACTIONS(355),
    [anon_sym_STAR] = ACTIONS(357),
    [sym_identifier] = ACTIONS(355),
    [sym_important] = ACTIONS(357),
    [anon_sym_RBRACE] = ACTIONS(357),
    [anon_sym_RPAREN] = ACTIONS(357),
    [sym_plain_value] = ACTIONS(355),
    [sym_string_value] = ACTIONS(357),
    [anon_sym_SLASH] = ACTIONS(355),
    [anon_sym_SEMI] = ACTIONS(357),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(355),
    [anon_sym_DASH] = ACTIONS(355),
    [anon_sym_COMMA] = ACTIONS(357),
    [anon_sym_LPAREN2] = ACTIONS(357),
    [anon_sym_PLUS] = ACTIONS(355),
    [anon_sym_POUND] = ACTIONS(357),
  },
  [217] = {
    [aux_sym_integer_value_token1] = ACTIONS(359),
    [anon_sym_STAR] = ACTIONS(361),
    [sym_identifier] = ACTIONS(359),
    [sym_important] = ACTIONS(361),
    [anon_sym_RBRACE] = ACTIONS(361),
    [anon_sym_RPAREN] = ACTIONS(361),
    [sym_plain_value] = ACTIONS(359),
    [sym_string_value] = ACTIONS(361),
    [anon_sym_SLASH] = ACTIONS(359),
    [anon_sym_SEMI] = ACTIONS(361),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(359),
    [anon_sym_DASH] = ACTIONS(359),
    [anon_sym_COMMA] = ACTIONS(361),
    [anon_sym_LPAREN2] = ACTIONS(361),
    [anon_sym_PLUS] = ACTIONS(359),
    [anon_sym_POUND] = ACTIONS(361),
  },
  [218] = {
    [aux_sym_integer_value_token1] = ACTIONS(363),
    [anon_sym_STAR] = ACTIONS(365),
    [sym_identifier] = ACTIONS(363),
    [sym_important] = ACTIONS(365),
    [anon_sym_RBRACE] = ACTIONS(365),
    [anon_sym_RPAREN] = ACTIONS(365),
    [sym_plain_value] = ACTIONS(363),
    [sym_string_value] = ACTIONS(365),
    [anon_sym_SLASH] = ACTIONS(363),
    [anon_sym_SEMI] = ACTIONS(365),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(363),
    [anon_sym_DASH] = ACTIONS(363),
    [anon_sym_COMMA] = ACTIONS(365),
    [anon_sym_LPAREN2] = ACTIONS(365),
    [anon_sym_PLUS] = ACTIONS(363),
    [anon_sym_POUND] = ACTIONS(365),
  },
  [219] = {
    [sym__value] = STATE(223),
    [sym_parenthesized_value] = STATE(223),
    [sym_binary_expression] = STATE(223),
    [sym_color_value] = STATE(223),
    [sym_integer_value] = STATE(223),
    [sym_float_value] = STATE(223),
    [sym_call_expression] = STATE(223),
    [aux_sym_integer_value_token1] = ACTIONS(128),
    [sym_identifier] = ACTIONS(130),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(132),
    [sym_plain_value] = ACTIONS(809),
    [anon_sym_LPAREN2] = ACTIONS(136),
    [sym_string_value] = ACTIONS(811),
    [anon_sym_POUND] = ACTIONS(140),
  },
  [220] = {
    [anon_sym_RBRACE] = ACTIONS(421),
    [aux_sym_integer_value_token1] = ACTIONS(421),
    [sym_to] = ACTIONS(421),
    [sym_comment] = ACTIONS(3),
    [sym_from] = ACTIONS(421),
  },
  [221] = {
    [aux_sym_integer_value_token1] = ACTIONS(513),
    [anon_sym_STAR] = ACTIONS(515),
    [sym_identifier] = ACTIONS(513),
    [sym_important] = ACTIONS(515),
    [anon_sym_RBRACE] = ACTIONS(515),
    [anon_sym_RPAREN] = ACTIONS(515),
    [sym_plain_value] = ACTIONS(513),
    [sym_string_value] = ACTIONS(515),
    [anon_sym_SLASH] = ACTIONS(513),
    [anon_sym_SEMI] = ACTIONS(515),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(513),
    [anon_sym_DASH] = ACTIONS(513),
    [anon_sym_COMMA] = ACTIONS(515),
    [anon_sym_LPAREN2] = ACTIONS(515),
    [anon_sym_PLUS] = ACTIONS(513),
    [anon_sym_POUND] = ACTIONS(515),
  },
  [222] = {
    [aux_sym_integer_value_token1] = ACTIONS(525),
    [anon_sym_STAR] = ACTIONS(527),
    [sym_identifier] = ACTIONS(525),
    [sym_important] = ACTIONS(527),
    [anon_sym_RBRACE] = ACTIONS(527),
    [anon_sym_RPAREN] = ACTIONS(527),
    [sym_plain_value] = ACTIONS(525),
    [sym_string_value] = ACTIONS(527),
    [anon_sym_SLASH] = ACTIONS(525),
    [anon_sym_SEMI] = ACTIONS(527),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(525),
    [anon_sym_DASH] = ACTIONS(525),
    [anon_sym_COMMA] = ACTIONS(527),
    [anon_sym_LPAREN2] = ACTIONS(527),
    [anon_sym_PLUS] = ACTIONS(525),
    [anon_sym_POUND] = ACTIONS(527),
  },
  [223] = {
    [aux_sym_integer_value_token1] = ACTIONS(529),
    [anon_sym_STAR] = ACTIONS(531),
    [sym_identifier] = ACTIONS(529),
    [sym_important] = ACTIONS(531),
    [anon_sym_RBRACE] = ACTIONS(531),
    [anon_sym_RPAREN] = ACTIONS(531),
    [sym_plain_value] = ACTIONS(529),
    [sym_string_value] = ACTIONS(531),
    [anon_sym_SLASH] = ACTIONS(529),
    [anon_sym_SEMI] = ACTIONS(531),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(529),
    [anon_sym_DASH] = ACTIONS(529),
    [anon_sym_COMMA] = ACTIONS(531),
    [anon_sym_LPAREN2] = ACTIONS(531),
    [anon_sym_PLUS] = ACTIONS(529),
    [anon_sym_POUND] = ACTIONS(531),
  },
  [224] = {
    [anon_sym_RBRACE] = ACTIONS(579),
    [aux_sym_integer_value_token1] = ACTIONS(579),
    [sym_to] = ACTIONS(579),
    [sym_comment] = ACTIONS(3),
    [sym_from] = ACTIONS(579),
  },
  [225] = {
    [aux_sym_integer_value_token1] = ACTIONS(686),
    [anon_sym_STAR] = ACTIONS(688),
    [sym_identifier] = ACTIONS(686),
    [sym_important] = ACTIONS(688),
    [anon_sym_RBRACE] = ACTIONS(688),
    [anon_sym_RPAREN] = ACTIONS(688),
    [sym_plain_value] = ACTIONS(686),
    [sym_string_value] = ACTIONS(688),
    [anon_sym_SLASH] = ACTIONS(686),
    [anon_sym_SEMI] = ACTIONS(688),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(686),
    [anon_sym_DASH] = ACTIONS(686),
    [anon_sym_COMMA] = ACTIONS(688),
    [anon_sym_LPAREN2] = ACTIONS(688),
    [anon_sym_PLUS] = ACTIONS(686),
    [anon_sym_POUND] = ACTIONS(688),
  },
  [226] = {
    [anon_sym_RBRACE] = ACTIONS(751),
    [aux_sym_integer_value_token1] = ACTIONS(751),
    [sym_to] = ACTIONS(751),
    [sym_comment] = ACTIONS(3),
    [sym_from] = ACTIONS(751),
  },
  [227] = {
    [aux_sym_integer_value_token1] = ACTIONS(765),
    [anon_sym_STAR] = ACTIONS(767),
    [sym_identifier] = ACTIONS(765),
    [sym_important] = ACTIONS(767),
    [anon_sym_RBRACE] = ACTIONS(767),
    [anon_sym_RPAREN] = ACTIONS(767),
    [sym_plain_value] = ACTIONS(765),
    [sym_string_value] = ACTIONS(767),
    [anon_sym_SLASH] = ACTIONS(765),
    [anon_sym_SEMI] = ACTIONS(767),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(765),
    [anon_sym_DASH] = ACTIONS(765),
    [anon_sym_COMMA] = ACTIONS(767),
    [anon_sym_LPAREN2] = ACTIONS(767),
    [anon_sym_PLUS] = ACTIONS(765),
    [anon_sym_POUND] = ACTIONS(767),
  },
  [228] = {
    [anon_sym_LBRACE] = ACTIONS(164),
    [sym_comment] = ACTIONS(3),
    [sym_unit] = ACTIONS(813),
  },
  [229] = {
    [sym_feature_query] = STATE(238),
    [sym__query] = STATE(238),
    [sym_unary_query] = STATE(238),
    [sym_selector_query] = STATE(238),
    [sym_parenthesized_query] = STATE(238),
    [sym_binary_query] = STATE(238),
    [sym_block] = STATE(180),
    [anon_sym_not] = ACTIONS(42),
    [sym_identifier] = ACTIONS(46),
    [sym_comment] = ACTIONS(3),
    [anon_sym_only] = ACTIONS(42),
    [anon_sym_LPAREN2] = ACTIONS(44),
    [anon_sym_selector] = ACTIONS(48),
    [anon_sym_LBRACE] = ACTIONS(815),
    [anon_sym_SEMI] = ACTIONS(817),
  },
  [230] = {
    [sym_block] = STATE(181),
    [anon_sym_LBRACE] = ACTIONS(815),
    [sym_comment] = ACTIONS(3),
  },
  [231] = {
    [aux_sym_import_statement_repeat1] = STATE(241),
    [sym_block] = STATE(182),
    [anon_sym_COMMA] = ACTIONS(148),
    [anon_sym_or] = ACTIONS(150),
    [anon_sym_LBRACE] = ACTIONS(815),
    [sym_comment] = ACTIONS(3),
    [anon_sym_and] = ACTIONS(150),
  },
  [232] = {
    [sym_comment] = ACTIONS(3),
    [aux_sym_color_value_token1] = ACTIONS(819),
  },
  [233] = {
    [sym_feature_query] = STATE(244),
    [sym_unary_query] = STATE(244),
    [sym_selector_query] = STATE(244),
    [sym_parenthesized_query] = STATE(244),
    [sym_binary_query] = STATE(244),
    [sym__query] = STATE(244),
    [anon_sym_not] = ACTIONS(42),
    [sym_identifier] = ACTIONS(46),
    [anon_sym_STAR] = ACTIONS(176),
    [sym_comment] = ACTIONS(3),
    [anon_sym_only] = ACTIONS(42),
    [anon_sym_DASH] = ACTIONS(178),
    [anon_sym_LPAREN2] = ACTIONS(44),
    [anon_sym_selector] = ACTIONS(48),
    [anon_sym_PLUS] = ACTIONS(176),
    [anon_sym_SLASH] = ACTIONS(178),
    [anon_sym_SEMI] = ACTIONS(821),
  },
  [234] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(823),
  },
  [235] = {
    [sym_keyframe_block_list] = STATE(190),
    [anon_sym_LBRACE] = ACTIONS(825),
    [sym_comment] = ACTIONS(3),
  },
  [236] = {
    [anon_sym_DASH] = ACTIONS(194),
    [anon_sym_STAR] = ACTIONS(194),
    [sym_comment] = ACTIONS(3),
    [anon_sym_PLUS] = ACTIONS(194),
    [anon_sym_SLASH] = ACTIONS(196),
    [anon_sym_SEMI] = ACTIONS(827),
  },
  [237] = {
    [sym_media_statement] = STATE(247),
    [sym_charset_statement] = STATE(247),
    [sym_supports_statement] = STATE(247),
    [sym_at_rule] = STATE(247),
    [sym__selector] = STATE(16),
    [sym_universal_selector] = STATE(16),
    [sym_attribute_selector] = STATE(16),
    [sym_child_selector] = STATE(16),
    [sym_declaration] = STATE(247),
    [aux_sym_block_repeat1] = STATE(247),
    [sym_last_declaration] = STATE(248),
    [sym_import_statement] = STATE(247),
    [sym_pseudo_element_selector] = STATE(16),
    [sym_id_selector] = STATE(16),
    [sym_adjacent_sibling_selector] = STATE(16),
    [sym_namespace_statement] = STATE(247),
    [sym_keyframes_statement] = STATE(247),
    [sym_rule_set] = STATE(247),
    [sym_selectors] = STATE(230),
    [sym_class_selector] = STATE(16),
    [sym_pseudo_class_selector] = STATE(16),
    [sym_descendant_selector] = STATE(16),
    [sym_sibling_selector] = STATE(16),
    [anon_sym_RBRACE] = ACTIONS(829),
    [sym_identifier] = ACTIONS(212),
    [anon_sym_ATmedia] = ACTIONS(214),
    [anon_sym_ATimport] = ACTIONS(216),
    [anon_sym_ATnamespace] = ACTIONS(218),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_COLON_COLON] = ACTIONS(15),
    [sym_string_value] = ACTIONS(17),
    [sym_nesting_selector] = ACTIONS(17),
    [aux_sym_keyframes_statement_token1] = ACTIONS(220),
    [anon_sym_ATcharset] = ACTIONS(222),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [sym_at_keyword] = ACTIONS(224),
    [anon_sym_ATsupports] = ACTIONS(226),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_ATkeyframes] = ACTIONS(220),
    [anon_sym_POUND] = ACTIONS(35),
  },
  [238] = {
    [aux_sym_import_statement_repeat1] = STATE(249),
    [sym_block] = STATE(193),
    [anon_sym_COMMA] = ACTIONS(148),
    [anon_sym_or] = ACTIONS(150),
    [anon_sym_LBRACE] = ACTIONS(815),
    [sym_comment] = ACTIONS(3),
    [anon_sym_and] = ACTIONS(150),
    [anon_sym_SEMI] = ACTIONS(831),
  },
  [239] = {
    [sym_block] = STATE(194),
    [anon_sym_or] = ACTIONS(150),
    [anon_sym_LBRACE] = ACTIONS(815),
    [sym_comment] = ACTIONS(3),
    [anon_sym_and] = ACTIONS(150),
  },
  [240] = {
    [sym__value] = STATE(108),
    [sym_parenthesized_value] = STATE(108),
    [sym_binary_expression] = STATE(108),
    [sym_color_value] = STATE(108),
    [sym_integer_value] = STATE(108),
    [aux_sym_declaration_repeat1] = STATE(251),
    [sym_float_value] = STATE(108),
    [sym_call_expression] = STATE(108),
    [aux_sym_integer_value_token1] = ACTIONS(128),
    [sym_identifier] = ACTIONS(130),
    [anon_sym_STAR] = ACTIONS(317),
    [sym_important] = ACTIONS(833),
    [sym_plain_value] = ACTIONS(321),
    [sym_string_value] = ACTIONS(323),
    [anon_sym_SLASH] = ACTIONS(325),
    [anon_sym_SEMI] = ACTIONS(749),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(132),
    [anon_sym_DASH] = ACTIONS(325),
    [anon_sym_LPAREN2] = ACTIONS(136),
    [anon_sym_COMMA] = ACTIONS(329),
    [anon_sym_PLUS] = ACTIONS(325),
    [anon_sym_POUND] = ACTIONS(140),
  },
  [241] = {
    [aux_sym_import_statement_repeat1] = STATE(115),
    [sym_block] = STATE(196),
    [anon_sym_LBRACE] = ACTIONS(815),
    [anon_sym_COMMA] = ACTIONS(148),
    [sym_comment] = ACTIONS(3),
  },
  [242] = {
    [sym__value] = STATE(118),
    [sym_parenthesized_value] = STATE(118),
    [sym_binary_expression] = STATE(118),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(252),
    [sym_color_value] = STATE(118),
    [sym_integer_value] = STATE(118),
    [sym_float_value] = STATE(118),
    [sym_call_expression] = STATE(118),
    [aux_sym_integer_value_token1] = ACTIONS(128),
    [sym_identifier] = ACTIONS(130),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(132),
    [anon_sym_RPAREN] = ACTIONS(835),
    [sym_plain_value] = ACTIONS(345),
    [anon_sym_LPAREN2] = ACTIONS(136),
    [sym_string_value] = ACTIONS(347),
    [anon_sym_POUND] = ACTIONS(140),
  },
  [243] = {
    [anon_sym_STAR] = ACTIONS(194),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(837),
    [anon_sym_DASH] = ACTIONS(194),
    [anon_sym_PLUS] = ACTIONS(194),
    [anon_sym_SLASH] = ACTIONS(196),
  },
  [244] = {
    [aux_sym_import_statement_repeat1] = STATE(253),
    [anon_sym_COMMA] = ACTIONS(148),
    [anon_sym_or] = ACTIONS(150),
    [sym_comment] = ACTIONS(3),
    [anon_sym_and] = ACTIONS(150),
    [anon_sym_SEMI] = ACTIONS(839),
  },
  [245] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(841),
  },
  [246] = {
    [sym_integer_value] = STATE(126),
    [sym_keyframe_block] = STATE(254),
    [aux_sym_keyframe_block_list_repeat1] = STATE(254),
    [aux_sym_integer_value_token1] = ACTIONS(383),
    [anon_sym_RBRACE] = ACTIONS(843),
    [sym_to] = ACTIONS(387),
    [sym_comment] = ACTIONS(3),
    [sym_from] = ACTIONS(387),
  },
  [247] = {
    [sym_media_statement] = STATE(137),
    [sym_charset_statement] = STATE(137),
    [sym_supports_statement] = STATE(137),
    [sym_at_rule] = STATE(137),
    [sym__selector] = STATE(16),
    [sym_universal_selector] = STATE(16),
    [sym_attribute_selector] = STATE(16),
    [sym_child_selector] = STATE(16),
    [sym_declaration] = STATE(137),
    [aux_sym_block_repeat1] = STATE(137),
    [sym_last_declaration] = STATE(255),
    [sym_import_statement] = STATE(137),
    [sym_pseudo_element_selector] = STATE(16),
    [sym_id_selector] = STATE(16),
    [sym_adjacent_sibling_selector] = STATE(16),
    [sym_namespace_statement] = STATE(137),
    [sym_keyframes_statement] = STATE(137),
    [sym_rule_set] = STATE(137),
    [sym_selectors] = STATE(230),
    [sym_class_selector] = STATE(16),
    [sym_pseudo_class_selector] = STATE(16),
    [sym_descendant_selector] = STATE(16),
    [sym_sibling_selector] = STATE(16),
    [anon_sym_RBRACE] = ACTIONS(845),
    [sym_identifier] = ACTIONS(212),
    [anon_sym_ATmedia] = ACTIONS(214),
    [anon_sym_ATimport] = ACTIONS(216),
    [anon_sym_ATnamespace] = ACTIONS(218),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_COLON_COLON] = ACTIONS(15),
    [sym_string_value] = ACTIONS(17),
    [sym_nesting_selector] = ACTIONS(17),
    [aux_sym_keyframes_statement_token1] = ACTIONS(220),
    [anon_sym_ATcharset] = ACTIONS(222),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [sym_at_keyword] = ACTIONS(224),
    [anon_sym_ATsupports] = ACTIONS(226),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_ATkeyframes] = ACTIONS(220),
    [anon_sym_POUND] = ACTIONS(35),
  },
  [248] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(845),
  },
  [249] = {
    [aux_sym_import_statement_repeat1] = STATE(115),
    [sym_block] = STATE(204),
    [anon_sym_COMMA] = ACTIONS(148),
    [anon_sym_LBRACE] = ACTIONS(815),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(847),
  },
  [250] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(783),
  },
  [251] = {
    [sym__value] = STATE(108),
    [sym_parenthesized_value] = STATE(108),
    [sym_binary_expression] = STATE(108),
    [sym_color_value] = STATE(108),
    [sym_integer_value] = STATE(108),
    [aux_sym_declaration_repeat1] = STATE(146),
    [sym_float_value] = STATE(108),
    [sym_call_expression] = STATE(108),
    [aux_sym_integer_value_token1] = ACTIONS(128),
    [sym_identifier] = ACTIONS(130),
    [sym_important] = ACTIONS(849),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(132),
    [sym_plain_value] = ACTIONS(321),
    [anon_sym_LPAREN2] = ACTIONS(136),
    [anon_sym_COMMA] = ACTIONS(329),
    [sym_string_value] = ACTIONS(323),
    [anon_sym_POUND] = ACTIONS(140),
    [anon_sym_SEMI] = ACTIONS(783),
  },
  [252] = {
    [sym__value] = STATE(118),
    [sym_parenthesized_value] = STATE(118),
    [sym_binary_expression] = STATE(118),
    [aux_sym_arguments_repeat1] = STATE(257),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(152),
    [sym_color_value] = STATE(118),
    [sym_integer_value] = STATE(118),
    [sym_float_value] = STATE(118),
    [sym_call_expression] = STATE(118),
    [aux_sym_integer_value_token1] = ACTIONS(128),
    [sym_identifier] = ACTIONS(130),
    [anon_sym_RPAREN] = ACTIONS(851),
    [sym_plain_value] = ACTIONS(345),
    [sym_string_value] = ACTIONS(347),
    [anon_sym_SEMI] = ACTIONS(523),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(132),
    [anon_sym_LPAREN2] = ACTIONS(136),
    [anon_sym_COMMA] = ACTIONS(523),
    [anon_sym_POUND] = ACTIONS(140),
  },
  [253] = {
    [aux_sym_import_statement_repeat1] = STATE(115),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(148),
    [anon_sym_SEMI] = ACTIONS(853),
  },
  [254] = {
    [sym_integer_value] = STATE(126),
    [sym_keyframe_block] = STATE(156),
    [aux_sym_keyframe_block_list_repeat1] = STATE(156),
    [aux_sym_integer_value_token1] = ACTIONS(383),
    [anon_sym_RBRACE] = ACTIONS(855),
    [sym_to] = ACTIONS(387),
    [sym_comment] = ACTIONS(3),
    [sym_from] = ACTIONS(387),
  },
  [255] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(857),
  },
  [256] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(793),
  },
  [257] = {
    [aux_sym_arguments_repeat1] = STATE(168),
    [anon_sym_COMMA] = ACTIONS(523),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(523),
    [anon_sym_RPAREN] = ACTIONS(859),
  },
  [258] = {
    [sym_comment] = ACTIONS(3),
    [aux_sym_color_value_token1] = ACTIONS(861),
  },
  [259] = {
    [sym_media_statement] = STATE(262),
    [sym_charset_statement] = STATE(262),
    [sym_supports_statement] = STATE(262),
    [sym_at_rule] = STATE(262),
    [sym__selector] = STATE(16),
    [sym_universal_selector] = STATE(16),
    [sym_attribute_selector] = STATE(16),
    [sym_child_selector] = STATE(16),
    [sym_declaration] = STATE(262),
    [aux_sym_block_repeat1] = STATE(262),
    [sym_last_declaration] = STATE(263),
    [sym_import_statement] = STATE(262),
    [sym_pseudo_element_selector] = STATE(16),
    [sym_id_selector] = STATE(16),
    [sym_adjacent_sibling_selector] = STATE(16),
    [sym_namespace_statement] = STATE(262),
    [sym_keyframes_statement] = STATE(262),
    [sym_rule_set] = STATE(262),
    [sym_selectors] = STATE(230),
    [sym_class_selector] = STATE(16),
    [sym_pseudo_class_selector] = STATE(16),
    [sym_descendant_selector] = STATE(16),
    [sym_sibling_selector] = STATE(16),
    [anon_sym_RBRACE] = ACTIONS(863),
    [sym_identifier] = ACTIONS(212),
    [anon_sym_ATmedia] = ACTIONS(214),
    [anon_sym_ATimport] = ACTIONS(216),
    [anon_sym_ATnamespace] = ACTIONS(218),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_COLON_COLON] = ACTIONS(15),
    [sym_string_value] = ACTIONS(17),
    [sym_nesting_selector] = ACTIONS(17),
    [aux_sym_keyframes_statement_token1] = ACTIONS(220),
    [anon_sym_ATcharset] = ACTIONS(222),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [sym_at_keyword] = ACTIONS(224),
    [anon_sym_ATsupports] = ACTIONS(226),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_ATkeyframes] = ACTIONS(220),
    [anon_sym_POUND] = ACTIONS(35),
  },
  [260] = {
    [sym__value] = STATE(118),
    [sym_parenthesized_value] = STATE(118),
    [sym_binary_expression] = STATE(118),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(264),
    [sym_color_value] = STATE(118),
    [sym_integer_value] = STATE(118),
    [sym_float_value] = STATE(118),
    [sym_call_expression] = STATE(118),
    [aux_sym_integer_value_token1] = ACTIONS(128),
    [sym_identifier] = ACTIONS(130),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(132),
    [anon_sym_RPAREN] = ACTIONS(865),
    [sym_plain_value] = ACTIONS(345),
    [anon_sym_LPAREN2] = ACTIONS(136),
    [sym_string_value] = ACTIONS(347),
    [anon_sym_POUND] = ACTIONS(140),
  },
  [261] = {
    [anon_sym_STAR] = ACTIONS(194),
    [sym_comment] = ACTIONS(3),
    [anon_sym_RPAREN] = ACTIONS(867),
    [anon_sym_DASH] = ACTIONS(194),
    [anon_sym_PLUS] = ACTIONS(194),
    [anon_sym_SLASH] = ACTIONS(196),
  },
  [262] = {
    [sym_media_statement] = STATE(137),
    [sym_charset_statement] = STATE(137),
    [sym_supports_statement] = STATE(137),
    [sym_at_rule] = STATE(137),
    [sym__selector] = STATE(16),
    [sym_universal_selector] = STATE(16),
    [sym_attribute_selector] = STATE(16),
    [sym_child_selector] = STATE(16),
    [sym_declaration] = STATE(137),
    [aux_sym_block_repeat1] = STATE(137),
    [sym_last_declaration] = STATE(265),
    [sym_import_statement] = STATE(137),
    [sym_pseudo_element_selector] = STATE(16),
    [sym_id_selector] = STATE(16),
    [sym_adjacent_sibling_selector] = STATE(16),
    [sym_namespace_statement] = STATE(137),
    [sym_keyframes_statement] = STATE(137),
    [sym_rule_set] = STATE(137),
    [sym_selectors] = STATE(230),
    [sym_class_selector] = STATE(16),
    [sym_pseudo_class_selector] = STATE(16),
    [sym_descendant_selector] = STATE(16),
    [sym_sibling_selector] = STATE(16),
    [anon_sym_RBRACE] = ACTIONS(869),
    [sym_identifier] = ACTIONS(212),
    [anon_sym_ATmedia] = ACTIONS(214),
    [anon_sym_ATimport] = ACTIONS(216),
    [anon_sym_ATnamespace] = ACTIONS(218),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_COLON_COLON] = ACTIONS(15),
    [sym_string_value] = ACTIONS(17),
    [sym_nesting_selector] = ACTIONS(17),
    [aux_sym_keyframes_statement_token1] = ACTIONS(220),
    [anon_sym_ATcharset] = ACTIONS(222),
    [anon_sym_LBRACK] = ACTIONS(25),
    [anon_sym_COLON] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [sym_at_keyword] = ACTIONS(224),
    [anon_sym_ATsupports] = ACTIONS(226),
    [anon_sym_DOT] = ACTIONS(33),
    [anon_sym_ATkeyframes] = ACTIONS(220),
    [anon_sym_POUND] = ACTIONS(35),
  },
  [263] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(869),
  },
  [264] = {
    [sym__value] = STATE(118),
    [sym_parenthesized_value] = STATE(118),
    [sym_binary_expression] = STATE(118),
    [aux_sym_arguments_repeat1] = STATE(266),
    [aux_sym_pseudo_class_arguments_repeat1] = STATE(152),
    [sym_color_value] = STATE(118),
    [sym_integer_value] = STATE(118),
    [sym_float_value] = STATE(118),
    [sym_call_expression] = STATE(118),
    [aux_sym_integer_value_token1] = ACTIONS(128),
    [sym_identifier] = ACTIONS(130),
    [anon_sym_RPAREN] = ACTIONS(871),
    [sym_plain_value] = ACTIONS(345),
    [sym_string_value] = ACTIONS(347),
    [anon_sym_SEMI] = ACTIONS(523),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(132),
    [anon_sym_LPAREN2] = ACTIONS(136),
    [anon_sym_COMMA] = ACTIONS(523),
    [anon_sym_POUND] = ACTIONS(140),
  },
  [265] = {
    [sym_comment] = ACTIONS(3),
    [anon_sym_RBRACE] = ACTIONS(873),
  },
  [266] = {
    [aux_sym_arguments_repeat1] = STATE(168),
    [anon_sym_COMMA] = ACTIONS(523),
    [sym_comment] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(523),
    [anon_sym_RPAREN] = ACTIONS(875),
  },
  [267] = {
    [sym_feature_query] = STATE(231),
    [sym_unary_query] = STATE(231),
    [sym_selector_query] = STATE(231),
    [sym_parenthesized_query] = STATE(231),
    [sym_binary_query] = STATE(231),
    [sym__query] = STATE(231),
    [anon_sym_not] = ACTIONS(42),
    [anon_sym_LPAREN2] = ACTIONS(44),
    [sym_identifier] = ACTIONS(46),
    [anon_sym_selector] = ACTIONS(48),
    [sym_comment] = ACTIONS(3),
    [anon_sym_only] = ACTIONS(42),
  },
  [268] = {
    [sym_integer_value] = STATE(233),
    [sym__value] = STATE(233),
    [sym_parenthesized_value] = STATE(233),
    [sym_binary_expression] = STATE(233),
    [sym_float_value] = STATE(233),
    [sym_call_expression] = STATE(233),
    [sym_color_value] = STATE(233),
    [aux_sym_integer_value_token1] = ACTIONS(50),
    [sym_identifier] = ACTIONS(52),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(54),
    [sym_plain_value] = ACTIONS(877),
    [anon_sym_LPAREN2] = ACTIONS(58),
    [sym_string_value] = ACTIONS(879),
    [anon_sym_POUND] = ACTIONS(62),
  },
  [269] = {
    [sym_call_expression] = STATE(234),
    [sym_string_value] = ACTIONS(881),
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(883),
  },
  [270] = {
    [sym_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(885),
  },
  [271] = {
    [sym_integer_value] = STATE(236),
    [sym__value] = STATE(236),
    [sym_parenthesized_value] = STATE(236),
    [sym_binary_expression] = STATE(236),
    [sym_float_value] = STATE(236),
    [sym_call_expression] = STATE(236),
    [sym_color_value] = STATE(236),
    [aux_sym_integer_value_token1] = ACTIONS(76),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(80),
    [sym_plain_value] = ACTIONS(887),
    [anon_sym_LPAREN2] = ACTIONS(84),
    [sym_string_value] = ACTIONS(889),
    [anon_sym_POUND] = ACTIONS(88),
  },
  [272] = {
    [sym_feature_query] = STATE(239),
    [sym_unary_query] = STATE(239),
    [sym_selector_query] = STATE(239),
    [sym_parenthesized_query] = STATE(239),
    [sym_binary_query] = STATE(239),
    [sym__query] = STATE(239),
    [anon_sym_not] = ACTIONS(42),
    [anon_sym_LPAREN2] = ACTIONS(44),
    [sym_identifier] = ACTIONS(46),
    [anon_sym_selector] = ACTIONS(48),
    [sym_comment] = ACTIONS(3),
    [anon_sym_only] = ACTIONS(42),
  },
  [273] = {
    [sym_integer_value] = STATE(240),
    [sym__value] = STATE(240),
    [sym_parenthesized_value] = STATE(240),
    [sym_binary_expression] = STATE(240),
    [sym_float_value] = STATE(240),
    [sym_call_expression] = STATE(240),
    [sym_color_value] = STATE(240),
    [aux_sym_integer_value_token1] = ACTIONS(128),
    [sym_identifier] = ACTIONS(130),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(132),
    [sym_plain_value] = ACTIONS(891),
    [anon_sym_LPAREN2] = ACTIONS(136),
    [sym_string_value] = ACTIONS(893),
    [anon_sym_POUND] = ACTIONS(140),
  },
  [274] = {
    [sym__value] = STATE(243),
    [sym_parenthesized_value] = STATE(243),
    [sym_binary_expression] = STATE(243),
    [sym_color_value] = STATE(243),
    [sym_integer_value] = STATE(243),
    [sym_float_value] = STATE(243),
    [sym_call_expression] = STATE(243),
    [aux_sym_integer_value_token1] = ACTIONS(76),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(80),
    [sym_plain_value] = ACTIONS(895),
    [anon_sym_LPAREN2] = ACTIONS(84),
    [sym_string_value] = ACTIONS(897),
    [anon_sym_POUND] = ACTIONS(88),
  },
  [275] = {
    [sym_arguments] = STATE(68),
    [sym_call_expression] = STATE(245),
    [sym_identifier] = ACTIONS(184),
    [anon_sym_LPAREN] = ACTIONS(156),
    [sym_string_value] = ACTIONS(899),
    [sym_comment] = ACTIONS(3),
  },
  [276] = {
    [sym__value] = STATE(261),
    [sym_parenthesized_value] = STATE(261),
    [sym_binary_expression] = STATE(261),
    [sym_color_value] = STATE(261),
    [sym_integer_value] = STATE(261),
    [sym_float_value] = STATE(261),
    [sym_call_expression] = STATE(261),
    [aux_sym_integer_value_token1] = ACTIONS(76),
    [sym_identifier] = ACTIONS(78),
    [sym_comment] = ACTIONS(3),
    [aux_sym_float_value_token1] = ACTIONS(80),
    [sym_plain_value] = ACTIONS(901),
    [anon_sym_LPAREN2] = ACTIONS(84),
    [sym_string_value] = ACTIONS(903),
    [anon_sym_POUND] = ACTIONS(88),
  },
  [277] = {
    [sym__descendant_operator] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(37),
    [anon_sym_COLON] = ACTIONS(905),
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
  [37] = {.count = 1, .reusable = true}, REDUCE(sym__selector, 1, .production_id = 1),
  [39] = {.count = 2, .reusable = false}, REDUCE(sym__selector, 1, .production_id = 1), SHIFT(20),
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
  [76] = {.count = 1, .reusable = false}, SHIFT(178),
  [78] = {.count = 1, .reusable = false}, SHIFT(177),
  [80] = {.count = 1, .reusable = false}, SHIFT(179),
  [82] = {.count = 1, .reusable = false}, SHIFT(36),
  [84] = {.count = 1, .reusable = true}, SHIFT(274),
  [86] = {.count = 1, .reusable = true}, SHIFT(36),
  [88] = {.count = 1, .reusable = true}, SHIFT(232),
  [90] = {.count = 1, .reusable = true}, SHIFT(37),
  [92] = {.count = 1, .reusable = true}, SHIFT(38),
  [94] = {.count = 1, .reusable = true}, SHIFT(39),
  [96] = {.count = 1, .reusable = true}, SHIFT(40),
  [98] = {.count = 1, .reusable = true}, SHIFT(43),
  [100] = {.count = 1, .reusable = true}, SHIFT(44),
  [102] = {.count = 1, .reusable = true}, SHIFT(45),
  [104] = {.count = 1, .reusable = true}, SHIFT(46),
  [106] = {.count = 1, .reusable = false}, SHIFT(47),
  [108] = {.count = 1, .reusable = true}, SHIFT(48),
  [110] = {.count = 1, .reusable = true}, SHIFT(49),
  [112] = {.count = 1, .reusable = true}, SHIFT(50),
  [114] = {.count = 1, .reusable = true}, SHIFT(51),
  [116] = {.count = 1, .reusable = true}, SHIFT(52),
  [118] = {.count = 1, .reusable = true}, REDUCE(sym_selectors, 1),
  [120] = {.count = 1, .reusable = true}, SHIFT(53),
  [122] = {.count = 1, .reusable = true}, SHIFT(54),
  [124] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [126] = {.count = 1, .reusable = true}, REDUCE(sym_stylesheet, 1),
  [128] = {.count = 1, .reusable = false}, SHIFT(213),
  [130] = {.count = 1, .reusable = false}, SHIFT(212),
  [132] = {.count = 1, .reusable = false}, SHIFT(214),
  [134] = {.count = 1, .reusable = false}, SHIFT(58),
  [136] = {.count = 1, .reusable = true}, SHIFT(276),
  [138] = {.count = 1, .reusable = true}, SHIFT(58),
  [140] = {.count = 1, .reusable = true}, SHIFT(258),
  [142] = {.count = 1, .reusable = false}, SHIFT(60),
  [144] = {.count = 1, .reusable = true}, REDUCE(sym__query, 1, .production_id = 2),
  [146] = {.count = 1, .reusable = true}, SHIFT(62),
  [148] = {.count = 1, .reusable = true}, SHIFT(63),
  [150] = {.count = 1, .reusable = true}, SHIFT(64),
  [152] = {.count = 1, .reusable = false}, REDUCE(sym__value, 1, .production_id = 3),
  [154] = {.count = 1, .reusable = true}, REDUCE(sym__value, 1, .production_id = 3),
  [156] = {.count = 1, .reusable = true}, SHIFT(67),
  [158] = {.count = 1, .reusable = false}, SHIFT(69),
  [160] = {.count = 1, .reusable = true}, SHIFT(69),
  [162] = {.count = 1, .reusable = false}, REDUCE(sym_integer_value, 1),
  [164] = {.count = 1, .reusable = true}, REDUCE(sym_integer_value, 1),
  [166] = {.count = 1, .reusable = false}, SHIFT(70),
  [168] = {.count = 1, .reusable = true}, SHIFT(71),
  [170] = {.count = 1, .reusable = false}, REDUCE(sym_float_value, 1),
  [172] = {.count = 1, .reusable = true}, REDUCE(sym_float_value, 1),
  [174] = {.count = 1, .reusable = false}, SHIFT(72),
  [176] = {.count = 1, .reusable = true}, SHIFT(73),
  [178] = {.count = 1, .reusable = false}, SHIFT(73),
  [180] = {.count = 1, .reusable = true}, SHIFT(74),
  [182] = {.count = 1, .reusable = true}, SHIFT(76),
  [184] = {.count = 1, .reusable = true}, SHIFT(78),
  [186] = {.count = 1, .reusable = true}, SHIFT(77),
  [188] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_element_selector, 2, .production_id = 4),
  [190] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_element_selector, 2, .production_id = 4),
  [192] = {.count = 1, .reusable = true}, SHIFT(79),
  [194] = {.count = 1, .reusable = true}, SHIFT(187),
  [196] = {.count = 1, .reusable = false}, SHIFT(187),
  [198] = {.count = 1, .reusable = true}, SHIFT(81),
  [200] = {.count = 1, .reusable = true}, SHIFT(82),
  [202] = {.count = 1, .reusable = true}, SHIFT(83),
  [204] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_selector, 2, .production_id = 5),
  [206] = {.count = 1, .reusable = true}, SHIFT(84),
  [208] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_selector, 2, .production_id = 5),
  [210] = {.count = 1, .reusable = true}, SHIFT(86),
  [212] = {.count = 1, .reusable = true}, SHIFT(87),
  [214] = {.count = 1, .reusable = false}, SHIFT(267),
  [216] = {.count = 1, .reusable = false}, SHIFT(268),
  [218] = {.count = 1, .reusable = false}, SHIFT(269),
  [220] = {.count = 1, .reusable = false}, SHIFT(270),
  [222] = {.count = 1, .reusable = false}, SHIFT(271),
  [224] = {.count = 1, .reusable = false}, SHIFT(229),
  [226] = {.count = 1, .reusable = false}, SHIFT(272),
  [228] = {.count = 1, .reusable = true}, REDUCE(sym_at_rule, 2),
  [230] = {.count = 1, .reusable = false}, REDUCE(sym_at_rule, 2),
  [232] = {.count = 1, .reusable = true}, SHIFT(90),
  [234] = {.count = 1, .reusable = true}, REDUCE(sym_class_selector, 2, .production_id = 5),
  [236] = {.count = 1, .reusable = false}, REDUCE(sym_class_selector, 2, .production_id = 5),
  [238] = {.count = 1, .reusable = true}, REDUCE(sym_id_selector, 2, .production_id = 6),
  [240] = {.count = 1, .reusable = false}, REDUCE(sym_id_selector, 2, .production_id = 6),
  [242] = {.count = 1, .reusable = true}, SHIFT(93),
  [244] = {.count = 1, .reusable = true}, SHIFT(94),
  [246] = {.count = 1, .reusable = true}, SHIFT(95),
  [248] = {.count = 1, .reusable = true}, SHIFT(96),
  [250] = {.count = 1, .reusable = true}, SHIFT(97),
  [252] = {.count = 1, .reusable = true}, SHIFT(98),
  [254] = {.count = 1, .reusable = true}, SHIFT(99),
  [256] = {.count = 1, .reusable = true}, SHIFT(100),
  [258] = {.count = 1, .reusable = true}, SHIFT(101),
  [260] = {.count = 1, .reusable = true}, SHIFT(102),
  [262] = {.count = 1, .reusable = true}, SHIFT(103),
  [264] = {.count = 1, .reusable = true}, REDUCE(sym_selectors, 2),
  [266] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(6),
  [269] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(3),
  [272] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(4),
  [275] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(5),
  [278] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(2),
  [281] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(7),
  [284] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(16),
  [287] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(8),
  [290] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(9),
  [293] = {.count = 1, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2),
  [295] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(10),
  [298] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(11),
  [301] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(14),
  [304] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(13),
  [307] = {.count = 2, .reusable = false}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(12),
  [310] = {.count = 2, .reusable = true}, REDUCE(aux_sym_stylesheet_repeat1, 2), SHIFT_REPEAT(15),
  [313] = {.count = 1, .reusable = true}, REDUCE(sym_rule_set, 2),
  [315] = {.count = 1, .reusable = false}, REDUCE(sym_rule_set, 2),
  [317] = {.count = 1, .reusable = true}, SHIFT(219),
  [319] = {.count = 1, .reusable = true}, SHIFT(106),
  [321] = {.count = 1, .reusable = false}, SHIFT(108),
  [323] = {.count = 1, .reusable = true}, SHIFT(108),
  [325] = {.count = 1, .reusable = false}, SHIFT(219),
  [327] = {.count = 1, .reusable = true}, SHIFT(105),
  [329] = {.count = 1, .reusable = true}, SHIFT(107),
  [331] = {.count = 1, .reusable = true}, REDUCE(sym_unary_query, 2),
  [333] = {.count = 1, .reusable = true}, SHIFT(110),
  [335] = {.count = 1, .reusable = true}, SHIFT(111),
  [337] = {.count = 1, .reusable = true}, SHIFT(112),
  [339] = {.count = 1, .reusable = true}, REDUCE(sym_media_statement, 3),
  [341] = {.count = 1, .reusable = false}, REDUCE(sym_media_statement, 3),
  [343] = {.count = 1, .reusable = true}, SHIFT(117),
  [345] = {.count = 1, .reusable = false}, SHIFT(118),
  [347] = {.count = 1, .reusable = true}, SHIFT(118),
  [349] = {.count = 1, .reusable = false}, REDUCE(sym_call_expression, 2, .production_id = 7),
  [351] = {.count = 1, .reusable = true}, REDUCE(sym_call_expression, 2, .production_id = 7),
  [353] = {.count = 1, .reusable = true}, SHIFT(120),
  [355] = {.count = 1, .reusable = false}, REDUCE(sym_integer_value, 2),
  [357] = {.count = 1, .reusable = true}, REDUCE(sym_integer_value, 2),
  [359] = {.count = 1, .reusable = false}, REDUCE(sym_color_value, 2),
  [361] = {.count = 1, .reusable = true}, REDUCE(sym_color_value, 2),
  [363] = {.count = 1, .reusable = false}, REDUCE(sym_float_value, 2),
  [365] = {.count = 1, .reusable = true}, REDUCE(sym_float_value, 2),
  [367] = {.count = 1, .reusable = false}, SHIFT(121),
  [369] = {.count = 1, .reusable = true}, SHIFT(121),
  [371] = {.count = 1, .reusable = true}, REDUCE(sym_import_statement, 3),
  [373] = {.count = 1, .reusable = false}, REDUCE(sym_import_statement, 3),
  [375] = {.count = 1, .reusable = true}, SHIFT(122),
  [377] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_statement, 3),
  [379] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_statement, 3),
  [381] = {.count = 1, .reusable = true}, SHIFT(124),
  [383] = {.count = 1, .reusable = true}, SHIFT(228),
  [385] = {.count = 1, .reusable = true}, SHIFT(125),
  [387] = {.count = 1, .reusable = true}, SHIFT(126),
  [389] = {.count = 1, .reusable = true}, REDUCE(sym_keyframes_statement, 3, .production_id = 8),
  [391] = {.count = 1, .reusable = false}, REDUCE(sym_keyframes_statement, 3, .production_id = 8),
  [393] = {.count = 1, .reusable = true}, REDUCE(sym_charset_statement, 3),
  [395] = {.count = 1, .reusable = false}, REDUCE(sym_charset_statement, 3),
  [397] = {.count = 1, .reusable = false}, SHIFT(128),
  [399] = {.count = 1, .reusable = true}, SHIFT(128),
  [401] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_selector, 3, .production_id = 9),
  [403] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_selector, 3, .production_id = 9),
  [405] = {.count = 1, .reusable = false}, SHIFT(129),
  [407] = {.count = 1, .reusable = true}, SHIFT(130),
  [409] = {.count = 1, .reusable = true}, SHIFT(131),
  [411] = {.count = 1, .reusable = true}, SHIFT(133),
  [413] = {.count = 1, .reusable = false}, SHIFT(14),
  [415] = {.count = 1, .reusable = true}, SHIFT(132),
  [417] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 5),
  [419] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 5),
  [421] = {.count = 1, .reusable = true}, REDUCE(sym_block, 2),
  [423] = {.count = 1, .reusable = false}, REDUCE(sym_block, 2),
  [425] = {.count = 1, .reusable = false}, SHIFT(135),
  [427] = {.count = 1, .reusable = true}, SHIFT(136),
  [429] = {.count = 1, .reusable = true}, REDUCE(sym_at_rule, 3),
  [431] = {.count = 1, .reusable = false}, REDUCE(sym_at_rule, 3),
  [433] = {.count = 1, .reusable = true}, SHIFT(139),
  [435] = {.count = 1, .reusable = true}, REDUCE(sym_supports_statement, 3),
  [437] = {.count = 1, .reusable = false}, REDUCE(sym_supports_statement, 3),
  [439] = {.count = 1, .reusable = false}, REDUCE(sym__selector, 1, .production_id = 1),
  [441] = {.count = 1, .reusable = true}, REDUCE(sym_descendant_selector, 3),
  [443] = {.count = 1, .reusable = false}, REDUCE(sym_descendant_selector, 3),
  [445] = {.count = 1, .reusable = true}, SHIFT(140),
  [447] = {.count = 1, .reusable = true}, SHIFT(141),
  [449] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 10),
  [451] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_selector, 3, .production_id = 10),
  [453] = {.count = 1, .reusable = true}, REDUCE(sym_class_selector, 3, .production_id = 10),
  [455] = {.count = 1, .reusable = false}, REDUCE(sym_class_selector, 3, .production_id = 10),
  [457] = {.count = 1, .reusable = true}, REDUCE(sym_sibling_selector, 3),
  [459] = {.count = 1, .reusable = false}, REDUCE(sym_sibling_selector, 3),
  [461] = {.count = 1, .reusable = true}, REDUCE(aux_sym_selectors_repeat1, 2),
  [463] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 11),
  [465] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_element_selector, 3, .production_id = 11),
  [467] = {.count = 1, .reusable = true}, REDUCE(sym_child_selector, 3),
  [469] = {.count = 1, .reusable = false}, REDUCE(sym_child_selector, 3),
  [471] = {.count = 1, .reusable = true}, REDUCE(sym_adjacent_sibling_selector, 3),
  [473] = {.count = 1, .reusable = false}, REDUCE(sym_adjacent_sibling_selector, 3),
  [475] = {.count = 1, .reusable = true}, REDUCE(sym_id_selector, 3, .production_id = 12),
  [477] = {.count = 1, .reusable = false}, REDUCE(sym_id_selector, 3, .production_id = 12),
  [479] = {.count = 2, .reusable = true}, REDUCE(aux_sym_selectors_repeat1, 2), SHIFT_REPEAT(50),
  [482] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 4, .production_id = 13),
  [484] = {.count = 1, .reusable = false}, REDUCE(sym_declaration, 4, .production_id = 13),
  [486] = {.count = 1, .reusable = true}, SHIFT(143),
  [488] = {.count = 1, .reusable = false}, SHIFT(144),
  [490] = {.count = 1, .reusable = true}, SHIFT(144),
  [492] = {.count = 1, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 1),
  [494] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 1),
  [496] = {.count = 1, .reusable = true}, SHIFT(145),
  [498] = {.count = 1, .reusable = true}, REDUCE(sym_parenthesized_query, 3),
  [500] = {.count = 1, .reusable = true}, SHIFT(148),
  [502] = {.count = 1, .reusable = true}, REDUCE(aux_sym_import_statement_repeat1, 2),
  [504] = {.count = 1, .reusable = true}, REDUCE(sym_binary_query, 3),
  [506] = {.count = 2, .reusable = true}, REDUCE(aux_sym_import_statement_repeat1, 2), SHIFT_REPEAT(63),
  [509] = {.count = 1, .reusable = true}, REDUCE(sym_media_statement, 4),
  [511] = {.count = 1, .reusable = false}, REDUCE(sym_media_statement, 4),
  [513] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 2),
  [515] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 2),
  [517] = {.count = 1, .reusable = false}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 1),
  [519] = {.count = 1, .reusable = true}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 1),
  [521] = {.count = 1, .reusable = true}, SHIFT(149),
  [523] = {.count = 1, .reusable = true}, SHIFT(150),
  [525] = {.count = 1, .reusable = false}, REDUCE(sym_parenthesized_value, 3),
  [527] = {.count = 1, .reusable = true}, REDUCE(sym_parenthesized_value, 3),
  [529] = {.count = 1, .reusable = false}, REDUCE(sym_binary_expression, 3),
  [531] = {.count = 1, .reusable = true}, REDUCE(sym_binary_expression, 3),
  [533] = {.count = 1, .reusable = true}, REDUCE(sym_import_statement, 4),
  [535] = {.count = 1, .reusable = false}, REDUCE(sym_import_statement, 4),
  [537] = {.count = 1, .reusable = true}, SHIFT(153),
  [539] = {.count = 1, .reusable = true}, REDUCE(sym_namespace_statement, 4, .production_id = 14),
  [541] = {.count = 1, .reusable = false}, REDUCE(sym_namespace_statement, 4, .production_id = 14),
  [543] = {.count = 1, .reusable = true}, REDUCE(sym_keyframe_block_list, 2),
  [545] = {.count = 1, .reusable = false}, REDUCE(sym_keyframe_block_list, 2),
  [547] = {.count = 1, .reusable = true}, SHIFT(259),
  [549] = {.count = 1, .reusable = true}, SHIFT(155),
  [551] = {.count = 1, .reusable = true}, SHIFT(157),
  [553] = {.count = 1, .reusable = true}, SHIFT(260),
  [555] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_arguments, 2),
  [557] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_arguments, 2),
  [559] = {.count = 1, .reusable = true}, REDUCE(sym__selector, 1),
  [561] = {.count = 1, .reusable = false}, REDUCE(sym__value, 1),
  [563] = {.count = 1, .reusable = true}, REDUCE(sym__value, 1),
  [565] = {.count = 1, .reusable = false}, REDUCE(sym__selector, 1),
  [567] = {.count = 1, .reusable = false}, SHIFT(44),
  [569] = {.count = 1, .reusable = false}, SHIFT(217),
  [571] = {.count = 1, .reusable = true}, SHIFT(159),
  [573] = {.count = 1, .reusable = true}, SHIFT(158),
  [575] = {.count = 1, .reusable = false}, SHIFT(161),
  [577] = {.count = 1, .reusable = true}, SHIFT(161),
  [579] = {.count = 1, .reusable = true}, REDUCE(sym_block, 3),
  [581] = {.count = 1, .reusable = false}, REDUCE(sym_block, 3),
  [583] = {.count = 1, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2),
  [585] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(6),
  [588] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(267),
  [591] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(268),
  [594] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(269),
  [597] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(277),
  [600] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(7),
  [603] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(16),
  [606] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(270),
  [609] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(271),
  [612] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(10),
  [615] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(11),
  [618] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(14),
  [621] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(272),
  [624] = {.count = 2, .reusable = false}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(229),
  [627] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(15),
  [630] = {.count = 1, .reusable = true}, SHIFT(162),
  [632] = {.count = 1, .reusable = true}, REDUCE(sym_at_rule, 4),
  [634] = {.count = 1, .reusable = false}, REDUCE(sym_at_rule, 4),
  [636] = {.count = 1, .reusable = false}, SHIFT(163),
  [638] = {.count = 1, .reusable = true}, SHIFT(163),
  [640] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_selector, 4, .production_id = 15),
  [642] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_selector, 4, .production_id = 15),
  [644] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_selector, 4, .production_id = 10),
  [646] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_selector, 4, .production_id = 10),
  [648] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 5, .production_id = 13),
  [650] = {.count = 1, .reusable = false}, REDUCE(sym_declaration, 5, .production_id = 13),
  [652] = {.count = 1, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2),
  [654] = {.count = 1, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2),
  [656] = {.count = 1, .reusable = true}, SHIFT(164),
  [658] = {.count = 2, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(213),
  [661] = {.count = 2, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(212),
  [664] = {.count = 2, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(108),
  [667] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(108),
  [670] = {.count = 2, .reusable = false}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(214),
  [673] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(107),
  [676] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(276),
  [679] = {.count = 2, .reusable = true}, REDUCE(aux_sym_declaration_repeat1, 2), SHIFT_REPEAT(258),
  [682] = {.count = 1, .reusable = true}, SHIFT(165),
  [684] = {.count = 1, .reusable = true}, REDUCE(sym_selector_query, 4),
  [686] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 3),
  [688] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 3),
  [690] = {.count = 1, .reusable = true}, SHIFT(167),
  [692] = {.count = 2, .reusable = false}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(213),
  [695] = {.count = 2, .reusable = false}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(212),
  [698] = {.count = 1, .reusable = true}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2),
  [700] = {.count = 2, .reusable = false}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(118),
  [703] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(118),
  [706] = {.count = 2, .reusable = false}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(214),
  [709] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(276),
  [712] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pseudo_class_arguments_repeat1, 2), SHIFT_REPEAT(258),
  [715] = {.count = 1, .reusable = true}, REDUCE(sym_import_statement, 5),
  [717] = {.count = 1, .reusable = false}, REDUCE(sym_import_statement, 5),
  [719] = {.count = 1, .reusable = true}, REDUCE(sym_keyframe_block, 2),
  [721] = {.count = 1, .reusable = true}, REDUCE(sym_keyframe_block_list, 3),
  [723] = {.count = 1, .reusable = false}, REDUCE(sym_keyframe_block_list, 3),
  [725] = {.count = 1, .reusable = true}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2),
  [727] = {.count = 2, .reusable = true}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(228),
  [730] = {.count = 2, .reusable = true}, REDUCE(aux_sym_keyframe_block_list_repeat1, 2), SHIFT_REPEAT(126),
  [733] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_selector, 5, .production_id = 9),
  [735] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_selector, 5, .production_id = 9),
  [737] = {.count = 1, .reusable = true}, SHIFT(169),
  [739] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_arguments, 3),
  [741] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_arguments, 3),
  [743] = {.count = 1, .reusable = true}, SHIFT(171),
  [745] = {.count = 1, .reusable = true}, REDUCE(sym_last_declaration, 3, .production_id = 13),
  [747] = {.count = 1, .reusable = true}, SHIFT(173),
  [749] = {.count = 1, .reusable = true}, SHIFT(195),
  [751] = {.count = 1, .reusable = true}, REDUCE(sym_block, 4),
  [753] = {.count = 1, .reusable = false}, REDUCE(sym_block, 4),
  [755] = {.count = 1, .reusable = true}, SHIFT(175),
  [757] = {.count = 1, .reusable = true}, REDUCE(sym_declaration, 6, .production_id = 13),
  [759] = {.count = 1, .reusable = false}, REDUCE(sym_declaration, 6, .production_id = 13),
  [761] = {.count = 1, .reusable = true}, REDUCE(sym_feature_query, 5, .production_id = 16),
  [763] = {.count = 1, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2),
  [765] = {.count = 1, .reusable = false}, REDUCE(sym_arguments, 4),
  [767] = {.count = 1, .reusable = true}, REDUCE(sym_arguments, 4),
  [769] = {.count = 2, .reusable = true}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(150),
  [772] = {.count = 1, .reusable = true}, REDUCE(aux_sym_pseudo_class_arguments_repeat2, 2),
  [774] = {.count = 1, .reusable = true}, REDUCE(sym_pseudo_class_arguments, 4),
  [776] = {.count = 1, .reusable = false}, REDUCE(sym_pseudo_class_arguments, 4),
  [778] = {.count = 2, .reusable = true}, REDUCE(aux_sym_pseudo_class_arguments_repeat2, 2), SHIFT_REPEAT(158),
  [781] = {.count = 1, .reusable = true}, REDUCE(sym_last_declaration, 4, .production_id = 13),
  [783] = {.count = 1, .reusable = true}, SHIFT(205),
  [785] = {.count = 1, .reusable = true}, SHIFT(176),
  [787] = {.count = 1, .reusable = true}, REDUCE(sym_attribute_selector, 6, .production_id = 15),
  [789] = {.count = 1, .reusable = false}, REDUCE(sym_attribute_selector, 6, .production_id = 15),
  [791] = {.count = 1, .reusable = true}, REDUCE(sym_last_declaration, 5, .production_id = 13),
  [793] = {.count = 1, .reusable = true}, SHIFT(210),
  [795] = {.count = 1, .reusable = true}, SHIFT(242),
  [797] = {.count = 1, .reusable = true}, SHIFT(184),
  [799] = {.count = 1, .reusable = true}, SHIFT(186),
  [801] = {.count = 1, .reusable = false}, SHIFT(199),
  [803] = {.count = 1, .reusable = true}, SHIFT(199),
  [805] = {.count = 1, .reusable = false}, SHIFT(216),
  [807] = {.count = 1, .reusable = false}, SHIFT(218),
  [809] = {.count = 1, .reusable = false}, SHIFT(223),
  [811] = {.count = 1, .reusable = true}, SHIFT(223),
  [813] = {.count = 1, .reusable = true}, SHIFT(70),
  [815] = {.count = 1, .reusable = true}, SHIFT(237),
  [817] = {.count = 1, .reusable = true}, SHIFT(180),
  [819] = {.count = 1, .reusable = true}, SHIFT(185),
  [821] = {.count = 1, .reusable = true}, SHIFT(188),
  [823] = {.count = 1, .reusable = true}, SHIFT(189),
  [825] = {.count = 1, .reusable = true}, SHIFT(246),
  [827] = {.count = 1, .reusable = true}, SHIFT(191),
  [829] = {.count = 1, .reusable = true}, SHIFT(192),
  [831] = {.count = 1, .reusable = true}, SHIFT(193),
  [833] = {.count = 1, .reusable = true}, SHIFT(250),
  [835] = {.count = 1, .reusable = true}, SHIFT(197),
  [837] = {.count = 1, .reusable = true}, SHIFT(198),
  [839] = {.count = 1, .reusable = true}, SHIFT(200),
  [841] = {.count = 1, .reusable = true}, SHIFT(201),
  [843] = {.count = 1, .reusable = true}, SHIFT(202),
  [845] = {.count = 1, .reusable = true}, SHIFT(203),
  [847] = {.count = 1, .reusable = true}, SHIFT(204),
  [849] = {.count = 1, .reusable = true}, SHIFT(256),
  [851] = {.count = 1, .reusable = true}, SHIFT(206),
  [853] = {.count = 1, .reusable = true}, SHIFT(207),
  [855] = {.count = 1, .reusable = true}, SHIFT(208),
  [857] = {.count = 1, .reusable = true}, SHIFT(209),
  [859] = {.count = 1, .reusable = true}, SHIFT(211),
  [861] = {.count = 1, .reusable = true}, SHIFT(217),
  [863] = {.count = 1, .reusable = true}, SHIFT(220),
  [865] = {.count = 1, .reusable = true}, SHIFT(221),
  [867] = {.count = 1, .reusable = true}, SHIFT(222),
  [869] = {.count = 1, .reusable = true}, SHIFT(224),
  [871] = {.count = 1, .reusable = true}, SHIFT(225),
  [873] = {.count = 1, .reusable = true}, SHIFT(226),
  [875] = {.count = 1, .reusable = true}, SHIFT(227),
  [877] = {.count = 1, .reusable = false}, SHIFT(233),
  [879] = {.count = 1, .reusable = true}, SHIFT(233),
  [881] = {.count = 1, .reusable = true}, SHIFT(234),
  [883] = {.count = 1, .reusable = true}, SHIFT(275),
  [885] = {.count = 1, .reusable = true}, SHIFT(235),
  [887] = {.count = 1, .reusable = false}, SHIFT(236),
  [889] = {.count = 1, .reusable = true}, SHIFT(236),
  [891] = {.count = 1, .reusable = false}, SHIFT(240),
  [893] = {.count = 1, .reusable = true}, SHIFT(240),
  [895] = {.count = 1, .reusable = false}, SHIFT(243),
  [897] = {.count = 1, .reusable = true}, SHIFT(243),
  [899] = {.count = 1, .reusable = true}, SHIFT(245),
  [901] = {.count = 1, .reusable = false}, SHIFT(261),
  [903] = {.count = 1, .reusable = true}, SHIFT(261),
  [905] = {.count = 2, .reusable = false}, REDUCE(sym__selector, 1, .production_id = 1), SHIFT(273),
};

void *tree_sitter_css_external_scanner_create(void);
void tree_sitter_css_external_scanner_destroy(void *);
bool tree_sitter_css_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_css_external_scanner_serialize(void *, char *);
void tree_sitter_css_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_css(void) {
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
    .field_count = FIELD_COUNT,
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
